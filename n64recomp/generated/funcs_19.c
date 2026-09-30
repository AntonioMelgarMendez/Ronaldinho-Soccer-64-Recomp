#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8003B2C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B2C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B2CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B2D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B2D4: jal         0x80280824
    // 0x8003B2D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x80280824)(rdram, ctx);
        goto after_0;
    // 0x8003B2D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003B2DC: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003B2E0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B2E4: addiu       $a1, $a1, -0x7B98
    ctx->r5 = ADD32(ctx->r5, -0X7B98);
    // 0x8003B2E8: jal         0x80035490
    // 0x8003B2EC: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8003B2EC: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    after_1:
    // 0x8003B2F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B2F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B2F8: jr          $ra
    // 0x8003B2FC: nop

    return;
    // 0x8003B2FC: nop

;}
RECOMP_FUNC void func_8003B300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B300: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B304: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B308: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B30C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B310: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B314: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003B318: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    // 0x8003B31C: jal         0x80035490
    // 0x8003B320: addiu       $a1, $a1, -0x7B98
    ctx->r5 = ADD32(ctx->r5, -0X7B98);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B320: addiu       $a1, $a1, -0x7B98
    ctx->r5 = ADD32(ctx->r5, -0X7B98);
    after_0:
    // 0x8003B324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B32C: jr          $ra
    // 0x8003B330: nop

    return;
    // 0x8003B330: nop

;}
RECOMP_FUNC void func_8003B334(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B334: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B338: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B33C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B340: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B344: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B348: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003B34C: addiu       $a0, $a0, -0xF50
    ctx->r4 = ADD32(ctx->r4, -0XF50);
    // 0x8003B350: jal         0x80035490
    // 0x8003B354: addiu       $a1, $a1, -0x7B70
    ctx->r5 = ADD32(ctx->r5, -0X7B70);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B354: addiu       $a1, $a1, -0x7B70
    ctx->r5 = ADD32(ctx->r5, -0X7B70);
    after_0:
    // 0x8003B358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B35C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B360: jr          $ra
    // 0x8003B364: nop

    return;
    // 0x8003B364: nop

;}
RECOMP_FUNC void func_8003B368(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B368: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B36C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B370: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B378: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B37C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8003B380: addiu       $a0, $a0, 0x5230
    ctx->r4 = ADD32(ctx->r4, 0X5230);
    // 0x8003B384: jal         0x80035490
    // 0x8003B388: addiu       $a1, $a1, -0x7B78
    ctx->r5 = ADD32(ctx->r5, -0X7B78);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B388: addiu       $a1, $a1, -0x7B78
    ctx->r5 = ADD32(ctx->r5, -0X7B78);
    after_0:
    // 0x8003B38C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B390: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B394: jr          $ra
    // 0x8003B398: nop

    return;
    // 0x8003B398: nop

;}
RECOMP_FUNC void func_8003B39C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B39C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B3A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B3A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B3A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B3AC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B3B0: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8003B3B4: addiu       $a0, $a0, 0x4800
    ctx->r4 = ADD32(ctx->r4, 0X4800);
    // 0x8003B3B8: jal         0x80035490
    // 0x8003B3BC: addiu       $a1, $a1, -0x7B78
    ctx->r5 = ADD32(ctx->r5, -0X7B78);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B3BC: addiu       $a1, $a1, -0x7B78
    ctx->r5 = ADD32(ctx->r5, -0X7B78);
    after_0:
    // 0x8003B3C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B3C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B3C8: jr          $ra
    // 0x8003B3CC: nop

    return;
    // 0x8003B3CC: nop

;}
RECOMP_FUNC void func_8003B3D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B3D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B3D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B3D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B3DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B3E0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B3E4: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003B3E8: addiu       $a0, $a0, 0x4964
    ctx->r4 = ADD32(ctx->r4, 0X4964);
    // 0x8003B3EC: jal         0x80035490
    // 0x8003B3F0: addiu       $a1, $a1, -0x7B78
    ctx->r5 = ADD32(ctx->r5, -0X7B78);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B3F0: addiu       $a1, $a1, -0x7B78
    ctx->r5 = ADD32(ctx->r5, -0X7B78);
    after_0:
    // 0x8003B3F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B3F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B3FC: jr          $ra
    // 0x8003B400: nop

    return;
    // 0x8003B400: nop

;}
RECOMP_FUNC void func_8003B404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B404: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B408: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B40C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B410: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B414: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B418: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8003B41C: addiu       $a0, $a0, -0x5F10
    ctx->r4 = ADD32(ctx->r4, -0X5F10);
    // 0x8003B420: jal         0x80035490
    // 0x8003B424: addiu       $a1, $a1, -0x7B78
    ctx->r5 = ADD32(ctx->r5, -0X7B78);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B424: addiu       $a1, $a1, -0x7B78
    ctx->r5 = ADD32(ctx->r5, -0X7B78);
    after_0:
    // 0x8003B428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B42C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B430: jr          $ra
    // 0x8003B434: nop

    return;
    // 0x8003B434: nop

;}
RECOMP_FUNC void func_8003B438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B438: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B43C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B440: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B444: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B448: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B44C: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003B450: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x8003B454: jal         0x80035490
    // 0x8003B458: addiu       $a1, $a1, -0x7B78
    ctx->r5 = ADD32(ctx->r5, -0X7B78);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B458: addiu       $a1, $a1, -0x7B78
    ctx->r5 = ADD32(ctx->r5, -0X7B78);
    after_0:
    // 0x8003B45C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B460: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B464: jr          $ra
    // 0x8003B468: nop

    return;
    // 0x8003B468: nop

;}
RECOMP_FUNC void func_8003B46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B46C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B470: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B474: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B478: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B47C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B480: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003B484: addiu       $a0, $a0, 0x3B80
    ctx->r4 = ADD32(ctx->r4, 0X3B80);
    // 0x8003B488: jal         0x80035490
    // 0x8003B48C: addiu       $a1, $a1, -0x7B78
    ctx->r5 = ADD32(ctx->r5, -0X7B78);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B48C: addiu       $a1, $a1, -0x7B78
    ctx->r5 = ADD32(ctx->r5, -0X7B78);
    after_0:
    // 0x8003B490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B494: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B498: jr          $ra
    // 0x8003B49C: nop

    return;
    // 0x8003B49C: nop

;}
RECOMP_FUNC void func_8003B4A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B4A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B4A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B4A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B4AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B4B0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B4B4: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x8003B4B8: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8003B4BC: jal         0x80035490
    // 0x8003B4C0: addiu       $a1, $a1, -0x7B68
    ctx->r5 = ADD32(ctx->r5, -0X7B68);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B4C0: addiu       $a1, $a1, -0x7B68
    ctx->r5 = ADD32(ctx->r5, -0X7B68);
    after_0:
    // 0x8003B4C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B4C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B4CC: jr          $ra
    // 0x8003B4D0: nop

    return;
    // 0x8003B4D0: nop

;}
RECOMP_FUNC void func_8003B4D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B4D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B4D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B4DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B4E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B4E4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B4E8: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003B4EC: addiu       $a0, $a0, -0x43E8
    ctx->r4 = ADD32(ctx->r4, -0X43E8);
    // 0x8003B4F0: jal         0x80035490
    // 0x8003B4F4: addiu       $a1, $a1, -0x7B60
    ctx->r5 = ADD32(ctx->r5, -0X7B60);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B4F4: addiu       $a1, $a1, -0x7B60
    ctx->r5 = ADD32(ctx->r5, -0X7B60);
    after_0:
    // 0x8003B4F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B4FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B500: jr          $ra
    // 0x8003B504: nop

    return;
    // 0x8003B504: nop

;}
RECOMP_FUNC void func_8003B508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B508: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B50C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B510: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B514: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B518: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B51C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003B520: addiu       $a0, $a0, -0x7CE0
    ctx->r4 = ADD32(ctx->r4, -0X7CE0);
    // 0x8003B524: jal         0x80035490
    // 0x8003B528: addiu       $a1, $a1, -0x7B58
    ctx->r5 = ADD32(ctx->r5, -0X7B58);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B528: addiu       $a1, $a1, -0x7B58
    ctx->r5 = ADD32(ctx->r5, -0X7B58);
    after_0:
    // 0x8003B52C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B530: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B534: jr          $ra
    // 0x8003B538: nop

    return;
    // 0x8003B538: nop

;}
RECOMP_FUNC void func_8003B53C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B53C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B540: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B544: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B548: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B54C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B550: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x8003B554: addiu       $a0, $a0, 0x34F0
    ctx->r4 = ADD32(ctx->r4, 0X34F0);
    // 0x8003B558: jal         0x80035490
    // 0x8003B55C: addiu       $a1, $a1, -0x7B40
    ctx->r5 = ADD32(ctx->r5, -0X7B40);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B55C: addiu       $a1, $a1, -0x7B40
    ctx->r5 = ADD32(ctx->r5, -0X7B40);
    after_0:
    // 0x8003B560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B564: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B568: jr          $ra
    // 0x8003B56C: nop

    return;
    // 0x8003B56C: nop

;}
RECOMP_FUNC void func_8003B570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B570: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B574: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B578: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B57C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B580: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B584: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8003B588: addiu       $a0, $a0, 0x5230
    ctx->r4 = ADD32(ctx->r4, 0X5230);
    // 0x8003B58C: jal         0x80035490
    // 0x8003B590: addiu       $a1, $a1, -0x7B40
    ctx->r5 = ADD32(ctx->r5, -0X7B40);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B590: addiu       $a1, $a1, -0x7B40
    ctx->r5 = ADD32(ctx->r5, -0X7B40);
    after_0:
    // 0x8003B594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B598: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B59C: jr          $ra
    // 0x8003B5A0: nop

    return;
    // 0x8003B5A0: nop

;}
RECOMP_FUNC void func_8003B5A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B5A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B5A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B5AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B5B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B5B4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B5B8: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003B5BC: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x8003B5C0: jal         0x80035490
    // 0x8003B5C4: addiu       $a1, $a1, -0x7B40
    ctx->r5 = ADD32(ctx->r5, -0X7B40);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B5C4: addiu       $a1, $a1, -0x7B40
    ctx->r5 = ADD32(ctx->r5, -0X7B40);
    after_0:
    // 0x8003B5C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B5CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B5D0: jr          $ra
    // 0x8003B5D4: nop

    return;
    // 0x8003B5D4: nop

;}
RECOMP_FUNC void func_8003B5D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B5D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B5DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B5E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B5E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B5E8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B5EC: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003B5F0: addiu       $a0, $a0, 0x3B80
    ctx->r4 = ADD32(ctx->r4, 0X3B80);
    // 0x8003B5F4: jal         0x80035490
    // 0x8003B5F8: addiu       $a1, $a1, -0x7B40
    ctx->r5 = ADD32(ctx->r5, -0X7B40);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B5F8: addiu       $a1, $a1, -0x7B40
    ctx->r5 = ADD32(ctx->r5, -0X7B40);
    after_0:
    // 0x8003B5FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B604: jr          $ra
    // 0x8003B608: nop

    return;
    // 0x8003B608: nop

;}
RECOMP_FUNC void func_8003B60C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B60C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B610: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B614: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B618: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B61C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B620: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003B624: addiu       $a0, $a0, -0x3B20
    ctx->r4 = ADD32(ctx->r4, -0X3B20);
    // 0x8003B628: jal         0x80035490
    // 0x8003B62C: addiu       $a1, $a1, -0x7B38
    ctx->r5 = ADD32(ctx->r5, -0X7B38);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B62C: addiu       $a1, $a1, -0x7B38
    ctx->r5 = ADD32(ctx->r5, -0X7B38);
    after_0:
    // 0x8003B630: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B634: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B638: jr          $ra
    // 0x8003B63C: nop

    return;
    // 0x8003B63C: nop

;}
RECOMP_FUNC void func_8003B640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B640: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8003B644: lhu         $t6, -0x32AC($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X32AC);
    // 0x8003B648: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B64C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003B650: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B654: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B658: beq         $t6, $at, L_8003B67C
    if (ctx->r14 == ctx->r1) {
        // 0x8003B65C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8003B67C;
    }
    // 0x8003B65C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B660: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x8003B664: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B668: addiu       $a1, $a1, -0x7B30
    ctx->r5 = ADD32(ctx->r5, -0X7B30);
    // 0x8003B66C: jal         0x80035490
    // 0x8003B670: addiu       $a0, $a0, -0x4970
    ctx->r4 = ADD32(ctx->r4, -0X4970);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B670: addiu       $a0, $a0, -0x4970
    ctx->r4 = ADD32(ctx->r4, -0X4970);
    after_0:
    // 0x8003B674: b           L_8003B694
    // 0x8003B678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003B694;
    // 0x8003B678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003B67C:
    // 0x8003B67C: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8003B680: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B684: addiu       $a1, $a1, -0x7B14
    ctx->r5 = ADD32(ctx->r5, -0X7B14);
    // 0x8003B688: jal         0x80035490
    // 0x8003B68C: addiu       $a0, $a0, 0x7FA0
    ctx->r4 = ADD32(ctx->r4, 0X7FA0);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8003B68C: addiu       $a0, $a0, 0x7FA0
    ctx->r4 = ADD32(ctx->r4, 0X7FA0);
    after_1:
    // 0x8003B690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003B694:
    // 0x8003B694: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B698: jr          $ra
    // 0x8003B69C: nop

    return;
    // 0x8003B69C: nop

;}
RECOMP_FUNC void func_8003B6A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B6A0: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8003B6A4: lhu         $t6, 0x5242($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X5242);
    // 0x8003B6A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B6AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B6B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B6B4: bne         $t6, $zero, L_8003B6D0
    if (ctx->r14 != 0) {
        // 0x8003B6B8: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8003B6D0;
    }
    // 0x8003B6B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B6BC: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8003B6C0: jal         0x800297B4
    // 0x8003B6C4: addiu       $a0, $a0, -0x49F4
    ctx->r4 = ADD32(ctx->r4, -0X49F4);
    func_800297B4(rdram, ctx);
        goto after_0;
    // 0x8003B6C4: addiu       $a0, $a0, -0x49F4
    ctx->r4 = ADD32(ctx->r4, -0X49F4);
    after_0:
    // 0x8003B6C8: b           L_8003B6E8
    // 0x8003B6CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003B6E8;
    // 0x8003B6CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003B6D0:
    // 0x8003B6D0: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8003B6D4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B6D8: addiu       $a1, $a1, -0x7B0C
    ctx->r5 = ADD32(ctx->r5, -0X7B0C);
    // 0x8003B6DC: jal         0x80035490
    // 0x8003B6E0: addiu       $a0, $a0, 0x7FE4
    ctx->r4 = ADD32(ctx->r4, 0X7FE4);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8003B6E0: addiu       $a0, $a0, 0x7FE4
    ctx->r4 = ADD32(ctx->r4, 0X7FE4);
    after_1:
    // 0x8003B6E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003B6E8:
    // 0x8003B6E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B6EC: jr          $ra
    // 0x8003B6F0: nop

    return;
    // 0x8003B6F0: nop

;}
RECOMP_FUNC void func_8003B6F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B6F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B6F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B6FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B700: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B704: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B708: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003B70C: addiu       $a0, $a0, -0x4B34
    ctx->r4 = ADD32(ctx->r4, -0X4B34);
    // 0x8003B710: jal         0x80035490
    // 0x8003B714: addiu       $a1, $a1, -0x7B04
    ctx->r5 = ADD32(ctx->r5, -0X7B04);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B714: addiu       $a1, $a1, -0x7B04
    ctx->r5 = ADD32(ctx->r5, -0X7B04);
    after_0:
    // 0x8003B718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B71C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B720: jr          $ra
    // 0x8003B724: nop

    return;
    // 0x8003B724: nop

;}
RECOMP_FUNC void func_8003B728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B728: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B72C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B730: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B738: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B73C: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8003B740: addiu       $a0, $a0, 0x7FA0
    ctx->r4 = ADD32(ctx->r4, 0X7FA0);
    // 0x8003B744: jal         0x80035490
    // 0x8003B748: addiu       $a1, $a1, -0x7AF8
    ctx->r5 = ADD32(ctx->r5, -0X7AF8);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B748: addiu       $a1, $a1, -0x7AF8
    ctx->r5 = ADD32(ctx->r5, -0X7AF8);
    after_0:
    // 0x8003B74C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B750: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B754: jr          $ra
    // 0x8003B758: nop

    return;
    // 0x8003B758: nop

;}
RECOMP_FUNC void func_8003B75C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B75C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B760: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B764: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B768: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B76C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B770: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8003B774: addiu       $a0, $a0, 0x2CE0
    ctx->r4 = ADD32(ctx->r4, 0X2CE0);
    // 0x8003B778: jal         0x80035490
    // 0x8003B77C: addiu       $a1, $a1, -0x7AF0
    ctx->r5 = ADD32(ctx->r5, -0X7AF0);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B77C: addiu       $a1, $a1, -0x7AF0
    ctx->r5 = ADD32(ctx->r5, -0X7AF0);
    after_0:
    // 0x8003B780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B788: jr          $ra
    // 0x8003B78C: nop

    return;
    // 0x8003B78C: nop

;}
RECOMP_FUNC void func_8003B790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B798: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B79C: jal         0x80035A90
    // 0x8003B7A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035A90(rdram, ctx);
        goto after_0;
    // 0x8003B7A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003B7A4: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003B7A8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B7AC: addiu       $a1, $a1, -0x7AE8
    ctx->r5 = ADD32(ctx->r5, -0X7AE8);
    // 0x8003B7B0: jal         0x80035490
    // 0x8003B7B4: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8003B7B4: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    after_1:
    // 0x8003B7B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B7BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B7C0: jr          $ra
    // 0x8003B7C4: nop

    return;
    // 0x8003B7C4: nop

;}
RECOMP_FUNC void func_8003B7C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B7C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B7CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B7D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B7D4: jal         0x80035A90
    // 0x8003B7D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035A90(rdram, ctx);
        goto after_0;
    // 0x8003B7D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003B7DC: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x8003B7E0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B7E4: addiu       $a1, $a1, -0x7AC4
    ctx->r5 = ADD32(ctx->r5, -0X7AC4);
    // 0x8003B7E8: jal         0x80035490
    // 0x8003B7EC: addiu       $a0, $a0, 0x34F0
    ctx->r4 = ADD32(ctx->r4, 0X34F0);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8003B7EC: addiu       $a0, $a0, 0x34F0
    ctx->r4 = ADD32(ctx->r4, 0X34F0);
    after_1:
    // 0x8003B7F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B7F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B7F8: jr          $ra
    // 0x8003B7FC: nop

    return;
    // 0x8003B7FC: nop

;}
RECOMP_FUNC void func_8003B800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B804: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B808: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B80C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B810: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B814: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8003B818: addiu       $a0, $a0, 0x5230
    ctx->r4 = ADD32(ctx->r4, 0X5230);
    // 0x8003B81C: jal         0x80035490
    // 0x8003B820: addiu       $a1, $a1, -0x7AC4
    ctx->r5 = ADD32(ctx->r5, -0X7AC4);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B820: addiu       $a1, $a1, -0x7AC4
    ctx->r5 = ADD32(ctx->r5, -0X7AC4);
    after_0:
    // 0x8003B824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B828: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B82C: jr          $ra
    // 0x8003B830: nop

    return;
    // 0x8003B830: nop

;}
RECOMP_FUNC void func_8003B834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B834: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B838: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B83C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B840: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B844: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B848: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8003B84C: addiu       $a0, $a0, 0x4800
    ctx->r4 = ADD32(ctx->r4, 0X4800);
    // 0x8003B850: jal         0x80035490
    // 0x8003B854: addiu       $a1, $a1, -0x7AC4
    ctx->r5 = ADD32(ctx->r5, -0X7AC4);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B854: addiu       $a1, $a1, -0x7AC4
    ctx->r5 = ADD32(ctx->r5, -0X7AC4);
    after_0:
    // 0x8003B858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B85C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B860: jr          $ra
    // 0x8003B864: nop

    return;
    // 0x8003B864: nop

;}
RECOMP_FUNC void func_8003B868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B868: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B86C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B870: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B878: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B87C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8003B880: addiu       $a0, $a0, -0x5F10
    ctx->r4 = ADD32(ctx->r4, -0X5F10);
    // 0x8003B884: jal         0x80035490
    // 0x8003B888: addiu       $a1, $a1, -0x7AC4
    ctx->r5 = ADD32(ctx->r5, -0X7AC4);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B888: addiu       $a1, $a1, -0x7AC4
    ctx->r5 = ADD32(ctx->r5, -0X7AC4);
    after_0:
    // 0x8003B88C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B890: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B894: jr          $ra
    // 0x8003B898: nop

    return;
    // 0x8003B898: nop

;}
RECOMP_FUNC void func_8003B89C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B89C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B8A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B8A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B8A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B8AC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B8B0: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003B8B4: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x8003B8B8: jal         0x80035490
    // 0x8003B8BC: addiu       $a1, $a1, -0x7AC4
    ctx->r5 = ADD32(ctx->r5, -0X7AC4);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B8BC: addiu       $a1, $a1, -0x7AC4
    ctx->r5 = ADD32(ctx->r5, -0X7AC4);
    after_0:
    // 0x8003B8C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B8C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B8C8: jr          $ra
    // 0x8003B8CC: nop

    return;
    // 0x8003B8CC: nop

;}
RECOMP_FUNC void func_8003B8D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B8D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B8D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B8D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B8DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B8E0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B8E4: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003B8E8: addiu       $a0, $a0, 0x3B80
    ctx->r4 = ADD32(ctx->r4, 0X3B80);
    // 0x8003B8EC: jal         0x80035490
    // 0x8003B8F0: addiu       $a1, $a1, -0x7AC4
    ctx->r5 = ADD32(ctx->r5, -0X7AC4);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B8F0: addiu       $a1, $a1, -0x7AC4
    ctx->r5 = ADD32(ctx->r5, -0X7AC4);
    after_0:
    // 0x8003B8F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B8F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B8FC: jr          $ra
    // 0x8003B900: nop

    return;
    // 0x8003B900: nop

;}
RECOMP_FUNC void func_8003B904(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B904: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B908: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B90C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B910: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B914: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B918: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003B91C: addiu       $a0, $a0, 0x4964
    ctx->r4 = ADD32(ctx->r4, 0X4964);
    // 0x8003B920: jal         0x80035490
    // 0x8003B924: addiu       $a1, $a1, -0x7AC4
    ctx->r5 = ADD32(ctx->r5, -0X7AC4);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B924: addiu       $a1, $a1, -0x7AC4
    ctx->r5 = ADD32(ctx->r5, -0X7AC4);
    after_0:
    // 0x8003B928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B92C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B930: jr          $ra
    // 0x8003B934: nop

    return;
    // 0x8003B934: nop

;}
RECOMP_FUNC void func_8003B938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B938: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B93C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B940: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B944: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B948: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B94C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8003B950: addiu       $a0, $a0, -0x64D0
    ctx->r4 = ADD32(ctx->r4, -0X64D0);
    // 0x8003B954: jal         0x80035490
    // 0x8003B958: addiu       $a1, $a1, -0x7ABC
    ctx->r5 = ADD32(ctx->r5, -0X7ABC);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B958: addiu       $a1, $a1, -0x7ABC
    ctx->r5 = ADD32(ctx->r5, -0X7ABC);
    after_0:
    // 0x8003B95C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B960: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B964: jr          $ra
    // 0x8003B968: nop

    return;
    // 0x8003B968: nop

;}
RECOMP_FUNC void func_8003B96C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B96C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B970: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B974: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B978: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8003B97C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8003B980: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B984: sh          $t6, 0x6DFE($at)
    MEM_H(0X6DFE, ctx->r1) = ctx->r14;
    // 0x8003B988: jal         0x8001BA88
    // 0x8003B98C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001BA88(rdram, ctx);
        goto after_0;
    // 0x8003B98C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8003B990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B994: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B998: jr          $ra
    // 0x8003B99C: nop

    return;
    // 0x8003B99C: nop

;}
RECOMP_FUNC void func_8003B9A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B9A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B9A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B9A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B9AC: jal         0x8001BA08
    // 0x8003B9B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8001BA08(rdram, ctx);
        goto after_0;
    // 0x8003B9B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003B9B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B9B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B9BC: jr          $ra
    // 0x8003B9C0: nop

    return;
    // 0x8003B9C0: nop

;}
RECOMP_FUNC void func_8003B9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B9C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B9C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B9CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B9D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B9D4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B9D8: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003B9DC: addiu       $a0, $a0, 0x31C8
    ctx->r4 = ADD32(ctx->r4, 0X31C8);
    // 0x8003B9E0: jal         0x80035490
    // 0x8003B9E4: addiu       $a1, $a1, -0x7D40
    ctx->r5 = ADD32(ctx->r5, -0X7D40);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B9E4: addiu       $a1, $a1, -0x7D40
    ctx->r5 = ADD32(ctx->r5, -0X7D40);
    after_0:
    // 0x8003B9E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B9EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B9F0: jr          $ra
    // 0x8003B9F4: nop

    return;
    // 0x8003B9F4: nop

;}
RECOMP_FUNC void func_8003B9F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B9F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B9FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003BA00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003BA04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BA08: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003BA0C: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8003BA10: addiu       $a0, $a0, 0x2CE0
    ctx->r4 = ADD32(ctx->r4, 0X2CE0);
    // 0x8003BA14: jal         0x80035490
    // 0x8003BA18: addiu       $a1, $a1, -0x7AB4
    ctx->r5 = ADD32(ctx->r5, -0X7AB4);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003BA18: addiu       $a1, $a1, -0x7AB4
    ctx->r5 = ADD32(ctx->r5, -0X7AB4);
    after_0:
    // 0x8003BA1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BA20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003BA24: jr          $ra
    // 0x8003BA28: nop

    return;
    // 0x8003BA28: nop

;}
RECOMP_FUNC void func_8003BA2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BA2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BA30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003BA34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003BA38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BA3C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003BA40: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003BA44: addiu       $a0, $a0, -0x6120
    ctx->r4 = ADD32(ctx->r4, -0X6120);
    // 0x8003BA48: jal         0x80035490
    // 0x8003BA4C: addiu       $a1, $a1, -0x7AAC
    ctx->r5 = ADD32(ctx->r5, -0X7AAC);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003BA4C: addiu       $a1, $a1, -0x7AAC
    ctx->r5 = ADD32(ctx->r5, -0X7AAC);
    after_0:
    // 0x8003BA50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BA54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003BA58: jr          $ra
    // 0x8003BA5C: nop

    return;
    // 0x8003BA5C: nop

;}
RECOMP_FUNC void func_8003BA60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BA60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BA64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003BA68: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003BA6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BA70: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003BA74: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003BA78: addiu       $a0, $a0, -0x60E4
    ctx->r4 = ADD32(ctx->r4, -0X60E4);
    // 0x8003BA7C: jal         0x80035490
    // 0x8003BA80: addiu       $a1, $a1, -0x7AA4
    ctx->r5 = ADD32(ctx->r5, -0X7AA4);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003BA80: addiu       $a1, $a1, -0x7AA4
    ctx->r5 = ADD32(ctx->r5, -0X7AA4);
    after_0:
    // 0x8003BA84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BA88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003BA8C: jr          $ra
    // 0x8003BA90: nop

    return;
    // 0x8003BA90: nop

;}
RECOMP_FUNC void func_8003BA94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BA94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BA98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003BA9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003BAA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BAA4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003BAA8: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8003BAAC: addiu       $a0, $a0, 0x2CE0
    ctx->r4 = ADD32(ctx->r4, 0X2CE0);
    // 0x8003BAB0: jal         0x80035490
    // 0x8003BAB4: addiu       $a1, $a1, -0x7A9C
    ctx->r5 = ADD32(ctx->r5, -0X7A9C);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003BAB4: addiu       $a1, $a1, -0x7A9C
    ctx->r5 = ADD32(ctx->r5, -0X7A9C);
    after_0:
    // 0x8003BAB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003BAC0: jr          $ra
    // 0x8003BAC4: nop

    return;
    // 0x8003BAC4: nop

;}
RECOMP_FUNC void func_8003BAC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BAC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BACC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003BAD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003BAD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BAD8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003BADC: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003BAE0: addiu       $a0, $a0, 0x2AF0
    ctx->r4 = ADD32(ctx->r4, 0X2AF0);
    // 0x8003BAE4: jal         0x80035490
    // 0x8003BAE8: addiu       $a1, $a1, -0x7A94
    ctx->r5 = ADD32(ctx->r5, -0X7A94);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003BAE8: addiu       $a1, $a1, -0x7A94
    ctx->r5 = ADD32(ctx->r5, -0X7A94);
    after_0:
    // 0x8003BAEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BAF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003BAF4: jr          $ra
    // 0x8003BAF8: nop

    return;
    // 0x8003BAF8: nop

;}
RECOMP_FUNC void func_8003BAFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BAFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BB00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003BB04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003BB08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BB0C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003BB10: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003BB14: addiu       $a0, $a0, 0x2B24
    ctx->r4 = ADD32(ctx->r4, 0X2B24);
    // 0x8003BB18: jal         0x80035490
    // 0x8003BB1C: addiu       $a1, $a1, -0x7A94
    ctx->r5 = ADD32(ctx->r5, -0X7A94);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003BB1C: addiu       $a1, $a1, -0x7A94
    ctx->r5 = ADD32(ctx->r5, -0X7A94);
    after_0:
    // 0x8003BB20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BB24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003BB28: jr          $ra
    // 0x8003BB2C: nop

    return;
    // 0x8003BB2C: nop

;}
RECOMP_FUNC void func_8003BB30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BB30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BB34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BB38: jal         0x8003BAFC
    // 0x8003BB3C: nop

    func_8003BAFC(rdram, ctx);
        goto after_0;
    // 0x8003BB3C: nop

    after_0:
    // 0x8003BB40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BB44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003BB48: jr          $ra
    // 0x8003BB4C: nop

    return;
    // 0x8003BB4C: nop

;}
RECOMP_FUNC void func_8003BB50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BB50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BB54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003BB58: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003BB5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BB60: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003BB64: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003BB68: addiu       $a0, $a0, -0x2740
    ctx->r4 = ADD32(ctx->r4, -0X2740);
    // 0x8003BB6C: jal         0x80035490
    // 0x8003BB70: addiu       $a1, $a1, -0x7A84
    ctx->r5 = ADD32(ctx->r5, -0X7A84);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003BB70: addiu       $a1, $a1, -0x7A84
    ctx->r5 = ADD32(ctx->r5, -0X7A84);
    after_0:
    // 0x8003BB74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BB78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003BB7C: jr          $ra
    // 0x8003BB80: nop

    return;
    // 0x8003BB80: nop

    // 0x8003BB84: nop

    // 0x8003BB88: nop

    // 0x8003BB8C: nop

;}
RECOMP_FUNC void func_8003BB90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BB90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BB94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BB98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003BB9C: lw          $t6, 0x38($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X38);
    // 0x8003BBA0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8003BBA4: lhu         $v0, 0x1E($t6)
    ctx->r2 = MEM_HU(ctx->r14, 0X1E);
    // 0x8003BBA8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8003BBAC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003BBB0: lbu         $v1, -0x6AC($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X6AC);
    // 0x8003BBB4: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x8003BBB8: sll         $a1, $v1, 16
    ctx->r5 = S32(ctx->r3 << 16);
    // 0x8003BBBC: sra         $t7, $a1, 16
    ctx->r15 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8003BBC0: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8003BBC4: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8003BBC8: jal         0x80039E94
    // 0x8003BBCC: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_80039E94(rdram, ctx);
        goto after_0;
    // 0x8003BBCC: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_0:
    // 0x8003BBD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BBD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003BBD8: jr          $ra
    // 0x8003BBDC: nop

    return;
    // 0x8003BBDC: nop

;}
RECOMP_FUNC void func_8003BBE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BBE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BBE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BBE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003BBEC: lw          $v1, 0x38($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X38);
    // 0x8003BBF0: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8003BBF4: lhu         $t6, 0x1E($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X1E);
    // 0x8003BBF8: addiu       $a2, $a2, -0x750
    ctx->r6 = ADD32(ctx->r6, -0X750);
    // 0x8003BBFC: addu        $t7, $a2, $t6
    ctx->r15 = ADD32(ctx->r6, ctx->r14);
    // 0x8003BC00: lbu         $v0, 0xA4($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0XA4);
    // 0x8003BC04: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8003BC08: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x8003BC0C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8003BC10: lhu         $t9, -0x6B68($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X6B68);
    // 0x8003BC14: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8003BC18: sh          $t9, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r25;
    // 0x8003BC1C: lbu         $t0, -0x32A4($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X32A4);
    // 0x8003BC20: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8003BC24: bne         $t0, $at, L_8003BC90
    if (ctx->r8 != ctx->r1) {
        // 0x8003BC28: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8003BC90;
    }
    // 0x8003BC28: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8003BC2C: lh          $t1, 0x9A($a2)
    ctx->r9 = MEM_H(ctx->r6, 0X9A);
    // 0x8003BC30: lh          $t4, 0xA0($a2)
    ctx->r12 = MEM_H(ctx->r6, 0XA0);
    // 0x8003BC34: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x8003BC38: bgez        $t2, L_8003BC48
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8003BC3C: sra         $t3, $t2, 1
        ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
            goto L_8003BC48;
    }
    // 0x8003BC3C: sra         $t3, $t2, 1
    ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
    // 0x8003BC40: addiu       $at, $t2, 0x1
    ctx->r1 = ADD32(ctx->r10, 0X1);
    // 0x8003BC44: sra         $t3, $at, 1
    ctx->r11 = S32(SIGNED(ctx->r1) >> 1);
L_8003BC48:
    // 0x8003BC48: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x8003BC4C: sll         $t5, $v0, 16
    ctx->r13 = S32(ctx->r2 << 16);
    // 0x8003BC50: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8003BC54: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8003BC58: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8003BC5C: lbu         $t8, 0x5688($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X5688);
    // 0x8003BC60: lhu         $t7, 0x1E($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X1E);
    // 0x8003BC64: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    // 0x8003BC68: bne         $t7, $t8, L_8003BC88
    if (ctx->r15 != ctx->r24) {
        // 0x8003BC6C: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_8003BC88;
    }
    // 0x8003BC6C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8003BC70: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8003BC74: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x8003BC78: jal         0x8002B608
    // 0x8003BC7C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8002B608(rdram, ctx);
        goto after_0;
    // 0x8003BC7C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x8003BC80: b           L_8003BC94
    // 0x8003BC84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003BC94;
    // 0x8003BC84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003BC88:
    // 0x8003BC88: jal         0x8002B608
    // 0x8003BC8C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8002B608(rdram, ctx);
        goto after_1;
    // 0x8003BC8C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
L_8003BC90:
    // 0x8003BC90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003BC94:
    // 0x8003BC94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003BC98: jr          $ra
    // 0x8003BC9C: nop

    return;
    // 0x8003BC9C: nop

;}
RECOMP_FUNC void func_8003BCA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BCA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BCA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BCA8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003BCAC: jal         0x8004974C
    // 0x8003BCB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8004974C(rdram, ctx);
        goto after_0;
    // 0x8003BCB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8003BCB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003BCB8: lui         $t6, 0x803E
    ctx->r14 = S32(0X803E << 16);
    // 0x8003BCBC: addiu       $t6, $t6, -0x3734
    ctx->r14 = ADD32(ctx->r14, -0X3734);
    // 0x8003BCC0: addiu       $t7, $v0, 0x66C
    ctx->r15 = ADD32(ctx->r2, 0X66C);
    // 0x8003BCC4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003BCC8: sw          $t6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r14;
    // 0x8003BCCC: bne         $v0, $at, L_8003BCF0
    if (ctx->r2 != ctx->r1) {
        // 0x8003BCD0: sh          $t7, 0x12($a0)
        MEM_H(0X12, ctx->r4) = ctx->r15;
            goto L_8003BCF0;
    }
    // 0x8003BCD0: sh          $t7, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r15;
    // 0x8003BCD4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8003BCD8: lb          $t8, 0x418($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X418);
    // 0x8003BCDC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8003BCE0: bne         $t8, $at, L_8003BCF4
    if (ctx->r24 != ctx->r1) {
        // 0x8003BCE4: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8003BCF4;
    }
    // 0x8003BCE4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8003BCE8: b           L_8003BCF4
    // 0x8003BCEC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_8003BCF4;
    // 0x8003BCEC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8003BCF0:
    // 0x8003BCF0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8003BCF4:
    // 0x8003BCF4: lhu         $t9, 0x12($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X12);
    // 0x8003BCF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003BCFC: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x8003BD00: sh          $t0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r8;
    // 0x8003BD04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BD08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003BD0C: jr          $ra
    // 0x8003BD10: nop

    return;
    // 0x8003BD10: nop

;}
RECOMP_FUNC void func_8003BD14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BD14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003BD18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003BD1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003BD20: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003BD24: lw          $t6, 0x38($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X38);
    // 0x8003BD28: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x8003BD2C: lh          $t8, -0x6B0($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X6B0);
    // 0x8003BD30: lhu         $t7, 0x1E($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X1E);
    // 0x8003BD34: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8003BD38: bne         $t7, $t8, L_8003BD64
    if (ctx->r15 != ctx->r24) {
        // 0x8003BD3C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8003BD64;
    }
    // 0x8003BD3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003BD40: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8003BD44: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8003BD48: jal         0x8002B9DC
    // 0x8003BD4C: addiu       $a1, $a1, 0x5640
    ctx->r5 = ADD32(ctx->r5, 0X5640);
    func_8002B9DC(rdram, ctx);
        goto after_0;
    // 0x8003BD4C: addiu       $a1, $a1, 0x5640
    ctx->r5 = ADD32(ctx->r5, 0X5640);
    after_0:
    // 0x8003BD50: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8003BD54: jal         0x800296E0
    // 0x8003BD58: addiu       $a0, $a0, -0x41F8
    ctx->r4 = ADD32(ctx->r4, -0X41F8);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x8003BD58: addiu       $a0, $a0, -0x41F8
    ctx->r4 = ADD32(ctx->r4, -0X41F8);
    after_1:
    // 0x8003BD5C: b           L_8003BD80
    // 0x8003BD60: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
        goto L_8003BD80;
    // 0x8003BD60: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
L_8003BD64:
    // 0x8003BD64: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8003BD68: jal         0x8002B9DC
    // 0x8003BD6C: addiu       $a1, $a1, 0x5654
    ctx->r5 = ADD32(ctx->r5, 0X5654);
    func_8002B9DC(rdram, ctx);
        goto after_2;
    // 0x8003BD6C: addiu       $a1, $a1, 0x5654
    ctx->r5 = ADD32(ctx->r5, 0X5654);
    after_2:
    // 0x8003BD70: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8003BD74: jal         0x800296E0
    // 0x8003BD78: addiu       $a0, $a0, -0x4268
    ctx->r4 = ADD32(ctx->r4, -0X4268);
    func_800296E0(rdram, ctx);
        goto after_3;
    // 0x8003BD78: addiu       $a0, $a0, -0x4268
    ctx->r4 = ADD32(ctx->r4, -0X4268);
    after_3:
    // 0x8003BD7C: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
L_8003BD80:
    // 0x8003BD80: jal         0x8002AF30
    // 0x8003BD84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002AF30(rdram, ctx);
        goto after_4;
    // 0x8003BD84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8003BD88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003BD8C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003BD90: jr          $ra
    // 0x8003BD94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8003BD94: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003BD98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BD98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BD9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BDA0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003BDA4: lw          $a3, 0x38($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X38);
    // 0x8003BDA8: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x8003BDAC: lh          $t7, -0x6B0($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X6B0);
    // 0x8003BDB0: lhu         $t6, 0x1E($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X1E);
    // 0x8003BDB4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8003BDB8: bne         $t6, $t7, L_8003BDEC
    if (ctx->r14 != ctx->r15) {
        // 0x8003BDBC: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8003BDEC;
    }
    // 0x8003BDBC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8003BDC0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8003BDC4: addiu       $a1, $a1, 0x5640
    ctx->r5 = ADD32(ctx->r5, 0X5640);
    // 0x8003BDC8: jal         0x8002B9DC
    // 0x8003BDCC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_8002B9DC(rdram, ctx);
        goto after_0;
    // 0x8003BDCC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x8003BDD0: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8003BDD4: jal         0x800296E0
    // 0x8003BDD8: addiu       $a0, $a0, -0x41F8
    ctx->r4 = ADD32(ctx->r4, -0X41F8);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x8003BDD8: addiu       $a0, $a0, -0x41F8
    ctx->r4 = ADD32(ctx->r4, -0X41F8);
    after_1:
    // 0x8003BDDC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8003BDE0: nop

    // 0x8003BDE4: lw          $a3, 0x38($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X38);
    // 0x8003BDE8: nop

L_8003BDEC:
    // 0x8003BDEC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8003BDF0: jal         0x8002AF30
    // 0x8003BDF4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_8002AF30(rdram, ctx);
        goto after_2;
    // 0x8003BDF4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_2:
    // 0x8003BDF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BDFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003BE00: jr          $ra
    // 0x8003BE04: nop

    return;
    // 0x8003BE04: nop

;}
RECOMP_FUNC void func_8003BE08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BE08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003BE0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003BE10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003BE14: lw          $a3, 0x38($a1)
    ctx->r7 = MEM_W(ctx->r5, 0X38);
    // 0x8003BE18: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x8003BE1C: lh          $t7, -0x6B0($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X6B0);
    // 0x8003BE20: lhu         $t6, 0x1E($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X1E);
    // 0x8003BE24: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8003BE28: beq         $t6, $t7, L_8003BE5C
    if (ctx->r14 == ctx->r15) {
        // 0x8003BE2C: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8003BE5C;
    }
    // 0x8003BE2C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8003BE30: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8003BE34: addiu       $a1, $a1, 0x5654
    ctx->r5 = ADD32(ctx->r5, 0X5654);
    // 0x8003BE38: jal         0x8002B9DC
    // 0x8003BE3C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_8002B9DC(rdram, ctx);
        goto after_0;
    // 0x8003BE3C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x8003BE40: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8003BE44: jal         0x800296E0
    // 0x8003BE48: addiu       $a0, $a0, -0x4268
    ctx->r4 = ADD32(ctx->r4, -0X4268);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x8003BE48: addiu       $a0, $a0, -0x4268
    ctx->r4 = ADD32(ctx->r4, -0X4268);
    after_1:
    // 0x8003BE4C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8003BE50: nop

    // 0x8003BE54: lw          $a3, 0x38($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X38);
    // 0x8003BE58: nop

L_8003BE5C:
    // 0x8003BE5C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8003BE60: jal         0x8002AF30
    // 0x8003BE64: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_8002AF30(rdram, ctx);
        goto after_2;
    // 0x8003BE64: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_2:
    // 0x8003BE68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003BE6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003BE70: jr          $ra
    // 0x8003BE74: nop

    return;
    // 0x8003BE74: nop

;}
RECOMP_FUNC void func_8003BE78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BE78: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8003BE7C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8003BE80: jr          $ra
    // 0x8003BE84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8003BE84: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8003BE88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BE88: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8003BE8C: jr          $ra
    // 0x8003BE90: sh          $zero, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = 0;
    return;
    // 0x8003BE90: sh          $zero, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8003BE94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BE94: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8003BE98: lh          $t6, 0x2C($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2C);
    // 0x8003BE9C: nop

    // 0x8003BEA0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8003BEA4: jr          $ra
    // 0x8003BEA8: sh          $t7, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r15;
    return;
    // 0x8003BEA8: sh          $t7, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_8003BEAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BEAC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8003BEB0: lh          $t6, 0x2C($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2C);
    // 0x8003BEB4: nop

    // 0x8003BEB8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8003BEBC: jr          $ra
    // 0x8003BEC0: sh          $t7, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r15;
    return;
    // 0x8003BEC0: sh          $t7, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_8003BEC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BEC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003BEC8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003BECC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8003BED0: jal         0x8004974C
    // 0x8003BED4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_8004974C(rdram, ctx);
        goto after_0;
    // 0x8003BED4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003BED8: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8003BEDC: beq         $at, $zero, L_8003BF40
    if (ctx->r1 == 0) {
        // 0x8003BEE0: lui         $t5, 0x801B
        ctx->r13 = S32(0X801B << 16);
            goto L_8003BF40;
    }
    // 0x8003BEE0: lui         $t5, 0x801B
    ctx->r13 = S32(0X801B << 16);
    // 0x8003BEE4: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8003BEE8: lh          $a0, -0x6B8($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X6B8);
    // 0x8003BEEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003BEF0: jal         0x8001D4C0
    // 0x8003BEF4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001D4C0(rdram, ctx);
        goto after_1;
    // 0x8003BEF4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x8003BEF8: lbu         $t6, 0x2F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2F);
    // 0x8003BEFC: sll         $t1, $v0, 4
    ctx->r9 = S32(ctx->r2 << 4);
    // 0x8003BF00: bne         $t6, $zero, L_8003BF28
    if (ctx->r14 != 0) {
        // 0x8003BF04: addu        $t1, $t1, $v0
        ctx->r9 = ADD32(ctx->r9, ctx->r2);
            goto L_8003BF28;
    }
    // 0x8003BF04: addu        $t1, $t1, $v0
    ctx->r9 = ADD32(ctx->r9, ctx->r2);
    // 0x8003BF08: sll         $t7, $v0, 4
    ctx->r15 = S32(ctx->r2 << 4);
    // 0x8003BF0C: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x8003BF10: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8003BF14: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x8003BF18: addiu       $t0, $t0, 0x6160
    ctx->r8 = ADD32(ctx->r8, 0X6160);
    // 0x8003BF1C: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8003BF20: b           L_8003BF58
    // 0x8003BF24: addu        $a3, $t9, $t0
    ctx->r7 = ADD32(ctx->r25, ctx->r8);
        goto L_8003BF58;
    // 0x8003BF24: addu        $a3, $t9, $t0
    ctx->r7 = ADD32(ctx->r25, ctx->r8);
L_8003BF28:
    // 0x8003BF28: sll         $t2, $t1, 16
    ctx->r10 = S32(ctx->r9 << 16);
    // 0x8003BF2C: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x8003BF30: addiu       $t4, $t4, 0x61A4
    ctx->r12 = ADD32(ctx->r12, 0X61A4);
    // 0x8003BF34: sra         $t3, $t2, 16
    ctx->r11 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8003BF38: b           L_8003BF58
    // 0x8003BF3C: addu        $a3, $t3, $t4
    ctx->r7 = ADD32(ctx->r11, ctx->r12);
        goto L_8003BF58;
    // 0x8003BF3C: addu        $a3, $t3, $t4
    ctx->r7 = ADD32(ctx->r11, ctx->r12);
L_8003BF40:
    // 0x8003BF40: lh          $t5, -0x6B8($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X6B8);
    // 0x8003BF44: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8003BF48: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x8003BF4C: addiu       $t7, $t7, 0x627C
    ctx->r15 = ADD32(ctx->r15, 0X627C);
    // 0x8003BF50: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8003BF54: addu        $a3, $t6, $t7
    ctx->r7 = ADD32(ctx->r14, ctx->r15);
L_8003BF58:
    // 0x8003BF58: lbu         $t8, 0x2B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2B);
    // 0x8003BF5C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8003BF60: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x8003BF64: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8003BF68: sll         $t9, $t8, 5
    ctx->r25 = S32(ctx->r24 << 5);
    // 0x8003BF6C: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x8003BF70: addiu       $t1, $t1, -0x3770
    ctx->r9 = ADD32(ctx->r9, -0X3770);
    // 0x8003BF74: addiu       $t2, $zero, 0x11
    ctx->r10 = ADD32(0, 0X11);
    // 0x8003BF78: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8003BF7C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8003BF80: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8003BF84: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8003BF88: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8003BF8C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8003BF90: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8003BF94: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x8003BF98: addiu       $a1, $zero, 0xB0
    ctx->r5 = ADD32(0, 0XB0);
    // 0x8003BF9C: jal         0x8002F528
    // 0x8003BFA0: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    func_8002F528(rdram, ctx);
        goto after_2;
    // 0x8003BFA0: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_2:
    // 0x8003BFA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003BFA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8003BFAC: jr          $ra
    // 0x8003BFB0: nop

    return;
    // 0x8003BFB0: nop

;}
RECOMP_FUNC void func_8003BFB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003BFB4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8003BFB8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8003BFBC: sll         $s0, $a1, 24
    ctx->r16 = S32(ctx->r5 << 24);
    // 0x8003BFC0: sra         $t6, $s0, 24
    ctx->r14 = S32(SIGNED(ctx->r16) >> 24);
    // 0x8003BFC4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8003BFC8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8003BFCC: bne         $t6, $zero, L_8003BFDC
    if (ctx->r14 != 0) {
        // 0x8003BFD0: sw          $a1, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r5;
            goto L_8003BFDC;
    }
    // 0x8003BFD0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8003BFD4: b           L_8003BFE0
    // 0x8003BFD8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_8003BFE0;
    // 0x8003BFD8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8003BFDC:
    // 0x8003BFDC: addiu       $s0, $zero, 0x18
    ctx->r16 = ADD32(0, 0X18);
L_8003BFE0:
    // 0x8003BFE0: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8003BFE4: lh          $a0, -0x6B8($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X6B8);
    // 0x8003BFE8: jal         0x8003EC2C
    // 0x8003BFEC: nop

    func_8003EC2C(rdram, ctx);
        goto after_0;
    // 0x8003BFEC: nop

    after_0:
    // 0x8003BFF0: lbu         $t7, 0x43($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X43);
    // 0x8003BFF4: lb          $t4, 0x0($v0)
    ctx->r12 = MEM_B(ctx->r2, 0X0);
    // 0x8003BFF8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8003BFFC: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x8003C000: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x8003C004: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8003C008: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x8003C00C: addiu       $t1, $t1, -0x3770
    ctx->r9 = ADD32(ctx->r9, -0X3770);
    // 0x8003C010: addiu       $a1, $s0, 0x88
    ctx->r5 = ADD32(ctx->r16, 0X88);
    // 0x8003C014: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x8003C018: addu        $a0, $t9, $t1
    ctx->r4 = ADD32(ctx->r25, ctx->r9);
    // 0x8003C01C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8003C020: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8003C024: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8003C028: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8003C02C: addiu       $t6, $t5, -0x3
    ctx->r14 = ADD32(ctx->r13, -0X3);
    // 0x8003C030: addiu       $t7, $t7, 0x7364
    ctx->r15 = ADD32(ctx->r15, 0X7364);
    // 0x8003C034: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8003C038: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8003C03C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8003C040: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8003C044: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8003C048: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8003C04C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8003C050: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8003C054: addu        $a3, $t6, $t7
    ctx->r7 = ADD32(ctx->r14, ctx->r15);
    // 0x8003C058: jal         0x8002F528
    // 0x8003C05C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    func_8002F528(rdram, ctx);
        goto after_1;
    // 0x8003C05C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_1:
    // 0x8003C060: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8003C064: lh          $a0, -0x6B8($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X6B8);
    // 0x8003C068: jal         0x8003EC2C
    // 0x8003C06C: nop

    func_8003EC2C(rdram, ctx);
        goto after_2;
    // 0x8003C06C: nop

    after_2:
    // 0x8003C070: lbu         $v1, 0x43($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X43);
    // 0x8003C074: lb          $a3, 0x1($v0)
    ctx->r7 = MEM_B(ctx->r2, 0X1);
    // 0x8003C078: lui         $t4, 0x800E
    ctx->r12 = S32(0X800E << 16);
    // 0x8003C07C: addiu       $t4, $t4, -0x3770
    ctx->r12 = ADD32(ctx->r12, -0X3770);
    // 0x8003C080: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8003C084: addiu       $a1, $s0, 0x9D
    ctx->r5 = ADD32(ctx->r16, 0X9D);
    // 0x8003C088: sll         $t3, $v1, 5
    ctx->r11 = S32(ctx->r3 << 5);
    // 0x8003C08C: addu        $t0, $t3, $t4
    ctx->r8 = ADD32(ctx->r11, ctx->r12);
    // 0x8003C090: sll         $t5, $a1, 16
    ctx->r13 = S32(ctx->r5 << 16);
    // 0x8003C094: ori         $at, $at, 0xFF08
    ctx->r1 = ctx->r1 | 0XFF08;
    // 0x8003C098: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8003C09C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8003C0A0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8003C0A4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8003C0A8: addu        $a0, $t0, $at
    ctx->r4 = ADD32(ctx->r8, ctx->r1);
    // 0x8003C0AC: sra         $a1, $t5, 16
    ctx->r5 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8003C0B0: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x8003C0B4: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x8003C0B8: jal         0x8002F6EC
    // 0x8003C0BC: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    func_8002F6EC(rdram, ctx);
        goto after_3;
    // 0x8003C0BC: sw          $v1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r3;
    after_3:
    // 0x8003C0C0: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8003C0C4: jal         0x8004974C
    // 0x8003C0C8: nop

    func_8004974C(rdram, ctx);
        goto after_4;
    // 0x8003C0C8: nop

    after_4:
    // 0x8003C0CC: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8003C0D0: beq         $at, $zero, L_8003C120
    if (ctx->r1 == 0) {
        // 0x8003C0D4: addiu       $v0, $s0, 0x2
        ctx->r2 = ADD32(ctx->r16, 0X2);
            goto L_8003C120;
    }
    // 0x8003C0D4: addiu       $v0, $s0, 0x2
    ctx->r2 = ADD32(ctx->r16, 0X2);
    // 0x8003C0D8: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x8003C0DC: lh          $a3, -0x6B8($a3)
    ctx->r7 = MEM_H(ctx->r7, -0X6B8);
    // 0x8003C0E0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8003C0E4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8003C0E8: ori         $at, $at, 0xFF28
    ctx->r1 = ctx->r1 | 0XFF28;
    // 0x8003C0EC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8003C0F0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8003C0F4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8003C0F8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8003C0FC: addiu       $a1, $zero, 0xE1
    ctx->r5 = ADD32(0, 0XE1);
    // 0x8003C100: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    // 0x8003C104: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8003C108: jal         0x8002F6EC
    // 0x8003C10C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_8002F6EC(rdram, ctx);
        goto after_5;
    // 0x8003C10C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_5:
    // 0x8003C110: addiu       $v0, $s0, 0x3
    ctx->r2 = ADD32(ctx->r16, 0X3);
    // 0x8003C114: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x8003C118: b           L_8003C128
    // 0x8003C11C: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
        goto L_8003C128;
    // 0x8003C11C: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
L_8003C120:
    // 0x8003C120: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x8003C124: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
L_8003C128:
    // 0x8003C128: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8003C12C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8003C130: jr          $ra
    // 0x8003C134: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8003C134: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8003C138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003C138: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003C13C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003C140: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8003C144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003C148: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8003C14C: addiu       $a0, $a0, -0x31D0
    ctx->r4 = ADD32(ctx->r4, -0X31D0);
    // 0x8003C150: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    // 0x8003C154: jal         0x8028084C
    // 0x8003C158: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x8028084C)(rdram, ctx);
        goto after_0;
    // 0x8003C158: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8003C15C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003C160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003C164: jr          $ra
    // 0x8003C168: nop

    return;
    // 0x8003C168: nop

;}
RECOMP_FUNC void func_8003C16C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003C16C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8003C170: lh          $t6, -0x6A6($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6A6);
    // 0x8003C174: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8003C178: bne         $t6, $zero, L_8003C188
    if (ctx->r14 != 0) {
        // 0x8003C17C: nop
    
            goto L_8003C188;
    }
    // 0x8003C17C: nop

    // 0x8003C180: jr          $ra
    // 0x8003C184: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8003C184: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003C188:
    // 0x8003C188: jr          $ra
    // 0x8003C18C: nop

    return;
    // 0x8003C18C: nop

;}
RECOMP_FUNC void func_8003C190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003C190: sll         $a3, $a0, 16
    ctx->r7 = S32(ctx->r4 << 16);
    // 0x8003C194: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8003C198: lui         $t9, 0x1
    ctx->r25 = S32(0X1 << 16);
    // 0x8003C19C: div         $zero, $t9, $t6
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r14)));
    // 0x8003C1A0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003C1A4: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x8003C1A8: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8003C1AC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8003C1B0: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8003C1B4: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x8003C1B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003C1BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003C1C0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8003C1C4: bne         $a3, $zero, L_8003C1D0
    if (ctx->r7 != 0) {
        // 0x8003C1C8: nop
    
            goto L_8003C1D0;
    }
    // 0x8003C1C8: nop

    // 0x8003C1CC: break       7
    do_break(2147729868);
L_8003C1D0:
    // 0x8003C1D0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003C1D4: bne         $a3, $at, L_8003C1E8
    if (ctx->r7 != ctx->r1) {
        // 0x8003C1D8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003C1E8;
    }
    // 0x8003C1D8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003C1DC: bne         $t9, $at, L_8003C1E8
    if (ctx->r25 != ctx->r1) {
        // 0x8003C1E0: nop
    
            goto L_8003C1E8;
    }
    // 0x8003C1E0: nop

    // 0x8003C1E4: break       6
    do_break(2147729892);
L_8003C1E8:
    // 0x8003C1E8: mflo        $t0
    ctx->r8 = lo;
    // 0x8003C1EC: nop

    // 0x8003C1F0: nop

    // 0x8003C1F4: multu       $a2, $t0
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003C1F8: mflo        $a0
    ctx->r4 = lo;
    // 0x8003C1FC: andi        $t1, $a0, 0xFFFF
    ctx->r9 = ctx->r4 & 0XFFFF;
    // 0x8003C200: jal         0x8007F9A0
    // 0x8003C204: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_8007F9A0(rdram, ctx);
        goto after_0;
    // 0x8003C204: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_0:
    // 0x8003C208: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x8003C20C: jal         0x8001CA74
    // 0x8003C210: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8001CA74(rdram, ctx);
        goto after_1;
    // 0x8003C210: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_1:
    // 0x8003C214: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x8003C218: ori         $t4, $zero, 0x8000
    ctx->r12 = 0 | 0X8000;
    // 0x8003C21C: div         $zero, $t4, $t3
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r11)));
    // 0x8003C220: lh          $t2, 0x1C($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1C);
    // 0x8003C224: bne         $t3, $zero, L_8003C230
    if (ctx->r11 != 0) {
        // 0x8003C228: nop
    
            goto L_8003C230;
    }
    // 0x8003C228: nop

    // 0x8003C22C: break       7
    do_break(2147729964);
L_8003C230:
    // 0x8003C230: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003C234: bne         $t3, $at, L_8003C248
    if (ctx->r11 != ctx->r1) {
        // 0x8003C238: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003C248;
    }
    // 0x8003C238: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003C23C: bne         $t4, $at, L_8003C248
    if (ctx->r12 != ctx->r1) {
        // 0x8003C240: nop
    
            goto L_8003C248;
    }
    // 0x8003C240: nop

    // 0x8003C244: break       6
    do_break(2147729988);
L_8003C248:
    // 0x8003C248: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003C24C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003C250: mflo        $t5
    ctx->r13 = lo;
    // 0x8003C254: nop

    // 0x8003C258: nop

    // 0x8003C25C: div         $zero, $t2, $t5
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r13))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r13)));
    // 0x8003C260: bne         $t5, $zero, L_8003C26C
    if (ctx->r13 != 0) {
        // 0x8003C264: nop
    
            goto L_8003C26C;
    }
    // 0x8003C264: nop

    // 0x8003C268: break       7
    do_break(2147730024);
L_8003C26C:
    // 0x8003C26C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003C270: bne         $t5, $at, L_8003C284
    if (ctx->r13 != ctx->r1) {
        // 0x8003C274: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003C284;
    }
    // 0x8003C274: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003C278: bne         $t2, $at, L_8003C284
    if (ctx->r10 != ctx->r1) {
        // 0x8003C27C: nop
    
            goto L_8003C284;
    }
    // 0x8003C27C: nop

    // 0x8003C280: break       6
    do_break(2147730048);
L_8003C284:
    // 0x8003C284: mflo        $t6
    ctx->r14 = lo;
    // 0x8003C288: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8003C28C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8003C290: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x8003C294: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8003C298: jr          $ra
    // 0x8003C29C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x8003C29C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void func_8003C2A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003C2A0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8003C2A4: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8003C2A8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8003C2AC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003C2B0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003C2B4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003C2B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003C2BC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003C2C0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003C2C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003C2C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003C2CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003C2D0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8003C2D4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003C2D8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003C2DC: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8003C2E0: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8003C2E4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8003C2E8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8003C2EC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8003C2F0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8003C2F4: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8003C2F8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8003C2FC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8003C300: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003C304: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003C308: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003C30C: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
    // 0x8003C310: addiu       $s3, $zero, 0x3C
    ctx->r19 = ADD32(0, 0X3C);
    // 0x8003C314: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8003C318: addiu       $s6, $zero, 0x14C
    ctx->r22 = ADD32(0, 0X14C);
    // 0x8003C31C: addiu       $s7, $zero, 0x49
    ctx->r23 = ADD32(0, 0X49);
    // 0x8003C320: addiu       $fp, $zero, 0x35
    ctx->r30 = ADD32(0, 0X35);
L_8003C324:
    // 0x8003C324: multu       $s4, $s6
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003C328: lw          $v1, 0x44($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X44);
    // 0x8003C32C: addiu       $t0, $zero, 0x25
    ctx->r8 = ADD32(0, 0X25);
    // 0x8003C330: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x8003C334: mflo        $t9
    ctx->r25 = lo;
    // 0x8003C338: addu        $v0, $v1, $t9
    ctx->r2 = ADD32(ctx->r3, ctx->r25);
    // 0x8003C33C: addiu       $s2, $v0, 0x4AC
    ctx->r18 = ADD32(ctx->r2, 0X4AC);
    // 0x8003C340: or          $s5, $s2, $zero
    ctx->r21 = ctx->r18 | 0;
    // 0x8003C344: sh          $s7, 0x5E8($v0)
    MEM_H(0X5E8, ctx->r2) = ctx->r23;
    // 0x8003C348: sh          $fp, 0x5EC($v0)
    MEM_H(0X5EC, ctx->r2) = ctx->r30;
    // 0x8003C34C: jal         0x8001CA74
    // 0x8003C350: sh          $t0, 0x5F0($v0)
    MEM_H(0X5F0, ctx->r2) = ctx->r8;
    func_8001CA74(rdram, ctx);
        goto after_0;
    // 0x8003C350: sh          $t0, 0x5F0($v0)
    MEM_H(0X5F0, ctx->r2) = ctx->r8;
    after_0:
    // 0x8003C354: addiu       $t1, $v0, 0x96
    ctx->r9 = ADD32(ctx->r2, 0X96);
    // 0x8003C358: sh          $t1, 0x148($s2)
    MEM_H(0X148, ctx->r18) = ctx->r9;
    // 0x8003C35C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8003C360:
    // 0x8003C360: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x8003C364: addu        $s1, $s2, $t2
    ctx->r17 = ADD32(ctx->r18, ctx->r10);
    // 0x8003C368: lhu         $a0, 0x13C($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X13C);
    // 0x8003C36C: jal         0x8001CA74
    // 0x8003C370: nop

    func_8001CA74(rdram, ctx);
        goto after_1;
    // 0x8003C370: nop

    after_1:
    // 0x8003C374: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003C378: sll         $t3, $s0, 16
    ctx->r11 = S32(ctx->r16 << 16);
    // 0x8003C37C: sra         $s0, $t3, 16
    ctx->r16 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8003C380: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x8003C384: sb          $v0, 0x13E($s1)
    MEM_B(0X13E, ctx->r17) = ctx->r2;
    // 0x8003C388: bne         $at, $zero, L_8003C360
    if (ctx->r1 != 0) {
        // 0x8003C38C: sb          $s3, 0x13F($s1)
        MEM_B(0X13F, ctx->r17) = ctx->r19;
            goto L_8003C360;
    }
    // 0x8003C38C: sb          $s3, 0x13F($s1)
    MEM_B(0X13F, ctx->r17) = ctx->r19;
    // 0x8003C390: jal         0x8001CA74
    // 0x8003C394: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_8001CA74(rdram, ctx);
        goto after_2;
    // 0x8003C394: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_2:
    // 0x8003C398: lbu         $t5, 0x14B($s5)
    ctx->r13 = MEM_BU(ctx->r21, 0X14B);
    // 0x8003C39C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8003C3A0: sll         $t8, $s4, 16
    ctx->r24 = S32(ctx->r20 << 16);
    // 0x8003C3A4: sra         $s4, $t8, 16
    ctx->r20 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8003C3A8: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x8003C3AC: slti        $at, $s4, 0x24
    ctx->r1 = SIGNED(ctx->r20) < 0X24 ? 1 : 0;
    // 0x8003C3B0: addiu       $t7, $t6, 0x28
    ctx->r15 = ADD32(ctx->r14, 0X28);
    // 0x8003C3B4: bne         $at, $zero, L_8003C324
    if (ctx->r1 != 0) {
        // 0x8003C3B8: sb          $t7, 0x14B($s5)
        MEM_B(0X14B, ctx->r21) = ctx->r15;
            goto L_8003C324;
    }
    // 0x8003C3B8: sb          $t7, 0x14B($s5)
    MEM_B(0X14B, ctx->r21) = ctx->r15;
    // 0x8003C3BC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8003C3C0: lb          $t0, -0x32A1($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X32A1);
    // 0x8003C3C4: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8003C3C8: bne         $t0, $zero, L_8003C410
    if (ctx->r8 != 0) {
        // 0x8003C3CC: lui         $t1, 0x8012
        ctx->r9 = S32(0X8012 << 16);
            goto L_8003C410;
    }
    // 0x8003C3CC: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8003C3D0: lbu         $t1, -0x3078($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X3078);
    // 0x8003C3D4: nop

    // 0x8003C3D8: beq         $t1, $zero, L_8003C414
    if (ctx->r9 == 0) {
        // 0x8003C3DC: addiu       $t5, $zero, 0x10
        ctx->r13 = ADD32(0, 0X10);
            goto L_8003C414;
    }
    // 0x8003C3DC: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x8003C3E0: jal         0x8001C994
    // 0x8003C3E4: nop

    func_8001C994(rdram, ctx);
        goto after_3;
    // 0x8003C3E4: nop

    after_3:
    // 0x8003C3E8: bne         $v0, $zero, L_8003C404
    if (ctx->r2 != 0) {
        // 0x8003C3EC: addiu       $t3, $zero, 0x10
        ctx->r11 = ADD32(0, 0X10);
            goto L_8003C404;
    }
    // 0x8003C3EC: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x8003C3F0: jal         0x8001CA74
    // 0x8003C3F4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    func_8001CA74(rdram, ctx);
        goto after_4;
    // 0x8003C3F4: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_4:
    // 0x8003C3F8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8003C3FC: b           L_8003C418
    // 0x8003C400: sb          $v0, 0x9($t2)
    MEM_B(0X9, ctx->r10) = ctx->r2;
        goto L_8003C418;
    // 0x8003C400: sb          $v0, 0x9($t2)
    MEM_B(0X9, ctx->r10) = ctx->r2;
L_8003C404:
    // 0x8003C404: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8003C408: b           L_8003C418
    // 0x8003C40C: sb          $t3, 0x9($t4)
    MEM_B(0X9, ctx->r12) = ctx->r11;
        goto L_8003C418;
    // 0x8003C40C: sb          $t3, 0x9($t4)
    MEM_B(0X9, ctx->r12) = ctx->r11;
L_8003C410:
    // 0x8003C410: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
L_8003C414:
    // 0x8003C414: sb          $t5, 0x9($t6)
    MEM_B(0X9, ctx->r14) = ctx->r13;
L_8003C418:
    // 0x8003C418: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8003C41C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003C420: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003C424: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003C428: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8003C42C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8003C430: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8003C434: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8003C438: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8003C43C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8003C440: jr          $ra
    // 0x8003C444: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x8003C444: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8003C448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003C448: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8003C44C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8003C450: lui         $s6, 0x8012
    ctx->r22 = S32(0X8012 << 16);
    // 0x8003C454: addiu       $s6, $s6, -0x32B0
    ctx->r22 = ADD32(ctx->r22, -0X32B0);
    // 0x8003C458: lb          $t6, 0xF($s6)
    ctx->r14 = MEM_B(ctx->r22, 0XF);
    // 0x8003C45C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8003C460: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003C464: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003C468: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003C46C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003C470: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003C474: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003C478: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003C47C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003C480: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003C484: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003C488: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8003C48C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8003C490: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8003C494: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8003C498: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8003C49C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003C4A0: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8003C4A4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8003C4A8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003C4AC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003C4B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003C4B4: addu        $s5, $t7, $t8
    ctx->r21 = ADD32(ctx->r15, ctx->r24);
    // 0x8003C4B8: addiu       $s3, $zero, 0x3C
    ctx->r19 = ADD32(0, 0X3C);
    // 0x8003C4BC: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8003C4C0: addiu       $s7, $zero, 0x14C
    ctx->r23 = ADD32(0, 0X14C);
    // 0x8003C4C4: addiu       $fp, $zero, 0x12
    ctx->r30 = ADD32(0, 0X12);
L_8003C4C8:
    // 0x8003C4C8: jal         0x80039028
    // 0x8003C4CC: nop

    func_80039028(rdram, ctx);
        goto after_0;
    // 0x8003C4CC: nop

    after_0:
    // 0x8003C4D0: bne         $v0, $zero, L_8003C544
    if (ctx->r2 != 0) {
        // 0x8003C4D4: addu        $t9, $s5, $s4
        ctx->r25 = ADD32(ctx->r21, ctx->r20);
            goto L_8003C544;
    }
    // 0x8003C4D4: addu        $t9, $s5, $s4
    ctx->r25 = ADD32(ctx->r21, ctx->r20);
    // 0x8003C4D8: lb          $t0, 0x7($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X7);
    // 0x8003C4DC: sll         $t2, $s4, 3
    ctx->r10 = S32(ctx->r20 << 3);
    // 0x8003C4E0: multu       $t0, $s7
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003C4E4: addu        $t2, $t2, $s4
    ctx->r10 = ADD32(ctx->r10, ctx->r20);
    // 0x8003C4E8: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x8003C4EC: addu        $s2, $s6, $t2
    ctx->r18 = ADD32(ctx->r22, ctx->r10);
    // 0x8003C4F0: addiu       $s2, $s2, 0x110
    ctx->r18 = ADD32(ctx->r18, 0X110);
    // 0x8003C4F4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003C4F8: mflo        $t1
    ctx->r9 = lo;
    // 0x8003C4FC: addu        $a0, $s5, $t1
    ctx->r4 = ADD32(ctx->r21, ctx->r9);
    // 0x8003C500: addiu       $a0, $a0, 0x4AC
    ctx->r4 = ADD32(ctx->r4, 0X4AC);
L_8003C504:
    // 0x8003C504: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x8003C508: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x8003C50C: lbu         $t3, 0x13E($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X13E);
    // 0x8003C510: addu        $s1, $s2, $v1
    ctx->r17 = ADD32(ctx->r18, ctx->r3);
    // 0x8003C514: sb          $t3, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r11;
    // 0x8003C518: lbu         $t4, 0x13F($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X13F);
    // 0x8003C51C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003C520: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x8003C524: sb          $t4, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r12;
    // 0x8003C528: lh          $t5, 0x13C($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X13C);
    // 0x8003C52C: sra         $s0, $t6, 16
    ctx->r16 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8003C530: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x8003C534: bne         $at, $zero, L_8003C504
    if (ctx->r1 != 0) {
        // 0x8003C538: sh          $t5, 0x2($s1)
        MEM_H(0X2, ctx->r17) = ctx->r13;
            goto L_8003C504;
    }
    // 0x8003C538: sh          $t5, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r13;
    // 0x8003C53C: b           L_8003C5D0
    // 0x8003C540: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8003C5D0;
    // 0x8003C540: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8003C544:
    // 0x8003C544: multu       $s4, $fp
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003C548: addiu       $t9, $zero, 0x49
    ctx->r25 = ADD32(0, 0X49);
    // 0x8003C54C: addiu       $t0, $zero, 0x35
    ctx->r8 = ADD32(0, 0X35);
    // 0x8003C550: addiu       $t1, $zero, 0x25
    ctx->r9 = ADD32(0, 0X25);
    // 0x8003C554: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    // 0x8003C558: mflo        $t8
    ctx->r24 = lo;
    // 0x8003C55C: addu        $s2, $s6, $t8
    ctx->r18 = ADD32(ctx->r22, ctx->r24);
    // 0x8003C560: addiu       $s2, $s2, 0x110
    ctx->r18 = ADD32(ctx->r18, 0X110);
    // 0x8003C564: sh          $t9, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r25;
    // 0x8003C568: sh          $t0, 0x6($s2)
    MEM_H(0X6, ctx->r18) = ctx->r8;
    // 0x8003C56C: jal         0x8001CA74
    // 0x8003C570: sh          $t1, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r9;
    func_8001CA74(rdram, ctx);
        goto after_1;
    // 0x8003C570: sh          $t1, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r9;
    after_1:
    // 0x8003C574: addiu       $t2, $v0, 0x96
    ctx->r10 = ADD32(ctx->r2, 0X96);
    // 0x8003C578: sh          $t2, 0xE($s2)
    MEM_H(0XE, ctx->r18) = ctx->r10;
    // 0x8003C57C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8003C580:
    // 0x8003C580: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x8003C584: addu        $s1, $s2, $t3
    ctx->r17 = ADD32(ctx->r18, ctx->r11);
    // 0x8003C588: lhu         $a0, 0x2($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X2);
    // 0x8003C58C: jal         0x8001CA74
    // 0x8003C590: nop

    func_8001CA74(rdram, ctx);
        goto after_2;
    // 0x8003C590: nop

    after_2:
    // 0x8003C594: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003C598: sll         $t4, $s0, 16
    ctx->r12 = S32(ctx->r16 << 16);
    // 0x8003C59C: sra         $s0, $t4, 16
    ctx->r16 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8003C5A0: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x8003C5A4: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x8003C5A8: bne         $at, $zero, L_8003C580
    if (ctx->r1 != 0) {
        // 0x8003C5AC: sb          $s3, 0x5($s1)
        MEM_B(0X5, ctx->r17) = ctx->r19;
            goto L_8003C580;
    }
    // 0x8003C5AC: sb          $s3, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r19;
    // 0x8003C5B0: jal         0x8001CA74
    // 0x8003C5B4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    func_8001CA74(rdram, ctx);
        goto after_3;
    // 0x8003C5B4: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    after_3:
    // 0x8003C5B8: lbu         $t6, 0x11($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X11);
    // 0x8003C5BC: nop

    // 0x8003C5C0: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8003C5C4: addiu       $t8, $t7, 0x28
    ctx->r24 = ADD32(ctx->r15, 0X28);
    // 0x8003C5C8: sb          $t8, 0x11($s2)
    MEM_B(0X11, ctx->r18) = ctx->r24;
    // 0x8003C5CC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8003C5D0:
    // 0x8003C5D0: sll         $t9, $s4, 16
    ctx->r25 = S32(ctx->r20 << 16);
    // 0x8003C5D4: sra         $s4, $t9, 16
    ctx->r20 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8003C5D8: slti        $at, $s4, 0x2
    ctx->r1 = SIGNED(ctx->r20) < 0X2 ? 1 : 0;
    // 0x8003C5DC: bne         $at, $zero, L_8003C4C8
    if (ctx->r1 != 0) {
        // 0x8003C5E0: nop
    
            goto L_8003C4C8;
    }
    // 0x8003C5E0: nop

    // 0x8003C5E4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8003C5E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003C5EC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003C5F0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003C5F4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8003C5F8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8003C5FC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8003C600: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8003C604: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8003C608: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8003C60C: jr          $ra
    // 0x8003C610: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8003C610: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8003C614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003C614: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003C618: sll         $a3, $a0, 24
    ctx->r7 = S32(ctx->r4 << 24);
    // 0x8003C61C: sra         $t6, $a3, 24
    ctx->r14 = S32(SIGNED(ctx->r7) >> 24);
    // 0x8003C620: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003C624: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x8003C628: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8003C62C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003C630: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x8003C634: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8003C638: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8003C63C: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8003C640: addiu       $t1, $t1, -0x32B0
    ctx->r9 = ADD32(ctx->r9, -0X32B0);
    // 0x8003C644: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8003C648: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x8003C64C: lbu         $v1, 0x114($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X114);
    // 0x8003C650: lh          $t2, 0x22($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X22);
    // 0x8003C654: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003C658: addu        $a2, $v1, $t2
    ctx->r6 = ADD32(ctx->r3, ctx->r10);
    // 0x8003C65C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003C660: lbu         $a1, 0x115($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X115);
    // 0x8003C664: lh          $a0, 0x112($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X112);
    // 0x8003C668: sll         $t3, $a2, 16
    ctx->r11 = S32(ctx->r6 << 16);
    // 0x8003C66C: jal         0x8003C190
    // 0x8003C670: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    func_8003C190(rdram, ctx);
        goto after_0;
    // 0x8003C670: sra         $a2, $t3, 16
    ctx->r6 = S32(SIGNED(ctx->r11) >> 16);
    after_0:
    // 0x8003C674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003C678: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003C67C: jr          $ra
    // 0x8003C680: nop

    return;
    // 0x8003C680: nop

;}
RECOMP_FUNC void func_8003C684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003C684: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003C688: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8003C68C: sll         $s3, $a0, 24
    ctx->r19 = S32(ctx->r4 << 24);
    // 0x8003C690: sra         $t6, $s3, 24
    ctx->r14 = S32(SIGNED(ctx->r19) >> 24);
    // 0x8003C694: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8003C698: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x8003C69C: sll         $s5, $a1, 16
    ctx->r21 = S32(ctx->r5 << 16);
    // 0x8003C6A0: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8003C6A4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8003C6A8: sra         $t7, $s5, 16
    ctx->r15 = S32(SIGNED(ctx->r21) >> 16);
    // 0x8003C6AC: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8003C6B0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8003C6B4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003C6B8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003C6BC: addiu       $t9, $t9, -0x32B0
    ctx->r25 = ADD32(ctx->r25, -0X32B0);
    // 0x8003C6C0: sll         $t8, $t8, 1
    ctx->r24 = S32(ctx->r24 << 1);
    // 0x8003C6C4: or          $s5, $t7, $zero
    ctx->r21 = ctx->r15 | 0;
    // 0x8003C6C8: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x8003C6CC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8003C6D0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8003C6D4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8003C6D8: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8003C6DC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8003C6E0: addu        $s4, $t8, $t9
    ctx->r20 = ADD32(ctx->r24, ctx->r25);
    // 0x8003C6E4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8003C6E8:
    // 0x8003C6E8: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x8003C6EC: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x8003C6F0: sll         $a2, $s5, 16
    ctx->r6 = S32(ctx->r21 << 16);
    // 0x8003C6F4: sra         $t2, $a2, 16
    ctx->r10 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8003C6F8: sra         $t1, $a1, 16
    ctx->r9 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8003C6FC: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8003C700: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8003C704: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8003C708: jal         0x8003C614
    // 0x8003C70C: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    func_8003C614(rdram, ctx);
        goto after_0;
    // 0x8003C70C: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_0:
    // 0x8003C710: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x8003C714: addu        $t6, $s4, $t5
    ctx->r14 = ADD32(ctx->r20, ctx->r13);
    // 0x8003C718: lbu         $t7, 0x115($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X115);
    // 0x8003C71C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003C720: sll         $t0, $s0, 16
    ctx->r8 = S32(ctx->r16 << 16);
    // 0x8003C724: addu        $s2, $s2, $t7
    ctx->r18 = ADD32(ctx->r18, ctx->r15);
    // 0x8003C728: sra         $s0, $t0, 16
    ctx->r16 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8003C72C: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8003C730: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8003C734: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x8003C738: sll         $t3, $s1, 16
    ctx->r11 = S32(ctx->r17 << 16);
    // 0x8003C73C: sll         $t8, $s2, 16
    ctx->r24 = S32(ctx->r18 << 16);
    // 0x8003C740: sra         $s1, $t3, 16
    ctx->r17 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8003C744: bne         $at, $zero, L_8003C6E8
    if (ctx->r1 != 0) {
        // 0x8003C748: sra         $s2, $t8, 16
        ctx->r18 = S32(SIGNED(ctx->r24) >> 16);
            goto L_8003C6E8;
    }
    // 0x8003C748: sra         $s2, $t8, 16
    ctx->r18 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8003C74C: mtc1        $s2, $f4
    ctx->f4.u32l = ctx->r18;
    // 0x8003C750: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8003C754: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8003C758: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8003C75C: mtc1        $s1, $f16
    ctx->f16.u32l = ctx->r17;
    // 0x8003C760: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8003C764: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8003C768: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8003C76C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003C770: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8003C774: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003C778: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8003C77C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8003C780: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8003C784: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8003C788: div.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f18.fl, ctx->f10.fl);
    // 0x8003C78C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8003C790: nop

    // 0x8003C794: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8003C798: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8003C79C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8003C7A0: nop

    // 0x8003C7A4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8003C7A8: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x8003C7AC: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8003C7B0: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x8003C7B4: jr          $ra
    // 0x8003C7B8: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
    return;
    // 0x8003C7B8: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
;}
RECOMP_FUNC void func_8003C7BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003C7BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003C7C0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8003C7C4: lh          $a2, 0x32($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X32);
    // 0x8003C7C8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8003C7CC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8003C7D0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8003C7D4: addiu       $a2, $a2, 0x87
    ctx->r6 = ADD32(ctx->r6, 0X87);
    // 0x8003C7D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003C7DC: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x8003C7E0: lh          $a3, 0x36($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X36);
    // 0x8003C7E4: lb          $a1, 0x2F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X2F);
    // 0x8003C7E8: lb          $a0, 0x2B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X2B);
    // 0x8003C7EC: jal         0x80042320
    // 0x8003C7F0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    func_80042320(rdram, ctx);
        goto after_0;
    // 0x8003C7F0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_0:
    // 0x8003C7F4: lh          $t7, 0x32($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X32);
    // 0x8003C7F8: lh          $t9, 0x36($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X36);
    // 0x8003C7FC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8003C800: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x8003C804: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x8003C808: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    // 0x8003C80C: lbu         $a0, 0x5734($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X5734);
    // 0x8003C810: sll         $t0, $a2, 16
    ctx->r8 = S32(ctx->r6 << 16);
    // 0x8003C814: sra         $a2, $t0, 16
    ctx->r6 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8003C818: jal         0x8003C190
    // 0x8003C81C: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    func_8003C190(rdram, ctx);
        goto after_1;
    // 0x8003C81C: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_1:
    // 0x8003C820: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x8003C824: lb          $a0, 0x2B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X2B);
    // 0x8003C828: lh          $a1, 0x32($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X32);
    // 0x8003C82C: lh          $a2, 0x36($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X36);
    // 0x8003C830: jal         0x8003C614
    // 0x8003C834: sh          $t2, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r10;
    func_8003C614(rdram, ctx);
        goto after_2;
    // 0x8003C834: sh          $t2, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r10;
    after_2:
    // 0x8003C838: lb          $a0, 0x2B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X2B);
    // 0x8003C83C: lh          $a2, 0x36($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X36);
    // 0x8003C840: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x8003C844: jal         0x8003C614
    // 0x8003C848: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8003C614(rdram, ctx);
        goto after_3;
    // 0x8003C848: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x8003C84C: lb          $t3, 0x2B($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X2B);
    // 0x8003C850: lh          $t7, 0x32($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X32);
    // 0x8003C854: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x8003C858: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8003C85C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8003C860: sll         $t4, $t4, 1
    ctx->r12 = S32(ctx->r12 << 1);
    // 0x8003C864: addiu       $t5, $t5, -0x32B0
    ctx->r13 = ADD32(ctx->r13, -0X32B0);
    // 0x8003C868: addu        $v1, $t4, $t5
    ctx->r3 = ADD32(ctx->r12, ctx->r13);
    // 0x8003C86C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8003C870: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x8003C874: lbu         $t0, 0x115($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X115);
    // 0x8003C878: lbu         $t6, 0x121($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X121);
    // 0x8003C87C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8003C880: addu        $t1, $t6, $t0
    ctx->r9 = ADD32(ctx->r14, ctx->r8);
    // 0x8003C884: addiu       $t2, $t1, 0x190
    ctx->r10 = ADD32(ctx->r9, 0X190);
    // 0x8003C888: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8003C88C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8003C890: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8003C894: lh          $t4, 0x1A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X1A);
    // 0x8003C898: lh          $t3, 0x22($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X22);
    // 0x8003C89C: div.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x8003C8A0: addu        $t5, $v0, $t4
    ctx->r13 = ADD32(ctx->r2, ctx->r12);
    // 0x8003C8A4: sll         $t7, $t5, 16
    ctx->r15 = S32(ctx->r13 << 16);
    // 0x8003C8A8: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8003C8AC: addu        $t9, $t3, $t8
    ctx->r25 = ADD32(ctx->r11, ctx->r24);
    // 0x8003C8B0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8003C8B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003C8B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8003C8BC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8003C8C0: nop

    // 0x8003C8C4: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8003C8C8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8003C8CC: nop

    // 0x8003C8D0: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8003C8D4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8003C8D8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8003C8DC: nop

    // 0x8003C8E0: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8003C8E4: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x8003C8E8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8003C8EC: sll         $t0, $v0, 16
    ctx->r8 = S32(ctx->r2 << 16);
    // 0x8003C8F0: jr          $ra
    // 0x8003C8F4: sra         $v0, $t0, 16
    ctx->r2 = S32(SIGNED(ctx->r8) >> 16);
    return;
    // 0x8003C8F4: sra         $v0, $t0, 16
    ctx->r2 = S32(SIGNED(ctx->r8) >> 16);
;}
RECOMP_FUNC void func_8003C8F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003C8F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003C8FC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8003C900: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003C904: sll         $s2, $a0, 24
    ctx->r18 = S32(ctx->r4 << 24);
    // 0x8003C908: sll         $s4, $a2, 16
    ctx->r20 = S32(ctx->r6 << 16);
    // 0x8003C90C: sra         $t7, $s4, 16
    ctx->r15 = S32(SIGNED(ctx->r20) >> 16);
    // 0x8003C910: sra         $t6, $s2, 24
    ctx->r14 = S32(SIGNED(ctx->r18) >> 24);
    // 0x8003C914: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8003C918: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003C91C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003C920: andi        $s3, $a1, 0xFF
    ctx->r19 = ctx->r5 & 0XFF;
    // 0x8003C924: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x8003C928: or          $s4, $t7, $zero
    ctx->r20 = ctx->r15 | 0;
    // 0x8003C92C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8003C930: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8003C934: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8003C938: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8003C93C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8003C940: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8003C944:
    // 0x8003C944: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x8003C948: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x8003C94C: sll         $a3, $s4, 16
    ctx->r7 = S32(ctx->r20 << 16);
    // 0x8003C950: sra         $t0, $a3, 16
    ctx->r8 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8003C954: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8003C958: sra         $t8, $a0, 24
    ctx->r24 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8003C95C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8003C960: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x8003C964: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x8003C968: jal         0x8003C7BC
    // 0x8003C96C: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    func_8003C7BC(rdram, ctx);
        goto after_0;
    // 0x8003C96C: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    after_0:
    // 0x8003C970: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003C974: sll         $t3, $s0, 16
    ctx->r11 = S32(ctx->r16 << 16);
    // 0x8003C978: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8003C97C: sra         $s0, $t3, 16
    ctx->r16 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8003C980: sll         $t1, $s1, 16
    ctx->r9 = S32(ctx->r17 << 16);
    // 0x8003C984: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x8003C988: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8003C98C: bne         $at, $zero, L_8003C944
    if (ctx->r1 != 0) {
        // 0x8003C990: or          $s1, $t2, $zero
        ctx->r17 = ctx->r10 | 0;
            goto L_8003C944;
    }
    // 0x8003C990: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x8003C994: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003C998: div         $zero, $t2, $at
    lo = S32(S64(S32(ctx->r10)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r10)) % S64(S32(ctx->r1)));
    // 0x8003C99C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8003C9A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003C9A4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003C9A8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003C9AC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8003C9B0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8003C9B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8003C9B8: mflo        $t5
    ctx->r13 = lo;
    // 0x8003C9BC: sll         $t6, $t5, 16
    ctx->r14 = S32(ctx->r13 << 16);
    // 0x8003C9C0: jr          $ra
    // 0x8003C9C4: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    return;
    // 0x8003C9C4: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
;}
RECOMP_FUNC void func_8003C9C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003C9C8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003C9CC: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8003C9D0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8003C9D4: lb          $t9, 0x33($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X33);
    // 0x8003C9D8: sll         $s5, $a1, 24
    ctx->r21 = S32(ctx->r5 << 24);
    // 0x8003C9DC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8003C9E0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8003C9E4: sll         $s2, $a2, 24
    ctx->r18 = S32(ctx->r6 << 24);
    // 0x8003C9E8: sll         $s3, $a3, 16
    ctx->r19 = S32(ctx->r7 << 16);
    // 0x8003C9EC: sra         $t6, $s5, 24
    ctx->r14 = S32(SIGNED(ctx->r21) >> 24);
    // 0x8003C9F0: sra         $t8, $s3, 16
    ctx->r24 = S32(SIGNED(ctx->r19) >> 16);
    // 0x8003C9F4: sra         $t7, $s2, 24
    ctx->r15 = S32(SIGNED(ctx->r18) >> 24);
    // 0x8003C9F8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003C9FC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003CA00: slt         $at, $t9, $t6
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8003CA04: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    // 0x8003CA08: or          $s3, $t8, $zero
    ctx->r19 = ctx->r24 | 0;
    // 0x8003CA0C: or          $s5, $t6, $zero
    ctx->r21 = ctx->r14 | 0;
    // 0x8003CA10: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8003CA14: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8003CA18: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8003CA1C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8003CA20: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8003CA24: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8003CA28: beq         $at, $zero, L_8003CA8C
    if (ctx->r1 == 0) {
        // 0x8003CA2C: or          $s0, $t9, $zero
        ctx->r16 = ctx->r25 | 0;
            goto L_8003CA8C;
    }
    // 0x8003CA2C: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x8003CA30: lh          $s4, 0x42($sp)
    ctx->r20 = MEM_H(ctx->r29, 0X42);
    // 0x8003CA34: nop

L_8003CA38:
    // 0x8003CA38: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x8003CA3C: sll         $a2, $s3, 16
    ctx->r6 = S32(ctx->r19 << 16);
    // 0x8003CA40: sll         $a3, $s4, 16
    ctx->r7 = S32(ctx->r20 << 16);
    // 0x8003CA44: sra         $t2, $a3, 16
    ctx->r10 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8003CA48: sra         $t1, $a2, 16
    ctx->r9 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8003CA4C: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8003CA50: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8003CA54: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x8003CA58: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x8003CA5C: jal         0x8003C7BC
    // 0x8003CA60: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_8003C7BC(rdram, ctx);
        goto after_0;
    // 0x8003CA60: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_0:
    // 0x8003CA64: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003CA68: sll         $t5, $s0, 16
    ctx->r13 = S32(ctx->r16 << 16);
    // 0x8003CA6C: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8003CA70: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8003CA74: sll         $t3, $s1, 16
    ctx->r11 = S32(ctx->r17 << 16);
    // 0x8003CA78: slt         $at, $t6, $s5
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x8003CA7C: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8003CA80: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x8003CA84: bne         $at, $zero, L_8003CA38
    if (ctx->r1 != 0) {
        // 0x8003CA88: or          $s1, $t4, $zero
        ctx->r17 = ctx->r12 | 0;
            goto L_8003CA38;
    }
    // 0x8003CA88: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
L_8003CA8C:
    // 0x8003CA8C: lb          $t7, 0x33($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X33);
    // 0x8003CA90: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8003CA94: subu        $t8, $s5, $t7
    ctx->r24 = SUB32(ctx->r21, ctx->r15);
    // 0x8003CA98: div         $zero, $s1, $t8
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r24))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r24)));
    // 0x8003CA9C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8003CAA0: bne         $t8, $zero, L_8003CAAC
    if (ctx->r24 != 0) {
        // 0x8003CAA4: nop
    
            goto L_8003CAAC;
    }
    // 0x8003CAA4: nop

    // 0x8003CAA8: break       7
    do_break(2147732136);
L_8003CAAC:
    // 0x8003CAAC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003CAB0: bne         $t8, $at, L_8003CAC4
    if (ctx->r24 != ctx->r1) {
        // 0x8003CAB4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8003CAC4;
    }
    // 0x8003CAB4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8003CAB8: bne         $s1, $at, L_8003CAC4
    if (ctx->r17 != ctx->r1) {
        // 0x8003CABC: nop
    
            goto L_8003CAC4;
    }
    // 0x8003CABC: nop

    // 0x8003CAC0: break       6
    do_break(2147732160);
L_8003CAC4:
    // 0x8003CAC4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003CAC8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003CACC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8003CAD0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8003CAD4: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8003CAD8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8003CADC: mflo        $v0
    ctx->r2 = lo;
    // 0x8003CAE0: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x8003CAE4: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8003CAE8: jr          $ra
    // 0x8003CAEC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    return;
    // 0x8003CAEC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
;}
