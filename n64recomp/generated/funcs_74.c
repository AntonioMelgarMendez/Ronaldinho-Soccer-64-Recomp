#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8027C3E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C3E0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027C3E4: lbu         $t6, -0x32B0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32B0);
    // 0x8027C3E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C3EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C3F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C3F4: bne         $t6, $zero, L_8027C408
    if (ctx->r14 != 0) {
        // 0x8027C3F8: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8027C408;
    }
    // 0x8027C3F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C3FC: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    // 0x8027C400: jal         0x80035A74
    // 0x8027C404: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_80035A74(rdram, ctx);
        goto after_0;
    // 0x8027C404: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_0:
L_8027C408:
    // 0x8027C408: jal         0x80035A04
    // 0x8027C40C: nop

    func_80035A04(rdram, ctx);
        goto after_1;
    // 0x8027C40C: nop

    after_1:
    // 0x8027C410: jal         0x8004974C
    // 0x8027C414: nop

    func_8004974C(rdram, ctx);
        goto after_2;
    // 0x8027C414: nop

    after_2:
    // 0x8027C418: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027C41C: bne         $v0, $at, L_8027C440
    if (ctx->r2 != ctx->r1) {
        // 0x8027C420: lui         $a0, 0x8040
        ctx->r4 = S32(0X8040 << 16);
            goto L_8027C440;
    }
    // 0x8027C420: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x8027C424: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x8027C428: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C42C: addiu       $a1, $a1, 0x2FE0
    ctx->r5 = ADD32(ctx->r5, 0X2FE0);
    // 0x8027C430: jal         0x80035490
    // 0x8027C434: addiu       $a0, $a0, -0x61BC
    ctx->r4 = ADD32(ctx->r4, -0X61BC);
    func_80035490(rdram, ctx);
        goto after_3;
    // 0x8027C434: addiu       $a0, $a0, -0x61BC
    ctx->r4 = ADD32(ctx->r4, -0X61BC);
    after_3:
    // 0x8027C438: b           L_8027C454
    // 0x8027C43C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027C454;
    // 0x8027C43C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027C440:
    // 0x8027C440: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C444: addiu       $a1, $a1, 0x2FD8
    ctx->r5 = ADD32(ctx->r5, 0X2FD8);
    // 0x8027C448: jal         0x80035490
    // 0x8027C44C: addiu       $a0, $a0, -0x61BC
    ctx->r4 = ADD32(ctx->r4, -0X61BC);
    func_80035490(rdram, ctx);
        goto after_4;
    // 0x8027C44C: addiu       $a0, $a0, -0x61BC
    ctx->r4 = ADD32(ctx->r4, -0X61BC);
    after_4:
    // 0x8027C450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027C454:
    // 0x8027C454: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C458: jr          $ra
    // 0x8027C45C: nop

    return;
    // 0x8027C45C: nop

;}
RECOMP_FUNC void func_8027C460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C460: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C464: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C468: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C46C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C470: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C474: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027C478: addiu       $a0, $a0, 0x5AD0
    ctx->r4 = ADD32(ctx->r4, 0X5AD0);
    // 0x8027C47C: jal         0x80035490
    // 0x8027C480: addiu       $a1, $a1, 0x2FE8
    ctx->r5 = ADD32(ctx->r5, 0X2FE8);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027C480: addiu       $a1, $a1, 0x2FE8
    ctx->r5 = ADD32(ctx->r5, 0X2FE8);
    after_0:
    // 0x8027C484: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C488: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C48C: jr          $ra
    // 0x8027C490: nop

    return;
    // 0x8027C490: nop

;}
RECOMP_FUNC void func_8027C494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C494: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8027C498: lbu         $t7, -0x32B0($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X32B0);
    // 0x8027C49C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C4A0: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8027C4A4: addiu       $t6, $t6, -0x3B6C
    ctx->r14 = ADD32(ctx->r14, -0X3B6C);
    // 0x8027C4A8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027C4AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C4B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C4B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C4B8: beq         $t7, $zero, L_8027C4DC
    if (ctx->r15 == 0) {
        // 0x8027C4BC: sw          $t6, 0x32D8($at)
        MEM_W(0X32D8, ctx->r1) = ctx->r14;
            goto L_8027C4DC;
    }
    // 0x8027C4BC: sw          $t6, 0x32D8($at)
    MEM_W(0X32D8, ctx->r1) = ctx->r14;
    // 0x8027C4C0: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027C4C4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C4C8: addiu       $a1, $a1, 0x3000
    ctx->r5 = ADD32(ctx->r5, 0X3000);
    // 0x8027C4CC: jal         0x80035490
    // 0x8027C4D0: addiu       $a0, $a0, 0xF00
    ctx->r4 = ADD32(ctx->r4, 0XF00);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027C4D0: addiu       $a0, $a0, 0xF00
    ctx->r4 = ADD32(ctx->r4, 0XF00);
    after_0:
    // 0x8027C4D4: b           L_8027C520
    // 0x8027C4D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027C520;
    // 0x8027C4D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027C4DC:
    // 0x8027C4DC: jal         0x8004974C
    // 0x8027C4E0: nop

    func_8004974C(rdram, ctx);
        goto after_1;
    // 0x8027C4E0: nop

    after_1:
    // 0x8027C4E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027C4E8: bne         $v0, $at, L_8027C50C
    if (ctx->r2 != ctx->r1) {
        // 0x8027C4EC: lui         $a0, 0x8027
        ctx->r4 = S32(0X8027 << 16);
            goto L_8027C50C;
    }
    // 0x8027C4EC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027C4F0: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027C4F4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C4F8: addiu       $a1, $a1, 0x2FF8
    ctx->r5 = ADD32(ctx->r5, 0X2FF8);
    // 0x8027C4FC: jal         0x80035490
    // 0x8027C500: addiu       $a0, $a0, 0xF00
    ctx->r4 = ADD32(ctx->r4, 0XF00);
    func_80035490(rdram, ctx);
        goto after_2;
    // 0x8027C500: addiu       $a0, $a0, 0xF00
    ctx->r4 = ADD32(ctx->r4, 0XF00);
    after_2:
    // 0x8027C504: b           L_8027C520
    // 0x8027C508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027C520;
    // 0x8027C508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027C50C:
    // 0x8027C50C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C510: addiu       $a1, $a1, 0x2FF0
    ctx->r5 = ADD32(ctx->r5, 0X2FF0);
    // 0x8027C514: jal         0x80035490
    // 0x8027C518: addiu       $a0, $a0, 0xF00
    ctx->r4 = ADD32(ctx->r4, 0XF00);
    func_80035490(rdram, ctx);
        goto after_3;
    // 0x8027C518: addiu       $a0, $a0, 0xF00
    ctx->r4 = ADD32(ctx->r4, 0XF00);
    after_3:
    // 0x8027C51C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027C520:
    // 0x8027C520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C524: jr          $ra
    // 0x8027C528: nop

    return;
    // 0x8027C528: nop

;}
RECOMP_FUNC void func_8027C52C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C52C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C530: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C534: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C538: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C53C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C540: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027C544: addiu       $a0, $a0, 0x158
    ctx->r4 = ADD32(ctx->r4, 0X158);
    // 0x8027C548: jal         0x80035490
    // 0x8027C54C: addiu       $a1, $a1, 0x3008
    ctx->r5 = ADD32(ctx->r5, 0X3008);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027C54C: addiu       $a1, $a1, 0x3008
    ctx->r5 = ADD32(ctx->r5, 0X3008);
    after_0:
    // 0x8027C550: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C554: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C558: jr          $ra
    // 0x8027C55C: nop

    return;
    // 0x8027C55C: nop

;}
RECOMP_FUNC void func_8027C560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C560: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C564: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C568: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C56C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C570: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C574: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x8027C578: addiu       $a0, $a0, -0x61BC
    ctx->r4 = ADD32(ctx->r4, -0X61BC);
    // 0x8027C57C: jal         0x80035490
    // 0x8027C580: addiu       $a1, $a1, 0x3010
    ctx->r5 = ADD32(ctx->r5, 0X3010);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027C580: addiu       $a1, $a1, 0x3010
    ctx->r5 = ADD32(ctx->r5, 0X3010);
    after_0:
    // 0x8027C584: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C588: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C58C: jr          $ra
    // 0x8027C590: nop

    return;
    // 0x8027C590: nop

;}
RECOMP_FUNC void func_8027C594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C594: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C598: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C59C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C5A0: jal         0x8003DD3C
    // 0x8027C5A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003DD3C(rdram, ctx);
        goto after_0;
    // 0x8027C5A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8027C5A8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027C5AC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C5B0: addiu       $a1, $a1, 0x3018
    ctx->r5 = ADD32(ctx->r5, 0X3018);
    // 0x8027C5B4: jal         0x80035490
    // 0x8027C5B8: addiu       $a0, $a0, 0x2B38
    ctx->r4 = ADD32(ctx->r4, 0X2B38);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8027C5B8: addiu       $a0, $a0, 0x2B38
    ctx->r4 = ADD32(ctx->r4, 0X2B38);
    after_1:
    // 0x8027C5BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C5C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C5C4: jr          $ra
    // 0x8027C5C8: nop

    return;
    // 0x8027C5C8: nop

;}
RECOMP_FUNC void func_8027C5CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C5CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C5D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C5D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C5D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C5DC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C5E0: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027C5E4: addiu       $a0, $a0, 0x19A4
    ctx->r4 = ADD32(ctx->r4, 0X19A4);
    // 0x8027C5E8: jal         0x80035490
    // 0x8027C5EC: addiu       $a1, $a1, 0x3028
    ctx->r5 = ADD32(ctx->r5, 0X3028);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027C5EC: addiu       $a1, $a1, 0x3028
    ctx->r5 = ADD32(ctx->r5, 0X3028);
    after_0:
    // 0x8027C5F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C5F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C5F8: jr          $ra
    // 0x8027C5FC: nop

    return;
    // 0x8027C5FC: nop

;}
RECOMP_FUNC void func_8027C600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C600: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C604: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C608: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C60C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C610: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C614: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x8027C618: addiu       $a0, $a0, -0x61BC
    ctx->r4 = ADD32(ctx->r4, -0X61BC);
    // 0x8027C61C: jal         0x80035490
    // 0x8027C620: addiu       $a1, $a1, 0x3028
    ctx->r5 = ADD32(ctx->r5, 0X3028);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027C620: addiu       $a1, $a1, 0x3028
    ctx->r5 = ADD32(ctx->r5, 0X3028);
    after_0:
    // 0x8027C624: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C628: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C62C: jr          $ra
    // 0x8027C630: nop

    return;
    // 0x8027C630: nop

;}
RECOMP_FUNC void func_8027C634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C634: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C638: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C63C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C640: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C644: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C648: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027C64C: addiu       $a0, $a0, 0x5AD0
    ctx->r4 = ADD32(ctx->r4, 0X5AD0);
    // 0x8027C650: jal         0x80035490
    // 0x8027C654: addiu       $a1, $a1, 0x3028
    ctx->r5 = ADD32(ctx->r5, 0X3028);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027C654: addiu       $a1, $a1, 0x3028
    ctx->r5 = ADD32(ctx->r5, 0X3028);
    after_0:
    // 0x8027C658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C65C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C660: jr          $ra
    // 0x8027C664: nop

    return;
    // 0x8027C664: nop

;}
RECOMP_FUNC void func_8027C668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C668: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C66C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C670: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C674: jal         0x8027EEF0
    // 0x8027C678: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8027EEF0(rdram, ctx);
        goto after_0;
    // 0x8027C678: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8027C67C: bne         $v0, $zero, L_8027C6AC
    if (ctx->r2 != 0) {
        // 0x8027C680: addiu       $t6, $zero, 0x6
        ctx->r14 = ADD32(0, 0X6);
            goto L_8027C6AC;
    }
    // 0x8027C680: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8027C684: jal         0x80015BC0
    // 0x8027C688: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x8027C688: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x8027C68C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8027C690: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027C694: sb          $zero, -0x3271($at)
    MEM_B(-0X3271, ctx->r1) = 0;
    // 0x8027C698: addiu       $a0, $a0, -0x2C64
    ctx->r4 = ADD32(ctx->r4, -0X2C64);
    // 0x8027C69C: jal         0x8002989C
    // 0x8027C6A0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_8002989C(rdram, ctx);
        goto after_2;
    // 0x8027C6A0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_2:
    // 0x8027C6A4: b           L_8027C6D0
    // 0x8027C6A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027C6D0;
    // 0x8027C6A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027C6AC:
    // 0x8027C6AC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8027C6B0: jal         0x80035A04
    // 0x8027C6B4: sb          $t6, 0x418($at)
    MEM_B(0X418, ctx->r1) = ctx->r14;
    func_80035A04(rdram, ctx);
        goto after_3;
    // 0x8027C6B4: sb          $t6, 0x418($at)
    MEM_B(0X418, ctx->r1) = ctx->r14;
    after_3:
    // 0x8027C6B8: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027C6BC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C6C0: addiu       $a1, $a1, 0x3030
    ctx->r5 = ADD32(ctx->r5, 0X3030);
    // 0x8027C6C4: jal         0x80035490
    // 0x8027C6C8: addiu       $a0, $a0, 0x678C
    ctx->r4 = ADD32(ctx->r4, 0X678C);
    func_80035490(rdram, ctx);
        goto after_4;
    // 0x8027C6C8: addiu       $a0, $a0, 0x678C
    ctx->r4 = ADD32(ctx->r4, 0X678C);
    after_4:
    // 0x8027C6CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027C6D0:
    // 0x8027C6D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C6D4: jr          $ra
    // 0x8027C6D8: nop

    return;
    // 0x8027C6D8: nop

;}
RECOMP_FUNC void func_8027C6DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C6DC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027C6E0: lbu         $t6, -0x32B0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32B0);
    // 0x8027C6E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C6E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C6EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C6F0: bne         $t6, $zero, L_8027C704
    if (ctx->r14 != 0) {
        // 0x8027C6F4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8027C704;
    }
    // 0x8027C6F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C6F8: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x8027C6FC: jal         0x80035A74
    // 0x8027C700: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_80035A74(rdram, ctx);
        goto after_0;
    // 0x8027C700: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_0:
L_8027C704:
    // 0x8027C704: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x8027C708: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C70C: addiu       $a1, $a1, 0x3038
    ctx->r5 = ADD32(ctx->r5, 0X3038);
    // 0x8027C710: jal         0x80035490
    // 0x8027C714: addiu       $a0, $a0, -0x49EC
    ctx->r4 = ADD32(ctx->r4, -0X49EC);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8027C714: addiu       $a0, $a0, -0x49EC
    ctx->r4 = ADD32(ctx->r4, -0X49EC);
    after_1:
    // 0x8027C718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C71C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C720: jr          $ra
    // 0x8027C724: nop

    return;
    // 0x8027C724: nop

;}
RECOMP_FUNC void func_8027C728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C728: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8027C72C: lbu         $t7, -0x32B0($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X32B0);
    // 0x8027C730: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C734: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8027C738: addiu       $t6, $t6, -0x38D8
    ctx->r14 = ADD32(ctx->r14, -0X38D8);
    // 0x8027C73C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027C740: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C744: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C748: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C74C: bne         $t7, $zero, L_8027C760
    if (ctx->r15 != 0) {
        // 0x8027C750: sw          $t6, 0x2F98($at)
        MEM_W(0X2F98, ctx->r1) = ctx->r14;
            goto L_8027C760;
    }
    // 0x8027C750: sw          $t6, 0x2F98($at)
    MEM_W(0X2F98, ctx->r1) = ctx->r14;
    // 0x8027C754: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    // 0x8027C758: jal         0x80035A74
    // 0x8027C75C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_80035A74(rdram, ctx);
        goto after_0;
    // 0x8027C75C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_0:
L_8027C760:
    // 0x8027C760: jal         0x80035A04
    // 0x8027C764: nop

    func_80035A04(rdram, ctx);
        goto after_1;
    // 0x8027C764: nop

    after_1:
    // 0x8027C768: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8027C76C: lbu         $t8, -0x32B0($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X32B0);
    // 0x8027C770: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027C774: beq         $t8, $zero, L_8027C798
    if (ctx->r24 == 0) {
        // 0x8027C778: addiu       $a0, $a0, 0xF00
        ctx->r4 = ADD32(ctx->r4, 0XF00);
            goto L_8027C798;
    }
    // 0x8027C778: addiu       $a0, $a0, 0xF00
    ctx->r4 = ADD32(ctx->r4, 0XF00);
    // 0x8027C77C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027C780: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C784: addiu       $a1, $a1, 0x304C
    ctx->r5 = ADD32(ctx->r5, 0X304C);
    // 0x8027C788: jal         0x80035490
    // 0x8027C78C: addiu       $a0, $a0, 0xF00
    ctx->r4 = ADD32(ctx->r4, 0XF00);
    func_80035490(rdram, ctx);
        goto after_2;
    // 0x8027C78C: addiu       $a0, $a0, 0xF00
    ctx->r4 = ADD32(ctx->r4, 0XF00);
    after_2:
    // 0x8027C790: b           L_8027C7A8
    // 0x8027C794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027C7A8;
    // 0x8027C794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027C798:
    // 0x8027C798: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C79C: jal         0x80035490
    // 0x8027C7A0: addiu       $a1, $a1, 0x3044
    ctx->r5 = ADD32(ctx->r5, 0X3044);
    func_80035490(rdram, ctx);
        goto after_3;
    // 0x8027C7A0: addiu       $a1, $a1, 0x3044
    ctx->r5 = ADD32(ctx->r5, 0X3044);
    after_3:
    // 0x8027C7A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027C7A8:
    // 0x8027C7A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C7AC: jr          $ra
    // 0x8027C7B0: nop

    return;
    // 0x8027C7B0: nop

;}
RECOMP_FUNC void func_8027C7B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C7B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C7B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C7BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C7C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C7C4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C7C8: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027C7CC: addiu       $a0, $a0, 0x158
    ctx->r4 = ADD32(ctx->r4, 0X158);
    // 0x8027C7D0: jal         0x80035490
    // 0x8027C7D4: addiu       $a1, $a1, 0x3054
    ctx->r5 = ADD32(ctx->r5, 0X3054);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027C7D4: addiu       $a1, $a1, 0x3054
    ctx->r5 = ADD32(ctx->r5, 0X3054);
    after_0:
    // 0x8027C7D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C7DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C7E0: jr          $ra
    // 0x8027C7E4: nop

    return;
    // 0x8027C7E4: nop

;}
RECOMP_FUNC void func_8027C7E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C7E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C7EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C7F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C7F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C7F8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C7FC: lui         $a0, 0x8040
    ctx->r4 = S32(0X8040 << 16);
    // 0x8027C800: addiu       $a0, $a0, -0x61BC
    ctx->r4 = ADD32(ctx->r4, -0X61BC);
    // 0x8027C804: jal         0x80035490
    // 0x8027C808: addiu       $a1, $a1, 0x305C
    ctx->r5 = ADD32(ctx->r5, 0X305C);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027C808: addiu       $a1, $a1, 0x305C
    ctx->r5 = ADD32(ctx->r5, 0X305C);
    after_0:
    // 0x8027C80C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C810: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C814: jr          $ra
    // 0x8027C818: nop

    return;
    // 0x8027C818: nop

;}
RECOMP_FUNC void func_8027C81C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C81C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C820: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C824: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C828: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C82C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C830: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027C834: addiu       $a0, $a0, 0x5AD0
    ctx->r4 = ADD32(ctx->r4, 0X5AD0);
    // 0x8027C838: jal         0x80035490
    // 0x8027C83C: addiu       $a1, $a1, 0x3064
    ctx->r5 = ADD32(ctx->r5, 0X3064);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027C83C: addiu       $a1, $a1, 0x3064
    ctx->r5 = ADD32(ctx->r5, 0X3064);
    after_0:
    // 0x8027C840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C848: jr          $ra
    // 0x8027C84C: nop

    return;
    // 0x8027C84C: nop

;}
RECOMP_FUNC void func_8027C850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C858: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C85C: jal         0x8027EEF0
    // 0x8027C860: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8027EEF0(rdram, ctx);
        goto after_0;
    // 0x8027C860: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8027C864: bne         $v0, $zero, L_8027C894
    if (ctx->r2 != 0) {
        // 0x8027C868: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_8027C894;
    }
    // 0x8027C868: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8027C86C: jal         0x80015BC0
    // 0x8027C870: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x8027C870: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x8027C874: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8027C878: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027C87C: sb          $zero, -0x3271($at)
    MEM_B(-0X3271, ctx->r1) = 0;
    // 0x8027C880: addiu       $a0, $a0, -0x2C64
    ctx->r4 = ADD32(ctx->r4, -0X2C64);
    // 0x8027C884: jal         0x8002989C
    // 0x8027C888: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_8002989C(rdram, ctx);
        goto after_2;
    // 0x8027C888: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_2:
    // 0x8027C88C: b           L_8027C8C0
    // 0x8027C890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027C8C0;
    // 0x8027C890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027C894:
    // 0x8027C894: sb          $zero, -0x3110($at)
    MEM_B(-0X3110, ctx->r1) = 0;
    // 0x8027C898: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8027C89C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8027C8A0: jal         0x80035A04
    // 0x8027C8A4: sb          $t6, 0x418($at)
    MEM_B(0X418, ctx->r1) = ctx->r14;
    func_80035A04(rdram, ctx);
        goto after_3;
    // 0x8027C8A4: sb          $t6, 0x418($at)
    MEM_B(0X418, ctx->r1) = ctx->r14;
    after_3:
    // 0x8027C8A8: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027C8AC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C8B0: addiu       $a1, $a1, 0x306C
    ctx->r5 = ADD32(ctx->r5, 0X306C);
    // 0x8027C8B4: jal         0x80035490
    // 0x8027C8B8: addiu       $a0, $a0, 0x67C4
    ctx->r4 = ADD32(ctx->r4, 0X67C4);
    func_80035490(rdram, ctx);
        goto after_4;
    // 0x8027C8B8: addiu       $a0, $a0, 0x67C4
    ctx->r4 = ADD32(ctx->r4, 0X67C4);
    after_4:
    // 0x8027C8BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027C8C0:
    // 0x8027C8C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C8C4: jr          $ra
    // 0x8027C8C8: nop

    return;
    // 0x8027C8C8: nop

;}
RECOMP_FUNC void func_8027C8CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C8CC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027C8D0: lbu         $t6, -0x32B0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32B0);
    // 0x8027C8D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C8D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C8DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C8E0: beq         $t6, $zero, L_8027C8FC
    if (ctx->r14 == 0) {
        // 0x8027C8E4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8027C8FC;
    }
    // 0x8027C8E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C8E8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027C8EC: jal         0x800297B4
    // 0x8027C8F0: addiu       $a0, $a0, -0x36D4
    ctx->r4 = ADD32(ctx->r4, -0X36D4);
    func_800297B4(rdram, ctx);
        goto after_0;
    // 0x8027C8F0: addiu       $a0, $a0, -0x36D4
    ctx->r4 = ADD32(ctx->r4, -0X36D4);
    after_0:
    // 0x8027C8F4: b           L_8027C920
    // 0x8027C8F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027C920;
    // 0x8027C8F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027C8FC:
    // 0x8027C8FC: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x8027C900: jal         0x80035A74
    // 0x8027C904: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_80035A74(rdram, ctx);
        goto after_1;
    // 0x8027C904: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_1:
    // 0x8027C908: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x8027C90C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C910: addiu       $a1, $a1, 0x3074
    ctx->r5 = ADD32(ctx->r5, 0X3074);
    // 0x8027C914: jal         0x80035490
    // 0x8027C918: addiu       $a0, $a0, -0x49EC
    ctx->r4 = ADD32(ctx->r4, -0X49EC);
    func_80035490(rdram, ctx);
        goto after_2;
    // 0x8027C918: addiu       $a0, $a0, -0x49EC
    ctx->r4 = ADD32(ctx->r4, -0X49EC);
    after_2:
    // 0x8027C91C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027C920:
    // 0x8027C920: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C924: jr          $ra
    // 0x8027C928: nop

    return;
    // 0x8027C928: nop

;}
RECOMP_FUNC void func_8027C92C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C92C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8027C930: lbu         $t7, -0x32B0($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X32B0);
    // 0x8027C934: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C938: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x8027C93C: addiu       $t6, $t6, -0x36D4
    ctx->r14 = ADD32(ctx->r14, -0X36D4);
    // 0x8027C940: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8027C944: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C948: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C94C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C950: beq         $t7, $zero, L_8027C974
    if (ctx->r15 == 0) {
        // 0x8027C954: sw          $t6, 0x2F98($at)
        MEM_W(0X2F98, ctx->r1) = ctx->r14;
            goto L_8027C974;
    }
    // 0x8027C954: sw          $t6, 0x2F98($at)
    MEM_W(0X2F98, ctx->r1) = ctx->r14;
    // 0x8027C958: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027C95C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C960: addiu       $a1, $a1, 0x3088
    ctx->r5 = ADD32(ctx->r5, 0X3088);
    // 0x8027C964: jal         0x80035490
    // 0x8027C968: addiu       $a0, $a0, -0x5B4
    ctx->r4 = ADD32(ctx->r4, -0X5B4);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027C968: addiu       $a0, $a0, -0x5B4
    ctx->r4 = ADD32(ctx->r4, -0X5B4);
    after_0:
    // 0x8027C96C: b           L_8027C9A0
    // 0x8027C970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027C9A0;
    // 0x8027C970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027C974:
    // 0x8027C974: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    // 0x8027C978: jal         0x80035A74
    // 0x8027C97C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_80035A74(rdram, ctx);
        goto after_1;
    // 0x8027C97C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_1:
    // 0x8027C980: jal         0x80035A04
    // 0x8027C984: nop

    func_80035A04(rdram, ctx);
        goto after_2;
    // 0x8027C984: nop

    after_2:
    // 0x8027C988: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027C98C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C990: addiu       $a1, $a1, 0x3080
    ctx->r5 = ADD32(ctx->r5, 0X3080);
    // 0x8027C994: jal         0x80035490
    // 0x8027C998: addiu       $a0, $a0, -0x5B4
    ctx->r4 = ADD32(ctx->r4, -0X5B4);
    func_80035490(rdram, ctx);
        goto after_3;
    // 0x8027C998: addiu       $a0, $a0, -0x5B4
    ctx->r4 = ADD32(ctx->r4, -0X5B4);
    after_3:
    // 0x8027C99C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027C9A0:
    // 0x8027C9A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C9A4: jr          $ra
    // 0x8027C9A8: nop

    return;
    // 0x8027C9A8: nop

;}
RECOMP_FUNC void func_8027C9AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C9AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C9B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C9B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C9B8: jal         0x80280804
    // 0x8027C9BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80280804(rdram, ctx);
        goto after_0;
    // 0x8027C9BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8027C9C0: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8027C9C4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C9C8: addiu       $a1, $a1, 0x2F98
    ctx->r5 = ADD32(ctx->r5, 0X2F98);
    // 0x8027C9CC: jal         0x80035490
    // 0x8027C9D0: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8027C9D0: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    after_1:
    // 0x8027C9D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027C9D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027C9DC: jr          $ra
    // 0x8027C9E0: nop

    return;
    // 0x8027C9E0: nop

;}
RECOMP_FUNC void func_8027C9E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027C9E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027C9E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027C9EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027C9F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027C9F4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027C9F8: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8027C9FC: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    // 0x8027CA00: jal         0x80035490
    // 0x8027CA04: addiu       $a1, $a1, 0x2F98
    ctx->r5 = ADD32(ctx->r5, 0X2F98);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027CA04: addiu       $a1, $a1, 0x2F98
    ctx->r5 = ADD32(ctx->r5, 0X2F98);
    after_0:
    // 0x8027CA08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027CA0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CA10: jr          $ra
    // 0x8027CA14: nop

    return;
    // 0x8027CA14: nop

;}
RECOMP_FUNC void func_8027CA18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CA18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CA1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CA20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CA24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CA28: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CA2C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8027CA30: addiu       $a0, $a0, -0xF50
    ctx->r4 = ADD32(ctx->r4, -0XF50);
    // 0x8027CA34: jal         0x80035490
    // 0x8027CA38: addiu       $a1, $a1, 0x3090
    ctx->r5 = ADD32(ctx->r5, 0X3090);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027CA38: addiu       $a1, $a1, 0x3090
    ctx->r5 = ADD32(ctx->r5, 0X3090);
    after_0:
    // 0x8027CA3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027CA40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CA44: jr          $ra
    // 0x8027CA48: nop

    return;
    // 0x8027CA48: nop

;}
RECOMP_FUNC void func_8027CA4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CA4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CA50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CA54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CA58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CA5C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CA60: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x8027CA64: addiu       $a0, $a0, 0x34F0
    ctx->r4 = ADD32(ctx->r4, 0X34F0);
    // 0x8027CA68: jal         0x80035490
    // 0x8027CA6C: addiu       $a1, $a1, 0x3098
    ctx->r5 = ADD32(ctx->r5, 0X3098);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027CA6C: addiu       $a1, $a1, 0x3098
    ctx->r5 = ADD32(ctx->r5, 0X3098);
    after_0:
    // 0x8027CA70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027CA74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CA78: jr          $ra
    // 0x8027CA7C: nop

    return;
    // 0x8027CA7C: nop

;}
RECOMP_FUNC void func_8027CA80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CA80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CA84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CA88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CA8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CA90: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CA94: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027CA98: addiu       $a0, $a0, 0x5230
    ctx->r4 = ADD32(ctx->r4, 0X5230);
    // 0x8027CA9C: jal         0x80035490
    // 0x8027CAA0: addiu       $a1, $a1, 0x3098
    ctx->r5 = ADD32(ctx->r5, 0X3098);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027CAA0: addiu       $a1, $a1, 0x3098
    ctx->r5 = ADD32(ctx->r5, 0X3098);
    after_0:
    // 0x8027CAA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027CAA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CAAC: jr          $ra
    // 0x8027CAB0: nop

    return;
    // 0x8027CAB0: nop

;}
RECOMP_FUNC void func_8027CAB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CAB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CAB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CABC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CAC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CAC4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CAC8: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8027CACC: addiu       $a0, $a0, 0x4800
    ctx->r4 = ADD32(ctx->r4, 0X4800);
    // 0x8027CAD0: jal         0x80035490
    // 0x8027CAD4: addiu       $a1, $a1, 0x3098
    ctx->r5 = ADD32(ctx->r5, 0X3098);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027CAD4: addiu       $a1, $a1, 0x3098
    ctx->r5 = ADD32(ctx->r5, 0X3098);
    after_0:
    // 0x8027CAD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027CADC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CAE0: jr          $ra
    // 0x8027CAE4: nop

    return;
    // 0x8027CAE4: nop

;}
RECOMP_FUNC void func_8027CAE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CAE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CAEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CAF0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CAF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CAF8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CAFC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027CB00: addiu       $a0, $a0, -0x5F10
    ctx->r4 = ADD32(ctx->r4, -0X5F10);
    // 0x8027CB04: jal         0x80035490
    // 0x8027CB08: addiu       $a1, $a1, 0x3098
    ctx->r5 = ADD32(ctx->r5, 0X3098);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027CB08: addiu       $a1, $a1, 0x3098
    ctx->r5 = ADD32(ctx->r5, 0X3098);
    after_0:
    // 0x8027CB0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027CB10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CB14: jr          $ra
    // 0x8027CB18: nop

    return;
    // 0x8027CB18: nop

;}
RECOMP_FUNC void func_8027CB1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CB1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CB20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CB24: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CB28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CB2C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CB30: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027CB34: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x8027CB38: jal         0x80035490
    // 0x8027CB3C: addiu       $a1, $a1, 0x3098
    ctx->r5 = ADD32(ctx->r5, 0X3098);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027CB3C: addiu       $a1, $a1, 0x3098
    ctx->r5 = ADD32(ctx->r5, 0X3098);
    after_0:
    // 0x8027CB40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027CB44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CB48: jr          $ra
    // 0x8027CB4C: nop

    return;
    // 0x8027CB4C: nop

;}
RECOMP_FUNC void func_8027CB50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CB50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CB54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CB58: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CB5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CB60: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CB64: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027CB68: addiu       $a0, $a0, 0x3B80
    ctx->r4 = ADD32(ctx->r4, 0X3B80);
    // 0x8027CB6C: jal         0x80035490
    // 0x8027CB70: addiu       $a1, $a1, 0x3098
    ctx->r5 = ADD32(ctx->r5, 0X3098);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027CB70: addiu       $a1, $a1, 0x3098
    ctx->r5 = ADD32(ctx->r5, 0X3098);
    after_0:
    // 0x8027CB74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027CB78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CB7C: jr          $ra
    // 0x8027CB80: nop

    return;
    // 0x8027CB80: nop

;}
RECOMP_FUNC void func_8027CB84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CB84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CB88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CB8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CB90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CB94: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CB98: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027CB9C: addiu       $a0, $a0, 0x4964
    ctx->r4 = ADD32(ctx->r4, 0X4964);
    // 0x8027CBA0: jal         0x80035490
    // 0x8027CBA4: addiu       $a1, $a1, 0x3098
    ctx->r5 = ADD32(ctx->r5, 0X3098);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027CBA4: addiu       $a1, $a1, 0x3098
    ctx->r5 = ADD32(ctx->r5, 0X3098);
    after_0:
    // 0x8027CBA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027CBAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CBB0: jr          $ra
    // 0x8027CBB4: nop

    return;
    // 0x8027CBB4: nop

;}
RECOMP_FUNC void func_8027CBB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CBB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CBBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CBC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CBC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CBC8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CBCC: lui         $a0, 0x8007
    ctx->r4 = S32(0X8007 << 16);
    // 0x8027CBD0: addiu       $a0, $a0, 0x2CE0
    ctx->r4 = ADD32(ctx->r4, 0X2CE0);
    // 0x8027CBD4: jal         0x80035490
    // 0x8027CBD8: addiu       $a1, $a1, 0x30A0
    ctx->r5 = ADD32(ctx->r5, 0X30A0);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027CBD8: addiu       $a1, $a1, 0x30A0
    ctx->r5 = ADD32(ctx->r5, 0X30A0);
    after_0:
    // 0x8027CBDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027CBE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CBE4: jr          $ra
    // 0x8027CBE8: nop

    return;
    // 0x8027CBE8: nop

;}
RECOMP_FUNC void func_8027CBEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CBEC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027CBF0: lbu         $t6, -0x32B0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32B0);
    // 0x8027CBF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CBF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CBFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CC00: beq         $t6, $zero, L_8027CC24
    if (ctx->r14 == 0) {
        // 0x8027CC04: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8027CC24;
    }
    // 0x8027CC04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CC08: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027CC0C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CC10: addiu       $a1, $a1, 0x30B0
    ctx->r5 = ADD32(ctx->r5, 0X30B0);
    // 0x8027CC14: jal         0x80035490
    // 0x8027CC18: addiu       $a0, $a0, -0x5B4
    ctx->r4 = ADD32(ctx->r4, -0X5B4);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027CC18: addiu       $a0, $a0, -0x5B4
    ctx->r4 = ADD32(ctx->r4, -0X5B4);
    after_0:
    // 0x8027CC1C: b           L_8027CC3C
    // 0x8027CC20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027CC3C;
    // 0x8027CC20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027CC24:
    // 0x8027CC24: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027CC28: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CC2C: addiu       $a1, $a1, 0x30A8
    ctx->r5 = ADD32(ctx->r5, 0X30A8);
    // 0x8027CC30: jal         0x80035490
    // 0x8027CC34: addiu       $a0, $a0, -0x5EC
    ctx->r4 = ADD32(ctx->r4, -0X5EC);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8027CC34: addiu       $a0, $a0, -0x5EC
    ctx->r4 = ADD32(ctx->r4, -0X5EC);
    after_1:
    // 0x8027CC38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027CC3C:
    // 0x8027CC3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CC40: jr          $ra
    // 0x8027CC44: nop

    return;
    // 0x8027CC44: nop

;}
RECOMP_FUNC void func_8027CC48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CC48: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027CC4C: lbu         $t6, -0x32B0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32B0);
    // 0x8027CC50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CC54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CC58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CC5C: beq         $t6, $zero, L_8027CC78
    if (ctx->r14 == 0) {
        // 0x8027CC60: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8027CC78;
    }
    // 0x8027CC60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CC64: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027CC68: jal         0x800297B4
    // 0x8027CC6C: addiu       $a0, $a0, -0x327C
    ctx->r4 = ADD32(ctx->r4, -0X327C);
    func_800297B4(rdram, ctx);
        goto after_0;
    // 0x8027CC6C: addiu       $a0, $a0, -0x327C
    ctx->r4 = ADD32(ctx->r4, -0X327C);
    after_0:
    // 0x8027CC70: b           L_8027CCBC
    // 0x8027CC74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027CCBC;
    // 0x8027CC74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027CC78:
    // 0x8027CC78: jal         0x8027EDD0
    // 0x8027CC7C: nop

    func_8027EDD0(rdram, ctx);
        goto after_1;
    // 0x8027CC7C: nop

    after_1:
    // 0x8027CC80: bne         $v0, $zero, L_8027CC9C
    if (ctx->r2 != 0) {
        // 0x8027CC84: addiu       $a0, $zero, 0x81
        ctx->r4 = ADD32(0, 0X81);
            goto L_8027CC9C;
    }
    // 0x8027CC84: addiu       $a0, $zero, 0x81
    ctx->r4 = ADD32(0, 0X81);
    // 0x8027CC88: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027CC8C: jal         0x800297B4
    // 0x8027CC90: addiu       $a0, $a0, -0x2C64
    ctx->r4 = ADD32(ctx->r4, -0X2C64);
    func_800297B4(rdram, ctx);
        goto after_2;
    // 0x8027CC90: addiu       $a0, $a0, -0x2C64
    ctx->r4 = ADD32(ctx->r4, -0X2C64);
    after_2:
    // 0x8027CC94: b           L_8027CCBC
    // 0x8027CC98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027CCBC;
    // 0x8027CC98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027CC9C:
    // 0x8027CC9C: jal         0x80035A74
    // 0x8027CCA0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_80035A74(rdram, ctx);
        goto after_3;
    // 0x8027CCA0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_3:
    // 0x8027CCA4: lui         $a0, 0x803C
    ctx->r4 = S32(0X803C << 16);
    // 0x8027CCA8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CCAC: addiu       $a1, $a1, 0x30B8
    ctx->r5 = ADD32(ctx->r5, 0X30B8);
    // 0x8027CCB0: jal         0x80035490
    // 0x8027CCB4: addiu       $a0, $a0, -0x49EC
    ctx->r4 = ADD32(ctx->r4, -0X49EC);
    func_80035490(rdram, ctx);
        goto after_4;
    // 0x8027CCB4: addiu       $a0, $a0, -0x49EC
    ctx->r4 = ADD32(ctx->r4, -0X49EC);
    after_4:
    // 0x8027CCB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027CCBC:
    // 0x8027CCBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CCC0: jr          $ra
    // 0x8027CCC4: nop

    return;
    // 0x8027CCC4: nop

;}
RECOMP_FUNC void func_8027CCC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CCC8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027CCCC: lbu         $t6, -0x32B0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32B0);
    // 0x8027CCD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CCD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CCD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CCDC: bne         $t6, $zero, L_8027CCF0
    if (ctx->r14 != 0) {
        // 0x8027CCE0: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8027CCF0;
    }
    // 0x8027CCE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CCE4: addiu       $a0, $zero, 0x41
    ctx->r4 = ADD32(0, 0X41);
    // 0x8027CCE8: jal         0x80035A74
    // 0x8027CCEC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_80035A74(rdram, ctx);
        goto after_0;
    // 0x8027CCEC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_0:
L_8027CCF0:
    // 0x8027CCF0: jal         0x80035A04
    // 0x8027CCF4: nop

    func_80035A04(rdram, ctx);
        goto after_1;
    // 0x8027CCF4: nop

    after_1:
    // 0x8027CCF8: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8027CCFC: lb          $t7, 0x418($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X418);
    // 0x8027CD00: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8027CD04: bne         $t7, $at, L_8027CD28
    if (ctx->r15 != ctx->r1) {
        // 0x8027CD08: lui         $a0, 0x803A
        ctx->r4 = S32(0X803A << 16);
            goto L_8027CD28;
    }
    // 0x8027CD08: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027CD0C: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027CD10: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CD14: addiu       $a1, $a1, 0x30CC
    ctx->r5 = ADD32(ctx->r5, 0X30CC);
    // 0x8027CD18: jal         0x80035490
    // 0x8027CD1C: addiu       $a0, $a0, 0x5AD0
    ctx->r4 = ADD32(ctx->r4, 0X5AD0);
    func_80035490(rdram, ctx);
        goto after_2;
    // 0x8027CD1C: addiu       $a0, $a0, 0x5AD0
    ctx->r4 = ADD32(ctx->r4, 0X5AD0);
    after_2:
    // 0x8027CD20: b           L_8027CD3C
    // 0x8027CD24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027CD3C;
    // 0x8027CD24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027CD28:
    // 0x8027CD28: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CD2C: addiu       $a1, $a1, 0x30C4
    ctx->r5 = ADD32(ctx->r5, 0X30C4);
    // 0x8027CD30: jal         0x80035490
    // 0x8027CD34: addiu       $a0, $a0, 0x5AD0
    ctx->r4 = ADD32(ctx->r4, 0X5AD0);
    func_80035490(rdram, ctx);
        goto after_3;
    // 0x8027CD34: addiu       $a0, $a0, 0x5AD0
    ctx->r4 = ADD32(ctx->r4, 0X5AD0);
    after_3:
    // 0x8027CD38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027CD3C:
    // 0x8027CD3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CD40: jr          $ra
    // 0x8027CD44: nop

    return;
    // 0x8027CD44: nop

;}
RECOMP_FUNC void func_8027CD48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CD48: jr          $ra
    // 0x8027CD4C: nop

    return;
    // 0x8027CD4C: nop

;}
RECOMP_FUNC void func_8027CD50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CD50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CD54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CD58: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CD5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CD60: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CD64: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027CD68: addiu       $a0, $a0, 0x67FC
    ctx->r4 = ADD32(ctx->r4, 0X67FC);
    // 0x8027CD6C: jal         0x80035490
    // 0x8027CD70: addiu       $a1, $a1, 0x30DC
    ctx->r5 = ADD32(ctx->r5, 0X30DC);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027CD70: addiu       $a1, $a1, 0x30DC
    ctx->r5 = ADD32(ctx->r5, 0X30DC);
    after_0:
    // 0x8027CD74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027CD78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CD7C: jr          $ra
    // 0x8027CD80: nop

    return;
    // 0x8027CD80: nop

;}
RECOMP_FUNC void func_8027CD84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CD84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CD88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CD8C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CD90: jal         0x80280804
    // 0x8027CD94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80280804(rdram, ctx);
        goto after_0;
    // 0x8027CD94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8027CD98: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027CD9C: jal         0x800297B4
    // 0x8027CDA0: addiu       $a0, $a0, -0x324C
    ctx->r4 = ADD32(ctx->r4, -0X324C);
    func_800297B4(rdram, ctx);
        goto after_1;
    // 0x8027CDA0: addiu       $a0, $a0, -0x324C
    ctx->r4 = ADD32(ctx->r4, -0X324C);
    after_1:
    // 0x8027CDA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027CDA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CDAC: jr          $ra
    // 0x8027CDB0: nop

    return;
    // 0x8027CDB0: nop

;}
RECOMP_FUNC void func_8027CDB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CDB4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027CDB8: lbu         $t6, -0x32B0($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32B0);
    // 0x8027CDBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CDC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CDC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CDC8: beq         $t6, $zero, L_8027CDE8
    if (ctx->r14 == 0) {
        // 0x8027CDCC: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8027CDE8;
    }
    // 0x8027CDCC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CDD0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CDD4: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x8027CDD8: addiu       $a1, $a1, 0x30E4
    ctx->r5 = ADD32(ctx->r5, 0X30E4);
    // 0x8027CDDC: addiu       $t7, $t7, -0x3414
    ctx->r15 = ADD32(ctx->r15, -0X3414);
    // 0x8027CDE0: b           L_8027CDFC
    // 0x8027CDE4: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
        goto L_8027CDFC;
    // 0x8027CDE4: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
L_8027CDE8:
    // 0x8027CDE8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CDEC: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x8027CDF0: addiu       $a1, $a1, 0x30E4
    ctx->r5 = ADD32(ctx->r5, 0X30E4);
    // 0x8027CDF4: addiu       $t8, $t8, -0x3338
    ctx->r24 = ADD32(ctx->r24, -0X3338);
    // 0x8027CDF8: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
L_8027CDFC:
    // 0x8027CDFC: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8027CE00: jal         0x80035490
    // 0x8027CE04: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027CE04: addiu       $a0, $a0, -0x7880
    ctx->r4 = ADD32(ctx->r4, -0X7880);
    after_0:
    // 0x8027CE08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027CE0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CE10: jr          $ra
    // 0x8027CE14: nop

    return;
    // 0x8027CE14: nop

;}
RECOMP_FUNC void func_8027CE18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CE18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CE1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CE20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CE24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CE28: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CE2C: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x8027CE30: addiu       $a0, $a0, -0xF50
    ctx->r4 = ADD32(ctx->r4, -0XF50);
    // 0x8027CE34: jal         0x80035490
    // 0x8027CE38: addiu       $a1, $a1, 0x310C
    ctx->r5 = ADD32(ctx->r5, 0X310C);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027CE38: addiu       $a1, $a1, 0x310C
    ctx->r5 = ADD32(ctx->r5, 0X310C);
    after_0:
    // 0x8027CE3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027CE40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CE44: jr          $ra
    // 0x8027CE48: nop

    return;
    // 0x8027CE48: nop

;}
RECOMP_FUNC void func_8027CE4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CE4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CE50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CE54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CE58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CE5C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CE60: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027CE64: addiu       $a0, $a0, 0x2B38
    ctx->r4 = ADD32(ctx->r4, 0X2B38);
    // 0x8027CE68: jal         0x80035490
    // 0x8027CE6C: addiu       $a1, $a1, 0x3114
    ctx->r5 = ADD32(ctx->r5, 0X3114);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027CE6C: addiu       $a1, $a1, 0x3114
    ctx->r5 = ADD32(ctx->r5, 0X3114);
    after_0:
    // 0x8027CE70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027CE74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CE78: jr          $ra
    // 0x8027CE7C: nop

    return;
    // 0x8027CE7C: nop

;}
RECOMP_FUNC void func_8027CE80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CE80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CE84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CE88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CE8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CE90: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CE94: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027CE98: addiu       $a0, $a0, 0x19A4
    ctx->r4 = ADD32(ctx->r4, 0X19A4);
    // 0x8027CE9C: jal         0x80035490
    // 0x8027CEA0: addiu       $a1, $a1, 0x3124
    ctx->r5 = ADD32(ctx->r5, 0X3124);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027CEA0: addiu       $a1, $a1, 0x3124
    ctx->r5 = ADD32(ctx->r5, 0X3124);
    after_0:
    // 0x8027CEA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027CEA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CEAC: jr          $ra
    // 0x8027CEB0: nop

    return;
    // 0x8027CEB0: nop

;}
RECOMP_FUNC void func_8027CEB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CEB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CEB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CEBC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CEC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CEC4: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CEC8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027CECC: addiu       $a0, $a0, -0x5B4
    ctx->r4 = ADD32(ctx->r4, -0X5B4);
    // 0x8027CED0: jal         0x80035490
    // 0x8027CED4: addiu       $a1, $a1, 0x3124
    ctx->r5 = ADD32(ctx->r5, 0X3124);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027CED4: addiu       $a1, $a1, 0x3124
    ctx->r5 = ADD32(ctx->r5, 0X3124);
    after_0:
    // 0x8027CED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027CEDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CEE0: jr          $ra
    // 0x8027CEE4: nop

    return;
    // 0x8027CEE4: nop

;}
RECOMP_FUNC void func_8027CEE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CEE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CEEC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CEF0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CEF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CEF8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CEFC: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027CF00: addiu       $a0, $a0, 0x5AD0
    ctx->r4 = ADD32(ctx->r4, 0X5AD0);
    // 0x8027CF04: jal         0x80035490
    // 0x8027CF08: addiu       $a1, $a1, 0x3124
    ctx->r5 = ADD32(ctx->r5, 0X3124);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027CF08: addiu       $a1, $a1, 0x3124
    ctx->r5 = ADD32(ctx->r5, 0X3124);
    after_0:
    // 0x8027CF0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027CF10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CF14: jr          $ra
    // 0x8027CF18: nop

    return;
    // 0x8027CF18: nop

;}
RECOMP_FUNC void func_8027CF1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CF1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CF20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CF24: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CF28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CF2C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CF30: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x8027CF34: addiu       $a0, $a0, 0x34F0
    ctx->r4 = ADD32(ctx->r4, 0X34F0);
    // 0x8027CF38: jal         0x80035490
    // 0x8027CF3C: addiu       $a1, $a1, 0x312C
    ctx->r5 = ADD32(ctx->r5, 0X312C);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027CF3C: addiu       $a1, $a1, 0x312C
    ctx->r5 = ADD32(ctx->r5, 0X312C);
    after_0:
    // 0x8027CF40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027CF44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CF48: jr          $ra
    // 0x8027CF4C: nop

    return;
    // 0x8027CF4C: nop

;}
RECOMP_FUNC void func_8027CF50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CF50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CF54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CF58: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CF5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CF60: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CF64: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027CF68: addiu       $a0, $a0, 0x5230
    ctx->r4 = ADD32(ctx->r4, 0X5230);
    // 0x8027CF6C: jal         0x80035490
    // 0x8027CF70: addiu       $a1, $a1, 0x312C
    ctx->r5 = ADD32(ctx->r5, 0X312C);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027CF70: addiu       $a1, $a1, 0x312C
    ctx->r5 = ADD32(ctx->r5, 0X312C);
    after_0:
    // 0x8027CF74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027CF78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CF7C: jr          $ra
    // 0x8027CF80: nop

    return;
    // 0x8027CF80: nop

;}
RECOMP_FUNC void func_8027CF84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CF84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CF88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CF8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CF90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CF94: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CF98: lui         $a0, 0x8026
    ctx->r4 = S32(0X8026 << 16);
    // 0x8027CF9C: addiu       $a0, $a0, 0x4800
    ctx->r4 = ADD32(ctx->r4, 0X4800);
    // 0x8027CFA0: jal         0x80035490
    // 0x8027CFA4: addiu       $a1, $a1, 0x312C
    ctx->r5 = ADD32(ctx->r5, 0X312C);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027CFA4: addiu       $a1, $a1, 0x312C
    ctx->r5 = ADD32(ctx->r5, 0X312C);
    after_0:
    // 0x8027CFA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027CFAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CFB0: jr          $ra
    // 0x8027CFB4: nop

    return;
    // 0x8027CFB4: nop

;}
RECOMP_FUNC void func_8027CFB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CFB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CFBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CFC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CFC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CFC8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027CFCC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027CFD0: addiu       $a0, $a0, -0x5F10
    ctx->r4 = ADD32(ctx->r4, -0X5F10);
    // 0x8027CFD4: jal         0x80035490
    // 0x8027CFD8: addiu       $a1, $a1, 0x312C
    ctx->r5 = ADD32(ctx->r5, 0X312C);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027CFD8: addiu       $a1, $a1, 0x312C
    ctx->r5 = ADD32(ctx->r5, 0X312C);
    after_0:
    // 0x8027CFDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027CFE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027CFE4: jr          $ra
    // 0x8027CFE8: nop

    return;
    // 0x8027CFE8: nop

;}
RECOMP_FUNC void func_8027CFEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027CFEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027CFF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027CFF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027CFF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027CFFC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D000: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027D004: addiu       $a0, $a0, 0x1EF0
    ctx->r4 = ADD32(ctx->r4, 0X1EF0);
    // 0x8027D008: jal         0x80035490
    // 0x8027D00C: addiu       $a1, $a1, 0x312C
    ctx->r5 = ADD32(ctx->r5, 0X312C);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D00C: addiu       $a1, $a1, 0x312C
    ctx->r5 = ADD32(ctx->r5, 0X312C);
    after_0:
    // 0x8027D010: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D014: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D018: jr          $ra
    // 0x8027D01C: nop

    return;
    // 0x8027D01C: nop

;}
RECOMP_FUNC void func_8027D020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D020: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D024: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D028: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D02C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D030: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D034: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027D038: addiu       $a0, $a0, 0x3B80
    ctx->r4 = ADD32(ctx->r4, 0X3B80);
    // 0x8027D03C: jal         0x80035490
    // 0x8027D040: addiu       $a1, $a1, 0x312C
    ctx->r5 = ADD32(ctx->r5, 0X312C);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D040: addiu       $a1, $a1, 0x312C
    ctx->r5 = ADD32(ctx->r5, 0X312C);
    after_0:
    // 0x8027D044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D04C: jr          $ra
    // 0x8027D050: nop

    return;
    // 0x8027D050: nop

;}
RECOMP_FUNC void func_8027D054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D054: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D058: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D05C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D060: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D064: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D068: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027D06C: addiu       $a0, $a0, 0x4964
    ctx->r4 = ADD32(ctx->r4, 0X4964);
    // 0x8027D070: jal         0x80035490
    // 0x8027D074: addiu       $a1, $a1, 0x312C
    ctx->r5 = ADD32(ctx->r5, 0X312C);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D074: addiu       $a1, $a1, 0x312C
    ctx->r5 = ADD32(ctx->r5, 0X312C);
    after_0:
    // 0x8027D078: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D07C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D080: jr          $ra
    // 0x8027D084: nop

    return;
    // 0x8027D084: nop

;}
RECOMP_FUNC void func_8027D088(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D088: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D08C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D090: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D094: jal         0x8003DD3C
    // 0x8027D098: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003DD3C(rdram, ctx);
        goto after_0;
    // 0x8027D098: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8027D09C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027D0A0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D0A4: addiu       $a1, $a1, 0x3134
    ctx->r5 = ADD32(ctx->r5, 0X3134);
    // 0x8027D0A8: jal         0x80035490
    // 0x8027D0AC: addiu       $a0, $a0, -0x5EC
    ctx->r4 = ADD32(ctx->r4, -0X5EC);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8027D0AC: addiu       $a0, $a0, -0x5EC
    ctx->r4 = ADD32(ctx->r4, -0X5EC);
    after_1:
    // 0x8027D0B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D0B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D0B8: jr          $ra
    // 0x8027D0BC: nop

    return;
    // 0x8027D0BC: nop

;}
RECOMP_FUNC void func_8027D0C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D0C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027D0C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D0C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8027D0CC: jal         0x80280DAC
    // 0x8027D0D0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80280DAC(rdram, ctx);
        goto after_0;
    // 0x8027D0D0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8027D0D4: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x8027D0D8: jal         0x80049A90
    // 0x8027D0DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80049A90(rdram, ctx);
        goto after_1;
    // 0x8027D0DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8027D0E0: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x8027D0E4: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027D0E8: bne         $v0, $t6, L_8027D114
    if (ctx->r2 != ctx->r14) {
        // 0x8027D0EC: nop
    
            goto L_8027D114;
    }
    // 0x8027D0EC: nop

    // 0x8027D0F0: jal         0x8027E094
    // 0x8027D0F4: nop

    func_8027E094(rdram, ctx);
        goto after_2;
    // 0x8027D0F4: nop

    after_2:
    // 0x8027D0F8: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x8027D0FC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D100: addiu       $a1, $a1, 0x3144
    ctx->r5 = ADD32(ctx->r5, 0X3144);
    // 0x8027D104: jal         0x80035490
    // 0x8027D108: addiu       $a0, $a0, 0x51D0
    ctx->r4 = ADD32(ctx->r4, 0X51D0);
    func_80035490(rdram, ctx);
        goto after_3;
    // 0x8027D108: addiu       $a0, $a0, 0x51D0
    ctx->r4 = ADD32(ctx->r4, 0X51D0);
    after_3:
    // 0x8027D10C: b           L_8027D120
    // 0x8027D110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027D120;
    // 0x8027D110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027D114:
    // 0x8027D114: jal         0x800297B4
    // 0x8027D118: addiu       $a0, $a0, -0x2EA0
    ctx->r4 = ADD32(ctx->r4, -0X2EA0);
    func_800297B4(rdram, ctx);
        goto after_4;
    // 0x8027D118: addiu       $a0, $a0, -0x2EA0
    ctx->r4 = ADD32(ctx->r4, -0X2EA0);
    after_4:
    // 0x8027D11C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027D120:
    // 0x8027D120: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8027D124: jr          $ra
    // 0x8027D128: nop

    return;
    // 0x8027D128: nop

;}
RECOMP_FUNC void func_8027D12C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D12C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D130: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D134: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D13C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D140: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027D144: addiu       $a0, $a0, -0x2600
    ctx->r4 = ADD32(ctx->r4, -0X2600);
    // 0x8027D148: jal         0x80035490
    // 0x8027D14C: addiu       $a1, $a1, 0x314C
    ctx->r5 = ADD32(ctx->r5, 0X314C);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D14C: addiu       $a1, $a1, 0x314C
    ctx->r5 = ADD32(ctx->r5, 0X314C);
    after_0:
    // 0x8027D150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D158: jr          $ra
    // 0x8027D15C: nop

    return;
    // 0x8027D15C: nop

;}
RECOMP_FUNC void func_8027D160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D160: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027D164: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8027D168: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D16C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027D170: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027D174: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027D178: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027D17C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027D180: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027D184: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027D188: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027D18C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027D190: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8027D194: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027D198: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027D19C: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8027D1A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D1A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D1A8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D1AC: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8027D1B0: lb          $a0, 0x5($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X5);
    // 0x8027D1B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8027D1B8: blez        $a0, L_8027D218
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8027D1BC: nop
    
            goto L_8027D218;
    }
    // 0x8027D1BC: nop

    // 0x8027D1C0: lb          $a1, 0x335C($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X335C);
    // 0x8027D1C4: addiu       $a2, $zero, 0x47C
    ctx->r6 = ADD32(0, 0X47C);
L_8027D1C8:
    // 0x8027D1C8: multu       $v0, $a2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027D1CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8027D1D0: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x8027D1D4: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8027D1D8: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8027D1DC: mflo        $t9
    ctx->r25 = lo;
    // 0x8027D1E0: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x8027D1E4: lb          $t1, 0xC($t0)
    ctx->r9 = MEM_B(ctx->r8, 0XC);
    // 0x8027D1E8: nop

    // 0x8027D1EC: bne         $a1, $t1, L_8027D210
    if (ctx->r5 != ctx->r9) {
        // 0x8027D1F0: nop
    
            goto L_8027D210;
    }
    // 0x8027D1F0: nop

    // 0x8027D1F4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027D1F8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D1FC: addiu       $a1, $a1, 0x3154
    ctx->r5 = ADD32(ctx->r5, 0X3154);
    // 0x8027D200: jal         0x80035490
    // 0x8027D204: addiu       $a0, $a0, -0x1DB0
    ctx->r4 = ADD32(ctx->r4, -0X1DB0);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D204: addiu       $a0, $a0, -0x1DB0
    ctx->r4 = ADD32(ctx->r4, -0X1DB0);
    after_0:
    // 0x8027D208: b           L_8027D228
    // 0x8027D20C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8027D228;
    // 0x8027D20C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027D210:
    // 0x8027D210: bne         $at, $zero, L_8027D1C8
    if (ctx->r1 != 0) {
        // 0x8027D214: nop
    
            goto L_8027D1C8;
    }
    // 0x8027D214: nop

L_8027D218:
    // 0x8027D218: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027D21C: jal         0x800297B4
    // 0x8027D220: addiu       $a0, $a0, -0x2DCC
    ctx->r4 = ADD32(ctx->r4, -0X2DCC);
    func_800297B4(rdram, ctx);
        goto after_1;
    // 0x8027D220: addiu       $a0, $a0, -0x2DCC
    ctx->r4 = ADD32(ctx->r4, -0X2DCC);
    after_1:
    // 0x8027D224: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027D228:
    // 0x8027D228: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D22C: jr          $ra
    // 0x8027D230: nop

    return;
    // 0x8027D230: nop

;}
RECOMP_FUNC void func_8027D234(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D234: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027D238: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D23C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8027D240: jal         0x80280DAC
    // 0x8027D244: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80280DAC(rdram, ctx);
        goto after_0;
    // 0x8027D244: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8027D248: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x8027D24C: jal         0x80049A90
    // 0x8027D250: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80049A90(rdram, ctx);
        goto after_1;
    // 0x8027D250: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8027D254: lh          $t6, 0x1A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1A);
    // 0x8027D258: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D25C: bne         $v0, $t6, L_8027D270
    if (ctx->r2 != ctx->r14) {
        // 0x8027D260: lui         $a0, 0x8027
        ctx->r4 = S32(0X8027 << 16);
            goto L_8027D270;
    }
    // 0x8027D260: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027D264: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D268: b           L_8027D274
    // 0x8027D26C: addiu       $a1, $a1, 0x315C
    ctx->r5 = ADD32(ctx->r5, 0X315C);
        goto L_8027D274;
    // 0x8027D26C: addiu       $a1, $a1, 0x315C
    ctx->r5 = ADD32(ctx->r5, 0X315C);
L_8027D270:
    // 0x8027D270: addiu       $a1, $a1, 0x316C
    ctx->r5 = ADD32(ctx->r5, 0X316C);
L_8027D274:
    // 0x8027D274: jal         0x80035490
    // 0x8027D278: addiu       $a0, $a0, 0x2B70
    ctx->r4 = ADD32(ctx->r4, 0X2B70);
    func_80035490(rdram, ctx);
        goto after_2;
    // 0x8027D278: addiu       $a0, $a0, 0x2B70
    ctx->r4 = ADD32(ctx->r4, 0X2B70);
    after_2:
    // 0x8027D27C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D280: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8027D284: jr          $ra
    // 0x8027D288: nop

    return;
    // 0x8027D288: nop

;}
RECOMP_FUNC void func_8027D28C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D28C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D290: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D294: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D298: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D29C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D2A0: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027D2A4: addiu       $a0, $a0, 0x19A4
    ctx->r4 = ADD32(ctx->r4, 0X19A4);
    // 0x8027D2A8: jal         0x80035490
    // 0x8027D2AC: addiu       $a1, $a1, 0x317C
    ctx->r5 = ADD32(ctx->r5, 0X317C);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D2AC: addiu       $a1, $a1, 0x317C
    ctx->r5 = ADD32(ctx->r5, 0X317C);
    after_0:
    // 0x8027D2B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D2B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D2B8: jr          $ra
    // 0x8027D2BC: nop

    return;
    // 0x8027D2BC: nop

;}
RECOMP_FUNC void func_8027D2C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D2C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D2C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D2C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D2CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D2D0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D2D4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027D2D8: addiu       $a0, $a0, -0x5B4
    ctx->r4 = ADD32(ctx->r4, -0X5B4);
    // 0x8027D2DC: jal         0x80035490
    // 0x8027D2E0: addiu       $a1, $a1, 0x317C
    ctx->r5 = ADD32(ctx->r5, 0X317C);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D2E0: addiu       $a1, $a1, 0x317C
    ctx->r5 = ADD32(ctx->r5, 0X317C);
    after_0:
    // 0x8027D2E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D2E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D2EC: jr          $ra
    // 0x8027D2F0: nop

    return;
    // 0x8027D2F0: nop

;}
RECOMP_FUNC void func_8027D2F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D2F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D2F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D2FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D300: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D304: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D308: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027D30C: addiu       $a0, $a0, 0x5AD0
    ctx->r4 = ADD32(ctx->r4, 0X5AD0);
    // 0x8027D310: jal         0x80035490
    // 0x8027D314: addiu       $a1, $a1, 0x317C
    ctx->r5 = ADD32(ctx->r5, 0X317C);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D314: addiu       $a1, $a1, 0x317C
    ctx->r5 = ADD32(ctx->r5, 0X317C);
    after_0:
    // 0x8027D318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D31C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D320: jr          $ra
    // 0x8027D324: nop

    return;
    // 0x8027D324: nop

;}
RECOMP_FUNC void func_8027D328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D328: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D32C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D330: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D338: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D33C: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x8027D340: addiu       $a0, $a0, 0x3D30
    ctx->r4 = ADD32(ctx->r4, 0X3D30);
    // 0x8027D344: jal         0x80035490
    // 0x8027D348: addiu       $a1, $a1, 0x3184
    ctx->r5 = ADD32(ctx->r5, 0X3184);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D348: addiu       $a1, $a1, 0x3184
    ctx->r5 = ADD32(ctx->r5, 0X3184);
    after_0:
    // 0x8027D34C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D354: jr          $ra
    // 0x8027D358: nop

    return;
    // 0x8027D358: nop

;}
RECOMP_FUNC void func_8027D35C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D35C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D360: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D364: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D36C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8027D370: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8027D374: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D378: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8027D37C: sb          $t6, 0x418($at)
    MEM_B(0X418, ctx->r1) = ctx->r14;
    // 0x8027D380: addiu       $a0, $a0, -0x1970
    ctx->r4 = ADD32(ctx->r4, -0X1970);
    // 0x8027D384: jal         0x80035490
    // 0x8027D388: addiu       $a1, $a1, 0x318C
    ctx->r5 = ADD32(ctx->r5, 0X318C);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D388: addiu       $a1, $a1, 0x318C
    ctx->r5 = ADD32(ctx->r5, 0X318C);
    after_0:
    // 0x8027D38C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D390: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D394: jr          $ra
    // 0x8027D398: nop

    return;
    // 0x8027D398: nop

;}
RECOMP_FUNC void func_8027D39C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D39C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D3A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D3A4: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8027D3A8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8027D3AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D3B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D3B4: jal         0x8003DD3C
    // 0x8027D3B8: sb          $t6, 0x418($at)
    MEM_B(0X418, ctx->r1) = ctx->r14;
    func_8003DD3C(rdram, ctx);
        goto after_0;
    // 0x8027D3B8: sb          $t6, 0x418($at)
    MEM_B(0X418, ctx->r1) = ctx->r14;
    after_0:
    // 0x8027D3BC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8027D3C0: addiu       $v0, $v0, -0x30A0
    ctx->r2 = ADD32(ctx->r2, -0X30A0);
    // 0x8027D3C4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8027D3C8: lui         $a0, 0x802B
    ctx->r4 = S32(0X802B << 16);
    // 0x8027D3CC: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D3D0: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x8027D3D4: sb          $t7, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r15;
    // 0x8027D3D8: addiu       $a1, $a1, 0x3194
    ctx->r5 = ADD32(ctx->r5, 0X3194);
    // 0x8027D3DC: jal         0x80035490
    // 0x8027D3E0: addiu       $a0, $a0, 0x3E40
    ctx->r4 = ADD32(ctx->r4, 0X3E40);
    func_80035490(rdram, ctx);
        goto after_1;
    // 0x8027D3E0: addiu       $a0, $a0, 0x3E40
    ctx->r4 = ADD32(ctx->r4, 0X3E40);
    after_1:
    // 0x8027D3E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D3E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D3EC: jr          $ra
    // 0x8027D3F0: nop

    return;
    // 0x8027D3F0: nop

;}
RECOMP_FUNC void func_8027D3F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D3F4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027D3F8: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8027D3FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8027D400: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027D404: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027D408: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027D40C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027D410: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027D414: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027D418: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027D41C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027D420: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027D424: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8027D428: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027D42C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027D430: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8027D434: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D438: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8027D43C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8027D440: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8027D444: jal         0x8005ACAC
    // 0x8027D448: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    func_8005ACAC(rdram, ctx);
        goto after_0;
    // 0x8027D448: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_0:
    // 0x8027D44C: jal         0x800603F0
    // 0x8027D450: nop

    func_800603F0(rdram, ctx);
        goto after_1;
    // 0x8027D450: nop

    after_1:
    // 0x8027D454: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8027D458: jal         0x800364A8
    // 0x8027D45C: sh          $zero, 0x6968($at)
    MEM_H(0X6968, ctx->r1) = 0;
    func_800364A8(rdram, ctx);
        goto after_2;
    // 0x8027D45C: sh          $zero, 0x6968($at)
    MEM_H(0X6968, ctx->r1) = 0;
    after_2:
    // 0x8027D460: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8027D464: lbu         $t0, -0x32A0($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X32A0);
    // 0x8027D468: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8027D46C: sh          $t0, 0x6DFE($at)
    MEM_H(0X6DFE, ctx->r1) = ctx->r8;
    // 0x8027D470: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8027D474: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8027D478: jal         0x80044ED8
    // 0x8027D47C: sh          $t1, 0xB74($at)
    MEM_H(0XB74, ctx->r1) = ctx->r9;
    func_80044ED8(rdram, ctx);
        goto after_3;
    // 0x8027D47C: sh          $t1, 0xB74($at)
    MEM_H(0XB74, ctx->r1) = ctx->r9;
    after_3:
    // 0x8027D480: jal         0x80043B30
    // 0x8027D484: nop

    func_80043B30(rdram, ctx);
        goto after_4;
    // 0x8027D484: nop

    after_4:
    // 0x8027D488: jal         0x800443F4
    // 0x8027D48C: nop

    func_800443F4(rdram, ctx);
        goto after_5;
    // 0x8027D48C: nop

    after_5:
    // 0x8027D490: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8027D494: lhu         $v0, 0x5244($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X5244);
    // 0x8027D498: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8027D49C: beq         $v0, $at, L_8027D504
    if (ctx->r2 == ctx->r1) {
        // 0x8027D4A0: addiu       $at, $zero, 0x4000
        ctx->r1 = ADD32(0, 0X4000);
            goto L_8027D504;
    }
    // 0x8027D4A0: addiu       $at, $zero, 0x4000
    ctx->r1 = ADD32(0, 0X4000);
    // 0x8027D4A4: beq         $v0, $at, L_8027D4DC
    if (ctx->r2 == ctx->r1) {
        // 0x8027D4A8: ori         $at, $zero, 0x8000
        ctx->r1 = 0 | 0X8000;
            goto L_8027D4DC;
    }
    // 0x8027D4A8: ori         $at, $zero, 0x8000
    ctx->r1 = 0 | 0X8000;
    // 0x8027D4AC: bne         $v0, $at, L_8027D52C
    if (ctx->r2 != ctx->r1) {
        // 0x8027D4B0: nop
    
            goto L_8027D52C;
    }
    // 0x8027D4B0: nop

    // 0x8027D4B4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8027D4B8: nop

    // 0x8027D4BC: lb          $a0, 0x1($t2)
    ctx->r4 = MEM_B(ctx->r10, 0X1);
    // 0x8027D4C0: jal         0x8003EC2C
    // 0x8027D4C4: nop

    func_8003EC2C(rdram, ctx);
        goto after_6;
    // 0x8027D4C4: nop

    after_6:
    // 0x8027D4C8: lh          $a1, 0x2($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2);
    // 0x8027D4CC: jal         0x8003F870
    // 0x8027D4D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8003F870(rdram, ctx);
        goto after_7;
    // 0x8027D4D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x8027D4D4: b           L_8027D538
    // 0x8027D4D8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
        goto L_8027D538;
    // 0x8027D4D8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
L_8027D4DC:
    // 0x8027D4DC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8027D4E0: nop

    // 0x8027D4E4: lb          $a0, 0x1($t3)
    ctx->r4 = MEM_B(ctx->r11, 0X1);
    // 0x8027D4E8: jal         0x8003EC2C
    // 0x8027D4EC: nop

    func_8003EC2C(rdram, ctx);
        goto after_8;
    // 0x8027D4EC: nop

    after_8:
    // 0x8027D4F0: lh          $a1, 0x2($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2);
    // 0x8027D4F4: jal         0x8003F870
    // 0x8027D4F8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8003F870(rdram, ctx);
        goto after_9;
    // 0x8027D4F8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_9:
    // 0x8027D4FC: b           L_8027D538
    // 0x8027D500: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
        goto L_8027D538;
    // 0x8027D500: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
L_8027D504:
    // 0x8027D504: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8027D508: nop

    // 0x8027D50C: lb          $a0, 0x1($t4)
    ctx->r4 = MEM_B(ctx->r12, 0X1);
    // 0x8027D510: jal         0x8003EC2C
    // 0x8027D514: nop

    func_8003EC2C(rdram, ctx);
        goto after_10;
    // 0x8027D514: nop

    after_10:
    // 0x8027D518: lh          $a1, 0x2($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2);
    // 0x8027D51C: jal         0x8003F870
    // 0x8027D520: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8003F870(rdram, ctx);
        goto after_11;
    // 0x8027D520: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_11:
    // 0x8027D524: b           L_8027D538
    // 0x8027D528: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
        goto L_8027D538;
    // 0x8027D528: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
L_8027D52C:
    // 0x8027D52C: jal         0x8003F6D8
    // 0x8027D530: nop

    func_8003F6D8(rdram, ctx);
        goto after_12;
    // 0x8027D530: nop

    after_12:
    // 0x8027D534: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
L_8027D538:
    // 0x8027D538: nop

    // 0x8027D53C: lb          $a0, 0x1($t5)
    ctx->r4 = MEM_B(ctx->r13, 0X1);
    // 0x8027D540: jal         0x800407A4
    // 0x8027D544: nop

    func_800407A4(rdram, ctx);
        goto after_13;
    // 0x8027D544: nop

    after_13:
    // 0x8027D548: jal         0x80037608
    // 0x8027D54C: nop

    func_80037608(rdram, ctx);
        goto after_14;
    // 0x8027D54C: nop

    after_14:
    // 0x8027D550: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027D554: jal         0x800296E0
    // 0x8027D558: addiu       $a0, $a0, -0x3448
    ctx->r4 = ADD32(ctx->r4, -0X3448);
    func_800296E0(rdram, ctx);
        goto after_15;
    // 0x8027D558: addiu       $a0, $a0, -0x3448
    ctx->r4 = ADD32(ctx->r4, -0X3448);
    after_15:
    // 0x8027D55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D560: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8027D564: jr          $ra
    // 0x8027D568: nop

    return;
    // 0x8027D568: nop

    // 0x8027D56C: nop

;}
RECOMP_FUNC void func_8027D570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D570: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D574: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D578: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D57C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D580: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8027D584: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D588: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027D58C: sb          $zero, -0x32A1($at)
    MEM_B(-0X32A1, ctx->r1) = 0;
    // 0x8027D590: addiu       $a0, $a0, -0xFF0
    ctx->r4 = ADD32(ctx->r4, -0XFF0);
    // 0x8027D594: jal         0x80035490
    // 0x8027D598: addiu       $a1, $a1, 0x3230
    ctx->r5 = ADD32(ctx->r5, 0X3230);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D598: addiu       $a1, $a1, 0x3230
    ctx->r5 = ADD32(ctx->r5, 0X3230);
    after_0:
    // 0x8027D59C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D5A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D5A4: jr          $ra
    // 0x8027D5A8: nop

    return;
    // 0x8027D5A8: nop

;}
RECOMP_FUNC void func_8027D5AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D5AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D5B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D5B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D5B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D5BC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8027D5C0: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D5C4: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8027D5C8: sb          $zero, -0x32A1($at)
    MEM_B(-0X32A1, ctx->r1) = 0;
    // 0x8027D5CC: addiu       $a0, $a0, 0x4930
    ctx->r4 = ADD32(ctx->r4, 0X4930);
    // 0x8027D5D0: jal         0x80035490
    // 0x8027D5D4: addiu       $a1, $a1, 0x3258
    ctx->r5 = ADD32(ctx->r5, 0X3258);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D5D4: addiu       $a1, $a1, 0x3258
    ctx->r5 = ADD32(ctx->r5, 0X3258);
    after_0:
    // 0x8027D5D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D5DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D5E0: jr          $ra
    // 0x8027D5E4: nop

    return;
    // 0x8027D5E4: nop

;}
RECOMP_FUNC void func_8027D5E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027D5E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8027D5EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8027D5F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027D5F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027D5F8: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x8027D5FC: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x8027D600: addiu       $a0, $a0, 0x0
    ctx->r4 = ADD32(ctx->r4, 0X0);
    // 0x8027D604: jal         0x80035490
    // 0x8027D608: addiu       $a1, $a1, 0x3260
    ctx->r5 = ADD32(ctx->r5, 0X3260);
    func_80035490(rdram, ctx);
        goto after_0;
    // 0x8027D608: addiu       $a1, $a1, 0x3260
    ctx->r5 = ADD32(ctx->r5, 0X3260);
    after_0:
    // 0x8027D60C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027D610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027D614: jr          $ra
    // 0x8027D618: nop

    return;
    // 0x8027D618: nop

;}
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
