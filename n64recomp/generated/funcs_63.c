#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_80264800_func_802662CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802662CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802662D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802662D4: lb          $t6, 0x1F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X1F);
    // 0x802662D8: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802662DC: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x802662E0: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x802662E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802662E8: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x802662EC: lhu         $a1, -0x6AB8($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X6AB8);
    // 0x802662F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802662F4: jal         0x8004CD24
    // 0x802662F8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x802662F8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_0:
    // 0x802662FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80266300: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80266304: jal         0x8002135C
    // 0x80266308: addiu       $a2, $zero, 0xA9
    ctx->r6 = ADD32(0, 0XA9);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x80266308: addiu       $a2, $zero, 0xA9
    ctx->r6 = ADD32(0, 0XA9);
    after_1:
    // 0x8026630C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80266310: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80266314: jr          $ra
    // 0x80266318: nop

    return;
    // 0x80266318: nop

;}
RECOMP_FUNC void ovl_80264800_func_8026631C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026631C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80266320: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80266324: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80266328: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026632C: addiu       $a1, $zero, 0x3C9
    ctx->r5 = ADD32(0, 0X3C9);
    // 0x80266330: jal         0x8004CD24
    // 0x80266334: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x80266334: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_0:
    // 0x80266338: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026633C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80266340: jal         0x8002135C
    // 0x80266344: addiu       $a2, $zero, 0xA3
    ctx->r6 = ADD32(0, 0XA3);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x80266344: addiu       $a2, $zero, 0xA3
    ctx->r6 = ADD32(0, 0XA3);
    after_1:
    // 0x80266348: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026634C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80266350: jr          $ra
    // 0x80266354: nop

    return;
    // 0x80266354: nop

;}
RECOMP_FUNC void ovl_80264800_func_80266358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266358: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026635C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80266360: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80266364: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80266368: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026636C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80266370: jal         0x8004CD24
    // 0x80266374: addiu       $a1, $zero, 0x3CA
    ctx->r5 = ADD32(0, 0X3CA);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x80266374: addiu       $a1, $zero, 0x3CA
    ctx->r5 = ADD32(0, 0X3CA);
    after_0:
    // 0x80266378: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x8026637C: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80266380: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x80266384: lbu         $a2, -0x6A14($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X6A14);
    // 0x80266388: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026638C: jal         0x8002135C
    // 0x80266390: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x80266390: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x80266394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80266398: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026639C: jr          $ra
    // 0x802663A0: nop

    return;
    // 0x802663A0: nop

;}
RECOMP_FUNC void ovl_80264800_func_802663A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802663A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802663A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802663AC: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x802663B0: jal         0x80029354
    // 0x802663B4: addiu       $a0, $a0, 0x6400
    ctx->r4 = ADD32(ctx->r4, 0X6400);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x802663B4: addiu       $a0, $a0, 0x6400
    ctx->r4 = ADD32(ctx->r4, 0X6400);
    after_0:
    // 0x802663B8: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x802663BC: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x802663C0: addiu       $a3, $a3, -0x818
    ctx->r7 = ADD32(ctx->r7, -0X818);
    // 0x802663C4: addiu       $a1, $zero, 0x3C3
    ctx->r5 = ADD32(0, 0X3C3);
    // 0x802663C8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x802663CC: jal         0x8004CD24
    // 0x802663D0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x802663D0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x802663D4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802663D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802663DC: jal         0x8002135C
    // 0x802663E0: addiu       $a2, $zero, 0xA6
    ctx->r6 = ADD32(0, 0XA6);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x802663E0: addiu       $a2, $zero, 0xA6
    ctx->r6 = ADD32(0, 0XA6);
    after_2:
    // 0x802663E4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802663E8: jal         0x8004CD90
    // 0x802663EC: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    func_8004CD90(rdram, ctx);
        goto after_3;
    // 0x802663EC: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    after_3:
    // 0x802663F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802663F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802663F8: jr          $ra
    // 0x802663FC: nop

    return;
    // 0x802663FC: nop

;}
RECOMP_FUNC void ovl_80264800_func_80266400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266400: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80266404: nop

    // 0x80266408: lbu         $t6, 0x38($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X38);
    // 0x8026640C: nop

    // 0x80266410: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x80266414: beq         $at, $zero, L_80266468
    if (ctx->r1 == 0) {
        // 0x80266418: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80266468;
    }
    // 0x80266418: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8026641C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80266420: addu        $at, $at, $t6
    gpr jr_addend_8026642C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80266424: lw          $t6, -0x6590($at)
    ctx->r14 = ADD32(ctx->r1, -0X6590);
    // 0x80266428: nop

    // 0x8026642C: jr          $t6
    // 0x80266430: nop

    switch (jr_addend_8026642C >> 2) {
        case 0: goto L_80266434; break;
        case 1: goto L_80266434; break;
        case 2: goto L_80266464; break;
        case 3: goto L_80266464; break;
        case 4: goto L_8026644C; break;
        case 5: goto L_80266434; break;
        default: switch_error(__func__, 0x8026642C, 0x80269A70);
    }
    // 0x80266430: nop

L_80266434:
    // 0x80266434: lui         $t7, 0x803D
    ctx->r15 = S32(0X803D << 16);
    // 0x80266438: addiu       $t7, $t7, -0x818
    ctx->r15 = ADD32(ctx->r15, -0X818);
    // 0x8026643C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80266440: sw          $t7, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r15;
    // 0x80266444: jr          $ra
    // 0x80266448: sb          $t8, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r24;
    return;
    // 0x80266448: sb          $t8, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r24;
L_8026644C:
    // 0x8026644C: lui         $t9, 0x803D
    ctx->r25 = S32(0X803D << 16);
    // 0x80266450: addiu       $t9, $t9, 0xCE8
    ctx->r25 = ADD32(ctx->r25, 0XCE8);
    // 0x80266454: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80266458: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
    // 0x8026645C: jr          $ra
    // 0x80266460: sb          $t0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r8;
    return;
    // 0x80266460: sb          $t0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r8;
L_80266464:
    // 0x80266464: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
L_80266468:
    // 0x80266468: jr          $ra
    // 0x8026646C: nop

    return;
    // 0x8026646C: nop

;}
RECOMP_FUNC void ovl_80264800_func_8026641C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026641C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80266420: addu        $at, $at, $t6
    gpr jr_addend_8026642C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80266424: lw          $t6, -0x6590($at)
    ctx->r14 = ADD32(ctx->r1, -0X6590);
    // 0x80266428: nop

    // 0x8026642C: jr          $t6
    // 0x80266430: nop

    switch (jr_addend_8026642C >> 2) {
        case 0: goto L_80266434; break;
        case 1: goto L_80266434; break;
        case 2: goto L_80266464; break;
        case 3: goto L_80266464; break;
        case 4: goto L_8026644C; break;
        case 5: goto L_80266434; break;
        default: switch_error(__func__, 0x8026642C, 0x80269A70);
    }
    // 0x80266430: nop

L_80266434:
    // 0x80266434: lui         $t7, 0x803D
    ctx->r15 = S32(0X803D << 16);
    // 0x80266438: addiu       $t7, $t7, -0x818
    ctx->r15 = ADD32(ctx->r15, -0X818);
    // 0x8026643C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80266440: sw          $t7, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r15;
    // 0x80266444: jr          $ra
    // 0x80266448: sb          $t8, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r24;
    return;
    // 0x80266448: sb          $t8, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r24;
L_8026644C:
    // 0x8026644C: lui         $t9, 0x803D
    ctx->r25 = S32(0X803D << 16);
    // 0x80266450: addiu       $t9, $t9, 0xCE8
    ctx->r25 = ADD32(ctx->r25, 0XCE8);
    // 0x80266454: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80266458: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
    // 0x8026645C: jr          $ra
    // 0x80266460: sb          $t0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r8;
    return;
    // 0x80266460: sb          $t0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r8;
L_80266464:
    // 0x80266464: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x80266468: jr          $ra
    // 0x8026646C: nop

    return;
    // 0x8026646C: nop

;}
RECOMP_FUNC void ovl_80264800_func_80266464(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266464: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x80266468: jr          $ra
    // 0x8026646C: nop

    return;
    // 0x8026646C: nop

;}
RECOMP_FUNC void ovl_80264800_func_80266470(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266470: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80266474: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80266478: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8026647C: jal         0x80029354
    // 0x80266480: addiu       $a0, $a0, 0x64C0
    ctx->r4 = ADD32(ctx->r4, 0X64C0);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x80266480: addiu       $a0, $a0, 0x64C0
    ctx->r4 = ADD32(ctx->r4, 0X64C0);
    after_0:
    // 0x80266484: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x80266488: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x8026648C: addiu       $a3, $a3, -0x434
    ctx->r7 = ADD32(ctx->r7, -0X434);
    // 0x80266490: addiu       $a1, $zero, 0x3C5
    ctx->r5 = ADD32(0, 0X3C5);
    // 0x80266494: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80266498: jal         0x8004CD24
    // 0x8026649C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x8026649C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x802664A0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802664A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802664A8: jal         0x8002135C
    // 0x802664AC: addiu       $a2, $zero, 0xAB
    ctx->r6 = ADD32(0, 0XAB);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x802664AC: addiu       $a2, $zero, 0xAB
    ctx->r6 = ADD32(0, 0XAB);
    after_2:
    // 0x802664B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802664B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802664B8: jr          $ra
    // 0x802664BC: nop

    return;
    // 0x802664BC: nop

;}
RECOMP_FUNC void ovl_80264800_func_802664C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802664C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802664C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802664C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802664CC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x802664D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802664D4: lb          $t6, 0x38($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X38);
    // 0x802664D8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x802664DC: bne         $t6, $at, L_80266578
    if (ctx->r14 != ctx->r1) {
        // 0x802664E0: nop
    
            goto L_80266578;
    }
    // 0x802664E0: nop

    // 0x802664E4: lb          $t7, 0x43($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X43);
    // 0x802664E8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802664EC: bne         $t7, $at, L_8026654C
    if (ctx->r15 != ctx->r1) {
        // 0x802664F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8026654C;
    }
    // 0x802664F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802664F4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802664F8: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x802664FC: addiu       $a3, $a3, -0x434
    ctx->r7 = ADD32(ctx->r7, -0X434);
    // 0x80266500: addiu       $a1, $zero, 0x3C5
    ctx->r5 = ADD32(0, 0X3C5);
    // 0x80266504: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80266508: jal         0x8004CD24
    // 0x8026650C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8026650C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_0:
    // 0x80266510: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80266514: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80266518: lb          $a0, 0x3D($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X3D);
    // 0x8026651C: jal         0x8001D4C0
    // 0x80266520: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8001D4C0(rdram, ctx);
        goto after_1;
    // 0x80266520: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x80266524: sll         $t8, $v0, 24
    ctx->r24 = S32(ctx->r2 << 24);
    // 0x80266528: sra         $t9, $t8, 24
    ctx->r25 = S32(SIGNED(ctx->r24) >> 24);
    // 0x8026652C: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x80266530: addu        $a2, $a2, $t9
    ctx->r6 = ADD32(ctx->r6, ctx->r25);
    // 0x80266534: lbu         $a2, -0x69C8($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X69C8);
    // 0x80266538: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026653C: jal         0x8002135C
    // 0x80266540: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80266540: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80266544: b           L_80266580
    // 0x80266548: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80266580;
    // 0x80266548: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026654C:
    // 0x8026654C: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x80266550: addiu       $a3, $a3, -0x374
    ctx->r7 = ADD32(ctx->r7, -0X374);
    // 0x80266554: addiu       $a1, $zero, 0x3C4
    ctx->r5 = ADD32(0, 0X3C4);
    // 0x80266558: jal         0x8004CD24
    // 0x8026655C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8004CD24(rdram, ctx);
        goto after_3;
    // 0x8026655C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80266560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266564: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80266568: jal         0x8002135C
    // 0x8026656C: addiu       $a2, $zero, 0xA5
    ctx->r6 = ADD32(0, 0XA5);
    func_8002135C(rdram, ctx);
        goto after_4;
    // 0x8026656C: addiu       $a2, $zero, 0xA5
    ctx->r6 = ADD32(0, 0XA5);
    after_4:
    // 0x80266570: b           L_80266580
    // 0x80266574: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80266580;
    // 0x80266574: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80266578:
    // 0x80266578: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x8026657C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80266580:
    // 0x80266580: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80266584: jr          $ra
    // 0x80266588: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80266588: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_80264800_func_8026658C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026658C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80266590: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80266594: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80266598: jal         0x80029354
    // 0x8026659C: addiu       $a0, $a0, 0x65DC
    ctx->r4 = ADD32(ctx->r4, 0X65DC);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x8026659C: addiu       $a0, $a0, 0x65DC
    ctx->r4 = ADD32(ctx->r4, 0X65DC);
    after_0:
    // 0x802665A0: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x802665A4: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x802665A8: addiu       $a3, $a3, -0x428
    ctx->r7 = ADD32(ctx->r7, -0X428);
    // 0x802665AC: addiu       $a1, $zero, 0x3C2
    ctx->r5 = ADD32(0, 0X3C2);
    // 0x802665B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802665B4: jal         0x8004CD24
    // 0x802665B8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x802665B8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x802665BC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802665C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802665C4: jal         0x8002135C
    // 0x802665C8: addiu       $a2, $zero, 0xA2
    ctx->r6 = ADD32(0, 0XA2);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x802665C8: addiu       $a2, $zero, 0xA2
    ctx->r6 = ADD32(0, 0XA2);
    after_2:
    // 0x802665CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802665D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802665D4: jr          $ra
    // 0x802665D8: nop

    return;
    // 0x802665D8: nop

;}
RECOMP_FUNC void ovl_80264800_func_802665A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802665A0: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x802665A4: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x802665A8: addiu       $a3, $a3, -0x428
    ctx->r7 = ADD32(ctx->r7, -0X428);
    // 0x802665AC: addiu       $a1, $zero, 0x3C2
    ctx->r5 = ADD32(0, 0X3C2);
    // 0x802665B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802665B4: jal         0x8004CD24
    // 0x802665B8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x802665B8: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x802665BC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802665C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802665C4: jal         0x8002135C
    // 0x802665C8: addiu       $a2, $zero, 0xA2
    ctx->r6 = ADD32(0, 0XA2);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x802665C8: addiu       $a2, $zero, 0xA2
    ctx->r6 = ADD32(0, 0XA2);
    after_1:
    // 0x802665CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802665D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802665D4: jr          $ra
    // 0x802665D8: nop

    return;
    // 0x802665D8: nop

;}
RECOMP_FUNC void ovl_80264800_func_802665DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802665DC: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x802665E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802665E4: lb          $t6, 0x38($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X38);
    // 0x802665E8: nop

    // 0x802665EC: bne         $t6, $at, L_80266620
    if (ctx->r14 != ctx->r1) {
        // 0x802665F0: nop
    
            goto L_80266620;
    }
    // 0x802665F0: nop

    // 0x802665F4: lb          $t7, 0x43($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X43);
    // 0x802665F8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802665FC: bne         $t7, $at, L_80266614
    if (ctx->r15 != ctx->r1) {
        // 0x80266600: lui         $t9, 0x803D
        ctx->r25 = S32(0X803D << 16);
            goto L_80266614;
    }
    // 0x80266600: lui         $t9, 0x803D
    ctx->r25 = S32(0X803D << 16);
    // 0x80266604: lui         $t8, 0x803D
    ctx->r24 = S32(0X803D << 16);
    // 0x80266608: addiu       $t8, $t8, -0x428
    ctx->r24 = ADD32(ctx->r24, -0X428);
    // 0x8026660C: jr          $ra
    // 0x80266610: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    return;
    // 0x80266610: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
L_80266614:
    // 0x80266614: addiu       $t9, $t9, -0x368
    ctx->r25 = ADD32(ctx->r25, -0X368);
    // 0x80266618: jr          $ra
    // 0x8026661C: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
    return;
    // 0x8026661C: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
L_80266620:
    // 0x80266620: sw          $zero, 0x30($a1)
    MEM_W(0X30, ctx->r5) = 0;
    // 0x80266624: jr          $ra
    // 0x80266628: nop

    return;
    // 0x80266628: nop

;}
RECOMP_FUNC void ovl_80264800_func_8026662C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026662C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80266630: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80266634: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80266638: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8026663C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80266640: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80266644: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80266648: lui         $s5, 0x8026
    ctx->r21 = S32(0X8026 << 16);
    // 0x8026664C: lui         $s6, 0x801B
    ctx->r22 = S32(0X801B << 16);
    // 0x80266650: lui         $s7, 0x8027
    ctx->r23 = S32(0X8027 << 16);
    // 0x80266654: lui         $fp, 0x8027
    ctx->r30 = S32(0X8027 << 16);
    // 0x80266658: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8026665C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80266660: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80266664: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80266668: addiu       $fp, $fp, -0x6A08
    ctx->r30 = ADD32(ctx->r30, -0X6A08);
    // 0x8026666C: addiu       $s7, $s7, -0x69E8
    ctx->r23 = ADD32(ctx->r23, -0X69E8);
    // 0x80266670: addiu       $s6, $s6, 0x1CF0
    ctx->r22 = ADD32(ctx->r22, 0X1CF0);
    // 0x80266674: addiu       $s5, $s5, 0x6754
    ctx->r21 = ADD32(ctx->r21, 0X6754);
    // 0x80266678: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8026667C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80266680:
    // 0x80266680: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80266684: jal         0x800293DC
    // 0x80266688: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x80266688: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x8026668C: sb          $s3, 0x3C($v0)
    MEM_B(0X3C, ctx->r2) = ctx->r19;
    // 0x80266690: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x80266694: sll         $s1, $s2, 2
    ctx->r17 = S32(ctx->r18 << 2);
    // 0x80266698: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x8026669C: addu        $t8, $s7, $s1
    ctx->r24 = ADD32(ctx->r23, ctx->r17);
    // 0x802666A0: addu        $t7, $t6, $s2
    ctx->r15 = ADD32(ctx->r14, ctx->r18);
    // 0x802666A4: lb          $s4, 0x4C($t7)
    ctx->r20 = MEM_B(ctx->r15, 0X4C);
    // 0x802666A8: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x802666AC: jal         0x8026631C
    // 0x802666B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_80264800_func_8026631C(rdram, ctx);
        goto after_1;
    // 0x802666B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802666B4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x802666B8: sll         $a1, $s4, 24
    ctx->r5 = S32(ctx->r20 << 24);
    // 0x802666BC: addu        $t0, $fp, $s1
    ctx->r8 = ADD32(ctx->r30, ctx->r17);
    // 0x802666C0: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x802666C4: sra         $t9, $a1, 24
    ctx->r25 = S32(SIGNED(ctx->r5) >> 24);
    // 0x802666C8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x802666CC: jal         0x8026627C
    // 0x802666D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_80264800_func_8026627C(rdram, ctx);
        goto after_2;
    // 0x802666D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802666D4: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x802666D8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x802666DC: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x802666E0: sll         $a1, $s4, 24
    ctx->r5 = S32(ctx->r20 << 24);
    // 0x802666E4: sra         $t1, $a1, 24
    ctx->r9 = S32(SIGNED(ctx->r5) >> 24);
    // 0x802666E8: lw          $a2, -0x69F8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X69F8);
    // 0x802666EC: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x802666F0: jal         0x802662CC
    // 0x802666F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_80264800_func_802662CC(rdram, ctx);
        goto after_3;
    // 0x802666F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802666F8: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x802666FC: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x80266700: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80266704: lw          $a2, -0x69D8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X69D8);
    // 0x80266708: jal         0x80266358
    // 0x8026670C: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    ovl_80264800_func_80266358(rdram, ctx);
        goto after_4;
    // 0x8026670C: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    after_4:
    // 0x80266710: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80266714: andi        $s3, $s2, 0xFF
    ctx->r19 = ctx->r18 & 0XFF;
    // 0x80266718: slti        $at, $s3, 0x4
    ctx->r1 = SIGNED(ctx->r19) < 0X4 ? 1 : 0;
    // 0x8026671C: bne         $at, $zero, L_80266680
    if (ctx->r1 != 0) {
        // 0x80266720: or          $s2, $s3, $zero
        ctx->r18 = ctx->r19 | 0;
            goto L_80266680;
    }
    // 0x80266720: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
    // 0x80266724: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80266728: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026672C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80266730: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80266734: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80266738: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8026673C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80266740: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80266744: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80266748: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8026674C: jr          $ra
    // 0x80266750: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80266750: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_80264800_func_80266640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266640: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80266644: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80266648: lui         $s5, 0x8026
    ctx->r21 = S32(0X8026 << 16);
    // 0x8026664C: lui         $s6, 0x801B
    ctx->r22 = S32(0X801B << 16);
    // 0x80266650: lui         $s7, 0x8027
    ctx->r23 = S32(0X8027 << 16);
    // 0x80266654: lui         $fp, 0x8027
    ctx->r30 = S32(0X8027 << 16);
    // 0x80266658: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8026665C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80266660: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80266664: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80266668: addiu       $fp, $fp, -0x6A08
    ctx->r30 = ADD32(ctx->r30, -0X6A08);
    // 0x8026666C: addiu       $s7, $s7, -0x69E8
    ctx->r23 = ADD32(ctx->r23, -0X69E8);
    // 0x80266670: addiu       $s6, $s6, 0x1CF0
    ctx->r22 = ADD32(ctx->r22, 0X1CF0);
    // 0x80266674: addiu       $s5, $s5, 0x6754
    ctx->r21 = ADD32(ctx->r21, 0X6754);
    // 0x80266678: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8026667C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80266680:
    // 0x80266680: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80266684: jal         0x800293DC
    // 0x80266688: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x80266688: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x8026668C: sb          $s3, 0x3C($v0)
    MEM_B(0X3C, ctx->r2) = ctx->r19;
    // 0x80266690: lw          $t6, 0x0($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X0);
    // 0x80266694: sll         $s1, $s2, 2
    ctx->r17 = S32(ctx->r18 << 2);
    // 0x80266698: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x8026669C: addu        $t8, $s7, $s1
    ctx->r24 = ADD32(ctx->r23, ctx->r17);
    // 0x802666A0: addu        $t7, $t6, $s2
    ctx->r15 = ADD32(ctx->r14, ctx->r18);
    // 0x802666A4: lb          $s4, 0x4C($t7)
    ctx->r20 = MEM_B(ctx->r15, 0X4C);
    // 0x802666A8: lw          $a1, 0x0($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X0);
    // 0x802666AC: jal         0x8026631C
    // 0x802666B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_80264800_func_8026631C(rdram, ctx);
        goto after_1;
    // 0x802666B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802666B4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x802666B8: sll         $a1, $s4, 24
    ctx->r5 = S32(ctx->r20 << 24);
    // 0x802666BC: addu        $t0, $fp, $s1
    ctx->r8 = ADD32(ctx->r30, ctx->r17);
    // 0x802666C0: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x802666C4: sra         $t9, $a1, 24
    ctx->r25 = S32(SIGNED(ctx->r5) >> 24);
    // 0x802666C8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x802666CC: jal         0x8026627C
    // 0x802666D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_80264800_func_8026627C(rdram, ctx);
        goto after_2;
    // 0x802666D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802666D4: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x802666D8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x802666DC: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x802666E0: sll         $a1, $s4, 24
    ctx->r5 = S32(ctx->r20 << 24);
    // 0x802666E4: sra         $t1, $a1, 24
    ctx->r9 = S32(SIGNED(ctx->r5) >> 24);
    // 0x802666E8: lw          $a2, -0x69F8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X69F8);
    // 0x802666EC: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x802666F0: jal         0x802662CC
    // 0x802666F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_80264800_func_802662CC(rdram, ctx);
        goto after_3;
    // 0x802666F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802666F8: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x802666FC: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x80266700: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80266704: lw          $a2, -0x69D8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X69D8);
    // 0x80266708: jal         0x80266358
    // 0x8026670C: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    ovl_80264800_func_80266358(rdram, ctx);
        goto after_4;
    // 0x8026670C: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    after_4:
    // 0x80266710: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80266714: andi        $s3, $s2, 0xFF
    ctx->r19 = ctx->r18 & 0XFF;
    // 0x80266718: slti        $at, $s3, 0x4
    ctx->r1 = SIGNED(ctx->r19) < 0X4 ? 1 : 0;
    // 0x8026671C: bne         $at, $zero, L_80266680
    if (ctx->r1 != 0) {
        // 0x80266720: or          $s2, $s3, $zero
        ctx->r18 = ctx->r19 | 0;
            goto L_80266680;
    }
    // 0x80266720: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
    // 0x80266724: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80266728: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026672C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80266730: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80266734: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80266738: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8026673C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80266740: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80266744: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80266748: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8026674C: jr          $ra
    // 0x80266750: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80266750: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_80264800_func_80266754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266754: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80266758: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026675C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80266760: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80266764: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x80266768: lb          $v0, 0x3C($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X3C);
    // 0x8026676C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80266770: addu        $t6, $v1, $v0
    ctx->r14 = ADD32(ctx->r3, ctx->r2);
    // 0x80266774: lb          $t7, 0x4C($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X4C);
    // 0x80266778: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026677C: sb          $t7, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = ctx->r15;
    // 0x80266780: lb          $t8, 0x38($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X38);
    // 0x80266784: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80266788: bne         $t8, $at, L_8026695C
    if (ctx->r24 != ctx->r1) {
        // 0x8026678C: nop
    
            goto L_8026695C;
    }
    // 0x8026678C: nop

    // 0x80266790: lb          $t9, 0x43($v1)
    ctx->r25 = MEM_B(ctx->r3, 0X43);
    // 0x80266794: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80266798: bne         $t9, $at, L_80266914
    if (ctx->r25 != ctx->r1) {
        // 0x8026679C: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_80266914;
    }
    // 0x8026679C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x802667A0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x802667A4: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    // 0x802667A8: sb          $v0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r2;
    // 0x802667AC: jal         0x8002A468
    // 0x802667B0: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x802667B0: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_0:
    // 0x802667B4: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x802667B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802667BC: lb          $v0, 0x39($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X39);
    // 0x802667C0: nop

    // 0x802667C4: beq         $v0, $zero, L_802667E4
    if (ctx->r2 == 0) {
        // 0x802667C8: nop
    
            goto L_802667E4;
    }
    // 0x802667C8: nop

    // 0x802667CC: beq         $v0, $at, L_802667F0
    if (ctx->r2 == ctx->r1) {
        // 0x802667D0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802667F0;
    }
    // 0x802667D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802667D4: beq         $v0, $at, L_80266820
    if (ctx->r2 == ctx->r1) {
        // 0x802667D8: nop
    
            goto L_80266820;
    }
    // 0x802667D8: nop

    // 0x802667DC: b           L_80266848
    // 0x802667E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80266848;
    // 0x802667E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_802667E4:
    // 0x802667E4: sh          $zero, 0x38($s0)
    MEM_H(0X38, ctx->r16) = 0;
    // 0x802667E8: b           L_80266844
    // 0x802667EC: sh          $zero, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = 0;
        goto L_80266844;
    // 0x802667EC: sh          $zero, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = 0;
L_802667F0:
    // 0x802667F0: lb          $t0, 0x2F($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X2F);
    // 0x802667F4: lb          $t1, 0x3D($v1)
    ctx->r9 = MEM_B(ctx->r3, 0X3D);
    // 0x802667F8: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x802667FC: bne         $t0, $t1, L_80266814
    if (ctx->r8 != ctx->r9) {
        // 0x80266800: nop
    
            goto L_80266814;
    }
    // 0x80266800: nop

    // 0x80266804: jal         0x8006F678
    // 0x80266808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006F678(rdram, ctx);
        goto after_1;
    // 0x80266808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8026680C: b           L_80266848
    // 0x80266810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80266848;
    // 0x80266810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80266814:
    // 0x80266814: sh          $t2, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r10;
    // 0x80266818: b           L_80266844
    // 0x8026681C: sh          $zero, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = 0;
        goto L_80266844;
    // 0x8026681C: sh          $zero, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = 0;
L_80266820:
    // 0x80266820: sh          $zero, 0x38($s0)
    MEM_H(0X38, ctx->r16) = 0;
    // 0x80266824: lb          $t4, 0x3D($v1)
    ctx->r12 = MEM_B(ctx->r3, 0X3D);
    // 0x80266828: lb          $t3, 0x2F($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X2F);
    // 0x8026682C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80266830: bne         $t3, $t4, L_80266840
    if (ctx->r11 != ctx->r12) {
        // 0x80266834: nop
    
            goto L_80266840;
    }
    // 0x80266834: nop

    // 0x80266838: b           L_80266844
    // 0x8026683C: sh          $t5, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r13;
        goto L_80266844;
    // 0x8026683C: sh          $t5, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r13;
L_80266840:
    // 0x80266840: sh          $zero, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = 0;
L_80266844:
    // 0x80266844: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80266848:
    // 0x80266848: jal         0x8002A7B0
    // 0x8026684C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002A7B0(rdram, ctx);
        goto after_2;
    // 0x8026684C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80266850: lb          $t6, 0x2E($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X2E);
    // 0x80266854: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x80266858: addiu       $t8, $t8, -0x6AB8
    ctx->r24 = ADD32(ctx->r24, -0X6AB8);
    // 0x8026685C: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80266860: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x80266864: lhu         $t9, 0x0($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X0);
    // 0x80266868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026686C: sh          $t9, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r25;
    // 0x80266870: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x80266874: jal         0x8002A7B0
    // 0x80266878: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002A7B0(rdram, ctx);
        goto after_3;
    // 0x80266878: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x8026687C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80266880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266884: lhu         $t0, 0x0($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X0);
    // 0x80266888: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8026688C: jal         0x8002A7B0
    // 0x80266890: sh          $t0, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r8;
    func_8002A7B0(rdram, ctx);
        goto after_4;
    // 0x80266890: sh          $t0, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r8;
    after_4:
    // 0x80266894: lb          $v1, 0x2F($sp)
    ctx->r3 = MEM_B(ctx->r29, 0X2F);
    // 0x80266898: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026689C: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x802668A0: addu        $a2, $a2, $t1
    ctx->r6 = ADD32(ctx->r6, ctx->r9);
    // 0x802668A4: lw          $a2, -0x6A08($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X6A08);
    // 0x802668A8: lb          $a1, 0x2E($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X2E);
    // 0x802668AC: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x802668B0: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x802668B4: jal         0x8026627C
    // 0x802668B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_80264800_func_8026627C(rdram, ctx);
        goto after_5;
    // 0x802668B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x802668BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802668C0: jal         0x8002A7B0
    // 0x802668C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002A7B0(rdram, ctx);
        goto after_6;
    // 0x802668C4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x802668C8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x802668CC: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x802668D0: addu        $a2, $a2, $t2
    ctx->r6 = ADD32(ctx->r6, ctx->r10);
    // 0x802668D4: lw          $a2, -0x69F8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X69F8);
    // 0x802668D8: lb          $a1, 0x2E($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X2E);
    // 0x802668DC: jal         0x802662CC
    // 0x802668E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_80264800_func_802662CC(rdram, ctx);
        goto after_7;
    // 0x802668E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_7:
    // 0x802668E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802668E8: jal         0x8002A7B0
    // 0x802668EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8002A7B0(rdram, ctx);
        goto after_8;
    // 0x802668EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
    // 0x802668F0: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x802668F4: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x802668F8: addu        $a2, $a2, $t3
    ctx->r6 = ADD32(ctx->r6, ctx->r11);
    // 0x802668FC: lw          $a2, -0x69D8($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X69D8);
    // 0x80266900: lbu         $a1, 0x2E($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2E);
    // 0x80266904: jal         0x80266358
    // 0x80266908: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_80264800_func_80266358(rdram, ctx);
        goto after_9;
    // 0x80266908: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
    // 0x8026690C: b           L_80266920
    // 0x80266910: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
        goto L_80266920;
    // 0x80266910: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
L_80266914:
    // 0x80266914: jal         0x8002A468
    // 0x80266918: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_10;
    // 0x80266918: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_10:
    // 0x8026691C: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
L_80266920:
    // 0x80266920: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80266924: beq         $v0, $zero, L_8026694C
    if (ctx->r2 == 0) {
        // 0x80266928: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8026694C;
    }
    // 0x80266928: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8026692C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80266930: bne         $v0, $at, L_80266964
    if (ctx->r2 != ctx->r1) {
        // 0x80266934: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80266964;
    }
    // 0x80266934: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80266938: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8026693C: jal         0x8002135C
    // 0x80266940: addiu       $a2, $zero, 0xA8
    ctx->r6 = ADD32(0, 0XA8);
    func_8002135C(rdram, ctx);
        goto after_11;
    // 0x80266940: addiu       $a2, $zero, 0xA8
    ctx->r6 = ADD32(0, 0XA8);
    after_11:
    // 0x80266944: b           L_80266968
    // 0x80266948: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80266968;
    // 0x80266948: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026694C:
    // 0x8026694C: jal         0x8002135C
    // 0x80266950: addiu       $a2, $zero, 0xA3
    ctx->r6 = ADD32(0, 0XA3);
    func_8002135C(rdram, ctx);
        goto after_12;
    // 0x80266950: addiu       $a2, $zero, 0xA3
    ctx->r6 = ADD32(0, 0XA3);
    after_12:
    // 0x80266954: b           L_80266968
    // 0x80266958: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80266968;
    // 0x80266958: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026695C:
    // 0x8026695C: jal         0x8002A468
    // 0x80266960: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_13;
    // 0x80266960: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_13:
L_80266964:
    // 0x80266964: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80266968:
    // 0x80266968: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026696C: jr          $ra
    // 0x80266970: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80266970: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_80264800_func_80266974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266974: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80266978: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026697C: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80266980: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80266984: addiu       $a0, $a0, 0x6A08
    ctx->r4 = ADD32(ctx->r4, 0X6A08);
    // 0x80266988: jal         0x800293DC
    // 0x8026698C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x8026698C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x80266990: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80266994: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x80266998: lui         $a1, 0x803D
    ctx->r5 = S32(0X803D << 16);
    // 0x8026699C: lb          $t7, 0x4C($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X4C);
    // 0x802669A0: addiu       $a1, $a1, -0x344
    ctx->r5 = ADD32(ctx->r5, -0X344);
    // 0x802669A4: sb          $t7, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r15;
    // 0x802669A8: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x802669AC: jal         0x8026631C
    // 0x802669B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_80264800_func_8026631C(rdram, ctx);
        goto after_1;
    // 0x802669B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x802669B4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x802669B8: lb          $a1, 0x27($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X27);
    // 0x802669BC: lui         $a2, 0x803D
    ctx->r6 = S32(0X803D << 16);
    // 0x802669C0: addiu       $a2, $a2, -0x320
    ctx->r6 = ADD32(ctx->r6, -0X320);
    // 0x802669C4: jal         0x8026627C
    // 0x802669C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_80264800_func_8026627C(rdram, ctx);
        goto after_2;
    // 0x802669C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x802669CC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x802669D0: lb          $a1, 0x27($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X27);
    // 0x802669D4: lui         $a2, 0x803D
    ctx->r6 = S32(0X803D << 16);
    // 0x802669D8: addiu       $a2, $a2, -0x32C
    ctx->r6 = ADD32(ctx->r6, -0X32C);
    // 0x802669DC: jal         0x802662CC
    // 0x802669E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_80264800_func_802662CC(rdram, ctx);
        goto after_3;
    // 0x802669E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x802669E4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802669E8: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    // 0x802669EC: lui         $a2, 0x803D
    ctx->r6 = S32(0X803D << 16);
    // 0x802669F0: jal         0x80266358
    // 0x802669F4: addiu       $a2, $a2, -0x338
    ctx->r6 = ADD32(ctx->r6, -0X338);
    ovl_80264800_func_80266358(rdram, ctx);
        goto after_4;
    // 0x802669F4: addiu       $a2, $a2, -0x338
    ctx->r6 = ADD32(ctx->r6, -0X338);
    after_4:
    // 0x802669F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802669FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80266A00: jr          $ra
    // 0x80266A04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80266A04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_80264800_func_80266A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266A08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80266A0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80266A10: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80266A14: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80266A18: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x80266A1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80266A20: lb          $a0, 0x4C($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X4C);
    // 0x80266A24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80266A28: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80266A2C: jal         0x8001D4C0
    // 0x80266A30: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8001D4C0(rdram, ctx);
        goto after_0;
    // 0x80266A30: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_0:
    // 0x80266A34: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80266A38: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x80266A3C: lb          $t6, 0x38($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X38);
    // 0x80266A40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80266A44: bne         $t6, $at, L_80266B74
    if (ctx->r14 != ctx->r1) {
        // 0x80266A48: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_80266B74;
    }
    // 0x80266A48: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80266A4C: lb          $t7, 0x43($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X43);
    // 0x80266A50: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80266A54: bne         $t7, $at, L_80266A70
    if (ctx->r15 != ctx->r1) {
        // 0x80266A58: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_80266A70;
    }
    // 0x80266A58: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80266A5C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80266A60: jal         0x8002A468
    // 0x80266A64: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x80266A64: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_1:
    // 0x80266A68: b           L_80266B38
    // 0x80266A6C: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
        goto L_80266B38;
    // 0x80266A6C: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
L_80266A70:
    // 0x80266A70: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    // 0x80266A74: jal         0x8002A468
    // 0x80266A78: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8002A468(rdram, ctx);
        goto after_2;
    // 0x80266A78: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_2:
    // 0x80266A7C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80266A80: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80266A84: lb          $v0, 0x39($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X39);
    // 0x80266A88: nop

    // 0x80266A8C: beq         $v0, $zero, L_80266AAC
    if (ctx->r2 == 0) {
        // 0x80266A90: nop
    
            goto L_80266AAC;
    }
    // 0x80266A90: nop

    // 0x80266A94: beq         $v0, $at, L_80266AB8
    if (ctx->r2 == ctx->r1) {
        // 0x80266A98: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80266AB8;
    }
    // 0x80266A98: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80266A9C: beq         $v0, $at, L_80266AC8
    if (ctx->r2 == ctx->r1) {
        // 0x80266AA0: addiu       $t8, $zero, 0xA
        ctx->r24 = ADD32(0, 0XA);
            goto L_80266AC8;
    }
    // 0x80266AA0: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x80266AA4: b           L_80266AD8
    // 0x80266AA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80266AD8;
    // 0x80266AA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80266AAC:
    // 0x80266AAC: sh          $zero, 0x38($s0)
    MEM_H(0X38, ctx->r16) = 0;
    // 0x80266AB0: b           L_80266AD4
    // 0x80266AB4: sh          $zero, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = 0;
        goto L_80266AD4;
    // 0x80266AB4: sh          $zero, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = 0;
L_80266AB8:
    // 0x80266AB8: jal         0x8006F678
    // 0x80266ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006F678(rdram, ctx);
        goto after_3;
    // 0x80266ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80266AC0: b           L_80266AD8
    // 0x80266AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80266AD8;
    // 0x80266AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80266AC8:
    // 0x80266AC8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80266ACC: sh          $t8, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r24;
    // 0x80266AD0: sh          $t9, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r25;
L_80266AD4:
    // 0x80266AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80266AD8:
    // 0x80266AD8: jal         0x8002A7B0
    // 0x80266ADC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002A7B0(rdram, ctx);
        goto after_4;
    // 0x80266ADC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80266AE0: lb          $a1, 0x27($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X27);
    // 0x80266AE4: lui         $a2, 0x803D
    ctx->r6 = S32(0X803D << 16);
    // 0x80266AE8: addiu       $a2, $a2, -0x320
    ctx->r6 = ADD32(ctx->r6, -0X320);
    // 0x80266AEC: jal         0x8026627C
    // 0x80266AF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_80264800_func_8026627C(rdram, ctx);
        goto after_5;
    // 0x80266AF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x80266AF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266AF8: jal         0x8002A7B0
    // 0x80266AFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002A7B0(rdram, ctx);
        goto after_6;
    // 0x80266AFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x80266B00: lb          $a1, 0x27($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X27);
    // 0x80266B04: lui         $a2, 0x803D
    ctx->r6 = S32(0X803D << 16);
    // 0x80266B08: addiu       $a2, $a2, -0x32C
    ctx->r6 = ADD32(ctx->r6, -0X32C);
    // 0x80266B0C: jal         0x802662CC
    // 0x80266B10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_80264800_func_802662CC(rdram, ctx);
        goto after_7;
    // 0x80266B10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_7:
    // 0x80266B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266B18: jal         0x8002A7B0
    // 0x80266B1C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8002A7B0(rdram, ctx);
        goto after_8;
    // 0x80266B1C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
    // 0x80266B20: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    // 0x80266B24: lui         $a2, 0x803D
    ctx->r6 = S32(0X803D << 16);
    // 0x80266B28: addiu       $a2, $a2, -0x338
    ctx->r6 = ADD32(ctx->r6, -0X338);
    // 0x80266B2C: jal         0x80266358
    // 0x80266B30: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_80264800_func_80266358(rdram, ctx);
        goto after_9;
    // 0x80266B30: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
    // 0x80266B34: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
L_80266B38:
    // 0x80266B38: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80266B3C: beq         $v0, $zero, L_80266B64
    if (ctx->r2 == 0) {
        // 0x80266B40: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80266B64;
    }
    // 0x80266B40: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80266B44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80266B48: bne         $v0, $at, L_80266B7C
    if (ctx->r2 != ctx->r1) {
        // 0x80266B4C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80266B7C;
    }
    // 0x80266B4C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80266B50: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80266B54: jal         0x8002135C
    // 0x80266B58: addiu       $a2, $zero, 0xA8
    ctx->r6 = ADD32(0, 0XA8);
    func_8002135C(rdram, ctx);
        goto after_10;
    // 0x80266B58: addiu       $a2, $zero, 0xA8
    ctx->r6 = ADD32(0, 0XA8);
    after_10:
    // 0x80266B5C: b           L_80266B80
    // 0x80266B60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80266B80;
    // 0x80266B60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80266B64:
    // 0x80266B64: jal         0x8002135C
    // 0x80266B68: addiu       $a2, $zero, 0xA3
    ctx->r6 = ADD32(0, 0XA3);
    func_8002135C(rdram, ctx);
        goto after_11;
    // 0x80266B68: addiu       $a2, $zero, 0xA3
    ctx->r6 = ADD32(0, 0XA3);
    after_11:
    // 0x80266B6C: b           L_80266B80
    // 0x80266B70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80266B80;
    // 0x80266B70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80266B74:
    // 0x80266B74: jal         0x8002A468
    // 0x80266B78: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_12;
    // 0x80266B78: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_12:
L_80266B7C:
    // 0x80266B7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80266B80:
    // 0x80266B80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80266B84: jr          $ra
    // 0x80266B88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80266B88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_80264800_func_80266A50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266A50: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80266A54: bne         $t7, $at, L_80266A70
    if (ctx->r15 != ctx->r1) {
        // 0x80266A58: lui         $a0, 0x8005
        ctx->r4 = S32(0X8005 << 16);
            goto L_80266A70;
    }
    // 0x80266A58: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80266A5C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80266A60: jal         0x8002A468
    // 0x80266A64: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x80266A64: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_0:
    // 0x80266A68: b           L_80266B38
    // 0x80266A6C: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
        goto L_80266B38;
    // 0x80266A6C: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
L_80266A70:
    // 0x80266A70: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    // 0x80266A74: jal         0x8002A468
    // 0x80266A78: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x80266A78: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_1:
    // 0x80266A7C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80266A80: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80266A84: lb          $v0, 0x39($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X39);
    // 0x80266A88: nop

    // 0x80266A8C: beq         $v0, $zero, L_80266AAC
    if (ctx->r2 == 0) {
        // 0x80266A90: nop
    
            goto L_80266AAC;
    }
    // 0x80266A90: nop

    // 0x80266A94: beq         $v0, $at, L_80266AB8
    if (ctx->r2 == ctx->r1) {
        // 0x80266A98: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80266AB8;
    }
    // 0x80266A98: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80266A9C: beq         $v0, $at, L_80266AC8
    if (ctx->r2 == ctx->r1) {
        // 0x80266AA0: addiu       $t8, $zero, 0xA
        ctx->r24 = ADD32(0, 0XA);
            goto L_80266AC8;
    }
    // 0x80266AA0: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x80266AA4: b           L_80266AD8
    // 0x80266AA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80266AD8;
    // 0x80266AA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80266AAC:
    // 0x80266AAC: sh          $zero, 0x38($s0)
    MEM_H(0X38, ctx->r16) = 0;
    // 0x80266AB0: b           L_80266AD4
    // 0x80266AB4: sh          $zero, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = 0;
        goto L_80266AD4;
    // 0x80266AB4: sh          $zero, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = 0;
L_80266AB8:
    // 0x80266AB8: jal         0x8006F678
    // 0x80266ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8006F678(rdram, ctx);
        goto after_2;
    // 0x80266ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80266AC0: b           L_80266AD8
    // 0x80266AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80266AD8;
    // 0x80266AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80266AC8:
    // 0x80266AC8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80266ACC: sh          $t8, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r24;
    // 0x80266AD0: sh          $t9, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r25;
L_80266AD4:
    // 0x80266AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80266AD8:
    // 0x80266AD8: jal         0x8002A7B0
    // 0x80266ADC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002A7B0(rdram, ctx);
        goto after_3;
    // 0x80266ADC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80266AE0: lb          $a1, 0x27($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X27);
    // 0x80266AE4: lui         $a2, 0x803D
    ctx->r6 = S32(0X803D << 16);
    // 0x80266AE8: addiu       $a2, $a2, -0x320
    ctx->r6 = ADD32(ctx->r6, -0X320);
    // 0x80266AEC: jal         0x8026627C
    // 0x80266AF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_80264800_func_8026627C(rdram, ctx);
        goto after_4;
    // 0x80266AF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x80266AF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266AF8: jal         0x8002A7B0
    // 0x80266AFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002A7B0(rdram, ctx);
        goto after_5;
    // 0x80266AFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x80266B00: lb          $a1, 0x27($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X27);
    // 0x80266B04: lui         $a2, 0x803D
    ctx->r6 = S32(0X803D << 16);
    // 0x80266B08: addiu       $a2, $a2, -0x32C
    ctx->r6 = ADD32(ctx->r6, -0X32C);
    // 0x80266B0C: jal         0x802662CC
    // 0x80266B10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_80264800_func_802662CC(rdram, ctx);
        goto after_6;
    // 0x80266B10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x80266B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266B18: jal         0x8002A7B0
    // 0x80266B1C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8002A7B0(rdram, ctx);
        goto after_7;
    // 0x80266B1C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x80266B20: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    // 0x80266B24: lui         $a2, 0x803D
    ctx->r6 = S32(0X803D << 16);
    // 0x80266B28: addiu       $a2, $a2, -0x338
    ctx->r6 = ADD32(ctx->r6, -0X338);
    // 0x80266B2C: jal         0x80266358
    // 0x80266B30: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_80264800_func_80266358(rdram, ctx);
        goto after_8;
    // 0x80266B30: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_8:
    // 0x80266B34: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
L_80266B38:
    // 0x80266B38: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80266B3C: beq         $v0, $zero, L_80266B64
    if (ctx->r2 == 0) {
        // 0x80266B40: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80266B64;
    }
    // 0x80266B40: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80266B44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80266B48: bne         $v0, $at, L_80266B7C
    if (ctx->r2 != ctx->r1) {
        // 0x80266B4C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80266B7C;
    }
    // 0x80266B4C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80266B50: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80266B54: jal         0x8002135C
    // 0x80266B58: addiu       $a2, $zero, 0xA8
    ctx->r6 = ADD32(0, 0XA8);
    func_8002135C(rdram, ctx);
        goto after_9;
    // 0x80266B58: addiu       $a2, $zero, 0xA8
    ctx->r6 = ADD32(0, 0XA8);
    after_9:
    // 0x80266B5C: b           L_80266B80
    // 0x80266B60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80266B80;
    // 0x80266B60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80266B64:
    // 0x80266B64: jal         0x8002135C
    // 0x80266B68: addiu       $a2, $zero, 0xA3
    ctx->r6 = ADD32(0, 0XA3);
    func_8002135C(rdram, ctx);
        goto after_10;
    // 0x80266B68: addiu       $a2, $zero, 0xA3
    ctx->r6 = ADD32(0, 0XA3);
    after_10:
    // 0x80266B6C: b           L_80266B80
    // 0x80266B70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80266B80;
    // 0x80266B70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80266B74: jal         0x8002A468
    // 0x80266B78: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_11;
    // 0x80266B78: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_11:
L_80266B7C:
    // 0x80266B7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80266B80:
    // 0x80266B80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80266B84: jr          $ra
    // 0x80266B88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80266B88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_80264800_func_80266ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266AC0: b           L_80266AD8
    // 0x80266AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80266AD8;
    // 0x80266AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266AC8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80266ACC: sh          $t8, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r24;
    // 0x80266AD0: sh          $t9, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r25;
    // 0x80266AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80266AD8:
    // 0x80266AD8: jal         0x8002A7B0
    // 0x80266ADC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002A7B0(rdram, ctx);
        goto after_0;
    // 0x80266ADC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80266AE0: lb          $a1, 0x27($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X27);
    // 0x80266AE4: lui         $a2, 0x803D
    ctx->r6 = S32(0X803D << 16);
    // 0x80266AE8: addiu       $a2, $a2, -0x320
    ctx->r6 = ADD32(ctx->r6, -0X320);
    // 0x80266AEC: jal         0x8026627C
    // 0x80266AF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_80264800_func_8026627C(rdram, ctx);
        goto after_1;
    // 0x80266AF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80266AF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266AF8: jal         0x8002A7B0
    // 0x80266AFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002A7B0(rdram, ctx);
        goto after_2;
    // 0x80266AFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80266B00: lb          $a1, 0x27($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X27);
    // 0x80266B04: lui         $a2, 0x803D
    ctx->r6 = S32(0X803D << 16);
    // 0x80266B08: addiu       $a2, $a2, -0x32C
    ctx->r6 = ADD32(ctx->r6, -0X32C);
    // 0x80266B0C: jal         0x802662CC
    // 0x80266B10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_80264800_func_802662CC(rdram, ctx);
        goto after_3;
    // 0x80266B10: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x80266B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266B18: jal         0x8002A7B0
    // 0x80266B1C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8002A7B0(rdram, ctx);
        goto after_4;
    // 0x80266B1C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x80266B20: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    // 0x80266B24: lui         $a2, 0x803D
    ctx->r6 = S32(0X803D << 16);
    // 0x80266B28: addiu       $a2, $a2, -0x338
    ctx->r6 = ADD32(ctx->r6, -0X338);
    // 0x80266B2C: jal         0x80266358
    // 0x80266B30: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    ovl_80264800_func_80266358(rdram, ctx);
        goto after_5;
    // 0x80266B30: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x80266B34: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
    // 0x80266B38: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80266B3C: beq         $v0, $zero, L_80266B64
    if (ctx->r2 == 0) {
        // 0x80266B40: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80266B64;
    }
    // 0x80266B40: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80266B44: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80266B48: bne         $v0, $at, L_80266B7C
    if (ctx->r2 != ctx->r1) {
        // 0x80266B4C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80266B7C;
    }
    // 0x80266B4C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80266B50: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80266B54: jal         0x8002135C
    // 0x80266B58: addiu       $a2, $zero, 0xA8
    ctx->r6 = ADD32(0, 0XA8);
    func_8002135C(rdram, ctx);
        goto after_6;
    // 0x80266B58: addiu       $a2, $zero, 0xA8
    ctx->r6 = ADD32(0, 0XA8);
    after_6:
    // 0x80266B5C: b           L_80266B80
    // 0x80266B60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80266B80;
    // 0x80266B60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80266B64:
    // 0x80266B64: jal         0x8002135C
    // 0x80266B68: addiu       $a2, $zero, 0xA3
    ctx->r6 = ADD32(0, 0XA3);
    func_8002135C(rdram, ctx);
        goto after_7;
    // 0x80266B68: addiu       $a2, $zero, 0xA3
    ctx->r6 = ADD32(0, 0XA3);
    after_7:
    // 0x80266B6C: b           L_80266B80
    // 0x80266B70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80266B80;
    // 0x80266B70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80266B74: jal         0x8002A468
    // 0x80266B78: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_8;
    // 0x80266B78: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_8:
L_80266B7C:
    // 0x80266B7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80266B80:
    // 0x80266B80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80266B84: jr          $ra
    // 0x80266B88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80266B88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_80264800_func_80266B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266B8C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80266B90: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80266B94: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80266B98: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80266B9C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80266BA0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80266BA4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80266BA8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80266BAC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80266BB0: addiu       $a0, $a0, 0x6C68
    ctx->r4 = ADD32(ctx->r4, 0X6C68);
    // 0x80266BB4: jal         0x800293DC
    // 0x80266BB8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x80266BB8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x80266BBC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80266BC0: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x80266BC4: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80266BC8: beq         $s0, $s2, L_80266C30
    if (ctx->r16 == ctx->r18) {
        // 0x80266BCC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80266C30;
    }
    // 0x80266BCC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80266BD0: lui         $s5, 0x8027
    ctx->r21 = S32(0X8027 << 16);
    // 0x80266BD4: lui         $s4, 0x8027
    ctx->r20 = S32(0X8027 << 16);
    // 0x80266BD8: lui         $s3, 0x8027
    ctx->r19 = S32(0X8027 << 16);
    // 0x80266BDC: addiu       $s3, $s3, -0x698C
    ctx->r19 = ADD32(ctx->r19, -0X698C);
    // 0x80266BE0: addiu       $s4, $s4, -0x6968
    ctx->r20 = ADD32(ctx->r20, -0X6968);
    // 0x80266BE4: addiu       $s5, $s5, -0x696C
    ctx->r21 = ADD32(ctx->r21, -0X696C);
L_80266BE8:
    // 0x80266BE8: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x80266BEC: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x80266BF0: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x80266BF4: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80266BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266BFC: jal         0x8004CD24
    // 0x80266C00: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x80266C00: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x80266C04: addu        $t7, $s4, $s1
    ctx->r15 = ADD32(ctx->r20, ctx->r17);
    // 0x80266C08: addu        $t8, $s5, $s1
    ctx->r24 = ADD32(ctx->r21, ctx->r17);
    // 0x80266C0C: lbu         $a2, 0x0($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0X0);
    // 0x80266C10: lbu         $a1, 0x0($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X0);
    // 0x80266C14: jal         0x8002135C
    // 0x80266C18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80266C18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80266C1C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80266C20: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80266C24: andi        $t9, $s1, 0xFF
    ctx->r25 = ctx->r17 & 0XFF;
    // 0x80266C28: bne         $s0, $s2, L_80266BE8
    if (ctx->r16 != ctx->r18) {
        // 0x80266C2C: or          $s1, $t9, $zero
        ctx->r17 = ctx->r25 | 0;
            goto L_80266BE8;
    }
    // 0x80266C2C: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
L_80266C30:
    // 0x80266C30: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80266C34: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x80266C38: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    // 0x80266C3C: jal         0x8004CD90
    // 0x80266C40: nop

    func_8004CD90(rdram, ctx);
        goto after_3;
    // 0x80266C40: nop

    after_3:
    // 0x80266C44: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80266C48: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80266C4C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80266C50: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80266C54: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80266C58: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80266C5C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80266C60: jr          $ra
    // 0x80266C64: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80266C64: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_80264800_func_80266B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266B9C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80266BA0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80266BA4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80266BA8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80266BAC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80266BB0: addiu       $a0, $a0, 0x6C68
    ctx->r4 = ADD32(ctx->r4, 0X6C68);
    // 0x80266BB4: jal         0x800293DC
    // 0x80266BB8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x80266BB8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x80266BBC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80266BC0: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x80266BC4: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80266BC8: beq         $s0, $s2, L_80266C30
    if (ctx->r16 == ctx->r18) {
        // 0x80266BCC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80266C30;
    }
    // 0x80266BCC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80266BD0: lui         $s5, 0x8027
    ctx->r21 = S32(0X8027 << 16);
    // 0x80266BD4: lui         $s4, 0x8027
    ctx->r20 = S32(0X8027 << 16);
    // 0x80266BD8: lui         $s3, 0x8027
    ctx->r19 = S32(0X8027 << 16);
    // 0x80266BDC: addiu       $s3, $s3, -0x698C
    ctx->r19 = ADD32(ctx->r19, -0X698C);
    // 0x80266BE0: addiu       $s4, $s4, -0x6968
    ctx->r20 = ADD32(ctx->r20, -0X6968);
    // 0x80266BE4: addiu       $s5, $s5, -0x696C
    ctx->r21 = ADD32(ctx->r21, -0X696C);
L_80266BE8:
    // 0x80266BE8: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x80266BEC: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x80266BF0: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x80266BF4: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80266BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266BFC: jal         0x8004CD24
    // 0x80266C00: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x80266C00: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x80266C04: addu        $t7, $s4, $s1
    ctx->r15 = ADD32(ctx->r20, ctx->r17);
    // 0x80266C08: addu        $t8, $s5, $s1
    ctx->r24 = ADD32(ctx->r21, ctx->r17);
    // 0x80266C0C: lbu         $a2, 0x0($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0X0);
    // 0x80266C10: lbu         $a1, 0x0($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X0);
    // 0x80266C14: jal         0x8002135C
    // 0x80266C18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80266C18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80266C1C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80266C20: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80266C24: andi        $t9, $s1, 0xFF
    ctx->r25 = ctx->r17 & 0XFF;
    // 0x80266C28: bne         $s0, $s2, L_80266BE8
    if (ctx->r16 != ctx->r18) {
        // 0x80266C2C: or          $s1, $t9, $zero
        ctx->r17 = ctx->r25 | 0;
            goto L_80266BE8;
    }
    // 0x80266C2C: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
L_80266C30:
    // 0x80266C30: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80266C34: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x80266C38: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    // 0x80266C3C: jal         0x8004CD90
    // 0x80266C40: nop

    func_8004CD90(rdram, ctx);
        goto after_3;
    // 0x80266C40: nop

    after_3:
    // 0x80266C44: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80266C48: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80266C4C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80266C50: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80266C54: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80266C58: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80266C5C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80266C60: jr          $ra
    // 0x80266C64: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80266C64: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_80264800_func_80266C68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266C68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80266C6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80266C70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80266C74: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80266C78: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80266C7C: lb          $t6, 0x38($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X38);
    // 0x80266C80: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80266C84: bne         $t6, $at, L_80266CA0
    if (ctx->r14 != ctx->r1) {
        // 0x80266C88: nop
    
            goto L_80266CA0;
    }
    // 0x80266C88: nop

    // 0x80266C8C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80266C90: jal         0x8002A468
    // 0x80266C94: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x80266C94: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    after_0:
    // 0x80266C98: b           L_80266CAC
    // 0x80266C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266CAC;
    // 0x80266C9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266CA0:
    // 0x80266CA0: jal         0x8002A468
    // 0x80266CA4: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x80266CA4: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_1:
    // 0x80266CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266CAC:
    // 0x80266CAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80266CB0: jr          $ra
    // 0x80266CB4: nop

    return;
    // 0x80266CB4: nop

;}
RECOMP_FUNC void ovl_80264800_func_80266CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266CB8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80266CBC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80266CC0: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80266CC4: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80266CC8: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80266CCC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80266CD0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80266CD4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80266CD8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80266CDC: addiu       $a0, $a0, 0x6D7C
    ctx->r4 = ADD32(ctx->r4, 0X6D7C);
    // 0x80266CE0: jal         0x800293DC
    // 0x80266CE4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x80266CE4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x80266CE8: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x80266CEC: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80266CF0: beq         $s0, $s2, L_80266D58
    if (ctx->r16 == ctx->r18) {
        // 0x80266CF4: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80266D58;
    }
    // 0x80266CF4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80266CF8: lui         $s5, 0x8027
    ctx->r21 = S32(0X8027 << 16);
    // 0x80266CFC: lui         $s4, 0x8027
    ctx->r20 = S32(0X8027 << 16);
    // 0x80266D00: lui         $s3, 0x8027
    ctx->r19 = S32(0X8027 << 16);
    // 0x80266D04: addiu       $s3, $s3, -0x69C4
    ctx->r19 = ADD32(ctx->r19, -0X69C4);
    // 0x80266D08: addiu       $s4, $s4, -0x6994
    ctx->r20 = ADD32(ctx->r20, -0X6994);
    // 0x80266D0C: addiu       $s5, $s5, -0x699C
    ctx->r21 = ADD32(ctx->r21, -0X699C);
L_80266D10:
    // 0x80266D10: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x80266D14: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x80266D18: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x80266D1C: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80266D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266D24: jal         0x8004CD24
    // 0x80266D28: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x80266D28: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x80266D2C: addu        $t7, $s4, $s1
    ctx->r15 = ADD32(ctx->r20, ctx->r17);
    // 0x80266D30: addu        $t8, $s5, $s1
    ctx->r24 = ADD32(ctx->r21, ctx->r17);
    // 0x80266D34: lbu         $a2, 0x0($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0X0);
    // 0x80266D38: lbu         $a1, 0x0($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X0);
    // 0x80266D3C: jal         0x8002135C
    // 0x80266D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80266D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80266D44: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80266D48: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80266D4C: andi        $t9, $s1, 0xFF
    ctx->r25 = ctx->r17 & 0XFF;
    // 0x80266D50: bne         $s0, $s2, L_80266D10
    if (ctx->r16 != ctx->r18) {
        // 0x80266D54: or          $s1, $t9, $zero
        ctx->r17 = ctx->r25 | 0;
            goto L_80266D10;
    }
    // 0x80266D54: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
L_80266D58:
    // 0x80266D58: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80266D5C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80266D60: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80266D64: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80266D68: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80266D6C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80266D70: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80266D74: jr          $ra
    // 0x80266D78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80266D78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_80264800_func_80266CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266CC8: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80266CCC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80266CD0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80266CD4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80266CD8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80266CDC: addiu       $a0, $a0, 0x6D7C
    ctx->r4 = ADD32(ctx->r4, 0X6D7C);
    // 0x80266CE0: jal         0x800293DC
    // 0x80266CE4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x80266CE4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x80266CE8: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x80266CEC: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80266CF0: beq         $s0, $s2, L_80266D58
    if (ctx->r16 == ctx->r18) {
        // 0x80266CF4: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80266D58;
    }
    // 0x80266CF4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80266CF8: lui         $s5, 0x8027
    ctx->r21 = S32(0X8027 << 16);
    // 0x80266CFC: lui         $s4, 0x8027
    ctx->r20 = S32(0X8027 << 16);
    // 0x80266D00: lui         $s3, 0x8027
    ctx->r19 = S32(0X8027 << 16);
    // 0x80266D04: addiu       $s3, $s3, -0x69C4
    ctx->r19 = ADD32(ctx->r19, -0X69C4);
    // 0x80266D08: addiu       $s4, $s4, -0x6994
    ctx->r20 = ADD32(ctx->r20, -0X6994);
    // 0x80266D0C: addiu       $s5, $s5, -0x699C
    ctx->r21 = ADD32(ctx->r21, -0X699C);
L_80266D10:
    // 0x80266D10: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x80266D14: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x80266D18: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x80266D1C: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80266D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266D24: jal         0x8004CD24
    // 0x80266D28: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x80266D28: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x80266D2C: addu        $t7, $s4, $s1
    ctx->r15 = ADD32(ctx->r20, ctx->r17);
    // 0x80266D30: addu        $t8, $s5, $s1
    ctx->r24 = ADD32(ctx->r21, ctx->r17);
    // 0x80266D34: lbu         $a2, 0x0($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0X0);
    // 0x80266D38: lbu         $a1, 0x0($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X0);
    // 0x80266D3C: jal         0x8002135C
    // 0x80266D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80266D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80266D44: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80266D48: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80266D4C: andi        $t9, $s1, 0xFF
    ctx->r25 = ctx->r17 & 0XFF;
    // 0x80266D50: bne         $s0, $s2, L_80266D10
    if (ctx->r16 != ctx->r18) {
        // 0x80266D54: or          $s1, $t9, $zero
        ctx->r17 = ctx->r25 | 0;
            goto L_80266D10;
    }
    // 0x80266D54: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
L_80266D58:
    // 0x80266D58: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80266D5C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80266D60: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80266D64: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80266D68: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80266D6C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80266D70: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80266D74: jr          $ra
    // 0x80266D78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80266D78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_80264800_func_80266D10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80266D10:
    // 0x80266D10: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x80266D14: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x80266D18: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x80266D1C: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80266D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266D24: jal         0x8004CD24
    // 0x80266D28: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x80266D28: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_0:
    // 0x80266D2C: addu        $t7, $s4, $s1
    ctx->r15 = ADD32(ctx->r20, ctx->r17);
    // 0x80266D30: addu        $t8, $s5, $s1
    ctx->r24 = ADD32(ctx->r21, ctx->r17);
    // 0x80266D34: lbu         $a2, 0x0($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0X0);
    // 0x80266D38: lbu         $a1, 0x0($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X0);
    // 0x80266D3C: jal         0x8002135C
    // 0x80266D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x80266D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80266D44: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80266D48: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80266D4C: andi        $t9, $s1, 0xFF
    ctx->r25 = ctx->r17 & 0XFF;
    // 0x80266D50: bne         $s0, $s2, L_80266D10
    if (ctx->r16 != ctx->r18) {
        // 0x80266D54: or          $s1, $t9, $zero
        ctx->r17 = ctx->r25 | 0;
            goto L_80266D10;
    }
    // 0x80266D54: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x80266D58: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80266D5C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80266D60: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80266D64: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80266D68: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80266D6C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80266D70: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80266D74: jr          $ra
    // 0x80266D78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80266D78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_80264800_func_80266D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80266D10:
    // 0x80266D28: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80266D2C: addu        $t7, $s4, $s1
    ctx->r15 = ADD32(ctx->r20, ctx->r17);
    // 0x80266D30: addu        $t8, $s5, $s1
    ctx->r24 = ADD32(ctx->r21, ctx->r17);
    // 0x80266D34: lbu         $a2, 0x0($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0X0);
    // 0x80266D38: lbu         $a1, 0x0($t7)
    ctx->r5 = MEM_BU(ctx->r15, 0X0);
    // 0x80266D3C: jal         0x8002135C
    // 0x80266D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x80266D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80266D44: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80266D48: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80266D4C: andi        $t9, $s1, 0xFF
    ctx->r25 = ctx->r17 & 0XFF;
    // 0x80266D50: bne         $s0, $s2, L_80266D10
    if (ctx->r16 != ctx->r18) {
            // 0x80266D54: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    ovl_80264800_func_80266D10(rdram, ctx);
    return;
    }
    // 0x80266D54: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x80266D58: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80266D5C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80266D60: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80266D64: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80266D68: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80266D6C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80266D70: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80266D74: jr          $ra
    // 0x80266D78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80266D78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_80264800_func_80266D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266D7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80266D80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80266D84: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80266D88: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80266D8C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80266D90: lb          $t6, 0x38($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X38);
    // 0x80266D94: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80266D98: bne         $t6, $at, L_80266DB4
    if (ctx->r14 != ctx->r1) {
        // 0x80266D9C: nop
    
            goto L_80266DB4;
    }
    // 0x80266D9C: nop

    // 0x80266DA0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80266DA4: jal         0x8002A468
    // 0x80266DA8: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x80266DA8: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    after_0:
    // 0x80266DAC: b           L_80266DC0
    // 0x80266DB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266DC0;
    // 0x80266DB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266DB4:
    // 0x80266DB4: jal         0x8002A468
    // 0x80266DB8: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x80266DB8: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_1:
    // 0x80266DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266DC0:
    // 0x80266DC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80266DC4: jr          $ra
    // 0x80266DC8: nop

    return;
    // 0x80266DC8: nop

;}
RECOMP_FUNC void ovl_80264800_func_80266DCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266DCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80266DD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80266DD4: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80266DD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80266DDC: jal         0x80029354
    // 0x80266DE0: addiu       $a0, $a0, 0x6E60
    ctx->r4 = ADD32(ctx->r4, 0X6E60);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x80266DE0: addiu       $a0, $a0, 0x6E60
    ctx->r4 = ADD32(ctx->r4, 0X6E60);
    after_0:
    // 0x80266DE4: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80266DE8: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x80266DEC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80266DF0: lb          $t7, 0x2E($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X2E);
    // 0x80266DF4: addiu       $a1, $zero, 0xDE
    ctx->r5 = ADD32(0, 0XDE);
    // 0x80266DF8: bne         $t7, $zero, L_80266E20
    if (ctx->r15 != 0) {
        // 0x80266DFC: addiu       $a2, $zero, 0x4
        ctx->r6 = ADD32(0, 0X4);
            goto L_80266E20;
    }
    // 0x80266DFC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80266E00: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x80266E04: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x80266E08: addiu       $a3, $a3, 0x53B4
    ctx->r7 = ADD32(ctx->r7, 0X53B4);
    // 0x80266E0C: addiu       $a1, $zero, 0xDE
    ctx->r5 = ADD32(0, 0XDE);
    // 0x80266E10: jal         0x8004CD24
    // 0x80266E14: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x80266E14: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x80266E18: b           L_80266E34
    // 0x80266E1C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
        goto L_80266E34;
    // 0x80266E1C: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
L_80266E20:
    // 0x80266E20: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80266E24: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x80266E28: jal         0x8004CD24
    // 0x80266E2C: addiu       $a3, $a3, 0x5D8C
    ctx->r7 = ADD32(ctx->r7, 0X5D8C);
    func_8004CD24(rdram, ctx);
        goto after_2;
    // 0x80266E2C: addiu       $a3, $a3, 0x5D8C
    ctx->r7 = ADD32(ctx->r7, 0X5D8C);
    after_2:
    // 0x80266E30: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
L_80266E34:
    // 0x80266E34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80266E38: jal         0x8002135C
    // 0x80266E3C: addiu       $a2, $zero, 0xCB
    ctx->r6 = ADD32(0, 0XCB);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x80266E3C: addiu       $a2, $zero, 0xCB
    ctx->r6 = ADD32(0, 0XCB);
    after_3:
    // 0x80266E40: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80266E44: addiu       $a1, $zero, 0x88
    ctx->r5 = ADD32(0, 0X88);
    // 0x80266E48: jal         0x8004CD44
    // 0x80266E4C: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    func_8004CD44(rdram, ctx);
        goto after_4;
    // 0x80266E4C: addiu       $a2, $zero, 0x78
    ctx->r6 = ADD32(0, 0X78);
    after_4:
    // 0x80266E50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80266E54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80266E58: jr          $ra
    // 0x80266E5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80266E5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_80264800_func_80266E60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266E60: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80266E64: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80266E68: lb          $v1, 0x38($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X38);
    // 0x80266E6C: nop

    // 0x80266E70: beq         $v1, $at, L_80266E88
    if (ctx->r3 == ctx->r1) {
        // 0x80266E74: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80266E88;
    }
    // 0x80266E74: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80266E78: beq         $v1, $at, L_80266E88
    if (ctx->r3 == ctx->r1) {
        // 0x80266E7C: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80266E88;
    }
    // 0x80266E7C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80266E80: jr          $ra
    // 0x80266E84: sb          $t6, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r14;
    return;
    // 0x80266E84: sb          $t6, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r14;
L_80266E88:
    // 0x80266E88: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x80266E8C: jr          $ra
    // 0x80266E90: nop

    return;
    // 0x80266E90: nop

;}
RECOMP_FUNC void ovl_80264800_func_80266E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266E94: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80266E98: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80266E9C: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80266EA0: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80266EA4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80266EA8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80266EAC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80266EB0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80266EB4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80266EB8: addiu       $a0, $a0, 0x6F5C
    ctx->r4 = ADD32(ctx->r4, 0X6F5C);
    // 0x80266EBC: jal         0x800293DC
    // 0x80266EC0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x80266EC0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x80266EC4: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x80266EC8: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x80266ECC: beq         $s0, $s5, L_80266F38
    if (ctx->r16 == ctx->r21) {
        // 0x80266ED0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80266F38;
    }
    // 0x80266ED0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80266ED4: lui         $s4, 0x801B
    ctx->r20 = S32(0X801B << 16);
    // 0x80266ED8: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x80266EDC: addiu       $s2, $s2, -0x32B0
    ctx->r18 = ADD32(ctx->r18, -0X32B0);
    // 0x80266EE0: addiu       $s4, $s4, 0x1CF0
    ctx->r20 = ADD32(ctx->r20, 0X1CF0);
    // 0x80266EE4: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
L_80266EE8:
    // 0x80266EE8: lbu         $a1, 0x44($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X44);
    // 0x80266EEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266EF0: jal         0x8006D838
    // 0x80266EF4: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    func_8006D838(rdram, ctx);
        goto after_1;
    // 0x80266EF4: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    after_1:
    // 0x80266EF8: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x80266EFC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80266F00: lb          $a1, 0x2E($t6)
    ctx->r5 = MEM_B(ctx->r14, 0X2E);
    // 0x80266F04: jal         0x802671B4
    // 0x80266F08: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    ovl_80264800_func_802671B4(rdram, ctx);
        goto after_2;
    // 0x80266F08: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    after_2:
    // 0x80266F0C: lh          $a1, 0x30($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X30);
    // 0x80266F10: lh          $a2, 0x32($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X32);
    // 0x80266F14: jal         0x8004CD44
    // 0x80266F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_3;
    // 0x80266F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80266F1C: lh          $t7, 0x32($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X32);
    // 0x80266F20: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80266F24: sh          $t7, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r15;
    // 0x80266F28: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80266F2C: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x80266F30: bne         $s0, $s5, L_80266EE8
    if (ctx->r16 != ctx->r21) {
        // 0x80266F34: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_80266EE8;
    }
    // 0x80266F34: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
L_80266F38:
    // 0x80266F38: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80266F3C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80266F40: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80266F44: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80266F48: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80266F4C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80266F50: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80266F54: jr          $ra
    // 0x80266F58: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80266F58: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_80264800_func_80266EBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266EBC: jal         0x800293DC
    // 0x80266EC0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x80266EC0: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x80266EC4: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x80266EC8: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x80266ECC: beq         $s0, $s5, L_80266F38
    if (ctx->r16 == ctx->r21) {
        // 0x80266ED0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80266F38;
    }
    // 0x80266ED0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80266ED4: lui         $s4, 0x801B
    ctx->r20 = S32(0X801B << 16);
    // 0x80266ED8: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x80266EDC: addiu       $s2, $s2, -0x32B0
    ctx->r18 = ADD32(ctx->r18, -0X32B0);
    // 0x80266EE0: addiu       $s4, $s4, 0x1CF0
    ctx->r20 = ADD32(ctx->r20, 0X1CF0);
    // 0x80266EE4: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
L_80266EE8:
    // 0x80266EE8: lbu         $a1, 0x44($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X44);
    // 0x80266EEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80266EF0: jal         0x8006D838
    // 0x80266EF4: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    func_8006D838(rdram, ctx);
        goto after_1;
    // 0x80266EF4: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    after_1:
    // 0x80266EF8: lw          $t6, 0x0($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X0);
    // 0x80266EFC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80266F00: lb          $a1, 0x2E($t6)
    ctx->r5 = MEM_B(ctx->r14, 0X2E);
    // 0x80266F04: jal         0x802671B4
    // 0x80266F08: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    ovl_80264800_func_802671B4(rdram, ctx);
        goto after_2;
    // 0x80266F08: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    after_2:
    // 0x80266F0C: lh          $a1, 0x30($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X30);
    // 0x80266F10: lh          $a2, 0x32($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X32);
    // 0x80266F14: jal         0x8004CD44
    // 0x80266F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_3;
    // 0x80266F18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80266F1C: lh          $t7, 0x32($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X32);
    // 0x80266F20: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80266F24: sh          $t7, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r15;
    // 0x80266F28: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80266F2C: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x80266F30: bne         $s0, $s5, L_80266EE8
    if (ctx->r16 != ctx->r21) {
        // 0x80266F34: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_80266EE8;
    }
    // 0x80266F34: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
L_80266F38:
    // 0x80266F38: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80266F3C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80266F40: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80266F44: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80266F48: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80266F4C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80266F50: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80266F54: jr          $ra
    // 0x80266F58: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80266F58: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void ovl_80264800_func_80266F5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266F5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80266F60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80266F64: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80266F68: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x80266F6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80266F70: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
    // 0x80266F74: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80266F78: beq         $v0, $at, L_80266F98
    if (ctx->r2 == ctx->r1) {
        // 0x80266F7C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80266F98;
    }
    // 0x80266F7C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80266F80: beq         $v0, $at, L_80266F98
    if (ctx->r2 == ctx->r1) {
        // 0x80266F84: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80266F98;
    }
    // 0x80266F84: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80266F88: beq         $v0, $at, L_80266F98
    if (ctx->r2 == ctx->r1) {
        // 0x80266F8C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80266F98;
    }
    // 0x80266F8C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80266F90: bne         $v0, $at, L_80266FA8
    if (ctx->r2 != ctx->r1) {
        // 0x80266F94: nop
    
            goto L_80266FA8;
    }
    // 0x80266F94: nop

L_80266F98:
    // 0x80266F98: jal         0x8002A468
    // 0x80266F9C: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x80266F9C: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    after_0:
    // 0x80266FA0: b           L_80266FB8
    // 0x80266FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80266FB8;
    // 0x80266FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266FA8:
    // 0x80266FA8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80266FAC: jal         0x8002A468
    // 0x80266FB0: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x80266FB0: addiu       $a0, $a0, -0x3228
    ctx->r4 = ADD32(ctx->r4, -0X3228);
    after_1:
    // 0x80266FB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80266FB8:
    // 0x80266FB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80266FBC: jr          $ra
    // 0x80266FC0: nop

    return;
    // 0x80266FC0: nop

;}
RECOMP_FUNC void ovl_80264800_func_80266FC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266FC4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80266FC8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80266FCC: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80266FD0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80266FD4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80266FD8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80266FDC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80266FE0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80266FE4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80266FE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80266FEC: addiu       $a0, $a0, 0x6F5C
    ctx->r4 = ADD32(ctx->r4, 0X6F5C);
    // 0x80266FF0: jal         0x800293DC
    // 0x80266FF4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x80266FF4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x80266FF8: lui         $s5, 0x8012
    ctx->r21 = S32(0X8012 << 16);
    // 0x80266FFC: addiu       $s5, $s5, -0x32B0
    ctx->r21 = ADD32(ctx->r21, -0X32B0);
    // 0x80267000: lb          $t6, 0x44($s5)
    ctx->r14 = MEM_B(ctx->r21, 0X44);
    // 0x80267004: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x80267008: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8026700C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80267010: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80267014: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80267018: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8026701C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80267020: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80267024: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80267028: addiu       $s4, $s4, -0x2CF0
    ctx->r20 = ADD32(ctx->r20, -0X2CF0);
    // 0x8026702C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80267030: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x80267034: addu        $t8, $s4, $t7
    ctx->r24 = ADD32(ctx->r20, ctx->r15);
    // 0x80267038: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x8026703C: lbu         $v1, 0x1($t8)
    ctx->r3 = MEM_BU(ctx->r24, 0X1);
    // 0x80267040: beq         $s0, $s6, L_802670E8
    if (ctx->r16 == ctx->r22) {
        // 0x80267044: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_802670E8;
    }
    // 0x80267044: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80267048: sll         $s3, $v1, 2
    ctx->r19 = S32(ctx->r3 << 2);
    // 0x8026704C: subu        $s3, $s3, $v1
    ctx->r19 = SUB32(ctx->r19, ctx->r3);
    // 0x80267050: sll         $s3, $s3, 2
    ctx->r19 = S32(ctx->r19 << 2);
    // 0x80267054: subu        $s3, $s3, $v1
    ctx->r19 = SUB32(ctx->r19, ctx->r3);
    // 0x80267058: addiu       $s2, $zero, 0x6
    ctx->r18 = ADD32(0, 0X6);
L_8026705C:
    // 0x8026705C: multu       $s1, $s2
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80267060: lb          $t9, 0x44($s5)
    ctx->r25 = MEM_B(ctx->r21, 0X44);
    // 0x80267064: sll         $t2, $s3, 2
    ctx->r10 = S32(ctx->r19 << 2);
    // 0x80267068: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8026706C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80267070: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80267074: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80267078: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8026707C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80267080: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80267084: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80267088: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8026708C: subu        $t2, $t2, $s3
    ctx->r10 = SUB32(ctx->r10, ctx->r19);
    // 0x80267090: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x80267094: addu        $t1, $s4, $t0
    ctx->r9 = ADD32(ctx->r20, ctx->r8);
    // 0x80267098: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8026709C: mflo        $t4
    ctx->r12 = lo;
    // 0x802670A0: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x802670A4: lbu         $v0, 0x41C($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X41C);
    // 0x802670A8: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
    // 0x802670AC: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x802670B0: beq         $t6, $zero, L_802670D0
    if (ctx->r14 == 0) {
        // 0x802670B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802670D0;
    }
    // 0x802670B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802670B8: sll         $a1, $v1, 24
    ctx->r5 = S32(ctx->r3 << 24);
    // 0x802670BC: sra         $t7, $a1, 24
    ctx->r15 = S32(SIGNED(ctx->r5) >> 24);
    // 0x802670C0: jal         0x80267110
    // 0x802670C4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    ovl_80264800_func_80267110(rdram, ctx);
        goto after_1;
    // 0x802670C4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_1:
    // 0x802670C8: b           L_802670D8
    // 0x802670CC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802670D8;
    // 0x802670CC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802670D0:
    // 0x802670D0: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x802670D4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802670D8:
    // 0x802670D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802670DC: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x802670E0: bne         $s0, $s6, L_8026705C
    if (ctx->r16 != ctx->r22) {
        // 0x802670E4: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_8026705C;
    }
    // 0x802670E4: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
L_802670E8:
    // 0x802670E8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802670EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802670F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802670F4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802670F8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802670FC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80267100: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80267104: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80267108: jr          $ra
    // 0x8026710C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8026710C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_80264800_func_80266FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80266FCC: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80266FD0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80266FD4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80266FD8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80266FDC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80266FE0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80266FE4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80266FE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80266FEC: addiu       $a0, $a0, 0x6F5C
    ctx->r4 = ADD32(ctx->r4, 0X6F5C);
    // 0x80266FF0: jal         0x800293DC
    // 0x80266FF4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x80266FF4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x80266FF8: lui         $s5, 0x8012
    ctx->r21 = S32(0X8012 << 16);
    // 0x80266FFC: addiu       $s5, $s5, -0x32B0
    ctx->r21 = ADD32(ctx->r21, -0X32B0);
    // 0x80267000: lb          $t6, 0x44($s5)
    ctx->r14 = MEM_B(ctx->r21, 0X44);
    // 0x80267004: lui         $s4, 0x8012
    ctx->r20 = S32(0X8012 << 16);
    // 0x80267008: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8026700C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80267010: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80267014: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80267018: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8026701C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80267020: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80267024: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80267028: addiu       $s4, $s4, -0x2CF0
    ctx->r20 = ADD32(ctx->r20, -0X2CF0);
    // 0x8026702C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80267030: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x80267034: addu        $t8, $s4, $t7
    ctx->r24 = ADD32(ctx->r20, ctx->r15);
    // 0x80267038: addiu       $s6, $zero, -0x1
    ctx->r22 = ADD32(0, -0X1);
    // 0x8026703C: lbu         $v1, 0x1($t8)
    ctx->r3 = MEM_BU(ctx->r24, 0X1);
    // 0x80267040: beq         $s0, $s6, L_802670E8
    if (ctx->r16 == ctx->r22) {
        // 0x80267044: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_802670E8;
    }
    // 0x80267044: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80267048: sll         $s3, $v1, 2
    ctx->r19 = S32(ctx->r3 << 2);
    // 0x8026704C: subu        $s3, $s3, $v1
    ctx->r19 = SUB32(ctx->r19, ctx->r3);
    // 0x80267050: sll         $s3, $s3, 2
    ctx->r19 = S32(ctx->r19 << 2);
    // 0x80267054: subu        $s3, $s3, $v1
    ctx->r19 = SUB32(ctx->r19, ctx->r3);
    // 0x80267058: addiu       $s2, $zero, 0x6
    ctx->r18 = ADD32(0, 0X6);
L_8026705C:
    // 0x8026705C: multu       $s1, $s2
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80267060: lb          $t9, 0x44($s5)
    ctx->r25 = MEM_B(ctx->r21, 0X44);
    // 0x80267064: sll         $t2, $s3, 2
    ctx->r10 = S32(ctx->r19 << 2);
    // 0x80267068: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8026706C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80267070: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80267074: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80267078: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8026707C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80267080: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80267084: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80267088: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8026708C: subu        $t2, $t2, $s3
    ctx->r10 = SUB32(ctx->r10, ctx->r19);
    // 0x80267090: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x80267094: addu        $t1, $s4, $t0
    ctx->r9 = ADD32(ctx->r20, ctx->r8);
    // 0x80267098: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8026709C: mflo        $t4
    ctx->r12 = lo;
    // 0x802670A0: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x802670A4: lbu         $v0, 0x41C($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X41C);
    // 0x802670A8: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
    // 0x802670AC: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x802670B0: beq         $t6, $zero, L_802670D0
    if (ctx->r14 == 0) {
        // 0x802670B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802670D0;
    }
    // 0x802670B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802670B8: sll         $a1, $v1, 24
    ctx->r5 = S32(ctx->r3 << 24);
    // 0x802670BC: sra         $t7, $a1, 24
    ctx->r15 = S32(SIGNED(ctx->r5) >> 24);
    // 0x802670C0: jal         0x80267110
    // 0x802670C4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    ovl_80264800_func_80267110(rdram, ctx);
        goto after_1;
    // 0x802670C4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_1:
    // 0x802670C8: b           L_802670D8
    // 0x802670CC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802670D8;
    // 0x802670CC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802670D0:
    // 0x802670D0: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x802670D4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802670D8:
    // 0x802670D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802670DC: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x802670E0: bne         $s0, $s6, L_8026705C
    if (ctx->r16 != ctx->r22) {
        // 0x802670E4: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_8026705C;
    }
    // 0x802670E4: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
L_802670E8:
    // 0x802670E8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802670EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802670F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802670F4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802670F8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802670FC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80267100: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80267104: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80267108: jr          $ra
    // 0x8026710C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8026710C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_80264800_func_80267044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267044: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80267048: sll         $s3, $v1, 2
    ctx->r19 = S32(ctx->r3 << 2);
    // 0x8026704C: subu        $s3, $s3, $v1
    ctx->r19 = SUB32(ctx->r19, ctx->r3);
    // 0x80267050: sll         $s3, $s3, 2
    ctx->r19 = S32(ctx->r19 << 2);
    // 0x80267054: subu        $s3, $s3, $v1
    ctx->r19 = SUB32(ctx->r19, ctx->r3);
    // 0x80267058: addiu       $s2, $zero, 0x6
    ctx->r18 = ADD32(0, 0X6);
L_8026705C:
    // 0x8026705C: multu       $s1, $s2
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80267060: lb          $t9, 0x44($s5)
    ctx->r25 = MEM_B(ctx->r21, 0X44);
    // 0x80267064: sll         $t2, $s3, 2
    ctx->r10 = S32(ctx->r19 << 2);
    // 0x80267068: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8026706C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80267070: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80267074: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80267078: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8026707C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80267080: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80267084: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80267088: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8026708C: subu        $t2, $t2, $s3
    ctx->r10 = SUB32(ctx->r10, ctx->r19);
    // 0x80267090: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x80267094: addu        $t1, $s4, $t0
    ctx->r9 = ADD32(ctx->r20, ctx->r8);
    // 0x80267098: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8026709C: mflo        $t4
    ctx->r12 = lo;
    // 0x802670A0: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x802670A4: lbu         $v0, 0x41C($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X41C);
    // 0x802670A8: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
    // 0x802670AC: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x802670B0: beq         $t6, $zero, L_802670D0
    if (ctx->r14 == 0) {
        // 0x802670B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802670D0;
    }
    // 0x802670B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802670B8: sll         $a1, $v1, 24
    ctx->r5 = S32(ctx->r3 << 24);
    // 0x802670BC: sra         $t7, $a1, 24
    ctx->r15 = S32(SIGNED(ctx->r5) >> 24);
    // 0x802670C0: jal         0x80267110
    // 0x802670C4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    ovl_80264800_func_80267110(rdram, ctx);
        goto after_0;
    // 0x802670C4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_0:
    // 0x802670C8: b           L_802670D8
    // 0x802670CC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802670D8;
    // 0x802670CC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802670D0:
    // 0x802670D0: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x802670D4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802670D8:
    // 0x802670D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802670DC: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x802670E0: bne         $s0, $s6, L_8026705C
    if (ctx->r16 != ctx->r22) {
        // 0x802670E4: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_8026705C;
    }
    // 0x802670E4: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x802670E8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802670EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802670F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802670F4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802670F8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802670FC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80267100: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80267104: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80267108: jr          $ra
    // 0x8026710C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8026710C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_80264800_func_8026705C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8026705C:
    // 0x8026705C: multu       $s1, $s2
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80267060: lb          $t9, 0x44($s5)
    ctx->r25 = MEM_B(ctx->r21, 0X44);
    // 0x80267064: sll         $t2, $s3, 2
    ctx->r10 = S32(ctx->r19 << 2);
    // 0x80267068: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8026706C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80267070: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80267074: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80267078: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8026707C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80267080: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80267084: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80267088: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8026708C: subu        $t2, $t2, $s3
    ctx->r10 = SUB32(ctx->r10, ctx->r19);
    // 0x80267090: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x80267094: addu        $t1, $s4, $t0
    ctx->r9 = ADD32(ctx->r20, ctx->r8);
    // 0x80267098: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8026709C: mflo        $t4
    ctx->r12 = lo;
    // 0x802670A0: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x802670A4: lbu         $v0, 0x41C($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X41C);
    // 0x802670A8: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
    // 0x802670AC: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x802670B0: beq         $t6, $zero, L_802670D0
    if (ctx->r14 == 0) {
        // 0x802670B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802670D0;
    }
    // 0x802670B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802670B8: sll         $a1, $v1, 24
    ctx->r5 = S32(ctx->r3 << 24);
    // 0x802670BC: sra         $t7, $a1, 24
    ctx->r15 = S32(SIGNED(ctx->r5) >> 24);
    // 0x802670C0: jal         0x80267110
    // 0x802670C4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    ovl_80264800_func_80267110(rdram, ctx);
        goto after_0;
    // 0x802670C4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_0:
    // 0x802670C8: b           L_802670D8
    // 0x802670CC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802670D8;
    // 0x802670CC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802670D0:
    // 0x802670D0: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x802670D4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802670D8:
    // 0x802670D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802670DC: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x802670E0: bne         $s0, $s6, L_8026705C
    if (ctx->r16 != ctx->r22) {
        // 0x802670E4: or          $s1, $t8, $zero
        ctx->r17 = ctx->r24 | 0;
            goto L_8026705C;
    }
    // 0x802670E4: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x802670E8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802670EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802670F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802670F4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802670F8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802670FC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80267100: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80267104: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80267108: jr          $ra
    // 0x8026710C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8026710C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_80264800_func_80267090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8026705C:
    // 0x80267090: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x80267094: addu        $t1, $s4, $t0
    ctx->r9 = ADD32(ctx->r20, ctx->r8);
    // 0x80267098: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8026709C: mflo        $t4
    ctx->r12 = lo;
    // 0x802670A0: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x802670A4: lbu         $v0, 0x41C($t5)
    ctx->r2 = MEM_BU(ctx->r13, 0X41C);
    // 0x802670A8: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
    // 0x802670AC: andi        $t6, $v0, 0x80
    ctx->r14 = ctx->r2 & 0X80;
    // 0x802670B0: beq         $t6, $zero, L_802670D0
    if (ctx->r14 == 0) {
        // 0x802670B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_802670D0;
    }
    // 0x802670B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802670B8: sll         $a1, $v1, 24
    ctx->r5 = S32(ctx->r3 << 24);
    // 0x802670BC: sra         $t7, $a1, 24
    ctx->r15 = S32(SIGNED(ctx->r5) >> 24);
    // 0x802670C0: jal         0x80267110
    // 0x802670C4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    ovl_80264800_func_80267110(rdram, ctx);
        goto after_0;
    // 0x802670C4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_0:
    // 0x802670C8: b           L_802670D8
    // 0x802670CC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
        goto L_802670D8;
    // 0x802670CC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802670D0:
    // 0x802670D0: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x802670D4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
L_802670D8:
    // 0x802670D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802670DC: andi        $t8, $s1, 0xFF
    ctx->r24 = ctx->r17 & 0XFF;
    // 0x802670E0: bne         $s0, $s6, L_8026705C
    if (ctx->r16 != ctx->r22) {
            // 0x802670E4: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    ovl_80264800_func_8026705C(rdram, ctx);
    return;
    }
    // 0x802670E4: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x802670E8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802670EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802670F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802670F4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802670F8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802670FC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80267100: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80267104: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80267108: jr          $ra
    // 0x8026710C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8026710C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void ovl_80264800_func_80267110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267110: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80267114: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80267118: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x8026711C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80267120: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80267124: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80267128: lb          $t7, 0x2E($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X2E);
    // 0x8026712C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80267130: bne         $t7, $zero, L_80267148
    if (ctx->r15 != 0) {
        // 0x80267134: addiu       $t0, $zero, 0x30B
        ctx->r8 = ADD32(0, 0X30B);
            goto L_80267148;
    }
    // 0x80267134: addiu       $t0, $zero, 0x30B
    ctx->r8 = ADD32(0, 0X30B);
    // 0x80267138: lui         $t8, 0x803D
    ctx->r24 = S32(0X803D << 16);
    // 0x8026713C: addiu       $t8, $t8, -0x728C
    ctx->r24 = ADD32(ctx->r24, -0X728C);
    // 0x80267140: b           L_80267154
    // 0x80267144: sw          $t8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r24;
        goto L_80267154;
    // 0x80267144: sw          $t8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r24;
L_80267148:
    // 0x80267148: lui         $t9, 0x803D
    ctx->r25 = S32(0X803D << 16);
    // 0x8026714C: addiu       $t9, $t9, -0x72E0
    ctx->r25 = ADD32(ctx->r25, -0X72E0);
    // 0x80267150: sw          $t9, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r25;
L_80267154:
    // 0x80267154: sh          $t0, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r8;
    // 0x80267158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026715C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80267160: jal         0x8002135C
    // 0x80267164: addiu       $a2, $zero, 0xFA
    ctx->r6 = ADD32(0, 0XFA);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x80267164: addiu       $a2, $zero, 0xFA
    ctx->r6 = ADD32(0, 0XFA);
    after_0:
    // 0x80267168: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x8026716C: sb          $t1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r9;
    // 0x80267170: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x80267174: lw          $t2, 0x1CF0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X1CF0);
    // 0x80267178: lbu         $a2, 0x2F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X2F);
    // 0x8026717C: lb          $a1, 0x2E($t2)
    ctx->r5 = MEM_B(ctx->r10, 0X2E);
    // 0x80267180: jal         0x802671B4
    // 0x80267184: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    ovl_80264800_func_802671B4(rdram, ctx);
        goto after_1;
    // 0x80267184: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x80267188: lh          $a1, 0x24($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X24);
    // 0x8026718C: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x80267190: jal         0x8004CD44
    // 0x80267194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x80267194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80267198: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x8026719C: nop

    // 0x802671A0: sh          $t3, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r11;
    // 0x802671A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802671A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802671AC: jr          $ra
    // 0x802671B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802671B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_80264800_func_802671B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802671B4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x802671B8: lb          $t7, -0x326C($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X326C);
    // 0x802671BC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x802671C0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x802671C4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x802671C8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802671CC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x802671D0: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x802671D4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x802671D8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802671DC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x802671E0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802671E4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x802671E8: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x802671EC: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x802671F0: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x802671F4: lbu         $a2, 0x1($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X1);
    // 0x802671F8: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x802671FC: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x80267200: subu        $t3, $t3, $a2
    ctx->r11 = SUB32(ctx->r11, ctx->r6);
    // 0x80267204: sll         $a3, $a1, 24
    ctx->r7 = S32(ctx->r5 << 24);
    // 0x80267208: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8026720C: lbu         $a1, 0x5B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X5B);
    // 0x80267210: subu        $t3, $t3, $a2
    ctx->r11 = SUB32(ctx->r11, ctx->r6);
    // 0x80267214: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80267218: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8026721C: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80267220: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x80267224: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x80267228: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x8026722C: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x80267230: addu        $v1, $t5, $t7
    ctx->r3 = ADD32(ctx->r13, ctx->r15);
    // 0x80267234: sra         $t6, $a3, 24
    ctx->r14 = S32(SIGNED(ctx->r7) >> 24);
    // 0x80267238: lh          $t1, 0x418($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X418);
    // 0x8026723C: lh          $t2, 0x41A($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X41A);
    // 0x80267240: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x80267244: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x80267248: addiu       $t8, $t8, -0x694C
    ctx->r24 = ADD32(ctx->r24, -0X694C);
    // 0x8026724C: sll         $t0, $a3, 4
    ctx->r8 = S32(ctx->r7 << 4);
    // 0x80267250: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80267254: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80267258: addu        $t9, $t0, $t8
    ctx->r25 = ADD32(ctx->r8, ctx->r24);
    // 0x8026725C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80267260: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80267264: lwl         $at, 0x0($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X0);
    // 0x80267268: lwr         $at, 0x3($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3);
    // 0x8026726C: lui         $t5, 0x8027
    ctx->r13 = S32(0X8027 << 16);
    // 0x80267270: swl         $at, 0x18($sp)
    do_swl(rdram, 0X18, ctx->r29, ctx->r1);
    // 0x80267274: swr         $at, 0x1B($sp)
    do_swr(rdram, 0X1B, ctx->r29, ctx->r1);
    // 0x80267278: lwl         $t4, 0x4($t9)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r25, 0X4);
    // 0x8026727C: lwr         $t4, 0x7($t9)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r25, 0X7);
    // 0x80267280: addiu       $t5, $t5, -0x692C
    ctx->r13 = ADD32(ctx->r13, -0X692C);
    // 0x80267284: swl         $t4, 0x1C($sp)
    do_swl(rdram, 0X1C, ctx->r29, ctx->r12);
    // 0x80267288: swr         $t4, 0x1F($sp)
    do_swr(rdram, 0X1F, ctx->r29, ctx->r12);
    // 0x8026728C: lwl         $at, 0x8($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X8);
    // 0x80267290: lwr         $at, 0xB($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0XB);
    // 0x80267294: addu        $t7, $t0, $t5
    ctx->r15 = ADD32(ctx->r8, ctx->r13);
    // 0x80267298: swl         $at, 0x20($sp)
    do_swl(rdram, 0X20, ctx->r29, ctx->r1);
    // 0x8026729C: swr         $at, 0x23($sp)
    do_swr(rdram, 0X23, ctx->r29, ctx->r1);
    // 0x802672A0: lwl         $t4, 0xC($t9)
    ctx->r12 = do_lwl(rdram, ctx->r12, ctx->r25, 0XC);
    // 0x802672A4: lwr         $t4, 0xF($t9)
    ctx->r12 = do_lwr(rdram, ctx->r12, ctx->r25, 0XF);
    // 0x802672A8: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x802672AC: swl         $t4, 0x24($sp)
    do_swl(rdram, 0X24, ctx->r29, ctx->r12);
    // 0x802672B0: swr         $t4, 0x27($sp)
    do_swr(rdram, 0X27, ctx->r29, ctx->r12);
    // 0x802672B4: lwl         $at, 0x0($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X0);
    // 0x802672B8: lwr         $at, 0x3($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X3);
    // 0x802672BC: nop

    // 0x802672C0: swl         $at, 0x28($sp)
    do_swl(rdram, 0X28, ctx->r29, ctx->r1);
    // 0x802672C4: swr         $at, 0x2B($sp)
    do_swr(rdram, 0X2B, ctx->r29, ctx->r1);
    // 0x802672C8: lwl         $t8, 0x4($t7)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r15, 0X4);
    // 0x802672CC: lwr         $t8, 0x7($t7)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r15, 0X7);
    // 0x802672D0: nop

    // 0x802672D4: swl         $t8, 0x2C($sp)
    do_swl(rdram, 0X2C, ctx->r29, ctx->r24);
    // 0x802672D8: swr         $t8, 0x2F($sp)
    do_swr(rdram, 0X2F, ctx->r29, ctx->r24);
    // 0x802672DC: lwl         $at, 0x8($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X8);
    // 0x802672E0: lwr         $at, 0xB($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0XB);
    // 0x802672E4: nop

    // 0x802672E8: swl         $at, 0x30($sp)
    do_swl(rdram, 0X30, ctx->r29, ctx->r1);
    // 0x802672EC: swr         $at, 0x33($sp)
    do_swr(rdram, 0X33, ctx->r29, ctx->r1);
    // 0x802672F0: lwl         $t8, 0xC($t7)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r15, 0XC);
    // 0x802672F4: lwr         $t8, 0xF($t7)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r15, 0XF);
    // 0x802672F8: nop

    // 0x802672FC: swl         $t8, 0x34($sp)
    do_swl(rdram, 0X34, ctx->r29, ctx->r24);
    // 0x80267300: jal         0x8006D974
    // 0x80267304: swr         $t8, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r24);
    func_8006D974(rdram, ctx);
        goto after_0;
    // 0x80267304: swr         $t8, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r24);
    after_0:
    // 0x80267308: addiu       $t3, $sp, 0x44
    ctx->r11 = ADD32(ctx->r29, 0X44);
    // 0x8026730C: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x80267310: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x80267314: nop

    // 0x80267318: swl         $at, 0x0($v0)
    do_swl(rdram, 0X0, ctx->r2, ctx->r1);
    // 0x8026731C: swr         $at, 0x3($v0)
    do_swr(rdram, 0X3, ctx->r2, ctx->r1);
    // 0x80267320: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80267324: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80267328: jr          $ra
    // 0x8026732C: nop

    return;
    // 0x8026732C: nop

;}
RECOMP_FUNC void ovl_80264800_func_802672B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802672B4: lwl         $at, 0x0($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X0);
    // 0x802672B8: lwr         $at, 0x3($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X3);
    // 0x802672BC: nop

    // 0x802672C0: swl         $at, 0x28($sp)
    do_swl(rdram, 0X28, ctx->r29, ctx->r1);
    // 0x802672C4: swr         $at, 0x2B($sp)
    do_swr(rdram, 0X2B, ctx->r29, ctx->r1);
    // 0x802672C8: lwl         $t8, 0x4($t7)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r15, 0X4);
    // 0x802672CC: lwr         $t8, 0x7($t7)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r15, 0X7);
    // 0x802672D0: nop

    // 0x802672D4: swl         $t8, 0x2C($sp)
    do_swl(rdram, 0X2C, ctx->r29, ctx->r24);
    // 0x802672D8: swr         $t8, 0x2F($sp)
    do_swr(rdram, 0X2F, ctx->r29, ctx->r24);
    // 0x802672DC: lwl         $at, 0x8($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X8);
    // 0x802672E0: lwr         $at, 0xB($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0XB);
    // 0x802672E4: nop

    // 0x802672E8: swl         $at, 0x30($sp)
    do_swl(rdram, 0X30, ctx->r29, ctx->r1);
    // 0x802672EC: swr         $at, 0x33($sp)
    do_swr(rdram, 0X33, ctx->r29, ctx->r1);
    // 0x802672F0: lwl         $t8, 0xC($t7)
    ctx->r24 = do_lwl(rdram, ctx->r24, ctx->r15, 0XC);
    // 0x802672F4: lwr         $t8, 0xF($t7)
    ctx->r24 = do_lwr(rdram, ctx->r24, ctx->r15, 0XF);
    // 0x802672F8: nop

    // 0x802672FC: swl         $t8, 0x34($sp)
    do_swl(rdram, 0X34, ctx->r29, ctx->r24);
    // 0x80267300: jal         0x8006D974
    // 0x80267304: swr         $t8, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r24);
    func_8006D974(rdram, ctx);
        goto after_0;
    // 0x80267304: swr         $t8, 0x37($sp)
    do_swr(rdram, 0X37, ctx->r29, ctx->r24);
    after_0:
    // 0x80267308: addiu       $t3, $sp, 0x44
    ctx->r11 = ADD32(ctx->r29, 0X44);
    // 0x8026730C: lw          $v0, 0x50($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X50);
    // 0x80267310: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x80267314: nop

    // 0x80267318: swl         $at, 0x0($v0)
    do_swl(rdram, 0X0, ctx->r2, ctx->r1);
    // 0x8026731C: swr         $at, 0x3($v0)
    do_swr(rdram, 0X3, ctx->r2, ctx->r1);
    // 0x80267320: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80267324: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80267328: jr          $ra
    // 0x8026732C: nop

    return;
    // 0x8026732C: nop

;}
RECOMP_FUNC void ovl_80264800_func_8026732C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026732C: nop

;}
RECOMP_FUNC void ovl_80264800_func_80267330(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267330: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80267334: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80267338: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8026733C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80267340: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80267344: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80267348: jal         0x8002F224
    // 0x8026734C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_8002F224(rdram, ctx);
        goto after_0;
    // 0x8026734C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_0:
    // 0x80267350: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x80267354: nop

    // 0x80267358: lbu         $t6, 0x38($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X38);
    // 0x8026735C: nop

    // 0x80267360: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x80267364: beq         $at, $zero, L_802674A8
    if (ctx->r1 == 0) {
        // 0x80267368: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_802674A8;
    }
    // 0x80267368: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8026736C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80267370: addu        $at, $at, $t6
    gpr jr_addend_8026737C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80267374: lw          $t6, -0x6578($at)
    ctx->r14 = ADD32(ctx->r1, -0X6578);
    // 0x80267378: nop

    // 0x8026737C: jr          $t6
    // 0x80267380: nop

    switch (jr_addend_8026737C >> 2) {
        case 0: goto L_802674A8; break;
        case 1: goto L_80267384; break;
        case 2: goto L_802673A0; break;
        case 3: goto L_802673BC; break;
        case 4: goto L_802673EC; break;
        case 5: goto L_80267470; break;
        default: switch_error(__func__, 0x8026737C, 0x80269A88);
    }
    // 0x80267380: nop

L_80267384:
    // 0x80267384: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80267388: addiu       $a1, $a1, -0x690C
    ctx->r5 = ADD32(ctx->r5, -0X690C);
    // 0x8026738C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80267390: jal         0x8002F444
    // 0x80267394: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_1;
    // 0x80267394: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80267398: b           L_802674AC
    // 0x8026739C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802674AC;
    // 0x8026739C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802673A0:
    // 0x802673A0: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802673A4: addiu       $a1, $a1, -0x68FC
    ctx->r5 = ADD32(ctx->r5, -0X68FC);
    // 0x802673A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802673AC: jal         0x8002F444
    // 0x802673B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_2;
    // 0x802673B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x802673B4: b           L_802674AC
    // 0x802673B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802674AC;
    // 0x802673B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802673BC:
    // 0x802673BC: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802673C0: addiu       $a1, $a1, -0x68EC
    ctx->r5 = ADD32(ctx->r5, -0X68EC);
    // 0x802673C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802673C8: jal         0x8002F444
    // 0x802673CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_3;
    // 0x802673CC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x802673D0: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802673D4: addiu       $a1, $a1, -0x68AC
    ctx->r5 = ADD32(ctx->r5, -0X68AC);
    // 0x802673D8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802673DC: jal         0x8002F444
    // 0x802673E0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8002F444(rdram, ctx);
        goto after_4;
    // 0x802673E0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_4:
    // 0x802673E4: b           L_802674AC
    // 0x802673E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802674AC;
    // 0x802673E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802673EC:
    // 0x802673EC: lb          $t7, 0x3B($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X3B);
    // 0x802673F0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x802673F4: bne         $t7, $zero, L_80267418
    if (ctx->r15 != 0) {
        // 0x802673F8: addiu       $a0, $a0, -0x3888
        ctx->r4 = ADD32(ctx->r4, -0X3888);
            goto L_80267418;
    }
    // 0x802673F8: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x802673FC: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80267400: addiu       $a1, $a1, -0x68DC
    ctx->r5 = ADD32(ctx->r5, -0X68DC);
    // 0x80267404: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80267408: jal         0x8002F444
    // 0x8026740C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_5;
    // 0x8026740C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x80267410: b           L_802674AC
    // 0x80267414: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802674AC;
    // 0x80267414: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80267418:
    // 0x80267418: lb          $t8, 0x3E($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X3E);
    // 0x8026741C: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x80267420: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80267424: lb          $t1, 0x45($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X45);
    // 0x80267428: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8026742C: lw          $t0, 0x5DA8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5DA8);
    // 0x80267430: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80267434: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80267438: lw          $a3, 0x0($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X0);
    // 0x8026743C: addiu       $t4, $zero, 0x15
    ctx->r12 = ADD32(0, 0X15);
    // 0x80267440: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80267444: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80267448: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x8026744C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80267450: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80267454: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80267458: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8026745C: addiu       $a1, $zero, 0x93
    ctx->r5 = ADD32(0, 0X93);
    // 0x80267460: jal         0x8002F528
    // 0x80267464: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    func_8002F528(rdram, ctx);
        goto after_6;
    // 0x80267464: addiu       $a2, $zero, 0x32
    ctx->r6 = ADD32(0, 0X32);
    after_6:
    // 0x80267468: b           L_802674AC
    // 0x8026746C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802674AC;
    // 0x8026746C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80267470:
    // 0x80267470: lb          $t8, 0x3A($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X3A);
    // 0x80267474: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80267478: bne         $t8, $zero, L_8026749C
    if (ctx->r24 != 0) {
        // 0x8026747C: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_8026749C;
    }
    // 0x8026747C: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80267480: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80267484: addiu       $a1, $a1, -0x68CC
    ctx->r5 = ADD32(ctx->r5, -0X68CC);
    // 0x80267488: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8026748C: jal         0x8002F444
    // 0x80267490: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8002F444(rdram, ctx);
        goto after_7;
    // 0x80267490: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80267494: b           L_802674AC
    // 0x80267498: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_802674AC;
    // 0x80267498: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8026749C:
    // 0x8026749C: addiu       $a1, $a1, -0x68CC
    ctx->r5 = ADD32(ctx->r5, -0X68CC);
    // 0x802674A0: jal         0x8002F444
    // 0x802674A4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8002F444(rdram, ctx);
        goto after_8;
    // 0x802674A4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_8:
L_802674A8:
    // 0x802674A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_802674AC:
    // 0x802674AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802674B0: jr          $ra
    // 0x802674B4: nop

    return;
    // 0x802674B4: nop

;}
RECOMP_FUNC void ovl_80264800_func_802674B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802674B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802674BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802674C0: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x802674C4: addiu       $a0, $a0, 0x74E0
    ctx->r4 = ADD32(ctx->r4, 0X74E0);
    // 0x802674C8: jal         0x800293DC
    // 0x802674CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x802674CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x802674D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802674D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802674D8: jr          $ra
    // 0x802674DC: nop

    return;
    // 0x802674DC: nop

;}
RECOMP_FUNC void ovl_80264800_func_802674E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802674E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802674E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802674E8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x802674EC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x802674F0: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    // 0x802674F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802674F8: jal         0x8002A468
    // 0x802674FC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x802674FC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x80267500: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80267504: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80267508: lbu         $t6, 0x38($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X38);
    // 0x8026750C: nop

    // 0x80267510: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x80267514: beq         $at, $zero, L_80267628
    if (ctx->r1 == 0) {
        // 0x80267518: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80267628;
    }
    // 0x80267518: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8026751C: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x80267520: addu        $at, $at, $t6
    gpr jr_addend_8026752C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80267524: lw          $t6, -0x6560($at)
    ctx->r14 = ADD32(ctx->r1, -0X6560);
    // 0x80267528: nop

    // 0x8026752C: jr          $t6
    // 0x80267530: nop

    switch (jr_addend_8026752C >> 2) {
        case 0: goto L_80267628; break;
        case 1: goto L_80267534; break;
        case 2: goto L_80267578; break;
        case 3: goto L_80267594; break;
        case 4: goto L_802675B0; break;
        case 5: goto L_802675F0; break;
        default: switch_error(__func__, 0x8026752C, 0x80269AA0);
    }
    // 0x80267530: nop

L_80267534:
    // 0x80267534: lb          $t7, 0x43($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X43);
    // 0x80267538: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8026753C: bne         $t7, $at, L_80267560
    if (ctx->r15 != ctx->r1) {
        // 0x80267540: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80267560;
    }
    // 0x80267540: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80267544: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80267548: addiu       $a1, $a1, -0x687C
    ctx->r5 = ADD32(ctx->r5, -0X687C);
    // 0x8026754C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80267550: jal         0x8004A298
    // 0x80267554: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x80267554: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x80267558: b           L_8026762C
    // 0x8026755C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026762C;
    // 0x8026755C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80267560:
    // 0x80267560: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80267564: addiu       $a1, $a1, -0x6868
    ctx->r5 = ADD32(ctx->r5, -0X6868);
    // 0x80267568: jal         0x8004A298
    // 0x8026756C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004A298(rdram, ctx);
        goto after_2;
    // 0x8026756C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x80267570: b           L_8026762C
    // 0x80267574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026762C;
    // 0x80267574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80267578:
    // 0x80267578: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026757C: addiu       $a1, $a1, -0x6854
    ctx->r5 = ADD32(ctx->r5, -0X6854);
    // 0x80267580: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80267584: jal         0x8004A298
    // 0x80267588: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_3;
    // 0x80267588: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x8026758C: b           L_8026762C
    // 0x80267590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026762C;
    // 0x80267590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80267594:
    // 0x80267594: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80267598: addiu       $a1, $a1, -0x684A
    ctx->r5 = ADD32(ctx->r5, -0X684A);
    // 0x8026759C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x802675A0: jal         0x8004A298
    // 0x802675A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_4;
    // 0x802675A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x802675A8: b           L_8026762C
    // 0x802675AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026762C;
    // 0x802675AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802675B0:
    // 0x802675B0: lb          $t8, 0x3B($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X3B);
    // 0x802675B4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x802675B8: bne         $t8, $zero, L_802675DC
    if (ctx->r24 != 0) {
        // 0x802675BC: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_802675DC;
    }
    // 0x802675BC: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802675C0: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x802675C4: addiu       $a1, $a1, -0x6840
    ctx->r5 = ADD32(ctx->r5, -0X6840);
    // 0x802675C8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x802675CC: jal         0x8004A298
    // 0x802675D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_5;
    // 0x802675D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x802675D4: b           L_8026762C
    // 0x802675D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026762C;
    // 0x802675D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802675DC:
    // 0x802675DC: addiu       $a1, $a1, -0x6836
    ctx->r5 = ADD32(ctx->r5, -0X6836);
    // 0x802675E0: jal         0x8004A298
    // 0x802675E4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004A298(rdram, ctx);
        goto after_6;
    // 0x802675E4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_6:
    // 0x802675E8: b           L_8026762C
    // 0x802675EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026762C;
    // 0x802675EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802675F0:
    // 0x802675F0: lb          $t9, 0x3A($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X3A);
    // 0x802675F4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x802675F8: bne         $t9, $zero, L_8026761C
    if (ctx->r25 != 0) {
        // 0x802675FC: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_8026761C;
    }
    // 0x802675FC: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80267600: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x80267604: addiu       $a1, $a1, -0x6822
    ctx->r5 = ADD32(ctx->r5, -0X6822);
    // 0x80267608: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8026760C: jal         0x8004A298
    // 0x80267610: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004A298(rdram, ctx);
        goto after_7;
    // 0x80267610: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_7:
    // 0x80267614: b           L_8026762C
    // 0x80267618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026762C;
    // 0x80267618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026761C:
    // 0x8026761C: addiu       $a1, $a1, -0x6822
    ctx->r5 = ADD32(ctx->r5, -0X6822);
    // 0x80267620: jal         0x8004A298
    // 0x80267624: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8004A298(rdram, ctx);
        goto after_8;
    // 0x80267624: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_8:
L_80267628:
    // 0x80267628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026762C:
    // 0x8026762C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80267630: jr          $ra
    // 0x80267634: nop

    return;
    // 0x80267634: nop

;}
RECOMP_FUNC void ovl_80264800_func_80267638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267638: jr          $ra
    // 0x8026763C: nop

    return;
    // 0x8026763C: nop

;}
RECOMP_FUNC void ovl_80264800_func_80267640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267640: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80267644: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80267648: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026764C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80267650: lw          $s0, 0x8($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X8);
    // 0x80267654: nop

    // 0x80267658: lb          $t6, 0x48($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X48);
    // 0x8026765C: nop

    // 0x80267660: beq         $t6, $zero, L_802676BC
    if (ctx->r14 == 0) {
        // 0x80267664: nop
    
            goto L_802676BC;
    }
    // 0x80267664: nop

    // 0x80267668: lb          $t7, 0x3E($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X3E);
    // 0x8026766C: nop

    // 0x80267670: bne         $t7, $zero, L_80267688
    if (ctx->r15 != 0) {
        // 0x80267674: nop
    
            goto L_80267688;
    }
    // 0x80267674: nop

    // 0x80267678: jal         0x80029520
    // 0x8026767C: nop

    func_80029520(rdram, ctx);
        goto after_0;
    // 0x8026767C: nop

    after_0:
    // 0x80267680: b           L_802676C0
    // 0x80267684: lb          $t0, 0x49($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X49);
        goto L_802676C0;
    // 0x80267684: lb          $t0, 0x49($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X49);
L_80267688:
    // 0x80267688: jal         0x80029520
    // 0x8026768C: nop

    func_80029520(rdram, ctx);
        goto after_1;
    // 0x8026768C: nop

    after_1:
    // 0x80267690: lbu         $a0, 0x3E($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3E);
    // 0x80267694: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80267698: jal         0x8001D4C0
    // 0x8026769C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8001D4C0(rdram, ctx);
        goto after_2;
    // 0x8026769C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_2:
    // 0x802676A0: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x802676A4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x802676A8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802676AC: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x802676B0: lw          $a0, -0x67E8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X67E8);
    // 0x802676B4: jal         0x8002AAC0
    // 0x802676B8: nop

    func_8002AAC0(rdram, ctx);
        goto after_3;
    // 0x802676B8: nop

    after_3:
L_802676BC:
    // 0x802676BC: lb          $t0, 0x49($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X49);
L_802676C0:
    // 0x802676C0: nop

    // 0x802676C4: beq         $t0, $zero, L_802676D8
    if (ctx->r8 == 0) {
        // 0x802676C8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802676D8;
    }
    // 0x802676C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802676CC: jal         0x80029520
    // 0x802676D0: nop

    func_80029520(rdram, ctx);
        goto after_4;
    // 0x802676D0: nop

    after_4:
    // 0x802676D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802676D8:
    // 0x802676D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802676DC: jr          $ra
    // 0x802676E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802676E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_80264800_func_802676E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802676E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802676E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802676EC: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x802676F0: addiu       $a0, $a0, 0x770C
    ctx->r4 = ADD32(ctx->r4, 0X770C);
    // 0x802676F4: jal         0x800293DC
    // 0x802676F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x802676F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x802676FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80267700: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80267704: jr          $ra
    // 0x80267708: nop

    return;
    // 0x80267708: nop

;}
RECOMP_FUNC void ovl_80264800_func_8026770C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026770C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80267710: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80267714: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80267718: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8026771C: lw          $s0, 0x8($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X8);
    // 0x80267720: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80267724: lb          $t6, 0x3E($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X3E);
    // 0x80267728: addiu       $a0, $a0, -0x3230
    ctx->r4 = ADD32(ctx->r4, -0X3230);
    // 0x8026772C: jal         0x8002A468
    // 0x80267730: sb          $t6, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r14;
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x80267730: sb          $t6, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r14;
    after_0:
    // 0x80267734: lb          $t7, 0x38($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X38);
    // 0x80267738: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8026773C: bne         $t7, $at, L_802677C4
    if (ctx->r15 != ctx->r1) {
        // 0x80267740: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_802677C4;
    }
    // 0x80267740: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80267744: lb          $t8, 0x3B($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X3B);
    // 0x80267748: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026774C: bne         $t8, $at, L_802677C0
    if (ctx->r24 != ctx->r1) {
        // 0x80267750: lui         $a2, 0x803D
        ctx->r6 = S32(0X803D << 16);
            goto L_802677C0;
    }
    // 0x80267750: lui         $a2, 0x803D
    ctx->r6 = S32(0X803D << 16);
    // 0x80267754: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80267758: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
    // 0x8026775C: jal         0x80266358
    // 0x80267760: addiu       $a2, $a2, 0xF04
    ctx->r6 = ADD32(ctx->r6, 0XF04);
    ovl_80264800_func_80266358(rdram, ctx);
        goto after_1;
    // 0x80267760: addiu       $a2, $a2, 0xF04
    ctx->r6 = ADD32(ctx->r6, 0XF04);
    after_1:
    // 0x80267764: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80267768: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x8026776C: lw          $s0, 0x0($t9)
    ctx->r16 = MEM_W(ctx->r25, 0X0);
    // 0x80267770: addiu       $a3, $a3, 0xF10
    ctx->r7 = ADD32(ctx->r7, 0XF10);
    // 0x80267774: addiu       $a1, $zero, 0x3C9
    ctx->r5 = ADD32(0, 0X3C9);
    // 0x80267778: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x8026777C: jal         0x8004CD24
    // 0x80267780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD24(rdram, ctx);
        goto after_2;
    // 0x80267780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80267784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80267788: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8026778C: jal         0x8002135C
    // 0x80267790: addiu       $a2, $zero, 0xA3
    ctx->r6 = ADD32(0, 0XA3);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x80267790: addiu       $a2, $zero, 0xA3
    ctx->r6 = ADD32(0, 0XA3);
    after_3:
    // 0x80267794: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80267798: lb          $a1, 0x27($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X27);
    // 0x8026779C: lui         $a2, 0x803D
    ctx->r6 = S32(0X803D << 16);
    // 0x802677A0: addiu       $a2, $a2, 0xF1C
    ctx->r6 = ADD32(ctx->r6, 0XF1C);
    // 0x802677A4: jal         0x802662CC
    // 0x802677A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_80264800_func_802662CC(rdram, ctx);
        goto after_4;
    // 0x802677A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x802677AC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x802677B0: lb          $a1, 0x27($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X27);
    // 0x802677B4: lui         $a2, 0x803D
    ctx->r6 = S32(0X803D << 16);
    // 0x802677B8: jal         0x8026627C
    // 0x802677BC: addiu       $a2, $a2, 0xF28
    ctx->r6 = ADD32(ctx->r6, 0XF28);
    ovl_80264800_func_8026627C(rdram, ctx);
        goto after_5;
    // 0x802677BC: addiu       $a2, $a2, 0xF28
    ctx->r6 = ADD32(ctx->r6, 0XF28);
    after_5:
L_802677C0:
    // 0x802677C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802677C4:
    // 0x802677C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802677C8: jr          $ra
    // 0x802677CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x802677CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_80264800_func_802677D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802677D0: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x802677D4: addiu       $a2, $a2, 0x1CF0
    ctx->r6 = ADD32(ctx->r6, 0X1CF0);
    // 0x802677D8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x802677DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802677E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802677E4: lb          $t6, 0x3E($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X3E);
    // 0x802677E8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802677EC: lb          $v1, 0x45($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X45);
    // 0x802677F0: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x802677F4: lbu         $a0, -0x67F4($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X67F4);
    // 0x802677F8: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
    // 0x802677FC: bne         $a0, $v1, L_8026780C
    if (ctx->r4 != ctx->r3) {
        // 0x80267800: addiu       $t7, $v1, 0x1
        ctx->r15 = ADD32(ctx->r3, 0X1);
            goto L_8026780C;
    }
    // 0x80267800: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x80267804: b           L_80267810
    // 0x80267808: sb          $zero, 0x45($v0)
    MEM_B(0X45, ctx->r2) = 0;
        goto L_80267810;
    // 0x80267808: sb          $zero, 0x45($v0)
    MEM_B(0X45, ctx->r2) = 0;
L_8026780C:
    // 0x8026780C: sb          $t7, 0x45($v0)
    MEM_B(0X45, ctx->r2) = ctx->r15;
L_80267810:
    // 0x80267810: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x80267814: nop

    // 0x80267818: lbu         $v0, 0x45($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X45);
    // 0x8026781C: nop

    // 0x80267820: beq         $a1, $v0, L_80267834
    if (ctx->r5 == ctx->r2) {
        // 0x80267824: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80267834;
    }
    // 0x80267824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80267828: jal         0x80035770
    // 0x8026782C: nop

    func_80035770(rdram, ctx);
        goto after_0;
    // 0x8026782C: nop

    after_0:
    // 0x80267830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80267834:
    // 0x80267834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80267838: jr          $ra
    // 0x8026783C: nop

    return;
    // 0x8026783C: nop

;}
RECOMP_FUNC void ovl_80264800_func_80267840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267840: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80267844: addiu       $a2, $a2, 0x1CF0
    ctx->r6 = ADD32(ctx->r6, 0X1CF0);
    // 0x80267848: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8026784C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80267850: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80267854: lb          $t6, 0x3E($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X3E);
    // 0x80267858: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026785C: lb          $v1, 0x45($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X45);
    // 0x80267860: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x80267864: lbu         $a1, -0x67F4($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X67F4);
    // 0x80267868: bne         $v1, $zero, L_80267878
    if (ctx->r3 != 0) {
        // 0x8026786C: andi        $a0, $v1, 0xFF
        ctx->r4 = ctx->r3 & 0XFF;
            goto L_80267878;
    }
    // 0x8026786C: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x80267870: b           L_80267880
    // 0x80267874: sb          $a1, 0x45($v0)
    MEM_B(0X45, ctx->r2) = ctx->r5;
        goto L_80267880;
    // 0x80267874: sb          $a1, 0x45($v0)
    MEM_B(0X45, ctx->r2) = ctx->r5;
L_80267878:
    // 0x80267878: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x8026787C: sb          $t7, 0x45($v0)
    MEM_B(0X45, ctx->r2) = ctx->r15;
L_80267880:
    // 0x80267880: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x80267884: nop

    // 0x80267888: lbu         $v0, 0x45($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X45);
    // 0x8026788C: nop

    // 0x80267890: beq         $a0, $v0, L_802678A4
    if (ctx->r4 == ctx->r2) {
        // 0x80267894: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_802678A4;
    }
    // 0x80267894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80267898: jal         0x80035770
    // 0x8026789C: nop

    func_80035770(rdram, ctx);
        goto after_0;
    // 0x8026789C: nop

    after_0:
    // 0x802678A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802678A4:
    // 0x802678A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802678A8: jr          $ra
    // 0x802678AC: nop

    return;
    // 0x802678AC: nop

;}
RECOMP_FUNC void ovl_80264800_func_802678B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802678B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802678B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802678B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802678BC: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x802678C0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x802678C4: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x802678C8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x802678CC: lb          $v0, 0x3C($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X3C);
    // 0x802678D0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802678D4: bne         $v0, $zero, L_802678F4
    if (ctx->r2 != 0) {
        // 0x802678D8: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_802678F4;
    }
    // 0x802678D8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802678DC: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x802678E0: jal         0x8002135C
    // 0x802678E4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x802678E4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x802678E8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x802678EC: b           L_80267938
    // 0x802678F0: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
        goto L_80267938;
    // 0x802678F0: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
L_802678F4:
    // 0x802678F4: bne         $v0, $at, L_8026791C
    if (ctx->r2 != ctx->r1) {
        // 0x802678F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8026791C;
    }
    // 0x802678F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802678FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80267900: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80267904: addiu       $a2, $zero, 0x27
    ctx->r6 = ADD32(0, 0X27);
    // 0x80267908: jal         0x8002135C
    // 0x8026790C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8026790C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x80267910: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80267914: b           L_80267938
    // 0x80267918: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
        goto L_80267938;
    // 0x80267918: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
L_8026791C:
    // 0x8026791C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80267920: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x80267924: jal         0x8002135C
    // 0x80267928: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80267928: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_2:
    // 0x8026792C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80267930: nop

    // 0x80267934: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
L_80267938:
    // 0x80267938: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8026793C: beq         $v0, $zero, L_80267954
    if (ctx->r2 == 0) {
        // 0x80267940: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80267954;
    }
    // 0x80267940: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80267944: beq         $v0, $at, L_80267954
    if (ctx->r2 == ctx->r1) {
        // 0x80267948: nop
    
            goto L_80267954;
    }
    // 0x80267948: nop

    // 0x8026794C: b           L_80267984
    // 0x80267950: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_80267984;
    // 0x80267950: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_80267954:
    // 0x80267954: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
    // 0x80267958: lui         $t1, 0x8027
    ctx->r9 = S32(0X8027 << 16);
    // 0x8026795C: ori         $t8, $t7, 0x400
    ctx->r24 = ctx->r15 | 0X400;
    // 0x80267960: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
    // 0x80267964: lb          $t9, 0x3C($v1)
    ctx->r25 = MEM_B(ctx->r3, 0X3C);
    // 0x80267968: addiu       $t1, $t1, -0x6BF8
    ctx->r9 = ADD32(ctx->r9, -0X6BF8);
    // 0x8026796C: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x80267970: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x80267974: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x80267978: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x8026797C: jal         0x8004CD24
    // 0x80267980: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_3;
    // 0x80267980: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
L_80267984:
    // 0x80267984: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80267988: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026798C: jr          $ra
    // 0x80267990: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80267990: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_80264800_func_802678DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802678DC: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x802678E0: jal         0x8002135C
    // 0x802678E4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x802678E4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x802678E8: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x802678EC: b           L_80267938
    // 0x802678F0: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
        goto L_80267938;
    // 0x802678F0: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
    // 0x802678F4: bne         $v0, $at, L_8026791C
    if (ctx->r2 != ctx->r1) {
        // 0x802678F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8026791C;
    }
    // 0x802678F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802678FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80267900: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80267904: addiu       $a2, $zero, 0x27
    ctx->r6 = ADD32(0, 0X27);
    // 0x80267908: jal         0x8002135C
    // 0x8026790C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8026790C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x80267910: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80267914: b           L_80267938
    // 0x80267918: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
        goto L_80267938;
    // 0x80267918: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
L_8026791C:
    // 0x8026791C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80267920: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x80267924: jal         0x8002135C
    // 0x80267928: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80267928: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_2:
    // 0x8026792C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80267930: nop

    // 0x80267934: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
L_80267938:
    // 0x80267938: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8026793C: beq         $v0, $zero, L_80267954
    if (ctx->r2 == 0) {
        // 0x80267940: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80267954;
    }
    // 0x80267940: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80267944: beq         $v0, $at, L_80267954
    if (ctx->r2 == ctx->r1) {
        // 0x80267948: nop
    
            goto L_80267954;
    }
    // 0x80267948: nop

    // 0x8026794C: b           L_80267984
    // 0x80267950: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_80267984;
    // 0x80267950: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_80267954:
    // 0x80267954: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
    // 0x80267958: lui         $t1, 0x8027
    ctx->r9 = S32(0X8027 << 16);
    // 0x8026795C: ori         $t8, $t7, 0x400
    ctx->r24 = ctx->r15 | 0X400;
    // 0x80267960: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
    // 0x80267964: lb          $t9, 0x3C($v1)
    ctx->r25 = MEM_B(ctx->r3, 0X3C);
    // 0x80267968: addiu       $t1, $t1, -0x6BF8
    ctx->r9 = ADD32(ctx->r9, -0X6BF8);
    // 0x8026796C: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x80267970: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x80267974: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x80267978: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x8026797C: jal         0x8004CD24
    // 0x80267980: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_3;
    // 0x80267980: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
L_80267984:
    // 0x80267984: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80267988: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026798C: jr          $ra
    // 0x80267990: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80267990: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_80264800_func_80267994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267994: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80267998: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026799C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x802679A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802679A4: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x802679A8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x802679AC: lb          $t7, 0x38($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X38);
    // 0x802679B0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x802679B4: bne         $a2, $t7, L_80267A14
    if (ctx->r6 != ctx->r15) {
        // 0x802679B8: nop
    
            goto L_80267A14;
    }
    // 0x802679B8: nop

    // 0x802679BC: sb          $t8, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r24;
    // 0x802679C0: lb          $v0, 0x39($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X39);
    // 0x802679C4: nop

    // 0x802679C8: beq         $v0, $zero, L_802679E8
    if (ctx->r2 == 0) {
        // 0x802679CC: nop
    
            goto L_802679E8;
    }
    // 0x802679CC: nop

    // 0x802679D0: beq         $v0, $a2, L_80267A04
    if (ctx->r2 == ctx->r6) {
        // 0x802679D4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80267A04;
    }
    // 0x802679D4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802679D8: beq         $v0, $at, L_80267A08
    if (ctx->r2 == ctx->r1) {
        // 0x802679DC: addiu       $t9, $zero, 0xA
        ctx->r25 = ADD32(0, 0XA);
            goto L_80267A08;
    }
    // 0x802679DC: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x802679E0: b           L_80267A24
    // 0x802679E4: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
        goto L_80267A24;
    // 0x802679E4: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
L_802679E8:
    // 0x802679E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802679EC: jal         0x8006F678
    // 0x802679F0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_8006F678(rdram, ctx);
        goto after_0;
    // 0x802679F0: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x802679F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802679F8: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x802679FC: b           L_80267A20
    // 0x80267A00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_80267A20;
    // 0x80267A00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80267A04:
    // 0x80267A04: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
L_80267A08:
    // 0x80267A08: sh          $t9, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r25;
    // 0x80267A0C: b           L_80267A20
    // 0x80267A10: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
        goto L_80267A20;
    // 0x80267A10: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
L_80267A14:
    // 0x80267A14: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x80267A18: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
    // 0x80267A1C: sb          $zero, 0x4($a3)
    MEM_B(0X4, ctx->r7) = 0;
L_80267A20:
    // 0x80267A20: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
L_80267A24:
    // 0x80267A24: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80267A28: beq         $v0, $zero, L_80267A4C
    if (ctx->r2 == 0) {
        // 0x80267A2C: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80267A4C;
    }
    // 0x80267A2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80267A30: bne         $v0, $a2, L_80267A54
    if (ctx->r2 != ctx->r6) {
        // 0x80267A34: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80267A54;
    }
    // 0x80267A34: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80267A38: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80267A3C: jal         0x8002135C
    // 0x80267A40: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x80267A40: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    after_1:
    // 0x80267A44: b           L_80267A58
    // 0x80267A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80267A58;
    // 0x80267A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80267A4C:
    // 0x80267A4C: jal         0x8002135C
    // 0x80267A50: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80267A50: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    after_2:
L_80267A54:
    // 0x80267A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80267A58:
    // 0x80267A58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80267A5C: jr          $ra
    // 0x80267A60: nop

    return;
    // 0x80267A60: nop

;}
RECOMP_FUNC void ovl_80264800_func_80267A3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267A3C: jal         0x8002135C
    // 0x80267A40: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x80267A40: addiu       $a2, $zero, 0xDB
    ctx->r6 = ADD32(0, 0XDB);
    after_0:
    // 0x80267A44: b           L_80267A58
    // 0x80267A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80267A58;
    // 0x80267A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80267A4C: jal         0x8002135C
    // 0x80267A50: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x80267A50: addiu       $a2, $zero, 0xDA
    ctx->r6 = ADD32(0, 0XDA);
    after_1:
    // 0x80267A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80267A58:
    // 0x80267A58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80267A5C: jr          $ra
    // 0x80267A60: nop

    return;
    // 0x80267A60: nop

;}
RECOMP_FUNC void ovl_80264800_func_80267A64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267A64: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x80267A68: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80267A6C: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x80267A70: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80267A74: lb          $t7, 0x38($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X38);
    // 0x80267A78: nop

    // 0x80267A7C: bne         $t7, $at, L_80267A8C
    if (ctx->r15 != ctx->r1) {
        // 0x80267A80: nop
    
            goto L_80267A8C;
    }
    // 0x80267A80: nop

    // 0x80267A84: jr          $ra
    // 0x80267A88: sb          $t8, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r24;
    return;
    // 0x80267A88: sb          $t8, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r24;
L_80267A8C:
    // 0x80267A8C: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x80267A90: jr          $ra
    // 0x80267A94: nop

    return;
    // 0x80267A94: nop

;}
RECOMP_FUNC void ovl_80264800_func_80267A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267A98: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x80267A9C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80267AA0: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x80267AA4: lui         $t7, 0x803D
    ctx->r15 = S32(0X803D << 16);
    // 0x80267AA8: lb          $v1, 0x38($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X38);
    // 0x80267AAC: addiu       $t7, $t7, 0x208
    ctx->r15 = ADD32(ctx->r15, 0X208);
    // 0x80267AB0: beq         $v1, $at, L_80267AD4
    if (ctx->r3 == ctx->r1) {
        // 0x80267AB4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80267AD4;
    }
    // 0x80267AB4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80267AB8: beq         $v1, $at, L_80267ADC
    if (ctx->r3 == ctx->r1) {
        // 0x80267ABC: lui         $t8, 0x803D
        ctx->r24 = S32(0X803D << 16);
            goto L_80267ADC;
    }
    // 0x80267ABC: lui         $t8, 0x803D
    ctx->r24 = S32(0X803D << 16);
    // 0x80267AC0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80267AC4: beq         $v1, $at, L_80267AE8
    if (ctx->r3 == ctx->r1) {
        // 0x80267AC8: lui         $t9, 0x803D
        ctx->r25 = S32(0X803D << 16);
            goto L_80267AE8;
    }
    // 0x80267AC8: lui         $t9, 0x803D
    ctx->r25 = S32(0X803D << 16);
    // 0x80267ACC: jr          $ra
    // 0x80267AD0: sw          $zero, 0x30($a1)
    MEM_W(0X30, ctx->r5) = 0;
    return;
    // 0x80267AD0: sw          $zero, 0x30($a1)
    MEM_W(0X30, ctx->r5) = 0;
L_80267AD4:
    // 0x80267AD4: jr          $ra
    // 0x80267AD8: sw          $t7, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r15;
    return;
    // 0x80267AD8: sw          $t7, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r15;
L_80267ADC:
    // 0x80267ADC: addiu       $t8, $t8, 0x8F8
    ctx->r24 = ADD32(ctx->r24, 0X8F8);
    // 0x80267AE0: jr          $ra
    // 0x80267AE4: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
    return;
    // 0x80267AE4: sw          $t8, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r24;
L_80267AE8:
    // 0x80267AE8: addiu       $t9, $t9, 0xEF8
    ctx->r25 = ADD32(ctx->r25, 0XEF8);
    // 0x80267AEC: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
    // 0x80267AF0: jr          $ra
    // 0x80267AF4: nop

    return;
    // 0x80267AF4: nop

;}
RECOMP_FUNC void ovl_80264800_func_80267AF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267AF8: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x80267AFC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80267B00: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x80267B04: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80267B08: lb          $t7, 0x38($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X38);
    // 0x80267B0C: nop

    // 0x80267B10: bne         $t7, $at, L_80267B20
    if (ctx->r15 != ctx->r1) {
        // 0x80267B14: nop
    
            goto L_80267B20;
    }
    // 0x80267B14: nop

    // 0x80267B18: jr          $ra
    // 0x80267B1C: sb          $t8, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r24;
    return;
    // 0x80267B1C: sb          $t8, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r24;
L_80267B20:
    // 0x80267B20: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x80267B24: jr          $ra
    // 0x80267B28: nop

    return;
    // 0x80267B28: nop

;}
RECOMP_FUNC void ovl_80264800_func_80267B2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267B2C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x80267B30: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80267B34: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x80267B38: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80267B3C: lb          $t7, 0x38($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X38);
    // 0x80267B40: nop

    // 0x80267B44: bne         $t7, $at, L_80267B54
    if (ctx->r15 != ctx->r1) {
        // 0x80267B48: nop
    
            goto L_80267B54;
    }
    // 0x80267B48: nop

    // 0x80267B4C: jr          $ra
    // 0x80267B50: sb          $t8, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r24;
    return;
    // 0x80267B50: sb          $t8, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r24;
L_80267B54:
    // 0x80267B54: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x80267B58: jr          $ra
    // 0x80267B5C: nop

    return;
    // 0x80267B5C: nop

;}
RECOMP_FUNC void ovl_80264800_func_80267B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267B60: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x80267B64: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80267B68: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x80267B6C: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x80267B70: lb          $t7, 0x38($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X38);
    // 0x80267B74: nop

    // 0x80267B78: bne         $t7, $at, L_80267B94
    if (ctx->r15 != ctx->r1) {
        // 0x80267B7C: nop
    
            goto L_80267B94;
    }
    // 0x80267B7C: nop

    // 0x80267B80: lb          $t8, 0x3B($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X3B);
    // 0x80267B84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80267B88: bne         $t8, $at, L_80267B94
    if (ctx->r24 != ctx->r1) {
        // 0x80267B8C: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_80267B94;
    }
    // 0x80267B8C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80267B90: sb          $t9, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r25;
L_80267B94:
    // 0x80267B94: jr          $ra
    // 0x80267B98: nop

    return;
    // 0x80267B98: nop

;}
RECOMP_FUNC void ovl_80264800_func_80267B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267B9C: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x80267BA0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80267BA4: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x80267BA8: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x80267BAC: lb          $t7, 0x38($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X38);
    // 0x80267BB0: nop

    // 0x80267BB4: bne         $t7, $at, L_80267BD0
    if (ctx->r15 != ctx->r1) {
        // 0x80267BB8: nop
    
            goto L_80267BD0;
    }
    // 0x80267BB8: nop

    // 0x80267BBC: lb          $t8, 0x3B($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X3B);
    // 0x80267BC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80267BC4: bne         $t8, $at, L_80267BD0
    if (ctx->r24 != ctx->r1) {
        // 0x80267BC8: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_80267BD0;
    }
    // 0x80267BC8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80267BCC: sb          $t9, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r25;
L_80267BD0:
    // 0x80267BD0: jr          $ra
    // 0x80267BD4: nop

    return;
    // 0x80267BD4: nop

    // 0x80267BD8: nop

    // 0x80267BDC: nop

;}
RECOMP_FUNC void ovl_80264800_func_80267BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267BE0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80267BE4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80267BE8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80267BEC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80267BF0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80267BF4: lhu         $v0, 0x1E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X1E);
    // 0x80267BF8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80267BFC: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x80267C00: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x80267C04: lh          $v1, -0x3068($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X3068);
    // 0x80267C08: sll         $t0, $v0, 16
    ctx->r8 = S32(ctx->r2 << 16);
    // 0x80267C0C: sra         $t7, $t0, 16
    ctx->r15 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80267C10: bltz        $v1, L_80267CD8
    if (SIGNED(ctx->r3) < 0) {
        // 0x80267C14: or          $t0, $t7, $zero
        ctx->r8 = ctx->r15 | 0;
            goto L_80267CD8;
    }
    // 0x80267C14: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
    // 0x80267C18: sll         $v0, $t7, 5
    ctx->r2 = S32(ctx->r15 << 5);
    // 0x80267C1C: addiu       $a2, $v0, 0x52
    ctx->r6 = ADD32(ctx->r2, 0X52);
    // 0x80267C20: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x80267C24: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x80267C28: sll         $t1, $a2, 16
    ctx->r9 = S32(ctx->r6 << 16);
    // 0x80267C2C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80267C30: ori         $at, $at, 0x668
    ctx->r1 = ctx->r1 | 0X668;
    // 0x80267C34: sra         $a2, $t1, 16
    ctx->r6 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80267C38: addu        $s0, $v0, $t9
    ctx->r16 = ADD32(ctx->r2, ctx->r25);
    // 0x80267C3C: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x80267C40: addiu       $t3, $zero, 0xC
    ctx->r11 = ADD32(0, 0XC);
    // 0x80267C44: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80267C48: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80267C4C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80267C50: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x80267C54: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80267C58: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80267C5C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80267C60: addiu       $a3, $a3, 0x71B0
    ctx->r7 = ADD32(ctx->r7, 0X71B0);
    // 0x80267C64: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    // 0x80267C68: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80267C6C: jal         0x8002F528
    // 0x80267C70: addiu       $a1, $zero, 0x7C
    ctx->r5 = ADD32(0, 0X7C);
    func_8002F528(rdram, ctx);
        goto after_0;
    // 0x80267C70: addiu       $a1, $zero, 0x7C
    ctx->r5 = ADD32(0, 0X7C);
    after_0:
    // 0x80267C74: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80267C78: nop

    // 0x80267C7C: lh          $a0, 0x1E($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X1E);
    // 0x80267C80: jal         0x80035438
    // 0x80267C84: nop

    func_80035438(rdram, ctx);
        goto after_1;
    // 0x80267C84: nop

    after_1:
    // 0x80267C88: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80267C8C: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80267C90: addiu       $t8, $t8, 0x7888
    ctx->r24 = ADD32(ctx->r24, 0X7888);
    // 0x80267C94: ori         $at, $at, 0x5E8
    ctx->r1 = ctx->r1 | 0X5E8;
    // 0x80267C98: lh          $a2, 0x32($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X32);
    // 0x80267C9C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80267CA0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80267CA4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80267CA8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80267CAC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80267CB0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80267CB4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80267CB8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80267CBC: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    // 0x80267CC0: addu        $a3, $v0, $t8
    ctx->r7 = ADD32(ctx->r2, ctx->r24);
    // 0x80267CC4: jal         0x8002F528
    // 0x80267CC8: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    func_8002F528(rdram, ctx);
        goto after_2;
    // 0x80267CC8: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    after_2:
    // 0x80267CCC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80267CD0: b           L_80267D3C
    // 0x80267CD4: addu        $v1, $s0, $at
    ctx->r3 = ADD32(ctx->r16, ctx->r1);
        goto L_80267D3C;
    // 0x80267CD4: addu        $v1, $s0, $at
    ctx->r3 = ADD32(ctx->r16, ctx->r1);
L_80267CD8:
    // 0x80267CD8: sll         $v0, $t0, 5
    ctx->r2 = S32(ctx->r8 << 5);
    // 0x80267CDC: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x80267CE0: addiu       $t4, $t4, -0x3770
    ctx->r12 = ADD32(ctx->r12, -0X3770);
    // 0x80267CE4: addiu       $a2, $v0, 0x52
    ctx->r6 = ADD32(ctx->r2, 0X52);
    // 0x80267CE8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80267CEC: ori         $at, $at, 0x668
    ctx->r1 = ctx->r1 | 0X668;
    // 0x80267CF0: sll         $t5, $a2, 16
    ctx->r13 = S32(ctx->r6 << 16);
    // 0x80267CF4: addu        $s0, $v0, $t4
    ctx->r16 = ADD32(ctx->r2, ctx->r12);
    // 0x80267CF8: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x80267CFC: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x80267D00: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80267D04: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80267D08: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80267D0C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80267D10: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80267D14: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80267D18: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80267D1C: addiu       $a3, $a3, 0x76E0
    ctx->r7 = ADD32(ctx->r7, 0X76E0);
    // 0x80267D20: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    // 0x80267D24: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80267D28: jal         0x8002F528
    // 0x80267D2C: addiu       $a1, $zero, 0x7C
    ctx->r5 = ADD32(0, 0X7C);
    func_8002F528(rdram, ctx);
        goto after_3;
    // 0x80267D2C: addiu       $a1, $zero, 0x7C
    ctx->r5 = ADD32(0, 0X7C);
    after_3:
    // 0x80267D30: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80267D34: addu        $v1, $s0, $at
    ctx->r3 = ADD32(ctx->r16, ctx->r1);
    // 0x80267D38: sb          $zero, 0x5EC($v1)
    MEM_B(0X5EC, ctx->r3) = 0;
L_80267D3C:
    // 0x80267D3C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80267D40: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x80267D44: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80267D48: sb          $t3, 0x5ED($v1)
    MEM_B(0X5ED, ctx->r3) = ctx->r11;
    // 0x80267D4C: sb          $t3, 0x66D($v1)
    MEM_B(0X66D, ctx->r3) = ctx->r11;
    // 0x80267D50: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80267D54: jr          $ra
    // 0x80267D58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80267D58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_80264800_func_80267C54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267C54: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80267C58: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x80267C5C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80267C60: addiu       $a3, $a3, 0x71B0
    ctx->r7 = ADD32(ctx->r7, 0X71B0);
    // 0x80267C64: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    // 0x80267C68: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80267C6C: jal         0x8002F528
    // 0x80267C70: addiu       $a1, $zero, 0x7C
    ctx->r5 = ADD32(0, 0X7C);
    func_8002F528(rdram, ctx);
        goto after_0;
    // 0x80267C70: addiu       $a1, $zero, 0x7C
    ctx->r5 = ADD32(0, 0X7C);
    after_0:
    // 0x80267C74: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80267C78: nop

    // 0x80267C7C: lh          $a0, 0x1E($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X1E);
    // 0x80267C80: jal         0x80035438
    // 0x80267C84: nop

    func_80035438(rdram, ctx);
        goto after_1;
    // 0x80267C84: nop

    after_1:
    // 0x80267C88: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80267C8C: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80267C90: addiu       $t8, $t8, 0x7888
    ctx->r24 = ADD32(ctx->r24, 0X7888);
    // 0x80267C94: ori         $at, $at, 0x5E8
    ctx->r1 = ctx->r1 | 0X5E8;
    // 0x80267C98: lh          $a2, 0x32($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X32);
    // 0x80267C9C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80267CA0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80267CA4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80267CA8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80267CAC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x80267CB0: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x80267CB4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80267CB8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80267CBC: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    // 0x80267CC0: addu        $a3, $v0, $t8
    ctx->r7 = ADD32(ctx->r2, ctx->r24);
    // 0x80267CC4: jal         0x8002F528
    // 0x80267CC8: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    func_8002F528(rdram, ctx);
        goto after_2;
    // 0x80267CC8: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    after_2:
    // 0x80267CCC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80267CD0: b           L_80267D3C
    // 0x80267CD4: addu        $v1, $s0, $at
    ctx->r3 = ADD32(ctx->r16, ctx->r1);
        goto L_80267D3C;
    // 0x80267CD4: addu        $v1, $s0, $at
    ctx->r3 = ADD32(ctx->r16, ctx->r1);
    // 0x80267CD8: sll         $v0, $t0, 5
    ctx->r2 = S32(ctx->r8 << 5);
    // 0x80267CDC: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x80267CE0: addiu       $t4, $t4, -0x3770
    ctx->r12 = ADD32(ctx->r12, -0X3770);
    // 0x80267CE4: addiu       $a2, $v0, 0x52
    ctx->r6 = ADD32(ctx->r2, 0X52);
    // 0x80267CE8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80267CEC: ori         $at, $at, 0x668
    ctx->r1 = ctx->r1 | 0X668;
    // 0x80267CF0: sll         $t5, $a2, 16
    ctx->r13 = S32(ctx->r6 << 16);
    // 0x80267CF4: addu        $s0, $v0, $t4
    ctx->r16 = ADD32(ctx->r2, ctx->r12);
    // 0x80267CF8: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x80267CFC: addiu       $t7, $zero, 0xC
    ctx->r15 = ADD32(0, 0XC);
    // 0x80267D00: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80267D04: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80267D08: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80267D0C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80267D10: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80267D14: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80267D18: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80267D1C: addiu       $a3, $a3, 0x76E0
    ctx->r7 = ADD32(ctx->r7, 0X76E0);
    // 0x80267D20: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    // 0x80267D24: sra         $a2, $t5, 16
    ctx->r6 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80267D28: jal         0x8002F528
    // 0x80267D2C: addiu       $a1, $zero, 0x7C
    ctx->r5 = ADD32(0, 0X7C);
    func_8002F528(rdram, ctx);
        goto after_3;
    // 0x80267D2C: addiu       $a1, $zero, 0x7C
    ctx->r5 = ADD32(0, 0X7C);
    after_3:
    // 0x80267D30: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80267D34: addu        $v1, $s0, $at
    ctx->r3 = ADD32(ctx->r16, ctx->r1);
    // 0x80267D38: sb          $zero, 0x5EC($v1)
    MEM_B(0X5EC, ctx->r3) = 0;
L_80267D3C:
    // 0x80267D3C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80267D40: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x80267D44: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80267D48: sb          $t3, 0x5ED($v1)
    MEM_B(0X5ED, ctx->r3) = ctx->r11;
    // 0x80267D4C: sb          $t3, 0x66D($v1)
    MEM_B(0X66D, ctx->r3) = ctx->r11;
    // 0x80267D50: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80267D54: jr          $ra
    // 0x80267D58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80267D58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_80264800_func_80267D5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267D5C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80267D60: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x80267D64: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80267D68: beq         $t6, $at, L_80267D7C
    if (ctx->r14 == ctx->r1) {
        // 0x80267D6C: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_80267D7C;
    }
    // 0x80267D6C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80267D70: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x80267D74: jr          $ra
    // 0x80267D78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80267D78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80267D7C:
    // 0x80267D7C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80267D80: sb          $t7, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r15;
    // 0x80267D84: jr          $ra
    // 0x80267D88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80267D88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_80264800_func_80267D8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80267D8C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80267D90: lh          $t6, -0x6B4($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6B4);
    // 0x80267D94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80267D98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80267D9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80267DA0: bne         $t6, $zero, L_80267E00
    if (ctx->r14 != 0) {
        // 0x80267DA4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_80267E00;
    }
    // 0x80267DA4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80267DA8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80267DAC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80267DB0: jal         0x80021214
    // 0x80267DB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_0;
    // 0x80267DB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80267DB8: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80267DBC: addiu       $t7, $t7, -0x6CE4
    ctx->r15 = ADD32(ctx->r15, -0X6CE4);
    // 0x80267DC0: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x80267DC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80267DC8: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x80267DCC: lw          $a2, 0x4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X4);
    // 0x80267DD0: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80267DD4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80267DD8: lw          $a3, 0x8($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X8);
    // 0x80267DDC: jal         0x8004B078
    // 0x80267DE0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_1;
    // 0x80267DE0: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_1:
    // 0x80267DE4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80267DE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80267DEC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80267DF0: jal         0x8002B608
    // 0x80267DF4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8002B608(rdram, ctx);
        goto after_2;
    // 0x80267DF4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_2:
    // 0x80267DF8: b           L_80267E50
    // 0x80267DFC: nop

        goto L_80267E50;
    // 0x80267DFC: nop

L_80267E00:
    // 0x80267E00: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80267E04: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x80267E08: jal         0x80021214
    // 0x80267E0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_3;
    // 0x80267E0C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80267E10: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80267E14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80267E18: addiu       $a2, $zero, 0x11
    ctx->r6 = ADD32(0, 0X11);
    // 0x80267E1C: jal         0x8002B608
    // 0x80267E20: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8002B608(rdram, ctx);
        goto after_4;
    // 0x80267E20: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_4:
    // 0x80267E24: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x80267E28: addiu       $t0, $t0, -0x6CC0
    ctx->r8 = ADD32(ctx->r8, -0X6CC0);
    // 0x80267E2C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x80267E30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80267E34: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x80267E38: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x80267E3C: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x80267E40: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80267E44: lw          $a3, 0x8($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X8);
    // 0x80267E48: jal         0x8004B078
    // 0x80267E4C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_5;
    // 0x80267E4C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_5:
L_80267E50:
    // 0x80267E50: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x80267E54: jal         0x800296E0
    // 0x80267E58: addiu       $a0, $a0, 0x7E6C
    ctx->r4 = ADD32(ctx->r4, 0X7E6C);
    func_800296E0(rdram, ctx);
        goto after_6;
    // 0x80267E58: addiu       $a0, $a0, 0x7E6C
    ctx->r4 = ADD32(ctx->r4, 0X7E6C);
    after_6:
    // 0x80267E5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80267E60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80267E64: jr          $ra
    // 0x80267E68: nop

    return;
    // 0x80267E68: nop

;}
