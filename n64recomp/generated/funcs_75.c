#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8027D61C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D61C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D620: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D624: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D628: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D62C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8027D630: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8027D634: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D638: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027D63C: sb          $t6, -0x2F80($at)
    MEM_B(-0X2F80, ctx->r1) = ctx->r14;
    // 0x8027D640: addiu       $a0, $a0, 0x6674
    ctx->r4 = ADD32(ctx->r4, 0X6674);
    // 0x8027D644: jal         0x80035490
    // 0x8027D648: addiu       $a1, $a1, 0x3268
    ctx->r5 = ADD32(ctx->r5, 0X3268);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D648: addiu       $a1, $a1, 0x3268
    ctx->r5 = ADD32(ctx->r5, 0X3268);
    after_0:
    // 0x8027D64C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D654: jr          $ra
    // 0x8027D658: nop

    return;
    // 0x8027D658: nop

;}
RECOMP_FUNC void func_8027D65C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D65C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D660: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D664: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D668: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D66C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8027D670: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8027D674: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D678: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027D67C: sb          $t6, -0x2F80($at)
    MEM_B(-0X2F80, ctx->r1) = ctx->r14;
    // 0x8027D680: addiu       $a0, $a0, 0xF00
    ctx->r4 = ADD32(ctx->r4, 0XF00);
    // 0x8027D684: jal         0x80035490
    // 0x8027D688: addiu       $a1, $a1, 0x3270
    ctx->r5 = ADD32(ctx->r5, 0X3270);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D688: addiu       $a1, $a1, 0x3270
    ctx->r5 = ADD32(ctx->r5, 0X3270);
    after_0:
    // 0x8027D68C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D694: jr          $ra
    // 0x8027D698: nop

    return;
    // 0x8027D698: nop

;}
RECOMP_FUNC void func_8027D69C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D69C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D6A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D6A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D6A8: jal         0x80280804
    // 0x8027D6AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80280804(rdram, ctx);
        goto after_0;
    // 0x8027D6AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8027D6B0: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8027D6B4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D6B8: addiu       $a1, $a1, 0x3278
    ctx->r5 = ADD32(ctx->r5, 0X3278);
    // 0x8027D6BC: jal         0x80035490
    // 0x8027D6C0: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8027D6C0: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    after_1:
    // 0x8027D6C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D6C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D6CC: jr          $ra
    // 0x8027D6D0: nop

    return;
    // 0x8027D6D0: nop

;}
RECOMP_FUNC void func_8027D6D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D6D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D6D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D6DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D6E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D6E4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D6E8: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8027D6EC: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    // 0x8027D6F0: jal         0x80035490
    // 0x8027D6F4: addiu       $a1, $a1, 0x3278
    ctx->r5 = ADD32(ctx->r5, 0X3278);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D6F4: addiu       $a1, $a1, 0x3278
    ctx->r5 = ADD32(ctx->r5, 0X3278);
    after_0:
    // 0x8027D6F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D6FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D700: jr          $ra
    // 0x8027D704: nop

    return;
    // 0x8027D704: nop

;}
RECOMP_FUNC void func_8027D708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D70C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D710: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D718: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D71C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8027D720: addiu       $a0, $a0, -0xF50
    ctx->r4 = ADD32(ctx->r4, -0XF50);
    // 0x8027D724: jal         0x80035490
    // 0x8027D728: addiu       $a1, $a1, 0x329C
    ctx->r5 = ADD32(ctx->r5, 0X329C);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D728: addiu       $a1, $a1, 0x329C
    ctx->r5 = ADD32(ctx->r5, 0X329C);
    after_0:
    // 0x8027D72C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D734: jr          $ra
    // 0x8027D738: nop

    return;
    // 0x8027D738: nop

;}
RECOMP_FUNC void func_8027D73C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D73C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D740: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D744: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D748: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D74C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D750: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x8027D754: addiu       $a0, $a0, 0x34F0
    ctx->r4 = ADD32(ctx->r4, 0X34F0);
    // 0x8027D758: jal         0x80035490
    // 0x8027D75C: addiu       $a1, $a1, 0x32A4
    ctx->r5 = ADD32(ctx->r5, 0X32A4);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D75C: addiu       $a1, $a1, 0x32A4
    ctx->r5 = ADD32(ctx->r5, 0X32A4);
    after_0:
    // 0x8027D760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D768: jr          $ra
    // 0x8027D76C: nop

    return;
    // 0x8027D76C: nop

;}
RECOMP_FUNC void func_8027D770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D770: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D774: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D778: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D77C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D780: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D784: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027D788: addiu       $a0, $a0, 0x5230
    ctx->r4 = ADD32(ctx->r4, 0X5230);
    // 0x8027D78C: jal         0x80035490
    // 0x8027D790: addiu       $a1, $a1, 0x32A4
    ctx->r5 = ADD32(ctx->r5, 0X32A4);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D790: addiu       $a1, $a1, 0x32A4
    ctx->r5 = ADD32(ctx->r5, 0X32A4);
    after_0:
    // 0x8027D794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D798: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D79C: jr          $ra
    // 0x8027D7A0: nop

    return;
    // 0x8027D7A0: nop

;}
RECOMP_FUNC void func_8027D7A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D7A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D7A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D7AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D7B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D7B4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D7B8: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8027D7BC: addiu       $a0, $a0, 0x4800
    ctx->r4 = ADD32(ctx->r4, 0X4800);
    // 0x8027D7C0: jal         0x80035490
    // 0x8027D7C4: addiu       $a1, $a1, 0x32A4
    ctx->r5 = ADD32(ctx->r5, 0X32A4);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D7C4: addiu       $a1, $a1, 0x32A4
    ctx->r5 = ADD32(ctx->r5, 0X32A4);
    after_0:
    // 0x8027D7C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D7CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D7D0: jr          $ra
    // 0x8027D7D4: nop

    return;
    // 0x8027D7D4: nop

;}
RECOMP_FUNC void func_8027D7D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D7D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D7DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D7E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D7E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D7E8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D7EC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027D7F0: addiu       $a0, $a0, -0x5F10
    ctx->r4 = ADD32(ctx->r4, -0X5F10);
    // 0x8027D7F4: jal         0x80035490
    // 0x8027D7F8: addiu       $a1, $a1, 0x32A4
    ctx->r5 = ADD32(ctx->r5, 0X32A4);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D7F8: addiu       $a1, $a1, 0x32A4
    ctx->r5 = ADD32(ctx->r5, 0X32A4);
    after_0:
    // 0x8027D7FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D800: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D804: jr          $ra
    // 0x8027D808: nop

    return;
    // 0x8027D808: nop

;}
RECOMP_FUNC void func_8027D80C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D80C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D810: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D814: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D818: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D81C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D820: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027D824: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x8027D828: jal         0x80035490
    // 0x8027D82C: addiu       $a1, $a1, 0x32A4
    ctx->r5 = ADD32(ctx->r5, 0X32A4);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D82C: addiu       $a1, $a1, 0x32A4
    ctx->r5 = ADD32(ctx->r5, 0X32A4);
    after_0:
    // 0x8027D830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D838: jr          $ra
    // 0x8027D83C: nop

    return;
    // 0x8027D83C: nop

;}
RECOMP_FUNC void func_8027D840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D844: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D848: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D84C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D850: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D854: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027D858: addiu       $a0, $a0, 0x3B80
    ctx->r4 = ADD32(ctx->r4, 0X3B80);
    // 0x8027D85C: jal         0x80035490
    // 0x8027D860: addiu       $a1, $a1, 0x32A4
    ctx->r5 = ADD32(ctx->r5, 0X32A4);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D860: addiu       $a1, $a1, 0x32A4
    ctx->r5 = ADD32(ctx->r5, 0X32A4);
    after_0:
    // 0x8027D864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D86C: jr          $ra
    // 0x8027D870: nop

    return;
    // 0x8027D870: nop

;}
RECOMP_FUNC void func_8027D874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D874: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D878: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D87C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D880: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D884: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D888: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027D88C: addiu       $a0, $a0, 0x4964
    ctx->r4 = ADD32(ctx->r4, 0X4964);
    // 0x8027D890: jal         0x80035490
    // 0x8027D894: addiu       $a1, $a1, 0x32A4
    ctx->r5 = ADD32(ctx->r5, 0X32A4);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D894: addiu       $a1, $a1, 0x32A4
    ctx->r5 = ADD32(ctx->r5, 0X32A4);
    after_0:
    // 0x8027D898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D89C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D8A0: jr          $ra
    // 0x8027D8A4: nop

    return;
    // 0x8027D8A4: nop

;}
RECOMP_FUNC void func_8027D8A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D8A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D8AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D8B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D8B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D8B8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D8BC: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8027D8C0: addiu       $a0, $a0, 0x2CE0
    ctx->r4 = ADD32(ctx->r4, 0X2CE0);
    // 0x8027D8C4: jal         0x80035490
    // 0x8027D8C8: addiu       $a1, $a1, 0x32AC
    ctx->r5 = ADD32(ctx->r5, 0X32AC);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D8C8: addiu       $a1, $a1, 0x32AC
    ctx->r5 = ADD32(ctx->r5, 0X32AC);
    after_0:
    // 0x8027D8CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D8D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D8D4: jr          $ra
    // 0x8027D8D8: nop

    return;
    // 0x8027D8D8: nop

;}
RECOMP_FUNC void func_8027D8DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D8DC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027D8E0: lbu         $t6, -0x32B0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32B0);
    // 0x8027D8E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D8E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D8EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D8F0: beq         $t6, $zero, L_8027D934
    if (ctx->r14 == 0) {
        // 0x8027D8F4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8027D934;
    }
    // 0x8027D8F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D8F8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8027D8FC: addiu       $v0, $v0, -0x2F80
    ctx->r2 = ADD32(ctx->r2, -0X2F80);
    // 0x8027D900: lb          $t7, 0x1($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X1);
    // 0x8027D904: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027D908: slti        $at, $t7, 0x45
    ctx->r1 = SIGNED(ctx->r15) < 0X45 ? 1 : 0;
    // 0x8027D90C: bne         $at, $zero, L_8027D924
    if (ctx->r1 != 0) {
        // 0x8027D910: nop
    
            goto L_8027D924;
    }
    // 0x8027D910: nop

    // 0x8027D914: lb          $t8, 0x0($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X0);
    // 0x8027D918: nop

    // 0x8027D91C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8027D920: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
L_8027D924:
    // 0x8027D924: jal         0x800297B4
    // 0x8027D928: addiu       $a0, $a0, -0x25E0
    ctx->r4 = ADD32(ctx->r4, -0X25E0);
    func_800297B4(rdram, ctx);
        goto after_0;
    // 0x8027D928: addiu       $a0, $a0, -0x25E0
    ctx->r4 = ADD32(ctx->r4, -0X25E0);
    after_0:
    // 0x8027D92C: b           L_8027D94C
    // 0x8027D930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027D94C;
    // 0x8027D930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027D934:
    // 0x8027D934: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027D938: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D93C: addiu       $a1, $a1, 0x32B4
    ctx->r5 = ADD32(ctx->r5, 0X32B4);
    // 0x8027D940: jal         0x80035490
    // 0x8027D944: addiu       $a0, $a0, 0x158
    ctx->r4 = ADD32(ctx->r4, 0X158);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8027D944: addiu       $a0, $a0, 0x158
    ctx->r4 = ADD32(ctx->r4, 0X158);
    after_1:
    // 0x8027D948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027D94C:
    // 0x8027D94C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D950: jr          $ra
    // 0x8027D954: nop

    return;
    // 0x8027D954: nop

;}
RECOMP_FUNC void func_8027D958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D958: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D95C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D960: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D964: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D968: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8027D96C: jal         0x80035A74
    // 0x8027D970: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    func_80035A74(rdram, ctx);
        goto after_0;
    // 0x8027D970: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    after_0:
    // 0x8027D974: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x8027D978: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D97C: addiu       $a1, $a1, 0x32BC
    ctx->r5 = ADD32(ctx->r5, 0X32BC);
    // 0x8027D980: jal         0x80035490
    // 0x8027D984: addiu       $a0, $a0, -0x49EC
    ctx->r4 = ADD32(ctx->r4, -0X49EC);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8027D984: addiu       $a0, $a0, -0x49EC
    ctx->r4 = ADD32(ctx->r4, -0X49EC);
    after_1:
    // 0x8027D988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D98C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D990: jr          $ra
    // 0x8027D994: nop

    return;
    // 0x8027D994: nop

;}
RECOMP_FUNC void func_8027D998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D998: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027D99C: lbu         $t6, -0x32B0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32B0);
    // 0x8027D9A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D9A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D9A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D9AC: bne         $t6, $zero, L_8027D9C0
    if (ctx->r14 != 0) {
        // 0x8027D9B0: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8027D9C0;
    }
    // 0x8027D9B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D9B4: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    // 0x8027D9B8: jal         0x80035A74
    // 0x8027D9BC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_80035A74(rdram, ctx);
        goto after_0;
    // 0x8027D9BC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_0:
L_8027D9C0:
    // 0x8027D9C0: jal         0x80035A04
    // 0x8027D9C4: nop

    func_80035A04(rdram, ctx);
        goto after_1;
    // 0x8027D9C4: nop

    after_1:
    // 0x8027D9C8: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x8027D9CC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D9D0: addiu       $a1, $a1, 0x32C8
    ctx->r5 = ADD32(ctx->r5, 0X32C8);
    // 0x8027D9D4: jal         0x80035490
    // 0x8027D9D8: addiu       $a0, $a0, -0x61BC
    ctx->r4 = ADD32(ctx->r4, -0X61BC);
    func_80035490(rdram, ctx);
        goto after_2;
    // 0x8027D9D8: addiu       $a0, $a0, -0x61BC
    ctx->r4 = ADD32(ctx->r4, -0X61BC);
    after_2:
    // 0x8027D9DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D9E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D9E4: jr          $ra
    // 0x8027D9E8: nop

    return;
    // 0x8027D9E8: nop

;}
RECOMP_FUNC void func_8027D9EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D9EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D9F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D9F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D9F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D9FC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DA00: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027DA04: addiu       $a0, $a0, 0x5AD0
    ctx->r4 = ADD32(ctx->r4, 0X5AD0);
    // 0x8027DA08: jal         0x80035490
    // 0x8027DA0C: addiu       $a1, $a1, 0x32D0
    ctx->r5 = ADD32(ctx->r5, 0X32D0);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027DA0C: addiu       $a1, $a1, 0x32D0
    ctx->r5 = ADD32(ctx->r5, 0X32D0);
    after_0:
    // 0x8027DA10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027DA14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DA18: jr          $ra
    // 0x8027DA1C: nop

    return;
    // 0x8027DA1C: nop

;}
RECOMP_FUNC void func_8027DA20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DA20: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8027DA24: lbu         $t7, -0x32B0($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X32B0);
    // 0x8027DA28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DA2C: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8027DA30: addiu       $t6, $t6, -0x25E0
    ctx->r14 = ADD32(ctx->r14, -0X25E0);
    // 0x8027DA34: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027DA38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DA3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DA40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027DA44: beq         $t7, $zero, L_8027DA68
    if (ctx->r15 == 0) {
        // 0x8027DA48: sw          $t6, 0x32D8($at)
        MEM_W(0X32D8, ctx->r1) = ctx->r14;
            goto L_8027DA68;
    }
    // 0x8027DA48: sw          $t6, 0x32D8($at)
    MEM_W(0X32D8, ctx->r1) = ctx->r14;
    // 0x8027DA4C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027DA50: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DA54: addiu       $a1, $a1, 0x3308
    ctx->r5 = ADD32(ctx->r5, 0X3308);
    // 0x8027DA58: jal         0x80035490
    // 0x8027DA5C: addiu       $a0, $a0, 0xF00
    ctx->r4 = ADD32(ctx->r4, 0XF00);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027DA5C: addiu       $a0, $a0, 0xF00
    ctx->r4 = ADD32(ctx->r4, 0XF00);
    after_0:
    // 0x8027DA60: b           L_8027DA80
    // 0x8027DA64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027DA80;
    // 0x8027DA64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027DA68:
    // 0x8027DA68: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027DA6C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DA70: addiu       $a1, $a1, 0x3300
    ctx->r5 = ADD32(ctx->r5, 0X3300);
    // 0x8027DA74: jal         0x80035490
    // 0x8027DA78: addiu       $a0, $a0, 0xF00
    ctx->r4 = ADD32(ctx->r4, 0XF00);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8027DA78: addiu       $a0, $a0, 0xF00
    ctx->r4 = ADD32(ctx->r4, 0XF00);
    after_1:
    // 0x8027DA7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027DA80:
    // 0x8027DA80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DA84: jr          $ra
    // 0x8027DA88: nop

    return;
    // 0x8027DA88: nop

;}
RECOMP_FUNC void func_8027DA8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DA8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DA90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DA94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DA98: jal         0x80280804
    // 0x8027DA9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80280804(rdram, ctx);
        goto after_0;
    // 0x8027DA9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8027DAA0: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8027DAA4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DAA8: addiu       $a1, $a1, 0x32D8
    ctx->r5 = ADD32(ctx->r5, 0X32D8);
    // 0x8027DAAC: jal         0x80035490
    // 0x8027DAB0: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8027DAB0: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    after_1:
    // 0x8027DAB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027DAB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DABC: jr          $ra
    // 0x8027DAC0: nop

    return;
    // 0x8027DAC0: nop

;}
RECOMP_FUNC void func_8027DAC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DAC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DAC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DACC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027DAD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DAD4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DAD8: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8027DADC: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    // 0x8027DAE0: jal         0x80035490
    // 0x8027DAE4: addiu       $a1, $a1, 0x32D8
    ctx->r5 = ADD32(ctx->r5, 0X32D8);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027DAE4: addiu       $a1, $a1, 0x32D8
    ctx->r5 = ADD32(ctx->r5, 0X32D8);
    after_0:
    // 0x8027DAE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027DAEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DAF0: jr          $ra
    // 0x8027DAF4: nop

    return;
    // 0x8027DAF4: nop

;}
RECOMP_FUNC void func_8027DAF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DAF8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027DAFC: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8027DB00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DB04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DB08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DB0C: bne         $t6, $zero, L_8027DB2C
    if (ctx->r14 != 0) {
        // 0x8027DB10: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8027DB2C;
    }
    // 0x8027DB10: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027DB14: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DB18: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8027DB1C: addiu       $t7, $t7, -0x19A0
    ctx->r15 = ADD32(ctx->r15, -0X19A0);
    // 0x8027DB20: addiu       $a1, $a1, 0x3310
    ctx->r5 = ADD32(ctx->r5, 0X3310);
    // 0x8027DB24: b           L_8027DB40
    // 0x8027DB28: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
        goto L_8027DB40;
    // 0x8027DB28: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
L_8027DB2C:
    // 0x8027DB2C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DB30: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8027DB34: addiu       $t8, $t8, -0x2C0C
    ctx->r24 = ADD32(ctx->r24, -0X2C0C);
    // 0x8027DB38: addiu       $a1, $a1, 0x3310
    ctx->r5 = ADD32(ctx->r5, 0X3310);
    // 0x8027DB3C: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
L_8027DB40:
    // 0x8027DB40: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8027DB44: jal         0x80035490
    // 0x8027DB48: addiu       $a0, $a0, -0xF50
    ctx->r4 = ADD32(ctx->r4, -0XF50);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027DB48: addiu       $a0, $a0, -0xF50
    ctx->r4 = ADD32(ctx->r4, -0XF50);
    after_0:
    // 0x8027DB4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027DB50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DB54: jr          $ra
    // 0x8027DB58: nop

    return;
    // 0x8027DB58: nop

;}
RECOMP_FUNC void func_8027DB5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DB5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DB60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DB64: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027DB68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DB6C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DB70: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027DB74: addiu       $a0, $a0, 0x2B38
    ctx->r4 = ADD32(ctx->r4, 0X2B38);
    // 0x8027DB78: jal         0x80035490
    // 0x8027DB7C: addiu       $a1, $a1, 0x3318
    ctx->r5 = ADD32(ctx->r5, 0X3318);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027DB7C: addiu       $a1, $a1, 0x3318
    ctx->r5 = ADD32(ctx->r5, 0X3318);
    after_0:
    // 0x8027DB80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027DB84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DB88: jr          $ra
    // 0x8027DB8C: nop

    return;
    // 0x8027DB8C: nop

;}
RECOMP_FUNC void func_8027DB90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DB90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DB94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DB98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027DB9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DBA0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DBA4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027DBA8: addiu       $a0, $a0, 0x19A4
    ctx->r4 = ADD32(ctx->r4, 0X19A4);
    // 0x8027DBAC: jal         0x80035490
    // 0x8027DBB0: addiu       $a1, $a1, 0x3328
    ctx->r5 = ADD32(ctx->r5, 0X3328);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027DBB0: addiu       $a1, $a1, 0x3328
    ctx->r5 = ADD32(ctx->r5, 0X3328);
    after_0:
    // 0x8027DBB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027DBB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DBBC: jr          $ra
    // 0x8027DBC0: nop

    return;
    // 0x8027DBC0: nop

;}
RECOMP_FUNC void func_8027DBC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DBC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DBC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DBCC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027DBD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DBD4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DBD8: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x8027DBDC: addiu       $a0, $a0, -0x61BC
    ctx->r4 = ADD32(ctx->r4, -0X61BC);
    // 0x8027DBE0: jal         0x80035490
    // 0x8027DBE4: addiu       $a1, $a1, 0x3328
    ctx->r5 = ADD32(ctx->r5, 0X3328);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027DBE4: addiu       $a1, $a1, 0x3328
    ctx->r5 = ADD32(ctx->r5, 0X3328);
    after_0:
    // 0x8027DBE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027DBEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DBF0: jr          $ra
    // 0x8027DBF4: nop

    return;
    // 0x8027DBF4: nop

;}
RECOMP_FUNC void func_8027DBF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DBF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DBFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DC00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027DC04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DC08: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DC0C: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027DC10: addiu       $a0, $a0, 0x5AD0
    ctx->r4 = ADD32(ctx->r4, 0X5AD0);
    // 0x8027DC14: jal         0x80035490
    // 0x8027DC18: addiu       $a1, $a1, 0x3328
    ctx->r5 = ADD32(ctx->r5, 0X3328);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027DC18: addiu       $a1, $a1, 0x3328
    ctx->r5 = ADD32(ctx->r5, 0X3328);
    after_0:
    // 0x8027DC1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027DC20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DC24: jr          $ra
    // 0x8027DC28: nop

    return;
    // 0x8027DC28: nop

;}
RECOMP_FUNC void func_8027DC2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DC2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DC30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DC34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027DC38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DC3C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DC40: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x8027DC44: addiu       $a0, $a0, 0x34F0
    ctx->r4 = ADD32(ctx->r4, 0X34F0);
    // 0x8027DC48: jal         0x80035490
    // 0x8027DC4C: addiu       $a1, $a1, 0x3330
    ctx->r5 = ADD32(ctx->r5, 0X3330);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027DC4C: addiu       $a1, $a1, 0x3330
    ctx->r5 = ADD32(ctx->r5, 0X3330);
    after_0:
    // 0x8027DC50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027DC54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DC58: jr          $ra
    // 0x8027DC5C: nop

    return;
    // 0x8027DC5C: nop

;}
RECOMP_FUNC void func_8027DC60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DC60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DC64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DC68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027DC6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DC70: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DC74: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027DC78: addiu       $a0, $a0, 0x5230
    ctx->r4 = ADD32(ctx->r4, 0X5230);
    // 0x8027DC7C: jal         0x80035490
    // 0x8027DC80: addiu       $a1, $a1, 0x3330
    ctx->r5 = ADD32(ctx->r5, 0X3330);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027DC80: addiu       $a1, $a1, 0x3330
    ctx->r5 = ADD32(ctx->r5, 0X3330);
    after_0:
    // 0x8027DC84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027DC88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DC8C: jr          $ra
    // 0x8027DC90: nop

    return;
    // 0x8027DC90: nop

;}
RECOMP_FUNC void func_8027DC94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DC94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DC98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DC9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027DCA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DCA4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DCA8: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8027DCAC: addiu       $a0, $a0, 0x4800
    ctx->r4 = ADD32(ctx->r4, 0X4800);
    // 0x8027DCB0: jal         0x80035490
    // 0x8027DCB4: addiu       $a1, $a1, 0x3330
    ctx->r5 = ADD32(ctx->r5, 0X3330);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027DCB4: addiu       $a1, $a1, 0x3330
    ctx->r5 = ADD32(ctx->r5, 0X3330);
    after_0:
    // 0x8027DCB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027DCBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DCC0: jr          $ra
    // 0x8027DCC4: nop

    return;
    // 0x8027DCC4: nop

;}
RECOMP_FUNC void func_8027DCC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DCC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DCCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DCD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027DCD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DCD8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DCDC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027DCE0: addiu       $a0, $a0, -0x5F10
    ctx->r4 = ADD32(ctx->r4, -0X5F10);
    // 0x8027DCE4: jal         0x80035490
    // 0x8027DCE8: addiu       $a1, $a1, 0x3330
    ctx->r5 = ADD32(ctx->r5, 0X3330);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027DCE8: addiu       $a1, $a1, 0x3330
    ctx->r5 = ADD32(ctx->r5, 0X3330);
    after_0:
    // 0x8027DCEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027DCF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DCF4: jr          $ra
    // 0x8027DCF8: nop

    return;
    // 0x8027DCF8: nop

;}
RECOMP_FUNC void func_8027DCFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DCFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DD00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DD04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027DD08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DD0C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DD10: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027DD14: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x8027DD18: jal         0x80035490
    // 0x8027DD1C: addiu       $a1, $a1, 0x3330
    ctx->r5 = ADD32(ctx->r5, 0X3330);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027DD1C: addiu       $a1, $a1, 0x3330
    ctx->r5 = ADD32(ctx->r5, 0X3330);
    after_0:
    // 0x8027DD20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027DD24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DD28: jr          $ra
    // 0x8027DD2C: nop

    return;
    // 0x8027DD2C: nop

;}
RECOMP_FUNC void func_8027DD30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DD30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DD34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DD38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027DD3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DD40: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DD44: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027DD48: addiu       $a0, $a0, 0x3B80
    ctx->r4 = ADD32(ctx->r4, 0X3B80);
    // 0x8027DD4C: jal         0x80035490
    // 0x8027DD50: addiu       $a1, $a1, 0x3330
    ctx->r5 = ADD32(ctx->r5, 0X3330);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027DD50: addiu       $a1, $a1, 0x3330
    ctx->r5 = ADD32(ctx->r5, 0X3330);
    after_0:
    // 0x8027DD54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027DD58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DD5C: jr          $ra
    // 0x8027DD60: nop

    return;
    // 0x8027DD60: nop

;}
RECOMP_FUNC void func_8027DD64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DD64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DD68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DD6C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027DD70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DD74: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DD78: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027DD7C: addiu       $a0, $a0, 0x4964
    ctx->r4 = ADD32(ctx->r4, 0X4964);
    // 0x8027DD80: jal         0x80035490
    // 0x8027DD84: addiu       $a1, $a1, 0x3330
    ctx->r5 = ADD32(ctx->r5, 0X3330);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027DD84: addiu       $a1, $a1, 0x3330
    ctx->r5 = ADD32(ctx->r5, 0X3330);
    after_0:
    // 0x8027DD88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027DD8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DD90: jr          $ra
    // 0x8027DD94: nop

    return;
    // 0x8027DD94: nop

;}
RECOMP_FUNC void func_8027DD98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DD98: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027DD9C: lbu         $t6, -0x32B0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32B0);
    // 0x8027DDA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DDA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DDA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DDAC: beq         $t6, $zero, L_8027DDC8
    if (ctx->r14 == 0) {
        // 0x8027DDB0: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8027DDC8;
    }
    // 0x8027DDB0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027DDB4: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027DDB8: jal         0x800297B4
    // 0x8027DDBC: addiu       $a0, $a0, -0x25E0
    ctx->r4 = ADD32(ctx->r4, -0X25E0);
    func_800297B4(rdram, ctx);
        goto after_0;
    // 0x8027DDBC: addiu       $a0, $a0, -0x25E0
    ctx->r4 = ADD32(ctx->r4, -0X25E0);
    after_0:
    // 0x8027DDC0: b           L_8027DDE0
    // 0x8027DDC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027DDE0;
    // 0x8027DDC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027DDC8:
    // 0x8027DDC8: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027DDCC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DDD0: addiu       $a1, $a1, 0x3338
    ctx->r5 = ADD32(ctx->r5, 0X3338);
    // 0x8027DDD4: jal         0x80035490
    // 0x8027DDD8: addiu       $a0, $a0, 0x158
    ctx->r4 = ADD32(ctx->r4, 0X158);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8027DDD8: addiu       $a0, $a0, 0x158
    ctx->r4 = ADD32(ctx->r4, 0X158);
    after_1:
    // 0x8027DDDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027DDE0:
    // 0x8027DDE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DDE4: jr          $ra
    // 0x8027DDE8: nop

    return;
    // 0x8027DDE8: nop

;}
RECOMP_FUNC void func_8027DDEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DDEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DDF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DDF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027DDF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DDFC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DE00: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027DE04: addiu       $a0, $a0, 0x66AC
    ctx->r4 = ADD32(ctx->r4, 0X66AC);
    // 0x8027DE08: jal         0x80035490
    // 0x8027DE0C: addiu       $a1, $a1, 0x3340
    ctx->r5 = ADD32(ctx->r5, 0X3340);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027DE0C: addiu       $a1, $a1, 0x3340
    ctx->r5 = ADD32(ctx->r5, 0X3340);
    after_0:
    // 0x8027DE10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027DE14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DE18: jr          $ra
    // 0x8027DE1C: nop

    return;
    // 0x8027DE1C: nop

;}
RECOMP_FUNC void func_8027DE20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DE20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DE24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DE28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DE2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027DE30: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8027DE34: jal         0x80035A74
    // 0x8027DE38: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    func_80035A74(rdram, ctx);
        goto after_0;
    // 0x8027DE38: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    after_0:
    // 0x8027DE3C: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x8027DE40: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DE44: addiu       $a1, $a1, 0x3348
    ctx->r5 = ADD32(ctx->r5, 0X3348);
    // 0x8027DE48: jal         0x80035490
    // 0x8027DE4C: addiu       $a0, $a0, -0x49EC
    ctx->r4 = ADD32(ctx->r4, -0X49EC);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8027DE4C: addiu       $a0, $a0, -0x49EC
    ctx->r4 = ADD32(ctx->r4, -0X49EC);
    after_1:
    // 0x8027DE50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027DE54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DE58: jr          $ra
    // 0x8027DE5C: nop

    return;
    // 0x8027DE5C: nop

;}
RECOMP_FUNC void func_8027DE60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DE60: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027DE64: lbu         $t6, -0x32B0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32B0);
    // 0x8027DE68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DE6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DE70: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DE74: bne         $t6, $zero, L_8027DE88
    if (ctx->r14 != 0) {
        // 0x8027DE78: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8027DE88;
    }
    // 0x8027DE78: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027DE7C: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    // 0x8027DE80: jal         0x80035A74
    // 0x8027DE84: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_80035A74(rdram, ctx);
        goto after_0;
    // 0x8027DE84: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_0:
L_8027DE88:
    // 0x8027DE88: jal         0x80035A04
    // 0x8027DE8C: nop

    func_80035A04(rdram, ctx);
        goto after_1;
    // 0x8027DE8C: nop

    after_1:
    // 0x8027DE90: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x8027DE94: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DE98: addiu       $a1, $a1, 0x3354
    ctx->r5 = ADD32(ctx->r5, 0X3354);
    // 0x8027DE9C: jal         0x80035490
    // 0x8027DEA0: addiu       $a0, $a0, -0x61BC
    ctx->r4 = ADD32(ctx->r4, -0X61BC);
    func_80035490(rdram, ctx);
        goto after_2;
    // 0x8027DEA0: addiu       $a0, $a0, -0x61BC
    ctx->r4 = ADD32(ctx->r4, -0X61BC);
    after_2:
    // 0x8027DEA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027DEA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DEAC: jr          $ra
    // 0x8027DEB0: nop

    return;
    // 0x8027DEB0: nop

;}
RECOMP_FUNC void func_8027DEB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DEB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DEB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DEBC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027DEC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DEC4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DEC8: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027DECC: addiu       $a0, $a0, 0x5AD0
    ctx->r4 = ADD32(ctx->r4, 0X5AD0);
    // 0x8027DED0: jal         0x80035490
    // 0x8027DED4: addiu       $a1, $a1, 0x335C
    ctx->r5 = ADD32(ctx->r5, 0X335C);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027DED4: addiu       $a1, $a1, 0x335C
    ctx->r5 = ADD32(ctx->r5, 0X335C);
    after_0:
    // 0x8027DED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027DEDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DEE0: jr          $ra
    // 0x8027DEE4: nop

    return;
    // 0x8027DEE4: nop

;}
RECOMP_FUNC void func_8027DEE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DEE8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027DEEC: lbu         $t6, -0x32B0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32B0);
    // 0x8027DEF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DEF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DEF8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DEFC: beq         $t6, $zero, L_8027DF1C
    if (ctx->r14 == 0) {
        // 0x8027DF00: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8027DF1C;
    }
    // 0x8027DF00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027DF04: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8027DF08: addiu       $v0, $v0, -0x2F80
    ctx->r2 = ADD32(ctx->r2, -0X2F80);
    // 0x8027DF0C: lb          $t7, 0x0($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X0);
    // 0x8027DF10: nop

    // 0x8027DF14: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8027DF18: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
L_8027DF1C:
    // 0x8027DF1C: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027DF20: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DF24: addiu       $a1, $a1, 0x3364
    ctx->r5 = ADD32(ctx->r5, 0X3364);
    // 0x8027DF28: jal         0x80035490
    // 0x8027DF2C: addiu       $a0, $a0, 0x66E4
    ctx->r4 = ADD32(ctx->r4, 0X66E4);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027DF2C: addiu       $a0, $a0, 0x66E4
    ctx->r4 = ADD32(ctx->r4, 0X66E4);
    after_0:
    // 0x8027DF30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027DF34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DF38: jr          $ra
    // 0x8027DF3C: nop

    return;
    // 0x8027DF3C: nop

;}
RECOMP_FUNC void func_8027DF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DF40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DF44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DF48: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027DF4C: lbu         $t6, -0x32B0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32B0);
    // 0x8027DF50: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027DF54: addiu       $a0, $a0, -0x25E0
    ctx->r4 = ADD32(ctx->r4, -0X25E0);
    // 0x8027DF58: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027DF5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DF60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027DF64: beq         $t6, $zero, L_8027DF7C
    if (ctx->r14 == 0) {
        // 0x8027DF68: sw          $a0, 0x32D8($at)
        MEM_W(0X32D8, ctx->r1) = ctx->r4;
            goto L_8027DF7C;
    }
    // 0x8027DF68: sw          $a0, 0x32D8($at)
    MEM_W(0X32D8, ctx->r1) = ctx->r4;
    // 0x8027DF6C: jal         0x800297B4
    // 0x8027DF70: nop

    func_800297B4(rdram, ctx);
        goto after_0;
    // 0x8027DF70: nop

    after_0:
    // 0x8027DF74: b           L_8027DF94
    // 0x8027DF78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027DF94;
    // 0x8027DF78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027DF7C:
    // 0x8027DF7C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027DF80: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DF84: addiu       $a1, $a1, 0x336C
    ctx->r5 = ADD32(ctx->r5, 0X336C);
    // 0x8027DF88: jal         0x80035490
    // 0x8027DF8C: addiu       $a0, $a0, 0xF00
    ctx->r4 = ADD32(ctx->r4, 0XF00);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8027DF8C: addiu       $a0, $a0, 0xF00
    ctx->r4 = ADD32(ctx->r4, 0XF00);
    after_1:
    // 0x8027DF90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027DF94:
    // 0x8027DF94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DF98: jr          $ra
    // 0x8027DF9C: nop

    return;
    // 0x8027DF9C: nop

;}
RECOMP_FUNC void func_8027DFA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DFA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DFA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DFA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DFAC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027DFB0: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027DFB4: addiu       $a0, $a0, -0x2030
    ctx->r4 = ADD32(ctx->r4, -0X2030);
    // 0x8027DFB8: jal         0x8002989C
    // 0x8027DFBC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x8027DFBC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x8027DFC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027DFC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027DFC8: jr          $ra
    // 0x8027DFCC: nop

    return;
    // 0x8027DFCC: nop

;}
RECOMP_FUNC void func_8027DFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027DFD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027DFD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027DFD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027DFDC: jal         0x8003DD3C
    // 0x8027DFE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003DD3C(rdram, ctx);
        goto after_0;
    // 0x8027DFE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8027DFE4: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027DFE8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027DFEC: addiu       $a1, $a1, 0x3374
    ctx->r5 = ADD32(ctx->r5, 0X3374);
    // 0x8027DFF0: jal         0x80035490
    // 0x8027DFF4: addiu       $a0, $a0, 0x671C
    ctx->r4 = ADD32(ctx->r4, 0X671C);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8027DFF4: addiu       $a0, $a0, 0x671C
    ctx->r4 = ADD32(ctx->r4, 0X671C);
    after_1:
    // 0x8027DFF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027DFFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E000: jr          $ra
    // 0x8027E004: nop

    return;
    // 0x8027E004: nop

;}
RECOMP_FUNC void func_8027E008(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E008: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E00C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E010: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027E014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E018: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E01C: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027E020: addiu       $a0, $a0, 0x120
    ctx->r4 = ADD32(ctx->r4, 0X120);
    // 0x8027E024: jal         0x80035490
    // 0x8027E028: addiu       $a1, $a1, 0x337C
    ctx->r5 = ADD32(ctx->r5, 0X337C);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027E028: addiu       $a1, $a1, 0x337C
    ctx->r5 = ADD32(ctx->r5, 0X337C);
    after_0:
    // 0x8027E02C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E030: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E034: jr          $ra
    // 0x8027E038: nop

    return;
    // 0x8027E038: nop

;}
RECOMP_FUNC void func_8027E03C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E03C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E040: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E044: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E048: jal         0x80280CBC
    // 0x8027E04C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80280CBC(rdram, ctx);
        goto after_0;
    // 0x8027E04C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8027E050: bne         $v0, $zero, L_8027E07C
    if (ctx->r2 != 0) {
        // 0x8027E054: lui         $a0, 0x8028
        ctx->r4 = S32(0X8028 << 16);
            goto L_8027E07C;
    }
    // 0x8027E054: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027E058: jal         0x8027E094
    // 0x8027E05C: nop

    func_8027E094(rdram, ctx);
        goto after_1;
    // 0x8027E05C: nop

    after_1:
    // 0x8027E060: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x8027E064: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E068: addiu       $a1, $a1, 0x338C
    ctx->r5 = ADD32(ctx->r5, 0X338C);
    // 0x8027E06C: jal         0x80035490
    // 0x8027E070: addiu       $a0, $a0, 0x51D0
    ctx->r4 = ADD32(ctx->r4, 0X51D0);
    func_80035490(rdram, ctx);
        goto after_2;
    // 0x8027E070: addiu       $a0, $a0, 0x51D0
    ctx->r4 = ADD32(ctx->r4, 0X51D0);
    after_2:
    // 0x8027E074: b           L_8027E088
    // 0x8027E078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027E088;
    // 0x8027E078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027E07C:
    // 0x8027E07C: jal         0x800297B4
    // 0x8027E080: addiu       $a0, $a0, -0x1EF8
    ctx->r4 = ADD32(ctx->r4, -0X1EF8);
    func_800297B4(rdram, ctx);
        goto after_3;
    // 0x8027E080: addiu       $a0, $a0, -0x1EF8
    ctx->r4 = ADD32(ctx->r4, -0X1EF8);
    after_3:
    // 0x8027E084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027E088:
    // 0x8027E088: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E08C: jr          $ra
    // 0x8027E090: nop

    return;
    // 0x8027E090: nop

;}
RECOMP_FUNC void func_8027E094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E094: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8027E098: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8027E09C: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x8027E0A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E0A4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8027E0A8: addiu       $v0, $v0, -0x30A0
    ctx->r2 = ADD32(ctx->r2, -0X30A0);
    // 0x8027E0AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E0B0: sb          $zero, 0x4($v0)
    MEM_B(0X4, ctx->r2) = 0;
    // 0x8027E0B4: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x8027E0B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8027E0BC: jal         0x8003D8E0
    // 0x8027E0C0: sb          $t6, 0xA94($v1)
    MEM_B(0XA94, ctx->r3) = ctx->r14;
    func_8003D8E0(rdram, ctx);
        goto after_0;
    // 0x8027E0C0: sb          $t6, 0xA94($v1)
    MEM_B(0XA94, ctx->r3) = ctx->r14;
    after_0:
    // 0x8027E0C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E0C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E0CC: jr          $ra
    // 0x8027E0D0: nop

    return;
    // 0x8027E0D0: nop

;}
RECOMP_FUNC void func_8027E0D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E0D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E0D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E0DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027E0E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E0E4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E0E8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027E0EC: addiu       $a0, $a0, -0x2600
    ctx->r4 = ADD32(ctx->r4, -0X2600);
    // 0x8027E0F0: jal         0x80035490
    // 0x8027E0F4: addiu       $a1, $a1, 0x3394
    ctx->r5 = ADD32(ctx->r5, 0X3394);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027E0F4: addiu       $a1, $a1, 0x3394
    ctx->r5 = ADD32(ctx->r5, 0X3394);
    after_0:
    // 0x8027E0F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E0FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E100: jr          $ra
    // 0x8027E104: nop

    return;
    // 0x8027E104: nop

;}
RECOMP_FUNC void func_8027E108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E108: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027E10C: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8027E110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E114: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027E118: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027E11C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027E120: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027E124: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027E128: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027E12C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027E130: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027E134: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027E138: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8027E13C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027E140: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027E144: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8027E148: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E14C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E150: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027E154: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8027E158: lb          $a0, 0x5($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X5);
    // 0x8027E15C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8027E160: blez        $a0, L_8027E1C0
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8027E164: nop
    
            goto L_8027E1C0;
    }
    // 0x8027E164: nop

    // 0x8027E168: lb          $a1, 0x335C($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X335C);
    // 0x8027E16C: addiu       $a2, $zero, 0x47C
    ctx->r6 = ADD32(0, 0X47C);
L_8027E170:
    // 0x8027E170: multu       $v0, $a2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027E174: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8027E178: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x8027E17C: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8027E180: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8027E184: mflo        $t9
    ctx->r25 = lo;
    // 0x8027E188: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x8027E18C: lb          $t1, 0xC($t0)
    ctx->r9 = MEM_B(ctx->r8, 0XC);
    // 0x8027E190: nop

    // 0x8027E194: bne         $a1, $t1, L_8027E1B8
    if (ctx->r5 != ctx->r9) {
        // 0x8027E198: nop
    
            goto L_8027E1B8;
    }
    // 0x8027E198: nop

    // 0x8027E19C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027E1A0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E1A4: addiu       $a1, $a1, 0x339C
    ctx->r5 = ADD32(ctx->r5, 0X339C);
    // 0x8027E1A8: jal         0x80035490
    // 0x8027E1AC: addiu       $a0, $a0, -0x1DB0
    ctx->r4 = ADD32(ctx->r4, -0X1DB0);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027E1AC: addiu       $a0, $a0, -0x1DB0
    ctx->r4 = ADD32(ctx->r4, -0X1DB0);
    after_0:
    // 0x8027E1B0: b           L_8027E1D0
    // 0x8027E1B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027E1D0;
    // 0x8027E1B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027E1B8:
    // 0x8027E1B8: bne         $at, $zero, L_8027E170
    if (ctx->r1 != 0) {
        // 0x8027E1BC: nop
    
            goto L_8027E170;
    }
    // 0x8027E1BC: nop

L_8027E1C0:
    // 0x8027E1C0: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027E1C4: jal         0x800297B4
    // 0x8027E1C8: addiu       $a0, $a0, -0x1E24
    ctx->r4 = ADD32(ctx->r4, -0X1E24);
    func_800297B4(rdram, ctx);
        goto after_1;
    // 0x8027E1C8: addiu       $a0, $a0, -0x1E24
    ctx->r4 = ADD32(ctx->r4, -0X1E24);
    after_1:
    // 0x8027E1CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027E1D0:
    // 0x8027E1D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E1D4: jr          $ra
    // 0x8027E1D8: nop

    return;
    // 0x8027E1D8: nop

;}
RECOMP_FUNC void func_8027E1DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E1DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E1E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E1E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E1E8: jal         0x80280CBC
    // 0x8027E1EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80280CBC(rdram, ctx);
        goto after_0;
    // 0x8027E1EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8027E1F0: bne         $v0, $zero, L_8027E204
    if (ctx->r2 != 0) {
        // 0x8027E1F4: lui         $a0, 0x8027
        ctx->r4 = S32(0X8027 << 16);
            goto L_8027E204;
    }
    // 0x8027E1F4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027E1F8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E1FC: b           L_8027E20C
    // 0x8027E200: addiu       $a1, $a1, 0x33A4
    ctx->r5 = ADD32(ctx->r5, 0X33A4);
        goto L_8027E20C;
    // 0x8027E200: addiu       $a1, $a1, 0x33A4
    ctx->r5 = ADD32(ctx->r5, 0X33A4);
L_8027E204:
    // 0x8027E204: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E208: addiu       $a1, $a1, 0x33B4
    ctx->r5 = ADD32(ctx->r5, 0X33B4);
L_8027E20C:
    // 0x8027E20C: jal         0x80035490
    // 0x8027E210: addiu       $a0, $a0, 0x2B70
    ctx->r4 = ADD32(ctx->r4, 0X2B70);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8027E210: addiu       $a0, $a0, 0x2B70
    ctx->r4 = ADD32(ctx->r4, 0X2B70);
    after_1:
    // 0x8027E214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E218: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E21C: jr          $ra
    // 0x8027E220: nop

    return;
    // 0x8027E220: nop

;}
RECOMP_FUNC void func_8027E224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E224: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E228: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E22C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027E230: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E234: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E238: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027E23C: addiu       $a0, $a0, 0x19A4
    ctx->r4 = ADD32(ctx->r4, 0X19A4);
    // 0x8027E240: jal         0x80035490
    // 0x8027E244: addiu       $a1, $a1, 0x33C4
    ctx->r5 = ADD32(ctx->r5, 0X33C4);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027E244: addiu       $a1, $a1, 0x33C4
    ctx->r5 = ADD32(ctx->r5, 0X33C4);
    after_0:
    // 0x8027E248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E24C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E250: jr          $ra
    // 0x8027E254: nop

    return;
    // 0x8027E254: nop

;}
RECOMP_FUNC void func_8027E258(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E258: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E25C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E260: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027E264: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E268: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E26C: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x8027E270: addiu       $a0, $a0, -0x61BC
    ctx->r4 = ADD32(ctx->r4, -0X61BC);
    // 0x8027E274: jal         0x80035490
    // 0x8027E278: addiu       $a1, $a1, 0x33C4
    ctx->r5 = ADD32(ctx->r5, 0X33C4);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027E278: addiu       $a1, $a1, 0x33C4
    ctx->r5 = ADD32(ctx->r5, 0X33C4);
    after_0:
    // 0x8027E27C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E284: jr          $ra
    // 0x8027E288: nop

    return;
    // 0x8027E288: nop

;}
RECOMP_FUNC void func_8027E28C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E28C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E290: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E294: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027E298: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E29C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E2A0: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027E2A4: addiu       $a0, $a0, 0x5AD0
    ctx->r4 = ADD32(ctx->r4, 0X5AD0);
    // 0x8027E2A8: jal         0x80035490
    // 0x8027E2AC: addiu       $a1, $a1, 0x33C4
    ctx->r5 = ADD32(ctx->r5, 0X33C4);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027E2AC: addiu       $a1, $a1, 0x33C4
    ctx->r5 = ADD32(ctx->r5, 0X33C4);
    after_0:
    // 0x8027E2B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E2B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E2B8: jr          $ra
    // 0x8027E2BC: nop

    return;
    // 0x8027E2BC: nop

;}
RECOMP_FUNC void func_8027E2C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E2C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E2C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E2C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E2CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027E2D0: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027E2D4: addiu       $a0, $a0, -0x1D10
    ctx->r4 = ADD32(ctx->r4, -0X1D10);
    // 0x8027E2D8: jal         0x8002989C
    // 0x8027E2DC: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x8027E2DC: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_0:
    // 0x8027E2E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E2E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E2E8: jr          $ra
    // 0x8027E2EC: nop

    return;
    // 0x8027E2EC: nop

;}
RECOMP_FUNC void func_8027E2F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E2F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E2F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E2F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027E2FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E300: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E304: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x8027E308: addiu       $a0, $a0, 0x3D30
    ctx->r4 = ADD32(ctx->r4, 0X3D30);
    // 0x8027E30C: jal         0x80035490
    // 0x8027E310: addiu       $a1, $a1, 0x33CC
    ctx->r5 = ADD32(ctx->r5, 0X33CC);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027E310: addiu       $a1, $a1, 0x33CC
    ctx->r5 = ADD32(ctx->r5, 0X33CC);
    after_0:
    // 0x8027E314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E31C: jr          $ra
    // 0x8027E320: nop

    return;
    // 0x8027E320: nop

;}
RECOMP_FUNC void func_8027E324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E324: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027E328: lbu         $t6, -0x32B0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32B0);
    // 0x8027E32C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E334: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E338: beq         $t6, $zero, L_8027E368
    if (ctx->r14 == 0) {
        // 0x8027E33C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8027E368;
    }
    // 0x8027E33C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027E340: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8027E344: addiu       $v0, $v0, -0x2F80
    ctx->r2 = ADD32(ctx->r2, -0X2F80);
    // 0x8027E348: lb          $t7, 0x0($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X0);
    // 0x8027E34C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027E350: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8027E354: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x8027E358: jal         0x800297B4
    // 0x8027E35C: addiu       $a0, $a0, -0x1C40
    ctx->r4 = ADD32(ctx->r4, -0X1C40);
    func_800297B4(rdram, ctx);
        goto after_0;
    // 0x8027E35C: addiu       $a0, $a0, -0x1C40
    ctx->r4 = ADD32(ctx->r4, -0X1C40);
    after_0:
    // 0x8027E360: b           L_8027E380
    // 0x8027E364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027E380;
    // 0x8027E364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027E368:
    // 0x8027E368: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027E36C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E370: addiu       $a1, $a1, 0x33D4
    ctx->r5 = ADD32(ctx->r5, 0X33D4);
    // 0x8027E374: jal         0x80035490
    // 0x8027E378: addiu       $a0, $a0, 0x663C
    ctx->r4 = ADD32(ctx->r4, 0X663C);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8027E378: addiu       $a0, $a0, 0x663C
    ctx->r4 = ADD32(ctx->r4, 0X663C);
    after_1:
    // 0x8027E37C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027E380:
    // 0x8027E380: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E384: jr          $ra
    // 0x8027E388: nop

    return;
    // 0x8027E388: nop

;}
RECOMP_FUNC void func_8027E38C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E38C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E390: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E394: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027E398: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E39C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E3A0: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x8027E3A4: addiu       $a0, $a0, -0x49EC
    ctx->r4 = ADD32(ctx->r4, -0X49EC);
    // 0x8027E3A8: jal         0x80035490
    // 0x8027E3AC: addiu       $a1, $a1, 0x33DC
    ctx->r5 = ADD32(ctx->r5, 0X33DC);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027E3AC: addiu       $a1, $a1, 0x33DC
    ctx->r5 = ADD32(ctx->r5, 0X33DC);
    after_0:
    // 0x8027E3B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E3B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E3B8: jr          $ra
    // 0x8027E3BC: nop

    return;
    // 0x8027E3BC: nop

;}
RECOMP_FUNC void func_8027E3C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E3C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E3C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E3C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E3CC: jal         0x80280804
    // 0x8027E3D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80280804(rdram, ctx);
        goto after_0;
    // 0x8027E3D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8027E3D4: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027E3D8: jal         0x800297B4
    // 0x8027E3DC: addiu       $a0, $a0, -0x1C10
    ctx->r4 = ADD32(ctx->r4, -0X1C10);
    func_800297B4(rdram, ctx);
        goto after_1;
    // 0x8027E3DC: addiu       $a0, $a0, -0x1C10
    ctx->r4 = ADD32(ctx->r4, -0X1C10);
    after_1:
    // 0x8027E3E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E3E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E3E8: jr          $ra
    // 0x8027E3EC: nop

    return;
    // 0x8027E3EC: nop

;}
RECOMP_FUNC void func_8027E3F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E3F0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027E3F4: lbu         $t6, -0x32B0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32B0);
    // 0x8027E3F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E3FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E400: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E404: beq         $t6, $zero, L_8027E428
    if (ctx->r14 == 0) {
        // 0x8027E408: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8027E428;
    }
    // 0x8027E408: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027E40C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8027E410: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E414: addiu       $a1, $a1, 0x340C
    ctx->r5 = ADD32(ctx->r5, 0X340C);
    // 0x8027E418: jal         0x80035490
    // 0x8027E41C: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027E41C: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    after_0:
    // 0x8027E420: b           L_8027E440
    // 0x8027E424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027E440;
    // 0x8027E424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027E428:
    // 0x8027E428: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8027E42C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E430: addiu       $a1, $a1, 0x33E8
    ctx->r5 = ADD32(ctx->r5, 0X33E8);
    // 0x8027E434: jal         0x80035490
    // 0x8027E438: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8027E438: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    after_1:
    // 0x8027E43C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027E440:
    // 0x8027E440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E444: jr          $ra
    // 0x8027E448: nop

    return;
    // 0x8027E448: nop

;}
RECOMP_FUNC void func_8027E44C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E44C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E450: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E454: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027E458: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E45C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E460: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8027E464: addiu       $a0, $a0, -0xF50
    ctx->r4 = ADD32(ctx->r4, -0XF50);
    // 0x8027E468: jal         0x80035490
    // 0x8027E46C: addiu       $a1, $a1, 0x3430
    ctx->r5 = ADD32(ctx->r5, 0X3430);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027E46C: addiu       $a1, $a1, 0x3430
    ctx->r5 = ADD32(ctx->r5, 0X3430);
    after_0:
    // 0x8027E470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E478: jr          $ra
    // 0x8027E47C: nop

    return;
    // 0x8027E47C: nop

;}
RECOMP_FUNC void func_8027E480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E480: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E484: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E488: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027E48C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E490: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E494: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x8027E498: addiu       $a0, $a0, 0x34F0
    ctx->r4 = ADD32(ctx->r4, 0X34F0);
    // 0x8027E49C: jal         0x80035490
    // 0x8027E4A0: addiu       $a1, $a1, 0x3438
    ctx->r5 = ADD32(ctx->r5, 0X3438);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027E4A0: addiu       $a1, $a1, 0x3438
    ctx->r5 = ADD32(ctx->r5, 0X3438);
    after_0:
    // 0x8027E4A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E4A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E4AC: jr          $ra
    // 0x8027E4B0: nop

    return;
    // 0x8027E4B0: nop

;}
RECOMP_FUNC void func_8027E4B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E4B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E4B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E4BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027E4C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E4C4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E4C8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027E4CC: addiu       $a0, $a0, 0x5230
    ctx->r4 = ADD32(ctx->r4, 0X5230);
    // 0x8027E4D0: jal         0x80035490
    // 0x8027E4D4: addiu       $a1, $a1, 0x3438
    ctx->r5 = ADD32(ctx->r5, 0X3438);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027E4D4: addiu       $a1, $a1, 0x3438
    ctx->r5 = ADD32(ctx->r5, 0X3438);
    after_0:
    // 0x8027E4D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E4DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E4E0: jr          $ra
    // 0x8027E4E4: nop

    return;
    // 0x8027E4E4: nop

;}
RECOMP_FUNC void func_8027E4E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E4E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E4EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E4F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027E4F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E4F8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E4FC: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8027E500: addiu       $a0, $a0, 0x4800
    ctx->r4 = ADD32(ctx->r4, 0X4800);
    // 0x8027E504: jal         0x80035490
    // 0x8027E508: addiu       $a1, $a1, 0x3438
    ctx->r5 = ADD32(ctx->r5, 0X3438);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027E508: addiu       $a1, $a1, 0x3438
    ctx->r5 = ADD32(ctx->r5, 0X3438);
    after_0:
    // 0x8027E50C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E514: jr          $ra
    // 0x8027E518: nop

    return;
    // 0x8027E518: nop

;}
RECOMP_FUNC void func_8027E51C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E51C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E520: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E524: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027E528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E52C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E530: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027E534: addiu       $a0, $a0, -0x5F10
    ctx->r4 = ADD32(ctx->r4, -0X5F10);
    // 0x8027E538: jal         0x80035490
    // 0x8027E53C: addiu       $a1, $a1, 0x3438
    ctx->r5 = ADD32(ctx->r5, 0X3438);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027E53C: addiu       $a1, $a1, 0x3438
    ctx->r5 = ADD32(ctx->r5, 0X3438);
    after_0:
    // 0x8027E540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E548: jr          $ra
    // 0x8027E54C: nop

    return;
    // 0x8027E54C: nop

;}
RECOMP_FUNC void func_8027E550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E554: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E558: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027E55C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E560: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E564: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027E568: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x8027E56C: jal         0x80035490
    // 0x8027E570: addiu       $a1, $a1, 0x3438
    ctx->r5 = ADD32(ctx->r5, 0X3438);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027E570: addiu       $a1, $a1, 0x3438
    ctx->r5 = ADD32(ctx->r5, 0X3438);
    after_0:
    // 0x8027E574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E57C: jr          $ra
    // 0x8027E580: nop

    return;
    // 0x8027E580: nop

;}
RECOMP_FUNC void func_8027E584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E584: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E588: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E58C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027E590: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E594: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E598: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027E59C: addiu       $a0, $a0, 0x3B80
    ctx->r4 = ADD32(ctx->r4, 0X3B80);
    // 0x8027E5A0: jal         0x80035490
    // 0x8027E5A4: addiu       $a1, $a1, 0x3438
    ctx->r5 = ADD32(ctx->r5, 0X3438);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027E5A4: addiu       $a1, $a1, 0x3438
    ctx->r5 = ADD32(ctx->r5, 0X3438);
    after_0:
    // 0x8027E5A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E5AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E5B0: jr          $ra
    // 0x8027E5B4: nop

    return;
    // 0x8027E5B4: nop

;}
RECOMP_FUNC void func_8027E5B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027E5B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027E5BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027E5C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027E5C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027E5C8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027E5CC: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027E5D0: addiu       $a0, $a0, 0x4964
    ctx->r4 = ADD32(ctx->r4, 0X4964);
    // 0x8027E5D4: jal         0x80035490
    // 0x8027E5D8: addiu       $a1, $a1, 0x3438
    ctx->r5 = ADD32(ctx->r5, 0X3438);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027E5D8: addiu       $a1, $a1, 0x3438
    ctx->r5 = ADD32(ctx->r5, 0X3438);
    after_0:
    // 0x8027E5DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027E5E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027E5E4: jr          $ra
    // 0x8027E5E8: nop

    return;
    // 0x8027E5E8: nop

;}
