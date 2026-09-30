#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8002D08C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D08C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002D090: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002D094: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002D098: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8002D09C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8002D0A0: jal         0x8002C188
    // 0x8002D0A4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002D0A4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002D0A8: sb          $v0, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = ctx->r2;
    // 0x8002D0AC: jal         0x8002C188
    // 0x8002D0B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002C188(rdram, ctx);
        goto after_1;
    // 0x8002D0B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8002D0B4: sb          $v0, 0x3D($s0)
    MEM_B(0X3D, ctx->r16) = ctx->r2;
    // 0x8002D0B8: jal         0x8002C188
    // 0x8002D0BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002C188(rdram, ctx);
        goto after_2;
    // 0x8002D0BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8002D0C0: sb          $v0, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = ctx->r2;
    // 0x8002D0C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002D0C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002D0CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002D0D0: jr          $ra
    // 0x8002D0D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002D0D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002D0D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D0D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002D0DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002D0E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002D0E4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002D0E8: jal         0x8002C188
    // 0x8002D0EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002D0EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002D0F0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002D0F4: jal         0x8002C2D8
    // 0x8002D0F8: sb          $v0, 0x3F($a0)
    MEM_B(0X3F, ctx->r4) = ctx->r2;
    func_8002C2D8(rdram, ctx);
        goto after_1;
    // 0x8002D0F8: sb          $v0, 0x3F($a0)
    MEM_B(0X3F, ctx->r4) = ctx->r2;
    after_1:
    // 0x8002D0FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002D100: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002D104: jr          $ra
    // 0x8002D108: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002D108: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002D10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D10C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002D110: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002D114: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8002D118: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x8002D11C: jal         0x8002C1E8
    // 0x8002D120: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C1E8(rdram, ctx);
        goto after_0;
    // 0x8002D120: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002D124: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8002D128: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8002D12C: bgez        $v0, L_8002D144
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8002D130: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8002D144;
    }
    // 0x8002D130: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002D134: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8002D138: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002D13C: nop

    // 0x8002D140: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8002D144:
    // 0x8002D144: lui         $at, 0x4880
    ctx->r1 = S32(0X4880 << 16);
    // 0x8002D148: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8002D14C: lbu         $t7, 0x9($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X9);
    // 0x8002D150: div.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8002D154: ori         $t8, $t7, 0x40
    ctx->r24 = ctx->r15 | 0X40;
    // 0x8002D158: sb          $t8, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r24;
    // 0x8002D15C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002D160: swc1        $f0, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f0.u32l;
    // 0x8002D164: swc1        $f0, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->f0.u32l;
    // 0x8002D168: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002D16C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002D170: jr          $ra
    // 0x8002D174: nop

    return;
    // 0x8002D174: nop

;}
RECOMP_FUNC void func_8002D178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D178: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002D17C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002D180: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8002D184: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x8002D188: jal         0x8002C1E8
    // 0x8002D18C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C1E8(rdram, ctx);
        goto after_0;
    // 0x8002D18C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002D190: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8002D194: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8002D198: bgez        $v0, L_8002D1B0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8002D19C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8002D1B0;
    }
    // 0x8002D19C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002D1A0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8002D1A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002D1A8: nop

    // 0x8002D1AC: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8002D1B0:
    // 0x8002D1B0: lui         $at, 0x4880
    ctx->r1 = S32(0X4880 << 16);
    // 0x8002D1B4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8002D1B8: lbu         $t7, 0x9($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X9);
    // 0x8002D1BC: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8002D1C0: ori         $t8, $t7, 0x40
    ctx->r24 = ctx->r15 | 0X40;
    // 0x8002D1C4: sb          $t8, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r24;
    // 0x8002D1C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002D1CC: swc1        $f16, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f16.u32l;
    // 0x8002D1D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002D1D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002D1D8: jr          $ra
    // 0x8002D1DC: nop

    return;
    // 0x8002D1DC: nop

;}
RECOMP_FUNC void func_8002D1E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D1E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002D1E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002D1E8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8002D1EC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x8002D1F0: jal         0x8002C1E8
    // 0x8002D1F4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C1E8(rdram, ctx);
        goto after_0;
    // 0x8002D1F4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002D1F8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8002D1FC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8002D200: bgez        $v0, L_8002D218
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8002D204: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8002D218;
    }
    // 0x8002D204: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002D208: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8002D20C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002D210: nop

    // 0x8002D214: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8002D218:
    // 0x8002D218: lui         $at, 0x4880
    ctx->r1 = S32(0X4880 << 16);
    // 0x8002D21C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8002D220: lbu         $t7, 0x9($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X9);
    // 0x8002D224: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8002D228: ori         $t8, $t7, 0x40
    ctx->r24 = ctx->r15 | 0X40;
    // 0x8002D22C: sb          $t8, 0x9($a2)
    MEM_B(0X9, ctx->r6) = ctx->r24;
    // 0x8002D230: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002D234: swc1        $f16, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->f16.u32l;
    // 0x8002D238: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002D23C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002D240: jr          $ra
    // 0x8002D244: nop

    return;
    // 0x8002D244: nop

;}
RECOMP_FUNC void func_8002D248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D248: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002D24C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8002D250: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002D254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002D258: swc1        $f0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f0.u32l;
    // 0x8002D25C: swc1        $f0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f0.u32l;
    // 0x8002D260: lhu         $t7, 0x1C($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X1C);
    // 0x8002D264: sh          $zero, 0x34($a1)
    MEM_H(0X34, ctx->r5) = 0;
    // 0x8002D268: lh          $t6, 0x34($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X34);
    // 0x8002D26C: andi        $t8, $t7, 0xEFFF
    ctx->r24 = ctx->r15 & 0XEFFF;
    // 0x8002D270: sh          $t8, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r24;
    // 0x8002D274: sh          $t6, 0x32($a1)
    MEM_H(0X32, ctx->r5) = ctx->r14;
    // 0x8002D278: lbu         $t9, 0x9($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X9);
    // 0x8002D27C: nop

    // 0x8002D280: andi        $t0, $t9, 0xFFBF
    ctx->r8 = ctx->r25 & 0XFFBF;
    // 0x8002D284: sb          $t0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r8;
    // 0x8002D288: jal         0x8002C2B0
    // 0x8002D28C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C2B0(rdram, ctx);
        goto after_0;
    // 0x8002D28C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002D290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002D294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002D298: jr          $ra
    // 0x8002D29C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002D29C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002D2A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D2A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002D2A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002D2A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002D2AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002D2B0: jal         0x8002C300
    // 0x8002D2B4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002D2B4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002D2B8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002D2BC: jal         0x8002C1B8
    // 0x8002D2C0: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002D2C0: nop

    after_1:
    // 0x8002D2C4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8002D2C8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8002D2CC: nop

    // 0x8002D2D0: sh          $v0, 0x32($t6)
    MEM_H(0X32, ctx->r14) = ctx->r2;
    // 0x8002D2D4: lbu         $t8, 0x9($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X9);
    // 0x8002D2D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002D2DC: ori         $t9, $t8, 0x40
    ctx->r25 = ctx->r24 | 0X40;
    // 0x8002D2E0: sb          $t9, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r25;
    // 0x8002D2E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002D2E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002D2EC: jr          $ra
    // 0x8002D2F0: nop

    return;
    // 0x8002D2F0: nop

;}
RECOMP_FUNC void func_8002D2F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D2F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002D2F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002D2FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002D300: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002D304: jal         0x8002C300
    // 0x8002D308: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002D308: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002D30C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002D310: jal         0x8002C1B8
    // 0x8002D314: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002D314: nop

    after_1:
    // 0x8002D318: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8002D31C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8002D320: nop

    // 0x8002D324: sh          $v0, 0x34($t6)
    MEM_H(0X34, ctx->r14) = ctx->r2;
    // 0x8002D328: lbu         $t8, 0x9($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X9);
    // 0x8002D32C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002D330: ori         $t9, $t8, 0x40
    ctx->r25 = ctx->r24 | 0X40;
    // 0x8002D334: sb          $t9, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r25;
    // 0x8002D338: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002D33C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002D340: jr          $ra
    // 0x8002D344: nop

    return;
    // 0x8002D344: nop

;}
RECOMP_FUNC void func_8002D348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D348: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8002D34C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8002D350: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8002D354: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8002D358: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8002D35C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8002D360: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002D364: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x8002D368: lui         $s3, 0x800A
    ctx->r19 = S32(0X800A << 16);
    // 0x8002D36C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8002D370: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8002D374: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002D378: sh          $t6, 0x3530($at)
    MEM_H(0X3530, ctx->r1) = ctx->r14;
    // 0x8002D37C: addiu       $s3, $s3, 0x6E10
    ctx->r19 = ADD32(ctx->r19, 0X6E10);
    // 0x8002D380: addiu       $s2, $s2, -0x32B0
    ctx->r18 = ADD32(ctx->r18, -0X32B0);
L_8002D384:
    // 0x8002D384: lhu         $v0, 0x24($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X24);
    // 0x8002D388: nop

    // 0x8002D38C: blez        $v0, L_8002D3BC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8002D390: addiu       $t7, $v0, -0x1
        ctx->r15 = ADD32(ctx->r2, -0X1);
            goto L_8002D3BC;
    }
    // 0x8002D390: addiu       $t7, $v0, -0x1
    ctx->r15 = ADD32(ctx->r2, -0X1);
    // 0x8002D394: sh          $t7, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r15;
    // 0x8002D398: lhu         $t8, 0x2($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X2);
    // 0x8002D39C: nop

    // 0x8002D3A0: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x8002D3A4: beq         $t9, $zero, L_8002D3B4
    if (ctx->r25 == 0) {
        // 0x8002D3A8: nop
    
            goto L_8002D3B4;
    }
    // 0x8002D3A8: nop

    // 0x8002D3AC: b           L_8002D3BC
    // 0x8002D3B0: sh          $zero, 0x24($s0)
    MEM_H(0X24, ctx->r16) = 0;
        goto L_8002D3BC;
    // 0x8002D3B0: sh          $zero, 0x24($s0)
    MEM_H(0X24, ctx->r16) = 0;
L_8002D3B4:
    // 0x8002D3B4: b           L_8002D460
    // 0x8002D3B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8002D460;
    // 0x8002D3B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002D3BC:
    // 0x8002D3BC: jal         0x8002C188
    // 0x8002D3C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002D3C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8002D3C4: andi        $t0, $v0, 0x80
    ctx->r8 = ctx->r2 & 0X80;
    // 0x8002D3C8: beq         $t0, $zero, L_8002D3F8
    if (ctx->r8 == 0) {
        // 0x8002D3CC: andi        $v1, $v0, 0xFFFF
        ctx->r3 = ctx->r2 & 0XFFFF;
            goto L_8002D3F8;
    }
    // 0x8002D3CC: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x8002D3D0: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x8002D3D4: addu        $t2, $s3, $t1
    ctx->r10 = ADD32(ctx->r19, ctx->r9);
    // 0x8002D3D8: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x8002D3DC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8002D3E0: jalr        $t9
    // 0x8002D3E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8002D3E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x8002D3E8: beq         $v0, $zero, L_8002D384
    if (ctx->r2 == 0) {
        // 0x8002D3EC: nop
    
            goto L_8002D384;
    }
    // 0x8002D3EC: nop

    // 0x8002D3F0: b           L_8002D460
    // 0x8002D3F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8002D460;
    // 0x8002D3F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002D3F8:
    // 0x8002D3F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002D3FC: jal         0x8002C188
    // 0x8002D400: sh          $v1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r3;
    func_8002C188(rdram, ctx);
        goto after_2;
    // 0x8002D400: sh          $v1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r3;
    after_2:
    // 0x8002D404: lhu         $v1, 0x2E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X2E);
    // 0x8002D408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002D40C: sll         $t3, $v1, 8
    ctx->r11 = S32(ctx->r3 << 8);
    // 0x8002D410: or          $s1, $v0, $t3
    ctx->r17 = ctx->r2 | ctx->r11;
    // 0x8002D414: andi        $t4, $s1, 0xFFFF
    ctx->r12 = ctx->r17 & 0XFFFF;
    // 0x8002D418: jal         0x8002C188
    // 0x8002D41C: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    func_8002C188(rdram, ctx);
        goto after_3;
    // 0x8002D41C: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    after_3:
    // 0x8002D420: sll         $s2, $v0, 24
    ctx->r18 = S32(ctx->r2 << 24);
    // 0x8002D424: sra         $t5, $s2, 24
    ctx->r13 = S32(SIGNED(ctx->r18) >> 24);
    // 0x8002D428: or          $s2, $t5, $zero
    ctx->r18 = ctx->r13 | 0;
    // 0x8002D42C: jal         0x8002C188
    // 0x8002D430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002C188(rdram, ctx);
        goto after_4;
    // 0x8002D430: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8002D434: sll         $a2, $s2, 16
    ctx->r6 = S32(ctx->r18 << 16);
    // 0x8002D438: sll         $a3, $v0, 24
    ctx->r7 = S32(ctx->r2 << 24);
    // 0x8002D43C: sra         $t7, $a3, 24
    ctx->r15 = S32(SIGNED(ctx->r7) >> 24);
    // 0x8002D440: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8002D444: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8002D448: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x8002D44C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002D450: jal         0x8002D47C
    // 0x8002D454: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8002D47C(rdram, ctx);
        goto after_5;
    // 0x8002D454: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x8002D458: sll         $t8, $v0, 24
    ctx->r24 = S32(ctx->r2 << 24);
    // 0x8002D45C: sra         $v0, $t8, 24
    ctx->r2 = S32(SIGNED(ctx->r24) >> 24);
L_8002D460:
    // 0x8002D460: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8002D464: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8002D468: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8002D46C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8002D470: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8002D474: jr          $ra
    // 0x8002D478: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8002D478: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8002D47C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D47C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002D480: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8002D484: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x8002D488: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x8002D48C: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8002D490: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8002D494: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8002D498: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x8002D49C: bne         $a2, $zero, L_8002D4D4
    if (ctx->r6 != 0) {
        // 0x8002D4A0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8002D4D4;
    }
    // 0x8002D4A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002D4A4: bne         $t9, $zero, L_8002D4D4
    if (ctx->r25 != 0) {
        // 0x8002D4A8: nop
    
            goto L_8002D4D4;
    }
    // 0x8002D4A8: nop

    // 0x8002D4AC: lh          $t0, 0x20($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X20);
    // 0x8002D4B0: lh          $t1, 0x14($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X14);
    // 0x8002D4B4: lh          $t4, 0x22($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X22);
    // 0x8002D4B8: lh          $t5, 0x18($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X18);
    // 0x8002D4BC: subu        $a2, $t0, $t1
    ctx->r6 = SUB32(ctx->r8, ctx->r9);
    // 0x8002D4C0: subu        $a3, $t4, $t5
    ctx->r7 = SUB32(ctx->r12, ctx->r13);
    // 0x8002D4C4: sll         $t2, $a2, 16
    ctx->r10 = S32(ctx->r6 << 16);
    // 0x8002D4C8: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x8002D4CC: sra         $a2, $t2, 16
    ctx->r6 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8002D4D0: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
L_8002D4D4:
    // 0x8002D4D4: jal         0x8002D4EC
    // 0x8002D4D8: nop

    func_8002D4EC(rdram, ctx);
        goto after_0;
    // 0x8002D4D8: nop

    after_0:
    // 0x8002D4DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002D4E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002D4E4: jr          $ra
    // 0x8002D4E8: nop

    return;
    // 0x8002D4E8: nop

;}
RECOMP_FUNC void func_8002D4EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D4EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002D4F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002D4F4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8002D4F8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8002D4FC: lhu         $v0, 0x1C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X1C);
    // 0x8002D500: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x8002D504: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8002D508: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x8002D50C: andi        $t0, $v0, 0x2
    ctx->r8 = ctx->r2 & 0X2;
    // 0x8002D510: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8002D514: beq         $t0, $zero, L_8002D52C
    if (ctx->r8 == 0) {
        // 0x8002D518: or          $a2, $t7, $zero
        ctx->r6 = ctx->r15 | 0;
            goto L_8002D52C;
    }
    // 0x8002D518: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8002D51C: negu        $a2, $t7
    ctx->r6 = SUB32(0, ctx->r15);
    // 0x8002D520: sll         $t1, $a2, 16
    ctx->r9 = S32(ctx->r6 << 16);
    // 0x8002D524: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8002D528: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
L_8002D52C:
    // 0x8002D52C: andi        $t3, $v0, 0x4
    ctx->r11 = ctx->r2 & 0X4;
    // 0x8002D530: beq         $t3, $zero, L_8002D548
    if (ctx->r11 == 0) {
        // 0x8002D534: nop
    
            goto L_8002D548;
    }
    // 0x8002D534: nop

    // 0x8002D538: negu        $a3, $a3
    ctx->r7 = SUB32(0, ctx->r7);
    // 0x8002D53C: sll         $t4, $a3, 16
    ctx->r12 = S32(ctx->r7 << 16);
    // 0x8002D540: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8002D544: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
L_8002D548:
    // 0x8002D548: lh          $v0, 0x14($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X14);
    // 0x8002D54C: lh          $v1, 0x18($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X18);
    // 0x8002D550: addu        $t6, $v0, $a2
    ctx->r14 = ADD32(ctx->r2, ctx->r6);
    // 0x8002D554: sh          $t6, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r14;
    // 0x8002D558: lh          $t8, 0x26($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X26);
    // 0x8002D55C: addu        $t7, $v1, $a3
    ctx->r15 = ADD32(ctx->r3, ctx->r7);
    // 0x8002D560: subu        $a2, $t8, $v0
    ctx->r6 = SUB32(ctx->r24, ctx->r2);
    // 0x8002D564: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x8002D568: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8002D56C: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x8002D570: div         $zero, $t1, $a1
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r5)));
    // 0x8002D574: sh          $t7, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r15;
    // 0x8002D578: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x8002D57C: bne         $a1, $zero, L_8002D588
    if (ctx->r5 != 0) {
        // 0x8002D580: nop
    
            goto L_8002D588;
    }
    // 0x8002D580: nop

    // 0x8002D584: break       7
    do_break(2147669380);
L_8002D588:
    // 0x8002D588: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002D58C: bne         $a1, $at, L_8002D5A0
    if (ctx->r5 != ctx->r1) {
        // 0x8002D590: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8002D5A0;
    }
    // 0x8002D590: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002D594: bne         $t1, $at, L_8002D5A0
    if (ctx->r9 != ctx->r1) {
        // 0x8002D598: nop
    
            goto L_8002D5A0;
    }
    // 0x8002D598: nop

    // 0x8002D59C: break       6
    do_break(2147669404);
L_8002D5A0:
    // 0x8002D5A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002D5A4: mflo        $t2
    ctx->r10 = lo;
    // 0x8002D5A8: sh          $t2, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r10;
    // 0x8002D5AC: lh          $t3, 0x2A($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X2A);
    // 0x8002D5B0: nop

    // 0x8002D5B4: bne         $t3, $zero, L_8002D5E8
    if (ctx->r11 != 0) {
        // 0x8002D5B8: nop
    
            goto L_8002D5E8;
    }
    // 0x8002D5B8: nop

    // 0x8002D5BC: beq         $a2, $zero, L_8002D5E8
    if (ctx->r6 == 0) {
        // 0x8002D5C0: nop
    
            goto L_8002D5E8;
    }
    // 0x8002D5C0: nop

    // 0x8002D5C4: bgez        $a2, L_8002D5D8
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8002D5C8: nop
    
            goto L_8002D5D8;
    }
    // 0x8002D5C8: nop

    // 0x8002D5CC: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x8002D5D0: b           L_8002D5E0
    // 0x8002D5D4: sh          $t4, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r12;
        goto L_8002D5E0;
    // 0x8002D5D4: sh          $t4, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r12;
L_8002D5D8:
    // 0x8002D5D8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8002D5DC: sh          $t5, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r13;
L_8002D5E0:
    // 0x8002D5E0: lh          $v1, 0x18($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X18);
    // 0x8002D5E4: nop

L_8002D5E8:
    // 0x8002D5E8: lh          $t6, 0x28($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X28);
    // 0x8002D5EC: nop

    // 0x8002D5F0: subu        $a3, $t6, $v1
    ctx->r7 = SUB32(ctx->r14, ctx->r3);
    // 0x8002D5F4: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x8002D5F8: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8002D5FC: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x8002D600: div         $zero, $t9, $a1
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r5)));
    // 0x8002D604: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    // 0x8002D608: bne         $a1, $zero, L_8002D614
    if (ctx->r5 != 0) {
        // 0x8002D60C: nop
    
            goto L_8002D614;
    }
    // 0x8002D60C: nop

    // 0x8002D610: break       7
    do_break(2147669520);
L_8002D614:
    // 0x8002D614: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002D618: bne         $a1, $at, L_8002D62C
    if (ctx->r5 != ctx->r1) {
        // 0x8002D61C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8002D62C;
    }
    // 0x8002D61C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8002D620: bne         $t9, $at, L_8002D62C
    if (ctx->r25 != ctx->r1) {
        // 0x8002D624: nop
    
            goto L_8002D62C;
    }
    // 0x8002D624: nop

    // 0x8002D628: break       6
    do_break(2147669544);
L_8002D62C:
    // 0x8002D62C: mflo        $t0
    ctx->r8 = lo;
    // 0x8002D630: sh          $t0, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r8;
    // 0x8002D634: lh          $t1, 0x2C($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X2C);
    // 0x8002D638: nop

    // 0x8002D63C: bne         $t1, $zero, L_8002D664
    if (ctx->r9 != 0) {
        // 0x8002D640: nop
    
            goto L_8002D664;
    }
    // 0x8002D640: nop

    // 0x8002D644: beq         $a3, $zero, L_8002D664
    if (ctx->r7 == 0) {
        // 0x8002D648: nop
    
            goto L_8002D664;
    }
    // 0x8002D648: nop

    // 0x8002D64C: bgez        $a3, L_8002D660
    if (SIGNED(ctx->r7) >= 0) {
        // 0x8002D650: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_8002D660;
    }
    // 0x8002D650: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8002D654: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x8002D658: b           L_8002D664
    // 0x8002D65C: sh          $t2, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r10;
        goto L_8002D664;
    // 0x8002D65C: sh          $t2, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r10;
L_8002D660:
    // 0x8002D660: sh          $t3, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r11;
L_8002D664:
    // 0x8002D664: lhu         $t4, 0x1C($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X1C);
    // 0x8002D668: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8002D66C: ori         $t5, $t4, 0x400
    ctx->r13 = ctx->r12 | 0X400;
    // 0x8002D670: sh          $t5, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r13;
    // 0x8002D674: lhu         $t6, -0x32AE($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X32AE);
    // 0x8002D678: nop

    // 0x8002D67C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x8002D680: beq         $t7, $zero, L_8002D698
    if (ctx->r15 == 0) {
        // 0x8002D684: nop
    
            goto L_8002D698;
    }
    // 0x8002D684: nop

    // 0x8002D688: jal         0x8002D7D8
    // 0x8002D68C: nop

    func_8002D7D8(rdram, ctx);
        goto after_0;
    // 0x8002D68C: nop

    after_0:
    // 0x8002D690: b           L_8002D698
    // 0x8002D694: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002D698;
    // 0x8002D694: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002D698:
    // 0x8002D698: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002D69C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002D6A0: jr          $ra
    // 0x8002D6A4: nop

    return;
    // 0x8002D6A4: nop

;}
RECOMP_FUNC void func_8002D6A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D6A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002D6AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002D6B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002D6B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8002D6B8: lh          $v0, 0x2A($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X2A);
    // 0x8002D6BC: lw          $t6, 0x14($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X14);
    // 0x8002D6C0: lh          $v1, 0x2C($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X2C);
    // 0x8002D6C4: lw          $t9, 0x18($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X18);
    // 0x8002D6C8: lh          $t2, 0x2E($a1)
    ctx->r10 = MEM_H(ctx->r5, 0X2E);
    // 0x8002D6CC: lh          $t4, 0x30($a1)
    ctx->r12 = MEM_H(ctx->r5, 0X30);
    // 0x8002D6D0: lhu         $a2, 0x1C($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X1C);
    // 0x8002D6D4: sll         $t7, $v0, 8
    ctx->r15 = S32(ctx->r2 << 8);
    // 0x8002D6D8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8002D6DC: sll         $t0, $v1, 8
    ctx->r8 = S32(ctx->r3 << 8);
    // 0x8002D6E0: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8002D6E4: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x8002D6E8: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x8002D6EC: andi        $t6, $a2, 0x100
    ctx->r14 = ctx->r6 & 0X100;
    // 0x8002D6F0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8002D6F4: sw          $t8, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r24;
    // 0x8002D6F8: sw          $t1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r9;
    // 0x8002D6FC: sh          $t3, 0x2A($a1)
    MEM_H(0X2A, ctx->r5) = ctx->r11;
    // 0x8002D700: beq         $t6, $zero, L_8002D760
    if (ctx->r14 == 0) {
        // 0x8002D704: sh          $t5, 0x2C($a1)
        MEM_H(0X2C, ctx->r5) = ctx->r13;
            goto L_8002D760;
    }
    // 0x8002D704: sh          $t5, 0x2C($a1)
    MEM_H(0X2C, ctx->r5) = ctx->r13;
    // 0x8002D708: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x8002D70C: lw          $t4, 0x14($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X14);
    // 0x8002D710: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8002D714: lhu         $a2, 0x1C($a1)
    ctx->r6 = MEM_HU(ctx->r5, 0X1C);
    // 0x8002D718: lw          $t9, 0x14($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X14);
    // 0x8002D71C: nop

    // 0x8002D720: lw          $v0, 0x38($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X38);
    // 0x8002D724: nop

    // 0x8002D728: lh          $t0, 0x2A($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X2A);
    // 0x8002D72C: lh          $t1, 0x2E($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X2E);
    // 0x8002D730: nop

    // 0x8002D734: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x8002D738: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x8002D73C: addu        $t5, $t4, $t3
    ctx->r13 = ADD32(ctx->r12, ctx->r11);
    // 0x8002D740: sw          $t5, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r13;
    // 0x8002D744: lh          $t7, 0x30($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X30);
    // 0x8002D748: lh          $t6, 0x2C($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2C);
    // 0x8002D74C: lw          $t0, 0x18($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X18);
    // 0x8002D750: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x8002D754: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x8002D758: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x8002D75C: sw          $t1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r9;
L_8002D760:
    // 0x8002D760: andi        $t2, $a2, 0x400
    ctx->r10 = ctx->r6 & 0X400;
    // 0x8002D764: beq         $t2, $zero, L_8002D7C8
    if (ctx->r10 == 0) {
        // 0x8002D768: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8002D7C8;
    }
    // 0x8002D768: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002D76C: jal         0x8002D814
    // 0x8002D770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002D814(rdram, ctx);
        goto after_0;
    // 0x8002D770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8002D774: bne         $v0, $zero, L_8002D788
    if (ctx->r2 != 0) {
        // 0x8002D778: nop
    
            goto L_8002D788;
    }
    // 0x8002D778: nop

    // 0x8002D77C: jal         0x8002D880
    // 0x8002D780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002D880(rdram, ctx);
        goto after_1;
    // 0x8002D780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8002D784: beq         $v0, $zero, L_8002D7A0
    if (ctx->r2 == 0) {
        // 0x8002D788: lui         $t4, 0x8012
        ctx->r12 = S32(0X8012 << 16);
            goto L_8002D7A0;
    }
L_8002D788:
    // 0x8002D788: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8002D78C: lhu         $t4, -0x32AE($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X32AE);
    // 0x8002D790: nop

    // 0x8002D794: andi        $t3, $t4, 0x2
    ctx->r11 = ctx->r12 & 0X2;
    // 0x8002D798: beq         $t3, $zero, L_8002D7C8
    if (ctx->r11 == 0) {
        // 0x8002D79C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8002D7C8;
    }
    // 0x8002D79C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8002D7A0:
    // 0x8002D7A0: lhu         $t5, 0x24($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X24);
    // 0x8002D7A4: nop

    // 0x8002D7A8: bne         $t5, $zero, L_8002D7BC
    if (ctx->r13 != 0) {
        // 0x8002D7AC: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8002D7BC;
    }
    // 0x8002D7AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002D7B0: jal         0x8002D7D8
    // 0x8002D7B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002D7D8(rdram, ctx);
        goto after_2;
    // 0x8002D7B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8002D7B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_8002D7BC:
    // 0x8002D7BC: jal         0x8002D348
    // 0x8002D7C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8002D348(rdram, ctx);
        goto after_3;
    // 0x8002D7C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x8002D7C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8002D7C8:
    // 0x8002D7C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002D7CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002D7D0: jr          $ra
    // 0x8002D7D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002D7D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002D7D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D7D8: sh          $zero, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = 0;
    // 0x8002D7DC: lh          $v0, 0x1A($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1A);
    // 0x8002D7E0: lhu         $t8, 0x1C($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X1C);
    // 0x8002D7E4: lh          $t6, 0x26($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X26);
    // 0x8002D7E8: lh          $t7, 0x28($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X28);
    // 0x8002D7EC: andi        $t9, $t8, 0xFBFF
    ctx->r25 = ctx->r24 & 0XFBFF;
    // 0x8002D7F0: sh          $t9, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r25;
    // 0x8002D7F4: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x8002D7F8: sh          $v0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r2;
    // 0x8002D7FC: sh          $v0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r2;
    // 0x8002D800: sh          $v0, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r2;
    // 0x8002D804: sh          $v0, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r2;
    // 0x8002D808: sh          $t6, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r14;
    // 0x8002D80C: jr          $ra
    // 0x8002D810: sh          $t7, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r15;
    return;
    // 0x8002D810: sh          $t7, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_8002D814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D814: lh          $t6, 0x2A($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2A);
    // 0x8002D818: nop

    // 0x8002D81C: bgez        $t6, L_8002D844
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8002D820: nop
    
            goto L_8002D844;
    }
    // 0x8002D820: nop

    // 0x8002D824: lh          $v1, 0x26($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X26);
    // 0x8002D828: lh          $t7, 0x14($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X14);
    // 0x8002D82C: nop

    // 0x8002D830: slt         $at, $v1, $t7
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8002D834: beq         $at, $zero, L_8002D864
    if (ctx->r1 == 0) {
        // 0x8002D838: nop
    
            goto L_8002D864;
    }
    // 0x8002D838: nop

    // 0x8002D83C: jr          $ra
    // 0x8002D840: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8002D840: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002D844:
    // 0x8002D844: lh          $v1, 0x26($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X26);
    // 0x8002D848: lh          $t8, 0x14($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X14);
    // 0x8002D84C: nop

    // 0x8002D850: slt         $at, $t8, $v1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8002D854: beq         $at, $zero, L_8002D864
    if (ctx->r1 == 0) {
        // 0x8002D858: nop
    
            goto L_8002D864;
    }
    // 0x8002D858: nop

    // 0x8002D85C: jr          $ra
    // 0x8002D860: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8002D860: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002D864:
    // 0x8002D864: sh          $zero, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = 0;
    // 0x8002D868: lh          $t9, 0x2E($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2E);
    // 0x8002D86C: sh          $v1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r3;
    // 0x8002D870: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002D874: sh          $t9, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r25;
    // 0x8002D878: jr          $ra
    // 0x8002D87C: nop

    return;
    // 0x8002D87C: nop

;}
RECOMP_FUNC void func_8002D880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D880: lh          $t6, 0x2C($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2C);
    // 0x8002D884: nop

    // 0x8002D888: bgez        $t6, L_8002D8B0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8002D88C: nop
    
            goto L_8002D8B0;
    }
    // 0x8002D88C: nop

    // 0x8002D890: lh          $v1, 0x28($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X28);
    // 0x8002D894: lh          $t7, 0x18($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X18);
    // 0x8002D898: nop

    // 0x8002D89C: slt         $at, $v1, $t7
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8002D8A0: beq         $at, $zero, L_8002D8D0
    if (ctx->r1 == 0) {
        // 0x8002D8A4: nop
    
            goto L_8002D8D0;
    }
    // 0x8002D8A4: nop

    // 0x8002D8A8: jr          $ra
    // 0x8002D8AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8002D8AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002D8B0:
    // 0x8002D8B0: lh          $v1, 0x28($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X28);
    // 0x8002D8B4: lh          $t8, 0x18($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X18);
    // 0x8002D8B8: nop

    // 0x8002D8BC: slt         $at, $t8, $v1
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8002D8C0: beq         $at, $zero, L_8002D8D0
    if (ctx->r1 == 0) {
        // 0x8002D8C4: nop
    
            goto L_8002D8D0;
    }
    // 0x8002D8C4: nop

    // 0x8002D8C8: jr          $ra
    // 0x8002D8CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8002D8CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002D8D0:
    // 0x8002D8D0: sh          $zero, 0x30($a0)
    MEM_H(0X30, ctx->r4) = 0;
    // 0x8002D8D4: lh          $t9, 0x30($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X30);
    // 0x8002D8D8: sh          $v1, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r3;
    // 0x8002D8DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002D8E0: sh          $t9, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r25;
    // 0x8002D8E4: jr          $ra
    // 0x8002D8E8: nop

    return;
    // 0x8002D8E8: nop

;}
RECOMP_FUNC void func_8002D8EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D8EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002D8F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002D8F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002D8F8: lh          $v0, 0x2A($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X2A);
    // 0x8002D8FC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002D900: bgez        $v0, L_8002D910
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8002D904: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8002D910;
    }
    // 0x8002D904: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002D908: b           L_8002D910
    // 0x8002D90C: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
        goto L_8002D910;
    // 0x8002D90C: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_8002D910:
    // 0x8002D910: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x8002D914: bne         $at, $zero, L_8002D940
    if (ctx->r1 != 0) {
        // 0x8002D918: nop
    
            goto L_8002D940;
    }
    // 0x8002D918: nop

    // 0x8002D91C: lh          $v0, 0x2C($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X2C);
    // 0x8002D920: nop

    // 0x8002D924: bgez        $v0, L_8002D934
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8002D928: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8002D934;
    }
    // 0x8002D928: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002D92C: b           L_8002D934
    // 0x8002D930: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
        goto L_8002D934;
    // 0x8002D930: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_8002D934:
    // 0x8002D934: slti        $at, $v1, 0x100
    ctx->r1 = SIGNED(ctx->r3) < 0X100 ? 1 : 0;
    // 0x8002D938: beq         $at, $zero, L_8002D95C
    if (ctx->r1 == 0) {
        // 0x8002D93C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002D95C;
    }
    // 0x8002D93C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002D940:
    // 0x8002D940: jal         0x8002D7D8
    // 0x8002D944: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002D7D8(rdram, ctx);
        goto after_0;
    // 0x8002D944: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002D948: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8002D94C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002D950: jal         0x8002D348
    // 0x8002D954: nop

    func_8002D348(rdram, ctx);
        goto after_1;
    // 0x8002D954: nop

    after_1:
    // 0x8002D958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002D95C:
    // 0x8002D95C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002D960: jr          $ra
    // 0x8002D964: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8002D964: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8002D968(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D968: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002D96C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002D970: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8002D974: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8002D978: jal         0x8002C1E8
    // 0x8002D97C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C1E8(rdram, ctx);
        goto after_0;
    // 0x8002D97C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002D980: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8002D984: jal         0x8002C1B8
    // 0x8002D988: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002D988: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8002D98C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8002D990: jal         0x8002C1B8
    // 0x8002D994: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    func_8002C1B8(rdram, ctx);
        goto after_2;
    // 0x8002D994: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    after_2:
    // 0x8002D998: sll         $a3, $v0, 16
    ctx->r7 = S32(ctx->r2 << 16);
    // 0x8002D99C: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8002D9A0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8002D9A4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8002D9A8: lh          $a2, 0x1A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1A);
    // 0x8002D9AC: jal         0x8002D47C
    // 0x8002D9B0: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    func_8002D47C(rdram, ctx);
        goto after_3;
    // 0x8002D9B0: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    after_3:
    // 0x8002D9B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002D9B8: sll         $t7, $v0, 24
    ctx->r15 = S32(ctx->r2 << 24);
    // 0x8002D9BC: sra         $v0, $t7, 24
    ctx->r2 = S32(SIGNED(ctx->r15) >> 24);
    // 0x8002D9C0: jr          $ra
    // 0x8002D9C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8002D9C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8002D9C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D9C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002D9CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002D9D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002D9D4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8002D9D8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8002D9DC: jal         0x8002C1E8
    // 0x8002D9E0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C1E8(rdram, ctx);
        goto after_0;
    // 0x8002D9E0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002D9E4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8002D9E8: jal         0x8002C1B8
    // 0x8002D9EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002D9EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8002D9F0: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x8002D9F4: jal         0x8002C1B8
    // 0x8002D9F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002C1B8(rdram, ctx);
        goto after_2;
    // 0x8002D9F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8002D9FC: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x8002DA00: lh          $t7, 0x14($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X14);
    // 0x8002DA04: lh          $t2, 0x18($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X18);
    // 0x8002DA08: subu        $a2, $t6, $t7
    ctx->r6 = SUB32(ctx->r14, ctx->r15);
    // 0x8002DA0C: subu        $a3, $v0, $t2
    ctx->r7 = SUB32(ctx->r2, ctx->r10);
    // 0x8002DA10: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x8002DA14: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x8002DA18: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8002DA1C: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8002DA20: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8002DA24: jal         0x8002D4EC
    // 0x8002DA28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002D4EC(rdram, ctx);
        goto after_3;
    // 0x8002DA28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8002DA2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DA30: sll         $t5, $v0, 24
    ctx->r13 = S32(ctx->r2 << 24);
    // 0x8002DA34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002DA38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8002DA3C: jr          $ra
    // 0x8002DA40: sra         $v0, $t5, 24
    ctx->r2 = S32(SIGNED(ctx->r13) >> 24);
    return;
    // 0x8002DA40: sra         $v0, $t5, 24
    ctx->r2 = S32(SIGNED(ctx->r13) >> 24);
;}
RECOMP_FUNC void func_8002DA44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002DA44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002DA48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002DA4C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002DA50: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002DA54: jal         0x8002C1E8
    // 0x8002DA58: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C1E8(rdram, ctx);
        goto after_0;
    // 0x8002DA58: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002DA5C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DA60: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8002DA64: lh          $t8, 0x14($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X14);
    // 0x8002DA68: ori         $at, $at, 0xF000
    ctx->r1 = ctx->r1 | 0XF000;
    // 0x8002DA6C: andi        $t7, $v0, 0xFFF
    ctx->r15 = ctx->r2 & 0XFFF;
    // 0x8002DA70: and         $a1, $v0, $at
    ctx->r5 = ctx->r2 & ctx->r1;
    // 0x8002DA74: subu        $a2, $t7, $t8
    ctx->r6 = SUB32(ctx->r15, ctx->r24);
    // 0x8002DA78: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x8002DA7C: srl         $t6, $a1, 12
    ctx->r14 = S32(U32(ctx->r5) >> 12);
    // 0x8002DA80: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8002DA84: sra         $a2, $t9, 16
    ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8002DA88: jal         0x8002D4EC
    // 0x8002DA8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8002D4EC(rdram, ctx);
        goto after_1;
    // 0x8002DA8C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x8002DA90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002DA94: sll         $t1, $v0, 24
    ctx->r9 = S32(ctx->r2 << 24);
    // 0x8002DA98: sra         $v0, $t1, 24
    ctx->r2 = S32(SIGNED(ctx->r9) >> 24);
    // 0x8002DA9C: jr          $ra
    // 0x8002DAA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8002DAA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002DAA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002DAA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002DAA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002DAAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002DAB0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002DAB4: jal         0x8002C1E8
    // 0x8002DAB8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C1E8(rdram, ctx);
        goto after_0;
    // 0x8002DAB8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002DABC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DAC0: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8002DAC4: lh          $t8, 0x18($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X18);
    // 0x8002DAC8: ori         $at, $at, 0xF000
    ctx->r1 = ctx->r1 | 0XF000;
    // 0x8002DACC: andi        $t7, $v0, 0xFFF
    ctx->r15 = ctx->r2 & 0XFFF;
    // 0x8002DAD0: and         $a1, $v0, $at
    ctx->r5 = ctx->r2 & ctx->r1;
    // 0x8002DAD4: subu        $a3, $t7, $t8
    ctx->r7 = SUB32(ctx->r15, ctx->r24);
    // 0x8002DAD8: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x8002DADC: srl         $t6, $a1, 12
    ctx->r14 = S32(U32(ctx->r5) >> 12);
    // 0x8002DAE0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8002DAE4: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8002DAE8: jal         0x8002D4EC
    // 0x8002DAEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002D4EC(rdram, ctx);
        goto after_1;
    // 0x8002DAEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8002DAF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002DAF4: sll         $t1, $v0, 24
    ctx->r9 = S32(ctx->r2 << 24);
    // 0x8002DAF8: sra         $v0, $t1, 24
    ctx->r2 = S32(SIGNED(ctx->r9) >> 24);
    // 0x8002DAFC: jr          $ra
    // 0x8002DB00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8002DB00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002DB04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002DB04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002DB08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002DB0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002DB10: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002DB14: jal         0x8002C300
    // 0x8002DB18: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002DB18: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002DB1C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DB20: jal         0x8002C1B8
    // 0x8002DB24: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002DB24: nop

    after_1:
    // 0x8002DB28: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DB2C: nop

    // 0x8002DB30: lhu         $t6, 0x1C($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X1C);
    // 0x8002DB34: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
    // 0x8002DB38: ori         $t7, $t6, 0x400
    ctx->r15 = ctx->r14 | 0X400;
    // 0x8002DB3C: jal         0x8002BCD8
    // 0x8002DB40: sh          $t7, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r15;
    func_8002BCD8(rdram, ctx);
        goto after_2;
    // 0x8002DB40: sh          $t7, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r15;
    after_2:
    // 0x8002DB44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002DB48: sll         $t8, $v0, 24
    ctx->r24 = S32(ctx->r2 << 24);
    // 0x8002DB4C: sra         $v0, $t8, 24
    ctx->r2 = S32(SIGNED(ctx->r24) >> 24);
    // 0x8002DB50: jr          $ra
    // 0x8002DB54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8002DB54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002DB58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002DB58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002DB5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002DB60: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8002DB64: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002DB68: jal         0x8002C188
    // 0x8002DB6C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002DB6C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002DB70: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8002DB74: jal         0x8002C1B8
    // 0x8002DB78: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002DB78: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    after_1:
    // 0x8002DB7C: lbu         $v1, 0x1F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1F);
    // 0x8002DB80: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8002DB84: beq         $v1, $zero, L_8002DBAC
    if (ctx->r3 == 0) {
        // 0x8002DB88: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8002DBAC;
    }
    // 0x8002DB88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002DB8C: beq         $v1, $at, L_8002DBB4
    if (ctx->r3 == ctx->r1) {
        // 0x8002DB90: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8002DBB4;
    }
    // 0x8002DB90: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002DB94: beq         $v1, $at, L_8002DBC8
    if (ctx->r3 == ctx->r1) {
        // 0x8002DB98: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8002DBC8;
    }
    // 0x8002DB98: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8002DB9C: beq         $v1, $at, L_8002DBDC
    if (ctx->r3 == ctx->r1) {
        // 0x8002DBA0: nop
    
            goto L_8002DBDC;
    }
    // 0x8002DBA0: nop

    // 0x8002DBA4: b           L_8002DBF0
    // 0x8002DBA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002DBF0;
    // 0x8002DBA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002DBAC:
    // 0x8002DBAC: b           L_8002DBEC
    // 0x8002DBB0: sh          $v0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r2;
        goto L_8002DBEC;
    // 0x8002DBB0: sh          $v0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r2;
L_8002DBB4:
    // 0x8002DBB4: lhu         $t6, 0x1C($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X1C);
    // 0x8002DBB8: nop

    // 0x8002DBBC: and         $t7, $t6, $v0
    ctx->r15 = ctx->r14 & ctx->r2;
    // 0x8002DBC0: b           L_8002DBEC
    // 0x8002DBC4: sh          $t7, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r15;
        goto L_8002DBEC;
    // 0x8002DBC4: sh          $t7, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r15;
L_8002DBC8:
    // 0x8002DBC8: lhu         $t8, 0x1C($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X1C);
    // 0x8002DBCC: nop

    // 0x8002DBD0: or          $t9, $t8, $v0
    ctx->r25 = ctx->r24 | ctx->r2;
    // 0x8002DBD4: b           L_8002DBEC
    // 0x8002DBD8: sh          $t9, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r25;
        goto L_8002DBEC;
    // 0x8002DBD8: sh          $t9, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r25;
L_8002DBDC:
    // 0x8002DBDC: lhu         $t0, 0x1C($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X1C);
    // 0x8002DBE0: nop

    // 0x8002DBE4: xor         $t1, $t0, $v0
    ctx->r9 = ctx->r8 ^ ctx->r2;
    // 0x8002DBE8: sh          $t1, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r9;
L_8002DBEC:
    // 0x8002DBEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002DBF0:
    // 0x8002DBF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002DBF4: jr          $ra
    // 0x8002DBF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002DBF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002DBFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002DBFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002DC00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002DC04: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8002DC08: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8002DC0C: jal         0x8002C188
    // 0x8002DC10: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002DC10: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002DC14: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8002DC18: jal         0x8002C1B8
    // 0x8002DC1C: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002DC1C: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    after_1:
    // 0x8002DC20: lbu         $v1, 0x1F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1F);
    // 0x8002DC24: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8002DC28: beq         $v1, $zero, L_8002DC5C
    if (ctx->r3 == 0) {
        // 0x8002DC2C: nop
    
            goto L_8002DC5C;
    }
    // 0x8002DC2C: nop

    // 0x8002DC30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002DC34: beq         $v1, $at, L_8002DC64
    if (ctx->r3 == ctx->r1) {
        // 0x8002DC38: lui         $t6, 0x8012
        ctx->r14 = S32(0X8012 << 16);
            goto L_8002DC64;
    }
    // 0x8002DC38: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8002DC3C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002DC40: beq         $v1, $at, L_8002DC78
    if (ctx->r3 == ctx->r1) {
        // 0x8002DC44: lui         $t8, 0x8012
        ctx->r24 = S32(0X8012 << 16);
            goto L_8002DC78;
    }
    // 0x8002DC44: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8002DC48: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8002DC4C: beq         $v1, $at, L_8002DC8C
    if (ctx->r3 == ctx->r1) {
        // 0x8002DC50: lui         $t0, 0x8012
        ctx->r8 = S32(0X8012 << 16);
            goto L_8002DC8C;
    }
    // 0x8002DC50: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8002DC54: b           L_8002DCA0
    // 0x8002DC58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002DCA0;
    // 0x8002DC58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002DC5C:
    // 0x8002DC5C: b           L_8002DC9C
    // 0x8002DC60: sh          $v0, -0x32AE($at)
    MEM_H(-0X32AE, ctx->r1) = ctx->r2;
        goto L_8002DC9C;
    // 0x8002DC60: sh          $v0, -0x32AE($at)
    MEM_H(-0X32AE, ctx->r1) = ctx->r2;
L_8002DC64:
    // 0x8002DC64: lhu         $t6, -0x32AE($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X32AE);
    // 0x8002DC68: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8002DC6C: and         $t7, $t6, $v0
    ctx->r15 = ctx->r14 & ctx->r2;
    // 0x8002DC70: b           L_8002DC9C
    // 0x8002DC74: sh          $t7, -0x32AE($at)
    MEM_H(-0X32AE, ctx->r1) = ctx->r15;
        goto L_8002DC9C;
    // 0x8002DC74: sh          $t7, -0x32AE($at)
    MEM_H(-0X32AE, ctx->r1) = ctx->r15;
L_8002DC78:
    // 0x8002DC78: lhu         $t8, -0x32AE($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X32AE);
    // 0x8002DC7C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8002DC80: or          $t9, $t8, $v0
    ctx->r25 = ctx->r24 | ctx->r2;
    // 0x8002DC84: b           L_8002DC9C
    // 0x8002DC88: sh          $t9, -0x32AE($at)
    MEM_H(-0X32AE, ctx->r1) = ctx->r25;
        goto L_8002DC9C;
    // 0x8002DC88: sh          $t9, -0x32AE($at)
    MEM_H(-0X32AE, ctx->r1) = ctx->r25;
L_8002DC8C:
    // 0x8002DC8C: lhu         $t0, -0x32AE($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X32AE);
    // 0x8002DC90: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8002DC94: xor         $t1, $t0, $v0
    ctx->r9 = ctx->r8 ^ ctx->r2;
    // 0x8002DC98: sh          $t1, -0x32AE($at)
    MEM_H(-0X32AE, ctx->r1) = ctx->r9;
L_8002DC9C:
    // 0x8002DC9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002DCA0:
    // 0x8002DCA0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002DCA4: jr          $ra
    // 0x8002DCA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002DCA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002DCAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002DCAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002DCB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002DCB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002DCB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002DCBC: jal         0x8002C300
    // 0x8002DCC0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002DCC0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002DCC4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DCC8: jal         0x8002C1B8
    // 0x8002DCCC: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002DCCC: nop

    after_1:
    // 0x8002DCD0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DCD4: jal         0x8002DDAC
    // 0x8002DCD8: sh          $v0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r2;
    func_8002DDAC(rdram, ctx);
        goto after_2;
    // 0x8002DCD8: sh          $v0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r2;
    after_2:
    // 0x8002DCDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002DCE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002DCE4: jr          $ra
    // 0x8002DCE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002DCE8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002DCEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002DCEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002DCF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002DCF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002DCF8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002DCFC: jal         0x8002C300
    // 0x8002DD00: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002DD00: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002DD04: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DD08: jal         0x8002C1B8
    // 0x8002DD0C: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002DD0C: nop

    after_1:
    // 0x8002DD10: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DD14: jal         0x8002DDAC
    // 0x8002DD18: sh          $v0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r2;
    func_8002DDAC(rdram, ctx);
        goto after_2;
    // 0x8002DD18: sh          $v0, 0x30($a0)
    MEM_H(0X30, ctx->r4) = ctx->r2;
    after_2:
    // 0x8002DD1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002DD20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002DD24: jr          $ra
    // 0x8002DD28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002DD28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002DD2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002DD2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002DD30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002DD34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002DD38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002DD3C: jal         0x8002C300
    // 0x8002DD40: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002DD40: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002DD44: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DD48: jal         0x8002C1B8
    // 0x8002DD4C: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002DD4C: nop

    after_1:
    // 0x8002DD50: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DD54: jal         0x8002DDAC
    // 0x8002DD58: sh          $v0, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r2;
    func_8002DDAC(rdram, ctx);
        goto after_2;
    // 0x8002DD58: sh          $v0, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r2;
    after_2:
    // 0x8002DD5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002DD60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002DD64: jr          $ra
    // 0x8002DD68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002DD68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002DD6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002DD6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002DD70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002DD74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002DD78: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002DD7C: jal         0x8002C300
    // 0x8002DD80: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002DD80: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002DD84: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DD88: jal         0x8002C1B8
    // 0x8002DD8C: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002DD8C: nop

    after_1:
    // 0x8002DD90: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DD94: jal         0x8002DDAC
    // 0x8002DD98: sh          $v0, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r2;
    func_8002DDAC(rdram, ctx);
        goto after_2;
    // 0x8002DD98: sh          $v0, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r2;
    after_2:
    // 0x8002DD9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002DDA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002DDA4: jr          $ra
    // 0x8002DDA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002DDA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002DDAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002DDAC: sh          $zero, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = 0;
    // 0x8002DDB0: lh          $t6, 0x1A($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X1A);
    // 0x8002DDB4: jr          $ra
    // 0x8002DDB8: sh          $t6, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r14;
    return;
    // 0x8002DDB8: sh          $t6, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_8002DDBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002DDBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002DDC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002DDC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002DDC8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002DDCC: jal         0x8002C1E8
    // 0x8002DDD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002C1E8(rdram, ctx);
        goto after_0;
    // 0x8002DDD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002DDD4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DDD8: sll         $t6, $v0, 8
    ctx->r14 = S32(ctx->r2 << 8);
    // 0x8002DDDC: sll         $t8, $v0, 20
    ctx->r24 = S32(ctx->r2 << 20);
    // 0x8002DDE0: sra         $t7, $t6, 20
    ctx->r15 = S32(SIGNED(ctx->r14) >> 20);
    // 0x8002DDE4: sra         $t9, $t8, 20
    ctx->r25 = S32(SIGNED(ctx->r24) >> 20);
    // 0x8002DDE8: sh          $t7, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r15;
    // 0x8002DDEC: sh          $t9, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r25;
    // 0x8002DDF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002DDF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002DDF8: jr          $ra
    // 0x8002DDFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002DDFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002DE00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002DE00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002DE04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002DE08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002DE0C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002DE10: jal         0x8002C1E8
    // 0x8002DE14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002C1E8(rdram, ctx);
        goto after_0;
    // 0x8002DE14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002DE18: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DE1C: sll         $t6, $v0, 8
    ctx->r14 = S32(ctx->r2 << 8);
    // 0x8002DE20: sll         $t8, $v0, 20
    ctx->r24 = S32(ctx->r2 << 20);
    // 0x8002DE24: sra         $t7, $t6, 20
    ctx->r15 = S32(SIGNED(ctx->r14) >> 20);
    // 0x8002DE28: sra         $t9, $t8, 20
    ctx->r25 = S32(SIGNED(ctx->r24) >> 20);
    // 0x8002DE2C: sh          $t7, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r15;
    // 0x8002DE30: jal         0x8002DDAC
    // 0x8002DE34: sh          $t9, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r25;
    func_8002DDAC(rdram, ctx);
        goto after_1;
    // 0x8002DE34: sh          $t9, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r25;
    after_1:
    // 0x8002DE38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002DE3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002DE40: jr          $ra
    // 0x8002DE44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002DE44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002DE48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002DE48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002DE4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002DE50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002DE54: jal         0x8002C1E8
    // 0x8002DE58: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C1E8(rdram, ctx);
        goto after_0;
    // 0x8002DE58: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002DE5C: sll         $a1, $v0, 8
    ctx->r5 = S32(ctx->r2 << 8);
    // 0x8002DE60: sll         $a2, $v0, 20
    ctx->r6 = S32(ctx->r2 << 20);
    // 0x8002DE64: sra         $t9, $a2, 20
    ctx->r25 = S32(SIGNED(ctx->r6) >> 20);
    // 0x8002DE68: sra         $t6, $a1, 20
    ctx->r14 = S32(SIGNED(ctx->r5) >> 20);
    // 0x8002DE6C: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x8002DE70: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x8002DE74: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002DE78: sra         $a2, $t0, 16
    ctx->r6 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8002DE7C: jal         0x8002AB30
    // 0x8002DE80: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    func_8002AB30(rdram, ctx);
        goto after_1;
    // 0x8002DE80: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    after_1:
    // 0x8002DE84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002DE88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002DE8C: jr          $ra
    // 0x8002DE90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002DE90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002DE94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002DE94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002DE98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002DE9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002DEA0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002DEA4: jal         0x8002DEC8
    // 0x8002DEA8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002DEC8(rdram, ctx);
        goto after_0;
    // 0x8002DEA8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002DEAC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DEB0: jal         0x8002C2B0
    // 0x8002DEB4: nop

    func_8002C2B0(rdram, ctx);
        goto after_1;
    // 0x8002DEB4: nop

    after_1:
    // 0x8002DEB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002DEBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002DEC0: jr          $ra
    // 0x8002DEC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002DEC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002DEC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002DEC8: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8002DECC: nop

    // 0x8002DED0: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8002DED4: nop

    // 0x8002DED8: lw          $t8, 0x14($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X14);
    // 0x8002DEDC: nop

    // 0x8002DEE0: lw          $v0, 0x38($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X38);
    // 0x8002DEE4: nop

    // 0x8002DEE8: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x8002DEEC: nop

    // 0x8002DEF0: sw          $t9, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r25;
    // 0x8002DEF4: lw          $t0, 0x18($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X18);
    // 0x8002DEF8: jr          $ra
    // 0x8002DEFC: sw          $t0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r8;
    return;
    // 0x8002DEFC: sw          $t0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r8;
;}
RECOMP_FUNC void func_8002DF00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002DF00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002DF04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002DF08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002DF0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002DF10: jal         0x8002DF34
    // 0x8002DF14: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002DF34(rdram, ctx);
        goto after_0;
    // 0x8002DF14: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002DF18: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002DF1C: jal         0x8002C2B0
    // 0x8002DF20: nop

    func_8002C2B0(rdram, ctx);
        goto after_1;
    // 0x8002DF20: nop

    after_1:
    // 0x8002DF24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002DF28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002DF2C: jr          $ra
    // 0x8002DF30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002DF30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002DF34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002DF34: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8002DF38: nop

    // 0x8002DF3C: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8002DF40: nop

    // 0x8002DF44: lw          $t8, 0x14($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X14);
    // 0x8002DF48: nop

    // 0x8002DF4C: lw          $v0, 0x38($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X38);
    // 0x8002DF50: nop

    // 0x8002DF54: lh          $t9, 0x20($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X20);
    // 0x8002DF58: nop

    // 0x8002DF5C: sh          $t9, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r25;
    // 0x8002DF60: lh          $t0, 0x22($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X22);
    // 0x8002DF64: jr          $ra
    // 0x8002DF68: sh          $t0, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r8;
    return;
    // 0x8002DF68: sh          $t0, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r8;
;}
RECOMP_FUNC void func_8002DF6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002DF6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002DF70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002DF74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002DF78: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x8002DF7C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002DF80: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8002DF84: nop

    // 0x8002DF88: lw          $t8, 0x14($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X14);
    // 0x8002DF8C: nop

    // 0x8002DF90: lw          $v0, 0x38($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X38);
    // 0x8002DF94: nop

    // 0x8002DF98: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x8002DF9C: nop

    // 0x8002DFA0: sw          $t9, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r25;
    // 0x8002DFA4: lw          $t0, 0x18($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X18);
    // 0x8002DFA8: nop

    // 0x8002DFAC: sw          $t0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r8;
    // 0x8002DFB0: lh          $t1, 0x20($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X20);
    // 0x8002DFB4: nop

    // 0x8002DFB8: sh          $t1, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r9;
    // 0x8002DFBC: lh          $t2, 0x22($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X22);
    // 0x8002DFC0: jal         0x8002C2B0
    // 0x8002DFC4: sh          $t2, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r10;
    func_8002C2B0(rdram, ctx);
        goto after_0;
    // 0x8002DFC4: sh          $t2, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r10;
    after_0:
    // 0x8002DFC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002DFCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002DFD0: jr          $ra
    // 0x8002DFD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002DFD4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002DFD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002DFD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002DFDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002DFE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002DFE4: lh          $t6, 0x20($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X20);
    // 0x8002DFE8: lh          $t7, 0x22($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X22);
    // 0x8002DFEC: sh          $t6, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r14;
    // 0x8002DFF0: sh          $t7, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r15;
    // 0x8002DFF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002DFF8: jal         0x8002DDAC
    // 0x8002DFFC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002DDAC(rdram, ctx);
        goto after_0;
    // 0x8002DFFC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E000: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E004: jal         0x8002C2B0
    // 0x8002E008: nop

    func_8002C2B0(rdram, ctx);
        goto after_1;
    // 0x8002E008: nop

    after_1:
    // 0x8002E00C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E010: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E014: jr          $ra
    // 0x8002E018: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E018: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E01C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E01C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E020: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E024: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E028: lh          $t6, 0x14($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X14);
    // 0x8002E02C: lh          $t7, 0x18($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X18);
    // 0x8002E030: sh          $t6, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r14;
    // 0x8002E034: sh          $t7, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r15;
    // 0x8002E038: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002E03C: jal         0x8002DDAC
    // 0x8002E040: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002DDAC(rdram, ctx);
        goto after_0;
    // 0x8002E040: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E044: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E048: jal         0x8002C2B0
    // 0x8002E04C: nop

    func_8002C2B0(rdram, ctx);
        goto after_1;
    // 0x8002E04C: nop

    after_1:
    // 0x8002E050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E054: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E058: jr          $ra
    // 0x8002E05C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E05C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E064: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E068: lh          $t6, 0x14($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X14);
    // 0x8002E06C: nop

    // 0x8002E070: sh          $t6, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r14;
    // 0x8002E074: lh          $t7, 0x18($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X18);
    // 0x8002E078: sh          $zero, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = 0;
    // 0x8002E07C: lh          $t8, 0x1E($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X1E);
    // 0x8002E080: sh          $t7, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r15;
    // 0x8002E084: sh          $t8, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r24;
    // 0x8002E088: jal         0x8002C2B0
    // 0x8002E08C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C2B0(rdram, ctx);
        goto after_0;
    // 0x8002E08C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E094: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E098: jr          $ra
    // 0x8002E09C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E09C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E0A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E0A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E0A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E0A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E0AC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002E0B0: jal         0x8002C1E8
    // 0x8002E0B4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C1E8(rdram, ctx);
        goto after_0;
    // 0x8002E0B4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E0B8: sll         $a1, $v0, 8
    ctx->r5 = S32(ctx->r2 << 8);
    // 0x8002E0BC: sll         $a2, $v0, 20
    ctx->r6 = S32(ctx->r2 << 20);
    // 0x8002E0C0: sra         $t9, $a2, 20
    ctx->r25 = S32(SIGNED(ctx->r6) >> 20);
    // 0x8002E0C4: sra         $t6, $a1, 20
    ctx->r14 = S32(SIGNED(ctx->r5) >> 20);
    // 0x8002E0C8: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x8002E0CC: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x8002E0D0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E0D4: sra         $a2, $t0, 16
    ctx->r6 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8002E0D8: jal         0x8002E0F0
    // 0x8002E0DC: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    func_8002E0F0(rdram, ctx);
        goto after_1;
    // 0x8002E0DC: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    after_1:
    // 0x8002E0E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E0E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E0E8: jr          $ra
    // 0x8002E0EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E0EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E0F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E0F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E0F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E0F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002E0FC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8002E100: lh          $t0, 0x20($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X20);
    // 0x8002E104: lh          $t2, 0x22($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X22);
    // 0x8002E108: addu        $t1, $t0, $a1
    ctx->r9 = ADD32(ctx->r8, ctx->r5);
    // 0x8002E10C: addu        $t3, $t2, $a2
    ctx->r11 = ADD32(ctx->r10, ctx->r6);
    // 0x8002E110: sh          $t1, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r9;
    // 0x8002E114: jal         0x8002DDAC
    // 0x8002E118: sh          $t3, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r11;
    func_8002DDAC(rdram, ctx);
        goto after_0;
    // 0x8002E118: sh          $t3, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r11;
    after_0:
    // 0x8002E11C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E120: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E124: jr          $ra
    // 0x8002E128: nop

    return;
    // 0x8002E128: nop

;}
RECOMP_FUNC void func_8002E12C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E12C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E134: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E138: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002E13C: jal         0x8002C1E8
    // 0x8002E140: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C1E8(rdram, ctx);
        goto after_0;
    // 0x8002E140: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E144: sll         $a1, $v0, 8
    ctx->r5 = S32(ctx->r2 << 8);
    // 0x8002E148: sll         $a2, $v0, 20
    ctx->r6 = S32(ctx->r2 << 20);
    // 0x8002E14C: sra         $t7, $a2, 20
    ctx->r15 = S32(SIGNED(ctx->r6) >> 20);
    // 0x8002E150: sra         $t6, $a1, 20
    ctx->r14 = S32(SIGNED(ctx->r5) >> 20);
    // 0x8002E154: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E158: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8002E15C: jal         0x8002E180
    // 0x8002E160: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    func_8002E180(rdram, ctx);
        goto after_1;
    // 0x8002E160: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    after_1:
    // 0x8002E164: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E168: jal         0x8002DDAC
    // 0x8002E16C: nop

    func_8002DDAC(rdram, ctx);
        goto after_2;
    // 0x8002E16C: nop

    after_2:
    // 0x8002E170: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E178: jr          $ra
    // 0x8002E17C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E17C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E180: lhu         $v0, 0x1C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X1C);
    // 0x8002E184: nop

    // 0x8002E188: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x8002E18C: beq         $t6, $zero, L_8002E198
    if (ctx->r14 == 0) {
        // 0x8002E190: andi        $t7, $v0, 0x4
        ctx->r15 = ctx->r2 & 0X4;
            goto L_8002E198;
    }
    // 0x8002E190: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x8002E194: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
L_8002E198:
    // 0x8002E198: beq         $t7, $zero, L_8002E1A4
    if (ctx->r15 == 0) {
        // 0x8002E19C: nop
    
            goto L_8002E1A4;
    }
    // 0x8002E19C: nop

    // 0x8002E1A0: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
L_8002E1A4:
    // 0x8002E1A4: lh          $t8, 0x14($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X14);
    // 0x8002E1A8: lh          $t0, 0x18($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X18);
    // 0x8002E1AC: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x8002E1B0: addu        $t1, $t0, $a2
    ctx->r9 = ADD32(ctx->r8, ctx->r6);
    // 0x8002E1B4: sh          $t9, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r25;
    // 0x8002E1B8: jr          $ra
    // 0x8002E1BC: sh          $t1, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r9;
    return;
    // 0x8002E1BC: sh          $t1, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void func_8002E1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E1C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E1C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E1C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E1CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002E1D0: jal         0x8002C1E8
    // 0x8002E1D4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C1E8(rdram, ctx);
        goto after_0;
    // 0x8002E1D4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E1D8: sll         $a1, $v0, 8
    ctx->r5 = S32(ctx->r2 << 8);
    // 0x8002E1DC: sll         $a2, $v0, 20
    ctx->r6 = S32(ctx->r2 << 20);
    // 0x8002E1E0: sra         $t7, $a2, 20
    ctx->r15 = S32(SIGNED(ctx->r6) >> 20);
    // 0x8002E1E4: sra         $t6, $a1, 20
    ctx->r14 = S32(SIGNED(ctx->r5) >> 20);
    // 0x8002E1E8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E1EC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8002E1F0: jal         0x8002E208
    // 0x8002E1F4: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    func_8002E208(rdram, ctx);
        goto after_1;
    // 0x8002E1F4: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    after_1:
    // 0x8002E1F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E1FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E200: jr          $ra
    // 0x8002E204: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E204: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E208: lhu         $v0, 0x1C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X1C);
    // 0x8002E20C: nop

    // 0x8002E210: andi        $t6, $v0, 0x2
    ctx->r14 = ctx->r2 & 0X2;
    // 0x8002E214: beq         $t6, $zero, L_8002E220
    if (ctx->r14 == 0) {
        // 0x8002E218: andi        $t7, $v0, 0x4
        ctx->r15 = ctx->r2 & 0X4;
            goto L_8002E220;
    }
    // 0x8002E218: andi        $t7, $v0, 0x4
    ctx->r15 = ctx->r2 & 0X4;
    // 0x8002E21C: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
L_8002E220:
    // 0x8002E220: beq         $t7, $zero, L_8002E22C
    if (ctx->r15 == 0) {
        // 0x8002E224: nop
    
            goto L_8002E22C;
    }
    // 0x8002E224: nop

    // 0x8002E228: negu        $a2, $a2
    ctx->r6 = SUB32(0, ctx->r6);
L_8002E22C:
    // 0x8002E22C: lh          $t8, 0x20($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X20);
    // 0x8002E230: lh          $t0, 0x22($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X22);
    // 0x8002E234: addu        $t9, $t8, $a1
    ctx->r25 = ADD32(ctx->r24, ctx->r5);
    // 0x8002E238: addu        $t1, $t0, $a2
    ctx->r9 = ADD32(ctx->r8, ctx->r6);
    // 0x8002E23C: sh          $t9, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r25;
    // 0x8002E240: jr          $ra
    // 0x8002E244: sh          $t1, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r9;
    return;
    // 0x8002E244: sh          $t1, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void func_8002E248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E248: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E24C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E250: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E254: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002E258: jal         0x8002C300
    // 0x8002E25C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002E25C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E260: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E264: jal         0x8002C1B8
    // 0x8002E268: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002E268: nop

    after_1:
    // 0x8002E26C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E270: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002E274: sh          $v0, -0x66A($at)
    MEM_H(-0X66A, ctx->r1) = ctx->r2;
    // 0x8002E278: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002E27C: jr          $ra
    // 0x8002E280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8002E280: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002E284(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E284: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E288: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E28C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E290: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002E294: jal         0x8002C300
    // 0x8002E298: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002E298: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E29C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E2A0: jal         0x8002C1B8
    // 0x8002E2A4: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002E2A4: nop

    after_1:
    // 0x8002E2A8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002E2AC: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x8002E2B0: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x8002E2B4: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x8002E2B8: lh          $t8, 0x98($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X98);
    // 0x8002E2BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E2C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E2C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002E2C8: jr          $ra
    // 0x8002E2CC: sh          $t8, 0xE6($v1)
    MEM_H(0XE6, ctx->r3) = ctx->r24;
    return;
    // 0x8002E2CC: sh          $t8, 0xE6($v1)
    MEM_H(0XE6, ctx->r3) = ctx->r24;
;}
RECOMP_FUNC void func_8002E2D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E2D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E2D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E2D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E2DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002E2E0: jal         0x8002C188
    // 0x8002E2E4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002E2E4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E2E8: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8002E2EC: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x8002E2F0: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x8002E2F4: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x8002E2F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002E2FC: lhu         $t7, 0x523C($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X523C);
    // 0x8002E300: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002E304: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E308: jal         0x8002C2D8
    // 0x8002E30C: sh          $t7, -0x66A($at)
    MEM_H(-0X66A, ctx->r1) = ctx->r15;
    func_8002C2D8(rdram, ctx);
        goto after_1;
    // 0x8002E30C: sh          $t7, -0x66A($at)
    MEM_H(-0X66A, ctx->r1) = ctx->r15;
    after_1:
    // 0x8002E310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E314: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E318: jr          $ra
    // 0x8002E31C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E31C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E320: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E324: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E328: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E32C: lhu         $t6, 0x1E($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X1E);
    // 0x8002E330: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002E334: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002E338: jal         0x8002C2B0
    // 0x8002E33C: sh          $t6, -0x66A($at)
    MEM_H(-0X66A, ctx->r1) = ctx->r14;
    func_8002C2B0(rdram, ctx);
        goto after_0;
    // 0x8002E33C: sh          $t6, -0x66A($at)
    MEM_H(-0X66A, ctx->r1) = ctx->r14;
    after_0:
    // 0x8002E340: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E344: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E348: jr          $ra
    // 0x8002E34C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E34C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E350: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E358: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E35C: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x8002E360: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002E364: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8002E368: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002E36C: lw          $t8, 0x14($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X14);
    // 0x8002E370: nop

    // 0x8002E374: lw          $t9, 0x38($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X38);
    // 0x8002E378: nop

    // 0x8002E37C: lhu         $t0, 0x1E($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X1E);
    // 0x8002E380: jal         0x8002C2B0
    // 0x8002E384: sh          $t0, -0x66A($at)
    MEM_H(-0X66A, ctx->r1) = ctx->r8;
    func_8002C2B0(rdram, ctx);
        goto after_0;
    // 0x8002E384: sh          $t0, -0x66A($at)
    MEM_H(-0X66A, ctx->r1) = ctx->r8;
    after_0:
    // 0x8002E388: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E38C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E390: jr          $ra
    // 0x8002E394: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E394: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E398(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E398: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E39C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E3A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E3A4: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x8002E3A8: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002E3AC: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8002E3B0: lh          $t6, -0x66A($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X66A);
    // 0x8002E3B4: lw          $t9, 0x14($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X14);
    // 0x8002E3B8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002E3BC: lw          $t0, 0x38($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X38);
    // 0x8002E3C0: jal         0x8002C2B0
    // 0x8002E3C4: sh          $t6, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r14;
    func_8002C2B0(rdram, ctx);
        goto after_0;
    // 0x8002E3C4: sh          $t6, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r14;
    after_0:
    // 0x8002E3C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E3CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E3D0: jr          $ra
    // 0x8002E3D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E3D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E3D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E3D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E3DC: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002E3E0: lh          $t6, -0x66A($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X66A);
    // 0x8002E3E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E3E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E3EC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002E3F0: jal         0x8002C2B0
    // 0x8002E3F4: sh          $t6, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r14;
    func_8002C2B0(rdram, ctx);
        goto after_0;
    // 0x8002E3F4: sh          $t6, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r14;
    after_0:
    // 0x8002E3F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E3FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E400: jr          $ra
    // 0x8002E404: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E404: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E408(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E408: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E40C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E410: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E414: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002E418: jal         0x8002C300
    // 0x8002E41C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002E41C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E420: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E424: jal         0x8002C1B8
    // 0x8002E428: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002E428: nop

    after_1:
    // 0x8002E42C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002E430: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x8002E434: lh          $t6, 0xE6($v1)
    ctx->r14 = MEM_H(ctx->r3, 0XE6);
    // 0x8002E438: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x8002E43C: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x8002E440: sh          $t6, 0x98($t8)
    MEM_H(0X98, ctx->r24) = ctx->r14;
    // 0x8002E444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E44C: jr          $ra
    // 0x8002E450: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E450: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E454: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E458: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E45C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E460: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002E464: jal         0x8002C300
    // 0x8002E468: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002E468: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E46C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E470: jal         0x8002C1B8
    // 0x8002E474: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002E474: nop

    after_1:
    // 0x8002E478: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E47C: nop

    // 0x8002E480: sh          $v0, 0x1E($t6)
    MEM_H(0X1E, ctx->r14) = ctx->r2;
    // 0x8002E484: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E488: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E48C: jr          $ra
    // 0x8002E490: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E490: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E494: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E498: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E49C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E4A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002E4A4: jal         0x8002C300
    // 0x8002E4A8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002E4A8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E4AC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E4B0: jal         0x8002C1B8
    // 0x8002E4B4: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002E4B4: nop

    after_1:
    // 0x8002E4B8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002E4BC: addiu       $v1, $v1, -0x750
    ctx->r3 = ADD32(ctx->r3, -0X750);
    // 0x8002E4C0: lh          $t6, 0xE6($v1)
    ctx->r14 = MEM_H(ctx->r3, 0XE6);
    // 0x8002E4C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E4C8: multu       $v0, $t6
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002E4CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002E4D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E4D4: mflo        $t7
    ctx->r15 = lo;
    // 0x8002E4D8: sh          $t7, 0xE6($v1)
    MEM_H(0XE6, ctx->r3) = ctx->r15;
    // 0x8002E4DC: jr          $ra
    // 0x8002E4E0: nop

    return;
    // 0x8002E4E0: nop

;}
RECOMP_FUNC void func_8002E4E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E4E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E4E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E4EC: jal         0x8002CF08
    // 0x8002E4F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002CF08(rdram, ctx);
        goto after_0;
    // 0x8002E4F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002E4F4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E4F8: bne         $v0, $zero, L_8002E510
    if (ctx->r2 != 0) {
        // 0x8002E4FC: nop
    
            goto L_8002E510;
    }
    // 0x8002E4FC: nop

    // 0x8002E500: jal         0x8002CD50
    // 0x8002E504: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002CD50(rdram, ctx);
        goto after_1;
    // 0x8002E504: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x8002E508: b           L_8002E51C
    // 0x8002E50C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002E51C;
    // 0x8002E50C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002E510:
    // 0x8002E510: jal         0x8002C288
    // 0x8002E514: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C288(rdram, ctx);
        goto after_2;
    // 0x8002E514: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x8002E518: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002E51C:
    // 0x8002E51C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E524: jr          $ra
    // 0x8002E528: nop

    return;
    // 0x8002E528: nop

;}
RECOMP_FUNC void func_8002E52C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E52C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E530: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E534: jal         0x8002CF08
    // 0x8002E538: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002CF08(rdram, ctx);
        goto after_0;
    // 0x8002E538: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002E53C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E540: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002E544: bne         $v0, $at, L_8002E55C
    if (ctx->r2 != ctx->r1) {
        // 0x8002E548: nop
    
            goto L_8002E55C;
    }
    // 0x8002E548: nop

    // 0x8002E54C: jal         0x8002CD50
    // 0x8002E550: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002CD50(rdram, ctx);
        goto after_1;
    // 0x8002E550: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x8002E554: b           L_8002E568
    // 0x8002E558: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002E568;
    // 0x8002E558: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002E55C:
    // 0x8002E55C: jal         0x8002C288
    // 0x8002E560: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C288(rdram, ctx);
        goto after_2;
    // 0x8002E560: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x8002E564: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002E568:
    // 0x8002E568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E56C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E570: jr          $ra
    // 0x8002E574: nop

    return;
    // 0x8002E574: nop

;}
RECOMP_FUNC void func_8002E578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E578: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E57C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E580: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E584: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002E588: jal         0x8002C300
    // 0x8002E58C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002E58C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E590: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E594: jal         0x8002C1B8
    // 0x8002E598: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002E598: nop

    after_1:
    // 0x8002E59C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002E5A0: lh          $t6, -0x66A($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X66A);
    // 0x8002E5A4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E5A8: and         $t7, $t6, $v0
    ctx->r15 = ctx->r14 & ctx->r2;
    // 0x8002E5AC: beq         $t7, $zero, L_8002E5C4
    if (ctx->r15 == 0) {
        // 0x8002E5B0: nop
    
            goto L_8002E5C4;
    }
    // 0x8002E5B0: nop

    // 0x8002E5B4: jal         0x8002CD50
    // 0x8002E5B8: nop

    func_8002CD50(rdram, ctx);
        goto after_2;
    // 0x8002E5B8: nop

    after_2:
    // 0x8002E5BC: b           L_8002E5D0
    // 0x8002E5C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002E5D0;
    // 0x8002E5C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002E5C4:
    // 0x8002E5C4: jal         0x8002C288
    // 0x8002E5C8: nop

    func_8002C288(rdram, ctx);
        goto after_3;
    // 0x8002E5C8: nop

    after_3:
    // 0x8002E5CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002E5D0:
    // 0x8002E5D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E5D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E5D8: jr          $ra
    // 0x8002E5DC: nop

    return;
    // 0x8002E5DC: nop

;}
RECOMP_FUNC void func_8002E5E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E5E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E5E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E5E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E5EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002E5F0: jal         0x8002C300
    // 0x8002E5F4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002E5F4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E5F8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E5FC: jal         0x8002C1B8
    // 0x8002E600: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002E600: nop

    after_1:
    // 0x8002E604: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002E608: lh          $t6, -0x66A($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X66A);
    // 0x8002E60C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E610: and         $t7, $t6, $v0
    ctx->r15 = ctx->r14 & ctx->r2;
    // 0x8002E614: beq         $t7, $zero, L_8002E62C
    if (ctx->r15 == 0) {
        // 0x8002E618: nop
    
            goto L_8002E62C;
    }
    // 0x8002E618: nop

    // 0x8002E61C: jal         0x8002C288
    // 0x8002E620: nop

    func_8002C288(rdram, ctx);
        goto after_2;
    // 0x8002E620: nop

    after_2:
    // 0x8002E624: b           L_8002E638
    // 0x8002E628: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002E638;
    // 0x8002E628: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002E62C:
    // 0x8002E62C: jal         0x8002CD50
    // 0x8002E630: nop

    func_8002CD50(rdram, ctx);
        goto after_3;
    // 0x8002E630: nop

    after_3:
    // 0x8002E634: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002E638:
    // 0x8002E638: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E63C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E640: jr          $ra
    // 0x8002E644: nop

    return;
    // 0x8002E644: nop

;}
RECOMP_FUNC void func_8002E648(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E648: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E64C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E650: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E654: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002E658: jal         0x8002C300
    // 0x8002E65C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002E65C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E660: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E664: jal         0x8002C1B8
    // 0x8002E668: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002E668: nop

    after_1:
    // 0x8002E66C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002E670: lh          $t6, -0x66A($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X66A);
    // 0x8002E674: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E678: beq         $v0, $t6, L_8002E690
    if (ctx->r2 == ctx->r14) {
        // 0x8002E67C: nop
    
            goto L_8002E690;
    }
    // 0x8002E67C: nop

    // 0x8002E680: jal         0x8002CD50
    // 0x8002E684: nop

    func_8002CD50(rdram, ctx);
        goto after_2;
    // 0x8002E684: nop

    after_2:
    // 0x8002E688: b           L_8002E69C
    // 0x8002E68C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002E69C;
    // 0x8002E68C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002E690:
    // 0x8002E690: jal         0x8002C288
    // 0x8002E694: nop

    func_8002C288(rdram, ctx);
        goto after_3;
    // 0x8002E694: nop

    after_3:
    // 0x8002E698: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002E69C:
    // 0x8002E69C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E6A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E6A4: jr          $ra
    // 0x8002E6A8: nop

    return;
    // 0x8002E6A8: nop

;}
RECOMP_FUNC void func_8002E6AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E6AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E6B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E6B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E6B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002E6BC: jal         0x8002C300
    // 0x8002E6C0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002E6C0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E6C4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E6C8: jal         0x8002C1B8
    // 0x8002E6CC: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002E6CC: nop

    after_1:
    // 0x8002E6D0: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002E6D4: lh          $t6, -0x66A($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X66A);
    // 0x8002E6D8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E6DC: bne         $v0, $t6, L_8002E6F4
    if (ctx->r2 != ctx->r14) {
        // 0x8002E6E0: nop
    
            goto L_8002E6F4;
    }
    // 0x8002E6E0: nop

    // 0x8002E6E4: jal         0x8002CD50
    // 0x8002E6E8: nop

    func_8002CD50(rdram, ctx);
        goto after_2;
    // 0x8002E6E8: nop

    after_2:
    // 0x8002E6EC: b           L_8002E700
    // 0x8002E6F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002E700;
    // 0x8002E6F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002E6F4:
    // 0x8002E6F4: jal         0x8002C288
    // 0x8002E6F8: nop

    func_8002C288(rdram, ctx);
        goto after_3;
    // 0x8002E6F8: nop

    after_3:
    // 0x8002E6FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002E700:
    // 0x8002E700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E708: jr          $ra
    // 0x8002E70C: nop

    return;
    // 0x8002E70C: nop

;}
RECOMP_FUNC void func_8002E710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E710: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8002E714: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8002E718: jr          $ra
    // 0x8002E71C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E71C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E720: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8002E724: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8002E728: jr          $ra
    // 0x8002E72C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E72C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E730: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E738: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E73C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002E740: jal         0x8002C300
    // 0x8002E744: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002E744: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E748: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E74C: jal         0x8002C1B8
    // 0x8002E750: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002E750: nop

    after_1:
    // 0x8002E754: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002E758: lh          $t6, -0x66A($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X66A);
    // 0x8002E75C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E760: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8002E764: beq         $at, $zero, L_8002E77C
    if (ctx->r1 == 0) {
        // 0x8002E768: nop
    
            goto L_8002E77C;
    }
    // 0x8002E768: nop

    // 0x8002E76C: jal         0x8002CD50
    // 0x8002E770: nop

    func_8002CD50(rdram, ctx);
        goto after_2;
    // 0x8002E770: nop

    after_2:
    // 0x8002E774: b           L_8002E788
    // 0x8002E778: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002E788;
    // 0x8002E778: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002E77C:
    // 0x8002E77C: jal         0x8002C288
    // 0x8002E780: nop

    func_8002C288(rdram, ctx);
        goto after_3;
    // 0x8002E780: nop

    after_3:
    // 0x8002E784: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002E788:
    // 0x8002E788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E78C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E790: jr          $ra
    // 0x8002E794: nop

    return;
    // 0x8002E794: nop

;}
