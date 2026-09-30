#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8003A3D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A3D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A3DC: lui         $a0, 0x16
    ctx->r4 = S32(0X16 << 16);
    // 0x8003A3E0: lui         $t7, 0x16
    ctx->r15 = S32(0X16 << 16);
    // 0x8003A3E4: addiu       $a0, $a0, -0x1100
    ctx->r4 = ADD32(ctx->r4, -0X1100);
    // 0x8003A3E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A3EC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003A3F0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A3F4: addiu       $t7, $t7, 0x4450
    ctx->r15 = ADD32(ctx->r15, 0X4450);
    // 0x8003A3F8: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x8003A3FC: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x8003A400: addiu       $a1, $a1, -0x7CE0
    ctx->r5 = ADD32(ctx->r5, -0X7CE0);
    // 0x8003A404: jal         0x8001B1B4
    // 0x8003A408: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    func_8001B1B4(rdram, ctx);
        goto after_0;
    // 0x8003A408: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    after_0:
    // 0x8003A40C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A410: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A414: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    // 0x8003A418: jr          $ra
    // 0x8003A41C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003A41C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003A420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A420: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A424: lui         $a0, 0x16
    ctx->r4 = S32(0X16 << 16);
    // 0x8003A428: lui         $t7, 0x16
    ctx->r15 = S32(0X16 << 16);
    // 0x8003A42C: addiu       $a0, $a0, 0x4450
    ctx->r4 = ADD32(ctx->r4, 0X4450);
    // 0x8003A430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A434: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003A438: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A43C: addiu       $t7, $t7, 0x7810
    ctx->r15 = ADD32(ctx->r15, 0X7810);
    // 0x8003A440: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x8003A444: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x8003A448: addiu       $a1, $a1, -0x2740
    ctx->r5 = ADD32(ctx->r5, -0X2740);
    // 0x8003A44C: jal         0x8001B1B4
    // 0x8003A450: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    func_8001B1B4(rdram, ctx);
        goto after_0;
    // 0x8003A450: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    after_0:
    // 0x8003A454: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A458: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A45C: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    // 0x8003A460: jr          $ra
    // 0x8003A464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003A464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003A468(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A468: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A46C: lui         $a0, 0x16
    ctx->r4 = S32(0X16 << 16);
    // 0x8003A470: lui         $t7, 0x17
    ctx->r15 = S32(0X17 << 16);
    // 0x8003A474: addiu       $a0, $a0, 0x7810
    ctx->r4 = ADD32(ctx->r4, 0X7810);
    // 0x8003A478: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A47C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003A480: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A484: addiu       $t7, $t7, -0x3040
    ctx->r15 = ADD32(ctx->r15, -0X3040);
    // 0x8003A488: lui         $a1, 0x803B
    ctx->r5 = S32(0X803B << 16);
    // 0x8003A48C: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x8003A490: addiu       $a1, $a1, 0xCA0
    ctx->r5 = ADD32(ctx->r5, 0XCA0);
    // 0x8003A494: jal         0x8001B1B4
    // 0x8003A498: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    func_8001B1B4(rdram, ctx);
        goto after_0;
    // 0x8003A498: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    after_0:
    // 0x8003A49C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A4A0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A4A4: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    // 0x8003A4A8: jr          $ra
    // 0x8003A4AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003A4AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003A4B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A4B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A4B4: lui         $a0, 0x17
    ctx->r4 = S32(0X17 << 16);
    // 0x8003A4B8: lui         $t7, 0x17
    ctx->r15 = S32(0X17 << 16);
    // 0x8003A4BC: addiu       $a0, $a0, -0x3040
    ctx->r4 = ADD32(ctx->r4, -0X3040);
    // 0x8003A4C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A4C4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003A4C8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A4CC: addiu       $t7, $t7, 0x28B0
    ctx->r15 = ADD32(ctx->r15, 0X28B0);
    // 0x8003A4D0: lui         $a1, 0x8026
    ctx->r5 = S32(0X8026 << 16);
    // 0x8003A4D4: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x8003A4D8: addiu       $a1, $a1, 0x4800
    ctx->r5 = ADD32(ctx->r5, 0X4800);
    // 0x8003A4DC: jal         0x8001B1B4
    // 0x8003A4E0: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    func_8001B1B4(rdram, ctx);
        goto after_0;
    // 0x8003A4E0: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    after_0:
    // 0x8003A4E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A4E8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A4EC: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    // 0x8003A4F0: jr          $ra
    // 0x8003A4F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003A4F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003A4F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A4F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A4FC: lui         $a0, 0x17
    ctx->r4 = S32(0X17 << 16);
    // 0x8003A500: lui         $t7, 0x17
    ctx->r15 = S32(0X17 << 16);
    // 0x8003A504: addiu       $a0, $a0, 0x28B0
    ctx->r4 = ADD32(ctx->r4, 0X28B0);
    // 0x8003A508: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A50C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003A510: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A514: addiu       $t7, $t7, 0x7C00
    ctx->r15 = ADD32(ctx->r15, 0X7C00);
    // 0x8003A518: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8003A51C: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x8003A520: addiu       $a1, $a1, -0x5F10
    ctx->r5 = ADD32(ctx->r5, -0X5F10);
    // 0x8003A524: jal         0x8001B1B4
    // 0x8003A528: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    func_8001B1B4(rdram, ctx);
        goto after_0;
    // 0x8003A528: subu        $a2, $t7, $a0
    ctx->r6 = SUB32(ctx->r15, ctx->r4);
    after_0:
    // 0x8003A52C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A530: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003A534: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    // 0x8003A538: jr          $ra
    // 0x8003A53C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003A53C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003A540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A540: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A544: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8003A548: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A54C: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8003A550: jal         0x8003A568
    // 0x8003A554: nop

    func_8003A568(rdram, ctx);
        goto after_0;
    // 0x8003A554: nop

    after_0:
    // 0x8003A558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A55C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003A560: jr          $ra
    // 0x8003A564: nop

    return;
    // 0x8003A564: nop

;}
RECOMP_FUNC void func_8003A568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A568: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003A56C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8003A570: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8003A574: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003A578: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003A57C: andi        $s3, $a0, 0xFF
    ctx->r19 = ctx->r4 & 0XFF;
    // 0x8003A580: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003A584: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8003A588: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x8003A58C: addiu       $s1, $zero, 0xB
    ctx->r17 = ADD32(0, 0XB);
    // 0x8003A590: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8003A594: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_8003A598:
    // 0x8003A598: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x8003A59C: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8003A5A0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8003A5A4: jal         0x8006DCF8
    // 0x8003A5A8: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    func_8006DCF8(rdram, ctx);
        goto after_0;
    // 0x8003A5A8: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    after_0:
    // 0x8003A5AC: bne         $s2, $v0, L_8003A5C8
    if (ctx->r18 != ctx->r2) {
        // 0x8003A5B0: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_8003A5C8;
    }
    // 0x8003A5B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003A5B4: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x8003A5B8: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x8003A5BC: jal         0x8001D4C0
    // 0x8003A5C0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001D4C0(rdram, ctx);
        goto after_1;
    // 0x8003A5C0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x8003A5C4: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
L_8003A5C8:
    // 0x8003A5C8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003A5CC: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8003A5D0: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8003A5D4: bne         $at, $zero, L_8003A598
    if (ctx->r1 != 0) {
        // 0x8003A5D8: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_8003A598;
    }
    // 0x8003A5D8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8003A5DC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8003A5E0: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x8003A5E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003A5E8: sb          $s0, -0x3245($at)
    MEM_B(-0X3245, ctx->r1) = ctx->r16;
    // 0x8003A5EC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8003A5F0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003A5F4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8003A5F8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003A5FC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8003A600: jr          $ra
    // 0x8003A604: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8003A604: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8003A608: nop

    // 0x8003A60C: nop

;}
RECOMP_FUNC void func_8003A610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A610: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003A614: lui         $v0, 0x8004
    ctx->r2 = S32(0X8004 << 16);
    // 0x8003A618: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A61C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003A620: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8003A624: addiu       $v0, $v0, -0x5994
    ctx->r2 = ADD32(ctx->r2, -0X5994);
    // 0x8003A628: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
    // 0x8003A62C: jal         0x800375E8
    // 0x8003A630: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800375E8(rdram, ctx);
        goto after_0;
    // 0x8003A630: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8003A634: jal         0x80037608
    // 0x8003A638: nop

    func_80037608(rdram, ctx);
        goto after_1;
    // 0x8003A638: nop

    after_1:
    // 0x8003A63C: jal         0x800375F8
    // 0x8003A640: nop

    func_800375F8(rdram, ctx);
        goto after_2;
    // 0x8003A640: nop

    after_2:
    // 0x8003A644: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8003A648: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8003A64C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x8003A650: addiu       $a0, $a0, 0x7404
    ctx->r4 = ADD32(ctx->r4, 0X7404);
    // 0x8003A654: jal         0x800296E0
    // 0x8003A658: sw          $t7, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->r15;
    func_800296E0(rdram, ctx);
        goto after_3;
    // 0x8003A658: sw          $t7, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->r15;
    after_3:
    // 0x8003A65C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A660: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003A664: jr          $ra
    // 0x8003A668: nop

    return;
    // 0x8003A668: nop

;}
RECOMP_FUNC void func_8003A66C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A66C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A670: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003A674: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A678: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8003A67C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003A680: jal         0x80025A10
    // 0x8003A684: addiu       $a0, $a0, 0x3BC0
    ctx->r4 = ADD32(ctx->r4, 0X3BC0);
    func_80025A10(rdram, ctx);
        goto after_0;
    // 0x8003A684: addiu       $a0, $a0, 0x3BC0
    ctx->r4 = ADD32(ctx->r4, 0X3BC0);
    after_0:
    // 0x8003A688: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8003A68C: jal         0x800296E0
    // 0x8003A690: addiu       $a0, $a0, -0x595C
    ctx->r4 = ADD32(ctx->r4, -0X595C);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x8003A690: addiu       $a0, $a0, -0x595C
    ctx->r4 = ADD32(ctx->r4, -0X595C);
    after_1:
    // 0x8003A694: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A698: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003A69C: jr          $ra
    // 0x8003A6A0: nop

    return;
    // 0x8003A6A0: nop

;}
RECOMP_FUNC void func_8003A6A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A6A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A6A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A6AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003A6B0: jal         0x80036830
    // 0x8003A6B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036830(rdram, ctx);
        goto after_0;
    // 0x8003A6B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003A6B8: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8003A6BC: jal         0x800296E0
    // 0x8003A6C0: addiu       $a0, $a0, -0x592C
    ctx->r4 = ADD32(ctx->r4, -0X592C);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x8003A6C0: addiu       $a0, $a0, -0x592C
    ctx->r4 = ADD32(ctx->r4, -0X592C);
    after_1:
    // 0x8003A6C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A6C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003A6CC: jr          $ra
    // 0x8003A6D0: nop

    return;
    // 0x8003A6D0: nop

;}
RECOMP_FUNC void func_8003A6D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A6D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A6D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003A6DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A6E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003A6E4: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8003A6E8: addiu       $a0, $a0, -0x58FC
    ctx->r4 = ADD32(ctx->r4, -0X58FC);
    // 0x8003A6EC: jal         0x8002989C
    // 0x8003A6F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x8003A6F0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x8003A6F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A6F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003A6FC: jr          $ra
    // 0x8003A700: nop

    return;
    // 0x8003A700: nop

;}
RECOMP_FUNC void func_8003A704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A704: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A708: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003A70C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A710: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8003A714: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003A718: jal         0x800296E0
    // 0x8003A71C: addiu       $a0, $a0, -0x58D0
    ctx->r4 = ADD32(ctx->r4, -0X58D0);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x8003A71C: addiu       $a0, $a0, -0x58D0
    ctx->r4 = ADD32(ctx->r4, -0X58D0);
    after_0:
    // 0x8003A720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003A728: jr          $ra
    // 0x8003A72C: nop

    return;
    // 0x8003A72C: nop

;}
RECOMP_FUNC void func_8003A730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A730: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x8003A734: lhu         $t6, 0x6DFE($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X6DFE);
    // 0x8003A738: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A73C: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8003A740: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003A744: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003A748: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8003A74C: lw          $a0, -0x7D80($t8)
    ctx->r4 = MEM_W(ctx->r24, -0X7D80);
    // 0x8003A750: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8003A754: addiu       $v0, $v0, -0x750
    ctx->r2 = ADD32(ctx->r2, -0X750);
    // 0x8003A758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A75C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003A760: jal         0x800296E0
    // 0x8003A764: sw          $a0, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r4;
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x8003A764: sw          $a0, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r4;
    after_0:
    // 0x8003A768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A76C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003A770: jr          $ra
    // 0x8003A774: nop

    return;
    // 0x8003A774: nop

;}
RECOMP_FUNC void func_8003A778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A778: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A77C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003A780: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003A784: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A788: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003A78C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003A790: addiu       $a0, $a0, 0x31C8
    ctx->r4 = ADD32(ctx->r4, 0X31C8);
    // 0x8003A794: jal         0x80035490
    // 0x8003A798: addiu       $a1, $a1, -0x7D40
    ctx->r5 = ADD32(ctx->r5, -0X7D40);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003A798: addiu       $a1, $a1, -0x7D40
    ctx->r5 = ADD32(ctx->r5, -0X7D40);
    after_0:
    // 0x8003A79C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A7A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003A7A4: jr          $ra
    // 0x8003A7A8: nop

    return;
    // 0x8003A7A8: nop

;}
RECOMP_FUNC void func_8003A7AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A7AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A7B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003A7B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003A7B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A7BC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003A7C0: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003A7C4: addiu       $a0, $a0, 0x31FC
    ctx->r4 = ADD32(ctx->r4, 0X31FC);
    // 0x8003A7C8: jal         0x80035490
    // 0x8003A7CC: addiu       $a1, $a1, -0x7D40
    ctx->r5 = ADD32(ctx->r5, -0X7D40);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003A7CC: addiu       $a1, $a1, -0x7D40
    ctx->r5 = ADD32(ctx->r5, -0X7D40);
    after_0:
    // 0x8003A7D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A7D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003A7D8: jr          $ra
    // 0x8003A7DC: nop

    return;
    // 0x8003A7DC: nop

;}
RECOMP_FUNC void func_8003A7E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A7E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A7E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A7E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003A7EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003A7F0: jal         0x8001B854
    // 0x8003A7F4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8001B854(rdram, ctx);
        goto after_0;
    // 0x8003A7F4: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_0:
    // 0x8003A7F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A7FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003A800: jr          $ra
    // 0x8003A804: nop

    return;
    // 0x8003A804: nop

;}
RECOMP_FUNC void func_8003A808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A808: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A80C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003A810: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003A814: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A818: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003A81C: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003A820: addiu       $a0, $a0, 0x4930
    ctx->r4 = ADD32(ctx->r4, 0X4930);
    // 0x8003A824: jal         0x80035490
    // 0x8003A828: addiu       $a1, $a1, -0x7D18
    ctx->r5 = ADD32(ctx->r5, -0X7D18);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003A828: addiu       $a1, $a1, -0x7D18
    ctx->r5 = ADD32(ctx->r5, -0X7D18);
    after_0:
    // 0x8003A82C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A830: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003A834: jr          $ra
    // 0x8003A838: nop

    return;
    // 0x8003A838: nop

;}
RECOMP_FUNC void func_8003A83C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A83C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A840: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003A844: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003A848: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A84C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003A850: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003A854: addiu       $a0, $a0, 0x4964
    ctx->r4 = ADD32(ctx->r4, 0X4964);
    // 0x8003A858: jal         0x80035490
    // 0x8003A85C: addiu       $a1, $a1, -0x7D10
    ctx->r5 = ADD32(ctx->r5, -0X7D10);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003A85C: addiu       $a1, $a1, -0x7D10
    ctx->r5 = ADD32(ctx->r5, -0X7D10);
    after_0:
    // 0x8003A860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003A868: jr          $ra
    // 0x8003A86C: nop

    return;
    // 0x8003A86C: nop

;}
RECOMP_FUNC void func_8003A870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A874: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003A878: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003A87C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A880: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003A884: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x8003A888: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8003A88C: jal         0x80035490
    // 0x8003A890: addiu       $a1, $a1, -0x7D08
    ctx->r5 = ADD32(ctx->r5, -0X7D08);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003A890: addiu       $a1, $a1, -0x7D08
    ctx->r5 = ADD32(ctx->r5, -0X7D08);
    after_0:
    // 0x8003A894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A898: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003A89C: jr          $ra
    // 0x8003A8A0: nop

    return;
    // 0x8003A8A0: nop

;}
RECOMP_FUNC void func_8003A8A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A8A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A8A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003A8AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003A8B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A8B4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003A8B8: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x8003A8BC: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    // 0x8003A8C0: jal         0x80035490
    // 0x8003A8C4: addiu       $a1, $a1, -0x7D00
    ctx->r5 = ADD32(ctx->r5, -0X7D00);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003A8C4: addiu       $a1, $a1, -0x7D00
    ctx->r5 = ADD32(ctx->r5, -0X7D00);
    after_0:
    // 0x8003A8C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A8CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003A8D0: jr          $ra
    // 0x8003A8D4: nop

    return;
    // 0x8003A8D4: nop

;}
RECOMP_FUNC void func_8003A8D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A8D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A8DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003A8E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003A8E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A8E8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003A8EC: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003A8F0: addiu       $a0, $a0, -0x2740
    ctx->r4 = ADD32(ctx->r4, -0X2740);
    // 0x8003A8F4: jal         0x80035490
    // 0x8003A8F8: addiu       $a1, $a1, -0x7CF8
    ctx->r5 = ADD32(ctx->r5, -0X7CF8);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003A8F8: addiu       $a1, $a1, -0x7CF8
    ctx->r5 = ADD32(ctx->r5, -0X7CF8);
    after_0:
    // 0x8003A8FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A900: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003A904: jr          $ra
    // 0x8003A908: nop

    return;
    // 0x8003A908: nop

;}
RECOMP_FUNC void func_8003A90C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A90C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A910: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003A914: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003A918: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A91C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003A920: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003A924: addiu       $a0, $a0, -0x1880
    ctx->r4 = ADD32(ctx->r4, -0X1880);
    // 0x8003A928: jal         0x80035490
    // 0x8003A92C: addiu       $a1, $a1, -0x7CF0
    ctx->r5 = ADD32(ctx->r5, -0X7CF0);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003A92C: addiu       $a1, $a1, -0x7CF0
    ctx->r5 = ADD32(ctx->r5, -0X7CF0);
    after_0:
    // 0x8003A930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A934: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003A938: jr          $ra
    // 0x8003A93C: nop

    return;
    // 0x8003A93C: nop

;}
RECOMP_FUNC void func_8003A940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A940: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A944: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A948: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003A94C: jal         0x80280804
    // 0x8003A950: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(0x80280804)(rdram, ctx);
        goto after_0;
    // 0x8003A950: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003A954: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003A958: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003A95C: addiu       $a1, $a1, -0x7CE4
    ctx->r5 = ADD32(ctx->r5, -0X7CE4);
    // 0x8003A960: jal         0x80035490
    // 0x8003A964: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8003A964: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    after_1:
    // 0x8003A968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A96C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003A970: jr          $ra
    // 0x8003A974: nop

    return;
    // 0x8003A974: nop

;}
RECOMP_FUNC void func_8003A978(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A978: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A97C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003A980: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003A984: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A988: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003A98C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003A990: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    // 0x8003A994: jal         0x80035490
    // 0x8003A998: addiu       $a1, $a1, -0x7CE4
    ctx->r5 = ADD32(ctx->r5, -0X7CE4);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003A998: addiu       $a1, $a1, -0x7CE4
    ctx->r5 = ADD32(ctx->r5, -0X7CE4);
    after_0:
    // 0x8003A99C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A9A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003A9A4: jr          $ra
    // 0x8003A9A8: nop

    return;
    // 0x8003A9A8: nop

;}
RECOMP_FUNC void func_8003A9AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A9AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A9B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003A9B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003A9B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A9BC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003A9C0: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x8003A9C4: addiu       $a0, $a0, 0x34F0
    ctx->r4 = ADD32(ctx->r4, 0X34F0);
    // 0x8003A9C8: jal         0x80035490
    // 0x8003A9CC: addiu       $a1, $a1, -0x7CC0
    ctx->r5 = ADD32(ctx->r5, -0X7CC0);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003A9CC: addiu       $a1, $a1, -0x7CC0
    ctx->r5 = ADD32(ctx->r5, -0X7CC0);
    after_0:
    // 0x8003A9D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003A9D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003A9D8: jr          $ra
    // 0x8003A9DC: nop

    return;
    // 0x8003A9DC: nop

;}
RECOMP_FUNC void func_8003A9E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003A9E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003A9E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003A9E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003A9EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003A9F0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003A9F4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8003A9F8: addiu       $a0, $a0, 0x5230
    ctx->r4 = ADD32(ctx->r4, 0X5230);
    // 0x8003A9FC: jal         0x80035490
    // 0x8003AA00: addiu       $a1, $a1, -0x7CC0
    ctx->r5 = ADD32(ctx->r5, -0X7CC0);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AA00: addiu       $a1, $a1, -0x7CC0
    ctx->r5 = ADD32(ctx->r5, -0X7CC0);
    after_0:
    // 0x8003AA04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AA08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AA0C: jr          $ra
    // 0x8003AA10: nop

    return;
    // 0x8003AA10: nop

;}
RECOMP_FUNC void func_8003AA14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AA14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AA18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AA1C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AA20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AA24: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AA28: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8003AA2C: addiu       $a0, $a0, 0x4800
    ctx->r4 = ADD32(ctx->r4, 0X4800);
    // 0x8003AA30: jal         0x80035490
    // 0x8003AA34: addiu       $a1, $a1, -0x7CC0
    ctx->r5 = ADD32(ctx->r5, -0X7CC0);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AA34: addiu       $a1, $a1, -0x7CC0
    ctx->r5 = ADD32(ctx->r5, -0X7CC0);
    after_0:
    // 0x8003AA38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AA3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AA40: jr          $ra
    // 0x8003AA44: nop

    return;
    // 0x8003AA44: nop

;}
RECOMP_FUNC void func_8003AA48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AA48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AA4C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AA50: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AA54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AA58: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AA5C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8003AA60: addiu       $a0, $a0, -0x5F10
    ctx->r4 = ADD32(ctx->r4, -0X5F10);
    // 0x8003AA64: jal         0x80035490
    // 0x8003AA68: addiu       $a1, $a1, -0x7CC0
    ctx->r5 = ADD32(ctx->r5, -0X7CC0);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AA68: addiu       $a1, $a1, -0x7CC0
    ctx->r5 = ADD32(ctx->r5, -0X7CC0);
    after_0:
    // 0x8003AA6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AA70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AA74: jr          $ra
    // 0x8003AA78: nop

    return;
    // 0x8003AA78: nop

;}
RECOMP_FUNC void func_8003AA7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AA7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AA80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AA84: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AA88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AA8C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AA90: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003AA94: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x8003AA98: jal         0x80035490
    // 0x8003AA9C: addiu       $a1, $a1, -0x7CC0
    ctx->r5 = ADD32(ctx->r5, -0X7CC0);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AA9C: addiu       $a1, $a1, -0x7CC0
    ctx->r5 = ADD32(ctx->r5, -0X7CC0);
    after_0:
    // 0x8003AAA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AAA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AAA8: jr          $ra
    // 0x8003AAAC: nop

    return;
    // 0x8003AAAC: nop

;}
RECOMP_FUNC void func_8003AAB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AAB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AAB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AAB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AABC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AAC0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AAC4: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003AAC8: addiu       $a0, $a0, 0x3B80
    ctx->r4 = ADD32(ctx->r4, 0X3B80);
    // 0x8003AACC: jal         0x80035490
    // 0x8003AAD0: addiu       $a1, $a1, -0x7CC0
    ctx->r5 = ADD32(ctx->r5, -0X7CC0);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AAD0: addiu       $a1, $a1, -0x7CC0
    ctx->r5 = ADD32(ctx->r5, -0X7CC0);
    after_0:
    // 0x8003AAD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AAD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AADC: jr          $ra
    // 0x8003AAE0: nop

    return;
    // 0x8003AAE0: nop

;}
RECOMP_FUNC void func_8003AAE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AAE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AAE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AAEC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AAF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AAF4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AAF8: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003AAFC: addiu       $a0, $a0, -0xF50
    ctx->r4 = ADD32(ctx->r4, -0XF50);
    // 0x8003AB00: jal         0x80035490
    // 0x8003AB04: addiu       $a1, $a1, -0x7CB8
    ctx->r5 = ADD32(ctx->r5, -0X7CB8);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AB04: addiu       $a1, $a1, -0x7CB8
    ctx->r5 = ADD32(ctx->r5, -0X7CB8);
    after_0:
    // 0x8003AB08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AB0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AB10: jr          $ra
    // 0x8003AB14: nop

    return;
    // 0x8003AB14: nop

;}
RECOMP_FUNC void func_8003AB18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AB18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AB1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AB20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AB24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AB28: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AB2C: lui         $a0, 0x8039
    ctx->r4 = S32(0X8039 << 16);
    // 0x8003AB30: addiu       $a0, $a0, 0x6A00
    ctx->r4 = ADD32(ctx->r4, 0X6A00);
    // 0x8003AB34: jal         0x80035490
    // 0x8003AB38: addiu       $a1, $a1, -0x7CB0
    ctx->r5 = ADD32(ctx->r5, -0X7CB0);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AB38: addiu       $a1, $a1, -0x7CB0
    ctx->r5 = ADD32(ctx->r5, -0X7CB0);
    after_0:
    // 0x8003AB3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AB40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AB44: jr          $ra
    // 0x8003AB48: nop

    return;
    // 0x8003AB48: nop

;}
RECOMP_FUNC void func_8003AB4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AB4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AB50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AB54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AB58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AB5C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AB60: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003AB64: addiu       $a0, $a0, -0x3E90
    ctx->r4 = ADD32(ctx->r4, -0X3E90);
    // 0x8003AB68: jal         0x80035490
    // 0x8003AB6C: addiu       $a1, $a1, -0x7CA8
    ctx->r5 = ADD32(ctx->r5, -0X7CA8);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AB6C: addiu       $a1, $a1, -0x7CA8
    ctx->r5 = ADD32(ctx->r5, -0X7CA8);
    after_0:
    // 0x8003AB70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AB74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AB78: jr          $ra
    // 0x8003AB7C: nop

    return;
    // 0x8003AB7C: nop

;}
RECOMP_FUNC void func_8003AB80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AB80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AB84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AB88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AB8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AB90: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AB94: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8003AB98: addiu       $a0, $a0, 0x30E8
    ctx->r4 = ADD32(ctx->r4, 0X30E8);
    // 0x8003AB9C: jal         0x80035490
    // 0x8003ABA0: addiu       $a1, $a1, -0x7C90
    ctx->r5 = ADD32(ctx->r5, -0X7C90);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003ABA0: addiu       $a1, $a1, -0x7C90
    ctx->r5 = ADD32(ctx->r5, -0X7C90);
    after_0:
    // 0x8003ABA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003ABA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003ABAC: jr          $ra
    // 0x8003ABB0: nop

    return;
    // 0x8003ABB0: nop

;}
RECOMP_FUNC void func_8003ABB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003ABB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003ABB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003ABBC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003ABC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003ABC4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003ABC8: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003ABCC: addiu       $a0, $a0, -0x539C
    ctx->r4 = ADD32(ctx->r4, -0X539C);
    // 0x8003ABD0: jal         0x80035490
    // 0x8003ABD4: addiu       $a1, $a1, -0x7C88
    ctx->r5 = ADD32(ctx->r5, -0X7C88);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003ABD4: addiu       $a1, $a1, -0x7C88
    ctx->r5 = ADD32(ctx->r5, -0X7C88);
    after_0:
    // 0x8003ABD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003ABDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003ABE0: jr          $ra
    // 0x8003ABE4: nop

    return;
    // 0x8003ABE4: nop

;}
RECOMP_FUNC void func_8003ABE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003ABE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003ABEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003ABF0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003ABF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003ABF8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003ABFC: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003AC00: addiu       $a0, $a0, -0x4C8
    ctx->r4 = ADD32(ctx->r4, -0X4C8);
    // 0x8003AC04: jal         0x80035490
    // 0x8003AC08: addiu       $a1, $a1, -0x7C80
    ctx->r5 = ADD32(ctx->r5, -0X7C80);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AC08: addiu       $a1, $a1, -0x7C80
    ctx->r5 = ADD32(ctx->r5, -0X7C80);
    after_0:
    // 0x8003AC0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AC10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AC14: jr          $ra
    // 0x8003AC18: nop

    return;
    // 0x8003AC18: nop

;}
RECOMP_FUNC void func_8003AC1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AC1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AC20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AC24: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AC28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AC2C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AC30: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003AC34: addiu       $a0, $a0, -0x50B4
    ctx->r4 = ADD32(ctx->r4, -0X50B4);
    // 0x8003AC38: jal         0x80035490
    // 0x8003AC3C: addiu       $a1, $a1, -0x7C78
    ctx->r5 = ADD32(ctx->r5, -0X7C78);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AC3C: addiu       $a1, $a1, -0x7C78
    ctx->r5 = ADD32(ctx->r5, -0X7C78);
    after_0:
    // 0x8003AC40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AC44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AC48: jr          $ra
    // 0x8003AC4C: nop

    return;
    // 0x8003AC4C: nop

;}
RECOMP_FUNC void func_8003AC50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AC50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AC54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AC58: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AC5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AC60: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AC64: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003AC68: addiu       $a0, $a0, -0x7170
    ctx->r4 = ADD32(ctx->r4, -0X7170);
    // 0x8003AC6C: jal         0x80035490
    // 0x8003AC70: addiu       $a1, $a1, -0x7C70
    ctx->r5 = ADD32(ctx->r5, -0X7C70);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AC70: addiu       $a1, $a1, -0x7C70
    ctx->r5 = ADD32(ctx->r5, -0X7C70);
    after_0:
    // 0x8003AC74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AC78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AC7C: jr          $ra
    // 0x8003AC80: nop

    return;
    // 0x8003AC80: nop

;}
RECOMP_FUNC void func_8003AC84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AC84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AC88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AC8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AC90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AC94: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AC98: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003AC9C: addiu       $a0, $a0, -0x43B0
    ctx->r4 = ADD32(ctx->r4, -0X43B0);
    // 0x8003ACA0: jal         0x80035490
    // 0x8003ACA4: addiu       $a1, $a1, -0x7C68
    ctx->r5 = ADD32(ctx->r5, -0X7C68);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003ACA4: addiu       $a1, $a1, -0x7C68
    ctx->r5 = ADD32(ctx->r5, -0X7C68);
    after_0:
    // 0x8003ACA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003ACAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003ACB0: jr          $ra
    // 0x8003ACB4: nop

    return;
    // 0x8003ACB4: nop

;}
RECOMP_FUNC void func_8003ACB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003ACB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003ACBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003ACC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003ACC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003ACC8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003ACCC: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003ACD0: addiu       $a0, $a0, -0x437C
    ctx->r4 = ADD32(ctx->r4, -0X437C);
    // 0x8003ACD4: jal         0x80035490
    // 0x8003ACD8: addiu       $a1, $a1, -0x7C5C
    ctx->r5 = ADD32(ctx->r5, -0X7C5C);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003ACD8: addiu       $a1, $a1, -0x7C5C
    ctx->r5 = ADD32(ctx->r5, -0X7C5C);
    after_0:
    // 0x8003ACDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003ACE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003ACE4: jr          $ra
    // 0x8003ACE8: nop

    return;
    // 0x8003ACE8: nop

;}
RECOMP_FUNC void func_8003ACEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003ACEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003ACF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003ACF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003ACF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003ACFC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AD00: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x8003AD04: addiu       $a0, $a0, -0x7C54
    ctx->r4 = ADD32(ctx->r4, -0X7C54);
    // 0x8003AD08: jal         0x80035490
    // 0x8003AD0C: addiu       $a1, $a1, -0x7C54
    ctx->r5 = ADD32(ctx->r5, -0X7C54);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AD0C: addiu       $a1, $a1, -0x7C54
    ctx->r5 = ADD32(ctx->r5, -0X7C54);
    after_0:
    // 0x8003AD10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AD14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AD18: jr          $ra
    // 0x8003AD1C: nop

    return;
    // 0x8003AD1C: nop

;}
RECOMP_FUNC void func_8003AD20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AD20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AD24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AD28: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AD2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AD30: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AD34: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x8003AD38: addiu       $a0, $a0, -0x7C80
    ctx->r4 = ADD32(ctx->r4, -0X7C80);
    // 0x8003AD3C: jal         0x80035490
    // 0x8003AD40: addiu       $a1, $a1, -0x7C4C
    ctx->r5 = ADD32(ctx->r5, -0X7C4C);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AD40: addiu       $a1, $a1, -0x7C4C
    ctx->r5 = ADD32(ctx->r5, -0X7C4C);
    after_0:
    // 0x8003AD44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AD48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AD4C: jr          $ra
    // 0x8003AD50: nop

    return;
    // 0x8003AD50: nop

;}
RECOMP_FUNC void func_8003AD54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AD54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AD58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AD5C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AD60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AD64: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AD68: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003AD6C: addiu       $a0, $a0, -0x480
    ctx->r4 = ADD32(ctx->r4, -0X480);
    // 0x8003AD70: jal         0x80035490
    // 0x8003AD74: addiu       $a1, $a1, -0x7C44
    ctx->r5 = ADD32(ctx->r5, -0X7C44);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AD74: addiu       $a1, $a1, -0x7C44
    ctx->r5 = ADD32(ctx->r5, -0X7C44);
    after_0:
    // 0x8003AD78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AD7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AD80: jr          $ra
    // 0x8003AD84: nop

    return;
    // 0x8003AD84: nop

;}
RECOMP_FUNC void func_8003AD88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AD88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AD8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AD90: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AD94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AD98: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AD9C: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003ADA0: addiu       $a0, $a0, 0x4930
    ctx->r4 = ADD32(ctx->r4, 0X4930);
    // 0x8003ADA4: jal         0x80035490
    // 0x8003ADA8: addiu       $a1, $a1, -0x7C3C
    ctx->r5 = ADD32(ctx->r5, -0X7C3C);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003ADA8: addiu       $a1, $a1, -0x7C3C
    ctx->r5 = ADD32(ctx->r5, -0X7C3C);
    after_0:
    // 0x8003ADAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003ADB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003ADB4: jr          $ra
    // 0x8003ADB8: nop

    return;
    // 0x8003ADB8: nop

;}
RECOMP_FUNC void func_8003ADBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003ADBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003ADC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003ADC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003ADC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003ADCC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003ADD0: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x8003ADD4: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8003ADD8: jal         0x80035490
    // 0x8003ADDC: addiu       $a1, $a1, -0x7C34
    ctx->r5 = ADD32(ctx->r5, -0X7C34);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003ADDC: addiu       $a1, $a1, -0x7C34
    ctx->r5 = ADD32(ctx->r5, -0X7C34);
    after_0:
    // 0x8003ADE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003ADE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003ADE8: jr          $ra
    // 0x8003ADEC: nop

    return;
    // 0x8003ADEC: nop

;}
RECOMP_FUNC void func_8003ADF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003ADF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003ADF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003ADF8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003ADFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AE00: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AE04: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003AE08: addiu       $a0, $a0, -0x1880
    ctx->r4 = ADD32(ctx->r4, -0X1880);
    // 0x8003AE0C: jal         0x80035490
    // 0x8003AE10: addiu       $a1, $a1, -0x7C2C
    ctx->r5 = ADD32(ctx->r5, -0X7C2C);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AE10: addiu       $a1, $a1, -0x7C2C
    ctx->r5 = ADD32(ctx->r5, -0X7C2C);
    after_0:
    // 0x8003AE14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AE18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AE1C: jr          $ra
    // 0x8003AE20: nop

    return;
    // 0x8003AE20: nop

;}
RECOMP_FUNC void func_8003AE24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AE24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AE28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AE2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AE30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AE34: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AE38: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003AE3C: addiu       $a0, $a0, 0x1F24
    ctx->r4 = ADD32(ctx->r4, 0X1F24);
    // 0x8003AE40: jal         0x80035490
    // 0x8003AE44: addiu       $a1, $a1, -0x7C20
    ctx->r5 = ADD32(ctx->r5, -0X7C20);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AE44: addiu       $a1, $a1, -0x7C20
    ctx->r5 = ADD32(ctx->r5, -0X7C20);
    after_0:
    // 0x8003AE48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AE4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AE50: jr          $ra
    // 0x8003AE54: nop

    return;
    // 0x8003AE54: nop

;}
RECOMP_FUNC void func_8003AE58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AE58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AE5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AE60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AE64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AE68: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AE6C: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003AE70: addiu       $a0, $a0, 0x1F7C
    ctx->r4 = ADD32(ctx->r4, 0X1F7C);
    // 0x8003AE74: jal         0x80035490
    // 0x8003AE78: addiu       $a1, $a1, -0x7C18
    ctx->r5 = ADD32(ctx->r5, -0X7C18);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AE78: addiu       $a1, $a1, -0x7C18
    ctx->r5 = ADD32(ctx->r5, -0X7C18);
    after_0:
    // 0x8003AE7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AE80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AE84: jr          $ra
    // 0x8003AE88: nop

    return;
    // 0x8003AE88: nop

;}
RECOMP_FUNC void func_8003AE8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AE8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AE90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AE94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AE98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AE9C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AEA0: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003AEA4: addiu       $a0, $a0, -0x6190
    ctx->r4 = ADD32(ctx->r4, -0X6190);
    // 0x8003AEA8: jal         0x80035490
    // 0x8003AEAC: addiu       $a1, $a1, -0x7C10
    ctx->r5 = ADD32(ctx->r5, -0X7C10);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AEAC: addiu       $a1, $a1, -0x7C10
    ctx->r5 = ADD32(ctx->r5, -0X7C10);
    after_0:
    // 0x8003AEB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AEB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AEB8: jr          $ra
    // 0x8003AEBC: nop

    return;
    // 0x8003AEBC: nop

;}
RECOMP_FUNC void func_8003AEC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AEC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AEC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AEC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AECC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AED0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AED4: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003AED8: addiu       $a0, $a0, -0x6158
    ctx->r4 = ADD32(ctx->r4, -0X6158);
    // 0x8003AEDC: jal         0x80035490
    // 0x8003AEE0: addiu       $a1, $a1, -0x7C08
    ctx->r5 = ADD32(ctx->r5, -0X7C08);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AEE0: addiu       $a1, $a1, -0x7C08
    ctx->r5 = ADD32(ctx->r5, -0X7C08);
    after_0:
    // 0x8003AEE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AEE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AEEC: jr          $ra
    // 0x8003AEF0: nop

    return;
    // 0x8003AEF0: nop

;}
RECOMP_FUNC void func_8003AEF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AEF4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8003AEF8: addiu       $v0, $v0, -0x30A0
    ctx->r2 = ADD32(ctx->r2, -0X30A0);
    // 0x8003AEFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AF00: sb          $zero, 0x0($v0)
    MEM_B(0X0, ctx->r2) = 0;
    // 0x8003AF04: lb          $t6, 0x0($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X0);
    // 0x8003AF08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AF0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AF10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AF14: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8003AF18: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AF1C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003AF20: addiu       $a0, $a0, 0xE9C
    ctx->r4 = ADD32(ctx->r4, 0XE9C);
    // 0x8003AF24: addiu       $a1, $a1, -0x7C00
    ctx->r5 = ADD32(ctx->r5, -0X7C00);
    // 0x8003AF28: jal         0x80035490
    // 0x8003AF2C: sb          $t6, -0x3088($at)
    MEM_B(-0X3088, ctx->r1) = ctx->r14;
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AF2C: sb          $t6, -0x3088($at)
    MEM_B(-0X3088, ctx->r1) = ctx->r14;
    after_0:
    // 0x8003AF30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AF34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AF38: jr          $ra
    // 0x8003AF3C: nop

    return;
    // 0x8003AF3C: nop

;}
RECOMP_FUNC void func_8003AF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AF40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AF44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AF48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AF4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AF50: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003AF54: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8003AF58: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AF5C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003AF60: sb          $t6, -0x3240($at)
    MEM_B(-0X3240, ctx->r1) = ctx->r14;
    // 0x8003AF64: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    // 0x8003AF68: jal         0x80035490
    // 0x8003AF6C: addiu       $a1, $a1, -0x7BF8
    ctx->r5 = ADD32(ctx->r5, -0X7BF8);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AF6C: addiu       $a1, $a1, -0x7BF8
    ctx->r5 = ADD32(ctx->r5, -0X7BF8);
    after_0:
    // 0x8003AF70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AF74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AF78: jr          $ra
    // 0x8003AF7C: nop

    return;
    // 0x8003AF7C: nop

;}
RECOMP_FUNC void func_8003AF80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AF80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AF84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AF88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AF8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AF90: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AF94: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003AF98: addiu       $a0, $a0, -0xF50
    ctx->r4 = ADD32(ctx->r4, -0XF50);
    // 0x8003AF9C: jal         0x80035490
    // 0x8003AFA0: addiu       $a1, $a1, -0x7BD0
    ctx->r5 = ADD32(ctx->r5, -0X7BD0);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AFA0: addiu       $a1, $a1, -0x7BD0
    ctx->r5 = ADD32(ctx->r5, -0X7BD0);
    after_0:
    // 0x8003AFA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AFA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AFAC: jr          $ra
    // 0x8003AFB0: nop

    return;
    // 0x8003AFB0: nop

;}
RECOMP_FUNC void func_8003AFB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AFB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AFB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AFBC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AFC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AFC4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AFC8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8003AFCC: addiu       $a0, $a0, 0x5230
    ctx->r4 = ADD32(ctx->r4, 0X5230);
    // 0x8003AFD0: jal         0x80035490
    // 0x8003AFD4: addiu       $a1, $a1, -0x7BD8
    ctx->r5 = ADD32(ctx->r5, -0X7BD8);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003AFD4: addiu       $a1, $a1, -0x7BD8
    ctx->r5 = ADD32(ctx->r5, -0X7BD8);
    after_0:
    // 0x8003AFD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003AFDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003AFE0: jr          $ra
    // 0x8003AFE4: nop

    return;
    // 0x8003AFE4: nop

;}
RECOMP_FUNC void func_8003AFE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003AFE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003AFEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003AFF0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003AFF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003AFF8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003AFFC: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8003B000: addiu       $a0, $a0, 0x4800
    ctx->r4 = ADD32(ctx->r4, 0X4800);
    // 0x8003B004: jal         0x80035490
    // 0x8003B008: addiu       $a1, $a1, -0x7BD8
    ctx->r5 = ADD32(ctx->r5, -0X7BD8);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B008: addiu       $a1, $a1, -0x7BD8
    ctx->r5 = ADD32(ctx->r5, -0X7BD8);
    after_0:
    // 0x8003B00C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B010: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B014: jr          $ra
    // 0x8003B018: nop

    return;
    // 0x8003B018: nop

;}
RECOMP_FUNC void func_8003B01C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B01C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B020: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B024: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B028: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B02C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B030: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003B034: addiu       $a0, $a0, 0x4964
    ctx->r4 = ADD32(ctx->r4, 0X4964);
    // 0x8003B038: jal         0x80035490
    // 0x8003B03C: addiu       $a1, $a1, -0x7BD8
    ctx->r5 = ADD32(ctx->r5, -0X7BD8);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B03C: addiu       $a1, $a1, -0x7BD8
    ctx->r5 = ADD32(ctx->r5, -0X7BD8);
    after_0:
    // 0x8003B040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B044: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B048: jr          $ra
    // 0x8003B04C: nop

    return;
    // 0x8003B04C: nop

;}
RECOMP_FUNC void func_8003B050(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B050: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B054: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B058: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B05C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B060: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B064: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8003B068: addiu       $a0, $a0, -0x5F10
    ctx->r4 = ADD32(ctx->r4, -0X5F10);
    // 0x8003B06C: jal         0x80035490
    // 0x8003B070: addiu       $a1, $a1, -0x7BD8
    ctx->r5 = ADD32(ctx->r5, -0X7BD8);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B070: addiu       $a1, $a1, -0x7BD8
    ctx->r5 = ADD32(ctx->r5, -0X7BD8);
    after_0:
    // 0x8003B074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B078: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B07C: jr          $ra
    // 0x8003B080: nop

    return;
    // 0x8003B080: nop

;}
RECOMP_FUNC void func_8003B084(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B084: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B088: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B08C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B090: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B094: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B098: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003B09C: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x8003B0A0: jal         0x80035490
    // 0x8003B0A4: addiu       $a1, $a1, -0x7BD8
    ctx->r5 = ADD32(ctx->r5, -0X7BD8);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B0A4: addiu       $a1, $a1, -0x7BD8
    ctx->r5 = ADD32(ctx->r5, -0X7BD8);
    after_0:
    // 0x8003B0A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B0AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B0B0: jr          $ra
    // 0x8003B0B4: nop

    return;
    // 0x8003B0B4: nop

;}
RECOMP_FUNC void func_8003B0B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B0B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B0BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B0C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B0C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B0C8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B0CC: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8003B0D0: addiu       $a0, $a0, 0x3B80
    ctx->r4 = ADD32(ctx->r4, 0X3B80);
    // 0x8003B0D4: jal         0x80035490
    // 0x8003B0D8: addiu       $a1, $a1, -0x7BD8
    ctx->r5 = ADD32(ctx->r5, -0X7BD8);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B0D8: addiu       $a1, $a1, -0x7BD8
    ctx->r5 = ADD32(ctx->r5, -0X7BD8);
    after_0:
    // 0x8003B0DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B0E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B0E4: jr          $ra
    // 0x8003B0E8: nop

    return;
    // 0x8003B0E8: nop

;}
RECOMP_FUNC void func_8003B0EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B0EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B0F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B0F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B0F8: jal         0x8005ACAC
    // 0x8003B0FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8005ACAC(rdram, ctx);
        goto after_0;
    // 0x8003B0FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003B100: jal         0x800603F0
    // 0x8003B104: nop

    func_800603F0(rdram, ctx);
        goto after_1;
    // 0x8003B104: nop

    after_1:
    // 0x8003B108: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8003B10C: jal         0x800364A8
    // 0x8003B110: sh          $zero, 0x6968($at)
    MEM_H(0X6968, ctx->r1) = 0;
    func_800364A8(rdram, ctx);
        goto after_2;
    // 0x8003B110: sh          $zero, 0x6968($at)
    MEM_H(0X6968, ctx->r1) = 0;
    after_2:
    // 0x8003B114: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8003B118: lbu         $t6, -0x32A0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A0);
    // 0x8003B11C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8003B120: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8003B124: lhu         $v0, 0x5244($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X5244);
    // 0x8003B128: sh          $t6, 0x6DFE($at)
    MEM_H(0X6DFE, ctx->r1) = ctx->r14;
    // 0x8003B12C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8003B130: beq         $v0, $at, L_8003B170
    if (ctx->r2 == ctx->r1) {
        // 0x8003B134: lui         $a0, 0x8004
        ctx->r4 = S32(0X8004 << 16);
            goto L_8003B170;
    }
    // 0x8003B134: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8003B138: addiu       $at, $zero, 0x4000
    ctx->r1 = ADD32(0, 0X4000);
    // 0x8003B13C: beq         $v0, $at, L_8003B15C
    if (ctx->r2 == ctx->r1) {
        // 0x8003B140: addiu       $t8, $zero, 0xA
        ctx->r24 = ADD32(0, 0XA);
            goto L_8003B15C;
    }
    // 0x8003B140: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x8003B144: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8003B148: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8003B14C: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x8003B150: sh          $t7, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r15;
    // 0x8003B154: b           L_8003B180
    // 0x8003B158: sh          $zero, 0xA9E($v0)
    MEM_H(0XA9E, ctx->r2) = 0;
        goto L_8003B180;
    // 0x8003B158: sh          $zero, 0xA9E($v0)
    MEM_H(0XA9E, ctx->r2) = 0;
L_8003B15C:
    // 0x8003B15C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8003B160: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8003B164: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x8003B168: b           L_8003B180
    // 0x8003B16C: sh          $t8, 0xA9E($v0)
    MEM_H(0XA9E, ctx->r2) = ctx->r24;
        goto L_8003B180;
    // 0x8003B16C: sh          $t8, 0xA9E($v0)
    MEM_H(0XA9E, ctx->r2) = ctx->r24;
L_8003B170:
    // 0x8003B170: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8003B174: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8003B178: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x8003B17C: sh          $zero, 0xA9E($v0)
    MEM_H(0XA9E, ctx->r2) = 0;
L_8003B180:
    // 0x8003B180: jal         0x800296E0
    // 0x8003B184: addiu       $a0, $a0, -0x4E68
    ctx->r4 = ADD32(ctx->r4, -0X4E68);
    func_800296E0(rdram, ctx);
        goto after_3;
    // 0x8003B184: addiu       $a0, $a0, -0x4E68
    ctx->r4 = ADD32(ctx->r4, -0X4E68);
    after_3:
    // 0x8003B188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B18C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B190: jr          $ra
    // 0x8003B194: nop

    return;
    // 0x8003B194: nop

;}
RECOMP_FUNC void func_8003B198(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B198: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B19C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B1A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B1A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B1A8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8003B1AC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B1B0: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003B1B4: sb          $zero, -0x3271($at)
    MEM_B(-0X3271, ctx->r1) = 0;
    // 0x8003B1B8: addiu       $a0, $a0, 0x15C4
    ctx->r4 = ADD32(ctx->r4, 0X15C4);
    // 0x8003B1BC: jal         0x80035490
    // 0x8003B1C0: addiu       $a1, $a1, -0x7BC8
    ctx->r5 = ADD32(ctx->r5, -0X7BC8);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B1C0: addiu       $a1, $a1, -0x7BC8
    ctx->r5 = ADD32(ctx->r5, -0X7BC8);
    after_0:
    // 0x8003B1C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B1C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B1CC: jr          $ra
    // 0x8003B1D0: nop

    return;
    // 0x8003B1D0: nop

;}
RECOMP_FUNC void func_8003B1D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B1D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B1D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B1DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B1E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B1E4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B1E8: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003B1EC: addiu       $a0, $a0, 0x20B0
    ctx->r4 = ADD32(ctx->r4, 0X20B0);
    // 0x8003B1F0: jal         0x80035490
    // 0x8003B1F4: addiu       $a1, $a1, -0x7BBC
    ctx->r5 = ADD32(ctx->r5, -0X7BBC);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8003B1F4: addiu       $a1, $a1, -0x7BBC
    ctx->r5 = ADD32(ctx->r5, -0X7BBC);
    after_0:
    // 0x8003B1F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B1FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B200: jr          $ra
    // 0x8003B204: nop

    return;
    // 0x8003B204: nop

;}
RECOMP_FUNC void func_8003B208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B208: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B20C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B210: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B214: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003B218: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8003B21C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003B220: sb          $t6, -0x3271($at)
    MEM_B(-0X3271, ctx->r1) = ctx->r14;
    // 0x8003B224: jal         0x80015BC0
    // 0x8003B228: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x8003B228: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_0:
    // 0x8003B22C: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x8003B230: jal         0x80035A74
    // 0x8003B234: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_80035A74(rdram, ctx);
        goto after_1;
    // 0x8003B234: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_1:
    // 0x8003B238: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x8003B23C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B240: addiu       $a1, $a1, -0x7BB4
    ctx->r5 = ADD32(ctx->r5, -0X7BB4);
    // 0x8003B244: jal         0x80035490
    // 0x8003B248: addiu       $a0, $a0, -0x49EC
    ctx->r4 = ADD32(ctx->r4, -0X49EC);
    func_80035490(rdram, ctx);
        goto after_2;
    // 0x8003B248: addiu       $a0, $a0, -0x49EC
    ctx->r4 = ADD32(ctx->r4, -0X49EC);
    after_2:
    // 0x8003B24C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B254: jr          $ra
    // 0x8003B258: nop

    return;
    // 0x8003B258: nop

;}
RECOMP_FUNC void func_8003B25C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003B25C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B260: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B264: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003B268: jal         0x80035A04
    // 0x8003B26C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035A04(rdram, ctx);
        goto after_0;
    // 0x8003B26C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003B270: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8003B274: lbu         $t6, -0x32B0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32B0);
    // 0x8003B278: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B27C: beq         $t6, $zero, L_8003B29C
    if (ctx->r14 == 0) {
        // 0x8003B280: addiu       $a0, $zero, 0x41
        ctx->r4 = ADD32(0, 0X41);
            goto L_8003B29C;
    }
    // 0x8003B280: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    // 0x8003B284: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003B288: addiu       $a0, $a0, 0xE9C
    ctx->r4 = ADD32(ctx->r4, 0XE9C);
    // 0x8003B28C: jal         0x80035490
    // 0x8003B290: addiu       $a1, $a1, -0x7BA0
    ctx->r5 = ADD32(ctx->r5, -0X7BA0);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8003B290: addiu       $a1, $a1, -0x7BA0
    ctx->r5 = ADD32(ctx->r5, -0X7BA0);
    after_1:
    // 0x8003B294: b           L_8003B2BC
    // 0x8003B298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003B2BC;
    // 0x8003B298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003B29C:
    // 0x8003B29C: jal         0x80035A74
    // 0x8003B2A0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_80035A74(rdram, ctx);
        goto after_2;
    // 0x8003B2A0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_2:
    // 0x8003B2A4: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8003B2A8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8003B2AC: addiu       $a1, $a1, -0x7BA8
    ctx->r5 = ADD32(ctx->r5, -0X7BA8);
    // 0x8003B2B0: jal         0x80035490
    // 0x8003B2B4: addiu       $a0, $a0, 0xE9C
    ctx->r4 = ADD32(ctx->r4, 0XE9C);
    func_80035490(rdram, ctx);
        goto after_3;
    // 0x8003B2B4: addiu       $a0, $a0, 0xE9C
    ctx->r4 = ADD32(ctx->r4, 0XE9C);
    after_3:
    // 0x8003B2B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003B2BC:
    // 0x8003B2BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003B2C0: jr          $ra
    // 0x8003B2C4: nop

    return;
    // 0x8003B2C4: nop

;}
