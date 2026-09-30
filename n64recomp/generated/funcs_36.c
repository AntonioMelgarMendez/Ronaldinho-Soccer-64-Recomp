#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8007C7C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C7C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007C7C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007C7C8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x8007C7CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007C7D0: jal         0x8029ACD4
    // 0x8007C7D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x8029ACD4)(rdram, ctx);
        goto after_0;
    // 0x8007C7D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8007C7D8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007C7DC: addiu       $a0, $a0, 0x6BB4
    ctx->r4 = ADD32(ctx->r4, 0X6BB4);
    // 0x8007C7E0: jal         0x8007AAF8
    // 0x8007C7E4: addiu       $a1, $zero, 0xEB
    ctx->r5 = ADD32(0, 0XEB);
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x8007C7E4: addiu       $a1, $zero, 0xEB
    ctx->r5 = ADD32(0, 0XEB);
    after_1:
    // 0x8007C7E8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007C7EC: addiu       $a0, $a0, 0x6BB4
    ctx->r4 = ADD32(ctx->r4, 0X6BB4);
    // 0x8007C7F0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007C7F4: jal         0x8002135C
    // 0x8007C7F8: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8007C7F8: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    after_2:
    // 0x8007C7FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007C800: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007C804: jr          $ra
    // 0x8007C808: nop

    return;
    // 0x8007C808: nop

;}
RECOMP_FUNC void func_8007C80C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C80C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007C810: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007C814: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8007C818: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007C81C: jal         0x8029ACD4
    // 0x8007C820: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x8029ACD4)(rdram, ctx);
        goto after_0;
    // 0x8007C820: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8007C824: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007C828: addiu       $a0, $a0, 0x6BF0
    ctx->r4 = ADD32(ctx->r4, 0X6BF0);
    // 0x8007C82C: jal         0x8007AAF8
    // 0x8007C830: addiu       $a1, $zero, 0xF2
    ctx->r5 = ADD32(0, 0XF2);
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x8007C830: addiu       $a1, $zero, 0xF2
    ctx->r5 = ADD32(0, 0XF2);
    after_1:
    // 0x8007C834: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007C838: addiu       $a0, $a0, 0x6BF0
    ctx->r4 = ADD32(ctx->r4, 0X6BF0);
    // 0x8007C83C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007C840: jal         0x8002135C
    // 0x8007C844: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8007C844: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    after_2:
    // 0x8007C848: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007C84C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007C850: jr          $ra
    // 0x8007C854: nop

    return;
    // 0x8007C854: nop

;}
RECOMP_FUNC void func_8007C858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C858: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007C85C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007C860: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8007C864: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007C868: jal         0x8029ACD4
    // 0x8007C86C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x8029ACD4)(rdram, ctx);
        goto after_0;
    // 0x8007C86C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8007C870: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007C874: addiu       $a0, $a0, 0x6BF0
    ctx->r4 = ADD32(ctx->r4, 0X6BF0);
    // 0x8007C878: jal         0x8007AAF8
    // 0x8007C87C: addiu       $a1, $zero, 0xF3
    ctx->r5 = ADD32(0, 0XF3);
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x8007C87C: addiu       $a1, $zero, 0xF3
    ctx->r5 = ADD32(0, 0XF3);
    after_1:
    // 0x8007C880: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007C884: addiu       $a0, $a0, 0x6BF0
    ctx->r4 = ADD32(ctx->r4, 0X6BF0);
    // 0x8007C888: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007C88C: jal         0x8002135C
    // 0x8007C890: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8007C890: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    after_2:
    // 0x8007C894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007C898: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007C89C: jr          $ra
    // 0x8007C8A0: nop

    return;
    // 0x8007C8A0: nop

;}
RECOMP_FUNC void func_8007C8A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C8A4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007C8A8: lhu         $v0, 0x3934($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3934);
    // 0x8007C8AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007C8B0: beq         $v0, $zero, L_8007C8D4
    if (ctx->r2 == 0) {
        // 0x8007C8B4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007C8D4;
    }
    // 0x8007C8B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007C8B8: andi        $t6, $v0, 0x1000
    ctx->r14 = ctx->r2 & 0X1000;
    // 0x8007C8BC: bne         $t6, $zero, L_8007C8D8
    if (ctx->r14 != 0) {
        // 0x8007C8C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8007C8D8;
    }
    // 0x8007C8C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007C8C4: jal         0x8007CF08
    // 0x8007C8C8: nop

    func_8007CF08(rdram, ctx);
        goto after_0;
    // 0x8007C8C8: nop

    after_0:
    // 0x8007C8CC: jal         0x8007C608
    // 0x8007C8D0: nop

    func_8007C608(rdram, ctx);
        goto after_1;
    // 0x8007C8D0: nop

    after_1:
L_8007C8D4:
    // 0x8007C8D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007C8D8:
    // 0x8007C8D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007C8DC: jr          $ra
    // 0x8007C8E0: nop

    return;
    // 0x8007C8E0: nop

;}
RECOMP_FUNC void func_8007C8E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C8E4: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007C8E8: lhu         $t6, 0x3934($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3934);
    // 0x8007C8EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007C8F0: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x8007C8F4: beq         $t7, $zero, L_8007C954
    if (ctx->r15 == 0) {
        // 0x8007C8F8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007C954;
    }
    // 0x8007C8F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007C8FC: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8007C900: lh          $t8, -0x2FAC($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X2FAC);
    // 0x8007C904: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
    // 0x8007C908: bne         $t8, $zero, L_8007C954
    if (ctx->r24 != 0) {
        // 0x8007C90C: lui         $at, 0x8010
        ctx->r1 = S32(0X8010 << 16);
            goto L_8007C954;
    }
    // 0x8007C90C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8007C910: sb          $t9, 0x5234($at)
    MEM_B(0X5234, ctx->r1) = ctx->r25;
    // 0x8007C914: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007C918: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8007C91C: lhu         $t0, 0xB78($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0XB78);
    // 0x8007C920: sh          $zero, 0x3A4C($at)
    MEM_H(0X3A4C, ctx->r1) = 0;
    // 0x8007C924: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8007C928: bne         $t0, $at, L_8007C944
    if (ctx->r8 != ctx->r1) {
        // 0x8007C92C: nop
    
            goto L_8007C944;
    }
    // 0x8007C92C: nop

    // 0x8007C930: jal         0x80015BC0
    // 0x8007C934: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x8007C934: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x8007C938: addiu       $t1, $zero, 0x32
    ctx->r9 = ADD32(0, 0X32);
    // 0x8007C93C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007C940: sh          $t1, 0x3A4C($at)
    MEM_H(0X3A4C, ctx->r1) = ctx->r9;
L_8007C944:
    // 0x8007C944: jal         0x802A13CC
    // 0x8007C948: nop

    LOOKUP_FUNC(0x802A13CC)(rdram, ctx);
        goto after_1;
    // 0x8007C948: nop

    after_1:
    // 0x8007C94C: jal         0x80021960
    // 0x8007C950: nop

    func_80021960(rdram, ctx);
        goto after_2;
    // 0x8007C950: nop

    after_2:
L_8007C954:
    // 0x8007C954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007C958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007C95C: jr          $ra
    // 0x8007C960: nop

    return;
    // 0x8007C960: nop

;}
RECOMP_FUNC void func_8007C964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007C964: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x8007C968: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x8007C96C: beq         $t7, $zero, L_8007C9A8
    if (ctx->r15 == 0) {
        // 0x8007C970: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_8007C9A8;
    }
    // 0x8007C970: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8007C974: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8007C978: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007C97C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007C980: sb          $t8, 0x38E6($at)
    MEM_B(0X38E6, ctx->r1) = ctx->r24;
    // 0x8007C984: addiu       $v0, $v0, 0x38EC
    ctx->r2 = ADD32(ctx->r2, 0X38EC);
    // 0x8007C988: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x8007C98C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007C990: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007C994: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007C998: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8007C99C: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x8007C9A0: jr          $ra
    // 0x8007C9A4: sb          $zero, 0x38F0($at)
    MEM_B(0X38F0, ctx->r1) = 0;
    return;
    // 0x8007C9A4: sb          $zero, 0x38F0($at)
    MEM_B(0X38F0, ctx->r1) = 0;
L_8007C9A8:
    // 0x8007C9A8: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
    // 0x8007C9AC: beq         $t9, $zero, L_8007CA0C
    if (ctx->r25 == 0) {
        // 0x8007C9B0: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_8007CA0C;
    }
    // 0x8007C9B0: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8007C9B4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8007C9B8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007C9BC: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8007C9C0: sb          $t0, 0x38E6($at)
    MEM_B(0X38E6, ctx->r1) = ctx->r8;
    // 0x8007C9C4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007C9C8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007C9CC: sb          $zero, 0x38FC($at)
    MEM_B(0X38FC, ctx->r1) = 0;
    // 0x8007C9D0: addiu       $v0, $v0, 0x38F8
    ctx->r2 = ADD32(ctx->r2, 0X38F8);
    // 0x8007C9D4: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8007C9D8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007C9DC: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007C9E0: nop

    // 0x8007C9E4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8007C9E8: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    // 0x8007C9EC: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007C9F0: nop

    // 0x8007C9F4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8007C9F8: nop

    // 0x8007C9FC: bc1f        L_8007CAC4
    if (!c1cs) {
        // 0x8007CA00: nop
    
            goto L_8007CAC4;
    }
    // 0x8007CA00: nop

    // 0x8007CA04: jr          $ra
    // 0x8007CA08: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
    return;
    // 0x8007CA08: swc1        $f0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f0.u32l;
L_8007CA0C:
    // 0x8007CA0C: andi        $t1, $v0, 0x8
    ctx->r9 = ctx->r2 & 0X8;
    // 0x8007CA10: beq         $t1, $zero, L_8007CA98
    if (ctx->r9 == 0) {
        // 0x8007CA14: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_8007CA98;
    }
    // 0x8007CA14: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007CA18: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007CA1C: sb          $zero, 0x38E6($at)
    MEM_B(0X38E6, ctx->r1) = 0;
    // 0x8007CA20: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8007CA24: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007CA28: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007CA2C: sb          $v1, 0x38FC($at)
    MEM_B(0X38FC, ctx->r1) = ctx->r3;
    // 0x8007CA30: addiu       $v0, $v0, 0x38F8
    ctx->r2 = ADD32(ctx->r2, 0X38F8);
    // 0x8007CA34: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007CA38: lwc1        $f2, 0x3918($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x8007CA3C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007CA40: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8007CA44: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8007CA48: nop

    // 0x8007CA4C: bc1f        L_8007CA60
    if (!c1cs) {
        // 0x8007CA50: nop
    
            goto L_8007CA60;
    }
    // 0x8007CA50: nop

    // 0x8007CA54: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x8007CA58: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007CA5C: nop

L_8007CA60:
    // 0x8007CA60: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8007CA64: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8007CA68: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007CA6C: nop

    // 0x8007CA70: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x8007CA74: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x8007CA78: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007CA7C: nop

    // 0x8007CA80: c.lt.s      $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f10.fl < ctx->f2.fl;
    // 0x8007CA84: nop

    // 0x8007CA88: bc1f        L_8007CAC4
    if (!c1cs) {
        // 0x8007CA8C: nop
    
            goto L_8007CAC4;
    }
    // 0x8007CA8C: nop

    // 0x8007CA90: jr          $ra
    // 0x8007CA94: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    return;
    // 0x8007CA94: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
L_8007CA98:
    // 0x8007CA98: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8007CA9C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007CAA0: sb          $v1, 0x38E6($at)
    MEM_B(0X38E6, ctx->r1) = ctx->r3;
    // 0x8007CAA4: addiu       $v0, $v0, 0x38EC
    ctx->r2 = ADD32(ctx->r2, 0X38EC);
    // 0x8007CAA8: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x8007CAAC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007CAB0: lwc1        $f16, 0x0($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007CAB4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007CAB8: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8007CABC: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x8007CAC0: sb          $v1, 0x38F0($at)
    MEM_B(0X38F0, ctx->r1) = ctx->r3;
L_8007CAC4:
    // 0x8007CAC4: jr          $ra
    // 0x8007CAC8: nop

    return;
    // 0x8007CAC8: nop

;}
RECOMP_FUNC void func_8007CACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CACC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007CAD0: lhu         $a0, 0x3934($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X3934);
    // 0x8007CAD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007CAD8: andi        $t6, $a0, 0xF
    ctx->r14 = ctx->r4 & 0XF;
    // 0x8007CADC: beq         $t6, $zero, L_8007CAF4
    if (ctx->r14 == 0) {
        // 0x8007CAE0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007CAF4;
    }
    // 0x8007CAE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007CAE4: jal         0x8007C964
    // 0x8007CAE8: nop

    func_8007C964(rdram, ctx);
        goto after_0;
    // 0x8007CAE8: nop

    after_0:
    // 0x8007CAEC: b           L_8007CB30
    // 0x8007CAF0: nop

        goto L_8007CB30;
    // 0x8007CAF0: nop

L_8007CAF4:
    // 0x8007CAF4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007CAF8: lhu         $v0, 0x3932($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3932);
    // 0x8007CAFC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007CB00: andi        $t7, $v0, 0xF
    ctx->r15 = ctx->r2 & 0XF;
    // 0x8007CB04: beq         $t7, $zero, L_8007CB30
    if (ctx->r15 == 0) {
        // 0x8007CB08: addiu       $v1, $v1, 0x3A2E
        ctx->r3 = ADD32(ctx->r3, 0X3A2E);
            goto L_8007CB30;
    }
    // 0x8007CB08: addiu       $v1, $v1, 0x3A2E
    ctx->r3 = ADD32(ctx->r3, 0X3A2E);
    // 0x8007CB0C: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x8007CB10: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x8007CB14: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8007CB18: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x8007CB1C: slti        $at, $t0, 0x9
    ctx->r1 = SIGNED(ctx->r8) < 0X9 ? 1 : 0;
    // 0x8007CB20: bne         $at, $zero, L_8007CB30
    if (ctx->r1 != 0) {
        // 0x8007CB24: sb          $t9, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r25;
            goto L_8007CB30;
    }
    // 0x8007CB24: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
    // 0x8007CB28: jal         0x8007C964
    // 0x8007CB2C: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    func_8007C964(rdram, ctx);
        goto after_1;
    // 0x8007CB2C: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    after_1:
L_8007CB30:
    // 0x8007CB30: jal         0x8007CF08
    // 0x8007CB34: nop

    func_8007CF08(rdram, ctx);
        goto after_2;
    // 0x8007CB34: nop

    after_2:
    // 0x8007CB38: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007CB3C: addiu       $v0, $v0, 0x38EC
    ctx->r2 = ADD32(ctx->r2, 0X38EC);
    // 0x8007CB40: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007CB44: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007CB48: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007CB4C: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x8007CB50: nop

    // 0x8007CB54: bc1f        L_8007CB7C
    if (!c1cs) {
        // 0x8007CB58: nop
    
            goto L_8007CB7C;
    }
    // 0x8007CB58: nop

    // 0x8007CB5C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007CB60: lwc1        $f13, -0x4E68($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X4E68);
    // 0x8007CB64: lwc1        $f12, -0x4E64($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X4E64);
    // 0x8007CB68: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x8007CB6C: add.d       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = ctx->f6.d + ctx->f12.d;
    // 0x8007CB70: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8007CB74: b           L_8007CBA4
    // 0x8007CB78: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
        goto L_8007CBA4;
    // 0x8007CB78: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
L_8007CB7C:
    // 0x8007CB7C: lwc1        $f13, -0x4E60($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X4E60);
    // 0x8007CB80: lwc1        $f12, -0x4E5C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X4E5C);
    // 0x8007CB84: cvt.d.s     $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f0.d = CVT_D_S(ctx->f2.fl);
    // 0x8007CB88: c.le.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d <= ctx->f0.d;
    // 0x8007CB8C: nop

    // 0x8007CB90: bc1f        L_8007CBA8
    if (!c1cs) {
        // 0x8007CB94: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8007CBA8;
    }
    // 0x8007CB94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007CB98: sub.d       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f16.d = ctx->f0.d - ctx->f12.d;
    // 0x8007CB9C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8007CBA0: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
L_8007CBA4:
    // 0x8007CBA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007CBA8:
    // 0x8007CBA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007CBAC: jr          $ra
    // 0x8007CBB0: nop

    return;
    // 0x8007CBB0: nop

;}
RECOMP_FUNC void func_8007CBB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CBB4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007CBB8: addiu       $v0, $v0, 0x38E8
    ctx->r2 = ADD32(ctx->r2, 0X38E8);
    // 0x8007CBBC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007CBC0: lwc1        $f4, 0x38EC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X38EC);
    // 0x8007CBC4: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007CBC8: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007CBCC: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x8007CBD0: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007CBD4: bc1t        L_8007CC88
    if (c1cs) {
        // 0x8007CBD8: addiu       $v1, $v1, 0x3918
        ctx->r3 = ADD32(ctx->r3, 0X3918);
            goto L_8007CC88;
    }
    // 0x8007CBD8: addiu       $v1, $v1, 0x3918
    ctx->r3 = ADD32(ctx->r3, 0X3918);
    // 0x8007CBDC: lbu         $t6, 0x38F0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X38F0);
    // 0x8007CBE0: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x8007CBE4: bne         $t6, $zero, L_8007CC0C
    if (ctx->r14 != 0) {
        // 0x8007CBE8: nop
    
            goto L_8007CC0C;
    }
    // 0x8007CBE8: nop

    // 0x8007CBEC: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x8007CBF0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8007CBF4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8007CBF8: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8007CBFC: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x8007CC00: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x8007CC04: b           L_8007CC24
    // 0x8007CC08: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
        goto L_8007CC24;
    // 0x8007CC08: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
L_8007CC0C:
    // 0x8007CC0C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8007CC10: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8007CC14: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8007CC18: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x8007CC1C: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x8007CC20: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
L_8007CC24:
    // 0x8007CC24: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007CC28: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007CC2C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007CC30: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8007CC34: nop

    // 0x8007CC38: bc1f        L_8007CC60
    if (!c1cs) {
        // 0x8007CC3C: nop
    
            goto L_8007CC60;
    }
    // 0x8007CC3C: nop

    // 0x8007CC40: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007CC44: lwc1        $f13, -0x4E58($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X4E58);
    // 0x8007CC48: lwc1        $f12, -0x4E54($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X4E54);
    // 0x8007CC4C: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x8007CC50: add.d       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f12.d); 
    ctx->f10.d = ctx->f8.d + ctx->f12.d;
    // 0x8007CC54: cvt.s.d     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f4.fl = CVT_S_D(ctx->f10.d);
    // 0x8007CC58: b           L_8007CC88
    // 0x8007CC5C: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
        goto L_8007CC88;
    // 0x8007CC5C: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
L_8007CC60:
    // 0x8007CC60: lwc1        $f13, -0x4E50($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, -0X4E50);
    // 0x8007CC64: lwc1        $f12, -0x4E4C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X4E4C);
    // 0x8007CC68: cvt.d.s     $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f2.d = CVT_D_S(ctx->f0.fl);
    // 0x8007CC6C: c.le.d      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.d <= ctx->f2.d;
    // 0x8007CC70: nop

    // 0x8007CC74: bc1f        L_8007CC88
    if (!c1cs) {
        // 0x8007CC78: nop
    
            goto L_8007CC88;
    }
    // 0x8007CC78: nop

    // 0x8007CC7C: sub.d       $f6, $f2, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = ctx->f2.d - ctx->f12.d;
    // 0x8007CC80: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8007CC84: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
L_8007CC88:
    // 0x8007CC88: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007CC8C: lwc1        $f0, 0x38F8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X38F8);
    // 0x8007CC90: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8007CC94: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007CC98: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x8007CC9C: nop

    // 0x8007CCA0: bc1t        L_8007CE54
    if (c1cs) {
        // 0x8007CCA4: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_8007CE54;
    }
    // 0x8007CCA4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8007CCA8: lbu         $v0, 0x38FC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X38FC);
    // 0x8007CCAC: addiu       $at, $zero, 0x50
    ctx->r1 = ADD32(0, 0X50);
    // 0x8007CCB0: beq         $v0, $at, L_8007CE54
    if (ctx->r2 == ctx->r1) {
        // 0x8007CCB4: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_8007CE54;
    }
    // 0x8007CCB4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8007CCB8: bne         $v0, $zero, L_8007CD80
    if (ctx->r2 != 0) {
        // 0x8007CCBC: lui         $at, 0x40A0
        ctx->r1 = S32(0X40A0 << 16);
            goto L_8007CD80;
    }
    // 0x8007CCBC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8007CCC0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007CCC4: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8007CCC8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007CCCC: c.lt.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl < ctx->f12.fl;
    // 0x8007CCD0: addiu       $v0, $v0, 0x38F4
    ctx->r2 = ADD32(ctx->r2, 0X38F4);
    // 0x8007CCD4: bc1f        L_8007CD34
    if (!c1cs) {
        // 0x8007CCD8: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_8007CD34;
    }
    // 0x8007CCD8: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8007CCDC: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8007CCE0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007CCE4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007CCE8: addiu       $v0, $v0, 0x38F4
    ctx->r2 = ADD32(ctx->r2, 0X38F4);
    // 0x8007CCEC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007CCF0: lwc1        $f10, 0x3A70($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3A70);
    // 0x8007CCF4: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007CCF8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8007CCFC: add.s       $f14, $f10, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f0.fl;
    // 0x8007CD00: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    // 0x8007CD04: nop

    // 0x8007CD08: bc1f        L_8007CE50
    if (!c1cs) {
        // 0x8007CD0C: nop
    
            goto L_8007CE50;
    }
    // 0x8007CD0C: nop

    // 0x8007CD10: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007CD14: nop

    // 0x8007CD18: c.le.s      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.fl <= ctx->f14.fl;
    // 0x8007CD1C: nop

    // 0x8007CD20: bc1f        L_8007CE54
    if (!c1cs) {
        // 0x8007CD24: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_8007CE54;
    }
    // 0x8007CD24: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8007CD28: add.s       $f6, $f0, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x8007CD2C: b           L_8007CE50
    // 0x8007CD30: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
        goto L_8007CE50;
    // 0x8007CD30: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
L_8007CD34:
    // 0x8007CD34: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007CD38: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007CD3C: lwc1        $f8, 0x3A70($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3A70);
    // 0x8007CD40: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007CD44: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8007CD48: add.s       $f14, $f8, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x8007CD4C: c.lt.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl < ctx->f18.fl;
    // 0x8007CD50: nop

    // 0x8007CD54: bc1f        L_8007CE50
    if (!c1cs) {
        // 0x8007CD58: nop
    
            goto L_8007CE50;
    }
    // 0x8007CD58: nop

    // 0x8007CD5C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007CD60: nop

    // 0x8007CD64: c.le.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl <= ctx->f14.fl;
    // 0x8007CD68: nop

    // 0x8007CD6C: bc1f        L_8007CE54
    if (!c1cs) {
        // 0x8007CD70: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_8007CE54;
    }
    // 0x8007CD70: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8007CD74: add.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x8007CD78: b           L_8007CE50
    // 0x8007CD7C: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
        goto L_8007CE50;
    // 0x8007CD7C: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
L_8007CD80:
    // 0x8007CD80: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x8007CD84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007CD88: sub.s       $f12, $f0, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8007CD8C: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x8007CD90: nop

    // 0x8007CD94: bc1f        L_8007CDFC
    if (!c1cs) {
        // 0x8007CD98: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_8007CDFC;
    }
    // 0x8007CD98: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007CD9C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007CDA0: lwc1        $f8, 0x3A70($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3A70);
    // 0x8007CDA4: addiu       $v0, $v0, 0x38F4
    ctx->r2 = ADD32(ctx->r2, 0X38F4);
    // 0x8007CDA8: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007CDAC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8007CDB0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007CDB4: add.s       $f14, $f8, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x8007CDB8: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8007CDBC: c.lt.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
    // 0x8007CDC0: nop

    // 0x8007CDC4: bc1f        L_8007CDF4
    if (!c1cs) {
        // 0x8007CDC8: nop
    
            goto L_8007CDF4;
    }
    // 0x8007CDC8: nop

    // 0x8007CDCC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007CDD0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8007CDD4: c.le.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl <= ctx->f18.fl;
    // 0x8007CDD8: nop

    // 0x8007CDDC: bc1f        L_8007CDF4
    if (!c1cs) {
        // 0x8007CDE0: nop
    
            goto L_8007CDF4;
    }
    // 0x8007CDE0: nop

    // 0x8007CDE4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007CDE8: nop

    // 0x8007CDEC: sub.s       $f4, $f0, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x8007CDF0: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
L_8007CDF4:
    // 0x8007CDF4: b           L_8007CE54
    // 0x8007CDF8: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
        goto L_8007CE54;
    // 0x8007CDF8: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
L_8007CDFC:
    // 0x8007CDFC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007CE00: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007CE04: lwc1        $f6, 0x3A70($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3A70);
    // 0x8007CE08: addiu       $v0, $v0, 0x38F4
    ctx->r2 = ADD32(ctx->r2, 0X38F4);
    // 0x8007CE0C: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007CE10: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8007CE14: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007CE18: add.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8007CE1C: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8007CE20: c.lt.s      $f8, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f8.fl < ctx->f14.fl;
    // 0x8007CE24: nop

    // 0x8007CE28: bc1f        L_8007CE50
    if (!c1cs) {
        // 0x8007CE2C: nop
    
            goto L_8007CE50;
    }
    // 0x8007CE2C: nop

    // 0x8007CE30: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007CE34: nop

    // 0x8007CE38: c.le.s      $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f14.fl <= ctx->f18.fl;
    // 0x8007CE3C: nop

    // 0x8007CE40: bc1f        L_8007CE54
    if (!c1cs) {
        // 0x8007CE44: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_8007CE54;
    }
    // 0x8007CE44: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x8007CE48: add.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x8007CE4C: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
L_8007CE50:
    // 0x8007CE50: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
L_8007CE54:
    // 0x8007CE54: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007CE58: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007CE5C: addiu       $v0, $v0, 0x38F4
    ctx->r2 = ADD32(ctx->r2, 0X38F4);
    // 0x8007CE60: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007CE64: lwc1        $f0, 0x3A70($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3A70);
    // 0x8007CE68: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007CE6C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8007CE70: add.s       $f14, $f0, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x8007CE74: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007CE78: c.lt.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl < ctx->f14.fl;
    // 0x8007CE7C: nop

    // 0x8007CE80: bc1f        L_8007CE9C
    if (!c1cs) {
        // 0x8007CE84: nop
    
            goto L_8007CE9C;
    }
    // 0x8007CE84: nop

    // 0x8007CE88: sub.s       $f6, $f18, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f0.fl;
    // 0x8007CE8C: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x8007CE90: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007CE94: nop

    // 0x8007CE98: add.s       $f14, $f0, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f0.fl + ctx->f8.fl;
L_8007CE9C:
    // 0x8007CE9C: c.lt.s      $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f14.fl < ctx->f10.fl;
    // 0x8007CEA0: nop

    // 0x8007CEA4: bc1f        L_8007CEBC
    if (!c1cs) {
        // 0x8007CEA8: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_8007CEBC;
    }
    // 0x8007CEA8: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8007CEAC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007CEB0: nop

    // 0x8007CEB4: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x8007CEB8: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
L_8007CEBC:
    // 0x8007CEBC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8007CEC0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007CEC4: nop

    // 0x8007CEC8: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x8007CECC: nop

    // 0x8007CED0: bc1f        L_8007CEEC
    if (!c1cs) {
        // 0x8007CED4: lui         $at, 0x4348
        ctx->r1 = S32(0X4348 << 16);
            goto L_8007CEEC;
    }
    // 0x8007CED4: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8007CED8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007CEDC: nop

    // 0x8007CEE0: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x8007CEE4: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8007CEE8: nop

L_8007CEEC:
    // 0x8007CEEC: c.lt.s      $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f18.fl < ctx->f2.fl;
    // 0x8007CEF0: nop

    // 0x8007CEF4: bc1f        L_8007CF00
    if (!c1cs) {
        // 0x8007CEF8: nop
    
            goto L_8007CF00;
    }
    // 0x8007CEF8: nop

    // 0x8007CEFC: swc1        $f18, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
L_8007CF00:
    // 0x8007CF00: jr          $ra
    // 0x8007CF04: nop

    return;
    // 0x8007CF04: nop

;}
RECOMP_FUNC void func_8007CF08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CF08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007CF0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007CF10: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x8007CF14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007CF18: jal         0x8029ACD4
    // 0x8007CF1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x8029ACD4)(rdram, ctx);
        goto after_0;
    // 0x8007CF1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8007CF20: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8007CF24: lbu         $a1, 0x38E6($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X38E6);
    // 0x8007CF28: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007CF2C: addiu       $a1, $a1, 0xED
    ctx->r5 = ADD32(ctx->r5, 0XED);
    // 0x8007CF30: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x8007CF34: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8007CF38: jal         0x8007AAF8
    // 0x8007CF3C: addiu       $a0, $a0, 0x6D1C
    ctx->r4 = ADD32(ctx->r4, 0X6D1C);
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x8007CF3C: addiu       $a0, $a0, 0x6D1C
    ctx->r4 = ADD32(ctx->r4, 0X6D1C);
    after_1:
    // 0x8007CF40: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007CF44: addiu       $a0, $a0, 0x6D1C
    ctx->r4 = ADD32(ctx->r4, 0X6D1C);
    // 0x8007CF48: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007CF4C: jal         0x8002135C
    // 0x8007CF50: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8007CF50: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    after_2:
    // 0x8007CF54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007CF58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007CF5C: jr          $ra
    // 0x8007CF60: nop

    return;
    // 0x8007CF60: nop

;}
RECOMP_FUNC void func_8007CF64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CF64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007CF68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007CF6C: jal         0x8007C7C0
    // 0x8007CF70: nop

    func_8007C7C0(rdram, ctx);
        goto after_0;
    // 0x8007CF70: nop

    after_0:
    // 0x8007CF74: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x8007CF78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8007CF7C: jal         0x8029ACD4
    // 0x8007CF80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(0x8029ACD4)(rdram, ctx);
        goto after_1;
    // 0x8007CF80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8007CF84: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007CF88: addiu       $a0, $a0, 0x6B78
    ctx->r4 = ADD32(ctx->r4, 0X6B78);
    // 0x8007CF8C: jal         0x8007AAF8
    // 0x8007CF90: addiu       $a1, $zero, 0xF1
    ctx->r5 = ADD32(0, 0XF1);
    func_8007AAF8(rdram, ctx);
        goto after_2;
    // 0x8007CF90: addiu       $a1, $zero, 0xF1
    ctx->r5 = ADD32(0, 0XF1);
    after_2:
    // 0x8007CF94: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007CF98: addiu       $a0, $a0, 0x6B78
    ctx->r4 = ADD32(ctx->r4, 0X6B78);
    // 0x8007CF9C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007CFA0: jal         0x8002135C
    // 0x8007CFA4: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x8007CFA4: addiu       $a2, $zero, 0x21
    ctx->r6 = ADD32(0, 0X21);
    after_3:
    // 0x8007CFA8: jal         0x8007C590
    // 0x8007CFAC: nop

    func_8007C590(rdram, ctx);
        goto after_4;
    // 0x8007CFAC: nop

    after_4:
    // 0x8007CFB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007CFB4: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x8007CFB8: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8007CFBC: sb          $t6, 0x5234($at)
    MEM_B(0X5234, ctx->r1) = ctx->r14;
    // 0x8007CFC0: jr          $ra
    // 0x8007CFC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8007CFC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8007CFC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CFC8: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007CFCC: addiu       $v1, $v1, 0x38E0
    ctx->r3 = ADD32(ctx->r3, 0X38E0);
    // 0x8007CFD0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8007CFD4: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x8007CFD8: bne         $v0, $zero, L_8007D01C
    if (ctx->r2 != 0) {
        // 0x8007CFDC: addiu       $t1, $v0, -0x1
        ctx->r9 = ADD32(ctx->r2, -0X1);
            goto L_8007D01C;
    }
    // 0x8007CFDC: addiu       $t1, $v0, -0x1
    ctx->r9 = ADD32(ctx->r2, -0X1);
    // 0x8007CFE0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007CFE4: addiu       $v0, $v0, 0x38E1
    ctx->r2 = ADD32(ctx->r2, 0X38E1);
    // 0x8007CFE8: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x8007CFEC: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
    // 0x8007CFF0: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x8007CFF4: andi        $t9, $t8, 0xFF
    ctx->r25 = ctx->r24 & 0XFF;
    // 0x8007CFF8: beq         $t9, $zero, L_8007D010
    if (ctx->r25 == 0) {
        // 0x8007CFFC: sb          $t8, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r24;
            goto L_8007D010;
    }
    // 0x8007CFFC: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x8007D000: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007D004: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8007D008: jr          $ra
    // 0x8007D00C: sb          $t0, 0x6CA8($at)
    MEM_B(0X6CA8, ctx->r1) = ctx->r8;
    return;
    // 0x8007D00C: sb          $t0, 0x6CA8($at)
    MEM_B(0X6CA8, ctx->r1) = ctx->r8;
L_8007D010:
    // 0x8007D010: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8007D014: jr          $ra
    // 0x8007D018: sb          $zero, 0x6CA8($at)
    MEM_B(0X6CA8, ctx->r1) = 0;
    return;
    // 0x8007D018: sb          $zero, 0x6CA8($at)
    MEM_B(0X6CA8, ctx->r1) = 0;
L_8007D01C:
    // 0x8007D01C: sb          $t1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r9;
    // 0x8007D020: jr          $ra
    // 0x8007D024: nop

    return;
    // 0x8007D024: nop

;}
RECOMP_FUNC void func_8007D028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D028: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007D02C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007D030: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8007D034: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D038: jal         0x8007ADA8
    // 0x8007D03C: sb          $t6, 0x39DF($at)
    MEM_B(0X39DF, ctx->r1) = ctx->r14;
    func_8007ADA8(rdram, ctx);
        goto after_0;
    // 0x8007D03C: sb          $t6, 0x39DF($at)
    MEM_B(0X39DF, ctx->r1) = ctx->r14;
    after_0:
    // 0x8007D040: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x8007D044: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007D048: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D04C: lwc1        $f6, 0x3918($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x8007D050: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007D054: lhu         $v1, 0x3A46($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X3A46);
    // 0x8007D058: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8007D05C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007D060: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D064: addiu       $a0, $a0, 0x3A50
    ctx->r4 = ADD32(ctx->r4, 0X3A50);
    // 0x8007D068: swc1        $f8, 0x38F4($at)
    MEM_W(0X38F4, ctx->r1) = ctx->f8.u32l;
    // 0x8007D06C: addiu       $t7, $v1, -0x8
    ctx->r15 = ADD32(ctx->r3, -0X8);
    // 0x8007D070: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x8007D074: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8007D078: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D07C: bgez        $v0, L_8007D08C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8007D080: addiu       $t9, $v1, -0x28
        ctx->r25 = ADD32(ctx->r3, -0X28);
            goto L_8007D08C;
    }
    // 0x8007D080: addiu       $t9, $v1, -0x28
    ctx->r25 = ADD32(ctx->r3, -0X28);
    // 0x8007D084: addiu       $t8, $v0, 0x71
    ctx->r24 = ADD32(ctx->r2, 0X71);
    // 0x8007D088: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
L_8007D08C:
    // 0x8007D08C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007D090: addiu       $a0, $a0, 0x3A4E
    ctx->r4 = ADD32(ctx->r4, 0X3A4E);
    // 0x8007D094: sh          $t9, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r25;
    // 0x8007D098: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8007D09C: nop

    // 0x8007D0A0: bgez        $v0, L_8007D0B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8007D0A4: addiu       $t0, $v0, 0x71
        ctx->r8 = ADD32(ctx->r2, 0X71);
            goto L_8007D0B4;
    }
    // 0x8007D0A4: addiu       $t0, $v0, 0x71
    ctx->r8 = ADD32(ctx->r2, 0X71);
    // 0x8007D0A8: sh          $t0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r8;
    // 0x8007D0AC: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8007D0B0: nop

L_8007D0B4:
    // 0x8007D0B4: jal         0x8007D0F8
    // 0x8007D0B8: sh          $v0, 0x3A42($at)
    MEM_H(0X3A42, ctx->r1) = ctx->r2;
    func_8007D0F8(rdram, ctx);
        goto after_1;
    // 0x8007D0B8: sh          $v0, 0x3A42($at)
    MEM_H(0X3A42, ctx->r1) = ctx->r2;
    after_1:
    // 0x8007D0BC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007D0C0: lhu         $a0, 0x3A42($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X3A42);
    // 0x8007D0C4: jal         0x8007BC2C
    // 0x8007D0C8: nop

    func_8007BC2C(rdram, ctx);
        goto after_2;
    // 0x8007D0C8: nop

    after_2:
    // 0x8007D0CC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D0D0: lwc1        $f10, 0x3918($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x8007D0D4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D0D8: jal         0x8007C430
    // 0x8007D0DC: swc1        $f10, 0x38F8($at)
    MEM_W(0X38F8, ctx->r1) = ctx->f10.u32l;
    func_8007C430(rdram, ctx);
        goto after_3;
    // 0x8007D0DC: swc1        $f10, 0x38F8($at)
    MEM_W(0X38F8, ctx->r1) = ctx->f10.u32l;
    after_3:
    // 0x8007D0E0: jal         0x8028D4B8
    // 0x8007D0E4: nop

    LOOKUP_FUNC(0x8028D4B8)(rdram, ctx);
        goto after_4;
    // 0x8007D0E4: nop

    after_4:
    // 0x8007D0E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007D0EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007D0F0: jr          $ra
    // 0x8007D0F4: nop

    return;
    // 0x8007D0F4: nop

;}
RECOMP_FUNC void func_8007D0F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D0F8: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x8007D0FC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8007D100: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D104: addiu       $v0, $v0, 0x38F4
    ctx->r2 = ADD32(ctx->r2, 0X38F4);
    // 0x8007D108: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D10C: lwc1        $f0, 0x3A70($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3A70);
    // 0x8007D110: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007D114: nop

    // 0x8007D118: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x8007D11C: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x8007D120: nop

    // 0x8007D124: bc1f        L_8007D134
    if (!c1cs) {
        // 0x8007D128: nop
    
            goto L_8007D134;
    }
    // 0x8007D128: nop

    // 0x8007D12C: sub.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f0.fl;
    // 0x8007D130: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
L_8007D134:
    // 0x8007D134: jr          $ra
    // 0x8007D138: nop

    return;
    // 0x8007D138: nop

    // 0x8007D13C: nop

;}
RECOMP_FUNC void func_8007D140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D140: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D144: lbu         $v0, 0x3968($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3968);
    // 0x8007D148: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007D14C: sltiu       $at, $v0, 0x13
    ctx->r1 = ctx->r2 < 0X13 ? 1 : 0;
    // 0x8007D150: beq         $at, $zero, L_8007D338
    if (ctx->r1 == 0) {
        // 0x8007D154: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007D338;
    }
    // 0x8007D154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007D158: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8007D15C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007D160: addu        $at, $at, $t6
    gpr jr_addend_8007D16C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8007D164: lw          $t6, -0x4D8C($at)
    ctx->r14 = ADD32(ctx->r1, -0X4D8C);
    // 0x8007D168: nop

    // 0x8007D16C: jr          $t6
    // 0x8007D170: nop

    switch (jr_addend_8007D16C >> 2) {
        case 0: goto L_8007D174; break;
        case 1: goto L_8007D18C; break;
        case 2: goto L_8007D1A4; break;
        case 3: goto L_8007D1BC; break;
        case 4: goto L_8007D1D4; break;
        case 5: goto L_8007D1EC; break;
        case 6: goto L_8007D204; break;
        case 7: goto L_8007D21C; break;
        case 8: goto L_8007D234; break;
        case 9: goto L_8007D24C; break;
        case 10: goto L_8007D264; break;
        case 11: goto L_8007D27C; break;
        case 12: goto L_8007D294; break;
        case 13: goto L_8007D2AC; break;
        case 14: goto L_8007D2C4; break;
        case 15: goto L_8007D2DC; break;
        case 16: goto L_8007D2F4; break;
        case 17: goto L_8007D30C; break;
        case 18: goto L_8007D324; break;
        default: switch_error(__func__, 0x8007D16C, 0x800DB274);
    }
    // 0x8007D170: nop

L_8007D174:
    // 0x8007D174: jal         0x8007D4D4
    // 0x8007D178: nop

    func_8007D4D4(rdram, ctx);
        goto after_0;
    // 0x8007D178: nop

    after_0:
    // 0x8007D17C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D180: lbu         $v0, 0x3968($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3968);
    // 0x8007D184: b           L_8007D33C
    // 0x8007D188: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
        goto L_8007D33C;
    // 0x8007D188: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_8007D18C:
    // 0x8007D18C: jal         0x8007D614
    // 0x8007D190: nop

    func_8007D614(rdram, ctx);
        goto after_1;
    // 0x8007D190: nop

    after_1:
    // 0x8007D194: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D198: lbu         $v0, 0x3968($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3968);
    // 0x8007D19C: b           L_8007D33C
    // 0x8007D1A0: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
        goto L_8007D33C;
    // 0x8007D1A0: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_8007D1A4:
    // 0x8007D1A4: jal         0x8007D798
    // 0x8007D1A8: nop

    func_8007D798(rdram, ctx);
        goto after_2;
    // 0x8007D1A8: nop

    after_2:
    // 0x8007D1AC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D1B0: lbu         $v0, 0x3968($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3968);
    // 0x8007D1B4: b           L_8007D33C
    // 0x8007D1B8: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
        goto L_8007D33C;
    // 0x8007D1B8: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_8007D1BC:
    // 0x8007D1BC: jal         0x8007D870
    // 0x8007D1C0: nop

    func_8007D870(rdram, ctx);
        goto after_3;
    // 0x8007D1C0: nop

    after_3:
    // 0x8007D1C4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D1C8: lbu         $v0, 0x3968($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3968);
    // 0x8007D1CC: b           L_8007D33C
    // 0x8007D1D0: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
        goto L_8007D33C;
    // 0x8007D1D0: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_8007D1D4:
    // 0x8007D1D4: jal         0x8007DB5C
    // 0x8007D1D8: nop

    func_8007DB5C(rdram, ctx);
        goto after_4;
    // 0x8007D1D8: nop

    after_4:
    // 0x8007D1DC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D1E0: lbu         $v0, 0x3968($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3968);
    // 0x8007D1E4: b           L_8007D33C
    // 0x8007D1E8: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
        goto L_8007D33C;
    // 0x8007D1E8: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_8007D1EC:
    // 0x8007D1EC: jal         0x8007DC4C
    // 0x8007D1F0: nop

    func_8007DC4C(rdram, ctx);
        goto after_5;
    // 0x8007D1F0: nop

    after_5:
    // 0x8007D1F4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D1F8: lbu         $v0, 0x3968($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3968);
    // 0x8007D1FC: b           L_8007D33C
    // 0x8007D200: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
        goto L_8007D33C;
    // 0x8007D200: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_8007D204:
    // 0x8007D204: jal         0x8007DD24
    // 0x8007D208: nop

    func_8007DD24(rdram, ctx);
        goto after_6;
    // 0x8007D208: nop

    after_6:
    // 0x8007D20C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D210: lbu         $v0, 0x3968($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3968);
    // 0x8007D214: b           L_8007D33C
    // 0x8007D218: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
        goto L_8007D33C;
    // 0x8007D218: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_8007D21C:
    // 0x8007D21C: jal         0x8007DE44
    // 0x8007D220: nop

    func_8007DE44(rdram, ctx);
        goto after_7;
    // 0x8007D220: nop

    after_7:
    // 0x8007D224: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D228: lbu         $v0, 0x3968($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3968);
    // 0x8007D22C: b           L_8007D33C
    // 0x8007D230: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
        goto L_8007D33C;
    // 0x8007D230: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_8007D234:
    // 0x8007D234: jal         0x8007E320
    // 0x8007D238: nop

    func_8007E320(rdram, ctx);
        goto after_8;
    // 0x8007D238: nop

    after_8:
    // 0x8007D23C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D240: lbu         $v0, 0x3968($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3968);
    // 0x8007D244: b           L_8007D33C
    // 0x8007D248: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
        goto L_8007D33C;
    // 0x8007D248: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_8007D24C:
    // 0x8007D24C: jal         0x8007E51C
    // 0x8007D250: nop

    func_8007E51C(rdram, ctx);
        goto after_9;
    // 0x8007D250: nop

    after_9:
    // 0x8007D254: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D258: lbu         $v0, 0x3968($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3968);
    // 0x8007D25C: b           L_8007D33C
    // 0x8007D260: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
        goto L_8007D33C;
    // 0x8007D260: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_8007D264:
    // 0x8007D264: jal         0x8007E624
    // 0x8007D268: nop

    func_8007E624(rdram, ctx);
        goto after_10;
    // 0x8007D268: nop

    after_10:
    // 0x8007D26C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D270: lbu         $v0, 0x3968($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3968);
    // 0x8007D274: b           L_8007D33C
    // 0x8007D278: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
        goto L_8007D33C;
    // 0x8007D278: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_8007D27C:
    // 0x8007D27C: jal         0x8007E7A0
    // 0x8007D280: nop

    func_8007E7A0(rdram, ctx);
        goto after_11;
    // 0x8007D280: nop

    after_11:
    // 0x8007D284: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D288: lbu         $v0, 0x3968($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3968);
    // 0x8007D28C: b           L_8007D33C
    // 0x8007D290: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
        goto L_8007D33C;
    // 0x8007D290: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_8007D294:
    // 0x8007D294: jal         0x8007E7E0
    // 0x8007D298: nop

    func_8007E7E0(rdram, ctx);
        goto after_12;
    // 0x8007D298: nop

    after_12:
    // 0x8007D29C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D2A0: lbu         $v0, 0x3968($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3968);
    // 0x8007D2A4: b           L_8007D33C
    // 0x8007D2A8: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
        goto L_8007D33C;
    // 0x8007D2A8: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_8007D2AC:
    // 0x8007D2AC: jal         0x8007E9F8
    // 0x8007D2B0: nop

    func_8007E9F8(rdram, ctx);
        goto after_13;
    // 0x8007D2B0: nop

    after_13:
    // 0x8007D2B4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D2B8: lbu         $v0, 0x3968($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3968);
    // 0x8007D2BC: b           L_8007D33C
    // 0x8007D2C0: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
        goto L_8007D33C;
    // 0x8007D2C0: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_8007D2C4:
    // 0x8007D2C4: jal         0x8007EF50
    // 0x8007D2C8: nop

    func_8007EF50(rdram, ctx);
        goto after_14;
    // 0x8007D2C8: nop

    after_14:
    // 0x8007D2CC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D2D0: lbu         $v0, 0x3968($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3968);
    // 0x8007D2D4: b           L_8007D33C
    // 0x8007D2D8: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
        goto L_8007D33C;
    // 0x8007D2D8: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_8007D2DC:
    // 0x8007D2DC: jal         0x8007F120
    // 0x8007D2E0: nop

    func_8007F120(rdram, ctx);
        goto after_15;
    // 0x8007D2E0: nop

    after_15:
    // 0x8007D2E4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D2E8: lbu         $v0, 0x3968($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3968);
    // 0x8007D2EC: b           L_8007D33C
    // 0x8007D2F0: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
        goto L_8007D33C;
    // 0x8007D2F0: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_8007D2F4:
    // 0x8007D2F4: jal         0x8007F29C
    // 0x8007D2F8: nop

    func_8007F29C(rdram, ctx);
        goto after_16;
    // 0x8007D2F8: nop

    after_16:
    // 0x8007D2FC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D300: lbu         $v0, 0x3968($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3968);
    // 0x8007D304: b           L_8007D33C
    // 0x8007D308: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
        goto L_8007D33C;
    // 0x8007D308: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_8007D30C:
    // 0x8007D30C: jal         0x8007F46C
    // 0x8007D310: nop

    func_8007F46C(rdram, ctx);
        goto after_17;
    // 0x8007D310: nop

    after_17:
    // 0x8007D314: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D318: lbu         $v0, 0x3968($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3968);
    // 0x8007D31C: b           L_8007D33C
    // 0x8007D320: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
        goto L_8007D33C;
    // 0x8007D320: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_8007D324:
    // 0x8007D324: jal         0x8007F50C
    // 0x8007D328: nop

    func_8007F50C(rdram, ctx);
        goto after_18;
    // 0x8007D328: nop

    after_18:
    // 0x8007D32C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D330: lbu         $v0, 0x3968($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X3968);
    // 0x8007D334: nop

L_8007D338:
    // 0x8007D338: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_8007D33C:
    // 0x8007D33C: beq         $at, $zero, L_8007D3CC
    if (ctx->r1 == 0) {
        // 0x8007D340: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8007D3CC;
    }
    // 0x8007D340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007D344: blez        $v0, L_8007D3C8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8007D348: lui         $t7, 0x8011
        ctx->r15 = S32(0X8011 << 16);
            goto L_8007D3C8;
    }
    // 0x8007D348: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8007D34C: lh          $t7, -0x2FA6($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X2FA6);
    // 0x8007D350: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8007D354: bne         $t7, $zero, L_8007D3CC
    if (ctx->r15 != 0) {
        // 0x8007D358: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8007D3CC;
    }
    // 0x8007D358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007D35C: lbu         $t8, 0x39F3($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X39F3);
    // 0x8007D360: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8007D364: bne         $t8, $zero, L_8007D3C8
    if (ctx->r24 != 0) {
        // 0x8007D368: lui         $at, 0x2
        ctx->r1 = S32(0X2 << 16);
            goto L_8007D3C8;
    }
    // 0x8007D368: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8007D36C: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x8007D370: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8007D374: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x8007D378: lhu         $t9, 0x9AC($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X9AC);
    // 0x8007D37C: nop

    // 0x8007D380: andi        $t0, $t9, 0x1000
    ctx->r8 = ctx->r25 & 0X1000;
    // 0x8007D384: bne         $t0, $zero, L_8007D3A0
    if (ctx->r8 != 0) {
        // 0x8007D388: nop
    
            goto L_8007D3A0;
    }
    // 0x8007D388: nop

    // 0x8007D38C: lhu         $t1, 0x9B6($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X9B6);
    // 0x8007D390: nop

    // 0x8007D394: andi        $t2, $t1, 0x1000
    ctx->r10 = ctx->r9 & 0X1000;
    // 0x8007D398: beq         $t2, $zero, L_8007D3CC
    if (ctx->r10 == 0) {
        // 0x8007D39C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8007D3CC;
    }
    // 0x8007D39C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007D3A0:
    // 0x8007D3A0: jal         0x80021960
    // 0x8007D3A4: nop

    func_80021960(rdram, ctx);
        goto after_19;
    // 0x8007D3A4: nop

    after_19:
    // 0x8007D3A8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8007D3AC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D3B0: jal         0x8007D3D8
    // 0x8007D3B4: sb          $t3, 0x39F3($at)
    MEM_B(0X39F3, ctx->r1) = ctx->r11;
    func_8007D3D8(rdram, ctx);
        goto after_20;
    // 0x8007D3B4: sb          $t3, 0x39F3($at)
    MEM_B(0X39F3, ctx->r1) = ctx->r11;
    after_20:
    // 0x8007D3B8: jal         0x802A13CC
    // 0x8007D3BC: nop

    LOOKUP_FUNC(0x802A13CC)(rdram, ctx);
        goto after_21;
    // 0x8007D3BC: nop

    after_21:
    // 0x8007D3C0: jal         0x80015BC0
    // 0x8007D3C4: addiu       $a0, $zero, 0x3BE
    ctx->r4 = ADD32(0, 0X3BE);
    func_80015BC0(rdram, ctx);
        goto after_22;
    // 0x8007D3C4: addiu       $a0, $zero, 0x3BE
    ctx->r4 = ADD32(0, 0X3BE);
    after_22:
L_8007D3C8:
    // 0x8007D3C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007D3CC:
    // 0x8007D3CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007D3D0: jr          $ra
    // 0x8007D3D4: nop

    return;
    // 0x8007D3D4: nop

;}
RECOMP_FUNC void func_8007D3D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D3D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007D3DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007D3E0: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x8007D3E4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D3E8: sb          $t6, 0x3968($at)
    MEM_B(0X3968, ctx->r1) = ctx->r14;
    // 0x8007D3EC: jal         0x80015BC0
    // 0x8007D3F0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x8007D3F0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x8007D3F4: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007D3F8: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x8007D3FC: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x8007D400: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D404: andi        $t8, $v0, 0x3
    ctx->r24 = ctx->r2 & 0X3;
    // 0x8007D408: beq         $t8, $zero, L_8007D43C
    if (ctx->r24 == 0) {
        // 0x8007D40C: sb          $t7, 0x39B5($at)
        MEM_B(0X39B5, ctx->r1) = ctx->r15;
            goto L_8007D43C;
    }
    // 0x8007D40C: sb          $t7, 0x39B5($at)
    MEM_B(0X39B5, ctx->r1) = ctx->r15;
    // 0x8007D410: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007D414: beq         $t8, $at, L_8007D460
    if (ctx->r24 == ctx->r1) {
        // 0x8007D418: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_8007D460;
    }
    // 0x8007D418: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8007D41C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8007D420: beq         $t8, $at, L_8007D480
    if (ctx->r24 == ctx->r1) {
        // 0x8007D424: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_8007D480;
    }
    // 0x8007D424: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8007D428: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8007D42C: beq         $t8, $at, L_8007D4A4
    if (ctx->r24 == ctx->r1) {
        // 0x8007D430: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_8007D4A4;
    }
    // 0x8007D430: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8007D434: b           L_8007D4C8
    // 0x8007D438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8007D4C8;
    // 0x8007D438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007D43C:
    // 0x8007D43C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8007D440: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007D444: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8007D448: sh          $zero, 0xB76($at)
    MEM_H(0XB76, ctx->r1) = 0;
    // 0x8007D44C: lhu         $t9, 0x8($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X8);
    // 0x8007D450: nop

    // 0x8007D454: ori         $t0, $t9, 0x10
    ctx->r8 = ctx->r25 | 0X10;
    // 0x8007D458: b           L_8007D4C4
    // 0x8007D45C: sh          $t0, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r8;
        goto L_8007D4C4;
    // 0x8007D45C: sh          $t0, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r8;
L_8007D460:
    // 0x8007D460: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007D464: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8007D468: sh          $zero, 0xB76($at)
    MEM_H(0XB76, ctx->r1) = 0;
    // 0x8007D46C: lhu         $t1, 0xA9C($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0XA9C);
    // 0x8007D470: nop

    // 0x8007D474: ori         $t2, $t1, 0x10
    ctx->r10 = ctx->r9 | 0X10;
    // 0x8007D478: b           L_8007D4C4
    // 0x8007D47C: sh          $t2, 0xA9C($v0)
    MEM_H(0XA9C, ctx->r2) = ctx->r10;
        goto L_8007D4C4;
    // 0x8007D47C: sh          $t2, 0xA9C($v0)
    MEM_H(0XA9C, ctx->r2) = ctx->r10;
L_8007D480:
    // 0x8007D480: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8007D484: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007D488: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8007D48C: sh          $t3, 0xB76($at)
    MEM_H(0XB76, ctx->r1) = ctx->r11;
    // 0x8007D490: lhu         $t4, 0x8($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X8);
    // 0x8007D494: nop

    // 0x8007D498: ori         $t5, $t4, 0x10
    ctx->r13 = ctx->r12 | 0X10;
    // 0x8007D49C: b           L_8007D4C4
    // 0x8007D4A0: sh          $t5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r13;
        goto L_8007D4C4;
    // 0x8007D4A0: sh          $t5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r13;
L_8007D4A4:
    // 0x8007D4A4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8007D4A8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007D4AC: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8007D4B0: sh          $t6, 0xB76($at)
    MEM_H(0XB76, ctx->r1) = ctx->r14;
    // 0x8007D4B4: lhu         $t7, 0xA9C($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0XA9C);
    // 0x8007D4B8: nop

    // 0x8007D4BC: ori         $t8, $t7, 0x10
    ctx->r24 = ctx->r15 | 0X10;
    // 0x8007D4C0: sh          $t8, 0xA9C($v0)
    MEM_H(0XA9C, ctx->r2) = ctx->r24;
L_8007D4C4:
    // 0x8007D4C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007D4C8:
    // 0x8007D4C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007D4CC: jr          $ra
    // 0x8007D4D0: nop

    return;
    // 0x8007D4D0: nop

;}
RECOMP_FUNC void func_8007D4D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D4D4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D4D8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8007D4DC: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8007D4E0: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x8007D4E4: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x8007D4E8: lbu         $t7, 0xA94($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0XA94);
    // 0x8007D4EC: addiu       $t0, $zero, 0x80
    ctx->r8 = ADD32(0, 0X80);
    // 0x8007D4F0: sh          $t0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r8;
    // 0x8007D4F4: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
    // 0x8007D4F8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D4FC: sh          $t6, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r14;
    // 0x8007D500: sh          $t7, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r15;
    // 0x8007D504: sb          $zero, 0x38DF($at)
    MEM_B(0X38DF, ctx->r1) = 0;
    // 0x8007D508: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D50C: sb          $zero, 0x39F3($at)
    MEM_B(0X39F3, ctx->r1) = 0;
    // 0x8007D510: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D514: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8007D518: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007D51C: sb          $t8, 0x3A20($at)
    MEM_B(0X3A20, ctx->r1) = ctx->r24;
    // 0x8007D520: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007D524: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D528: sb          $zero, 0x3AC6($at)
    MEM_B(0X3AC6, ctx->r1) = 0;
    // 0x8007D52C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x8007D530: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8007D534: addiu       $a2, $zero, 0x138
    ctx->r6 = ADD32(0, 0X138);
    // 0x8007D538: jal         0x800201A8
    // 0x8007D53C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    func_800201A8(rdram, ctx);
        goto after_0;
    // 0x8007D53C: addiu       $a3, $zero, 0xE8
    ctx->r7 = ADD32(0, 0XE8);
    after_0:
    // 0x8007D540: jal         0x800742FC
    // 0x8007D544: nop

    func_800742FC(rdram, ctx);
        goto after_1;
    // 0x8007D544: nop

    after_1:
    // 0x8007D548: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007D54C: lwc1        $f2, -0x4D40($at)
    ctx->f2.u32l = MEM_W(ctx->r1, -0X4D40);
    // 0x8007D550: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007D554: sb          $zero, -0x2FAF($at)
    MEM_B(-0X2FAF, ctx->r1) = 0;
    // 0x8007D558: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D55C: sb          $zero, 0x39F3($at)
    MEM_B(0X39F3, ctx->r1) = 0;
    // 0x8007D560: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007D564: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D568: addiu       $a0, $a0, 0x3968
    ctx->r4 = ADD32(ctx->r4, 0X3968);
    // 0x8007D56C: sb          $zero, 0x39F4($at)
    MEM_B(0X39F4, ctx->r1) = 0;
    // 0x8007D570: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x8007D574: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D578: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x8007D57C: sb          $t1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r9;
    // 0x8007D580: sh          $zero, 0x396A($at)
    MEM_H(0X396A, ctx->r1) = 0;
    // 0x8007D584: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007D588: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x8007D58C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8007D590: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8007D594: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8007D598: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8007D59C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007D5A0: lhu         $t2, 0x8($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0X8);
    // 0x8007D5A4: lhu         $t4, 0xA9C($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0XA9C);
    // 0x8007D5A8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8007D5AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007D5B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8007D5B4: andi        $t3, $t2, 0xFFEF
    ctx->r11 = ctx->r10 & 0XFFEF;
    // 0x8007D5B8: andi        $t5, $t4, 0xFFEF
    ctx->r13 = ctx->r12 & 0XFFEF;
    // 0x8007D5BC: sh          $t3, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r11;
    // 0x8007D5C0: sh          $t5, 0xA9C($v1)
    MEM_H(0XA9C, ctx->r3) = ctx->r13;
    // 0x8007D5C4: sh          $a1, 0x14A8($v0)
    MEM_H(0X14A8, ctx->r2) = ctx->r5;
    // 0x8007D5C8: sb          $a1, 0x14AA($v0)
    MEM_B(0X14AA, ctx->r2) = ctx->r5;
    // 0x8007D5CC: sb          $zero, 0x14AB($v0)
    MEM_B(0X14AB, ctx->r2) = 0;
    // 0x8007D5D0: sw          $zero, 0x14D0($v0)
    MEM_W(0X14D0, ctx->r2) = 0;
    // 0x8007D5D4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D5D8: swc1        $f2, 0x14C4($v0)
    MEM_W(0X14C4, ctx->r2) = ctx->f2.u32l;
    // 0x8007D5DC: swc1        $f2, 0x14C8($v0)
    MEM_W(0X14C8, ctx->r2) = ctx->f2.u32l;
    // 0x8007D5E0: swc1        $f2, 0x14CC($v0)
    MEM_W(0X14CC, ctx->r2) = ctx->f2.u32l;
    // 0x8007D5E4: swc1        $f0, 0x14AC($v0)
    MEM_W(0X14AC, ctx->r2) = ctx->f0.u32l;
    // 0x8007D5E8: swc1        $f0, 0x14B4($v0)
    MEM_W(0X14B4, ctx->r2) = ctx->f0.u32l;
    // 0x8007D5EC: swc1        $f0, 0x14BC($v0)
    MEM_W(0X14BC, ctx->r2) = ctx->f0.u32l;
    // 0x8007D5F0: swc1        $f0, 0x14C0($v0)
    MEM_W(0X14C0, ctx->r2) = ctx->f0.u32l;
    // 0x8007D5F4: swc1        $f4, 0x14B0($v0)
    MEM_W(0X14B0, ctx->r2) = ctx->f4.u32l;
    // 0x8007D5F8: swc1        $f6, 0x14B8($v0)
    MEM_W(0X14B8, ctx->r2) = ctx->f6.u32l;
    // 0x8007D5FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007D600: sb          $zero, 0x3AA9($at)
    MEM_B(0X3AA9, ctx->r1) = 0;
    // 0x8007D604: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D608: sb          $zero, 0x3AAA($at)
    MEM_B(0X3AAA, ctx->r1) = 0;
    // 0x8007D60C: jr          $ra
    // 0x8007D610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8007D610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8007D614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D614: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007D618: lhu         $a0, 0x396A($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X396A);
    // 0x8007D61C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007D620: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007D624: bne         $a0, $zero, L_8007D694
    if (ctx->r4 != 0) {
        // 0x8007D628: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_8007D694;
    }
    // 0x8007D628: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8007D62C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8007D630: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8007D634: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x8007D638: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007D63C: lbu         $t7, 0x7D6($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X7D6);
    // 0x8007D640: nop

    // 0x8007D644: bne         $t7, $zero, L_8007D698
    if (ctx->r15 != 0) {
        // 0x8007D648: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_8007D698;
    }
    // 0x8007D648: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x8007D64C: jal         0x80015BC0
    // 0x8007D650: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x8007D650: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    after_0:
    // 0x8007D654: jal         0x80015BC0
    // 0x8007D658: addiu       $a0, $zero, 0x201
    ctx->r4 = ADD32(0, 0X201);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x8007D658: addiu       $a0, $zero, 0x201
    ctx->r4 = ADD32(0, 0X201);
    after_1:
    // 0x8007D65C: jal         0x80015BC0
    // 0x8007D660: addiu       $a0, $zero, 0x202
    ctx->r4 = ADD32(0, 0X202);
    func_80015BC0(rdram, ctx);
        goto after_2;
    // 0x8007D660: addiu       $a0, $zero, 0x202
    ctx->r4 = ADD32(0, 0X202);
    after_2:
    // 0x8007D664: jal         0x80015BC0
    // 0x8007D668: addiu       $a0, $zero, 0x203
    ctx->r4 = ADD32(0, 0X203);
    func_80015BC0(rdram, ctx);
        goto after_3;
    // 0x8007D668: addiu       $a0, $zero, 0x203
    ctx->r4 = ADD32(0, 0X203);
    after_3:
    // 0x8007D66C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8007D670: lw          $t9, -0x2F98($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2F98);
    // 0x8007D674: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8007D678: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8007D67C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8007D680: sb          $t8, 0x7D6($at)
    MEM_B(0X7D6, ctx->r1) = ctx->r24;
    // 0x8007D684: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007D688: lhu         $a0, 0x396A($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X396A);
    // 0x8007D68C: nop

    // 0x8007D690: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8007D694:
    // 0x8007D694: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
L_8007D698:
    // 0x8007D698: bne         $v0, $at, L_8007D6C4
    if (ctx->r2 != ctx->r1) {
        // 0x8007D69C: addiu       $at, $zero, 0x64
        ctx->r1 = ADD32(0, 0X64);
            goto L_8007D6C4;
    }
    // 0x8007D69C: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x8007D6A0: jal         0x80074E88
    // 0x8007D6A4: nop

    func_80074E88(rdram, ctx);
        goto after_4;
    // 0x8007D6A4: nop

    after_4:
    // 0x8007D6A8: jal         0x8007A5B8
    // 0x8007D6AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8007A5B8(rdram, ctx);
        goto after_5;
    // 0x8007D6AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x8007D6B0: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007D6B4: lhu         $a0, 0x396A($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X396A);
    // 0x8007D6B8: nop

    // 0x8007D6BC: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8007D6C0: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
L_8007D6C4:
    // 0x8007D6C4: bne         $v0, $at, L_8007D6E8
    if (ctx->r2 != ctx->r1) {
        // 0x8007D6C8: addiu       $at, $zero, 0xD2
        ctx->r1 = ADD32(0, 0XD2);
            goto L_8007D6E8;
    }
    // 0x8007D6C8: addiu       $at, $zero, 0xD2
    ctx->r1 = ADD32(0, 0XD2);
    // 0x8007D6CC: jal         0x80074FF4
    // 0x8007D6D0: nop

    func_80074FF4(rdram, ctx);
        goto after_6;
    // 0x8007D6D0: nop

    after_6:
    // 0x8007D6D4: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007D6D8: lhu         $a0, 0x396A($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X396A);
    // 0x8007D6DC: nop

    // 0x8007D6E0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8007D6E4: addiu       $at, $zero, 0xD2
    ctx->r1 = ADD32(0, 0XD2);
L_8007D6E8:
    // 0x8007D6E8: beq         $v0, $at, L_8007D710
    if (ctx->r2 == ctx->r1) {
        // 0x8007D6EC: addiu       $t4, $zero, 0xA
        ctx->r12 = ADD32(0, 0XA);
            goto L_8007D710;
    }
    // 0x8007D6EC: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x8007D6F0: jal         0x8007F5D0
    // 0x8007D6F4: nop

    func_8007F5D0(rdram, ctx);
        goto after_7;
    // 0x8007D6F4: nop

    after_7:
    // 0x8007D6F8: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x8007D6FC: lhu         $t0, 0x396A($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X396A);
    // 0x8007D700: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D704: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8007D708: b           L_8007D72C
    // 0x8007D70C: sh          $t1, 0x396A($at)
    MEM_H(0X396A, ctx->r1) = ctx->r9;
        goto L_8007D72C;
    // 0x8007D70C: sh          $t1, 0x396A($at)
    MEM_H(0X396A, ctx->r1) = ctx->r9;
L_8007D710:
    // 0x8007D710: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D714: addiu       $v0, $v0, 0x3968
    ctx->r2 = ADD32(ctx->r2, 0X3968);
    // 0x8007D718: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x8007D71C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D720: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8007D724: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x8007D728: sb          $t4, 0x396C($at)
    MEM_B(0X396C, ctx->r1) = ctx->r12;
L_8007D72C:
    // 0x8007D72C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007D730: addiu       $a0, $a0, 0x39E4
    ctx->r4 = ADD32(ctx->r4, 0X39E4);
    // 0x8007D734: lui         $at, 0xC200
    ctx->r1 = S32(0XC200 << 16);
    // 0x8007D738: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007D73C: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8007D740: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8007D744: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8007D748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007D74C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8007D750: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x8007D754: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8007D758: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8007D75C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8007D760: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8007D764: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8007D768: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8007D76C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8007D770: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x8007D774: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8007D778: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x8007D77C: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x8007D780: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8007D784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007D788: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x8007D78C: sh          $v0, 0x38D0($v1)
    MEM_H(0X38D0, ctx->r3) = ctx->r2;
    // 0x8007D790: jr          $ra
    // 0x8007D794: sh          $v0, 0x3948($v1)
    MEM_H(0X3948, ctx->r3) = ctx->r2;
    return;
    // 0x8007D794: sh          $v0, 0x3948($v1)
    MEM_H(0X3948, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_8007D798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D798: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D79C: addiu       $v0, $v0, 0x396C
    ctx->r2 = ADD32(ctx->r2, 0X396C);
    // 0x8007D7A0: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8007D7A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007D7A8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8007D7AC: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8007D7B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007D7B4: bne         $t8, $zero, L_8007D860
    if (ctx->r24 != 0) {
        // 0x8007D7B8: sb          $t7, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r15;
            goto L_8007D860;
    }
    // 0x8007D7B8: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8007D7BC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007D7C0: addiu       $a0, $a0, 0x3968
    ctx->r4 = ADD32(ctx->r4, 0X3968);
    // 0x8007D7C4: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x8007D7C8: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x8007D7CC: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x8007D7D0: addiu       $t1, $zero, 0x28
    ctx->r9 = ADD32(0, 0X28);
    // 0x8007D7D4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8007D7D8: sb          $zero, 0x2148($v1)
    MEM_B(0X2148, ctx->r3) = 0;
    // 0x8007D7DC: sb          $zero, 0x2184($v1)
    MEM_B(0X2184, ctx->r3) = 0;
    // 0x8007D7E0: sb          $t0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r8;
    // 0x8007D7E4: jal         0x80073F40
    // 0x8007D7E8: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    func_80073F40(rdram, ctx);
        goto after_0;
    // 0x8007D7E8: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    after_0:
    // 0x8007D7EC: jal         0x80073F70
    // 0x8007D7F0: nop

    func_80073F70(rdram, ctx);
        goto after_1;
    // 0x8007D7F0: nop

    after_1:
    // 0x8007D7F4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8007D7F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8007D7FC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8007D800: jal         0x80074274
    // 0x8007D804: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80074274(rdram, ctx);
        goto after_2;
    // 0x8007D804: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x8007D808: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8007D80C: lbu         $a1, -0x225C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X225C);
    // 0x8007D810: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D814: jal         0x800741CC
    // 0x8007D818: nop

    func_800741CC(rdram, ctx);
        goto after_3;
    // 0x8007D818: nop

    after_3:
    // 0x8007D81C: jal         0x80073F70
    // 0x8007D820: nop

    func_80073F70(rdram, ctx);
        goto after_4;
    // 0x8007D820: nop

    after_4:
    // 0x8007D824: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8007D828: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8007D82C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8007D830: jal         0x80074274
    // 0x8007D834: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80074274(rdram, ctx);
        goto after_5;
    // 0x8007D834: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x8007D838: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8007D83C: lbu         $a1, -0x2CF0($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X2CF0);
    // 0x8007D840: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8007D844: jal         0x800741CC
    // 0x8007D848: nop

    func_800741CC(rdram, ctx);
        goto after_6;
    // 0x8007D848: nop

    after_6:
    // 0x8007D84C: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x8007D850: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D854: sb          $t2, 0x396C($at)
    MEM_B(0X396C, ctx->r1) = ctx->r10;
    // 0x8007D858: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007D85C: sh          $zero, 0x39B6($at)
    MEM_H(0X39B6, ctx->r1) = 0;
L_8007D860:
    // 0x8007D860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007D864: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007D868: jr          $ra
    // 0x8007D86C: nop

    return;
    // 0x8007D86C: nop

;}
RECOMP_FUNC void func_8007D870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D870: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007D874: addiu       $v0, $v0, 0x396C
    ctx->r2 = ADD32(ctx->r2, 0X396C);
    // 0x8007D878: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8007D87C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007D880: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8007D884: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8007D888: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007D88C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007D890: bne         $t8, $zero, L_8007DB4C
    if (ctx->r24 != 0) {
        // 0x8007D894: sb          $t7, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r15;
            goto L_8007DB4C;
    }
    // 0x8007D894: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8007D898: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007D89C: addiu       $v1, $v1, 0x3968
    ctx->r3 = ADD32(ctx->r3, 0X3968);
    // 0x8007D8A0: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x8007D8A4: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x8007D8A8: addiu       $s0, $s0, 0x4890
    ctx->r16 = ADD32(ctx->r16, 0X4890);
    // 0x8007D8AC: addiu       $t1, $zero, 0x8
    ctx->r9 = ADD32(0, 0X8);
    // 0x8007D8B0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8007D8B4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007D8B8: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8007D8BC: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
    // 0x8007D8C0: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    // 0x8007D8C4: sb          $t2, 0x21C0($s0)
    MEM_B(0X21C0, ctx->r16) = ctx->r10;
    // 0x8007D8C8: addiu       $a0, $a0, 0x6A4C
    ctx->r4 = ADD32(ctx->r4, 0X6A4C);
    // 0x8007D8CC: jal         0x8007AAF8
    // 0x8007D8D0: addiu       $a1, $zero, 0x15B
    ctx->r5 = ADD32(0, 0X15B);
    func_8007AAF8(rdram, ctx);
        goto after_0;
    // 0x8007D8D0: addiu       $a1, $zero, 0x15B
    ctx->r5 = ADD32(0, 0X15B);
    after_0:
    // 0x8007D8D4: lbu         $t3, 0x21C4($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X21C4);
    // 0x8007D8D8: lbu         $t5, 0x21C5($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X21C5);
    // 0x8007D8DC: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x8007D8E0: addiu       $t8, $zero, -0x80
    ctx->r24 = ADD32(0, -0X80);
    // 0x8007D8E4: addiu       $t9, $zero, 0x80
    ctx->r25 = ADD32(0, 0X80);
    // 0x8007D8E8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007D8EC: andi        $t4, $t3, 0xFF01
    ctx->r12 = ctx->r11 & 0XFF01;
    // 0x8007D8F0: andi        $t6, $t5, 0xFFBF
    ctx->r14 = ctx->r13 & 0XFFBF;
    // 0x8007D8F4: sb          $t4, 0x21C4($s0)
    MEM_B(0X21C4, ctx->r16) = ctx->r12;
    // 0x8007D8F8: sb          $t6, 0x21C5($s0)
    MEM_B(0X21C5, ctx->r16) = ctx->r14;
    // 0x8007D8FC: sb          $t7, 0x21C1($s0)
    MEM_B(0X21C1, ctx->r16) = ctx->r15;
    // 0x8007D900: sh          $t8, 0x21D4($s0)
    MEM_H(0X21D4, ctx->r16) = ctx->r24;
    // 0x8007D904: sh          $t9, 0x21D8($s0)
    MEM_H(0X21D8, ctx->r16) = ctx->r25;
    // 0x8007D908: addiu       $a0, $a0, 0x6A4C
    ctx->r4 = ADD32(ctx->r4, 0X6A4C);
    // 0x8007D90C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007D910: jal         0x8002135C
    // 0x8007D914: addiu       $a2, $zero, 0x77
    ctx->r6 = ADD32(0, 0X77);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8007D914: addiu       $a2, $zero, 0x77
    ctx->r6 = ADD32(0, 0X77);
    after_1:
    // 0x8007D918: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007D91C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007D920: sb          $t0, 0x21FC($s0)
    MEM_B(0X21FC, ctx->r16) = ctx->r8;
    // 0x8007D924: addiu       $a0, $a0, 0x6A88
    ctx->r4 = ADD32(ctx->r4, 0X6A88);
    // 0x8007D928: jal         0x8007AAF8
    // 0x8007D92C: addiu       $a1, $zero, 0x15C
    ctx->r5 = ADD32(0, 0X15C);
    func_8007AAF8(rdram, ctx);
        goto after_2;
    // 0x8007D92C: addiu       $a1, $zero, 0x15C
    ctx->r5 = ADD32(0, 0X15C);
    after_2:
    // 0x8007D930: lbu         $t1, 0x2200($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X2200);
    // 0x8007D934: lbu         $t3, 0x2201($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X2201);
    // 0x8007D938: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x8007D93C: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x8007D940: addiu       $t7, $zero, -0x80
    ctx->r15 = ADD32(0, -0X80);
    // 0x8007D944: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007D948: andi        $t2, $t1, 0xFF01
    ctx->r10 = ctx->r9 & 0XFF01;
    // 0x8007D94C: andi        $t4, $t3, 0xFFBF
    ctx->r12 = ctx->r11 & 0XFFBF;
    // 0x8007D950: sb          $t2, 0x2200($s0)
    MEM_B(0X2200, ctx->r16) = ctx->r10;
    // 0x8007D954: sb          $t4, 0x2201($s0)
    MEM_B(0X2201, ctx->r16) = ctx->r12;
    // 0x8007D958: sb          $t5, 0x21FD($s0)
    MEM_B(0X21FD, ctx->r16) = ctx->r13;
    // 0x8007D95C: sh          $t6, 0x2210($s0)
    MEM_H(0X2210, ctx->r16) = ctx->r14;
    // 0x8007D960: sh          $t7, 0x2214($s0)
    MEM_H(0X2214, ctx->r16) = ctx->r15;
    // 0x8007D964: addiu       $a0, $a0, 0x6A88
    ctx->r4 = ADD32(ctx->r4, 0X6A88);
    // 0x8007D968: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007D96C: jal         0x8002135C
    // 0x8007D970: addiu       $a2, $zero, 0x77
    ctx->r6 = ADD32(0, 0X77);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x8007D970: addiu       $a2, $zero, 0x77
    ctx->r6 = ADD32(0, 0X77);
    after_3:
    // 0x8007D974: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8007D978: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007D97C: sb          $t8, 0x2238($s0)
    MEM_B(0X2238, ctx->r16) = ctx->r24;
    // 0x8007D980: addiu       $a0, $a0, 0x6AC4
    ctx->r4 = ADD32(ctx->r4, 0X6AC4);
    // 0x8007D984: jal         0x8007AAF8
    // 0x8007D988: addiu       $a1, $zero, 0x160
    ctx->r5 = ADD32(0, 0X160);
    func_8007AAF8(rdram, ctx);
        goto after_4;
    // 0x8007D988: addiu       $a1, $zero, 0x160
    ctx->r5 = ADD32(0, 0X160);
    after_4:
    // 0x8007D98C: lbu         $t9, 0x223C($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X223C);
    // 0x8007D990: lbu         $t2, 0x223D($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X223D);
    // 0x8007D994: andi        $t0, $t9, 0xFF01
    ctx->r8 = ctx->r25 & 0XFF01;
    // 0x8007D998: ori         $t1, $t0, 0x6
    ctx->r9 = ctx->r8 | 0X6;
    // 0x8007D99C: addiu       $t4, $zero, 0xC0
    ctx->r12 = ADD32(0, 0XC0);
    // 0x8007D9A0: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x8007D9A4: addiu       $t6, $zero, -0x80
    ctx->r14 = ADD32(0, -0X80);
    // 0x8007D9A8: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x8007D9AC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007D9B0: andi        $t3, $t2, 0xFFBF
    ctx->r11 = ctx->r10 & 0XFFBF;
    // 0x8007D9B4: sb          $t1, 0x223C($s0)
    MEM_B(0X223C, ctx->r16) = ctx->r9;
    // 0x8007D9B8: sb          $t3, 0x223D($s0)
    MEM_B(0X223D, ctx->r16) = ctx->r11;
    // 0x8007D9BC: sb          $t4, 0x2245($s0)
    MEM_B(0X2245, ctx->r16) = ctx->r12;
    // 0x8007D9C0: sb          $t5, 0x2239($s0)
    MEM_B(0X2239, ctx->r16) = ctx->r13;
    // 0x8007D9C4: sh          $t6, 0x224C($s0)
    MEM_H(0X224C, ctx->r16) = ctx->r14;
    // 0x8007D9C8: sh          $t7, 0x2250($s0)
    MEM_H(0X2250, ctx->r16) = ctx->r15;
    // 0x8007D9CC: addiu       $a0, $a0, 0x6AC4
    ctx->r4 = ADD32(ctx->r4, 0X6AC4);
    // 0x8007D9D0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007D9D4: jal         0x8002135C
    // 0x8007D9D8: addiu       $a2, $zero, 0x7D
    ctx->r6 = ADD32(0, 0X7D);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x8007D9D8: addiu       $a2, $zero, 0x7D
    ctx->r6 = ADD32(0, 0X7D);
    after_5:
    // 0x8007D9DC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8007D9E0: lbu         $v0, -0x2CF0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2CF0);
    // 0x8007D9E4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007D9E8: slti        $at, $v0, 0x15
    ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x8007D9EC: beq         $at, $zero, L_8007DA04
    if (ctx->r1 == 0) {
        // 0x8007D9F0: lui         $a0, 0x8010
        ctx->r4 = S32(0X8010 << 16);
            goto L_8007DA04;
    }
    // 0x8007D9F0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007D9F4: addiu       $a1, $v0, 0x176
    ctx->r5 = ADD32(ctx->r2, 0X176);
    // 0x8007D9F8: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x8007D9FC: b           L_8007DA10
    // 0x8007DA00: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
        goto L_8007DA10;
    // 0x8007DA00: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
L_8007DA04:
    // 0x8007DA04: addiu       $a1, $v0, 0x60
    ctx->r5 = ADD32(ctx->r2, 0X60);
    // 0x8007DA08: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x8007DA0C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
L_8007DA10:
    // 0x8007DA10: sb          $t0, 0x22B0($s0)
    MEM_B(0X22B0, ctx->r16) = ctx->r8;
    // 0x8007DA14: jal         0x8007AAF8
    // 0x8007DA18: addiu       $a0, $a0, 0x6B3C
    ctx->r4 = ADD32(ctx->r4, 0X6B3C);
    func_8007AAF8(rdram, ctx);
        goto after_6;
    // 0x8007DA18: addiu       $a0, $a0, 0x6B3C
    ctx->r4 = ADD32(ctx->r4, 0X6B3C);
    after_6:
    // 0x8007DA1C: lbu         $t1, 0x22B4($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X22B4);
    // 0x8007DA20: lbu         $t3, 0x22B5($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X22B5);
    // 0x8007DA24: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x8007DA28: addiu       $t6, $zero, 0x7F
    ctx->r14 = ADD32(0, 0X7F);
    // 0x8007DA2C: addiu       $t7, $zero, 0x9C
    ctx->r15 = ADD32(0, 0X9C);
    // 0x8007DA30: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007DA34: andi        $t2, $t1, 0xFF01
    ctx->r10 = ctx->r9 & 0XFF01;
    // 0x8007DA38: andi        $t4, $t3, 0xFFBF
    ctx->r12 = ctx->r11 & 0XFFBF;
    // 0x8007DA3C: sb          $t2, 0x22B4($s0)
    MEM_B(0X22B4, ctx->r16) = ctx->r10;
    // 0x8007DA40: sb          $t4, 0x22B5($s0)
    MEM_B(0X22B5, ctx->r16) = ctx->r12;
    // 0x8007DA44: sb          $t5, 0x22B1($s0)
    MEM_B(0X22B1, ctx->r16) = ctx->r13;
    // 0x8007DA48: sh          $t6, 0x22C4($s0)
    MEM_H(0X22C4, ctx->r16) = ctx->r14;
    // 0x8007DA4C: sh          $t7, 0x22C8($s0)
    MEM_H(0X22C8, ctx->r16) = ctx->r15;
    // 0x8007DA50: addiu       $a0, $a0, 0x6B3C
    ctx->r4 = ADD32(ctx->r4, 0X6B3C);
    // 0x8007DA54: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007DA58: jal         0x8002135C
    // 0x8007DA5C: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    func_8002135C(rdram, ctx);
        goto after_7;
    // 0x8007DA5C: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    after_7:
    // 0x8007DA60: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8007DA64: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007DA68: sb          $t8, 0x2274($s0)
    MEM_B(0X2274, ctx->r16) = ctx->r24;
    // 0x8007DA6C: addiu       $a0, $a0, 0x6B00
    ctx->r4 = ADD32(ctx->r4, 0X6B00);
    // 0x8007DA70: jal         0x8007AAF8
    // 0x8007DA74: addiu       $a1, $zero, 0x15F
    ctx->r5 = ADD32(0, 0X15F);
    func_8007AAF8(rdram, ctx);
        goto after_8;
    // 0x8007DA74: addiu       $a1, $zero, 0x15F
    ctx->r5 = ADD32(0, 0X15F);
    after_8:
    // 0x8007DA78: lbu         $t9, 0x2278($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2278);
    // 0x8007DA7C: lbu         $t2, 0x2279($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2279);
    // 0x8007DA80: andi        $t0, $t9, 0xFF01
    ctx->r8 = ctx->r25 & 0XFF01;
    // 0x8007DA84: ori         $t1, $t0, 0x6
    ctx->r9 = ctx->r8 | 0X6;
    // 0x8007DA88: addiu       $t4, $zero, 0xC0
    ctx->r12 = ADD32(0, 0XC0);
    // 0x8007DA8C: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x8007DA90: addiu       $t6, $zero, 0x80
    ctx->r14 = ADD32(0, 0X80);
    // 0x8007DA94: addiu       $t7, $zero, -0x80
    ctx->r15 = ADD32(0, -0X80);
    // 0x8007DA98: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007DA9C: andi        $t3, $t2, 0xFFBF
    ctx->r11 = ctx->r10 & 0XFFBF;
    // 0x8007DAA0: sb          $t1, 0x2278($s0)
    MEM_B(0X2278, ctx->r16) = ctx->r9;
    // 0x8007DAA4: sb          $t3, 0x2279($s0)
    MEM_B(0X2279, ctx->r16) = ctx->r11;
    // 0x8007DAA8: sb          $t4, 0x2281($s0)
    MEM_B(0X2281, ctx->r16) = ctx->r12;
    // 0x8007DAAC: sb          $t5, 0x2275($s0)
    MEM_B(0X2275, ctx->r16) = ctx->r13;
    // 0x8007DAB0: sh          $t6, 0x2288($s0)
    MEM_H(0X2288, ctx->r16) = ctx->r14;
    // 0x8007DAB4: sh          $t7, 0x228C($s0)
    MEM_H(0X228C, ctx->r16) = ctx->r15;
    // 0x8007DAB8: addiu       $a0, $a0, 0x6B00
    ctx->r4 = ADD32(ctx->r4, 0X6B00);
    // 0x8007DABC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007DAC0: jal         0x8002135C
    // 0x8007DAC4: addiu       $a2, $zero, 0x7D
    ctx->r6 = ADD32(0, 0X7D);
    func_8002135C(rdram, ctx);
        goto after_9;
    // 0x8007DAC4: addiu       $a2, $zero, 0x7D
    ctx->r6 = ADD32(0, 0X7D);
    after_9:
    // 0x8007DAC8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8007DACC: lbu         $v0, -0x225C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X225C);
    // 0x8007DAD0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007DAD4: slti        $at, $v0, 0x15
    ctx->r1 = SIGNED(ctx->r2) < 0X15 ? 1 : 0;
    // 0x8007DAD8: beq         $at, $zero, L_8007DAF0
    if (ctx->r1 == 0) {
        // 0x8007DADC: lui         $a0, 0x8010
        ctx->r4 = S32(0X8010 << 16);
            goto L_8007DAF0;
    }
    // 0x8007DADC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007DAE0: addiu       $a1, $v0, 0x161
    ctx->r5 = ADD32(ctx->r2, 0X161);
    // 0x8007DAE4: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x8007DAE8: b           L_8007DAFC
    // 0x8007DAEC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
        goto L_8007DAFC;
    // 0x8007DAEC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
L_8007DAF0:
    // 0x8007DAF0: addiu       $a1, $v0, 0x9B
    ctx->r5 = ADD32(ctx->r2, 0X9B);
    // 0x8007DAF4: andi        $t9, $a1, 0xFFFF
    ctx->r25 = ctx->r5 & 0XFFFF;
    // 0x8007DAF8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
L_8007DAFC:
    // 0x8007DAFC: sb          $t0, 0x22EC($s0)
    MEM_B(0X22EC, ctx->r16) = ctx->r8;
    // 0x8007DB00: jal         0x8007AAF8
    // 0x8007DB04: addiu       $a0, $a0, 0x6B78
    ctx->r4 = ADD32(ctx->r4, 0X6B78);
    func_8007AAF8(rdram, ctx);
        goto after_10;
    // 0x8007DB04: addiu       $a0, $a0, 0x6B78
    ctx->r4 = ADD32(ctx->r4, 0X6B78);
    after_10:
    // 0x8007DB08: lbu         $t1, 0x22F0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X22F0);
    // 0x8007DB0C: lbu         $t3, 0x22F1($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X22F1);
    // 0x8007DB10: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x8007DB14: addiu       $t6, $zero, 0xC0
    ctx->r14 = ADD32(0, 0XC0);
    // 0x8007DB18: addiu       $t7, $zero, 0x50
    ctx->r15 = ADD32(0, 0X50);
    // 0x8007DB1C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007DB20: andi        $t2, $t1, 0xFF01
    ctx->r10 = ctx->r9 & 0XFF01;
    // 0x8007DB24: andi        $t4, $t3, 0xFFBF
    ctx->r12 = ctx->r11 & 0XFFBF;
    // 0x8007DB28: sb          $t2, 0x22F0($s0)
    MEM_B(0X22F0, ctx->r16) = ctx->r10;
    // 0x8007DB2C: sb          $t4, 0x22F1($s0)
    MEM_B(0X22F1, ctx->r16) = ctx->r12;
    // 0x8007DB30: sb          $t5, 0x22ED($s0)
    MEM_B(0X22ED, ctx->r16) = ctx->r13;
    // 0x8007DB34: sh          $t6, 0x2300($s0)
    MEM_H(0X2300, ctx->r16) = ctx->r14;
    // 0x8007DB38: sh          $t7, 0x2304($s0)
    MEM_H(0X2304, ctx->r16) = ctx->r15;
    // 0x8007DB3C: addiu       $a0, $a0, 0x6B78
    ctx->r4 = ADD32(ctx->r4, 0X6B78);
    // 0x8007DB40: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007DB44: jal         0x8002135C
    // 0x8007DB48: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    func_8002135C(rdram, ctx);
        goto after_11;
    // 0x8007DB48: addiu       $a2, $zero, 0x79
    ctx->r6 = ADD32(0, 0X79);
    after_11:
L_8007DB4C:
    // 0x8007DB4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007DB50: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007DB54: jr          $ra
    // 0x8007DB58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8007DB58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8007DB5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DB5C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8007DB60: addiu       $a1, $a1, 0x396C
    ctx->r5 = ADD32(ctx->r5, 0X396C);
    // 0x8007DB64: lbu         $t6, 0x0($a1)
    ctx->r14 = MEM_BU(ctx->r5, 0X0);
    // 0x8007DB68: lui         $t0, 0x2
    ctx->r8 = S32(0X2 << 16);
    // 0x8007DB6C: lui         $a2, 0x800E
    ctx->r6 = S32(0X800E << 16);
    // 0x8007DB70: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8007DB74: sb          $t7, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r15;
    // 0x8007DB78: addiu       $a2, $a2, -0x3770
    ctx->r6 = ADD32(ctx->r6, -0X3770);
    // 0x8007DB7C: ori         $t0, $t0, 0x8000
    ctx->r8 = ctx->r8 | 0X8000;
    // 0x8007DB80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007DB84: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8007DB88: addiu       $a3, $zero, 0x3C
    ctx->r7 = ADD32(0, 0X3C);
L_8007DB8C:
    // 0x8007DB8C: multu       $v0, $a3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007DB90: addiu       $v0, $a0, 0x2
    ctx->r2 = ADD32(ctx->r4, 0X2);
    // 0x8007DB94: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x8007DB98: slti        $at, $a0, 0x9
    ctx->r1 = SIGNED(ctx->r4) < 0X9 ? 1 : 0;
    // 0x8007DB9C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8007DBA0: mflo        $t8
    ctx->r24 = lo;
    // 0x8007DBA4: addu        $t9, $a2, $t8
    ctx->r25 = ADD32(ctx->r6, ctx->r24);
    // 0x8007DBA8: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x8007DBAC: lh          $t1, 0x215C($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X215C);
    // 0x8007DBB0: lh          $t3, 0x2160($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2160);
    // 0x8007DBB4: addiu       $t2, $t1, -0x10
    ctx->r10 = ADD32(ctx->r9, -0X10);
    // 0x8007DBB8: addiu       $t4, $t3, 0x10
    ctx->r12 = ADD32(ctx->r11, 0X10);
    // 0x8007DBBC: sh          $t2, 0x215C($v1)
    MEM_H(0X215C, ctx->r3) = ctx->r10;
    // 0x8007DBC0: bne         $at, $zero, L_8007DB8C
    if (ctx->r1 != 0) {
        // 0x8007DBC4: sh          $t4, 0x2160($v1)
        MEM_H(0X2160, ctx->r3) = ctx->r12;
            goto L_8007DB8C;
    }
    // 0x8007DBC4: sh          $t4, 0x2160($v1)
    MEM_H(0X2160, ctx->r3) = ctx->r12;
    // 0x8007DBC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8007DBCC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8007DBD0:
    // 0x8007DBD0: multu       $v0, $a3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007DBD4: addiu       $v0, $a0, 0x2
    ctx->r2 = ADD32(ctx->r4, 0X2);
    // 0x8007DBD8: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x8007DBDC: slti        $at, $a0, 0x8
    ctx->r1 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x8007DBE0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8007DBE4: mflo        $t6
    ctx->r14 = lo;
    // 0x8007DBE8: addu        $t7, $a2, $t6
    ctx->r15 = ADD32(ctx->r6, ctx->r14);
    // 0x8007DBEC: addu        $v1, $t7, $t0
    ctx->r3 = ADD32(ctx->r15, ctx->r8);
    // 0x8007DBF0: lh          $t8, 0x215C($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X215C);
    // 0x8007DBF4: lh          $t1, 0x2160($v1)
    ctx->r9 = MEM_H(ctx->r3, 0X2160);
    // 0x8007DBF8: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x8007DBFC: addiu       $t2, $t1, -0x10
    ctx->r10 = ADD32(ctx->r9, -0X10);
    // 0x8007DC00: sh          $t9, 0x215C($v1)
    MEM_H(0X215C, ctx->r3) = ctx->r25;
    // 0x8007DC04: bne         $at, $zero, L_8007DBD0
    if (ctx->r1 != 0) {
        // 0x8007DC08: sh          $t2, 0x2160($v1)
        MEM_H(0X2160, ctx->r3) = ctx->r10;
            goto L_8007DBD0;
    }
    // 0x8007DC08: sh          $t2, 0x2160($v1)
    MEM_H(0X2160, ctx->r3) = ctx->r10;
    // 0x8007DC0C: lbu         $t4, 0x0($a1)
    ctx->r12 = MEM_BU(ctx->r5, 0X0);
    // 0x8007DC10: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007DC14: bne         $t4, $zero, L_8007DC44
    if (ctx->r12 != 0) {
        // 0x8007DC18: addiu       $v0, $v0, 0x3968
        ctx->r2 = ADD32(ctx->r2, 0X3968);
            goto L_8007DC44;
    }
    // 0x8007DC18: addiu       $v0, $v0, 0x3968
    ctx->r2 = ADD32(ctx->r2, 0X3968);
    // 0x8007DC1C: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x8007DC20: addiu       $t7, $zero, 0x28
    ctx->r15 = ADD32(0, 0X28);
    // 0x8007DC24: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8007DC28: addiu       $v1, $zero, 0xD0
    ctx->r3 = ADD32(0, 0XD0);
    // 0x8007DC2C: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x8007DC30: sb          $t7, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r15;
    // 0x8007DC34: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007DC38: sb          $v1, 0x3A2F($at)
    MEM_B(0X3A2F, ctx->r1) = ctx->r3;
    // 0x8007DC3C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007DC40: sb          $v1, 0x3A30($at)
    MEM_B(0X3A30, ctx->r1) = ctx->r3;
L_8007DC44:
    // 0x8007DC44: jr          $ra
    // 0x8007DC48: nop

    return;
    // 0x8007DC48: nop

;}
RECOMP_FUNC void func_8007DC4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DC4C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007DC50: addiu       $v0, $v0, 0x3A2F
    ctx->r2 = ADD32(ctx->r2, 0X3A2F);
    // 0x8007DC54: lbu         $a2, 0x0($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X0);
    // 0x8007DC58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007DC5C: slti        $at, $a2, 0xD9
    ctx->r1 = SIGNED(ctx->r6) < 0XD9 ? 1 : 0;
    // 0x8007DC60: beq         $at, $zero, L_8007DC90
    if (ctx->r1 == 0) {
        // 0x8007DC64: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007DC90;
    }
    // 0x8007DC64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007DC68: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007DC6C: addiu       $a0, $a0, 0x6A4C
    ctx->r4 = ADD32(ctx->r4, 0X6A4C);
    // 0x8007DC70: jal         0x8002135C
    // 0x8007DC74: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x8007DC74: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_0:
    // 0x8007DC78: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007DC7C: addiu       $v0, $v0, 0x3A2F
    ctx->r2 = ADD32(ctx->r2, 0X3A2F);
    // 0x8007DC80: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8007DC84: nop

    // 0x8007DC88: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8007DC8C: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
L_8007DC90:
    // 0x8007DC90: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007DC94: addiu       $v1, $v1, 0x396C
    ctx->r3 = ADD32(ctx->r3, 0X396C);
    // 0x8007DC98: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8007DC9C: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8007DCA0: slti        $at, $v0, 0x25
    ctx->r1 = SIGNED(ctx->r2) < 0X25 ? 1 : 0;
    // 0x8007DCA4: beq         $at, $zero, L_8007DCE8
    if (ctx->r1 == 0) {
        // 0x8007DCA8: addiu       $a3, $a3, 0x3A30
        ctx->r7 = ADD32(ctx->r7, 0X3A30);
            goto L_8007DCE8;
    }
    // 0x8007DCA8: addiu       $a3, $a3, 0x3A30
    ctx->r7 = ADD32(ctx->r7, 0X3A30);
    // 0x8007DCAC: lbu         $a2, 0x0($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X0);
    // 0x8007DCB0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007DCB4: slti        $at, $a2, 0xD9
    ctx->r1 = SIGNED(ctx->r6) < 0XD9 ? 1 : 0;
    // 0x8007DCB8: beq         $at, $zero, L_8007DCE8
    if (ctx->r1 == 0) {
        // 0x8007DCBC: addiu       $a0, $a0, 0x6A88
        ctx->r4 = ADD32(ctx->r4, 0X6A88);
            goto L_8007DCE8;
    }
    // 0x8007DCBC: addiu       $a0, $a0, 0x6A88
    ctx->r4 = ADD32(ctx->r4, 0X6A88);
    // 0x8007DCC0: jal         0x8002135C
    // 0x8007DCC4: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8007DCC4: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_1:
    // 0x8007DCC8: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x8007DCCC: addiu       $a3, $a3, 0x3A30
    ctx->r7 = ADD32(ctx->r7, 0X3A30);
    // 0x8007DCD0: lbu         $t8, 0x0($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X0);
    // 0x8007DCD4: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007DCD8: addiu       $v1, $v1, 0x396C
    ctx->r3 = ADD32(ctx->r3, 0X396C);
    // 0x8007DCDC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8007DCE0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8007DCE4: sb          $t9, 0x0($a3)
    MEM_B(0X0, ctx->r7) = ctx->r25;
L_8007DCE8:
    // 0x8007DCE8: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x8007DCEC: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x8007DCF0: bne         $t1, $zero, L_8007DD14
    if (ctx->r9 != 0) {
        // 0x8007DCF4: sb          $t0, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r8;
            goto L_8007DD14;
    }
    // 0x8007DCF4: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
    // 0x8007DCF8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007DCFC: addiu       $v0, $v0, 0x3968
    ctx->r2 = ADD32(ctx->r2, 0X3968);
    // 0x8007DD00: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x8007DD04: addiu       $t4, $zero, 0xC
    ctx->r12 = ADD32(0, 0XC);
    // 0x8007DD08: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8007DD0C: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x8007DD10: sb          $t4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r12;
L_8007DD14:
    // 0x8007DD14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007DD18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007DD1C: jr          $ra
    // 0x8007DD20: nop

    return;
    // 0x8007DD20: nop

;}
RECOMP_FUNC void func_8007DD24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DD24: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x8007DD28: addiu       $t0, $t0, 0x396C
    ctx->r8 = ADD32(ctx->r8, 0X396C);
    // 0x8007DD2C: lbu         $t6, 0x0($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X0);
    // 0x8007DD30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007DD34: lui         $a3, 0x2
    ctx->r7 = S32(0X2 << 16);
    // 0x8007DD38: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x8007DD3C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8007DD40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007DD44: sb          $t7, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r15;
    // 0x8007DD48: addiu       $a1, $a1, -0x3770
    ctx->r5 = ADD32(ctx->r5, -0X3770);
    // 0x8007DD4C: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x8007DD50: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8007DD54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8007DD58: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
L_8007DD5C:
    // 0x8007DD5C: multu       $v1, $a2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007DD60: addiu       $v1, $a0, 0x2
    ctx->r3 = ADD32(ctx->r4, 0X2);
    // 0x8007DD64: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x8007DD68: slti        $at, $a0, 0x9
    ctx->r1 = SIGNED(ctx->r4) < 0X9 ? 1 : 0;
    // 0x8007DD6C: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8007DD70: mflo        $t8
    ctx->r24 = lo;
    // 0x8007DD74: addu        $t9, $a1, $t8
    ctx->r25 = ADD32(ctx->r5, ctx->r24);
    // 0x8007DD78: addu        $v0, $t9, $a3
    ctx->r2 = ADD32(ctx->r25, ctx->r7);
    // 0x8007DD7C: lh          $t1, 0x215C($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X215C);
    // 0x8007DD80: lh          $t3, 0x2160($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X2160);
    // 0x8007DD84: addiu       $t2, $t1, -0x10
    ctx->r10 = ADD32(ctx->r9, -0X10);
    // 0x8007DD88: addiu       $t4, $t3, 0x10
    ctx->r12 = ADD32(ctx->r11, 0X10);
    // 0x8007DD8C: sh          $t2, 0x215C($v0)
    MEM_H(0X215C, ctx->r2) = ctx->r10;
    // 0x8007DD90: bne         $at, $zero, L_8007DD5C
    if (ctx->r1 != 0) {
        // 0x8007DD94: sh          $t4, 0x2160($v0)
        MEM_H(0X2160, ctx->r2) = ctx->r12;
            goto L_8007DD5C;
    }
    // 0x8007DD94: sh          $t4, 0x2160($v0)
    MEM_H(0X2160, ctx->r2) = ctx->r12;
    // 0x8007DD98: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8007DD9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8007DDA0:
    // 0x8007DDA0: multu       $v1, $a2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007DDA4: addiu       $v1, $a0, 0x2
    ctx->r3 = ADD32(ctx->r4, 0X2);
    // 0x8007DDA8: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x8007DDAC: slti        $at, $a0, 0x8
    ctx->r1 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x8007DDB0: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8007DDB4: mflo        $t6
    ctx->r14 = lo;
    // 0x8007DDB8: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x8007DDBC: addu        $v0, $t7, $a3
    ctx->r2 = ADD32(ctx->r15, ctx->r7);
    // 0x8007DDC0: lh          $t8, 0x215C($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X215C);
    // 0x8007DDC4: lh          $t1, 0x2160($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X2160);
    // 0x8007DDC8: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x8007DDCC: addiu       $t2, $t1, -0x10
    ctx->r10 = ADD32(ctx->r9, -0X10);
    // 0x8007DDD0: sh          $t9, 0x215C($v0)
    MEM_H(0X215C, ctx->r2) = ctx->r25;
    // 0x8007DDD4: bne         $at, $zero, L_8007DDA0
    if (ctx->r1 != 0) {
        // 0x8007DDD8: sh          $t2, 0x2160($v0)
        MEM_H(0X2160, ctx->r2) = ctx->r10;
            goto L_8007DDA0;
    }
    // 0x8007DDD8: sh          $t2, 0x2160($v0)
    MEM_H(0X2160, ctx->r2) = ctx->r10;
    // 0x8007DDDC: lbu         $t4, 0x0($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X0);
    // 0x8007DDE0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8007DDE4: bne         $t4, $zero, L_8007DE38
    if (ctx->r12 != 0) {
        // 0x8007DDE8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8007DE38;
    }
    // 0x8007DDE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007DDEC:
    // 0x8007DDEC: multu       $v1, $a2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007DDF0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8007DDF4: andi        $t8, $v1, 0xFF
    ctx->r24 = ctx->r3 & 0XFF;
    // 0x8007DDF8: slti        $at, $t8, 0x8
    ctx->r1 = SIGNED(ctx->r24) < 0X8 ? 1 : 0;
    // 0x8007DDFC: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x8007DE00: mflo        $t5
    ctx->r13 = lo;
    // 0x8007DE04: addu        $t6, $a1, $t5
    ctx->r14 = ADD32(ctx->r5, ctx->r13);
    // 0x8007DE08: addu        $t7, $t6, $a3
    ctx->r15 = ADD32(ctx->r14, ctx->r7);
    // 0x8007DE0C: bne         $at, $zero, L_8007DDEC
    if (ctx->r1 != 0) {
        // 0x8007DE10: sb          $zero, 0x2148($t7)
        MEM_B(0X2148, ctx->r15) = 0;
            goto L_8007DDEC;
    }
    // 0x8007DE10: sb          $zero, 0x2148($t7)
    MEM_B(0X2148, ctx->r15) = 0;
    // 0x8007DE14: jal         0x80073F40
    // 0x8007DE18: nop

    func_80073F40(rdram, ctx);
        goto after_0;
    // 0x8007DE18: nop

    after_0:
    // 0x8007DE1C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007DE20: addiu       $v0, $v0, 0x3968
    ctx->r2 = ADD32(ctx->r2, 0X3968);
    // 0x8007DE24: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x8007DE28: nop

    // 0x8007DE2C: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x8007DE30: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    // 0x8007DE34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007DE38:
    // 0x8007DE38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007DE3C: jr          $ra
    // 0x8007DE40: nop

    return;
    // 0x8007DE40: nop

;}
RECOMP_FUNC void func_8007DE44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DE44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007DE48: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8007DE4C: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x8007DE50: addiu       $s0, $s0, 0x396A
    ctx->r16 = ADD32(ctx->r16, 0X396A);
    // 0x8007DE54: lhu         $a0, 0x0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X0);
    // 0x8007DE58: addiu       $at, $zero, 0xF6
    ctx->r1 = ADD32(0, 0XF6);
    // 0x8007DE5C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007DE60: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8007DE64: beq         $a0, $at, L_8007DE88
    if (ctx->r4 == ctx->r1) {
        // 0x8007DE68: swc1        $f20, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
            goto L_8007DE88;
    }
    // 0x8007DE68: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8007DE6C: jal         0x8007F5D0
    // 0x8007DE70: nop

    func_8007F5D0(rdram, ctx);
        goto after_0;
    // 0x8007DE70: nop

    after_0:
    // 0x8007DE74: lhu         $t6, 0x0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X0);
    // 0x8007DE78: nop

    // 0x8007DE7C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8007DE80: b           L_8007E0F8
    // 0x8007DE84: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
        goto L_8007E0F8;
    // 0x8007DE84: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
L_8007DE88:
    // 0x8007DE88: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007DE8C: addiu       $v0, $v0, 0x3968
    ctx->r2 = ADD32(ctx->r2, 0X3968);
    // 0x8007DE90: lbu         $t8, 0x0($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X0);
    // 0x8007DE94: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x8007DE98: addiu       $s0, $s0, 0x4890
    ctx->r16 = ADD32(ctx->r16, 0X4890);
    // 0x8007DE9C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007DEA0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007DEA4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8007DEA8: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x8007DEAC: sb          $t0, 0x2148($s0)
    MEM_B(0X2148, ctx->r16) = ctx->r8;
    // 0x8007DEB0: addiu       $a0, $a0, 0x69D4
    ctx->r4 = ADD32(ctx->r4, 0X69D4);
    // 0x8007DEB4: jal         0x8007AAF8
    // 0x8007DEB8: addiu       $a1, $zero, 0x18B
    ctx->r5 = ADD32(0, 0X18B);
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x8007DEB8: addiu       $a1, $zero, 0x18B
    ctx->r5 = ADD32(0, 0X18B);
    after_1:
    // 0x8007DEBC: lbu         $t1, 0x214C($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X214C);
    // 0x8007DEC0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007DEC4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x8007DEC8: lbu         $t5, 0x214D($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X214D);
    // 0x8007DECC: andi        $t2, $t1, 0xFF01
    ctx->r10 = ctx->r9 & 0XFF01;
    // 0x8007DED0: ori         $t3, $t2, 0x6
    ctx->r11 = ctx->r10 | 0X6;
    // 0x8007DED4: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x8007DED8: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x8007DEDC: addiu       $t9, $zero, 0xA0
    ctx->r25 = ADD32(0, 0XA0);
    // 0x8007DEE0: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x8007DEE4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007DEE8: ori         $t6, $t5, 0x40
    ctx->r14 = ctx->r13 | 0X40;
    // 0x8007DEEC: sb          $t3, 0x214C($s0)
    MEM_B(0X214C, ctx->r16) = ctx->r11;
    // 0x8007DEF0: sb          $t6, 0x214D($s0)
    MEM_B(0X214D, ctx->r16) = ctx->r14;
    // 0x8007DEF4: sb          $t7, 0x2155($s0)
    MEM_B(0X2155, ctx->r16) = ctx->r15;
    // 0x8007DEF8: sb          $t8, 0x2149($s0)
    MEM_B(0X2149, ctx->r16) = ctx->r24;
    // 0x8007DEFC: sh          $t9, 0x215C($s0)
    MEM_H(0X215C, ctx->r16) = ctx->r25;
    // 0x8007DF00: sh          $t0, 0x2160($s0)
    MEM_H(0X2160, ctx->r16) = ctx->r8;
    // 0x8007DF04: addiu       $a0, $a0, 0x69D4
    ctx->r4 = ADD32(ctx->r4, 0X69D4);
    // 0x8007DF08: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007DF0C: addiu       $a2, $zero, 0x7D
    ctx->r6 = ADD32(0, 0X7D);
    // 0x8007DF10: swc1        $f20, 0x216C($s0)
    MEM_W(0X216C, ctx->r16) = ctx->f20.u32l;
    // 0x8007DF14: jal         0x8002135C
    // 0x8007DF18: swc1        $f20, 0x2170($s0)
    MEM_W(0X2170, ctx->r16) = ctx->f20.u32l;
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8007DF18: swc1        $f20, 0x2170($s0)
    MEM_W(0X2170, ctx->r16) = ctx->f20.u32l;
    after_2:
    // 0x8007DF1C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8007DF20: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007DF24: sb          $t1, 0x2184($s0)
    MEM_B(0X2184, ctx->r16) = ctx->r9;
    // 0x8007DF28: addiu       $a0, $a0, 0x6A10
    ctx->r4 = ADD32(ctx->r4, 0X6A10);
    // 0x8007DF2C: jal         0x8007AAF8
    // 0x8007DF30: addiu       $a1, $zero, 0x18B
    ctx->r5 = ADD32(0, 0X18B);
    func_8007AAF8(rdram, ctx);
        goto after_3;
    // 0x8007DF30: addiu       $a1, $zero, 0x18B
    ctx->r5 = ADD32(0, 0X18B);
    after_3:
    // 0x8007DF34: lbu         $t2, 0x2188($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2188);
    // 0x8007DF38: lbu         $t6, 0x2189($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X2189);
    // 0x8007DF3C: andi        $t3, $t2, 0xFF01
    ctx->r11 = ctx->r10 & 0XFF01;
    // 0x8007DF40: ori         $t4, $t3, 0x6
    ctx->r12 = ctx->r11 | 0X6;
    // 0x8007DF44: addiu       $t8, $zero, 0x80
    ctx->r24 = ADD32(0, 0X80);
    // 0x8007DF48: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x8007DF4C: addiu       $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
    // 0x8007DF50: addiu       $t1, $zero, 0x98
    ctx->r9 = ADD32(0, 0X98);
    // 0x8007DF54: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007DF58: ori         $t7, $t6, 0x40
    ctx->r15 = ctx->r14 | 0X40;
    // 0x8007DF5C: sb          $t4, 0x2188($s0)
    MEM_B(0X2188, ctx->r16) = ctx->r12;
    // 0x8007DF60: sb          $t7, 0x2189($s0)
    MEM_B(0X2189, ctx->r16) = ctx->r15;
    // 0x8007DF64: sb          $t8, 0x2191($s0)
    MEM_B(0X2191, ctx->r16) = ctx->r24;
    // 0x8007DF68: swc1        $f20, 0x21A8($s0)
    MEM_W(0X21A8, ctx->r16) = ctx->f20.u32l;
    // 0x8007DF6C: swc1        $f20, 0x21AC($s0)
    MEM_W(0X21AC, ctx->r16) = ctx->f20.u32l;
    // 0x8007DF70: sb          $t9, 0x2185($s0)
    MEM_B(0X2185, ctx->r16) = ctx->r25;
    // 0x8007DF74: sh          $t0, 0x2198($s0)
    MEM_H(0X2198, ctx->r16) = ctx->r8;
    // 0x8007DF78: sh          $t1, 0x219C($s0)
    MEM_H(0X219C, ctx->r16) = ctx->r9;
    // 0x8007DF7C: addiu       $a0, $a0, 0x6A10
    ctx->r4 = ADD32(ctx->r4, 0X6A10);
    // 0x8007DF80: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007DF84: jal         0x8002135C
    // 0x8007DF88: addiu       $a2, $zero, 0x7D
    ctx->r6 = ADD32(0, 0X7D);
    func_8002135C(rdram, ctx);
        goto after_4;
    // 0x8007DF88: addiu       $a2, $zero, 0x7D
    ctx->r6 = ADD32(0, 0X7D);
    after_4:
    // 0x8007DF8C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8007DF90: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007DF94: sb          $t2, 0x21C0($s0)
    MEM_B(0X21C0, ctx->r16) = ctx->r10;
    // 0x8007DF98: addiu       $a0, $a0, 0x6A4C
    ctx->r4 = ADD32(ctx->r4, 0X6A4C);
    // 0x8007DF9C: jal         0x8007AAF8
    // 0x8007DFA0: addiu       $a1, $zero, 0x18C
    ctx->r5 = ADD32(0, 0X18C);
    func_8007AAF8(rdram, ctx);
        goto after_5;
    // 0x8007DFA0: addiu       $a1, $zero, 0x18C
    ctx->r5 = ADD32(0, 0X18C);
    after_5:
    // 0x8007DFA4: lbu         $t3, 0x21C4($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X21C4);
    // 0x8007DFA8: lbu         $t6, 0x21C5($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X21C5);
    // 0x8007DFAC: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x8007DFB0: addiu       $t9, $zero, 0xA0
    ctx->r25 = ADD32(0, 0XA0);
    // 0x8007DFB4: addiu       $t0, $zero, 0x40
    ctx->r8 = ADD32(0, 0X40);
    // 0x8007DFB8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007DFBC: andi        $t4, $t3, 0xFF01
    ctx->r12 = ctx->r11 & 0XFF01;
    // 0x8007DFC0: ori         $t7, $t6, 0x40
    ctx->r15 = ctx->r14 | 0X40;
    // 0x8007DFC4: sb          $t4, 0x21C4($s0)
    MEM_B(0X21C4, ctx->r16) = ctx->r12;
    // 0x8007DFC8: sb          $t7, 0x21C5($s0)
    MEM_B(0X21C5, ctx->r16) = ctx->r15;
    // 0x8007DFCC: swc1        $f20, 0x21E4($s0)
    MEM_W(0X21E4, ctx->r16) = ctx->f20.u32l;
    // 0x8007DFD0: swc1        $f20, 0x21E8($s0)
    MEM_W(0X21E8, ctx->r16) = ctx->f20.u32l;
    // 0x8007DFD4: sb          $t8, 0x21C1($s0)
    MEM_B(0X21C1, ctx->r16) = ctx->r24;
    // 0x8007DFD8: sh          $t9, 0x21D4($s0)
    MEM_H(0X21D4, ctx->r16) = ctx->r25;
    // 0x8007DFDC: sh          $t0, 0x21D8($s0)
    MEM_H(0X21D8, ctx->r16) = ctx->r8;
    // 0x8007DFE0: addiu       $a0, $a0, 0x6A4C
    ctx->r4 = ADD32(ctx->r4, 0X6A4C);
    // 0x8007DFE4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007DFE8: jal         0x8002135C
    // 0x8007DFEC: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    func_8002135C(rdram, ctx);
        goto after_6;
    // 0x8007DFEC: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_6:
    // 0x8007DFF0: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8007DFF4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007DFF8: sb          $t1, 0x21FC($s0)
    MEM_B(0X21FC, ctx->r16) = ctx->r9;
    // 0x8007DFFC: addiu       $a0, $a0, 0x6A88
    ctx->r4 = ADD32(ctx->r4, 0X6A88);
    // 0x8007E000: jal         0x8007AAF8
    // 0x8007E004: addiu       $a1, $zero, 0x199
    ctx->r5 = ADD32(0, 0X199);
    func_8007AAF8(rdram, ctx);
        goto after_7;
    // 0x8007E004: addiu       $a1, $zero, 0x199
    ctx->r5 = ADD32(0, 0X199);
    after_7:
    // 0x8007E008: lbu         $t2, 0x2200($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2200);
    // 0x8007E00C: lbu         $t5, 0x2201($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X2201);
    // 0x8007E010: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x8007E014: addiu       $t8, $zero, 0xA0
    ctx->r24 = ADD32(0, 0XA0);
    // 0x8007E018: addiu       $t9, $zero, 0x98
    ctx->r25 = ADD32(0, 0X98);
    // 0x8007E01C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007E020: andi        $t3, $t2, 0xFF01
    ctx->r11 = ctx->r10 & 0XFF01;
    // 0x8007E024: ori         $t6, $t5, 0x40
    ctx->r14 = ctx->r13 | 0X40;
    // 0x8007E028: sb          $t3, 0x2200($s0)
    MEM_B(0X2200, ctx->r16) = ctx->r11;
    // 0x8007E02C: sb          $t6, 0x2201($s0)
    MEM_B(0X2201, ctx->r16) = ctx->r14;
    // 0x8007E030: swc1        $f20, 0x2220($s0)
    MEM_W(0X2220, ctx->r16) = ctx->f20.u32l;
    // 0x8007E034: swc1        $f20, 0x2224($s0)
    MEM_W(0X2224, ctx->r16) = ctx->f20.u32l;
    // 0x8007E038: sb          $t7, 0x21FD($s0)
    MEM_B(0X21FD, ctx->r16) = ctx->r15;
    // 0x8007E03C: sh          $t8, 0x2210($s0)
    MEM_H(0X2210, ctx->r16) = ctx->r24;
    // 0x8007E040: sh          $t9, 0x2214($s0)
    MEM_H(0X2214, ctx->r16) = ctx->r25;
    // 0x8007E044: addiu       $a0, $a0, 0x6A88
    ctx->r4 = ADD32(ctx->r4, 0X6A88);
    // 0x8007E048: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007E04C: jal         0x8002135C
    // 0x8007E050: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    func_8002135C(rdram, ctx);
        goto after_8;
    // 0x8007E050: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    after_8:
    // 0x8007E054: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8007E058: lhu         $v0, 0xB72($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB72);
    // 0x8007E05C: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8007E060: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8007E064: beq         $at, $zero, L_8007E088
    if (ctx->r1 == 0) {
        // 0x8007E068: addiu       $t5, $zero, 0x8
        ctx->r13 = ADD32(0, 0X8);
            goto L_8007E088;
    }
    // 0x8007E068: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x8007E06C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E070: sb          $zero, 0x39B1($at)
    MEM_B(0X39B1, ctx->r1) = 0;
    // 0x8007E074: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007E078: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x8007E07C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E080: b           L_8007E0D0
    // 0x8007E084: sb          $zero, 0x39B2($at)
    MEM_B(0X39B2, ctx->r1) = 0;
        goto L_8007E0D0;
    // 0x8007E084: sb          $zero, 0x39B2($at)
    MEM_B(0X39B2, ctx->r1) = 0;
L_8007E088:
    // 0x8007E088: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x8007E08C: beq         $at, $zero, L_8007E0B4
    if (ctx->r1 == 0) {
        // 0x8007E090: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_8007E0B4;
    }
    // 0x8007E090: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8007E094: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007E098: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x8007E09C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E0A0: sb          $zero, 0x39B1($at)
    MEM_B(0X39B1, ctx->r1) = 0;
    // 0x8007E0A4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E0A8: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x8007E0AC: b           L_8007E0D0
    // 0x8007E0B0: sb          $t0, 0x39B2($at)
    MEM_B(0X39B2, ctx->r1) = ctx->r8;
        goto L_8007E0D0;
    // 0x8007E0B0: sb          $t0, 0x39B2($at)
    MEM_B(0X39B2, ctx->r1) = ctx->r8;
L_8007E0B4:
    // 0x8007E0B4: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007E0B8: lhu         $v0, 0x522A($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X522A);
    // 0x8007E0BC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E0C0: sb          $t1, 0x39B1($at)
    MEM_B(0X39B1, ctx->r1) = ctx->r9;
    // 0x8007E0C4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E0C8: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x8007E0CC: sb          $t2, 0x39B2($at)
    MEM_B(0X39B2, ctx->r1) = ctx->r10;
L_8007E0D0:
    // 0x8007E0D0: andi        $t3, $v0, 0x3
    ctx->r11 = ctx->r2 & 0X3;
    // 0x8007E0D4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8007E0D8: lbu         $t4, 0xDF0($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0XDF0);
    // 0x8007E0DC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E0E0: sb          $t4, 0x39B4($at)
    MEM_B(0X39B4, ctx->r1) = ctx->r12;
    // 0x8007E0E4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E0E8: sb          $t5, 0x39B5($at)
    MEM_B(0X39B5, ctx->r1) = ctx->r13;
    // 0x8007E0EC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E0F0: jal         0x8007E110
    // 0x8007E0F4: sb          $zero, 0x392A($at)
    MEM_B(0X392A, ctx->r1) = 0;
    func_8007E110(rdram, ctx);
        goto after_9;
    // 0x8007E0F4: sb          $zero, 0x392A($at)
    MEM_B(0X392A, ctx->r1) = 0;
    after_9:
L_8007E0F8:
    // 0x8007E0F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007E0FC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8007E100: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007E104: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8007E108: jr          $ra
    // 0x8007E10C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8007E10C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8007E110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E110: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007E114: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007E118: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8007E11C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007E120: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x8007E124: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E128: addiu       $s0, $s0, 0x4890
    ctx->r16 = ADD32(ctx->r16, 0X4890);
    // 0x8007E12C: sb          $zero, 0x39B3($at)
    MEM_B(0X39B3, ctx->r1) = 0;
    // 0x8007E130: lbu         $t6, 0x23A4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X23A4);
    // 0x8007E134: lbu         $t8, 0x23A5($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X23A5);
    // 0x8007E138: lbu         $t0, 0x23E0($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X23E0);
    // 0x8007E13C: lbu         $t2, 0x23E1($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X23E1);
    // 0x8007E140: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007E144: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007E148: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
    // 0x8007E14C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8007E150: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007E154: andi        $t7, $t6, 0xFF01
    ctx->r15 = ctx->r14 & 0XFF01;
    // 0x8007E158: andi        $t9, $t8, 0xFFBF
    ctx->r25 = ctx->r24 & 0XFFBF;
    // 0x8007E15C: andi        $t1, $t0, 0xFF01
    ctx->r9 = ctx->r8 & 0XFF01;
    // 0x8007E160: andi        $t3, $t2, 0xFFBF
    ctx->r11 = ctx->r10 & 0XFFBF;
    // 0x8007E164: sb          $v0, 0x23A0($s0)
    MEM_B(0X23A0, ctx->r16) = ctx->r2;
    // 0x8007E168: sb          $t7, 0x23A4($s0)
    MEM_B(0X23A4, ctx->r16) = ctx->r15;
    // 0x8007E16C: sb          $t9, 0x23A5($s0)
    MEM_B(0X23A5, ctx->r16) = ctx->r25;
    // 0x8007E170: sb          $v1, 0x23A1($s0)
    MEM_B(0X23A1, ctx->r16) = ctx->r3;
    // 0x8007E174: sh          $a2, 0x23B8($s0)
    MEM_H(0X23B8, ctx->r16) = ctx->r6;
    // 0x8007E178: sb          $v0, 0x23DC($s0)
    MEM_B(0X23DC, ctx->r16) = ctx->r2;
    // 0x8007E17C: sb          $t1, 0x23E0($s0)
    MEM_B(0X23E0, ctx->r16) = ctx->r9;
    // 0x8007E180: sb          $t3, 0x23E1($s0)
    MEM_B(0X23E1, ctx->r16) = ctx->r11;
    // 0x8007E184: sb          $v1, 0x23DD($s0)
    MEM_B(0X23DD, ctx->r16) = ctx->r3;
    // 0x8007E188: sh          $a2, 0x23F4($s0)
    MEM_H(0X23F4, ctx->r16) = ctx->r6;
    // 0x8007E18C: sb          $v0, 0x2418($s0)
    MEM_B(0X2418, ctx->r16) = ctx->r2;
    // 0x8007E190: addiu       $a0, $a0, 0x6CA4
    ctx->r4 = ADD32(ctx->r4, 0X6CA4);
    // 0x8007E194: addiu       $a1, $zero, 0x196
    ctx->r5 = ADD32(0, 0X196);
    // 0x8007E198: swc1        $f0, 0x23C4($s0)
    MEM_W(0X23C4, ctx->r16) = ctx->f0.u32l;
    // 0x8007E19C: swc1        $f0, 0x23C8($s0)
    MEM_W(0X23C8, ctx->r16) = ctx->f0.u32l;
    // 0x8007E1A0: swc1        $f0, 0x2400($s0)
    MEM_W(0X2400, ctx->r16) = ctx->f0.u32l;
    // 0x8007E1A4: jal         0x8007AAF8
    // 0x8007E1A8: swc1        $f0, 0x2404($s0)
    MEM_W(0X2404, ctx->r16) = ctx->f0.u32l;
    func_8007AAF8(rdram, ctx);
        goto after_0;
    // 0x8007E1A8: swc1        $f0, 0x2404($s0)
    MEM_W(0X2404, ctx->r16) = ctx->f0.u32l;
    after_0:
    // 0x8007E1AC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007E1B0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8007E1B4: lbu         $t4, 0x241C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X241C);
    // 0x8007E1B8: lbu         $t7, 0x241D($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X241D);
    // 0x8007E1BC: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x8007E1C0: addiu       $t0, $zero, 0xA0
    ctx->r8 = ADD32(0, 0XA0);
    // 0x8007E1C4: addiu       $t1, $zero, 0x40
    ctx->r9 = ADD32(0, 0X40);
    // 0x8007E1C8: andi        $t5, $t4, 0xFF01
    ctx->r13 = ctx->r12 & 0XFF01;
    // 0x8007E1CC: ori         $t8, $t7, 0x40
    ctx->r24 = ctx->r15 | 0X40;
    // 0x8007E1D0: sb          $t5, 0x241C($s0)
    MEM_B(0X241C, ctx->r16) = ctx->r13;
    // 0x8007E1D4: sb          $t8, 0x241D($s0)
    MEM_B(0X241D, ctx->r16) = ctx->r24;
    // 0x8007E1D8: sb          $t9, 0x2419($s0)
    MEM_B(0X2419, ctx->r16) = ctx->r25;
    // 0x8007E1DC: sh          $t0, 0x242C($s0)
    MEM_H(0X242C, ctx->r16) = ctx->r8;
    // 0x8007E1E0: sh          $t1, 0x2430($s0)
    MEM_H(0X2430, ctx->r16) = ctx->r9;
    // 0x8007E1E4: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x8007E1E8: swc1        $f0, 0x243C($s0)
    MEM_W(0X243C, ctx->r16) = ctx->f0.u32l;
    // 0x8007E1EC: swc1        $f0, 0x2440($s0)
    MEM_W(0X2440, ctx->r16) = ctx->f0.u32l;
    // 0x8007E1F0: lbu         $t2, 0x39B2($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X39B2);
    // 0x8007E1F4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007E1F8: bne         $t2, $zero, L_8007E270
    if (ctx->r10 != 0) {
        // 0x8007E1FC: lui         $t5, 0x8012
        ctx->r13 = S32(0X8012 << 16);
            goto L_8007E270;
    }
    // 0x8007E1FC: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8007E200: addiu       $a0, $a0, 0x6C2C
    ctx->r4 = ADD32(ctx->r4, 0X6C2C);
    // 0x8007E204: jal         0x8007AAF8
    // 0x8007E208: addiu       $a1, $zero, 0x18D
    ctx->r5 = ADD32(0, 0X18D);
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x8007E208: addiu       $a1, $zero, 0x18D
    ctx->r5 = ADD32(0, 0X18D);
    after_1:
    // 0x8007E20C: addiu       $t3, $zero, 0x74
    ctx->r11 = ADD32(0, 0X74);
    // 0x8007E210: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007E214: sh          $t3, 0x23B4($s0)
    MEM_H(0X23B4, ctx->r16) = ctx->r11;
    // 0x8007E218: addiu       $a0, $a0, 0x6C2C
    ctx->r4 = ADD32(ctx->r4, 0X6C2C);
    // 0x8007E21C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007E220: jal         0x8002135C
    // 0x8007E224: addiu       $a2, $zero, 0x7E
    ctx->r6 = ADD32(0, 0X7E);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8007E224: addiu       $a2, $zero, 0x7E
    ctx->r6 = ADD32(0, 0X7E);
    after_2:
    // 0x8007E228: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007E22C: addiu       $a0, $a0, 0x6C68
    ctx->r4 = ADD32(ctx->r4, 0X6C68);
    // 0x8007E230: jal         0x8007AAF8
    // 0x8007E234: addiu       $a1, $zero, 0x18E
    ctx->r5 = ADD32(0, 0X18E);
    func_8007AAF8(rdram, ctx);
        goto after_3;
    // 0x8007E234: addiu       $a1, $zero, 0x18E
    ctx->r5 = ADD32(0, 0X18E);
    after_3:
    // 0x8007E238: addiu       $t4, $zero, 0x74
    ctx->r12 = ADD32(0, 0X74);
    // 0x8007E23C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007E240: sh          $t4, 0x23F0($s0)
    MEM_H(0X23F0, ctx->r16) = ctx->r12;
    // 0x8007E244: addiu       $a0, $a0, 0x6C68
    ctx->r4 = ADD32(ctx->r4, 0X6C68);
    // 0x8007E248: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007E24C: jal         0x8002135C
    // 0x8007E250: addiu       $a2, $zero, 0x7D
    ctx->r6 = ADD32(0, 0X7D);
    func_8002135C(rdram, ctx);
        goto after_4;
    // 0x8007E250: addiu       $a2, $zero, 0x7D
    ctx->r6 = ADD32(0, 0X7D);
    after_4:
    // 0x8007E254: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007E258: addiu       $a0, $a0, 0x6CA4
    ctx->r4 = ADD32(ctx->r4, 0X6CA4);
    // 0x8007E25C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007E260: jal         0x8002135C
    // 0x8007E264: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x8007E264: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_5:
    // 0x8007E268: b           L_8007E314
    // 0x8007E26C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8007E314;
    // 0x8007E26C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8007E270:
    // 0x8007E270: lhu         $t5, 0xB72($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0XB72);
    // 0x8007E274: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007E278: slti        $at, $t5, 0x4
    ctx->r1 = SIGNED(ctx->r13) < 0X4 ? 1 : 0;
    // 0x8007E27C: bne         $at, $zero, L_8007E2AC
    if (ctx->r1 != 0) {
        // 0x8007E280: addiu       $a0, $a0, 0x6C2C
        ctx->r4 = ADD32(ctx->r4, 0X6C2C);
            goto L_8007E2AC;
    }
    // 0x8007E280: addiu       $a0, $a0, 0x6C2C
    ctx->r4 = ADD32(ctx->r4, 0X6C2C);
    // 0x8007E284: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007E288: addiu       $a0, $a0, 0x6C2C
    ctx->r4 = ADD32(ctx->r4, 0X6C2C);
    // 0x8007E28C: jal         0x8007AAF8
    // 0x8007E290: addiu       $a1, $zero, 0x18F
    ctx->r5 = ADD32(0, 0X18F);
    func_8007AAF8(rdram, ctx);
        goto after_6;
    // 0x8007E290: addiu       $a1, $zero, 0x18F
    ctx->r5 = ADD32(0, 0X18F);
    after_6:
    // 0x8007E294: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007E298: addiu       $a0, $a0, 0x6C68
    ctx->r4 = ADD32(ctx->r4, 0X6C68);
    // 0x8007E29C: jal         0x8007AAF8
    // 0x8007E2A0: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    func_8007AAF8(rdram, ctx);
        goto after_7;
    // 0x8007E2A0: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    after_7:
    // 0x8007E2A4: b           L_8007E2C8
    // 0x8007E2A8: addiu       $t6, $zero, 0xCC
    ctx->r14 = ADD32(0, 0XCC);
        goto L_8007E2C8;
    // 0x8007E2A8: addiu       $t6, $zero, 0xCC
    ctx->r14 = ADD32(0, 0XCC);
L_8007E2AC:
    // 0x8007E2AC: jal         0x8007AAF8
    // 0x8007E2B0: addiu       $a1, $zero, 0x1AD
    ctx->r5 = ADD32(0, 0X1AD);
    func_8007AAF8(rdram, ctx);
        goto after_8;
    // 0x8007E2B0: addiu       $a1, $zero, 0x1AD
    ctx->r5 = ADD32(0, 0X1AD);
    after_8:
    // 0x8007E2B4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007E2B8: addiu       $a0, $a0, 0x6C68
    ctx->r4 = ADD32(ctx->r4, 0X6C68);
    // 0x8007E2BC: jal         0x8007AAF8
    // 0x8007E2C0: addiu       $a1, $zero, 0x1AE
    ctx->r5 = ADD32(0, 0X1AE);
    func_8007AAF8(rdram, ctx);
        goto after_9;
    // 0x8007E2C0: addiu       $a1, $zero, 0x1AE
    ctx->r5 = ADD32(0, 0X1AE);
    after_9:
    // 0x8007E2C4: addiu       $t6, $zero, 0xCC
    ctx->r14 = ADD32(0, 0XCC);
L_8007E2C8:
    // 0x8007E2C8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007E2CC: sh          $t6, 0x23B4($s0)
    MEM_H(0X23B4, ctx->r16) = ctx->r14;
    // 0x8007E2D0: addiu       $a0, $a0, 0x6C2C
    ctx->r4 = ADD32(ctx->r4, 0X6C2C);
    // 0x8007E2D4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007E2D8: jal         0x8002135C
    // 0x8007E2DC: addiu       $a2, $zero, 0x7C
    ctx->r6 = ADD32(0, 0X7C);
    func_8002135C(rdram, ctx);
        goto after_10;
    // 0x8007E2DC: addiu       $a2, $zero, 0x7C
    ctx->r6 = ADD32(0, 0X7C);
    after_10:
    // 0x8007E2E0: addiu       $t7, $zero, 0xCC
    ctx->r15 = ADD32(0, 0XCC);
    // 0x8007E2E4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007E2E8: sh          $t7, 0x23F0($s0)
    MEM_H(0X23F0, ctx->r16) = ctx->r15;
    // 0x8007E2EC: addiu       $a0, $a0, 0x6C68
    ctx->r4 = ADD32(ctx->r4, 0X6C68);
    // 0x8007E2F0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007E2F4: jal         0x8002135C
    // 0x8007E2F8: addiu       $a2, $zero, 0x7B
    ctx->r6 = ADD32(0, 0X7B);
    func_8002135C(rdram, ctx);
        goto after_11;
    // 0x8007E2F8: addiu       $a2, $zero, 0x7B
    ctx->r6 = ADD32(0, 0X7B);
    after_11:
    // 0x8007E2FC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007E300: addiu       $a0, $a0, 0x6CA4
    ctx->r4 = ADD32(ctx->r4, 0X6CA4);
    // 0x8007E304: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007E308: jal         0x8002135C
    // 0x8007E30C: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    func_8002135C(rdram, ctx);
        goto after_12;
    // 0x8007E30C: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    after_12:
    // 0x8007E310: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8007E314:
    // 0x8007E314: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007E318: jr          $ra
    // 0x8007E31C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8007E31C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8007E320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E320: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007E324: lbu         $t6, 0x39B1($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39B1);
    // 0x8007E328: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007E32C: bne         $t6, $zero, L_8007E42C
    if (ctx->r14 != 0) {
        // 0x8007E330: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007E42C;
    }
    // 0x8007E330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007E334: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x8007E338: lbu         $t7, 0x39B2($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X39B2);
    // 0x8007E33C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007E340: bne         $t7, $zero, L_8007E388
    if (ctx->r15 != 0) {
        // 0x8007E344: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8007E388;
    }
    // 0x8007E344: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8007E348: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8007E34C: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x8007E350: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8007E354: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8007E358: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x8007E35C: lh          $t8, 0x9B0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X9B0);
    // 0x8007E360: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007E364: addiu       $v1, $v1, 0x3930
    ctx->r3 = ADD32(ctx->r3, 0X3930);
    // 0x8007E368: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
    // 0x8007E36C: lhu         $t9, 0x9AA($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X9AA);
    // 0x8007E370: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E374: sh          $t9, 0x3932($at)
    MEM_H(0X3932, ctx->r1) = ctx->r25;
    // 0x8007E378: lhu         $t0, 0x9AC($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X9AC);
    // 0x8007E37C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E380: b           L_8007E3C4
    // 0x8007E384: sh          $t0, 0x3934($at)
    MEM_H(0X3934, ctx->r1) = ctx->r8;
        goto L_8007E3C4;
    // 0x8007E384: sh          $t0, 0x3934($at)
    MEM_H(0X3934, ctx->r1) = ctx->r8;
L_8007E388:
    // 0x8007E388: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8007E38C: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x8007E390: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8007E394: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8007E398: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x8007E39C: lh          $t1, 0x9BA($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X9BA);
    // 0x8007E3A0: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007E3A4: addiu       $v1, $v1, 0x3930
    ctx->r3 = ADD32(ctx->r3, 0X3930);
    // 0x8007E3A8: sh          $t1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r9;
    // 0x8007E3AC: lhu         $t2, 0x9B4($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X9B4);
    // 0x8007E3B0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E3B4: sh          $t2, 0x3932($at)
    MEM_H(0X3932, ctx->r1) = ctx->r10;
    // 0x8007E3B8: lhu         $t3, 0x9B6($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X9B6);
    // 0x8007E3BC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E3C0: sh          $t3, 0x3934($at)
    MEM_H(0X3934, ctx->r1) = ctx->r11;
L_8007E3C4:
    // 0x8007E3C4: lbu         $a0, 0x39B3($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X39B3);
    // 0x8007E3C8: lh          $a2, 0x0($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X0);
    // 0x8007E3CC: jal         0x80297A84
    // 0x8007E3D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(0x80297A84)(rdram, ctx);
        goto after_0;
    // 0x8007E3D0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8007E3D4: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x8007E3D8: lhu         $t4, 0x3932($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X3932);
    // 0x8007E3DC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E3E0: andi        $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 & 0X8000;
    // 0x8007E3E4: beq         $t5, $zero, L_8007E4CC
    if (ctx->r13 == 0) {
        // 0x8007E3E8: sb          $v0, 0x39B3($at)
        MEM_B(0X39B3, ctx->r1) = ctx->r2;
            goto L_8007E4CC;
    }
    // 0x8007E3E8: sb          $v0, 0x39B3($at)
    MEM_B(0X39B3, ctx->r1) = ctx->r2;
    // 0x8007E3EC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007E3F0: addiu       $v1, $v1, 0x3968
    ctx->r3 = ADD32(ctx->r3, 0X3968);
    // 0x8007E3F4: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x8007E3F8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007E3FC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8007E400: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
    // 0x8007E404: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x8007E408: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E40C: addiu       $v0, $v0, 0x39B5
    ctx->r2 = ADD32(ctx->r2, 0X39B5);
    // 0x8007E410: sb          $t8, 0x39B4($at)
    MEM_B(0X39B4, ctx->r1) = ctx->r24;
    // 0x8007E414: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8007E418: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x8007E41C: jal         0x80015BC0
    // 0x8007E420: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x8007E420: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    after_1:
    // 0x8007E424: b           L_8007E4CC
    // 0x8007E428: nop

        goto L_8007E4CC;
    // 0x8007E428: nop

L_8007E42C:
    // 0x8007E42C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007E430: addiu       $v0, $v0, 0x39B5
    ctx->r2 = ADD32(ctx->r2, 0X39B5);
    // 0x8007E434: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x8007E438: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007E43C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8007E440: andi        $t2, $t1, 0xFF
    ctx->r10 = ctx->r9 & 0XFF;
    // 0x8007E444: bne         $t2, $zero, L_8007E4CC
    if (ctx->r10 != 0) {
        // 0x8007E448: sb          $t1, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r9;
            goto L_8007E4CC;
    }
    // 0x8007E448: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    // 0x8007E44C: addiu       $t3, $zero, 0x8
    ctx->r11 = ADD32(0, 0X8);
    // 0x8007E450: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x8007E454: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x8007E458: lbu         $t4, 0x39B3($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X39B3);
    // 0x8007E45C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E460: xori        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 ^ 0X1;
    // 0x8007E464: addiu       $v1, $v1, 0x39B4
    ctx->r3 = ADD32(ctx->r3, 0X39B4);
    // 0x8007E468: sb          $t5, 0x39B3($at)
    MEM_B(0X39B3, ctx->r1) = ctx->r13;
    // 0x8007E46C: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x8007E470: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    // 0x8007E474: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8007E478: jal         0x80015BC0
    // 0x8007E47C: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
    func_80015BC0(rdram, ctx);
        goto after_2;
    // 0x8007E47C: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
    after_2:
    // 0x8007E480: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8007E484: lbu         $t8, 0x39B4($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X39B4);
    // 0x8007E488: nop

    // 0x8007E48C: bne         $t8, $zero, L_8007E4CC
    if (ctx->r24 != 0) {
        // 0x8007E490: nop
    
            goto L_8007E4CC;
    }
    // 0x8007E490: nop

    // 0x8007E494: jal         0x80015BC0
    // 0x8007E498: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    func_80015BC0(rdram, ctx);
        goto after_3;
    // 0x8007E498: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    after_3:
    // 0x8007E49C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007E4A0: addiu       $v1, $v1, 0x3968
    ctx->r3 = ADD32(ctx->r3, 0X3968);
    // 0x8007E4A4: lbu         $t9, 0x0($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X0);
    // 0x8007E4A8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007E4AC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8007E4B0: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
    // 0x8007E4B4: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x8007E4B8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E4BC: addiu       $v0, $v0, 0x39B5
    ctx->r2 = ADD32(ctx->r2, 0X39B5);
    // 0x8007E4C0: sb          $t1, 0x39B4($at)
    MEM_B(0X39B4, ctx->r1) = ctx->r9;
    // 0x8007E4C4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8007E4C8: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
L_8007E4CC:
    // 0x8007E4CC: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x8007E4D0: lbu         $t3, 0x39B3($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X39B3);
    // 0x8007E4D4: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007E4D8: bne         $t3, $zero, L_8007E4FC
    if (ctx->r11 != 0) {
        // 0x8007E4DC: addiu       $v0, $v0, 0x4890
        ctx->r2 = ADD32(ctx->r2, 0X4890);
            goto L_8007E4FC;
    }
    // 0x8007E4DC: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x8007E4E0: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007E4E4: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x8007E4E8: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x8007E4EC: sh          $v1, 0x23B8($v0)
    MEM_H(0X23B8, ctx->r2) = ctx->r3;
    // 0x8007E4F0: sh          $v1, 0x23F4($v0)
    MEM_H(0X23F4, ctx->r2) = ctx->r3;
    // 0x8007E4F4: b           L_8007E50C
    // 0x8007E4F8: sh          $v1, 0x2430($v0)
    MEM_H(0X2430, ctx->r2) = ctx->r3;
        goto L_8007E50C;
    // 0x8007E4F8: sh          $v1, 0x2430($v0)
    MEM_H(0X2430, ctx->r2) = ctx->r3;
L_8007E4FC:
    // 0x8007E4FC: addiu       $v1, $zero, 0x98
    ctx->r3 = ADD32(0, 0X98);
    // 0x8007E500: sh          $v1, 0x23B8($v0)
    MEM_H(0X23B8, ctx->r2) = ctx->r3;
    // 0x8007E504: sh          $v1, 0x23F4($v0)
    MEM_H(0X23F4, ctx->r2) = ctx->r3;
    // 0x8007E508: sh          $v1, 0x2430($v0)
    MEM_H(0X2430, ctx->r2) = ctx->r3;
L_8007E50C:
    // 0x8007E50C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007E510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007E514: jr          $ra
    // 0x8007E518: nop

    return;
    // 0x8007E518: nop

;}
RECOMP_FUNC void func_8007E51C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E51C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007E520: addiu       $v1, $v1, 0x39B5
    ctx->r3 = ADD32(ctx->r3, 0X39B5);
    // 0x8007E524: lbu         $t6, 0x0($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X0);
    // 0x8007E528: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007E52C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8007E530: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8007E534: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007E538: bne         $t8, $zero, L_8007E614
    if (ctx->r24 != 0) {
        // 0x8007E53C: sb          $t7, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r15;
            goto L_8007E614;
    }
    // 0x8007E53C: sb          $t7, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r15;
    // 0x8007E540: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007E544: addiu       $v0, $v0, 0x39B4
    ctx->r2 = ADD32(ctx->r2, 0X39B4);
    // 0x8007E548: lui         $a2, 0x8010
    ctx->r6 = S32(0X8010 << 16);
    // 0x8007E54C: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x8007E550: addiu       $a2, $a2, 0x4890
    ctx->r6 = ADD32(ctx->r6, 0X4890);
    // 0x8007E554: lbu         $t0, 0x2418($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X2418);
    // 0x8007E558: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x8007E55C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8007E560: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x8007E564: xori        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 ^ 0X1;
    // 0x8007E568: sb          $t9, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r25;
    // 0x8007E56C: sb          $t1, 0x2418($a2)
    MEM_B(0X2418, ctx->r6) = ctx->r9;
    // 0x8007E570: bne         $t4, $zero, L_8007E614
    if (ctx->r12 != 0) {
        // 0x8007E574: sb          $t3, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r11;
            goto L_8007E614;
    }
    // 0x8007E574: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x8007E578: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    // 0x8007E57C: lui         $v1, 0x800E
    ctx->r3 = S32(0X800E << 16);
    // 0x8007E580: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x8007E584: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x8007E588: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8007E58C: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
L_8007E590:
    // 0x8007E590: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007E594: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007E598: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x8007E59C: slti        $at, $t8, 0xD
    ctx->r1 = SIGNED(ctx->r24) < 0XD ? 1 : 0;
    // 0x8007E5A0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8007E5A4: mflo        $t5
    ctx->r13 = lo;
    // 0x8007E5A8: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x8007E5AC: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x8007E5B0: bne         $at, $zero, L_8007E590
    if (ctx->r1 != 0) {
        // 0x8007E5B4: sb          $zero, 0x2148($t7)
        MEM_B(0X2148, ctx->r15) = 0;
            goto L_8007E590;
    }
    // 0x8007E5B4: sb          $zero, 0x2148($t7)
    MEM_B(0X2148, ctx->r15) = 0;
    // 0x8007E5B8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8007E5BC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8007E5C0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007E5C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007E5C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007E5CC: addiu       $v0, $v0, 0x3968
    ctx->r2 = ADD32(ctx->r2, 0X3968);
    // 0x8007E5D0: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x8007E5D4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8007E5D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007E5DC: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8007E5E0: addiu       $t1, $t1, 0xE38
    ctx->r9 = ADD32(ctx->r9, 0XE38);
    // 0x8007E5E4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8007E5E8: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
    // 0x8007E5EC: sw          $t1, 0x14D0($a2)
    MEM_W(0X14D0, ctx->r6) = ctx->r9;
    // 0x8007E5F0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E5F4: swc1        $f0, 0x2114($a2)
    MEM_W(0X2114, ctx->r6) = ctx->f0.u32l;
    // 0x8007E5F8: swc1        $f0, 0x14B0($a2)
    MEM_W(0X14B0, ctx->r6) = ctx->f0.u32l;
    // 0x8007E5FC: swc1        $f4, 0x14B4($a2)
    MEM_W(0X14B4, ctx->r6) = ctx->f4.u32l;
    // 0x8007E600: swc1        $f6, 0x39E8($at)
    MEM_W(0X39E8, ctx->r1) = ctx->f6.u32l;
    // 0x8007E604: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E608: sb          $zero, 0x396C($at)
    MEM_B(0X396C, ctx->r1) = 0;
    // 0x8007E60C: jal         0x80015BC0
    // 0x8007E610: addiu       $a0, $zero, 0x300
    ctx->r4 = ADD32(0, 0X300);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x8007E610: addiu       $a0, $zero, 0x300
    ctx->r4 = ADD32(0, 0X300);
    after_0:
L_8007E614:
    // 0x8007E614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007E618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007E61C: jr          $ra
    // 0x8007E620: nop

    return;
    // 0x8007E620: nop

;}
RECOMP_FUNC void func_8007E624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E624: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8007E628: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8007E62C: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007E630: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x8007E634: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8007E638: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007E63C: lwc1        $f4, 0x14BC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X14BC);
    // 0x8007E640: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007E644: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8007E648: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8007E64C: swc1        $f8, 0x14BC($v0)
    MEM_W(0X14BC, ctx->r2) = ctx->f8.u32l;
    // 0x8007E650: lwc1        $f0, 0x14BC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14BC);
    // 0x8007E654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007E658: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x8007E65C: addiu       $a1, $a1, 0x396C
    ctx->r5 = ADD32(ctx->r5, 0X396C);
    // 0x8007E660: bc1f        L_8007E670
    if (!c1cs) {
        // 0x8007E664: lui         $a2, 0x802C
        ctx->r6 = S32(0X802C << 16);
            goto L_8007E670;
    }
    // 0x8007E664: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8007E668: sub.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x8007E66C: swc1        $f10, 0x14BC($v0)
    MEM_W(0X14BC, ctx->r2) = ctx->f10.u32l;
L_8007E670:
    // 0x8007E670: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8007E674: addiu       $a2, $a2, 0x396A
    ctx->r6 = ADD32(ctx->r6, 0X396A);
    // 0x8007E678: beq         $v1, $zero, L_8007E688
    if (ctx->r3 == 0) {
        // 0x8007E67C: addiu       $t6, $v1, -0x1
        ctx->r14 = ADD32(ctx->r3, -0X1);
            goto L_8007E688;
    }
    // 0x8007E67C: addiu       $t6, $v1, -0x1
    ctx->r14 = ADD32(ctx->r3, -0X1);
    // 0x8007E680: b           L_8007E790
    // 0x8007E684: sb          $t6, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r14;
        goto L_8007E790;
    // 0x8007E684: sb          $t6, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r14;
L_8007E688:
    // 0x8007E688: lhu         $a0, 0x0($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X0);
    // 0x8007E68C: addiu       $at, $zero, 0x11A
    ctx->r1 = ADD32(0, 0X11A);
    // 0x8007E690: beq         $a0, $at, L_8007E738
    if (ctx->r4 == ctx->r1) {
        // 0x8007E694: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_8007E738;
    }
    // 0x8007E694: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8007E698: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8007E69C: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8007E6A0: lbu         $t7, 0xCFE($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0XCFE);
    // 0x8007E6A4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8007E6A8: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8007E6AC: bgez        $t7, L_8007E6C0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8007E6B0: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_8007E6C0;
    }
    // 0x8007E6B0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8007E6B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007E6B8: nop

    // 0x8007E6BC: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_8007E6C0:
    // 0x8007E6C0: slti        $at, $v1, 0x107
    ctx->r1 = SIGNED(ctx->r3) < 0X107 ? 1 : 0;
    // 0x8007E6C4: beq         $at, $zero, L_8007E6E8
    if (ctx->r1 == 0) {
        // 0x8007E6C8: swc1        $f18, 0x14B0($v0)
        MEM_W(0X14B0, ctx->r2) = ctx->f18.u32l;
            goto L_8007E6E8;
    }
    // 0x8007E6C8: swc1        $f18, 0x14B0($v0)
    MEM_W(0X14B0, ctx->r2) = ctx->f18.u32l;
    // 0x8007E6CC: lh          $t8, 0x38D0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X38D0);
    // 0x8007E6D0: lh          $t0, 0x3948($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X3948);
    // 0x8007E6D4: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8007E6D8: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8007E6DC: sh          $t9, 0x38D0($v0)
    MEM_H(0X38D0, ctx->r2) = ctx->r25;
    // 0x8007E6E0: b           L_8007E700
    // 0x8007E6E4: sh          $t1, 0x3948($v0)
    MEM_H(0X3948, ctx->r2) = ctx->r9;
        goto L_8007E700;
    // 0x8007E6E4: sh          $t1, 0x3948($v0)
    MEM_H(0X3948, ctx->r2) = ctx->r9;
L_8007E6E8:
    // 0x8007E6E8: lh          $t2, 0x38D0($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X38D0);
    // 0x8007E6EC: lh          $t4, 0x3948($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X3948);
    // 0x8007E6F0: addiu       $t3, $t2, -0x4
    ctx->r11 = ADD32(ctx->r10, -0X4);
    // 0x8007E6F4: addiu       $t5, $t4, -0x4
    ctx->r13 = ADD32(ctx->r12, -0X4);
    // 0x8007E6F8: sh          $t3, 0x38D0($v0)
    MEM_H(0X38D0, ctx->r2) = ctx->r11;
    // 0x8007E6FC: sh          $t5, 0x3948($v0)
    MEM_H(0X3948, ctx->r2) = ctx->r13;
L_8007E700:
    // 0x8007E700: jal         0x8007F5D0
    // 0x8007E704: nop

    func_8007F5D0(rdram, ctx);
        goto after_0;
    // 0x8007E704: nop

    after_0:
    // 0x8007E708: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x8007E70C: addiu       $a2, $a2, 0x396A
    ctx->r6 = ADD32(ctx->r6, 0X396A);
    // 0x8007E710: lhu         $v1, 0x0($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X0);
    // 0x8007E714: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8007E718: addiu       $at, $zero, 0x105
    ctx->r1 = ADD32(0, 0X105);
    // 0x8007E71C: bne         $v1, $at, L_8007E72C
    if (ctx->r3 != ctx->r1) {
        // 0x8007E720: addiu       $a1, $a1, 0x396C
        ctx->r5 = ADD32(ctx->r5, 0X396C);
            goto L_8007E72C;
    }
    // 0x8007E720: addiu       $a1, $a1, 0x396C
    ctx->r5 = ADD32(ctx->r5, 0X396C);
    // 0x8007E724: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x8007E728: sb          $t6, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r14;
L_8007E72C:
    // 0x8007E72C: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x8007E730: b           L_8007E790
    // 0x8007E734: sh          $t7, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r15;
        goto L_8007E790;
    // 0x8007E734: sh          $t7, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r15;
L_8007E738:
    // 0x8007E738: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8007E73C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007E740: swc1        $f0, 0x14AC($v0)
    MEM_W(0X14AC, ctx->r2) = ctx->f0.u32l;
    // 0x8007E744: lwc1        $f6, -0x4D3C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X4D3C);
    // 0x8007E748: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007E74C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007E750: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8007E754: addiu       $a0, $a0, 0x3968
    ctx->r4 = ADD32(ctx->r4, 0X3968);
    // 0x8007E758: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x8007E75C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8007E760: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007E764: addiu       $v1, $zero, -0x89
    ctx->r3 = ADD32(0, -0X89);
    // 0x8007E768: addiu       $t8, $zero, 0x28
    ctx->r24 = ADD32(0, 0X28);
    // 0x8007E76C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8007E770: sh          $v1, 0x38D0($v0)
    MEM_H(0X38D0, ctx->r2) = ctx->r3;
    // 0x8007E774: sh          $v1, 0x3948($v0)
    MEM_H(0X3948, ctx->r2) = ctx->r3;
    // 0x8007E778: sb          $t8, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r24;
    // 0x8007E77C: sb          $t0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r8;
    // 0x8007E780: swc1        $f0, 0x14BC($v0)
    MEM_W(0X14BC, ctx->r2) = ctx->f0.u32l;
    // 0x8007E784: swc1        $f6, 0x14B0($v0)
    MEM_W(0X14B0, ctx->r2) = ctx->f6.u32l;
    // 0x8007E788: swc1        $f8, 0x14B4($v0)
    MEM_W(0X14B4, ctx->r2) = ctx->f8.u32l;
    // 0x8007E78C: swc1        $f10, 0x14B8($v0)
    MEM_W(0X14B8, ctx->r2) = ctx->f10.u32l;
L_8007E790:
    // 0x8007E790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007E794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007E798: jr          $ra
    // 0x8007E79C: nop

    return;
    // 0x8007E79C: nop

;}
RECOMP_FUNC void func_8007E7A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E7A0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007E7A4: addiu       $v0, $v0, 0x396C
    ctx->r2 = ADD32(ctx->r2, 0X396C);
    // 0x8007E7A8: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8007E7AC: nop

    // 0x8007E7B0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8007E7B4: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8007E7B8: bne         $t8, $zero, L_8007E7D8
    if (ctx->r24 != 0) {
        // 0x8007E7BC: sb          $t7, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r15;
            goto L_8007E7D8;
    }
    // 0x8007E7BC: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8007E7C0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007E7C4: addiu       $v0, $v0, 0x3968
    ctx->r2 = ADD32(ctx->r2, 0X3968);
    // 0x8007E7C8: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x8007E7CC: nop

    // 0x8007E7D0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8007E7D4: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_8007E7D8:
    // 0x8007E7D8: jr          $ra
    // 0x8007E7DC: nop

    return;
    // 0x8007E7DC: nop

;}
RECOMP_FUNC void func_8007E7E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E7E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007E7E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007E7E8: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x8007E7EC: addiu       $s0, $s0, 0x396A
    ctx->r16 = ADD32(ctx->r16, 0X396A);
    // 0x8007E7F0: lhu         $a0, 0x0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X0);
    // 0x8007E7F4: addiu       $at, $zero, 0x12E
    ctx->r1 = ADD32(0, 0X12E);
    // 0x8007E7F8: beq         $a0, $at, L_8007E81C
    if (ctx->r4 == ctx->r1) {
        // 0x8007E7FC: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_8007E81C;
    }
    // 0x8007E7FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007E800: jal         0x8007F5D0
    // 0x8007E804: nop

    func_8007F5D0(rdram, ctx);
        goto after_0;
    // 0x8007E804: nop

    after_0:
    // 0x8007E808: lhu         $t6, 0x0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X0);
    // 0x8007E80C: nop

    // 0x8007E810: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8007E814: b           L_8007E96C
    // 0x8007E818: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
        goto L_8007E96C;
    // 0x8007E818: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
L_8007E81C:
    // 0x8007E81C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8007E820: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007E824: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x8007E828: addiu       $s0, $s0, 0x4890
    ctx->r16 = ADD32(ctx->r16, 0X4890);
    // 0x8007E82C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007E830: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E834: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x8007E838: swc1        $f4, 0x2114($s0)
    MEM_W(0X2114, ctx->r16) = ctx->f4.u32l;
    // 0x8007E83C: addiu       $v0, $v0, 0x3968
    ctx->r2 = ADD32(ctx->r2, 0X3968);
    // 0x8007E840: sb          $t8, 0x396C($at)
    MEM_B(0X396C, ctx->r1) = ctx->r24;
    // 0x8007E844: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x8007E848: sh          $zero, 0x14A8($s0)
    MEM_H(0X14A8, ctx->r16) = 0;
    // 0x8007E84C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8007E850: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
    // 0x8007E854: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x8007E858: lhu         $t1, 0x522A($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X522A);
    // 0x8007E85C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8007E860: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8007E864: beq         $t2, $zero, L_8007E87C
    if (ctx->r10 == 0) {
        // 0x8007E868: lui         $a0, 0x8010
        ctx->r4 = S32(0X8010 << 16);
            goto L_8007E87C;
    }
    // 0x8007E868: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007E86C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E870: addiu       $a3, $zero, 0x18C
    ctx->r7 = ADD32(0, 0X18C);
    // 0x8007E874: b           L_8007E88C
    // 0x8007E878: sb          $zero, 0x39B8($at)
    MEM_B(0X39B8, ctx->r1) = 0;
        goto L_8007E88C;
    // 0x8007E878: sb          $zero, 0x39B8($at)
    MEM_B(0X39B8, ctx->r1) = 0;
L_8007E87C:
    // 0x8007E87C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8007E880: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007E884: addiu       $a3, $zero, 0x199
    ctx->r7 = ADD32(0, 0X199);
    // 0x8007E888: sb          $t3, 0x39B8($at)
    MEM_B(0X39B8, ctx->r1) = ctx->r11;
L_8007E88C:
    // 0x8007E88C: sb          $t4, 0x2148($s0)
    MEM_B(0X2148, ctx->r16) = ctx->r12;
    // 0x8007E890: addiu       $a0, $a0, 0x69D4
    ctx->r4 = ADD32(ctx->r4, 0X69D4);
    // 0x8007E894: addiu       $a1, $zero, 0x18B
    ctx->r5 = ADD32(0, 0X18B);
    // 0x8007E898: jal         0x8007AAF8
    // 0x8007E89C: sh          $a3, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r7;
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x8007E89C: sh          $a3, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r7;
    after_1:
    // 0x8007E8A0: lbu         $t5, 0x214C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X214C);
    // 0x8007E8A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007E8A8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8007E8AC: lbu         $t9, 0x214D($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X214D);
    // 0x8007E8B0: andi        $t6, $t5, 0xFF01
    ctx->r14 = ctx->r13 & 0XFF01;
    // 0x8007E8B4: ori         $t7, $t6, 0x6
    ctx->r15 = ctx->r14 | 0X6;
    // 0x8007E8B8: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x8007E8BC: addiu       $t2, $zero, 0xA
    ctx->r10 = ADD32(0, 0XA);
    // 0x8007E8C0: addiu       $t3, $zero, 0xA0
    ctx->r11 = ADD32(0, 0XA0);
    // 0x8007E8C4: addiu       $t4, $zero, 0x68
    ctx->r12 = ADD32(0, 0X68);
    // 0x8007E8C8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007E8CC: ori         $t0, $t9, 0x40
    ctx->r8 = ctx->r25 | 0X40;
    // 0x8007E8D0: sb          $t7, 0x214C($s0)
    MEM_B(0X214C, ctx->r16) = ctx->r15;
    // 0x8007E8D4: sb          $t0, 0x214D($s0)
    MEM_B(0X214D, ctx->r16) = ctx->r8;
    // 0x8007E8D8: sb          $t1, 0x2155($s0)
    MEM_B(0X2155, ctx->r16) = ctx->r9;
    // 0x8007E8DC: sb          $t2, 0x2149($s0)
    MEM_B(0X2149, ctx->r16) = ctx->r10;
    // 0x8007E8E0: sh          $t3, 0x215C($s0)
    MEM_H(0X215C, ctx->r16) = ctx->r11;
    // 0x8007E8E4: sh          $t4, 0x2160($s0)
    MEM_H(0X2160, ctx->r16) = ctx->r12;
    // 0x8007E8E8: addiu       $a0, $a0, 0x69D4
    ctx->r4 = ADD32(ctx->r4, 0X69D4);
    // 0x8007E8EC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007E8F0: addiu       $a2, $zero, 0x7D
    ctx->r6 = ADD32(0, 0X7D);
    // 0x8007E8F4: swc1        $f0, 0x216C($s0)
    MEM_W(0X216C, ctx->r16) = ctx->f0.u32l;
    // 0x8007E8F8: jal         0x8002135C
    // 0x8007E8FC: swc1        $f0, 0x2170($s0)
    MEM_W(0X2170, ctx->r16) = ctx->f0.u32l;
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8007E8FC: swc1        $f0, 0x2170($s0)
    MEM_W(0X2170, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x8007E900: lhu         $a1, 0x26($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X26);
    // 0x8007E904: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8007E908: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007E90C: sb          $t5, 0x2184($s0)
    MEM_B(0X2184, ctx->r16) = ctx->r13;
    // 0x8007E910: jal         0x8007AAF8
    // 0x8007E914: addiu       $a0, $a0, 0x6A10
    ctx->r4 = ADD32(ctx->r4, 0X6A10);
    func_8007AAF8(rdram, ctx);
        goto after_3;
    // 0x8007E914: addiu       $a0, $a0, 0x6A10
    ctx->r4 = ADD32(ctx->r4, 0X6A10);
    after_3:
    // 0x8007E918: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007E91C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8007E920: lbu         $t6, 0x2188($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X2188);
    // 0x8007E924: lbu         $t9, 0x2189($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2189);
    // 0x8007E928: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x8007E92C: addiu       $t2, $zero, 0xA0
    ctx->r10 = ADD32(0, 0XA0);
    // 0x8007E930: addiu       $t3, $zero, 0x68
    ctx->r11 = ADD32(0, 0X68);
    // 0x8007E934: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007E938: andi        $t7, $t6, 0xFF01
    ctx->r15 = ctx->r14 & 0XFF01;
    // 0x8007E93C: ori         $t0, $t9, 0x40
    ctx->r8 = ctx->r25 | 0X40;
    // 0x8007E940: sb          $t7, 0x2188($s0)
    MEM_B(0X2188, ctx->r16) = ctx->r15;
    // 0x8007E944: sb          $t0, 0x2189($s0)
    MEM_B(0X2189, ctx->r16) = ctx->r8;
    // 0x8007E948: sb          $t1, 0x2185($s0)
    MEM_B(0X2185, ctx->r16) = ctx->r9;
    // 0x8007E94C: sh          $t2, 0x2198($s0)
    MEM_H(0X2198, ctx->r16) = ctx->r10;
    // 0x8007E950: sh          $t3, 0x219C($s0)
    MEM_H(0X219C, ctx->r16) = ctx->r11;
    // 0x8007E954: addiu       $a0, $a0, 0x6A10
    ctx->r4 = ADD32(ctx->r4, 0X6A10);
    // 0x8007E958: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007E95C: addiu       $a2, $zero, 0x7A
    ctx->r6 = ADD32(0, 0X7A);
    // 0x8007E960: swc1        $f0, 0x21A8($s0)
    MEM_W(0X21A8, ctx->r16) = ctx->f0.u32l;
    // 0x8007E964: jal         0x8002135C
    // 0x8007E968: swc1        $f0, 0x21AC($s0)
    MEM_W(0X21AC, ctx->r16) = ctx->f0.u32l;
    func_8002135C(rdram, ctx);
        goto after_4;
    // 0x8007E968: swc1        $f0, 0x21AC($s0)
    MEM_W(0X21AC, ctx->r16) = ctx->f0.u32l;
    after_4:
L_8007E96C:
    // 0x8007E96C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007E970: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007E974: jr          $ra
    // 0x8007E978: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8007E978: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8007E97C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E97C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007E980: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007E984: jal         0x8007E110
    // 0x8007E988: nop

    func_8007E110(rdram, ctx);
        goto after_0;
    // 0x8007E988: nop

    after_0:
    // 0x8007E98C: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007E990: lbu         $t6, 0x39B3($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39B3);
    // 0x8007E994: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007E998: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8007E99C: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x8007E9A0: lhu         $a1, 0xE1C($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0XE1C);
    // 0x8007E9A4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007E9A8: jal         0x8007AAF8
    // 0x8007E9AC: addiu       $a0, $a0, 0x6CA4
    ctx->r4 = ADD32(ctx->r4, 0X6CA4);
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x8007E9AC: addiu       $a0, $a0, 0x6CA4
    ctx->r4 = ADD32(ctx->r4, 0X6CA4);
    after_1:
    // 0x8007E9B0: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8007E9B4: lbu         $t8, 0x39B2($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X39B2);
    // 0x8007E9B8: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007E9BC: bne         $t8, $zero, L_8007E9DC
    if (ctx->r24 != 0) {
        // 0x8007E9C0: addiu       $v0, $v0, 0x4890
        ctx->r2 = ADD32(ctx->r2, 0X4890);
            goto L_8007E9DC;
    }
    // 0x8007E9C0: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x8007E9C4: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8007E9C8: addiu       $v0, $v0, 0x4890
    ctx->r2 = ADD32(ctx->r2, 0X4890);
    // 0x8007E9CC: addiu       $v1, $zero, 0x5C
    ctx->r3 = ADD32(0, 0X5C);
    // 0x8007E9D0: sh          $v1, 0x23B4($v0)
    MEM_H(0X23B4, ctx->r2) = ctx->r3;
    // 0x8007E9D4: b           L_8007E9E8
    // 0x8007E9D8: sh          $v1, 0x23F0($v0)
    MEM_H(0X23F0, ctx->r2) = ctx->r3;
        goto L_8007E9E8;
    // 0x8007E9D8: sh          $v1, 0x23F0($v0)
    MEM_H(0X23F0, ctx->r2) = ctx->r3;
L_8007E9DC:
    // 0x8007E9DC: addiu       $v1, $zero, 0xE4
    ctx->r3 = ADD32(0, 0XE4);
    // 0x8007E9E0: sh          $v1, 0x23B4($v0)
    MEM_H(0X23B4, ctx->r2) = ctx->r3;
    // 0x8007E9E4: sh          $v1, 0x23F0($v0)
    MEM_H(0X23F0, ctx->r2) = ctx->r3;
L_8007E9E8:
    // 0x8007E9E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007E9EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007E9F0: jr          $ra
    // 0x8007E9F4: nop

    return;
    // 0x8007E9F4: nop

;}
RECOMP_FUNC void func_8007E9F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007E9F8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007E9FC: addiu       $v0, $v0, 0x396C
    ctx->r2 = ADD32(ctx->r2, 0X396C);
    // 0x8007EA00: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8007EA04: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8007EA08: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8007EA0C: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8007EA10: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007EA14: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8007EA18: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8007EA1C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8007EA20: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8007EA24: bne         $t8, $zero, L_8007EE20
    if (ctx->r24 != 0) {
        // 0x8007EA28: sb          $t7, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r15;
            goto L_8007EE20;
    }
    // 0x8007EA28: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8007EA2C: lui         $t9, 0x8010
    ctx->r25 = S32(0X8010 << 16);
    // 0x8007EA30: lhu         $t9, 0x522A($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X522A);
    // 0x8007EA34: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8007EA38: andi        $t0, $t9, 0x3
    ctx->r8 = ctx->r25 & 0X3;
    // 0x8007EA3C: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x8007EA40: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8007EA44: lhu         $t2, 0xE24($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0XE24);
    // 0x8007EA48: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007EA4C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007EA50: addiu       $v0, $v0, 0x3968
    ctx->r2 = ADD32(ctx->r2, 0X3968);
    // 0x8007EA54: sb          $t2, 0x39B4($at)
    MEM_B(0X39B4, ctx->r1) = ctx->r10;
    // 0x8007EA58: lbu         $t3, 0x0($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X0);
    // 0x8007EA5C: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x8007EA60: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8007EA64: sb          $t4, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r12;
    // 0x8007EA68: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007EA6C: lbu         $t6, 0x39B3($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39B3);
    // 0x8007EA70: lbu         $t5, 0x39B8($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X39B8);
    // 0x8007EA74: lui         $s0, 0x8010
    ctx->r16 = S32(0X8010 << 16);
    // 0x8007EA78: beq         $t5, $t6, L_8007EABC
    if (ctx->r13 == ctx->r14) {
        // 0x8007EA7C: addiu       $s0, $s0, 0x4890
        ctx->r16 = ADD32(ctx->r16, 0X4890);
            goto L_8007EABC;
    }
    // 0x8007EA7C: addiu       $s0, $s0, 0x4890
    ctx->r16 = ADD32(ctx->r16, 0X4890);
    // 0x8007EA80: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007EA84: addiu       $v0, $v0, 0x39B2
    ctx->r2 = ADD32(ctx->r2, 0X39B2);
    // 0x8007EA88: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x8007EA8C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8007EA90: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x8007EA94: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x8007EA98: lhu         $t9, 0xB72($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0XB72);
    // 0x8007EA9C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007EAA0: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x8007EAA4: beq         $at, $zero, L_8007EABC
    if (ctx->r1 == 0) {
        // 0x8007EAA8: addiu       $v0, $v0, 0x39B1
        ctx->r2 = ADD32(ctx->r2, 0X39B1);
            goto L_8007EABC;
    }
    // 0x8007EAA8: addiu       $v0, $v0, 0x39B1
    ctx->r2 = ADD32(ctx->r2, 0X39B1);
    // 0x8007EAAC: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x8007EAB0: nop

    // 0x8007EAB4: xori        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 ^ 0X1;
    // 0x8007EAB8: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
L_8007EABC:
    // 0x8007EABC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8007EAC0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007EAC4: sb          $s1, 0x2148($s0)
    MEM_B(0X2148, ctx->r16) = ctx->r17;
    // 0x8007EAC8: addiu       $a0, $a0, 0x69D4
    ctx->r4 = ADD32(ctx->r4, 0X69D4);
    // 0x8007EACC: jal         0x8007AAF8
    // 0x8007EAD0: addiu       $a1, $zero, 0x191
    ctx->r5 = ADD32(0, 0X191);
    func_8007AAF8(rdram, ctx);
        goto after_0;
    // 0x8007EAD0: addiu       $a1, $zero, 0x191
    ctx->r5 = ADD32(0, 0X191);
    after_0:
    // 0x8007EAD4: lbu         $t2, 0x214C($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X214C);
    // 0x8007EAD8: lbu         $t5, 0x214D($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X214D);
    // 0x8007EADC: andi        $t3, $t2, 0xFF01
    ctx->r11 = ctx->r10 & 0XFF01;
    // 0x8007EAE0: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
    // 0x8007EAE4: addiu       $s3, $zero, 0xA0
    ctx->r19 = ADD32(0, 0XA0);
    // 0x8007EAE8: ori         $t4, $t3, 0x6
    ctx->r12 = ctx->r11 | 0X6;
    // 0x8007EAEC: addiu       $t7, $zero, 0x80
    ctx->r15 = ADD32(0, 0X80);
    // 0x8007EAF0: addiu       $t8, $zero, 0x40
    ctx->r24 = ADD32(0, 0X40);
    // 0x8007EAF4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007EAF8: andi        $t6, $t5, 0xFFBF
    ctx->r14 = ctx->r13 & 0XFFBF;
    // 0x8007EAFC: sb          $t4, 0x214C($s0)
    MEM_B(0X214C, ctx->r16) = ctx->r12;
    // 0x8007EB00: sb          $t6, 0x214D($s0)
    MEM_B(0X214D, ctx->r16) = ctx->r14;
    // 0x8007EB04: sb          $t7, 0x2155($s0)
    MEM_B(0X2155, ctx->r16) = ctx->r15;
    // 0x8007EB08: sb          $s2, 0x2149($s0)
    MEM_B(0X2149, ctx->r16) = ctx->r18;
    // 0x8007EB0C: sh          $s3, 0x215C($s0)
    MEM_H(0X215C, ctx->r16) = ctx->r19;
    // 0x8007EB10: sh          $t8, 0x2160($s0)
    MEM_H(0X2160, ctx->r16) = ctx->r24;
    // 0x8007EB14: addiu       $a0, $a0, 0x69D4
    ctx->r4 = ADD32(ctx->r4, 0X69D4);
    // 0x8007EB18: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007EB1C: jal         0x8002135C
    // 0x8007EB20: addiu       $a2, $zero, 0x7D
    ctx->r6 = ADD32(0, 0X7D);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8007EB20: addiu       $a2, $zero, 0x7D
    ctx->r6 = ADD32(0, 0X7D);
    after_1:
    // 0x8007EB24: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007EB28: sb          $s1, 0x2184($s0)
    MEM_B(0X2184, ctx->r16) = ctx->r17;
    // 0x8007EB2C: addiu       $a0, $a0, 0x6A10
    ctx->r4 = ADD32(ctx->r4, 0X6A10);
    // 0x8007EB30: jal         0x8007AAF8
    // 0x8007EB34: addiu       $a1, $zero, 0x191
    ctx->r5 = ADD32(0, 0X191);
    func_8007AAF8(rdram, ctx);
        goto after_2;
    // 0x8007EB34: addiu       $a1, $zero, 0x191
    ctx->r5 = ADD32(0, 0X191);
    after_2:
    // 0x8007EB38: lbu         $t9, 0x2188($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X2188);
    // 0x8007EB3C: lbu         $t2, 0x2189($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X2189);
    // 0x8007EB40: andi        $t0, $t9, 0xFF01
    ctx->r8 = ctx->r25 & 0XFF01;
    // 0x8007EB44: ori         $t1, $t0, 0x6
    ctx->r9 = ctx->r8 | 0X6;
    // 0x8007EB48: addiu       $t4, $zero, 0x80
    ctx->r12 = ADD32(0, 0X80);
    // 0x8007EB4C: addiu       $t5, $zero, 0x74
    ctx->r13 = ADD32(0, 0X74);
    // 0x8007EB50: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007EB54: andi        $t3, $t2, 0xFFBF
    ctx->r11 = ctx->r10 & 0XFFBF;
    // 0x8007EB58: sb          $t1, 0x2188($s0)
    MEM_B(0X2188, ctx->r16) = ctx->r9;
    // 0x8007EB5C: sb          $t3, 0x2189($s0)
    MEM_B(0X2189, ctx->r16) = ctx->r11;
    // 0x8007EB60: sb          $t4, 0x2191($s0)
    MEM_B(0X2191, ctx->r16) = ctx->r12;
    // 0x8007EB64: sb          $s2, 0x2185($s0)
    MEM_B(0X2185, ctx->r16) = ctx->r18;
    // 0x8007EB68: sh          $s3, 0x2198($s0)
    MEM_H(0X2198, ctx->r16) = ctx->r19;
    // 0x8007EB6C: sh          $t5, 0x219C($s0)
    MEM_H(0X219C, ctx->r16) = ctx->r13;
    // 0x8007EB70: addiu       $a0, $a0, 0x6A10
    ctx->r4 = ADD32(ctx->r4, 0X6A10);
    // 0x8007EB74: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007EB78: jal         0x8002135C
    // 0x8007EB7C: addiu       $a2, $zero, 0x7D
    ctx->r6 = ADD32(0, 0X7D);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x8007EB7C: addiu       $a2, $zero, 0x7D
    ctx->r6 = ADD32(0, 0X7D);
    after_3:
    // 0x8007EB80: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007EB84: sb          $s1, 0x21C0($s0)
    MEM_B(0X21C0, ctx->r16) = ctx->r17;
    // 0x8007EB88: addiu       $a0, $a0, 0x6A4C
    ctx->r4 = ADD32(ctx->r4, 0X6A4C);
    // 0x8007EB8C: jal         0x8007AAF8
    // 0x8007EB90: addiu       $a1, $zero, 0x19A
    ctx->r5 = ADD32(0, 0X19A);
    func_8007AAF8(rdram, ctx);
        goto after_4;
    // 0x8007EB90: addiu       $a1, $zero, 0x19A
    ctx->r5 = ADD32(0, 0X19A);
    after_4:
    // 0x8007EB94: lbu         $t6, 0x21C4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X21C4);
    // 0x8007EB98: lbu         $t9, 0x21C5($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X21C5);
    // 0x8007EB9C: andi        $t7, $t6, 0xFF01
    ctx->r15 = ctx->r14 & 0XFF01;
    // 0x8007EBA0: ori         $t8, $t7, 0x6
    ctx->r24 = ctx->r15 | 0X6;
    // 0x8007EBA4: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x8007EBA8: addiu       $t2, $zero, 0xAE
    ctx->r10 = ADD32(0, 0XAE);
    // 0x8007EBAC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007EBB0: andi        $t0, $t9, 0xFFBF
    ctx->r8 = ctx->r25 & 0XFFBF;
    // 0x8007EBB4: sb          $t8, 0x21C4($s0)
    MEM_B(0X21C4, ctx->r16) = ctx->r24;
    // 0x8007EBB8: sb          $t0, 0x21C5($s0)
    MEM_B(0X21C5, ctx->r16) = ctx->r8;
    // 0x8007EBBC: sb          $t1, 0x21CD($s0)
    MEM_B(0X21CD, ctx->r16) = ctx->r9;
    // 0x8007EBC0: sb          $s2, 0x21C1($s0)
    MEM_B(0X21C1, ctx->r16) = ctx->r18;
    // 0x8007EBC4: sh          $s3, 0x21D4($s0)
    MEM_H(0X21D4, ctx->r16) = ctx->r19;
    // 0x8007EBC8: sh          $t2, 0x21D8($s0)
    MEM_H(0X21D8, ctx->r16) = ctx->r10;
    // 0x8007EBCC: addiu       $a0, $a0, 0x6A4C
    ctx->r4 = ADD32(ctx->r4, 0X6A4C);
    // 0x8007EBD0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007EBD4: jal         0x8002135C
    // 0x8007EBD8: addiu       $a2, $zero, 0x7D
    ctx->r6 = ADD32(0, 0X7D);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x8007EBD8: addiu       $a2, $zero, 0x7D
    ctx->r6 = ADD32(0, 0X7D);
    after_5:
    // 0x8007EBDC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007EBE0: sb          $s1, 0x21FC($s0)
    MEM_B(0X21FC, ctx->r16) = ctx->r17;
    // 0x8007EBE4: addiu       $a0, $a0, 0x6A88
    ctx->r4 = ADD32(ctx->r4, 0X6A88);
    // 0x8007EBE8: jal         0x8007AAF8
    // 0x8007EBEC: addiu       $a1, $zero, 0x192
    ctx->r5 = ADD32(0, 0X192);
    func_8007AAF8(rdram, ctx);
        goto after_6;
    // 0x8007EBEC: addiu       $a1, $zero, 0x192
    ctx->r5 = ADD32(0, 0X192);
    after_6:
    // 0x8007EBF0: lbu         $t3, 0x2200($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X2200);
    // 0x8007EBF4: lbu         $t5, 0x2201($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X2201);
    // 0x8007EBF8: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x8007EBFC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007EC00: andi        $t4, $t3, 0xFF01
    ctx->r12 = ctx->r11 & 0XFF01;
    // 0x8007EC04: andi        $t6, $t5, 0xFFBF
    ctx->r14 = ctx->r13 & 0XFFBF;
    // 0x8007EC08: sb          $t4, 0x2200($s0)
    MEM_B(0X2200, ctx->r16) = ctx->r12;
    // 0x8007EC0C: sb          $t6, 0x2201($s0)
    MEM_B(0X2201, ctx->r16) = ctx->r14;
    // 0x8007EC10: sb          $s2, 0x21FD($s0)
    MEM_B(0X21FD, ctx->r16) = ctx->r18;
    // 0x8007EC14: sh          $s3, 0x2210($s0)
    MEM_H(0X2210, ctx->r16) = ctx->r19;
    // 0x8007EC18: sh          $t7, 0x2214($s0)
    MEM_H(0X2214, ctx->r16) = ctx->r15;
    // 0x8007EC1C: addiu       $a0, $a0, 0x6A88
    ctx->r4 = ADD32(ctx->r4, 0X6A88);
    // 0x8007EC20: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007EC24: jal         0x8002135C
    // 0x8007EC28: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    func_8002135C(rdram, ctx);
        goto after_7;
    // 0x8007EC28: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    after_7:
    // 0x8007EC2C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007EC30: sb          $s1, 0x2238($s0)
    MEM_B(0X2238, ctx->r16) = ctx->r17;
    // 0x8007EC34: addiu       $a0, $a0, 0x6AC4
    ctx->r4 = ADD32(ctx->r4, 0X6AC4);
    // 0x8007EC38: jal         0x8007AAF8
    // 0x8007EC3C: addiu       $a1, $zero, 0x192
    ctx->r5 = ADD32(0, 0X192);
    func_8007AAF8(rdram, ctx);
        goto after_8;
    // 0x8007EC3C: addiu       $a1, $zero, 0x192
    ctx->r5 = ADD32(0, 0X192);
    after_8:
    // 0x8007EC40: lbu         $t8, 0x223C($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X223C);
    // 0x8007EC44: lbu         $t0, 0x223D($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X223D);
    // 0x8007EC48: addiu       $t2, $zero, 0x74
    ctx->r10 = ADD32(0, 0X74);
    // 0x8007EC4C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007EC50: andi        $t9, $t8, 0xFF01
    ctx->r25 = ctx->r24 & 0XFF01;
    // 0x8007EC54: andi        $t1, $t0, 0xFFBF
    ctx->r9 = ctx->r8 & 0XFFBF;
    // 0x8007EC58: sb          $t9, 0x223C($s0)
    MEM_B(0X223C, ctx->r16) = ctx->r25;
    // 0x8007EC5C: sb          $t1, 0x223D($s0)
    MEM_B(0X223D, ctx->r16) = ctx->r9;
    // 0x8007EC60: sb          $s2, 0x2239($s0)
    MEM_B(0X2239, ctx->r16) = ctx->r18;
    // 0x8007EC64: sh          $s3, 0x224C($s0)
    MEM_H(0X224C, ctx->r16) = ctx->r19;
    // 0x8007EC68: sh          $t2, 0x2250($s0)
    MEM_H(0X2250, ctx->r16) = ctx->r10;
    // 0x8007EC6C: addiu       $a0, $a0, 0x6AC4
    ctx->r4 = ADD32(ctx->r4, 0X6AC4);
    // 0x8007EC70: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007EC74: jal         0x8002135C
    // 0x8007EC78: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    func_8002135C(rdram, ctx);
        goto after_9;
    // 0x8007EC78: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    after_9:
    // 0x8007EC7C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007EC80: sb          $s1, 0x2274($s0)
    MEM_B(0X2274, ctx->r16) = ctx->r17;
    // 0x8007EC84: addiu       $a0, $a0, 0x6B00
    ctx->r4 = ADD32(ctx->r4, 0X6B00);
    // 0x8007EC88: jal         0x8007AAF8
    // 0x8007EC8C: addiu       $a1, $zero, 0x193
    ctx->r5 = ADD32(0, 0X193);
    func_8007AAF8(rdram, ctx);
        goto after_10;
    // 0x8007EC8C: addiu       $a1, $zero, 0x193
    ctx->r5 = ADD32(0, 0X193);
    after_10:
    // 0x8007EC90: lbu         $t3, 0x2278($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X2278);
    // 0x8007EC94: lbu         $t5, 0x2279($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X2279);
    // 0x8007EC98: addiu       $t7, $zero, 0x40
    ctx->r15 = ADD32(0, 0X40);
    // 0x8007EC9C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007ECA0: andi        $t4, $t3, 0xFF01
    ctx->r12 = ctx->r11 & 0XFF01;
    // 0x8007ECA4: andi        $t6, $t5, 0xFFBF
    ctx->r14 = ctx->r13 & 0XFFBF;
    // 0x8007ECA8: sb          $t4, 0x2278($s0)
    MEM_B(0X2278, ctx->r16) = ctx->r12;
    // 0x8007ECAC: sb          $t6, 0x2279($s0)
    MEM_B(0X2279, ctx->r16) = ctx->r14;
    // 0x8007ECB0: sb          $s2, 0x2275($s0)
    MEM_B(0X2275, ctx->r16) = ctx->r18;
    // 0x8007ECB4: sh          $s3, 0x2288($s0)
    MEM_H(0X2288, ctx->r16) = ctx->r19;
    // 0x8007ECB8: sh          $t7, 0x228C($s0)
    MEM_H(0X228C, ctx->r16) = ctx->r15;
    // 0x8007ECBC: addiu       $a0, $a0, 0x6B00
    ctx->r4 = ADD32(ctx->r4, 0X6B00);
    // 0x8007ECC0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007ECC4: jal         0x8002135C
    // 0x8007ECC8: addiu       $a2, $zero, 0x83
    ctx->r6 = ADD32(0, 0X83);
    func_8002135C(rdram, ctx);
        goto after_11;
    // 0x8007ECC8: addiu       $a2, $zero, 0x83
    ctx->r6 = ADD32(0, 0X83);
    after_11:
    // 0x8007ECCC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007ECD0: sb          $s1, 0x22B0($s0)
    MEM_B(0X22B0, ctx->r16) = ctx->r17;
    // 0x8007ECD4: addiu       $a0, $a0, 0x6B3C
    ctx->r4 = ADD32(ctx->r4, 0X6B3C);
    // 0x8007ECD8: jal         0x8007AAF8
    // 0x8007ECDC: addiu       $a1, $zero, 0x193
    ctx->r5 = ADD32(0, 0X193);
    func_8007AAF8(rdram, ctx);
        goto after_12;
    // 0x8007ECDC: addiu       $a1, $zero, 0x193
    ctx->r5 = ADD32(0, 0X193);
    after_12:
    // 0x8007ECE0: lbu         $t8, 0x22B4($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X22B4);
    // 0x8007ECE4: lbu         $t0, 0x22B5($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X22B5);
    // 0x8007ECE8: addiu       $t2, $zero, 0x74
    ctx->r10 = ADD32(0, 0X74);
    // 0x8007ECEC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007ECF0: andi        $t9, $t8, 0xFF01
    ctx->r25 = ctx->r24 & 0XFF01;
    // 0x8007ECF4: andi        $t1, $t0, 0xFFBF
    ctx->r9 = ctx->r8 & 0XFFBF;
    // 0x8007ECF8: sb          $t9, 0x22B4($s0)
    MEM_B(0X22B4, ctx->r16) = ctx->r25;
    // 0x8007ECFC: sb          $t1, 0x22B5($s0)
    MEM_B(0X22B5, ctx->r16) = ctx->r9;
    // 0x8007ED00: sb          $s2, 0x22B1($s0)
    MEM_B(0X22B1, ctx->r16) = ctx->r18;
    // 0x8007ED04: sh          $s3, 0x22C4($s0)
    MEM_H(0X22C4, ctx->r16) = ctx->r19;
    // 0x8007ED08: sh          $t2, 0x22C8($s0)
    MEM_H(0X22C8, ctx->r16) = ctx->r10;
    // 0x8007ED0C: addiu       $a0, $a0, 0x6B3C
    ctx->r4 = ADD32(ctx->r4, 0X6B3C);
    // 0x8007ED10: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007ED14: jal         0x8002135C
    // 0x8007ED18: addiu       $a2, $zero, 0x83
    ctx->r6 = ADD32(0, 0X83);
    func_8002135C(rdram, ctx);
        goto after_13;
    // 0x8007ED18: addiu       $a2, $zero, 0x83
    ctx->r6 = ADD32(0, 0X83);
    after_13:
    // 0x8007ED1C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007ED20: sb          $s1, 0x22EC($s0)
    MEM_B(0X22EC, ctx->r16) = ctx->r17;
    // 0x8007ED24: addiu       $a0, $a0, 0x6B78
    ctx->r4 = ADD32(ctx->r4, 0X6B78);
    // 0x8007ED28: jal         0x8007AAF8
    // 0x8007ED2C: addiu       $a1, $zero, 0x194
    ctx->r5 = ADD32(0, 0X194);
    func_8007AAF8(rdram, ctx);
        goto after_14;
    // 0x8007ED2C: addiu       $a1, $zero, 0x194
    ctx->r5 = ADD32(0, 0X194);
    after_14:
    // 0x8007ED30: lbu         $t3, 0x22F0($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X22F0);
    // 0x8007ED34: lbu         $t5, 0x22F1($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X22F1);
    // 0x8007ED38: addiu       $t7, $zero, 0xAE
    ctx->r15 = ADD32(0, 0XAE);
    // 0x8007ED3C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007ED40: andi        $t4, $t3, 0xFF01
    ctx->r12 = ctx->r11 & 0XFF01;
    // 0x8007ED44: andi        $t6, $t5, 0xFFBF
    ctx->r14 = ctx->r13 & 0XFFBF;
    // 0x8007ED48: sb          $t4, 0x22F0($s0)
    MEM_B(0X22F0, ctx->r16) = ctx->r12;
    // 0x8007ED4C: sb          $t6, 0x22F1($s0)
    MEM_B(0X22F1, ctx->r16) = ctx->r14;
    // 0x8007ED50: sb          $s2, 0x22ED($s0)
    MEM_B(0X22ED, ctx->r16) = ctx->r18;
    // 0x8007ED54: sh          $s3, 0x2300($s0)
    MEM_H(0X2300, ctx->r16) = ctx->r19;
    // 0x8007ED58: sh          $t7, 0x2304($s0)
    MEM_H(0X2304, ctx->r16) = ctx->r15;
    // 0x8007ED5C: addiu       $a0, $a0, 0x6B78
    ctx->r4 = ADD32(ctx->r4, 0X6B78);
    // 0x8007ED60: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007ED64: jal         0x8002135C
    // 0x8007ED68: addiu       $a2, $zero, 0x84
    ctx->r6 = ADD32(0, 0X84);
    func_8002135C(rdram, ctx);
        goto after_15;
    // 0x8007ED68: addiu       $a2, $zero, 0x84
    ctx->r6 = ADD32(0, 0X84);
    after_15:
    // 0x8007ED6C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007ED70: sb          $s1, 0x2328($s0)
    MEM_B(0X2328, ctx->r16) = ctx->r17;
    // 0x8007ED74: addiu       $a0, $a0, 0x6BB4
    ctx->r4 = ADD32(ctx->r4, 0X6BB4);
    // 0x8007ED78: jal         0x8007AAF8
    // 0x8007ED7C: addiu       $a1, $zero, 0x195
    ctx->r5 = ADD32(0, 0X195);
    func_8007AAF8(rdram, ctx);
        goto after_16;
    // 0x8007ED7C: addiu       $a1, $zero, 0x195
    ctx->r5 = ADD32(0, 0X195);
    after_16:
    // 0x8007ED80: lbu         $t8, 0x232C($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X232C);
    // 0x8007ED84: lbu         $t0, 0x232D($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X232D);
    // 0x8007ED88: addiu       $t2, $zero, 0x40
    ctx->r10 = ADD32(0, 0X40);
    // 0x8007ED8C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007ED90: andi        $t9, $t8, 0xFF01
    ctx->r25 = ctx->r24 & 0XFF01;
    // 0x8007ED94: andi        $t1, $t0, 0xFFBF
    ctx->r9 = ctx->r8 & 0XFFBF;
    // 0x8007ED98: sb          $t9, 0x232C($s0)
    MEM_B(0X232C, ctx->r16) = ctx->r25;
    // 0x8007ED9C: sb          $t1, 0x232D($s0)
    MEM_B(0X232D, ctx->r16) = ctx->r9;
    // 0x8007EDA0: sb          $s2, 0x2329($s0)
    MEM_B(0X2329, ctx->r16) = ctx->r18;
    // 0x8007EDA4: sh          $s3, 0x233C($s0)
    MEM_H(0X233C, ctx->r16) = ctx->r19;
    // 0x8007EDA8: sh          $t2, 0x2340($s0)
    MEM_H(0X2340, ctx->r16) = ctx->r10;
    // 0x8007EDAC: addiu       $a0, $a0, 0x6BB4
    ctx->r4 = ADD32(ctx->r4, 0X6BB4);
    // 0x8007EDB0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007EDB4: jal         0x8002135C
    // 0x8007EDB8: addiu       $a2, $zero, 0x7F
    ctx->r6 = ADD32(0, 0X7F);
    func_8002135C(rdram, ctx);
        goto after_17;
    // 0x8007EDB8: addiu       $a2, $zero, 0x7F
    ctx->r6 = ADD32(0, 0X7F);
    after_17:
    // 0x8007EDBC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007EDC0: sb          $s1, 0x2364($s0)
    MEM_B(0X2364, ctx->r16) = ctx->r17;
    // 0x8007EDC4: addiu       $a0, $a0, 0x6BF0
    ctx->r4 = ADD32(ctx->r4, 0X6BF0);
    // 0x8007EDC8: jal         0x8007AAF8
    // 0x8007EDCC: addiu       $a1, $zero, 0x195
    ctx->r5 = ADD32(0, 0X195);
    func_8007AAF8(rdram, ctx);
        goto after_18;
    // 0x8007EDCC: addiu       $a1, $zero, 0x195
    ctx->r5 = ADD32(0, 0X195);
    after_18:
    // 0x8007EDD0: lbu         $t3, 0x2368($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X2368);
    // 0x8007EDD4: lbu         $t5, 0x2369($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X2369);
    // 0x8007EDD8: lbu         $t8, 0x236B($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X236B);
    // 0x8007EDDC: addiu       $t0, $zero, 0x74
    ctx->r8 = ADD32(0, 0X74);
    // 0x8007EDE0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007EDE4: andi        $t4, $t3, 0xFF01
    ctx->r12 = ctx->r11 & 0XFF01;
    // 0x8007EDE8: andi        $t6, $t5, 0xFFBF
    ctx->r14 = ctx->r13 & 0XFFBF;
    // 0x8007EDEC: ori         $t9, $t8, 0x20
    ctx->r25 = ctx->r24 | 0X20;
    // 0x8007EDF0: sb          $t4, 0x2368($s0)
    MEM_B(0X2368, ctx->r16) = ctx->r12;
    // 0x8007EDF4: sb          $t6, 0x2369($s0)
    MEM_B(0X2369, ctx->r16) = ctx->r14;
    // 0x8007EDF8: sb          $t9, 0x236B($s0)
    MEM_B(0X236B, ctx->r16) = ctx->r25;
    // 0x8007EDFC: sb          $s2, 0x2365($s0)
    MEM_B(0X2365, ctx->r16) = ctx->r18;
    // 0x8007EE00: sh          $s3, 0x2378($s0)
    MEM_H(0X2378, ctx->r16) = ctx->r19;
    // 0x8007EE04: sh          $t0, 0x237C($s0)
    MEM_H(0X237C, ctx->r16) = ctx->r8;
    // 0x8007EE08: addiu       $a0, $a0, 0x6BF0
    ctx->r4 = ADD32(ctx->r4, 0X6BF0);
    // 0x8007EE0C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8007EE10: jal         0x8002135C
    // 0x8007EE14: addiu       $a2, $zero, 0x7F
    ctx->r6 = ADD32(0, 0X7F);
    func_8002135C(rdram, ctx);
        goto after_19;
    // 0x8007EE14: addiu       $a2, $zero, 0x7F
    ctx->r6 = ADD32(0, 0X7F);
    after_19:
    // 0x8007EE18: jal         0x8007E97C
    // 0x8007EE1C: nop

    func_8007E97C(rdram, ctx);
        goto after_20;
    // 0x8007EE1C: nop

    after_20:
L_8007EE20:
    // 0x8007EE20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007EE24: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8007EE28: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8007EE2C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8007EE30: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8007EE34: jr          $ra
    // 0x8007EE38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8007EE38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8007EE3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007EE3C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8007EE40: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007EE44: sb          $t6, 0x39B4($at)
    MEM_B(0X39B4, ctx->r1) = ctx->r14;
    // 0x8007EE48: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8007EE4C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007EE50: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007EE54: lbu         $v0, 0x39B3($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X39B3);
    // 0x8007EE58: sb          $v1, 0x39B5($at)
    MEM_B(0X39B5, ctx->r1) = ctx->r3;
    // 0x8007EE5C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8007EE60: beq         $v0, $at, L_8007EEF8
    if (ctx->r2 == ctx->r1) {
        // 0x8007EE64: lui         $a0, 0x802C
        ctx->r4 = S32(0X802C << 16);
            goto L_8007EEF8;
    }
    // 0x8007EE64: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007EE68: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007EE6C: addiu       $a0, $a0, 0x3968
    ctx->r4 = ADD32(ctx->r4, 0X3968);
    // 0x8007EE70: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x8007EE74: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x8007EE78: addiu       $t8, $t7, 0x3
    ctx->r24 = ADD32(ctx->r15, 0X3);
    // 0x8007EE7C: sb          $t8, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r24;
    // 0x8007EE80: lbu         $t9, 0x39B2($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X39B2);
    // 0x8007EE84: nop

    // 0x8007EE88: bne         $t9, $zero, L_8007EEC4
    if (ctx->r25 != 0) {
        // 0x8007EE8C: nop
    
            goto L_8007EEC4;
    }
    // 0x8007EE8C: nop

    // 0x8007EE90: bne         $v0, $zero, L_8007EEA4
    if (ctx->r2 != 0) {
        // 0x8007EE94: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_8007EEA4;
    }
    // 0x8007EE94: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007EE98: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007EE9C: b           L_8007EEA8
    // 0x8007EEA0: sh          $zero, 0xB76($at)
    MEM_H(0XB76, ctx->r1) = 0;
        goto L_8007EEA8;
    // 0x8007EEA0: sh          $zero, 0xB76($at)
    MEM_H(0XB76, ctx->r1) = 0;
L_8007EEA4:
    // 0x8007EEA4: sh          $v1, 0xB76($at)
    MEM_H(0XB76, ctx->r1) = ctx->r3;
L_8007EEA8:
    // 0x8007EEA8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8007EEAC: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8007EEB0: lhu         $t0, 0xA9C($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0XA9C);
    // 0x8007EEB4: nop

    // 0x8007EEB8: ori         $t1, $t0, 0x10
    ctx->r9 = ctx->r8 | 0X10;
    // 0x8007EEBC: jr          $ra
    // 0x8007EEC0: sh          $t1, 0xA9C($v0)
    MEM_H(0XA9C, ctx->r2) = ctx->r9;
    return;
    // 0x8007EEC0: sh          $t1, 0xA9C($v0)
    MEM_H(0XA9C, ctx->r2) = ctx->r9;
L_8007EEC4:
    // 0x8007EEC4: beq         $v0, $zero, L_8007EED4
    if (ctx->r2 == 0) {
        // 0x8007EEC8: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_8007EED4;
    }
    // 0x8007EEC8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007EECC: b           L_8007EEDC
    // 0x8007EED0: sh          $zero, 0xB76($at)
    MEM_H(0XB76, ctx->r1) = 0;
        goto L_8007EEDC;
    // 0x8007EED0: sh          $zero, 0xB76($at)
    MEM_H(0XB76, ctx->r1) = 0;
L_8007EED4:
    // 0x8007EED4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007EED8: sh          $v1, 0xB76($at)
    MEM_H(0XB76, ctx->r1) = ctx->r3;
L_8007EEDC:
    // 0x8007EEDC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8007EEE0: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8007EEE4: lhu         $t2, 0x8($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X8);
    // 0x8007EEE8: nop

    // 0x8007EEEC: ori         $t3, $t2, 0x10
    ctx->r11 = ctx->r10 | 0X10;
    // 0x8007EEF0: jr          $ra
    // 0x8007EEF4: sh          $t3, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r11;
    return;
    // 0x8007EEF4: sh          $t3, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r11;
L_8007EEF8:
    // 0x8007EEF8: addiu       $a0, $a0, 0x3968
    ctx->r4 = ADD32(ctx->r4, 0X3968);
    // 0x8007EEFC: lbu         $t4, 0x0($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X0);
    // 0x8007EF00: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007EF04: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8007EF08: sb          $t5, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r13;
    // 0x8007EF0C: lbu         $t6, 0x39B2($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39B2);
    // 0x8007EF10: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8007EF14: bne         $t6, $zero, L_8007EF38
    if (ctx->r14 != 0) {
        // 0x8007EF18: addiu       $v0, $v0, -0x2CF0
        ctx->r2 = ADD32(ctx->r2, -0X2CF0);
            goto L_8007EF38;
    }
    // 0x8007EF18: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8007EF1C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8007EF20: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8007EF24: lhu         $t7, 0x8($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X8);
    // 0x8007EF28: nop

    // 0x8007EF2C: ori         $t8, $t7, 0x10
    ctx->r24 = ctx->r15 | 0X10;
    // 0x8007EF30: jr          $ra
    // 0x8007EF34: sh          $t8, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r24;
    return;
    // 0x8007EF34: sh          $t8, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r24;
L_8007EF38:
    // 0x8007EF38: lhu         $t9, 0xA9C($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XA9C);
    // 0x8007EF3C: nop

    // 0x8007EF40: ori         $t0, $t9, 0x10
    ctx->r8 = ctx->r25 | 0X10;
    // 0x8007EF44: sh          $t0, 0xA9C($v0)
    MEM_H(0XA9C, ctx->r2) = ctx->r8;
    // 0x8007EF48: jr          $ra
    // 0x8007EF4C: nop

    return;
    // 0x8007EF4C: nop

;}
RECOMP_FUNC void func_8007EF50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007EF50: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007EF54: lbu         $t6, 0x39B1($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39B1);
    // 0x8007EF58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007EF5C: bne         $t6, $zero, L_8007F034
    if (ctx->r14 != 0) {
        // 0x8007EF60: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007F034;
    }
    // 0x8007EF60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007EF64: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x8007EF68: lbu         $t7, 0x39B2($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X39B2);
    // 0x8007EF6C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007EF70: bne         $t7, $zero, L_8007EFB8
    if (ctx->r15 != 0) {
        // 0x8007EF74: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_8007EFB8;
    }
    // 0x8007EF74: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8007EF78: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8007EF7C: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x8007EF80: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8007EF84: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8007EF88: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x8007EF8C: lh          $t8, 0x9B0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X9B0);
    // 0x8007EF90: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007EF94: addiu       $v1, $v1, 0x3930
    ctx->r3 = ADD32(ctx->r3, 0X3930);
    // 0x8007EF98: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
    // 0x8007EF9C: lhu         $t9, 0x9AA($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X9AA);
    // 0x8007EFA0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007EFA4: sh          $t9, 0x3932($at)
    MEM_H(0X3932, ctx->r1) = ctx->r25;
    // 0x8007EFA8: lhu         $t0, 0x9AC($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X9AC);
    // 0x8007EFAC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007EFB0: b           L_8007EFF4
    // 0x8007EFB4: sh          $t0, 0x3934($at)
    MEM_H(0X3934, ctx->r1) = ctx->r8;
        goto L_8007EFF4;
    // 0x8007EFB4: sh          $t0, 0x3934($at)
    MEM_H(0X3934, ctx->r1) = ctx->r8;
L_8007EFB8:
    // 0x8007EFB8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8007EFBC: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x8007EFC0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8007EFC4: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8007EFC8: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x8007EFCC: lh          $t1, 0x9BA($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X9BA);
    // 0x8007EFD0: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007EFD4: addiu       $v1, $v1, 0x3930
    ctx->r3 = ADD32(ctx->r3, 0X3930);
    // 0x8007EFD8: sh          $t1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r9;
    // 0x8007EFDC: lhu         $t2, 0x9B4($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X9B4);
    // 0x8007EFE0: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007EFE4: sh          $t2, 0x3932($at)
    MEM_H(0X3932, ctx->r1) = ctx->r10;
    // 0x8007EFE8: lhu         $t3, 0x9B6($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X9B6);
    // 0x8007EFEC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007EFF0: sh          $t3, 0x3934($at)
    MEM_H(0X3934, ctx->r1) = ctx->r11;
L_8007EFF4:
    // 0x8007EFF4: lbu         $a0, 0x39B3($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X39B3);
    // 0x8007EFF8: lh          $a2, 0x0($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X0);
    // 0x8007EFFC: jal         0x80297A84
    // 0x8007F000: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(0x80297A84)(rdram, ctx);
        goto after_0;
    // 0x8007F000: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8007F004: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x8007F008: lhu         $t4, 0x3932($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X3932);
    // 0x8007F00C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007F010: andi        $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 & 0X8000;
    // 0x8007F014: beq         $t5, $zero, L_8007F0C4
    if (ctx->r13 == 0) {
        // 0x8007F018: sb          $v0, 0x39B3($at)
        MEM_B(0X39B3, ctx->r1) = ctx->r2;
            goto L_8007F0C4;
    }
    // 0x8007F018: sb          $v0, 0x39B3($at)
    MEM_B(0X39B3, ctx->r1) = ctx->r2;
    // 0x8007F01C: jal         0x80015BC0
    // 0x8007F020: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x8007F020: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    after_1:
    // 0x8007F024: jal         0x8007EE3C
    // 0x8007F028: nop

    func_8007EE3C(rdram, ctx);
        goto after_2;
    // 0x8007F028: nop

    after_2:
    // 0x8007F02C: b           L_8007F0C4
    // 0x8007F030: nop

        goto L_8007F0C4;
    // 0x8007F030: nop

L_8007F034:
    // 0x8007F034: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007F038: addiu       $v0, $v0, 0x39B5
    ctx->r2 = ADD32(ctx->r2, 0X39B5);
    // 0x8007F03C: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8007F040: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007F044: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8007F048: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8007F04C: bne         $t8, $zero, L_8007F0C4
    if (ctx->r24 != 0) {
        // 0x8007F050: sb          $t7, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r15;
            goto L_8007F0C4;
    }
    // 0x8007F050: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8007F054: addiu       $v1, $v1, 0x39B3
    ctx->r3 = ADD32(ctx->r3, 0X39B3);
    // 0x8007F058: lbu         $t0, 0x0($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X0);
    // 0x8007F05C: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x8007F060: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8007F064: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x8007F068: sb          $t1, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r9;
    // 0x8007F06C: jal         0x80015BC0
    // 0x8007F070: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    func_80015BC0(rdram, ctx);
        goto after_3;
    // 0x8007F070: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    after_3:
    // 0x8007F074: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007F078: addiu       $v0, $v0, 0x39B4
    ctx->r2 = ADD32(ctx->r2, 0X39B4);
    // 0x8007F07C: lbu         $t2, 0x0($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X0);
    // 0x8007F080: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x8007F084: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x8007F088: sb          $t3, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r11;
    // 0x8007F08C: lbu         $t4, 0x39B3($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X39B3);
    // 0x8007F090: nop

    // 0x8007F094: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x8007F098: bne         $at, $zero, L_8007F0A4
    if (ctx->r1 != 0) {
        // 0x8007F09C: lui         $at, 0x802C
        ctx->r1 = S32(0X802C << 16);
            goto L_8007F0A4;
    }
    // 0x8007F09C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007F0A0: sb          $zero, 0x39B3($at)
    MEM_B(0X39B3, ctx->r1) = 0;
L_8007F0A4:
    // 0x8007F0A4: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x8007F0A8: nop

    // 0x8007F0AC: bne         $t5, $zero, L_8007F0C4
    if (ctx->r13 != 0) {
        // 0x8007F0B0: nop
    
            goto L_8007F0C4;
    }
    // 0x8007F0B0: nop

    // 0x8007F0B4: jal         0x80015BC0
    // 0x8007F0B8: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    func_80015BC0(rdram, ctx);
        goto after_4;
    // 0x8007F0B8: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    after_4:
    // 0x8007F0BC: jal         0x8007EE3C
    // 0x8007F0C0: nop

    func_8007EE3C(rdram, ctx);
        goto after_5;
    // 0x8007F0C0: nop

    after_5:
L_8007F0C4:
    // 0x8007F0C4: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007F0C8: lbu         $t6, 0x39B3($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39B3);
    // 0x8007F0CC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007F0D0: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8007F0D4: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x8007F0D8: lhu         $a1, 0xE1C($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0XE1C);
    // 0x8007F0DC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007F0E0: jal         0x8007AAF8
    // 0x8007F0E4: addiu       $a0, $a0, 0x6CA4
    ctx->r4 = ADD32(ctx->r4, 0X6CA4);
    func_8007AAF8(rdram, ctx);
        goto after_6;
    // 0x8007F0E4: addiu       $a0, $a0, 0x6CA4
    ctx->r4 = ADD32(ctx->r4, 0X6CA4);
    after_6:
    // 0x8007F0E8: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8007F0EC: lbu         $t8, 0x39B3($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X39B3);
    // 0x8007F0F0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8007F0F4: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8007F0F8: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x8007F0FC: lhu         $v0, 0xE2C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XE2C);
    // 0x8007F100: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x8007F104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007F108: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x8007F10C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007F110: sh          $v0, 0x23B8($v1)
    MEM_H(0X23B8, ctx->r3) = ctx->r2;
    // 0x8007F114: sh          $v0, 0x23F4($v1)
    MEM_H(0X23F4, ctx->r3) = ctx->r2;
    // 0x8007F118: jr          $ra
    // 0x8007F11C: sh          $v0, 0x2430($v1)
    MEM_H(0X2430, ctx->r3) = ctx->r2;
    return;
    // 0x8007F11C: sh          $v0, 0x2430($v1)
    MEM_H(0X2430, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_8007F120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F120: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007F124: addiu       $v0, $v0, 0x39B5
    ctx->r2 = ADD32(ctx->r2, 0X39B5);
    // 0x8007F128: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8007F12C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007F130: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8007F134: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8007F138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007F13C: bne         $t8, $zero, L_8007F200
    if (ctx->r24 != 0) {
        // 0x8007F140: sb          $t7, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r15;
            goto L_8007F200;
    }
    // 0x8007F140: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8007F144: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007F148: addiu       $a0, $a0, 0x39B4
    ctx->r4 = ADD32(ctx->r4, 0X39B4);
    // 0x8007F14C: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x8007F150: lbu         $t2, 0x0($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X0);
    // 0x8007F154: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x8007F158: lbu         $t0, 0x2418($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X2418);
    // 0x8007F15C: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x8007F160: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8007F164: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x8007F168: xori        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 ^ 0X1;
    // 0x8007F16C: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x8007F170: sb          $t1, 0x2418($v1)
    MEM_B(0X2418, ctx->r3) = ctx->r9;
    // 0x8007F174: bne         $t4, $zero, L_8007F200
    if (ctx->r12 != 0) {
        // 0x8007F178: sb          $t3, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r11;
            goto L_8007F200;
    }
    // 0x8007F178: sb          $t3, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r11;
    // 0x8007F17C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007F180: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8007F184: addiu       $a1, $a1, 0x39B2
    ctx->r5 = ADD32(ctx->r5, 0X39B2);
    // 0x8007F188: addiu       $v1, $v1, 0x3968
    ctx->r3 = ADD32(ctx->r3, 0X3968);
    // 0x8007F18C: lbu         $t5, 0x0($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X0);
    // 0x8007F190: lbu         $t7, 0x0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X0);
    // 0x8007F194: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8007F198: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x8007F19C: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
    // 0x8007F1A0: sb          $t8, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r24;
    // 0x8007F1A4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8007F1A8: lhu         $v0, 0xB72($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB72);
    // 0x8007F1AC: nop

    // 0x8007F1B0: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8007F1B4: beq         $at, $zero, L_8007F1D0
    if (ctx->r1 == 0) {
        // 0x8007F1B8: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_8007F1D0;
    }
    // 0x8007F1B8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007F1BC: addiu       $v0, $v0, 0x39B1
    ctx->r2 = ADD32(ctx->r2, 0X39B1);
    // 0x8007F1C0: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x8007F1C4: nop

    // 0x8007F1C8: xori        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 ^ 0X1;
    // 0x8007F1CC: sb          $t0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r8;
L_8007F1D0:
    // 0x8007F1D0: jal         0x8007E97C
    // 0x8007F1D4: nop

    func_8007E97C(rdram, ctx);
        goto after_0;
    // 0x8007F1D4: nop

    after_0:
    // 0x8007F1D8: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x8007F1DC: lhu         $t1, 0x522A($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X522A);
    // 0x8007F1E0: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8007F1E4: andi        $t2, $t1, 0x3
    ctx->r10 = ctx->r9 & 0X3;
    // 0x8007F1E8: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8007F1EC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8007F1F0: lhu         $t4, 0xE24($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0XE24);
    // 0x8007F1F4: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007F1F8: addiu       $a0, $a0, 0x39B4
    ctx->r4 = ADD32(ctx->r4, 0X39B4);
    // 0x8007F1FC: sb          $t4, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r12;
L_8007F200:
    // 0x8007F200: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007F204: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007F208: jr          $ra
    // 0x8007F20C: nop

    return;
    // 0x8007F20C: nop

;}
RECOMP_FUNC void func_8007F210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F210: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007F214: addiu       $v0, $v0, 0x3968
    ctx->r2 = ADD32(ctx->r2, 0X3968);
    // 0x8007F218: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8007F21C: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x8007F220: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8007F224: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8007F228: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007F22C: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x8007F230: lbu         $t9, 0x39B2($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X39B2);
    // 0x8007F234: sb          $t8, 0x39B4($at)
    MEM_B(0X39B4, ctx->r1) = ctx->r24;
    // 0x8007F238: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8007F23C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007F240: bne         $t9, $zero, L_8007F270
    if (ctx->r25 != 0) {
        // 0x8007F244: sb          $v1, 0x39B5($at)
        MEM_B(0X39B5, ctx->r1) = ctx->r3;
            goto L_8007F270;
    }
    // 0x8007F244: sb          $v1, 0x39B5($at)
    MEM_B(0X39B5, ctx->r1) = ctx->r3;
    // 0x8007F248: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x8007F24C: lbu         $t0, 0x39B3($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X39B3);
    // 0x8007F250: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007F254: bne         $t0, $zero, L_8007F268
    if (ctx->r8 != 0) {
        // 0x8007F258: nop
    
            goto L_8007F268;
    }
    // 0x8007F258: nop

    // 0x8007F25C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007F260: jr          $ra
    // 0x8007F264: sh          $zero, 0xB76($at)
    MEM_H(0XB76, ctx->r1) = 0;
    return;
    // 0x8007F264: sh          $zero, 0xB76($at)
    MEM_H(0XB76, ctx->r1) = 0;
L_8007F268:
    // 0x8007F268: jr          $ra
    // 0x8007F26C: sh          $v1, 0xB76($at)
    MEM_H(0XB76, ctx->r1) = ctx->r3;
    return;
    // 0x8007F26C: sh          $v1, 0xB76($at)
    MEM_H(0XB76, ctx->r1) = ctx->r3;
L_8007F270:
    // 0x8007F270: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x8007F274: lbu         $t1, 0x39B3($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X39B3);
    // 0x8007F278: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007F27C: beq         $t1, $zero, L_8007F290
    if (ctx->r9 == 0) {
        // 0x8007F280: nop
    
            goto L_8007F290;
    }
    // 0x8007F280: nop

    // 0x8007F284: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007F288: jr          $ra
    // 0x8007F28C: sh          $zero, 0xB76($at)
    MEM_H(0XB76, ctx->r1) = 0;
    return;
    // 0x8007F28C: sh          $zero, 0xB76($at)
    MEM_H(0XB76, ctx->r1) = 0;
L_8007F290:
    // 0x8007F290: sh          $v1, 0xB76($at)
    MEM_H(0XB76, ctx->r1) = ctx->r3;
    // 0x8007F294: jr          $ra
    // 0x8007F298: nop

    return;
    // 0x8007F298: nop

;}
RECOMP_FUNC void func_8007F29C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F29C: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007F2A0: lbu         $t6, 0x39B1($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39B1);
    // 0x8007F2A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007F2A8: bne         $t6, $zero, L_8007F380
    if (ctx->r14 != 0) {
        // 0x8007F2AC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8007F380;
    }
    // 0x8007F2AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007F2B0: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x8007F2B4: lbu         $t7, 0x39B2($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X39B2);
    // 0x8007F2B8: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007F2BC: bne         $t7, $zero, L_8007F304
    if (ctx->r15 != 0) {
        // 0x8007F2C0: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8007F304;
    }
    // 0x8007F2C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8007F2C4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8007F2C8: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x8007F2CC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8007F2D0: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8007F2D4: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x8007F2D8: lh          $t8, 0x9B0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X9B0);
    // 0x8007F2DC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007F2E0: addiu       $v1, $v1, 0x3930
    ctx->r3 = ADD32(ctx->r3, 0X3930);
    // 0x8007F2E4: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
    // 0x8007F2E8: lhu         $t9, 0x9AA($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X9AA);
    // 0x8007F2EC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007F2F0: sh          $t9, 0x3932($at)
    MEM_H(0X3932, ctx->r1) = ctx->r25;
    // 0x8007F2F4: lhu         $t0, 0x9AC($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X9AC);
    // 0x8007F2F8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007F2FC: b           L_8007F340
    // 0x8007F300: sh          $t0, 0x3934($at)
    MEM_H(0X3934, ctx->r1) = ctx->r8;
        goto L_8007F340;
    // 0x8007F300: sh          $t0, 0x3934($at)
    MEM_H(0X3934, ctx->r1) = ctx->r8;
L_8007F304:
    // 0x8007F304: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8007F308: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x8007F30C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8007F310: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8007F314: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x8007F318: lh          $t1, 0x9BA($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X9BA);
    // 0x8007F31C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007F320: addiu       $v1, $v1, 0x3930
    ctx->r3 = ADD32(ctx->r3, 0X3930);
    // 0x8007F324: sh          $t1, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r9;
    // 0x8007F328: lhu         $t2, 0x9B4($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X9B4);
    // 0x8007F32C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007F330: sh          $t2, 0x3932($at)
    MEM_H(0X3932, ctx->r1) = ctx->r10;
    // 0x8007F334: lhu         $t3, 0x9B6($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X9B6);
    // 0x8007F338: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007F33C: sh          $t3, 0x3934($at)
    MEM_H(0X3934, ctx->r1) = ctx->r11;
L_8007F340:
    // 0x8007F340: lbu         $a0, 0x39B3($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X39B3);
    // 0x8007F344: lh          $a2, 0x0($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X0);
    // 0x8007F348: jal         0x80297A84
    // 0x8007F34C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    LOOKUP_FUNC(0x80297A84)(rdram, ctx);
        goto after_0;
    // 0x8007F34C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8007F350: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x8007F354: lhu         $t4, 0x3932($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X3932);
    // 0x8007F358: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007F35C: andi        $t5, $t4, 0x8000
    ctx->r13 = ctx->r12 & 0X8000;
    // 0x8007F360: beq         $t5, $zero, L_8007F410
    if (ctx->r13 == 0) {
        // 0x8007F364: sb          $v0, 0x39B3($at)
        MEM_B(0X39B3, ctx->r1) = ctx->r2;
            goto L_8007F410;
    }
    // 0x8007F364: sb          $v0, 0x39B3($at)
    MEM_B(0X39B3, ctx->r1) = ctx->r2;
    // 0x8007F368: jal         0x8007F210
    // 0x8007F36C: nop

    func_8007F210(rdram, ctx);
        goto after_1;
    // 0x8007F36C: nop

    after_1:
    // 0x8007F370: jal         0x80015BC0
    // 0x8007F374: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    func_80015BC0(rdram, ctx);
        goto after_2;
    // 0x8007F374: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    after_2:
    // 0x8007F378: b           L_8007F410
    // 0x8007F37C: nop

        goto L_8007F410;
    // 0x8007F37C: nop

L_8007F380:
    // 0x8007F380: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007F384: addiu       $v0, $v0, 0x39B5
    ctx->r2 = ADD32(ctx->r2, 0X39B5);
    // 0x8007F388: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8007F38C: nop

    // 0x8007F390: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8007F394: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8007F398: bne         $t8, $zero, L_8007F410
    if (ctx->r24 != 0) {
        // 0x8007F39C: sb          $t7, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r15;
            goto L_8007F410;
    }
    // 0x8007F39C: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8007F3A0: jal         0x80015BC0
    // 0x8007F3A4: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    func_80015BC0(rdram, ctx);
        goto after_3;
    // 0x8007F3A4: addiu       $a0, $zero, 0x355
    ctx->r4 = ADD32(0, 0X355);
    after_3:
    // 0x8007F3A8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x8007F3AC: addiu       $a1, $a1, 0x39B3
    ctx->r5 = ADD32(ctx->r5, 0X39B3);
    // 0x8007F3B0: lbu         $t0, 0x0($a1)
    ctx->r8 = MEM_BU(ctx->r5, 0X0);
    // 0x8007F3B4: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007F3B8: addiu       $v1, $v1, 0x39B4
    ctx->r3 = ADD32(ctx->r3, 0X39B4);
    // 0x8007F3BC: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x8007F3C0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8007F3C4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007F3C8: andi        $t4, $t1, 0xFF
    ctx->r12 = ctx->r9 & 0XFF;
    // 0x8007F3CC: addiu       $v0, $v0, 0x39B5
    ctx->r2 = ADD32(ctx->r2, 0X39B5);
    // 0x8007F3D0: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x8007F3D4: slti        $at, $t4, 0x2
    ctx->r1 = SIGNED(ctx->r12) < 0X2 ? 1 : 0;
    // 0x8007F3D8: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x8007F3DC: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x8007F3E0: sb          $t1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r9;
    // 0x8007F3E4: bne         $at, $zero, L_8007F3F0
    if (ctx->r1 != 0) {
        // 0x8007F3E8: sb          $t3, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r11;
            goto L_8007F3F0;
    }
    // 0x8007F3E8: sb          $t3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r11;
    // 0x8007F3EC: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_8007F3F0:
    // 0x8007F3F0: lbu         $t5, 0x0($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X0);
    // 0x8007F3F4: nop

    // 0x8007F3F8: bne         $t5, $zero, L_8007F410
    if (ctx->r13 != 0) {
        // 0x8007F3FC: nop
    
            goto L_8007F410;
    }
    // 0x8007F3FC: nop

    // 0x8007F400: jal         0x80015BC0
    // 0x8007F404: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    func_80015BC0(rdram, ctx);
        goto after_4;
    // 0x8007F404: addiu       $a0, $zero, 0x129
    ctx->r4 = ADD32(0, 0X129);
    after_4:
    // 0x8007F408: jal         0x8007F210
    // 0x8007F40C: nop

    func_8007F210(rdram, ctx);
        goto after_5;
    // 0x8007F40C: nop

    after_5:
L_8007F410:
    // 0x8007F410: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x8007F414: lbu         $t6, 0x39B3($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X39B3);
    // 0x8007F418: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8007F41C: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8007F420: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x8007F424: lhu         $a1, 0xE1C($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0XE1C);
    // 0x8007F428: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007F42C: jal         0x8007AAF8
    // 0x8007F430: addiu       $a0, $a0, 0x6CA4
    ctx->r4 = ADD32(ctx->r4, 0X6CA4);
    func_8007AAF8(rdram, ctx);
        goto after_6;
    // 0x8007F430: addiu       $a0, $a0, 0x6CA4
    ctx->r4 = ADD32(ctx->r4, 0X6CA4);
    after_6:
    // 0x8007F434: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x8007F438: lbu         $t8, 0x39B3($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X39B3);
    // 0x8007F43C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8007F440: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8007F444: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x8007F448: lhu         $v0, 0xE2C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XE2C);
    // 0x8007F44C: lui         $v1, 0x8010
    ctx->r3 = S32(0X8010 << 16);
    // 0x8007F450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007F454: addiu       $v1, $v1, 0x4890
    ctx->r3 = ADD32(ctx->r3, 0X4890);
    // 0x8007F458: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007F45C: sh          $v0, 0x23B8($v1)
    MEM_H(0X23B8, ctx->r3) = ctx->r2;
    // 0x8007F460: sh          $v0, 0x23F4($v1)
    MEM_H(0X23F4, ctx->r3) = ctx->r2;
    // 0x8007F464: jr          $ra
    // 0x8007F468: sh          $v0, 0x2430($v1)
    MEM_H(0X2430, ctx->r3) = ctx->r2;
    return;
    // 0x8007F468: sh          $v0, 0x2430($v1)
    MEM_H(0X2430, ctx->r3) = ctx->r2;
;}
RECOMP_FUNC void func_8007F46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F46C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007F470: addiu       $v0, $v0, 0x39B5
    ctx->r2 = ADD32(ctx->r2, 0X39B5);
    // 0x8007F474: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8007F478: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007F47C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8007F480: andi        $t8, $t7, 0xFF
    ctx->r24 = ctx->r15 & 0XFF;
    // 0x8007F484: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007F488: bne         $t8, $zero, L_8007F4FC
    if (ctx->r24 != 0) {
        // 0x8007F48C: sb          $t7, 0x0($v0)
        MEM_B(0X0, ctx->r2) = ctx->r15;
            goto L_8007F4FC;
    }
    // 0x8007F48C: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x8007F490: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007F494: addiu       $v1, $v1, 0x39B4
    ctx->r3 = ADD32(ctx->r3, 0X39B4);
    // 0x8007F498: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8007F49C: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x8007F4A0: addiu       $a0, $a0, 0x4890
    ctx->r4 = ADD32(ctx->r4, 0X4890);
    // 0x8007F4A4: lbu         $t0, 0x2418($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X2418);
    // 0x8007F4A8: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x8007F4AC: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8007F4B0: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x8007F4B4: xori        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 ^ 0X1;
    // 0x8007F4B8: sb          $t9, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r25;
    // 0x8007F4BC: sb          $t1, 0x2418($a0)
    MEM_B(0X2418, ctx->r4) = ctx->r9;
    // 0x8007F4C0: bne         $t4, $zero, L_8007F4FC
    if (ctx->r12 != 0) {
        // 0x8007F4C4: sb          $t3, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r11;
            goto L_8007F4FC;
    }
    // 0x8007F4C4: sb          $t3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r11;
    // 0x8007F4C8: jal         0x80015BC0
    // 0x8007F4CC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x8007F4CC: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x8007F4D0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007F4D4: addiu       $v0, $v0, 0x39B5
    ctx->r2 = ADD32(ctx->r2, 0X39B5);
    // 0x8007F4D8: addiu       $t5, $zero, 0x28
    ctx->r13 = ADD32(0, 0X28);
    // 0x8007F4DC: jal         0x80021960
    // 0x8007F4E0: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    func_80021960(rdram, ctx);
        goto after_1;
    // 0x8007F4E0: sb          $t5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r13;
    after_1:
    // 0x8007F4E4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x8007F4E8: addiu       $v0, $v0, 0x3968
    ctx->r2 = ADD32(ctx->r2, 0X3968);
    // 0x8007F4EC: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8007F4F0: nop

    // 0x8007F4F4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8007F4F8: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
L_8007F4FC:
    // 0x8007F4FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007F500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007F504: jr          $ra
    // 0x8007F508: nop

    return;
    // 0x8007F508: nop

;}
RECOMP_FUNC void func_8007F50C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F50C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007F510: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x8007F514: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007F518: lhu         $a0, 0x396A($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X396A);
    // 0x8007F51C: jal         0x8007F5D0
    // 0x8007F520: nop

    func_8007F5D0(rdram, ctx);
        goto after_0;
    // 0x8007F520: nop

    after_0:
    // 0x8007F524: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x8007F528: addiu       $v1, $v1, 0x39B5
    ctx->r3 = ADD32(ctx->r3, 0X39B5);
    // 0x8007F52C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8007F530: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8007F534: beq         $v0, $zero, L_8007F540
    if (ctx->r2 == 0) {
        // 0x8007F538: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_8007F540;
    }
    // 0x8007F538: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x8007F53C: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
L_8007F540:
    // 0x8007F540: lh          $t7, -0x2FA6($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X2FA6);
    // 0x8007F544: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8007F548: bne         $t7, $at, L_8007F5C4
    if (ctx->r15 != ctx->r1) {
        // 0x8007F54C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8007F5C4;
    }
    // 0x8007F54C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007F550: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x8007F554: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8007F558: bne         $t8, $zero, L_8007F5C4
    if (ctx->r24 != 0) {
        // 0x8007F55C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8007F5C4;
    }
    // 0x8007F55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007F560: jal         0x800603F0
    // 0x8007F564: sh          $zero, 0x6968($at)
    MEM_H(0X6968, ctx->r1) = 0;
    func_800603F0(rdram, ctx);
        goto after_1;
    // 0x8007F564: sh          $zero, 0x6968($at)
    MEM_H(0X6968, ctx->r1) = 0;
    after_1:
    // 0x8007F568: jal         0x80073F40
    // 0x8007F56C: nop

    func_80073F40(rdram, ctx);
        goto after_2;
    // 0x8007F56C: nop

    after_2:
    // 0x8007F570: jal         0x8002F2AC
    // 0x8007F574: nop

    func_8002F2AC(rdram, ctx);
        goto after_3;
    // 0x8007F574: nop

    after_3:
    // 0x8007F578: jal         0x80021004
    // 0x8007F57C: nop

    func_80021004(rdram, ctx);
        goto after_4;
    // 0x8007F57C: nop

    after_4:
    // 0x8007F580: jal         0x80020270
    // 0x8007F584: nop

    func_80020270(rdram, ctx);
        goto after_5;
    // 0x8007F584: nop

    after_5:
    // 0x8007F588: jal         0x8002198C
    // 0x8007F58C: nop

    func_8002198C(rdram, ctx);
        goto after_6;
    // 0x8007F58C: nop

    after_6:
    // 0x8007F590: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x8007F594: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007F598: sh          $t9, -0x2FAA($at)
    MEM_H(-0X2FAA, ctx->r1) = ctx->r25;
    // 0x8007F59C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8007F5A0: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8007F5A4: lw          $t0, -0x2F98($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X2F98);
    // 0x8007F5A8: sb          $zero, -0x3298($at)
    MEM_B(-0X3298, ctx->r1) = 0;
    // 0x8007F5AC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8007F5B0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8007F5B4: sb          $zero, 0x7D6($at)
    MEM_B(0X7D6, ctx->r1) = 0;
    // 0x8007F5B8: jal         0x8001B854
    // 0x8007F5BC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_8001B854(rdram, ctx);
        goto after_7;
    // 0x8007F5BC: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_7:
    // 0x8007F5C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8007F5C4:
    // 0x8007F5C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007F5C8: jr          $ra
    // 0x8007F5CC: nop

    return;
    // 0x8007F5CC: nop

;}
RECOMP_FUNC void func_8007F5D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F5D0: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8007F5D4: lui         $at, 0x4024
    ctx->r1 = S32(0X4024 << 16);
    // 0x8007F5D8: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x8007F5DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007F5E0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8007F5E4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8007F5E8: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8007F5EC: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x8007F5F0: lui         $t0, 0x8033
    ctx->r8 = S32(0X8033 << 16);
    // 0x8007F5F4: addiu       $t0, $t0, -0xD80
    ctx->r8 = ADD32(ctx->r8, -0XD80);
    // 0x8007F5F8: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x8007F5FC: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x8007F600: lwc1        $f4, 0x6380($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X6380);
    // 0x8007F604: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8007F608: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8007F60C: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x8007F610: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007F614: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007F618: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007F61C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8007F620: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8007F624: swc1        $f10, 0x3950($at)
    MEM_W(0X3950, ctx->r1) = ctx->f10.u32l;
    // 0x8007F628: lwc1        $f16, 0x6384($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X6384);
    // 0x8007F62C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007F630: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8007F634: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x8007F638: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8007F63C: swc1        $f6, 0x3954($at)
    MEM_W(0X3954, ctx->r1) = ctx->f6.u32l;
    // 0x8007F640: lwc1        $f8, 0x6388($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X6388);
    // 0x8007F644: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007F648: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8007F64C: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x8007F650: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8007F654: swc1        $f18, 0x3958($at)
    MEM_W(0X3958, ctx->r1) = ctx->f18.u32l;
    // 0x8007F658: lwc1        $f4, 0x638C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X638C);
    // 0x8007F65C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007F660: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8007F664: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x8007F668: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8007F66C: swc1        $f10, 0x395C($at)
    MEM_W(0X395C, ctx->r1) = ctx->f10.u32l;
    // 0x8007F670: lwc1        $f16, 0x6390($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X6390);
    // 0x8007F674: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007F678: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8007F67C: mul.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f0.d);
    // 0x8007F680: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x8007F684: swc1        $f6, 0x3960($at)
    MEM_W(0X3960, ctx->r1) = ctx->f6.u32l;
    // 0x8007F688: lwc1        $f8, 0x6394($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X6394);
    // 0x8007F68C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x8007F690: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8007F694: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x8007F698: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8007F69C: jal         0x80297F24
    // 0x8007F6A0: swc1        $f18, 0x3964($at)
    MEM_W(0X3964, ctx->r1) = ctx->f18.u32l;
    LOOKUP_FUNC(0x80297F24)(rdram, ctx);
        goto after_0;
    // 0x8007F6A0: swc1        $f18, 0x3964($at)
    MEM_W(0X3964, ctx->r1) = ctx->f18.u32l;
    after_0:
    // 0x8007F6A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007F6A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007F6AC: jr          $ra
    // 0x8007F6B0: nop

    return;
    // 0x8007F6B0: nop

    // 0x8007F6B4: nop

    // 0x8007F6B8: nop

    // 0x8007F6BC: nop

;}
RECOMP_FUNC void func_8007F6C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F6C0: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007F6C4: lwc1        $f0, -0x4D30($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4D30);
    // 0x8007F6C8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8007F6CC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8007F6D0: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x8007F6D4: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8007F6D8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8007F6DC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8007F6E0: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8007F6E4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8007F6E8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007F6EC: mul.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8007F6F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8007F6F4: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x8007F6F8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8007F6FC: swc1        $f14, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f14.u32l;
    // 0x8007F700: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    // 0x8007F704: swc1        $f0, 0x6480($at)
    MEM_W(0X6480, ctx->r1) = ctx->f0.u32l;
    // 0x8007F708: jal         0x80080E80
    // 0x8007F70C: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    func_80080E80(rdram, ctx);
        goto after_0;
    // 0x8007F70C: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x8007F710: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8007F714: jal         0x80081040
    // 0x8007F718: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_80081040(rdram, ctx);
        goto after_1;
    // 0x8007F718: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_1:
    // 0x8007F71C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x8007F720: jal         0x80080E80
    // 0x8007F724: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x8007F724: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    after_2:
    // 0x8007F728: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x8007F72C: jal         0x80081040
    // 0x8007F730: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    func_80081040(rdram, ctx);
        goto after_3;
    // 0x8007F730: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    after_3:
    // 0x8007F734: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8007F738: jal         0x80080E80
    // 0x8007F73C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    func_80080E80(rdram, ctx);
        goto after_4;
    // 0x8007F73C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x8007F740: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8007F744: jal         0x80081040
    // 0x8007F748: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    func_80081040(rdram, ctx);
        goto after_5;
    // 0x8007F748: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x8007F74C: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8007F750: lwc1        $f2, 0x58($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8007F754: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8007F758: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8007F75C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8007F760: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007F764: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8007F768: nop

    // 0x8007F76C: mul.s       $f8, $f16, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f14.fl);
    // 0x8007F770: swc1        $f6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f6.u32l;
    // 0x8007F774: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8007F778: swc1        $f10, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f10.u32l;
    // 0x8007F77C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8007F780: swc1        $f18, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f18.u32l;
    // 0x8007F784: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x8007F788: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8007F78C: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x8007F790: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8007F794: swc1        $f18, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f18.u32l;
    // 0x8007F798: mul.s       $f12, $f20, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x8007F79C: nop

    // 0x8007F7A0: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8007F7A4: nop

    // 0x8007F7A8: mul.s       $f6, $f22, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f14.fl);
    // 0x8007F7AC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8007F7B0: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8007F7B4: nop

    // 0x8007F7B8: mul.s       $f4, $f12, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x8007F7BC: nop

    // 0x8007F7C0: mul.s       $f6, $f22, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x8007F7C4: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
    // 0x8007F7C8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8007F7CC: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8007F7D0: nop

    // 0x8007F7D4: mul.s       $f4, $f20, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8007F7D8: swc1        $f10, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f10.u32l;
    // 0x8007F7DC: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8007F7E0: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
    // 0x8007F7E4: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8007F7E8: swc1        $f18, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f18.u32l;
    // 0x8007F7EC: mul.s       $f12, $f22, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f22.fl, ctx->f8.fl);
    // 0x8007F7F0: nop

    // 0x8007F7F4: mul.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8007F7F8: nop

    // 0x8007F7FC: mul.s       $f4, $f20, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x8007F800: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8007F804: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8007F808: nop

    // 0x8007F80C: mul.s       $f10, $f12, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f14.fl);
    // 0x8007F810: nop

    // 0x8007F814: mul.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8007F818: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x8007F81C: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8007F820: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x8007F824: nop

    // 0x8007F828: mul.s       $f10, $f22, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f16.fl);
    // 0x8007F82C: swc1        $f8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f8.u32l;
    // 0x8007F830: mul.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f2.fl);
    // 0x8007F834: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
    // 0x8007F838: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8007F83C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007F840: swc1        $f6, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f6.u32l;
    // 0x8007F844: lwc1        $f8, 0x60($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8007F848: swc1        $f8, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f8.u32l;
    // 0x8007F84C: lwc1        $f10, 0x64($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8007F850: swc1        $f4, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f4.u32l;
    // 0x8007F854: swc1        $f10, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f10.u32l;
    // 0x8007F858: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8007F85C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8007F860: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x8007F864: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8007F868: jr          $ra
    // 0x8007F86C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8007F86C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8007F870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F870: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8007F874: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8007F878: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8007F87C: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x8007F880: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8007F884: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8007F888: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8007F88C: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x8007F890: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007F894: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x8007F898: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8007F89C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x8007F8A0: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x8007F8A4: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8007F8A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8007F8AC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8007F8B0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8007F8B4: jal         0x8007F6C0
    // 0x8007F8B8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_8007F6C0(rdram, ctx);
        goto after_0;
    // 0x8007F8B8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x8007F8BC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8007F8C0: jal         0x8007FA50
    // 0x8007F8C4: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    func_8007FA50(rdram, ctx);
        goto after_1;
    // 0x8007F8C4: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    after_1:
    // 0x8007F8C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007F8CC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x8007F8D0: jr          $ra
    // 0x8007F8D4: nop

    return;
    // 0x8007F8D4: nop

    // 0x8007F8D8: nop

    // 0x8007F8DC: nop

;}
RECOMP_FUNC void func_8007F8E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F8E0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8007F8E4: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x8007F8E8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8007F8EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007F8F0: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x8007F8F4: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x8007F8F8: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x8007F8FC: jal         0x8007FC08
    // 0x8007F900: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_8007FC08(rdram, ctx);
        goto after_0;
    // 0x8007F900: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x8007F904: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x8007F908: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8007F90C: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x8007F910: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8007F914: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    // 0x8007F918: lw          $a2, 0x70($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X70);
    // 0x8007F91C: lw          $a3, 0x74($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X74);
    // 0x8007F920: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8007F924: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8007F928: jal         0x80087D70
    // 0x8007F92C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_80087D70(rdram, ctx);
        goto after_1;
    // 0x8007F92C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_1:
    // 0x8007F930: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007F934: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x8007F938: jr          $ra
    // 0x8007F93C: nop

    return;
    // 0x8007F93C: nop

;}
RECOMP_FUNC void func_8007F940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F940: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x8007F944: sw          $a1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r5;
    // 0x8007F948: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8007F94C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007F950: sw          $a0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r4;
    // 0x8007F954: sw          $a2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r6;
    // 0x8007F958: jal         0x8007FC08
    // 0x8007F95C: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    func_8007FC08(rdram, ctx);
        goto after_0;
    // 0x8007F95C: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    after_0:
    // 0x8007F960: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x8007F964: jal         0x8007FC08
    // 0x8007F968: lw          $a1, 0xDC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XDC);
    func_8007FC08(rdram, ctx);
        goto after_1;
    // 0x8007F968: lw          $a1, 0xDC($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XDC);
    after_1:
    // 0x8007F96C: addiu       $a0, $sp, 0x98
    ctx->r4 = ADD32(ctx->r29, 0X98);
    // 0x8007F970: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x8007F974: jal         0x80087E10
    // 0x8007F978: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_80087E10(rdram, ctx);
        goto after_2;
    // 0x8007F978: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_2:
    // 0x8007F97C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8007F980: jal         0x8007FA50
    // 0x8007F984: lw          $a1, 0xE0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE0);
    func_8007FA50(rdram, ctx);
        goto after_3;
    // 0x8007F984: lw          $a1, 0xE0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XE0);
    after_3:
    // 0x8007F988: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007F98C: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    // 0x8007F990: jr          $ra
    // 0x8007F994: nop

    return;
    // 0x8007F994: nop

    // 0x8007F998: nop

    // 0x8007F99C: nop

;}
RECOMP_FUNC void func_8007F9A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F9A0: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8007F9A4: srl         $t7, $t6, 4
    ctx->r15 = S32(U32(ctx->r14) >> 4);
    // 0x8007F9A8: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x8007F9AC: andi        $t9, $t8, 0x400
    ctx->r25 = ctx->r24 & 0X400;
    // 0x8007F9B0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8007F9B4: beq         $t9, $zero, L_8007F9D8
    if (ctx->r25 == 0) {
        // 0x8007F9B8: or          $v0, $t8, $zero
        ctx->r2 = ctx->r24 | 0;
            goto L_8007F9D8;
    }
    // 0x8007F9B8: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8007F9BC: andi        $t0, $t8, 0x3FF
    ctx->r8 = ctx->r24 & 0X3FF;
    // 0x8007F9C0: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x8007F9C4: negu        $t2, $t1
    ctx->r10 = SUB32(0, ctx->r9);
    // 0x8007F9C8: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8007F9CC: addu        $v1, $v1, $t2
    ctx->r3 = ADD32(ctx->r3, ctx->r10);
    // 0x8007F9D0: b           L_8007F9EC
    // 0x8007F9D4: lh          $v1, 0x188E($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X188E);
        goto L_8007F9EC;
    // 0x8007F9D4: lh          $v1, 0x188E($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X188E);
L_8007F9D8:
    // 0x8007F9D8: andi        $t3, $v0, 0x3FF
    ctx->r11 = ctx->r2 & 0X3FF;
    // 0x8007F9DC: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8007F9E0: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8007F9E4: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x8007F9E8: lh          $v1, 0x1090($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X1090);
L_8007F9EC:
    // 0x8007F9EC: andi        $t5, $v0, 0x800
    ctx->r13 = ctx->r2 & 0X800;
    // 0x8007F9F0: beq         $t5, $zero, L_8007FA08
    if (ctx->r13 == 0) {
        // 0x8007F9F4: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8007FA08;
    }
    // 0x8007F9F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8007F9F8: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x8007F9FC: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x8007FA00: jr          $ra
    // 0x8007FA04: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    return;
    // 0x8007FA04: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
L_8007FA08:
    // 0x8007FA08: jr          $ra
    // 0x8007FA0C: nop

    return;
    // 0x8007FA0C: nop

;}
RECOMP_FUNC void func_8007FA10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FA10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007FA14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8007FA18: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8007FA1C: addiu       $a0, $a1, 0x4000
    ctx->r4 = ADD32(ctx->r5, 0X4000);
    // 0x8007FA20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007FA24: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x8007FA28: jal         0x8007F9A0
    // 0x8007FA2C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8007F9A0(rdram, ctx);
        goto after_0;
    // 0x8007FA2C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x8007FA30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007FA34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007FA38: jr          $ra
    // 0x8007FA3C: nop

    return;
    // 0x8007FA3C: nop

;}
RECOMP_FUNC void func_8007FA40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FA40: jr          $ra
    // 0x8007FA44: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
    return;
    // 0x8007FA44: sqrt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = sqrtf(ctx->f12.fl);
    // 0x8007FA48: nop

    // 0x8007FA4C: nop

;}
RECOMP_FUNC void func_8007FA50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FA50: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x8007FA54: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8007FA58: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8007FA5C: addiu       $v1, $a1, 0x20
    ctx->r3 = ADD32(ctx->r5, 0X20);
    // 0x8007FA60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007FA64: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8007FA68: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8007FA6C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8007FA70: lui         $t2, 0xFFFF
    ctx->r10 = S32(0XFFFF << 16);
L_8007FA74:
    // 0x8007FA74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007FA78: or          $t0, $a3, $zero
    ctx->r8 = ctx->r7 | 0;
    // 0x8007FA7C: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8007FA80: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8007FA84: lwc1        $f18, 0x0($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8007FA88: mul.s       $f16, $f14, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8007FA8C: beq         $a0, $t3, L_8007FAF4
    if (ctx->r4 == ctx->r11) {
        // 0x8007FA90: nop
    
            goto L_8007FAF4;
    }
    // 0x8007FA90: nop

L_8007FA94:
    // 0x8007FA94: mul.s       $f14, $f18, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8007FA98: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8007FA9C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8007FAA0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8007FAA4: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x8007FAA8: trunc.w.s   $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8007FAAC: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8007FAB0: mfc1        $t1, $f12
    ctx->r9 = (int32_t)ctx->f12.u32l;
    // 0x8007FAB4: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x8007FAB8: sra         $t9, $t1, 16
    ctx->r25 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8007FABC: andi        $t5, $t9, 0xFFFF
    ctx->r13 = ctx->r25 & 0XFFFF;
    // 0x8007FAC0: and         $t8, $a1, $t2
    ctx->r24 = ctx->r5 & ctx->r10;
    // 0x8007FAC4: or          $t6, $t8, $t5
    ctx->r14 = ctx->r24 | ctx->r13;
    // 0x8007FAC8: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x8007FACC: and         $t9, $t7, $t2
    ctx->r25 = ctx->r15 & ctx->r10;
    // 0x8007FAD0: sw          $t6, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r14;
    // 0x8007FAD4: andi        $t8, $t1, 0xFFFF
    ctx->r24 = ctx->r9 & 0XFFFF;
    // 0x8007FAD8: or          $t5, $t9, $t8
    ctx->r13 = ctx->r25 | ctx->r24;
    // 0x8007FADC: sw          $t5, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r13;
    // 0x8007FAE0: lwc1        $f14, 0x4($t0)
    ctx->f14.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8007FAE4: lwc1        $f18, 0x0($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8007FAE8: mul.s       $f16, $f14, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8007FAEC: bne         $a0, $t3, L_8007FA94
    if (ctx->r4 != ctx->r11) {
        // 0x8007FAF0: nop
    
            goto L_8007FA94;
    }
    // 0x8007FAF0: nop

L_8007FAF4:
    // 0x8007FAF4: mul.s       $f14, $f18, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8007FAF8: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x8007FAFC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8007FB00: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8007FB04: trunc.w.s   $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x8007FB08: trunc.w.s   $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.u32l = TRUNC_W_S(ctx->f14.fl);
    // 0x8007FB0C: mfc1        $t1, $f12
    ctx->r9 = (int32_t)ctx->f12.u32l;
    // 0x8007FB10: mfc1        $a1, $f14
    ctx->r5 = (int32_t)ctx->f14.u32l;
    // 0x8007FB14: sra         $t9, $t1, 16
    ctx->r25 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8007FB18: andi        $t5, $t9, 0xFFFF
    ctx->r13 = ctx->r25 & 0XFFFF;
    // 0x8007FB1C: and         $t8, $a1, $t2
    ctx->r24 = ctx->r5 & ctx->r10;
    // 0x8007FB20: or          $t6, $t8, $t5
    ctx->r14 = ctx->r24 | ctx->r13;
    // 0x8007FB24: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x8007FB28: and         $t9, $t7, $t2
    ctx->r25 = ctx->r15 & ctx->r10;
    // 0x8007FB2C: andi        $t8, $t1, 0xFFFF
    ctx->r24 = ctx->r9 & 0XFFFF;
    // 0x8007FB30: sw          $t6, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r14;
    // 0x8007FB34: or          $t5, $t9, $t8
    ctx->r13 = ctx->r25 | ctx->r24;
    // 0x8007FB38: sw          $t5, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r13;
    // 0x8007FB3C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8007FB40: bne         $a2, $t4, L_8007FA74
    if (ctx->r6 != ctx->r12) {
        // 0x8007FB44: addiu       $a3, $a3, 0x10
        ctx->r7 = ADD32(ctx->r7, 0X10);
            goto L_8007FA74;
    }
    // 0x8007FB44: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x8007FB48: jr          $ra
    // 0x8007FB4C: nop

    return;
    // 0x8007FB4C: nop

;}
RECOMP_FUNC void func_8007FB50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FB50: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007FB54: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8007FB58: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8007FB5C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8007FB60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8007FB64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8007FB68: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    // 0x8007FB6C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8007FB70: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_8007FB74:
    // 0x8007FB74: bnel        $v0, $zero, L_8007FB88
    if (ctx->r2 != 0) {
        // 0x8007FB78: swc1        $f2, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
            goto L_8007FB88;
    }
    goto skip_0;
    // 0x8007FB78: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
    skip_0:
    // 0x8007FB7C: b           L_8007FB88
    // 0x8007FB80: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
        goto L_8007FB88;
    // 0x8007FB80: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x8007FB84: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
L_8007FB88:
    // 0x8007FB88: bnel        $v0, $a0, L_8007FB9C
    if (ctx->r2 != ctx->r4) {
        // 0x8007FB8C: swc1        $f2, 0x4($v1)
        MEM_W(0X4, ctx->r3) = ctx->f2.u32l;
            goto L_8007FB9C;
    }
    goto skip_1;
    // 0x8007FB8C: swc1        $f2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f2.u32l;
    skip_1:
    // 0x8007FB90: b           L_8007FB9C
    // 0x8007FB94: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
        goto L_8007FB9C;
    // 0x8007FB94: swc1        $f0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f0.u32l;
    // 0x8007FB98: swc1        $f2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f2.u32l;
L_8007FB9C:
    // 0x8007FB9C: bnel        $v0, $a1, L_8007FBB0
    if (ctx->r2 != ctx->r5) {
        // 0x8007FBA0: swc1        $f2, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
            goto L_8007FBB0;
    }
    goto skip_2;
    // 0x8007FBA0: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
    skip_2:
    // 0x8007FBA4: b           L_8007FBB0
    // 0x8007FBA8: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
        goto L_8007FBB0;
    // 0x8007FBA8: swc1        $f0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f0.u32l;
    // 0x8007FBAC: swc1        $f2, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f2.u32l;
L_8007FBB0:
    // 0x8007FBB0: bnel        $v0, $a2, L_8007FBC4
    if (ctx->r2 != ctx->r6) {
        // 0x8007FBB4: swc1        $f2, 0xC($v1)
        MEM_W(0XC, ctx->r3) = ctx->f2.u32l;
            goto L_8007FBC4;
    }
    goto skip_3;
    // 0x8007FBB4: swc1        $f2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f2.u32l;
    skip_3:
    // 0x8007FBB8: b           L_8007FBC4
    // 0x8007FBBC: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
        goto L_8007FBC4;
    // 0x8007FBBC: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x8007FBC0: swc1        $f2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f2.u32l;
L_8007FBC4:
    // 0x8007FBC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007FBC8: bne         $v0, $a3, L_8007FB74
    if (ctx->r2 != ctx->r7) {
        // 0x8007FBCC: addiu       $v1, $v1, 0x10
        ctx->r3 = ADD32(ctx->r3, 0X10);
            goto L_8007FB74;
    }
    // 0x8007FBCC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8007FBD0: jr          $ra
    // 0x8007FBD4: nop

    return;
    // 0x8007FBD4: nop

;}
RECOMP_FUNC void func_8007FBD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FBD8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8007FBDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007FBE0: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x8007FBE4: jal         0x8007FB50
    // 0x8007FBE8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_8007FB50(rdram, ctx);
        goto after_0;
    // 0x8007FBE8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x8007FBEC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8007FBF0: jal         0x8007FA50
    // 0x8007FBF4: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    func_8007FA50(rdram, ctx);
        goto after_1;
    // 0x8007FBF4: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    after_1:
    // 0x8007FBF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007FBFC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8007FC00: jr          $ra
    // 0x8007FC04: nop

    return;
    // 0x8007FC04: nop

;}
RECOMP_FUNC void func_8007FC08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FC08: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x8007FC0C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8007FC10: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8007FC14: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x8007FC18: addiu       $v1, $a1, 0x20
    ctx->r3 = ADD32(ctx->r5, 0X20);
    // 0x8007FC1C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8007FC20: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8007FC24: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8007FC28: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8007FC2C: lui         $t2, 0xFFFF
    ctx->r10 = S32(0XFFFF << 16);
L_8007FC30:
    // 0x8007FC30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8007FC34: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
L_8007FC38:
    // 0x8007FC38: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8007FC3C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x8007FC40: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8007FC44: srl         $t7, $t6, 16
    ctx->r15 = S32(U32(ctx->r14) >> 16);
    // 0x8007FC48: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x8007FC4C: and         $t5, $t9, $t2
    ctx->r13 = ctx->r25 & ctx->r10;
    // 0x8007FC50: or          $t6, $t8, $t5
    ctx->r14 = ctx->r24 | ctx->r13;
    // 0x8007FC54: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x8007FC58: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x8007FC5C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8007FC60: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8007FC64: andi        $t9, $t7, 0xFFFF
    ctx->r25 = ctx->r15 & 0XFFFF;
    // 0x8007FC68: sll         $t5, $t8, 16
    ctx->r13 = S32(ctx->r24 << 16);
    // 0x8007FC6C: mtc1        $a1, $f18
    ctx->f18.u32l = ctx->r5;
    // 0x8007FC70: and         $t6, $t5, $t2
    ctx->r14 = ctx->r13 & ctx->r10;
    // 0x8007FC74: or          $a3, $t9, $t6
    ctx->r7 = ctx->r25 | ctx->r14;
    // 0x8007FC78: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8007FC7C: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x8007FC80: sw          $a3, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r7;
    // 0x8007FC84: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8007FC88: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8007FC8C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8007FC90: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8007FC94: div.s       $f18, $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8007FC98: div.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8007FC9C: swc1        $f18, -0x8($t1)
    MEM_W(-0X8, ctx->r9) = ctx->f18.u32l;
    // 0x8007FCA0: bne         $a0, $t3, L_8007FC38
    if (ctx->r4 != ctx->r11) {
        // 0x8007FCA4: swc1        $f16, -0x4($t1)
        MEM_W(-0X4, ctx->r9) = ctx->f16.u32l;
            goto L_8007FC38;
    }
    // 0x8007FCA4: swc1        $f16, -0x4($t1)
    MEM_W(-0X4, ctx->r9) = ctx->f16.u32l;
    // 0x8007FCA8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8007FCAC: bne         $a2, $t4, L_8007FC30
    if (ctx->r6 != ctx->r12) {
        // 0x8007FCB0: addiu       $t0, $t0, 0x10
        ctx->r8 = ADD32(ctx->r8, 0X10);
            goto L_8007FC30;
    }
    // 0x8007FCB0: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x8007FCB4: jr          $ra
    // 0x8007FCB8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8007FCB8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    // 0x8007FCBC: nop

;}
RECOMP_FUNC void func_8007FCC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FCC0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007FCC4: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8007FCC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007FCCC: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8007FCD0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8007FCD4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8007FCD8: jal         0x8007FB50
    // 0x8007FCDC: swc1        $f14, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f14.u32l;
    func_8007FB50(rdram, ctx);
        goto after_0;
    // 0x8007FCDC: swc1        $f14, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x8007FCE0: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8007FCE4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8007FCE8: ldc1        $f6, -0x4D20($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X4D20);
    // 0x8007FCEC: cvt.d.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.d = CVT_D_S(ctx->f14.fl);
    // 0x8007FCF0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007FCF4: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8007FCF8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007FCFC: cvt.s.d     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f14.fl = CVT_S_D(ctx->f8.d);
    // 0x8007FD00: div.s       $f12, $f14, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = DIV_S(ctx->f14.fl, ctx->f10.fl);
    // 0x8007FD04: jal         0x80081040
    // 0x8007FD08: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    func_80081040(rdram, ctx);
        goto after_1;
    // 0x8007FD08: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x8007FD0C: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8007FD10: jal         0x80080E80
    // 0x8007FD14: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x8007FD14: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x8007FD18: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8007FD1C: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8007FD20: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8007FD24: div.s       $f2, $f4, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8007FD28: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8007FD2C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8007FD30: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8007FD34: add.s       $f18, $f14, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f14.fl + ctx->f16.fl;
    // 0x8007FD38: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x8007FD3C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007FD40: sub.s       $f12, $f14, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f14.fl - ctx->f16.fl;
    // 0x8007FD44: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x8007FD48: swc1        $f4, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f4.u32l;
    // 0x8007FD4C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8007FD50: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8007FD54: div.s       $f10, $f18, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f12.fl);
    // 0x8007FD58: swc1        $f2, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f2.u32l;
    // 0x8007FD5C: div.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f2.fl, ctx->f6.fl);
    // 0x8007FD60: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007FD64: swc1        $f10, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f10.u32l;
    // 0x8007FD68: swc1        $f8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f8.u32l;
    // 0x8007FD6C: mul.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f14.fl);
    // 0x8007FD70: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007FD74: nop

    // 0x8007FD78: swc1        $f6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f6.u32l;
    // 0x8007FD7C: mul.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8007FD80: div.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8007FD84: swc1        $f4, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f4.u32l;
    // 0x8007FD88: lwc1        $f0, 0x48($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8007FD8C: lwc1        $f6, 0x0($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8007FD90: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8007FD94: lwc1        $f16, 0x4($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X4);
    // 0x8007FD98: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8007FD9C: lwc1        $f12, 0x8($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8007FDA0: beq         $v1, $a0, L_8007FDE4
    if (ctx->r3 == ctx->r4) {
        // 0x8007FDA4: lwc1        $f14, 0xC($v0)
        ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
            goto L_8007FDE4;
    }
    // 0x8007FDA4: lwc1        $f14, 0xC($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0XC);
L_8007FDA8:
    // 0x8007FDA8: mul.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8007FDAC: lwc1        $f6, 0x10($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8007FDB0: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x8007FDB4: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8007FDB8: lwc1        $f12, 0x18($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X18);
    // 0x8007FDBC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8007FDC0: mul.s       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8007FDC4: lwc1        $f14, 0x1C($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8007FDC8: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x8007FDCC: mul.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8007FDD0: swc1        $f8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f8.u32l;
    // 0x8007FDD4: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x8007FDD8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8007FDDC: bne         $v1, $a0, L_8007FDA8
    if (ctx->r3 != ctx->r4) {
        // 0x8007FDE0: swc1        $f2, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->f2.u32l;
            goto L_8007FDA8;
    }
    // 0x8007FDE0: swc1        $f2, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f2.u32l;
L_8007FDE4:
    // 0x8007FDE4: mul.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8007FDE8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8007FDEC: swc1        $f10, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f10.u32l;
    // 0x8007FDF0: mul.s       $f4, $f12, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x8007FDF4: nop

    // 0x8007FDF8: mul.s       $f2, $f14, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x8007FDFC: swc1        $f8, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f8.u32l;
    // 0x8007FE00: swc1        $f4, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f4.u32l;
    // 0x8007FE04: swc1        $f2, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f2.u32l;
    // 0x8007FE08: beq         $a1, $zero, L_8007FEE0
    if (ctx->r5 == 0) {
        // 0x8007FE0C: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_8007FEE0;
    }
    // 0x8007FE0C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8007FE10: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8007FE14: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8007FE18: cvt.d.s     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f0.d = CVT_D_S(ctx->f18.fl);
    // 0x8007FE1C: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x8007FE20: c.le.d      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.d <= ctx->f8.d;
    // 0x8007FE24: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8007FE28: bc1fl       L_8007FE3C
    if (!c1cs) {
        // 0x8007FE2C: mtc1        $at, $f11
        ctx->f_odd[(11 - 1) * 2] = ctx->r1;
            goto L_8007FE3C;
    }
    goto skip_0;
    // 0x8007FE2C: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    skip_0:
    // 0x8007FE30: b           L_8007FEE0
    // 0x8007FE34: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
        goto L_8007FEE0;
    // 0x8007FE34: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
    // 0x8007FE38: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
L_8007FE3C:
    // 0x8007FE3C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8007FE40: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8007FE44: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x8007FE48: div.d       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x8007FE4C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8007FE50: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8007FE54: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8007FE58: nop

    // 0x8007FE5C: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x8007FE60: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8007FE64: nop

    // 0x8007FE68: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8007FE6C: beql        $t8, $zero, L_8007FEC0
    if (ctx->r24 == 0) {
        // 0x8007FE70: mfc1        $t8, $f6
        ctx->r24 = (int32_t)ctx->f6.u32l;
            goto L_8007FEC0;
    }
    goto skip_1;
    // 0x8007FE70: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    skip_1:
    // 0x8007FE74: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8007FE78: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8007FE7C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8007FE80: sub.d       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f6.d = ctx->f4.d - ctx->f6.d;
    // 0x8007FE84: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8007FE88: nop

    // 0x8007FE8C: cvt.w.d     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_D(ctx->f6.d);
    // 0x8007FE90: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8007FE94: nop

    // 0x8007FE98: andi        $t8, $t8, 0x78
    ctx->r24 = ctx->r24 & 0X78;
    // 0x8007FE9C: bne         $t8, $zero, L_8007FEB4
    if (ctx->r24 != 0) {
        // 0x8007FEA0: nop
    
            goto L_8007FEB4;
    }
    // 0x8007FEA0: nop

    // 0x8007FEA4: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
    // 0x8007FEA8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8007FEAC: b           L_8007FECC
    // 0x8007FEB0: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
        goto L_8007FECC;
    // 0x8007FEB0: or          $t8, $t8, $at
    ctx->r24 = ctx->r24 | ctx->r1;
L_8007FEB4:
    // 0x8007FEB4: b           L_8007FECC
    // 0x8007FEB8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
        goto L_8007FECC;
    // 0x8007FEB8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8007FEBC: mfc1        $t8, $f6
    ctx->r24 = (int32_t)ctx->f6.u32l;
L_8007FEC0:
    // 0x8007FEC0: nop

    // 0x8007FEC4: bltz        $t8, L_8007FEB4
    if (SIGNED(ctx->r24) < 0) {
        // 0x8007FEC8: nop
    
            goto L_8007FEB4;
    }
    // 0x8007FEC8: nop

L_8007FECC:
    // 0x8007FECC: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8007FED0: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x8007FED4: bgtz        $t9, L_8007FEE0
    if (SIGNED(ctx->r25) > 0) {
        // 0x8007FED8: sh          $t8, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r24;
            goto L_8007FEE0;
    }
    // 0x8007FED8: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x8007FEDC: sh          $t0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r8;
L_8007FEE0:
    // 0x8007FEE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007FEE4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8007FEE8: jr          $ra
    // 0x8007FEEC: nop

    return;
    // 0x8007FEEC: nop

;}
RECOMP_FUNC void func_8007FEF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FEF0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8007FEF4: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x8007FEF8: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x8007FEFC: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8007FF00: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x8007FF04: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8007FF08: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8007FF0C: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x8007FF10: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x8007FF14: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x8007FF18: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8007FF1C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8007FF20: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8007FF24: jal         0x8007FCC0
    // 0x8007FF28: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_8007FCC0(rdram, ctx);
        goto after_0;
    // 0x8007FF28: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x8007FF2C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8007FF30: jal         0x8007FA50
    // 0x8007FF34: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    func_8007FA50(rdram, ctx);
        goto after_1;
    // 0x8007FF34: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    after_1:
    // 0x8007FF38: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8007FF3C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x8007FF40: jr          $ra
    // 0x8007FF44: nop

    return;
    // 0x8007FF44: nop

    // 0x8007FF48: nop

    // 0x8007FF4C: nop

;}
RECOMP_FUNC void func_8007FF50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007FF50: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8007FF54: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8007FF58: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8007FF5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8007FF60: sdc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X40, ctx->r29);
    // 0x8007FF64: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x8007FF68: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x8007FF6C: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x8007FF70: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x8007FF74: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8007FF78: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x8007FF7C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x8007FF80: jal         0x8007FB50
    // 0x8007FF84: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    func_8007FB50(rdram, ctx);
        goto after_0;
    // 0x8007FF84: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8007FF88: lwc1        $f4, 0x60($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X60);
    // 0x8007FF8C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8007FF90: lwc1        $f8, 0x64($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8007FF94: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8007FF98: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8007FF9C: lwc1        $f6, 0x5C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8007FFA0: lwc1        $f4, 0x68($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X68);
    // 0x8007FFA4: sub.s       $f22, $f8, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8007FFA8: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8007FFAC: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8007FFB0: sub.s       $f24, $f4, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8007FFB4: mul.s       $f10, $f22, $f22
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f22.fl);
    // 0x8007FFB8: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8007FFBC: mul.s       $f6, $f24, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f24.fl);
    // 0x8007FFC0: jal         0x8007FA40
    // 0x8007FFC4: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_8007FA40(rdram, ctx);
        goto after_1;
    // 0x8007FFC4: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_1:
    // 0x8007FFC8: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x8007FFCC: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8007FFD0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8007FFD4: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8007FFD8: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8007FFDC: div.d       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = DIV_D(ctx->f8.d, ctx->f10.d);
    // 0x8007FFE0: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8007FFE4: cvt.s.d     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f2.fl = CVT_S_D(ctx->f4.d);
    // 0x8007FFE8: mul.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x8007FFEC: nop

    // 0x8007FFF0: mul.s       $f22, $f22, $f2
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x8007FFF4: nop

    // 0x8007FFF8: mul.s       $f24, $f24, $f2
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f24.fl = MUL_S(ctx->f24.fl, ctx->f2.fl);
    // 0x8007FFFC: nop

    // 0x80080000: mul.s       $f8, $f6, $f24
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f24.fl);
    // 0x80080004: nop

    // 0x80080008: mul.s       $f4, $f10, $f22
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f22.fl);
    // 0x8008000C: sub.s       $f26, $f8, $f4
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f26.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80080010: mul.s       $f8, $f10, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80080014: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80080018: mul.s       $f10, $f4, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f24.fl);
    // 0x8008001C: sub.s       $f28, $f8, $f10
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f28.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80080020: mul.s       $f8, $f4, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f22.fl);
    // 0x80080024: nop

    // 0x80080028: mul.s       $f10, $f6, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x8008002C: sub.s       $f30, $f8, $f10
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f30.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80080030: mul.s       $f4, $f26, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f26.fl, ctx->f26.fl);
    // 0x80080034: nop

    // 0x80080038: mul.s       $f6, $f28, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f28.fl, ctx->f28.fl);
    // 0x8008003C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80080040: mul.s       $f10, $f30, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f30.fl, ctx->f30.fl);
    // 0x80080044: jal         0x8007FA40
    // 0x80080048: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    func_8007FA40(rdram, ctx);
        goto after_2;
    // 0x80080048: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_2:
    // 0x8008004C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80080050: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x80080054: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80080058: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x8008005C: div.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f4.d, ctx->f6.d);
    // 0x80080060: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x80080064: mul.s       $f26, $f26, $f2
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f26.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f26.fl = MUL_S(ctx->f26.fl, ctx->f2.fl);
    // 0x80080068: nop

    // 0x8008006C: mul.s       $f28, $f28, $f2
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 28);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f28.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f28.fl = MUL_S(ctx->f28.fl, ctx->f2.fl);
    // 0x80080070: nop

    // 0x80080074: mul.s       $f30, $f30, $f2
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 30);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f30.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f30.fl = MUL_S(ctx->f30.fl, ctx->f2.fl);
    // 0x80080078: nop

    // 0x8008007C: mul.s       $f10, $f22, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f30.fl);
    // 0x80080080: nop

    // 0x80080084: mul.s       $f4, $f24, $f28
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f4.fl = MUL_S(ctx->f24.fl, ctx->f28.fl);
    // 0x80080088: nop

    // 0x8008008C: mul.s       $f6, $f24, $f26
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f6.fl = MUL_S(ctx->f24.fl, ctx->f26.fl);
    // 0x80080090: nop

    // 0x80080094: mul.s       $f8, $f20, $f30
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f8.fl = MUL_S(ctx->f20.fl, ctx->f30.fl);
    // 0x80080098: sub.s       $f14, $f10, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x8008009C: mul.s       $f10, $f20, $f28
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f28.fl);
    // 0x800800A0: nop

    // 0x800800A4: mul.s       $f4, $f22, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f26.fl);
    // 0x800800A8: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    // 0x800800AC: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800800B0: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x800800B4: nop

    // 0x800800B8: mul.s       $f8, $f16, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x800800BC: swc1        $f16, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f16.u32l;
    // 0x800800C0: sub.s       $f18, $f10, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x800800C4: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x800800C8: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800800CC: swc1        $f18, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f18.u32l;
    // 0x800800D0: jal         0x8007FA40
    // 0x800800D4: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    func_8007FA40(rdram, ctx);
        goto after_3;
    // 0x800800D4: add.s       $f12, $f10, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f4.fl;
    after_3:
    // 0x800800D8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x800800DC: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x800800E0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800800E4: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x800800E8: lwc1        $f14, 0x6C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x800800EC: div.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = DIV_D(ctx->f6.d, ctx->f8.d);
    // 0x800800F0: lwc1        $f12, 0x70($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X70);
    // 0x800800F4: lwc1        $f4, 0x74($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X74);
    // 0x800800F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800800FC: cvt.s.d     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f2.fl = CVT_S_D(ctx->f10.d);
    // 0x80080100: mul.s       $f14, $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x80080104: nop

    // 0x80080108: mul.s       $f12, $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x8008010C: nop

    // 0x80080110: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80080114: swc1        $f6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f6.u32l;
    // 0x80080118: swc1        $f26, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f26.u32l;
    // 0x8008011C: swc1        $f28, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f28.u32l;
    // 0x80080120: swc1        $f30, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f30.u32l;
    // 0x80080124: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80080128: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8008012C: mul.s       $f10, $f8, $f26
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f26.fl);
    // 0x80080130: nop

    // 0x80080134: mul.s       $f6, $f4, $f28
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f28.fl);
    // 0x80080138: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8008013C: swc1        $f14, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f14.u32l;
    // 0x80080140: swc1        $f12, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f12.u32l;
    // 0x80080144: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80080148: mul.s       $f10, $f4, $f30
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f30.fl);
    // 0x8008014C: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80080150: neg.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = -ctx->f6.fl;
    // 0x80080154: swc1        $f4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f4.u32l;
    // 0x80080158: lwc1        $f0, 0x74($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8008015C: swc1        $f12, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f12.u32l;
    // 0x80080160: swc1        $f14, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->f14.u32l;
    // 0x80080164: lwc1        $f14, 0x54($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80080168: lwc1        $f12, 0x58($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X58);
    // 0x8008016C: lwc1        $f2, 0x5C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80080170: swc1        $f0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f0.u32l;
    // 0x80080174: lwc1        $f8, 0x6C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x80080178: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8008017C: swc1        $f20, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f20.u32l;
    // 0x80080180: mul.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x80080184: swc1        $f22, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f22.u32l;
    // 0x80080188: swc1        $f24, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f24.u32l;
    // 0x8008018C: mul.s       $f4, $f12, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x80080190: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80080194: mul.s       $f6, $f2, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x80080198: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8008019C: nop

    // 0x800801A0: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x800801A4: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x800801A8: swc1        $f0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->f0.u32l;
    // 0x800801AC: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x800801B0: mul.s       $f8, $f14, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x800801B4: nop

    // 0x800801B8: mul.s       $f6, $f12, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = MUL_S(ctx->f12.fl, ctx->f22.fl);
    // 0x800801BC: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x800801C0: swc1        $f4, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f4.u32l;
    // 0x800801C4: mul.s       $f4, $f2, $f24
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f24.fl);
    // 0x800801C8: add.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x800801CC: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800801D0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800801D4: neg.s       $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = -ctx->f8.fl;
    // 0x800801D8: swc1        $f10, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->f10.u32l;
    // 0x800801DC: swc1        $f6, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f6.u32l;
    // 0x800801E0: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x800801E4: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x800801E8: ldc1        $f30, 0x40($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X40);
    // 0x800801EC: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x800801F0: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x800801F4: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x800801F8: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x800801FC: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80080200: jr          $ra
    // 0x80080204: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80080204: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80080208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080208: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8008020C: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80080210: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80080214: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80080218: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x8008021C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80080220: lwc1        $f4, 0x94($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80080224: lwc1        $f6, 0x84($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80080228: lwc1        $f8, 0x88($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X88);
    // 0x8008022C: lwc1        $f10, 0x8C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80080230: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80080234: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80080238: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x8008023C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80080240: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80080244: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x80080248: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8008024C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80080250: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80080254: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80080258: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x8008025C: jal         0x8007FF50
    // 0x80080260: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    func_8007FF50(rdram, ctx);
        goto after_0;
    // 0x80080260: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80080264: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80080268: jal         0x8007FA50
    // 0x8008026C: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    func_8007FA50(rdram, ctx);
        goto after_1;
    // 0x8008026C: lw          $a1, 0x70($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X70);
    after_1:
    // 0x80080270: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80080274: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80080278: jr          $ra
    // 0x8008027C: nop

    return;
    // 0x8008027C: nop

;}
RECOMP_FUNC void func_80080280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080280: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80080284: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80080288: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8008028C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80080290: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80080294: jal         0x8007FB50
    // 0x80080298: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8007FB50(rdram, ctx);
        goto after_0;
    // 0x80080298: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008029C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800802A0: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800802A4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800802A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800802AC: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800802B0: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x800802B4: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800802B8: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800802BC: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800802C0: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800802C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800802C8: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x800802CC: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x800802D0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800802D4: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800802D8: swc1        $f10, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f10.u32l;
    // 0x800802DC: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800802E0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800802E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800802E8: sub.s       $f2, $f14, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x800802EC: div.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x800802F0: div.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x800802F4: swc1        $f4, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f4.u32l;
    // 0x800802F8: swc1        $f8, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f8.u32l;
    // 0x800802FC: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80080300: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80080304: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80080308: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x8008030C: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80080310: swc1        $f6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->f6.u32l;
    // 0x80080314: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80080318: add.s       $f10, $f14, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f14.fl + ctx->f8.fl;
    // 0x8008031C: add.s       $f8, $f16, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80080320: neg.s       $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = -ctx->f10.fl;
    // 0x80080324: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80080328: div.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x8008032C: div.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x80080330: swc1        $f6, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f6.u32l;
    // 0x80080334: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80080338: nop

    // 0x8008033C: swc1        $f6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->f6.u32l;
    // 0x80080340: swc1        $f4, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f4.u32l;
    // 0x80080344: lwc1        $f0, 0x34($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80080348: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8008034C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80080350: lwc1        $f18, 0x4($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80080354: mul.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80080358: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8008035C: beq         $v1, $a0, L_800803A0
    if (ctx->r3 == ctx->r4) {
        // 0x80080360: lwc1        $f16, 0xC($v0)
        ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
            goto L_800803A0;
    }
    // 0x80080360: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
L_80080364:
    // 0x80080364: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x80080368: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x8008036C: lwc1        $f18, 0x14($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80080370: mul.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80080374: lwc1        $f14, 0x18($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X18);
    // 0x80080378: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8008037C: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80080380: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80080384: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    // 0x80080388: mul.s       $f12, $f8, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8008038C: swc1        $f10, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f10.u32l;
    // 0x80080390: swc1        $f6, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f6.u32l;
    // 0x80080394: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80080398: bne         $v1, $a0, L_80080364
    if (ctx->r3 != ctx->r4) {
        // 0x8008039C: swc1        $f4, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
            goto L_80080364;
    }
    // 0x8008039C: swc1        $f4, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
L_800803A0:
    // 0x800803A0: mul.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f0.fl);
    // 0x800803A4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x800803A8: swc1        $f12, -0x10($v0)
    MEM_W(-0X10, ctx->r2) = ctx->f12.u32l;
    // 0x800803AC: mul.s       $f6, $f14, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x800803B0: nop

    // 0x800803B4: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800803B8: swc1        $f10, -0xC($v0)
    MEM_W(-0XC, ctx->r2) = ctx->f10.u32l;
    // 0x800803BC: swc1        $f6, -0x8($v0)
    MEM_W(-0X8, ctx->r2) = ctx->f6.u32l;
    // 0x800803C0: swc1        $f4, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
    // 0x800803C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800803C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800803CC: jr          $ra
    // 0x800803D0: nop

    return;
    // 0x800803D0: nop

;}
RECOMP_FUNC void func_800803D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800803D4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800803D8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x800803DC: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x800803E0: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x800803E4: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x800803E8: lwc1        $f6, 0x7C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x800803EC: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x800803F0: lwc1        $f10, 0x84($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X84);
    // 0x800803F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800803F8: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x800803FC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80080400: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80080404: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x80080408: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8008040C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80080410: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80080414: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80080418: jal         0x80080280
    // 0x8008041C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_80080280(rdram, ctx);
        goto after_0;
    // 0x8008041C: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x80080420: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80080424: jal         0x8007FA50
    // 0x80080428: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    func_8007FA50(rdram, ctx);
        goto after_1;
    // 0x80080428: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    after_1:
    // 0x8008042C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80080430: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80080434: jr          $ra
    // 0x80080438: nop

    return;
    // 0x80080438: nop

    // 0x8008043C: nop

;}
RECOMP_FUNC void func_80080440(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080440: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80080444: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80080448: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8008044C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80080450: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80080454: jal         0x8007FB50
    // 0x80080458: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8007FB50(rdram, ctx);
        goto after_0;
    // 0x80080458: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008045C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80080460: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80080464: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80080468: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8008046C: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x80080470: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80080474: swc1        $f6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f6.u32l;
    // 0x80080478: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8008047C: swc1        $f10, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f10.u32l;
    // 0x80080480: swc1        $f8, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f8.u32l;
    // 0x80080484: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80080488: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008048C: jr          $ra
    // 0x80080490: nop

    return;
    // 0x80080490: nop

;}
RECOMP_FUNC void func_80080494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080494: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80080498: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8008049C: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x800804A0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800804A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800804A8: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x800804AC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x800804B0: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x800804B4: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x800804B8: jal         0x80080440
    // 0x800804BC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_80080440(rdram, ctx);
        goto after_0;
    // 0x800804BC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x800804C0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x800804C4: jal         0x8007FA50
    // 0x800804C8: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    func_8007FA50(rdram, ctx);
        goto after_1;
    // 0x800804C8: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    after_1:
    // 0x800804CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800804D0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x800804D4: jr          $ra
    // 0x800804D8: nop

    return;
    // 0x800804D8: nop

    // 0x800804DC: nop

;}
RECOMP_FUNC void func_80080528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080528: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8008052C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80080530: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x80080534: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x80080538: sw          $a2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r6;
    // 0x8008053C: sw          $a3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r7;
    // 0x80080540: jal         0x8007FB50
    // 0x80080544: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    func_8007FB50(rdram, ctx);
        goto after_0;
    // 0x80080544: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x80080548: lwc1        $f4, 0x6C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X6C);
    // 0x8008054C: lwc1        $f6, 0x70($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80080550: lwc1        $f8, 0x74($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X74);
    // 0x80080554: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80080558: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x8008055C: swc1        $f4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f4.u32l;
    // 0x80080560: swc1        $f6, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f6.u32l;
    // 0x80080564: jal         0x8007FA50
    // 0x80080568: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    func_8007FA50(rdram, ctx);
        goto after_1;
    // 0x80080568: swc1        $f8, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x8008056C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80080570: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80080574: jr          $ra
    // 0x80080578: nop

    return;
    // 0x80080578: nop

    // 0x8008057C: nop

;}
RECOMP_FUNC void func_80080580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080580: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80080584: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80080588: lwc1        $f4, -0x4D10($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X4D10);
    // 0x8008058C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80080590: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80080594: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80080598: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008059C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800805A0: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800805A4: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x800805A8: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    // 0x800805AC: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x800805B0: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x800805B4: jal         0x80087F80
    // 0x800805B8: swc1        $f4, 0x6490($at)
    MEM_W(0X6490, ctx->r1) = ctx->f4.u32l;
    func_80087F80(rdram, ctx);
        goto after_0;
    // 0x800805B8: swc1        $f4, 0x6490($at)
    MEM_W(0X6490, ctx->r1) = ctx->f4.u32l;
    after_0:
    // 0x800805BC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800805C0: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800805C4: lwc1        $f6, 0x6490($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6490);
    // 0x800805C8: mul.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x800805CC: jal         0x80080E80
    // 0x800805D0: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    func_80080E80(rdram, ctx);
        goto after_1;
    // 0x800805D0: swc1        $f12, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x800805D4: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800805D8: jal         0x80081040
    // 0x800805DC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    func_80081040(rdram, ctx);
        goto after_2;
    // 0x800805DC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x800805E0: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x800805E4: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800805E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800805EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800805F0: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x800805F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800805F8: sub.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x800805FC: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80080600: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80080604: mul.s       $f16, $f6, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80080608: nop

    // 0x8008060C: mul.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80080610: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80080614: mul.s       $f18, $f6, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80080618: nop

    // 0x8008061C: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80080620: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x80080624: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80080628: jal         0x8007FB50
    // 0x8008062C: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    func_8007FB50(rdram, ctx);
        goto after_3;
    // 0x8008062C: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x80080630: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80080634: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80080638: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8008063C: mul.s       $f0, $f8, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80080640: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80080644: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80080648: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8008064C: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80080650: sub.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x80080654: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80080658: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x8008065C: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    // 0x80080660: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80080664: mul.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x80080668: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8008066C: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    // 0x80080670: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80080674: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x80080678: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8008067C: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80080680: swc1        $f4, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f4.u32l;
    // 0x80080684: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80080688: mul.s       $f2, $f6, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x8008068C: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x80080690: mul.s       $f4, $f10, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f12.fl);
    // 0x80080694: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x80080698: swc1        $f6, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f6.u32l;
    // 0x8008069C: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800806A0: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800806A4: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x800806A8: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800806AC: swc1        $f6, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f6.u32l;
    // 0x800806B0: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x800806B4: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800806B8: mul.s       $f4, $f10, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x800806BC: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x800806C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800806C4: swc1        $f6, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f6.u32l;
    // 0x800806C8: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800806CC: mul.s       $f0, $f10, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x800806D0: sub.s       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x800806D4: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x800806D8: add.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x800806DC: swc1        $f10, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f10.u32l;
    // 0x800806E0: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800806E4: mul.s       $f4, $f8, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x800806E8: sub.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x800806EC: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x800806F0: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x800806F4: mul.s       $f8, $f10, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x800806F8: add.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x800806FC: swc1        $f4, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f4.u32l;
    // 0x80080700: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80080704: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80080708: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8008070C: jr          $ra
    // 0x80080710: nop

    return;
    // 0x80080710: nop

;}
RECOMP_FUNC void func_80080714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080714: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80080718: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x8008071C: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x80080720: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80080724: lwc1        $f4, 0x70($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X70);
    // 0x80080728: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008072C: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80080730: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80080734: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80080738: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x8008073C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80080740: jal         0x80080580
    // 0x80080744: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80080580(rdram, ctx);
        goto after_0;
    // 0x80080744: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x80080748: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8008074C: jal         0x8007FA50
    // 0x80080750: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    func_8007FA50(rdram, ctx);
        goto after_1;
    // 0x80080750: lw          $a1, 0x60($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X60);
    after_1:
    // 0x80080754: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80080758: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8008075C: jr          $ra
    // 0x80080760: nop

    return;
    // 0x80080760: nop

    // 0x80080764: nop

    // 0x80080768: nop

    // 0x8008076C: nop

;}
RECOMP_FUNC void func_80080770(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080770: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80080774: lwc1        $f0, -0x4D00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X4D00);
    // 0x80080778: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8008077C: mtc1        $a2, $f14
    ctx->f14.u32l = ctx->r6;
    // 0x80080780: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x80080784: mul.s       $f12, $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80080788: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8008078C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80080790: mul.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80080794: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80080798: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008079C: mul.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x800807A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800807A4: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x800807A8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800807AC: swc1        $f14, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f14.u32l;
    // 0x800807B0: swc1        $f12, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f12.u32l;
    // 0x800807B4: swc1        $f0, 0x64A0($at)
    MEM_W(0X64A0, ctx->r1) = ctx->f0.u32l;
    // 0x800807B8: jal         0x80080E80
    // 0x800807BC: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    func_80080E80(rdram, ctx);
        goto after_0;
    // 0x800807BC: swc1        $f16, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x800807C0: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x800807C4: jal         0x80081040
    // 0x800807C8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    func_80081040(rdram, ctx);
        goto after_1;
    // 0x800807C8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_1:
    // 0x800807CC: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x800807D0: jal         0x80080E80
    // 0x800807D4: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    func_80080E80(rdram, ctx);
        goto after_2;
    // 0x800807D4: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    after_2:
    // 0x800807D8: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    // 0x800807DC: jal         0x80081040
    // 0x800807E0: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    func_80081040(rdram, ctx);
        goto after_3;
    // 0x800807E0: lwc1        $f12, 0x50($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X50);
    after_3:
    // 0x800807E4: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800807E8: jal         0x80080E80
    // 0x800807EC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    func_80080E80(rdram, ctx);
        goto after_4;
    // 0x800807EC: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x800807F0: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x800807F4: jal         0x80081040
    // 0x800807F8: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    func_80081040(rdram, ctx);
        goto after_5;
    // 0x800807F8: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    after_5:
    // 0x800807FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80080800: jal         0x8007FB50
    // 0x80080804: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_8007FB50(rdram, ctx);
        goto after_6;
    // 0x80080804: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x80080808: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8008080C: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80080810: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80080814: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80080818: mul.s       $f4, $f14, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x8008081C: neg.s       $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = -ctx->f16.fl;
    // 0x80080820: mul.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x80080824: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x80080828: mul.s       $f0, $f20, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8008082C: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x80080830: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x80080834: mul.s       $f10, $f0, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x80080838: nop

    // 0x8008083C: mul.s       $f18, $f22, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x80080840: nop

    // 0x80080844: mul.s       $f6, $f0, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80080848: nop

    // 0x8008084C: mul.s       $f8, $f22, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f22.fl, ctx->f12.fl);
    // 0x80080850: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x80080854: mul.s       $f18, $f20, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f14.fl);
    // 0x80080858: nop

    // 0x8008085C: mul.s       $f0, $f22, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = MUL_S(ctx->f22.fl, ctx->f16.fl);
    // 0x80080860: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    // 0x80080864: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80080868: swc1        $f18, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f18.u32l;
    // 0x8008086C: swc1        $f10, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f10.u32l;
    // 0x80080870: mul.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f12.fl);
    // 0x80080874: nop

    // 0x80080878: mul.s       $f6, $f20, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x8008087C: nop

    // 0x80080880: mul.s       $f10, $f0, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80080884: nop

    // 0x80080888: mul.s       $f18, $f20, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f12.fl);
    // 0x8008088C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80080890: mul.s       $f6, $f22, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f14.fl);
    // 0x80080894: swc1        $f8, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f8.u32l;
    // 0x80080898: sub.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x8008089C: swc1        $f6, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f6.u32l;
    // 0x800808A0: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
    // 0x800808A4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800808A8: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800808AC: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x800808B0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800808B4: jr          $ra
    // 0x800808B8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800808B8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80080910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080910: slti        $at, $a1, 0xC
    ctx->r1 = SIGNED(ctx->r5) < 0XC ? 1 : 0;
    // 0x80080914: bne         $at, $zero, L_8008098C
    if (ctx->r1 != 0) {
        // 0x80080918: negu        $v1, $a0
        ctx->r3 = SUB32(0, ctx->r4);
            goto L_8008098C;
    }
    // 0x80080918: negu        $v1, $a0
    ctx->r3 = SUB32(0, ctx->r4);
    // 0x8008091C: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x80080920: beq         $v1, $zero, L_80080930
    if (ctx->r3 == 0) {
        // 0x80080924: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_80080930;
    }
    // 0x80080924: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x80080928: swl         $zero, 0x0($a0)
    do_swl(rdram, 0X0, ctx->r4, 0);
    // 0x8008092C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
L_80080930:
    // 0x80080930: addiu       $at, $zero, -0x20
    ctx->r1 = ADD32(0, -0X20);
    // 0x80080934: and         $a3, $a1, $at
    ctx->r7 = ctx->r5 & ctx->r1;
    // 0x80080938: beq         $a3, $zero, L_8008096C
    if (ctx->r7 == 0) {
        // 0x8008093C: subu        $a1, $a1, $a3
        ctx->r5 = SUB32(ctx->r5, ctx->r7);
            goto L_8008096C;
    }
    // 0x8008093C: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x80080940: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
L_80080944:
    // 0x80080944: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x80080948: sw          $zero, -0x20($a0)
    MEM_W(-0X20, ctx->r4) = 0;
    // 0x8008094C: sw          $zero, -0x1C($a0)
    MEM_W(-0X1C, ctx->r4) = 0;
    // 0x80080950: sw          $zero, -0x18($a0)
    MEM_W(-0X18, ctx->r4) = 0;
    // 0x80080954: sw          $zero, -0x14($a0)
    MEM_W(-0X14, ctx->r4) = 0;
    // 0x80080958: sw          $zero, -0x10($a0)
    MEM_W(-0X10, ctx->r4) = 0;
    // 0x8008095C: sw          $zero, -0xC($a0)
    MEM_W(-0XC, ctx->r4) = 0;
    // 0x80080960: sw          $zero, -0x8($a0)
    MEM_W(-0X8, ctx->r4) = 0;
    // 0x80080964: bne         $a0, $a3, L_80080944
    if (ctx->r4 != ctx->r7) {
        // 0x80080968: sw          $zero, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = 0;
            goto L_80080944;
    }
    // 0x80080968: sw          $zero, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = 0;
L_8008096C:
    // 0x8008096C: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80080970: and         $a3, $a1, $at
    ctx->r7 = ctx->r5 & ctx->r1;
    // 0x80080974: beq         $a3, $zero, L_8008098C
    if (ctx->r7 == 0) {
        // 0x80080978: subu        $a1, $a1, $a3
        ctx->r5 = SUB32(ctx->r5, ctx->r7);
            goto L_8008098C;
    }
    // 0x80080978: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x8008097C: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
L_80080980:
    // 0x80080980: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80080984: bne         $a0, $a3, L_80080980
    if (ctx->r4 != ctx->r7) {
        // 0x80080988: sw          $zero, -0x4($a0)
        MEM_W(-0X4, ctx->r4) = 0;
            goto L_80080980;
    }
    // 0x80080988: sw          $zero, -0x4($a0)
    MEM_W(-0X4, ctx->r4) = 0;
L_8008098C:
    // 0x8008098C: blez        $a1, L_800809A4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80080990: nop
    
            goto L_800809A4;
    }
    // 0x80080990: nop

    // 0x80080994: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
L_80080998:
    // 0x80080998: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8008099C: bne         $a0, $a1, L_80080998
    if (ctx->r4 != ctx->r5) {
        // 0x800809A0: sb          $zero, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = 0;
            goto L_80080998;
    }
    // 0x800809A0: sb          $zero, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = 0;
L_800809A4:
    // 0x800809A4: jr          $ra
    // 0x800809A8: nop

    return;
    // 0x800809A8: nop

    // 0x800809AC: nop

;}
RECOMP_FUNC void func_800809B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800809B0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800809B4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800809B8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x800809BC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x800809C0: ld          $t7, 0x8($sp)
    ctx->r15 = LD(ctx->r29, 0X8);
    // 0x800809C4: ld          $t6, 0x0($sp)
    ctx->r14 = LD(ctx->r29, 0X0);
    // 0x800809C8: dsrlv       $v0, $t6, $t7
    ctx->r2 = ctx->r14 >> (ctx->r15 & 63);
    // 0x800809CC: dsll32      $v1, $v0, 0
    ctx->r3 = ctx->r2 << (0 + 32);
    // 0x800809D0: dsra32      $v1, $v1, 0
    ctx->r3 = SIGNED(ctx->r3) >> (0 + 32);
    // 0x800809D4: jr          $ra
    // 0x800809D8: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
    return;
    // 0x800809D8: dsra32      $v0, $v0, 0
    ctx->r2 = SIGNED(ctx->r2) >> (0 + 32);
;}
