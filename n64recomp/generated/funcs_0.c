#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void recomp_entrypoint(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000400: lui         $t0, 0x800E
    ctx->r8 = S32(0X800E << 16);
    // 0x80000404: lui         $t1, 0xD
    ctx->r9 = S32(0XD << 16);
    // 0x80000408: addiu       $t0, $t0, -0x3770
    ctx->r8 = ADD32(ctx->r8, -0X3770);
    // 0x8000040C: ori         $t1, $t1, 0xD4E0
    ctx->r9 = ctx->r9 | 0XD4E0;
L_80000410:
    // 0x80000410: addi        $t1, $t1, -0x8
    ctx->r9 = ADD32(ctx->r9, -0X8);
    // 0x80000414: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x80000418: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8000041C: bne         $t1, $zero, L_80000410
    if (ctx->r9 != 0) {
        // 0x80000420: addi        $t0, $t0, 0x8
        ctx->r8 = ADD32(ctx->r8, 0X8);
            goto L_80000410;
    }
    // 0x80000420: addi        $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x80000424: lui         $t2, 0x8002
    ctx->r10 = S32(0X8002 << 16);
    // 0x80000428: lui         $sp, 0x801A
    ctx->r29 = S32(0X801A << 16);
    // 0x8000042C: addiu       $t2, $t2, -0x5F90
    ctx->r10 = ADD32(ctx->r10, -0X5F90);
    // 0x80000430: jr          $t2
    // 0x80000434: addiu       $sp, $sp, -0x1B28
    ctx->r29 = ADD32(ctx->r29, -0X1B28);
    LOOKUP_FUNC(ctx->r10)(rdram, ctx);
    return;
    // 0x80000434: addiu       $sp, $sp, -0x1B28
    ctx->r29 = ADD32(ctx->r29, -0X1B28);
    // 0x80000438: nop

    // 0x8000043C: nop

    // 0x80000440: nop

    // 0x80000444: nop

    // 0x80000448: nop

    // 0x8000044C: nop

;}
RECOMP_FUNC void func_80000450(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000450: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000454: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000458: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x8000045C: nop

    // 0x80000460: beq         $v0, $zero, L_80000490
    if (ctx->r2 == 0) {
        // 0x80000464: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80000490;
    }
    // 0x80000464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000468: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000046C: addiu       $a0, $v0, 0x10
    ctx->r4 = ADD32(ctx->r2, 0X10);
    // 0x80000470: swc1        $f4, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f4.u32l;
    // 0x80000474: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    // 0x80000478: nop

    // 0x8000047C: sh          $t6, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r14;
    // 0x80000480: lhu         $t7, 0x2($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X2);
    // 0x80000484: jal         0x8000049C
    // 0x80000488: sh          $t7, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r15;
    func_8000049C(rdram, ctx);
        goto after_0;
    // 0x80000488: sh          $t7, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r15;
    after_0:
    // 0x8000048C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80000490:
    // 0x80000490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000494: jr          $ra
    // 0x80000498: nop

    return;
    // 0x80000498: nop

;}
RECOMP_FUNC void func_8000049C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000049C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800004A0: nop

    // 0x800004A4: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x800004A8: jr          $ra
    // 0x800004AC: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    return;
    // 0x800004AC: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
;}
RECOMP_FUNC void func_800004B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800004B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800004B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800004B8: lhu         $t6, 0x2($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X2);
    // 0x800004BC: nop

    // 0x800004C0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800004C4: jal         0x8000049C
    // 0x800004C8: sh          $t7, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r15;
    func_8000049C(rdram, ctx);
        goto after_0;
    // 0x800004C8: sh          $t7, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r15;
    after_0:
    // 0x800004CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800004D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800004D4: jr          $ra
    // 0x800004D8: nop

    return;
    // 0x800004D8: nop

;}
RECOMP_FUNC void func_800004DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800004DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800004E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800004E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800004E8: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x800004EC: jal         0x8000385C
    // 0x800004F0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8000385C(rdram, ctx);
        goto after_0;
    // 0x800004F0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x800004F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800004F8: lhu         $v0, 0x4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4);
    // 0x800004FC: jr          $ra
    // 0x80000500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80000500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80000504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000504: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000508: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8000050C: addiu       $v0, $v0, 0x1E44
    ctx->r2 = ADD32(ctx->r2, 0X1E44);
    // 0x80000510: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80000514: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80000518: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000051C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80000520: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80000524: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80000528: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8000052C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80000530: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80000534: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    // 0x80000538: lw          $t6, 0x1E48($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1E48);
    // 0x8000053C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80000540: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80000544: lwc1        $f10, 0x8($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80000548: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8000054C: bgez        $t7, L_80000560
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80000550: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_80000560;
    }
    // 0x80000550: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80000554: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80000558: nop

    // 0x8000055C: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_80000560:
    // 0x80000560: c.le.s      $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f18.fl <= ctx->f10.fl;
    // 0x80000564: nop

    // 0x80000568: bc1f        L_8000057C
    if (!c1cs) {
        // 0x8000056C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8000057C;
    }
    // 0x8000056C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000570: jal         0x800004B0
    // 0x80000574: nop

    func_800004B0(rdram, ctx);
        goto after_0;
    // 0x80000574: nop

    after_0:
    // 0x80000578: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8000057C:
    // 0x8000057C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000580: jr          $ra
    // 0x80000584: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80000584: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80000588(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000588: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8000058C: addiu       $v1, $v1, 0x1E48
    ctx->r3 = ADD32(ctx->r3, 0X1E48);
    // 0x80000590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000594: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80000598: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000059C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800005A0: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x800005A4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800005A8: addiu       $v0, $v0, 0x1E40
    ctx->r2 = ADD32(ctx->r2, 0X1E40);
    // 0x800005AC: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x800005B0: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x800005B4: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x800005B8: srl         $t9, $t8, 16
    ctx->r25 = S32(U32(ctx->r24) >> 16);
    // 0x800005BC: sh          $t9, 0x1C($t0)
    MEM_H(0X1C, ctx->r8) = ctx->r25;
    // 0x800005C0: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x800005C4: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x800005C8: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x800005CC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800005D0: sh          $t3, 0x1E($t4)
    MEM_H(0X1E, ctx->r12) = ctx->r11;
    // 0x800005D4: lw          $a0, 0x1E44($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1E44);
    // 0x800005D8: jal         0x800004B0
    // 0x800005DC: nop

    func_800004B0(rdram, ctx);
        goto after_0;
    // 0x800005DC: nop

    after_0:
    // 0x800005E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800005E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800005E8: jr          $ra
    // 0x800005EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800005EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_800005F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800005F0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800005F4: addiu       $v1, $v1, 0x1E48
    ctx->r3 = ADD32(ctx->r3, 0X1E48);
    // 0x800005F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800005FC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80000600: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000604: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80000608: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8000060C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80000610: addiu       $v0, $v0, 0x1E40
    ctx->r2 = ADD32(ctx->r2, 0X1E40);
    // 0x80000614: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x80000618: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8000061C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80000620: srl         $t9, $t8, 16
    ctx->r25 = S32(U32(ctx->r24) >> 16);
    // 0x80000624: sh          $t9, 0x20($t0)
    MEM_H(0X20, ctx->r8) = ctx->r25;
    // 0x80000628: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x8000062C: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x80000630: lw          $t3, 0x4($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X4);
    // 0x80000634: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80000638: sh          $t3, 0x22($t4)
    MEM_H(0X22, ctx->r12) = ctx->r11;
    // 0x8000063C: lw          $a0, 0x1E44($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1E44);
    // 0x80000640: jal         0x800004B0
    // 0x80000644: nop

    func_800004B0(rdram, ctx);
        goto after_0;
    // 0x80000644: nop

    after_0:
    // 0x80000648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000064C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000650: jr          $ra
    // 0x80000654: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80000654: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80000658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000658: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000065C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80000660: lw          $v0, 0x1E48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1E48);
    // 0x80000664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000668: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8000066C: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x80000670: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x80000674: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80000678: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x8000067C: addiu       $a0, $a0, 0x1E50
    ctx->r4 = ADD32(ctx->r4, 0X1E50);
    // 0x80000680: srl         $t8, $t7, 16
    ctx->r24 = S32(U32(ctx->r15) >> 16);
    // 0x80000684: sh          $t8, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r24;
    // 0x80000688: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x8000068C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80000690: addiu       $a1, $a1, 0x1E52
    ctx->r5 = ADD32(ctx->r5, 0X1E52);
    // 0x80000694: andi        $v1, $t8, 0xFFFF
    ctx->r3 = ctx->r24 & 0XFFFF;
    // 0x80000698: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8000069C: bne         $v1, $at, L_800006C4
    if (ctx->r3 != ctx->r1) {
        // 0x800006A0: sh          $t0, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r8;
            goto L_800006C4;
    }
    // 0x800006A0: sh          $t0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r8;
    // 0x800006A4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800006A8: addiu       $v0, $v0, 0x1E44
    ctx->r2 = ADD32(ctx->r2, 0X1E44);
    // 0x800006AC: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x800006B0: nop

    // 0x800006B4: lhu         $t2, 0x0($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X0);
    // 0x800006B8: nop

    // 0x800006BC: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
    // 0x800006C0: andi        $v1, $t2, 0xFFFF
    ctx->r3 = ctx->r10 & 0XFFFF;
L_800006C4:
    // 0x800006C4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800006C8: addiu       $v0, $v0, 0x1E44
    ctx->r2 = ADD32(ctx->r2, 0X1E44);
    // 0x800006CC: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x800006D0: nop

    // 0x800006D4: sh          $v1, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r3;
    // 0x800006D8: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x800006DC: lhu         $t4, 0x0($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X0);
    // 0x800006E0: nop

    // 0x800006E4: sh          $t4, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r12;
    // 0x800006E8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800006EC: jal         0x8000049C
    // 0x800006F0: nop

    func_8000049C(rdram, ctx);
        goto after_0;
    // 0x800006F0: nop

    after_0:
    // 0x800006F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800006F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800006FC: jr          $ra
    // 0x80000700: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80000700: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80000704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000704: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000708: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8000070C: lw          $v0, 0x1E48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1E48);
    // 0x80000710: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000714: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80000718: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x8000071C: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x80000720: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80000724: srl         $t8, $t7, 16
    ctx->r24 = S32(U32(ctx->r15) >> 16);
    // 0x80000728: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8000072C: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80000730: addiu       $t1, $t0, -0x100
    ctx->r9 = ADD32(ctx->r8, -0X100);
    // 0x80000734: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80000738: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x8000073C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80000740: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80000744: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80000748: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8000074C: addiu       $v1, $v1, 0x1E54
    ctx->r3 = ADD32(ctx->r3, 0X1E54);
    // 0x80000750: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80000754: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80000758: addiu       $a0, $a0, 0x1E52
    ctx->r4 = ADD32(ctx->r4, 0X1E52);
    // 0x8000075C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80000760: addiu       $a1, $a1, 0x1E44
    ctx->r5 = ADD32(ctx->r5, 0X1E44);
    // 0x80000764: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x80000768: lwc1        $f2, 0x0($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8000076C: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x80000770: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    // 0x80000774: sh          $t3, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r11;
    // 0x80000778: bc1f        L_80000848
    if (!c1cs) {
        // 0x8000077C: nop
    
            goto L_80000848;
    }
    // 0x8000077C: nop

    // 0x80000780: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80000784: addiu       $a1, $a1, 0x1E44
    ctx->r5 = ADD32(ctx->r5, 0X1E44);
    // 0x80000788: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8000078C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80000790: lwc1        $f18, 0x4($v1)
    ctx->f18.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80000794: addiu       $a2, $a2, 0x1E40
    ctx->r6 = ADD32(ctx->r6, 0X1E40);
    // 0x80000798: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x8000079C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800007A0: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    // 0x800007A4: lw          $t5, 0x0($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X0);
    // 0x800007A8: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800007AC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800007B0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800007B4: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800007B8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x800007BC: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800007C0: lhu         $t4, 0x1E($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0X1E);
    // 0x800007C4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800007C8: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x800007CC: nop

    // 0x800007D0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800007D4: addu        $t8, $t4, $t7
    ctx->r24 = ADD32(ctx->r12, ctx->r15);
    // 0x800007D8: sh          $t8, 0x1E($v0)
    MEM_H(0X1E, ctx->r2) = ctx->r24;
    // 0x800007DC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x800007E0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800007E4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800007E8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800007EC: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x800007F0: nop

    // 0x800007F4: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800007F8: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x800007FC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80000800: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80000804: nop

    // 0x80000808: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8000080C: sub.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x80000810: swc1        $f4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f4.u32l;
    // 0x80000814: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x80000818: lhu         $t3, 0x0($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X0);
    // 0x8000081C: lhu         $t2, 0x1E($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X1E);
    // 0x80000820: nop

    // 0x80000824: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80000828: bne         $at, $zero, L_80000904
    if (ctx->r1 != 0) {
        // 0x8000082C: nop
    
            goto L_80000904;
    }
    // 0x8000082C: nop

    // 0x80000830: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x80000834: jal         0x800004B0
    // 0x80000838: nop

    func_800004B0(rdram, ctx);
        goto after_0;
    // 0x80000838: nop

    after_0:
    // 0x8000083C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80000840: b           L_80000904
    // 0x80000844: addiu       $a1, $a1, 0x1E44
    ctx->r5 = ADD32(ctx->r5, 0X1E44);
        goto L_80000904;
    // 0x80000844: addiu       $a1, $a1, 0x1E44
    ctx->r5 = ADD32(ctx->r5, 0X1E44);
L_80000848:
    // 0x80000848: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8000084C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80000850: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80000854: addiu       $a2, $a2, 0x1E40
    ctx->r6 = ADD32(ctx->r6, 0X1E40);
    // 0x80000858: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x8000085C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80000860: swc1        $f8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f8.u32l;
    // 0x80000864: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80000868: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x8000086C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80000870: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80000874: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80000878: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8000087C: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80000880: lhu         $t5, 0x1E($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X1E);
    // 0x80000884: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80000888: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8000088C: nop

    // 0x80000890: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80000894: subu        $t8, $t5, $t7
    ctx->r24 = SUB32(ctx->r13, ctx->r15);
    // 0x80000898: sh          $t8, 0x1E($v0)
    MEM_H(0X1E, ctx->r2) = ctx->r24;
    // 0x8000089C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x800008A0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800008A4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800008A8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800008AC: lwc1        $f0, 0x4($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X4);
    // 0x800008B0: nop

    // 0x800008B4: cvt.w.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = CVT_W_S(ctx->f0.fl);
    // 0x800008B8: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x800008BC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800008C0: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800008C4: nop

    // 0x800008C8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800008CC: sub.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f6.fl;
    // 0x800008D0: swc1        $f8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f8.u32l;
    // 0x800008D4: lw          $t2, 0x0($a2)
    ctx->r10 = MEM_W(ctx->r6, 0X0);
    // 0x800008D8: lhu         $t1, 0x0($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X0);
    // 0x800008DC: lhu         $t3, 0x1E($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X1E);
    // 0x800008E0: nop

    // 0x800008E4: slt         $at, $t1, $t3
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x800008E8: bne         $at, $zero, L_80000904
    if (ctx->r1 != 0) {
        // 0x800008EC: nop
    
            goto L_80000904;
    }
    // 0x800008EC: nop

    // 0x800008F0: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x800008F4: jal         0x800004B0
    // 0x800008F8: nop

    func_800004B0(rdram, ctx);
        goto after_1;
    // 0x800008F8: nop

    after_1:
    // 0x800008FC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80000900: addiu       $a1, $a1, 0x1E44
    ctx->r5 = ADD32(ctx->r5, 0X1E44);
L_80000904:
    // 0x80000904: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80000908: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000090C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80000910: lwc1        $f10, 0x8($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X8);
    // 0x80000914: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80000918: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8000091C: swc1        $f18, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f18.u32l;
    // 0x80000920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000928: jr          $ra
    // 0x8000092C: nop

    return;
    // 0x8000092C: nop

;}
RECOMP_FUNC void func_80000930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000930: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80000934: lw          $t6, 0x1E48($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1E48);
    // 0x80000938: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8000093C: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80000940: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80000944: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80000948: jr          $ra
    // 0x8000094C: sw          $t7, 0x1E4C($at)
    MEM_W(0X1E4C, ctx->r1) = ctx->r15;
    return;
    // 0x8000094C: sw          $t7, 0x1E4C($at)
    MEM_W(0X1E4C, ctx->r1) = ctx->r15;
;}
RECOMP_FUNC void func_80000950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000950: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80000954: lw          $t6, 0x1E48($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1E48);
    // 0x80000958: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8000095C: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80000960: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80000964: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80000968: jr          $ra
    // 0x8000096C: sw          $t7, 0x1E4C($at)
    MEM_W(0X1E4C, ctx->r1) = ctx->r15;
    return;
    // 0x8000096C: sw          $t7, 0x1E4C($at)
    MEM_W(0X1E4C, ctx->r1) = ctx->r15;
;}
RECOMP_FUNC void func_80000970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000970: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000974: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80000978: lw          $t6, 0x1E48($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1E48);
    // 0x8000097C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000980: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80000984: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80000988: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8000098C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80000990: bgez        $t7, L_800009A4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80000994: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800009A4;
    }
    // 0x80000994: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80000998: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000099C: nop

    // 0x800009A0: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_800009A4:
    // 0x800009A4: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x800009A8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800009AC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800009B0: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x800009B4: lw          $t8, 0x1E40($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1E40);
    // 0x800009B8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800009BC: swc1        $f16, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f16.u32l;
    // 0x800009C0: lw          $a0, 0x1E44($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1E44);
    // 0x800009C4: jal         0x800004B0
    // 0x800009C8: nop

    func_800004B0(rdram, ctx);
        goto after_0;
    // 0x800009C8: nop

    after_0:
    // 0x800009CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800009D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800009D4: jr          $ra
    // 0x800009D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800009D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_800009DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800009DC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800009E0: addiu       $v1, $v1, 0x1E48
    ctx->r3 = ADD32(ctx->r3, 0X1E48);
    // 0x800009E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800009E8: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x800009EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800009F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800009F4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800009F8: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x800009FC: addiu       $v0, $v0, 0x1E44
    ctx->r2 = ADD32(ctx->r2, 0X1E44);
    // 0x80000A00: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80000A04: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80000A08: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80000A0C: bgez        $t8, L_80000A24
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80000A10: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80000A24;
    }
    // 0x80000A10: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80000A14: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80000A18: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80000A1C: nop

    // 0x80000A20: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80000A24:
    // 0x80000A24: nop

    // 0x80000A28: div.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80000A2C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80000A30: lw          $t9, 0x1E40($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1E40);
    // 0x80000A34: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80000A38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80000A3C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80000A40: swc1        $f16, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f16.u32l;
    // 0x80000A44: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80000A48: nop

    // 0x80000A4C: lwc1        $f18, 0x8($a0)
    ctx->f18.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80000A50: nop

    // 0x80000A54: add.s       $f10, $f18, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x80000A58: swc1        $f10, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f10.u32l;
    // 0x80000A5C: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x80000A60: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80000A64: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x80000A68: lwc1        $f4, 0x8($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80000A6C: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80000A70: bgez        $t1, L_80000A84
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80000A74: cvt.s.w     $f16, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80000A84;
    }
    // 0x80000A74: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80000A78: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80000A7C: nop

    // 0x80000A80: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_80000A84:
    // 0x80000A84: c.le.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl <= ctx->f4.fl;
    // 0x80000A88: nop

    // 0x80000A8C: bc1f        L_80000AA0
    if (!c1cs) {
        // 0x80000A90: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80000AA0;
    }
    // 0x80000A90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000A94: jal         0x800004B0
    // 0x80000A98: nop

    func_800004B0(rdram, ctx);
        goto after_0;
    // 0x80000A98: nop

    after_0:
    // 0x80000A9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80000AA0:
    // 0x80000AA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000AA4: jr          $ra
    // 0x80000AA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80000AA8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80000AAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000AAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000AB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000AB4: jal         0x80000588
    // 0x80000AB8: nop

    func_80000588(rdram, ctx);
        goto after_0;
    // 0x80000AB8: nop

    after_0:
    // 0x80000ABC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000AC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000AC4: jr          $ra
    // 0x80000AC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80000AC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80000ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000ACC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000AD0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80000AD4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80000AD8: lw          $t7, 0x1E48($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1E48);
    // 0x80000ADC: lw          $v0, 0x1E40($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1E40);
    // 0x80000AE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000AE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80000AE8: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x80000AEC: lhu         $t6, 0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2);
    // 0x80000AF0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80000AF4: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80000AF8: sh          $t9, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r25;
    // 0x80000AFC: lw          $a0, 0x1E44($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1E44);
    // 0x80000B00: jal         0x800004B0
    // 0x80000B04: nop

    func_800004B0(rdram, ctx);
        goto after_0;
    // 0x80000B04: nop

    after_0:
    // 0x80000B08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000B0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000B10: jr          $ra
    // 0x80000B14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80000B14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80000B18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000B18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000B1C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80000B20: lw          $t7, 0x1E48($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1E48);
    // 0x80000B24: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80000B28: lw          $v0, 0x1E40($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1E40);
    // 0x80000B2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000B30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80000B34: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x80000B38: lhu         $t6, 0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2);
    // 0x80000B3C: nor         $t9, $t8, $zero
    ctx->r25 = ~(ctx->r24 | 0);
    // 0x80000B40: and         $t0, $t6, $t9
    ctx->r8 = ctx->r14 & ctx->r25;
    // 0x80000B44: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80000B48: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
    // 0x80000B4C: lw          $a0, 0x1E44($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1E44);
    // 0x80000B50: jal         0x800004B0
    // 0x80000B54: nop

    func_800004B0(rdram, ctx);
        goto after_0;
    // 0x80000B54: nop

    after_0:
    // 0x80000B58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000B5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000B60: jr          $ra
    // 0x80000B64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80000B64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80000B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000B68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000B6C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80000B70: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80000B74: lw          $t7, 0x1E48($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1E48);
    // 0x80000B78: lw          $v0, 0x1E40($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1E40);
    // 0x80000B7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000B80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80000B84: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x80000B88: lhu         $t6, 0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2);
    // 0x80000B8C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80000B90: xor         $t9, $t6, $t8
    ctx->r25 = ctx->r14 ^ ctx->r24;
    // 0x80000B94: sh          $t9, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r25;
    // 0x80000B98: lw          $a0, 0x1E44($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1E44);
    // 0x80000B9C: jal         0x800004B0
    // 0x80000BA0: nop

    func_800004B0(rdram, ctx);
        goto after_0;
    // 0x80000BA0: nop

    after_0:
    // 0x80000BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000BA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000BAC: jr          $ra
    // 0x80000BB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80000BB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80000BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000BB4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80000BB8: addiu       $a3, $a3, 0x1E40
    ctx->r7 = ADD32(ctx->r7, 0X1E40);
    // 0x80000BBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000BC0: lw          $t6, 0x0($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X0);
    // 0x80000BC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000BC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80000BCC: lhu         $a0, 0x20($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X20);
    // 0x80000BD0: jal         0x800004DC
    // 0x80000BD4: nop

    func_800004DC(rdram, ctx);
        goto after_0;
    // 0x80000BD4: nop

    after_0:
    // 0x80000BD8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80000BDC: lw          $t7, 0x1E48($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1E48);
    // 0x80000BE0: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x80000BE4: lw          $a1, 0x4($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X4);
    // 0x80000BE8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80000BEC: and         $t8, $a1, $at
    ctx->r24 = ctx->r5 & ctx->r1;
    // 0x80000BF0: srl         $t9, $t8, 16
    ctx->r25 = S32(U32(ctx->r24) >> 16);
    // 0x80000BF4: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x80000BF8: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80000BFC: addiu       $t2, $t1, -0x100
    ctx->r10 = ADD32(ctx->r9, -0X100);
;}
RECOMP_FUNC void func_80000D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000D60: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80000D64: jr          $ra
    // 0x80000D68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80000D68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80000D6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000D6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000D70: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80000D74: lw          $t6, 0x1E48($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1E48);
    // 0x80000D78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000D7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80000D80: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80000D84: lw          $t8, 0x1E40($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X1E40);
    // 0x80000D88: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80000D8C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80000D90: sh          $t7, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r15;
    // 0x80000D94: lw          $a0, 0x1E44($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1E44);
    // 0x80000D98: jal         0x800004B0
    // 0x80000D9C: nop

    func_800004B0(rdram, ctx);
        goto after_0;
    // 0x80000D9C: nop

    after_0:
    // 0x80000DA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80000DA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80000DA8: jr          $ra
    // 0x80000DAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80000DAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80000DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000DB0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80000DB4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80000DB8: lw          $v0, 0x1E48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1E48);
    // 0x80000DBC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80000DC0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80000DC4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80000DC8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80000DCC: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80000DD0: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80000DD4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80000DD8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80000DDC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80000DE0: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x80000DE4: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x80000DE8: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80000DEC: srl         $t8, $t7, 16
    ctx->r24 = S32(U32(ctx->r15) >> 16);
    // 0x80000DF0: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80000DF4: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80000DF8: addiu       $t1, $t0, -0x100
    ctx->r9 = ADD32(ctx->r8, -0X100);
    // 0x80000DFC: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80000E00: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x80000E04: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80000E08: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80000E0C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80000E10: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80000E14: addiu       $v1, $v1, 0x1E54
    ctx->r3 = ADD32(ctx->r3, 0X1E54);
    // 0x80000E18: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80000E1C: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x80000E20: addiu       $s2, $s2, 0x1E52
    ctx->r18 = ADD32(ctx->r18, 0X1E52);
    // 0x80000E24: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x80000E28: addiu       $s1, $s1, 0x1E44
    ctx->r17 = ADD32(ctx->r17, 0X1E44);
    // 0x80000E2C: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x80000E30: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80000E34: lw          $t3, 0x4($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X4);
    // 0x80000E38: c.le.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl <= ctx->f0.fl;
    // 0x80000E3C: sh          $t3, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r11;
    // 0x80000E40: bc1f        L_80000F64
    if (!c1cs) {
        // 0x80000E44: nop
    
            goto L_80000F64;
    }
    // 0x80000E44: nop

    // 0x80000E48: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80000E4C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80000E50: lwc1        $f16, 0x4($v1)
    ctx->f16.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80000E54: addiu       $s0, $s0, 0x1E40
    ctx->r16 = ADD32(ctx->r16, 0X1E40);
    // 0x80000E58: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x80000E5C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80000E60: swc1        $f18, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f18.u32l;
    // 0x80000E64: lw          $t4, 0x0($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X0);
    // 0x80000E68: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x80000E6C: lwc1        $f4, 0x4($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80000E70: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80000E74: swc1        $f4, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f4.u32l;
    // 0x80000E78: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80000E7C: nop

    // 0x80000E80: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80000E84: nop

    // 0x80000E88: c.le.s      $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f20.fl <= ctx->f6.fl;
    // 0x80000E8C: nop

    // 0x80000E90: bc1f        L_80000F6C
    if (!c1cs) {
        // 0x80000E94: nop
    
            goto L_80000F6C;
    }
    // 0x80000E94: nop

L_80000E98:
    // 0x80000E98: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80000E9C: nop

    // 0x80000EA0: lhu         $t6, 0x20($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X20);
    // 0x80000EA4: nop

    // 0x80000EA8: sh          $t6, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = ctx->r14;
    // 0x80000EAC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80000EB0: nop

    // 0x80000EB4: lhu         $t7, 0x22($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X22);
    // 0x80000EB8: nop

    // 0x80000EBC: sh          $t7, 0x1E($v0)
    MEM_H(0X1E, ctx->r2) = ctx->r15;
    // 0x80000EC0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80000EC4: nop

    // 0x80000EC8: lhu         $t8, 0x22($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X22);
    // 0x80000ECC: nop

    // 0x80000ED0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80000ED4: sh          $t9, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r25;
    // 0x80000ED8: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80000EDC: nop

    // 0x80000EE0: lwc1        $f8, 0x4($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80000EE4: nop

    // 0x80000EE8: sub.s       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f20.fl;
    // 0x80000EEC: swc1        $f10, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f10.u32l;
    // 0x80000EF0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80000EF4: nop

    // 0x80000EF8: lwc1        $f16, 0x24($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X24);
    // 0x80000EFC: nop

    // 0x80000F00: sub.s       $f18, $f16, $f20
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f20.fl;
    // 0x80000F04: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
    // 0x80000F08: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80000F0C: lhu         $t2, 0x0($s2)
    ctx->r10 = MEM_HU(ctx->r18, 0X0);
    // 0x80000F10: lhu         $t1, 0x1E($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X1E);
    // 0x80000F14: nop

    // 0x80000F18: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80000F1C: bne         $at, $zero, L_80000F3C
    if (ctx->r1 != 0) {
        // 0x80000F20: nop
    
            goto L_80000F3C;
    }
    // 0x80000F20: nop

    // 0x80000F24: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80000F28: jal         0x800004B0
    // 0x80000F2C: nop

    func_800004B0(rdram, ctx);
        goto after_0;
    // 0x80000F2C: nop

    after_0:
    // 0x80000F30: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80000F34: nop

    // 0x80000F38: swc1        $f22, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f22.u32l;
L_80000F3C:
    // 0x80000F3C: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80000F40: nop

    // 0x80000F44: lwc1        $f4, 0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80000F48: nop

    // 0x80000F4C: c.le.s      $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f20.fl <= ctx->f4.fl;
    // 0x80000F50: nop

    // 0x80000F54: bc1t        L_80000E98
    if (c1cs) {
        // 0x80000F58: nop
    
            goto L_80000E98;
    }
    // 0x80000F58: nop

    // 0x80000F5C: b           L_80000F70
    // 0x80000F60: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
        goto L_80000F70;
    // 0x80000F60: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
L_80000F64:
    // 0x80000F64: b           L_80000F7C
    // 0x80000F68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80000F7C;
    // 0x80000F68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80000F6C:
    // 0x80000F6C: lwc1        $f6, 0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X8);
L_80000F70:
    // 0x80000F70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80000F74: add.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f20.fl;
    // 0x80000F78: swc1        $f8, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->f8.u32l;
L_80000F7C:
    // 0x80000F7C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80000F80: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80000F84: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80000F88: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80000F8C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80000F90: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80000F94: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80000F98: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80000F9C: jr          $ra
    // 0x80000FA0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80000FA0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80000FA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000FA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80000FA8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80000FAC: lw          $v0, 0x1E48($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1E48);
    // 0x80000FB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80000FB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80000FB8: lw          $t6, 0x4($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X4);
    // 0x80000FBC: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x80000FC0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80000FC4: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80000FC8: addiu       $v1, $v1, 0x1E50
    ctx->r3 = ADD32(ctx->r3, 0X1E50);
    // 0x80000FCC: srl         $t8, $t7, 16
    ctx->r24 = S32(U32(ctx->r15) >> 16);
    // 0x80000FD0: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
    // 0x80000FD4: lw          $t0, 0x4($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X4);
    // 0x80000FD8: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80000FDC: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x80000FE0: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80000FE4: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80000FE8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80000FEC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80000FF0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80000FF4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80000FF8: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80000FFC: addiu       $v0, $v0, 0x1E44
    ctx->r2 = ADD32(ctx->r2, 0X1E44);
    // 0x80001000: swc1        $f10, 0x1E54($at)
    MEM_W(0X1E54, ctx->r1) = ctx->f10.u32l;
    // 0x80001004: lhu         $t3, 0x0($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X0);
    // 0x80001008: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8000100C: bne         $t3, $at, L_80001028
    if (ctx->r11 != ctx->r1) {
        // 0x80001010: nop
    
            goto L_80001028;
    }
    // 0x80001010: nop

    // 0x80001014: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x80001018: nop

    // 0x8000101C: lhu         $t5, 0x0($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X0);
    // 0x80001020: nop

    // 0x80001024: sh          $t5, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r13;
L_80001028:
    // 0x80001028: jal         0x8000DFE8
    // 0x8000102C: nop

    func_8000DFE8(rdram, ctx);
        goto after_0;
    // 0x8000102C: nop

    after_0:
    // 0x80001030: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80001034: lwc1        $f16, 0x1E54($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X1E54);
    // 0x80001038: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8000103C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80001040: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80001044: addiu       $v1, $v1, 0x1E50
    ctx->r3 = ADD32(ctx->r3, 0X1E50);
    // 0x80001048: bc1f        L_80001064
    if (!c1cs) {
        // 0x8000104C: addiu       $v0, $v0, 0x1E44
        ctx->r2 = ADD32(ctx->r2, 0X1E44);
            goto L_80001064;
    }
    // 0x8000104C: addiu       $v0, $v0, 0x1E44
    ctx->r2 = ADD32(ctx->r2, 0X1E44);
    // 0x80001050: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80001054: jal         0x800004B0
    // 0x80001058: nop

    func_800004B0(rdram, ctx);
        goto after_1;
    // 0x80001058: nop

    after_1:
    // 0x8000105C: b           L_80001090
    // 0x80001060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80001090;
    // 0x80001060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80001064:
    // 0x80001064: lhu         $t6, 0x0($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X0);
    // 0x80001068: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x8000106C: nop

    // 0x80001070: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x80001074: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80001078: nop

    // 0x8000107C: sh          $zero, 0x2($t8)
    MEM_H(0X2, ctx->r24) = 0;
    // 0x80001080: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80001084: jal         0x8000049C
    // 0x80001088: nop

    func_8000049C(rdram, ctx);
        goto after_2;
    // 0x80001088: nop

    after_2:
    // 0x8000108C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80001090:
    // 0x80001090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001094: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001098: jr          $ra
    // 0x8000109C: nop

    return;
    // 0x8000109C: nop

;}
RECOMP_FUNC void func_800010A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800010A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800010A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800010A8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x800010AC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x800010B0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800010B4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800010B8: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x800010BC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800010C0: addiu       $v0, $v0, 0x1E40
    ctx->r2 = ADD32(ctx->r2, 0X1E40);
    // 0x800010C4: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800010C8: bne         $v1, $zero, L_800010D8
    if (ctx->r3 != 0) {
        // 0x800010CC: sw          $v1, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r3;
            goto L_800010D8;
    }
    // 0x800010CC: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x800010D0: b           L_800011FC
    // 0x800010D4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800011FC;
    // 0x800010D4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800010D8:
    // 0x800010D8: lhu         $t7, 0x2($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X2);
    // 0x800010DC: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x800010E0: andi        $t8, $t7, 0x2000
    ctx->r24 = ctx->r15 & 0X2000;
    // 0x800010E4: beq         $t8, $zero, L_800010F4
    if (ctx->r24 == 0) {
        // 0x800010E8: nop
    
            goto L_800010F4;
    }
    // 0x800010E8: nop

    // 0x800010EC: b           L_800011FC
    // 0x800010F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800011FC;
    // 0x800010F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800010F4:
    // 0x800010F4: lw          $t9, 0x6980($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X6980);
    // 0x800010F8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x800010FC: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x80001100: beq         $at, $zero, L_80001164
    if (ctx->r1 == 0) {
        // 0x80001104: lui         $s0, 0x8012
        ctx->r16 = S32(0X8012 << 16);
            goto L_80001164;
    }
    // 0x80001104: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80001108: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x8000110C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x80001110: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x80001114: lbu         $t0, 0x7C1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X7C1);
    // 0x80001118: nop

    // 0x8000111C: beq         $t0, $zero, L_8000112C
    if (ctx->r8 == 0) {
        // 0x80001120: nop
    
            goto L_8000112C;
    }
    // 0x80001120: nop

    // 0x80001124: b           L_800011FC
    // 0x80001128: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800011FC;
    // 0x80001128: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8000112C:
    // 0x8000112C: lbu         $t1, 0x754($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X754);
    // 0x80001130: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80001134: andi        $t2, $t1, 0x2
    ctx->r10 = ctx->r9 & 0X2;
    // 0x80001138: bne         $t2, $zero, L_80001148
    if (ctx->r10 != 0) {
        // 0x8000113C: nop
    
            goto L_80001148;
    }
    // 0x8000113C: nop

    // 0x80001140: b           L_800011FC
    // 0x80001144: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800011FC;
    // 0x80001144: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80001148:
    // 0x80001148: lhu         $t3, 0xB7E($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB7E);
    // 0x8000114C: nop

    // 0x80001150: andi        $t4, $t3, 0x100
    ctx->r12 = ctx->r11 & 0X100;
    // 0x80001154: beq         $t4, $zero, L_80001168
    if (ctx->r12 == 0) {
        // 0x80001158: addiu       $t5, $v1, 0x10
        ctx->r13 = ADD32(ctx->r3, 0X10);
            goto L_80001168;
    }
    // 0x80001158: addiu       $t5, $v1, 0x10
    ctx->r13 = ADD32(ctx->r3, 0X10);
    // 0x8000115C: b           L_800011FC
    // 0x80001160: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800011FC;
    // 0x80001160: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80001164:
    // 0x80001164: addiu       $t5, $v1, 0x10
    ctx->r13 = ADD32(ctx->r3, 0X10);
L_80001168:
    // 0x80001168: addiu       $s0, $s0, 0x1E44
    ctx->r16 = ADD32(ctx->r16, 0X1E44);
    // 0x8000116C: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x80001170: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80001174: lui         $s2, 0x8009
    ctx->r18 = S32(0X8009 << 16);
    // 0x80001178: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x8000117C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x80001180: sw          $zero, 0x1E4C($at)
    MEM_W(0X1E4C, ctx->r1) = 0;
    // 0x80001184: addiu       $s1, $s1, 0x1E48
    ctx->r17 = ADD32(ctx->r17, 0X1E48);
    // 0x80001188: addiu       $s2, $s2, 0x3B30
    ctx->r18 = ADD32(ctx->r18, 0X3B30);
L_8000118C:
    // 0x8000118C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80001190: nop

    // 0x80001194: beq         $v0, $zero, L_800011E8
    if (ctx->r2 == 0) {
        // 0x80001198: nop
    
            goto L_800011E8;
    }
    // 0x80001198: nop

    // 0x8000119C: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x800011A0: jal         0x800038A0
    // 0x800011A4: nop

    func_800038A0(rdram, ctx);
        goto after_0;
    // 0x800011A4: nop

    after_0:
    // 0x800011A8: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x800011AC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800011B0: lhu         $t7, 0x2($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X2);
    // 0x800011B4: nop

    // 0x800011B8: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x800011BC: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x800011C0: sw          $t9, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r25;
    // 0x800011C4: lhu         $t1, 0x0($t9)
    ctx->r9 = MEM_HU(ctx->r25, 0X0);
    // 0x800011C8: nop

    // 0x800011CC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800011D0: addu        $t3, $s2, $t2
    ctx->r11 = ADD32(ctx->r18, ctx->r10);
    // 0x800011D4: lw          $t9, 0x0($t3)
    ctx->r25 = MEM_W(ctx->r11, 0X0);
    // 0x800011D8: nop

    // 0x800011DC: jalr        $t9
    // 0x800011E0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x800011E0: nop

    after_1:
    // 0x800011E4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_800011E8:
    // 0x800011E8: bne         $v1, $zero, L_8000118C
    if (ctx->r3 != 0) {
        // 0x800011EC: nop
    
            goto L_8000118C;
    }
    // 0x800011EC: nop

    // 0x800011F0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800011F4: lw          $v0, 0x1E4C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1E4C);
    // 0x800011F8: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
L_800011FC:
    // 0x800011FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80001200: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80001204: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80001208: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8000120C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80001210: jr          $ra
    // 0x80001214: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80001214: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80001218(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001218: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000121C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001220: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x80001224: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80001228: addiu       $v1, $v1, 0x1E40
    ctx->r3 = ADD32(ctx->r3, 0X1E40);
    // 0x8000122C: bne         $v0, $zero, L_8000123C
    if (ctx->r2 != 0) {
        // 0x80001230: sw          $v0, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->r2;
            goto L_8000123C;
    }
    // 0x80001230: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80001234: b           L_80001298
    // 0x80001238: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80001298;
    // 0x80001238: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8000123C:
    // 0x8000123C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80001240: addiu       $v1, $v1, 0x1E44
    ctx->r3 = ADD32(ctx->r3, 0X1E44);
    // 0x80001244: addiu       $t7, $v0, 0x10
    ctx->r15 = ADD32(ctx->r2, 0X10);
    // 0x80001248: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8000124C: lhu         $a0, 0x0($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X0);
    // 0x80001250: jal         0x800038A0
    // 0x80001254: nop

    func_800038A0(rdram, ctx);
        goto after_0;
    // 0x80001254: nop

    after_0:
    // 0x80001258: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8000125C: lw          $a0, 0x1E44($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1E44);
    // 0x80001260: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80001264: lhu         $t9, 0x2($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X2);
    // 0x80001268: addiu       $v1, $v1, 0x1E48
    ctx->r3 = ADD32(ctx->r3, 0X1E48);
    // 0x8000126C: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x80001270: addu        $t1, $v0, $t0
    ctx->r9 = ADD32(ctx->r2, ctx->r8);
    // 0x80001274: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x80001278: lhu         $t3, 0x0($t1)
    ctx->r11 = MEM_HU(ctx->r9, 0X0);
    // 0x8000127C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80001280: bne         $t3, $at, L_80001298
    if (ctx->r11 != ctx->r1) {
        // 0x80001284: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80001298;
    }
    // 0x80001284: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80001288: jal         0x800004B0
    // 0x8000128C: nop

    func_800004B0(rdram, ctx);
        goto after_1;
    // 0x8000128C: nop

    after_1:
    // 0x80001290: b           L_80001298
    // 0x80001294: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80001298;
    // 0x80001294: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80001298:
    // 0x80001298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000129C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800012A0: jr          $ra
    // 0x800012A4: nop

    return;
    // 0x800012A4: nop

    // 0x800012A8: nop

    // 0x800012AC: nop

;}
RECOMP_FUNC void func_800012B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800012B0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800012B4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800012B8: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x800012BC: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x800012C0: lw          $s0, 0x30($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X30);
    // 0x800012C4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800012C8: lhu         $t6, 0x2($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X2);
    // 0x800012CC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800012D0: andi        $t7, $t6, 0x18
    ctx->r15 = ctx->r14 & 0X18;
    // 0x800012D4: beq         $t7, $zero, L_80001304
    if (ctx->r15 == 0) {
        // 0x800012D8: addiu       $a0, $a0, -0x5530
        ctx->r4 = ADD32(ctx->r4, -0X5530);
            goto L_80001304;
    }
    // 0x800012D8: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x800012DC: jal         0x8000259C
    // 0x800012E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000259C(rdram, ctx);
        goto after_0;
    // 0x800012E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x800012E4: beq         $v0, $zero, L_800014EC
    if (ctx->r2 == 0) {
        // 0x800012E8: lui         $v0, 0x801B
        ctx->r2 = S32(0X801B << 16);
            goto L_800014EC;
    }
    // 0x800012E8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800012EC: addiu       $v0, $v0, 0x361E
    ctx->r2 = ADD32(ctx->r2, 0X361E);
    // 0x800012F0: lhu         $t8, 0x0($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X0);
    // 0x800012F4: nop

    // 0x800012F8: ori         $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 | 0X4000;
    // 0x800012FC: b           L_800014EC
    // 0x80001300: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
        goto L_800014EC;
    // 0x80001300: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
L_80001304:
    // 0x80001304: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80001308: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8000130C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80001310: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80001314: lui         $t3, 0xE700
    ctx->r11 = S32(0XE700 << 16);
    // 0x80001318: addiu       $t2, $t2, -0x1528
    ctx->r10 = ADD32(ctx->r10, -0X1528);
    // 0x8000131C: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80001320: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80001324: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x80001328: lui         $t4, 0xB900
    ctx->r12 = S32(0XB900 << 16);
    // 0x8000132C: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80001330: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
    // 0x80001334: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80001338: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x8000133C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80001340: lui         $t5, 0x55
    ctx->r13 = S32(0X55 << 16);
    // 0x80001344: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80001348: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x8000134C: ori         $t5, $t5, 0x3078
    ctx->r13 = ctx->r13 | 0X3078;
    // 0x80001350: ori         $t4, $t4, 0x31D
    ctx->r12 = ctx->r12 | 0X31D;
    // 0x80001354: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80001358: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x8000135C: lw          $v1, 0x0($t2)
    ctx->r3 = MEM_W(ctx->r10, 0X0);
    // 0x80001360: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80001364: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80001368: sw          $t9, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r25;
    // 0x8000136C: sw          $t5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r13;
    // 0x80001370: jal         0x80013BD4
    // 0x80001374: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    func_80013BD4(rdram, ctx);
        goto after_1;
    // 0x80001374: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    after_1:
    // 0x80001378: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8000137C: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x80001380: jal         0x80013AC8
    // 0x80001384: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80013AC8(rdram, ctx);
        goto after_2;
    // 0x80001384: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x80001388: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8000138C: addiu       $a0, $a0, -0x1528
    ctx->r4 = ADD32(ctx->r4, -0X1528);
    // 0x80001390: jal         0x80013BD4
    // 0x80001394: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80013BD4(rdram, ctx);
        goto after_3;
    // 0x80001394: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x80001398: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8000139C: addiu       $a0, $a0, -0x1528
    ctx->r4 = ADD32(ctx->r4, -0X1528);
    // 0x800013A0: jal         0x80013D14
    // 0x800013A4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80013D14(rdram, ctx);
        goto after_4;
    // 0x800013A4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x800013A8: jal         0x80003768
    // 0x800013AC: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_80003768(rdram, ctx);
        goto after_5;
    // 0x800013AC: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_5:
    // 0x800013B0: lhu         $t6, 0x3C($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X3C);
    // 0x800013B4: sw          $v0, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r2;
    // 0x800013B8: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x800013BC: beq         $t7, $zero, L_800013D0
    if (ctx->r15 == 0) {
        // 0x800013C0: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_800013D0;
    }
    // 0x800013C0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800013C4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800013C8: b           L_800013DC
    // 0x800013CC: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
        goto L_800013DC;
    // 0x800013CC: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
L_800013D0:
    // 0x800013D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800013D4: nop

    // 0x800013D8: lw          $t8, 0x8($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X8);
L_800013DC:
    // 0x800013DC: nop

    // 0x800013E0: beq         $t8, $zero, L_800014F0
    if (ctx->r24 == 0) {
        // 0x800013E4: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_800014F0;
    }
    // 0x800013E4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800013E8: jal         0x800049AC
    // 0x800013EC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    func_800049AC(rdram, ctx);
        goto after_6;
    // 0x800013EC: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    after_6:
    // 0x800013F0: lwc1        $f0, 0x30($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800013F4: beq         $v0, $zero, L_80001440
    if (ctx->r2 == 0) {
        // 0x800013F8: lui         $t9, 0x800E
        ctx->r25 = S32(0X800E << 16);
            goto L_80001440;
    }
    // 0x800013F8: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x800013FC: lwc1        $f8, 0x1C($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x80001400: lwc1        $f4, 0x48($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X48);
    // 0x80001404: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80001408: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x8000140C: lw          $a3, 0x18($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X18);
    // 0x80001410: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80001414: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x80001418: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x8000141C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80001420: lwc1        $f16, 0x40($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X40);
    // 0x80001424: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80001428: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x8000142C: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
    // 0x80001430: jal         0x8007F870
    // 0x80001434: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_8007F870(rdram, ctx);
        goto after_7;
    // 0x80001434: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x80001438: b           L_800014C0
    // 0x8000143C: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
        goto L_800014C0;
    // 0x8000143C: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
L_80001440:
    // 0x80001440: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x80001444: lui         $at, 0xFFFD
    ctx->r1 = S32(0XFFFD << 16);
    // 0x80001448: ori         $at, $at, 0x6A20
    ctx->r1 = ctx->r1 | 0X6A20;
    // 0x8000144C: subu        $t6, $s1, $t9
    ctx->r14 = SUB32(ctx->r17, ctx->r25);
    // 0x80001450: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x80001454: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x80001458: div         $zero, $t7, $at
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r1)));
    // 0x8000145C: mflo        $t8
    ctx->r24 = lo;
    // 0x80001460: slti        $at, $t8, 0x1C
    ctx->r1 = SIGNED(ctx->r24) < 0X1C ? 1 : 0;
    // 0x80001464: bne         $at, $zero, L_80001478
    if (ctx->r1 != 0) {
        // 0x80001468: nop
    
            goto L_80001478;
    }
    // 0x80001468: nop

    // 0x8000146C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80001470: nop

    // 0x80001474: swc1        $f2, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->f2.u32l;
L_80001478:
    // 0x80001478: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000147C: lwc1        $f8, 0x2B94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2B94);
    // 0x80001480: lwc1        $f4, 0x48($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X48);
    // 0x80001484: lw          $a0, 0x8($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X8);
    // 0x80001488: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8000148C: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x80001490: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80001494: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    // 0x80001498: lwc1        $f16, 0x40($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X40);
    // 0x8000149C: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x800014A0: swc1        $f16, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f16.u32l;
    // 0x800014A4: lwc1        $f18, 0x44($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X44);
    // 0x800014A8: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800014AC: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x800014B0: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x800014B4: jal         0x8007F870
    // 0x800014B8: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    func_8007F870(rdram, ctx);
        goto after_8;
    // 0x800014B8: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    after_8:
    // 0x800014BC: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
L_800014C0:
    // 0x800014C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800014C4: jal         0x800020E4
    // 0x800014C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800020E4(rdram, ctx);
        goto after_9;
    // 0x800014C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x800014CC: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x800014D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800014D4: jal         0x8000263C
    // 0x800014D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8000263C(rdram, ctx);
        goto after_10;
    // 0x800014D8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x800014DC: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x800014E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800014E4: jal         0x800078D0
    // 0x800014E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800078D0(rdram, ctx);
        goto after_11;
    // 0x800014E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
L_800014EC:
    // 0x800014EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_800014F0:
    // 0x800014F0: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x800014F4: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x800014F8: jr          $ra
    // 0x800014FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800014FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80001500(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001500: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80001504: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80001508: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8000150C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80001510: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80001514: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x80001518: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8000151C: andi        $t6, $v0, 0x7
    ctx->r14 = ctx->r2 & 0X7;
    // 0x80001520: sltiu       $at, $t6, 0x7
    ctx->r1 = ctx->r14 < 0X7 ? 1 : 0;
    // 0x80001524: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80001528: beq         $at, $zero, L_80001930
    if (ctx->r1 == 0) {
        // 0x8000152C: or          $s2, $a2, $zero
        ctx->r18 = ctx->r6 | 0;
            goto L_80001930;
    }
    // 0x8000152C: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x80001530: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80001534: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80001538: addu        $at, $at, $t7
    gpr jr_addend_80001544 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8000153C: lw          $t7, 0x2B98($at)
    ctx->r15 = ADD32(ctx->r1, 0X2B98);
    // 0x80001540: nop

    // 0x80001544: jr          $t7
    // 0x80001548: nop

    switch (jr_addend_80001544 >> 2) {
        case 0: goto L_800018B4; break;
        case 1: goto L_80001830; break;
        case 2: goto L_8000154C; break;
        case 3: goto L_800015D0; break;
        case 4: goto L_80001654; break;
        case 5: goto L_800016D8; break;
        case 6: goto L_80001790; break;
        default: switch_error(__func__, 0x80001544, 0x800D2B98);
    }
    // 0x80001548: nop

L_8000154C:
    // 0x8000154C: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x80001550: addiu       $t8, $t8, -0xC40
    ctx->r24 = ADD32(ctx->r24, -0XC40);
    // 0x80001554: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x80001558: sw          $t8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r24;
    // 0x8000155C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80001560: jal         0x80002140
    // 0x80001564: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80002140(rdram, ctx);
        goto after_0;
    // 0x80001564: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x80001568: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x8000156C: addiu       $s0, $s0, -0x5530
    ctx->r16 = ADD32(ctx->r16, -0X5530);
    // 0x80001570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001574: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001578: jal         0x801E1300
    // 0x8000157C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E1300)(rdram, ctx);
        goto after_1;
    // 0x8000157C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_1:
    // 0x80001580: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001584: addiu       $a3, $a3, -0xDD0
    ctx->r7 = ADD32(ctx->r7, -0XDD0);
    // 0x80001588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8000158C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001590: jal         0x801E35C0
    // 0x80001594: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E35C0)(rdram, ctx);
        goto after_2;
    // 0x80001594: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x80001598: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x8000159C: addiu       $s0, $s0, -0x1528
    ctx->r16 = ADD32(ctx->r16, -0X1528);
    // 0x800015A0: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x800015A4: addiu       $a3, $a3, -0xE20
    ctx->r7 = ADD32(ctx->r7, -0XE20);
    // 0x800015A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800015AC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800015B0: jal         0x801E33B4
    // 0x800015B4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E33B4)(rdram, ctx);
        goto after_3;
    // 0x800015B4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x800015B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800015BC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800015C0: jal         0x801E34C0
    // 0x800015C4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E34C0)(rdram, ctx);
        goto after_4;
    // 0x800015C4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x800015C8: b           L_80001934
    // 0x800015CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80001934;
    // 0x800015CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800015D0:
    // 0x800015D0: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x800015D4: addiu       $t9, $t9, -0xB88
    ctx->r25 = ADD32(ctx->r25, -0XB88);
    // 0x800015D8: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x800015DC: sw          $t9, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r25;
    // 0x800015E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800015E4: jal         0x80002140
    // 0x800015E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80002140(rdram, ctx);
        goto after_5;
    // 0x800015E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x800015EC: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800015F0: addiu       $s0, $s0, -0x5530
    ctx->r16 = ADD32(ctx->r16, -0X5530);
    // 0x800015F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800015F8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800015FC: jal         0x801E1730
    // 0x80001600: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E1730)(rdram, ctx);
        goto after_6;
    // 0x80001600: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_6:
    // 0x80001604: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001608: addiu       $a3, $a3, -0xDB8
    ctx->r7 = ADD32(ctx->r7, -0XDB8);
    // 0x8000160C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001610: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001614: jal         0x801E35C0
    // 0x80001618: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E35C0)(rdram, ctx);
        goto after_7;
    // 0x80001618: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x8000161C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80001620: addiu       $s0, $s0, -0x1528
    ctx->r16 = ADD32(ctx->r16, -0X1528);
    // 0x80001624: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001628: addiu       $a3, $a3, -0xE20
    ctx->r7 = ADD32(ctx->r7, -0XE20);
    // 0x8000162C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001630: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001634: jal         0x801E33B4
    // 0x80001638: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E33B4)(rdram, ctx);
        goto after_8;
    // 0x80001638: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x8000163C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001640: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001644: jal         0x801E34C0
    // 0x80001648: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E34C0)(rdram, ctx);
        goto after_9;
    // 0x80001648: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_9:
    // 0x8000164C: b           L_80001934
    // 0x80001650: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80001934;
    // 0x80001650: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80001654:
    // 0x80001654: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x80001658: addiu       $t0, $t0, -0xAD0
    ctx->r8 = ADD32(ctx->r8, -0XAD0);
    // 0x8000165C: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x80001660: sw          $t0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r8;
    // 0x80001664: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80001668: jal         0x80002140
    // 0x8000166C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80002140(rdram, ctx);
        goto after_10;
    // 0x8000166C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x80001670: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80001674: addiu       $s0, $s0, -0x5530
    ctx->r16 = ADD32(ctx->r16, -0X5530);
    // 0x80001678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8000167C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001680: jal         0x801E1B60
    // 0x80001684: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E1B60)(rdram, ctx);
        goto after_11;
    // 0x80001684: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_11:
    // 0x80001688: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8000168C: addiu       $a3, $a3, -0xDA0
    ctx->r7 = ADD32(ctx->r7, -0XDA0);
    // 0x80001690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001694: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001698: jal         0x801E35C0
    // 0x8000169C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E35C0)(rdram, ctx);
        goto after_12;
    // 0x8000169C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_12:
    // 0x800016A0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800016A4: addiu       $s0, $s0, -0x1528
    ctx->r16 = ADD32(ctx->r16, -0X1528);
    // 0x800016A8: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x800016AC: addiu       $a3, $a3, -0xE20
    ctx->r7 = ADD32(ctx->r7, -0XE20);
    // 0x800016B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800016B4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800016B8: jal         0x801E33B4
    // 0x800016BC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E33B4)(rdram, ctx);
        goto after_13;
    // 0x800016BC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_13:
    // 0x800016C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800016C4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800016C8: jal         0x801E34C0
    // 0x800016CC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E34C0)(rdram, ctx);
        goto after_14;
    // 0x800016CC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_14:
    // 0x800016D0: b           L_80001934
    // 0x800016D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80001934;
    // 0x800016D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800016D8:
    // 0x800016D8: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x800016DC: addiu       $t1, $t1, -0xA18
    ctx->r9 = ADD32(ctx->r9, -0XA18);
    // 0x800016E0: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x800016E4: sw          $t1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r9;
    // 0x800016E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800016EC: jal         0x80002140
    // 0x800016F0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80002140(rdram, ctx);
        goto after_15;
    // 0x800016F0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_15:
    // 0x800016F4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800016F8: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x800016FC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001700: jal         0x801E1E50
    // 0x80001704: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E1E50)(rdram, ctx);
        goto after_16;
    // 0x80001704: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_16:
    // 0x80001708: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8000170C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001710: addiu       $a3, $a3, -0xD88
    ctx->r7 = ADD32(ctx->r7, -0XD88);
    // 0x80001714: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x80001718: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8000171C: jal         0x801E38A0
    // 0x80001720: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E38A0)(rdram, ctx);
        goto after_17;
    // 0x80001720: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_17:
    // 0x80001724: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80001728: lwc1        $f4, 0x2BB4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2BB4);
    // 0x8000172C: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
    // 0x80001730: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80001734: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80001738: addiu       $s0, $s0, -0x1528
    ctx->r16 = ADD32(ctx->r16, -0X1528);
    // 0x8000173C: bc1f        L_80001764
    if (!c1cs) {
        // 0x80001740: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80001764;
    }
    // 0x80001740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001744: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80001748: addiu       $s0, $s0, -0x1528
    ctx->r16 = ADD32(ctx->r16, -0X1528);
    // 0x8000174C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001750: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001754: jal         0x801E1DBC
    // 0x80001758: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E1DBC)(rdram, ctx);
        goto after_18;
    // 0x80001758: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_18:
    // 0x8000175C: b           L_8000177C
    // 0x80001760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8000177C;
    // 0x80001760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80001764:
    // 0x80001764: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001768: addiu       $a3, $a3, -0xE20
    ctx->r7 = ADD32(ctx->r7, -0XE20);
    // 0x8000176C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001770: jal         0x801E33B4
    // 0x80001774: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E33B4)(rdram, ctx);
        goto after_19;
    // 0x80001774: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_19:
    // 0x80001778: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8000177C:
    // 0x8000177C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001780: jal         0x801E34C0
    // 0x80001784: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E34C0)(rdram, ctx);
        goto after_20;
    // 0x80001784: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_20:
    // 0x80001788: b           L_80001934
    // 0x8000178C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80001934;
    // 0x8000178C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80001790:
    // 0x80001790: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x80001794: addiu       $t2, $t2, -0x960
    ctx->r10 = ADD32(ctx->r10, -0X960);
    // 0x80001798: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x8000179C: sw          $t2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r10;
    // 0x800017A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800017A4: jal         0x80002140
    // 0x800017A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80002140(rdram, ctx);
        goto after_21;
    // 0x800017A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_21:
    // 0x800017AC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800017B0: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x800017B4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800017B8: jal         0x801E1FAC
    // 0x800017BC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E1FAC)(rdram, ctx);
        goto after_22;
    // 0x800017BC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_22:
    // 0x800017C0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800017C4: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x800017C8: addiu       $a3, $a3, -0xD80
    ctx->r7 = ADD32(ctx->r7, -0XD80);
    // 0x800017CC: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x800017D0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800017D4: jal         0x801E38A0
    // 0x800017D8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E38A0)(rdram, ctx);
        goto after_23;
    // 0x800017D8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_23:
    // 0x800017DC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800017E0: lwc1        $f8, 0x2BB8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2BB8);
    // 0x800017E4: lwc1        $f10, 0x58($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X58);
    // 0x800017E8: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800017EC: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x800017F0: addiu       $a0, $s0, -0x1528
    ctx->r4 = ADD32(ctx->r16, -0X1528);
    // 0x800017F4: bc1f        L_80001818
    if (!c1cs) {
        // 0x800017F8: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_80001818;
    }
    // 0x800017F8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800017FC: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80001800: addiu       $a0, $s0, -0x1528
    ctx->r4 = ADD32(ctx->r16, -0X1528);
    // 0x80001804: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001808: jal         0x801E1F18
    // 0x8000180C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E1F18)(rdram, ctx);
        goto after_24;
    // 0x8000180C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_24:
    // 0x80001810: b           L_80001934
    // 0x80001814: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80001934;
    // 0x80001814: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80001818:
    // 0x80001818: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8000181C: addiu       $a3, $a3, -0xE20
    ctx->r7 = ADD32(ctx->r7, -0XE20);
    // 0x80001820: jal         0x801E33B4
    // 0x80001824: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E33B4)(rdram, ctx);
        goto after_25;
    // 0x80001824: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_25:
    // 0x80001828: b           L_80001934
    // 0x8000182C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80001934;
    // 0x8000182C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80001830:
    // 0x80001830: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x80001834: addiu       $t3, $t3, -0x8A8
    ctx->r11 = ADD32(ctx->r11, -0X8A8);
    // 0x80001838: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x8000183C: sw          $t3, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r11;
    // 0x80001840: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80001844: jal         0x80002140
    // 0x80001848: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80002140(rdram, ctx);
        goto after_26;
    // 0x80001848: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_26:
    // 0x8000184C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80001850: addiu       $s0, $s0, -0x5530
    ctx->r16 = ADD32(ctx->r16, -0X5530);
    // 0x80001854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001858: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8000185C: jal         0x801E20B8
    // 0x80001860: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E20B8)(rdram, ctx);
        goto after_27;
    // 0x80001860: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_27:
    // 0x80001864: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001868: addiu       $a3, $a3, -0xD78
    ctx->r7 = ADD32(ctx->r7, -0XD78);
    // 0x8000186C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001870: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001874: jal         0x801E35C0
    // 0x80001878: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E35C0)(rdram, ctx);
        goto after_28;
    // 0x80001878: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_28:
    // 0x8000187C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80001880: addiu       $s0, $s0, -0x1528
    ctx->r16 = ADD32(ctx->r16, -0X1528);
    // 0x80001884: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001888: addiu       $a3, $a3, -0xDF8
    ctx->r7 = ADD32(ctx->r7, -0XDF8);
    // 0x8000188C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001890: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001894: jal         0x801E33B4
    // 0x80001898: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E33B4)(rdram, ctx);
        goto after_29;
    // 0x80001898: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_29:
    // 0x8000189C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800018A0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800018A4: jal         0x801E34C0
    // 0x800018A8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E34C0)(rdram, ctx);
        goto after_30;
    // 0x800018A8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_30:
    // 0x800018AC: b           L_80001934
    // 0x800018B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80001934;
    // 0x800018B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_800018B4:
    // 0x800018B4: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x800018B8: addiu       $t4, $t4, -0x7F0
    ctx->r12 = ADD32(ctx->r12, -0X7F0);
    // 0x800018BC: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x800018C0: sw          $t4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r12;
    // 0x800018C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800018C8: jal         0x80002140
    // 0x800018CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80002140(rdram, ctx);
        goto after_31;
    // 0x800018CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_31:
    // 0x800018D0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800018D4: addiu       $s0, $s0, -0x5530
    ctx->r16 = ADD32(ctx->r16, -0X5530);
    // 0x800018D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800018DC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800018E0: jal         0x801E28A4
    // 0x800018E4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E28A4)(rdram, ctx);
        goto after_32;
    // 0x800018E4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_32:
    // 0x800018E8: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x800018EC: addiu       $a3, $a3, -0xD60
    ctx->r7 = ADD32(ctx->r7, -0XD60);
    // 0x800018F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800018F4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800018F8: jal         0x801E39C0
    // 0x800018FC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E39C0)(rdram, ctx);
        goto after_33;
    // 0x800018FC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_33:
    // 0x80001900: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80001904: addiu       $s0, $s0, -0x1528
    ctx->r16 = ADD32(ctx->r16, -0X1528);
    // 0x80001908: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8000190C: addiu       $a3, $a3, -0xDF8
    ctx->r7 = ADD32(ctx->r7, -0XDF8);
    // 0x80001910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001914: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001918: jal         0x801E33B4
    // 0x8000191C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E33B4)(rdram, ctx);
        goto after_34;
    // 0x8000191C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_34:
    // 0x80001920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001924: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001928: jal         0x801E34C0
    // 0x8000192C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E34C0)(rdram, ctx);
        goto after_35;
    // 0x8000192C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_35:
L_80001930:
    // 0x80001930: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80001934:
    // 0x80001934: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80001938: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000193C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80001940: jr          $ra
    // 0x80001944: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80001944: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80001948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001948: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000194C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80001950: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80001954: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80001958: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000195C: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x80001960: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80001964: andi        $t6, $v0, 0x7
    ctx->r14 = ctx->r2 & 0X7;
    // 0x80001968: sltiu       $at, $t6, 0x7
    ctx->r1 = ctx->r14 < 0X7 ? 1 : 0;
    // 0x8000196C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80001970: beq         $at, $zero, L_80001D60
    if (ctx->r1 == 0) {
        // 0x80001974: or          $s2, $a2, $zero
        ctx->r18 = ctx->r6 | 0;
            goto L_80001D60;
    }
    // 0x80001974: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x80001978: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000197C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80001980: addu        $at, $at, $t7
    gpr jr_addend_8000198C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80001984: lw          $t7, 0x2BBC($at)
    ctx->r15 = ADD32(ctx->r1, 0X2BBC);
    // 0x80001988: nop

    // 0x8000198C: jr          $t7
    // 0x80001990: nop

    switch (jr_addend_8000198C >> 2) {
        case 0: goto L_80001CE4; break;
        case 1: goto L_80001C60; break;
        case 2: goto L_80001994; break;
        case 3: goto L_80001A18; break;
        case 4: goto L_80001A9C; break;
        case 5: goto L_80001B20; break;
        case 6: goto L_80001BC0; break;
        default: switch_error(__func__, 0x8000198C, 0x800D2BBC);
    }
    // 0x80001990: nop

L_80001994:
    // 0x80001994: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x80001998: addiu       $t8, $t8, -0xC40
    ctx->r24 = ADD32(ctx->r24, -0XC40);
    // 0x8000199C: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x800019A0: sw          $t8, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r24;
    // 0x800019A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800019A8: jal         0x80002140
    // 0x800019AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80002140(rdram, ctx);
        goto after_0;
    // 0x800019AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_0:
    // 0x800019B0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800019B4: addiu       $s0, $s0, -0x5530
    ctx->r16 = ADD32(ctx->r16, -0X5530);
    // 0x800019B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800019BC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800019C0: jal         0x801E1300
    // 0x800019C4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E1300)(rdram, ctx);
        goto after_1;
    // 0x800019C4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_1:
    // 0x800019C8: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x800019CC: addiu       $a3, $a3, -0xD48
    ctx->r7 = ADD32(ctx->r7, -0XD48);
    // 0x800019D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800019D4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800019D8: jal         0x801E35C0
    // 0x800019DC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E35C0)(rdram, ctx);
        goto after_2;
    // 0x800019DC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_2:
    // 0x800019E0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800019E4: addiu       $s0, $s0, -0x1528
    ctx->r16 = ADD32(ctx->r16, -0X1528);
    // 0x800019E8: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x800019EC: addiu       $a3, $a3, -0xE20
    ctx->r7 = ADD32(ctx->r7, -0XE20);
    // 0x800019F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x800019F4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800019F8: jal         0x801E33B4
    // 0x800019FC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E33B4)(rdram, ctx);
        goto after_3;
    // 0x800019FC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_3:
    // 0x80001A00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001A04: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001A08: jal         0x801E34C0
    // 0x80001A0C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E34C0)(rdram, ctx);
        goto after_4;
    // 0x80001A0C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_4:
    // 0x80001A10: b           L_80001D64
    // 0x80001A14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80001D64;
    // 0x80001A14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80001A18:
    // 0x80001A18: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x80001A1C: addiu       $t9, $t9, -0xB88
    ctx->r25 = ADD32(ctx->r25, -0XB88);
    // 0x80001A20: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x80001A24: sw          $t9, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r25;
    // 0x80001A28: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80001A2C: jal         0x80002140
    // 0x80001A30: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80002140(rdram, ctx);
        goto after_5;
    // 0x80001A30: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x80001A34: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80001A38: addiu       $s0, $s0, -0x5530
    ctx->r16 = ADD32(ctx->r16, -0X5530);
    // 0x80001A3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001A40: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001A44: jal         0x801E1730
    // 0x80001A48: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E1730)(rdram, ctx);
        goto after_6;
    // 0x80001A48: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_6:
    // 0x80001A4C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001A50: addiu       $a3, $a3, -0xD30
    ctx->r7 = ADD32(ctx->r7, -0XD30);
    // 0x80001A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001A58: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001A5C: jal         0x801E35C0
    // 0x80001A60: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E35C0)(rdram, ctx);
        goto after_7;
    // 0x80001A60: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x80001A64: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80001A68: addiu       $s0, $s0, -0x1528
    ctx->r16 = ADD32(ctx->r16, -0X1528);
    // 0x80001A6C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001A70: addiu       $a3, $a3, -0xE20
    ctx->r7 = ADD32(ctx->r7, -0XE20);
    // 0x80001A74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001A78: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001A7C: jal         0x801E33B4
    // 0x80001A80: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E33B4)(rdram, ctx);
        goto after_8;
    // 0x80001A80: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
    // 0x80001A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001A88: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001A8C: jal         0x801E34C0
    // 0x80001A90: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E34C0)(rdram, ctx);
        goto after_9;
    // 0x80001A90: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_9:
    // 0x80001A94: b           L_80001D64
    // 0x80001A98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80001D64;
    // 0x80001A98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80001A9C:
    // 0x80001A9C: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x80001AA0: addiu       $t0, $t0, -0xAD0
    ctx->r8 = ADD32(ctx->r8, -0XAD0);
    // 0x80001AA4: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x80001AA8: sw          $t0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r8;
    // 0x80001AAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80001AB0: jal         0x80002140
    // 0x80001AB4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80002140(rdram, ctx);
        goto after_10;
    // 0x80001AB4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x80001AB8: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80001ABC: addiu       $s0, $s0, -0x5530
    ctx->r16 = ADD32(ctx->r16, -0X5530);
    // 0x80001AC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001AC4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001AC8: jal         0x801E1B60
    // 0x80001ACC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E1B60)(rdram, ctx);
        goto after_11;
    // 0x80001ACC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_11:
    // 0x80001AD0: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001AD4: addiu       $a3, $a3, -0xD30
    ctx->r7 = ADD32(ctx->r7, -0XD30);
    // 0x80001AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001ADC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001AE0: jal         0x801E35C0
    // 0x80001AE4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E35C0)(rdram, ctx);
        goto after_12;
    // 0x80001AE4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_12:
    // 0x80001AE8: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80001AEC: addiu       $s0, $s0, -0x1528
    ctx->r16 = ADD32(ctx->r16, -0X1528);
    // 0x80001AF0: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001AF4: addiu       $a3, $a3, -0xE20
    ctx->r7 = ADD32(ctx->r7, -0XE20);
    // 0x80001AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001AFC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001B00: jal         0x801E33B4
    // 0x80001B04: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E33B4)(rdram, ctx);
        goto after_13;
    // 0x80001B04: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_13:
    // 0x80001B08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001B0C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001B10: jal         0x801E34C0
    // 0x80001B14: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E34C0)(rdram, ctx);
        goto after_14;
    // 0x80001B14: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_14:
    // 0x80001B18: b           L_80001D64
    // 0x80001B1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80001D64;
    // 0x80001B1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80001B20:
    // 0x80001B20: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x80001B24: addiu       $t1, $t1, -0xA18
    ctx->r9 = ADD32(ctx->r9, -0XA18);
    // 0x80001B28: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x80001B2C: sw          $t1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r9;
    // 0x80001B30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80001B34: jal         0x80002140
    // 0x80001B38: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80002140(rdram, ctx);
        goto after_15;
    // 0x80001B38: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_15:
    // 0x80001B3C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001B40: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x80001B44: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001B48: jal         0x801E1E50
    // 0x80001B4C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E1E50)(rdram, ctx);
        goto after_16;
    // 0x80001B4C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_16:
    // 0x80001B50: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001B54: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001B58: addiu       $a3, $a3, -0xD88
    ctx->r7 = ADD32(ctx->r7, -0XD88);
    // 0x80001B5C: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x80001B60: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001B64: jal         0x801E38A0
    // 0x80001B68: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E38A0)(rdram, ctx);
        goto after_17;
    // 0x80001B68: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_17:
    // 0x80001B6C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80001B70: lwc1        $f4, 0x2BD8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2BD8);
    // 0x80001B74: lwc1        $f6, 0x58($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X58);
    // 0x80001B78: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80001B7C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80001B80: addiu       $a0, $s0, -0x1528
    ctx->r4 = ADD32(ctx->r16, -0X1528);
    // 0x80001B84: bc1f        L_80001BA8
    if (!c1cs) {
        // 0x80001B88: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_80001BA8;
    }
    // 0x80001B88: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001B8C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80001B90: addiu       $a0, $s0, -0x1528
    ctx->r4 = ADD32(ctx->r16, -0X1528);
    // 0x80001B94: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001B98: jal         0x801E1DBC
    // 0x80001B9C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E1DBC)(rdram, ctx);
        goto after_18;
    // 0x80001B9C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_18:
    // 0x80001BA0: b           L_80001D64
    // 0x80001BA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80001D64;
    // 0x80001BA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80001BA8:
    // 0x80001BA8: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001BAC: addiu       $a3, $a3, -0xE20
    ctx->r7 = ADD32(ctx->r7, -0XE20);
    // 0x80001BB0: jal         0x801E33B4
    // 0x80001BB4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E33B4)(rdram, ctx);
        goto after_19;
    // 0x80001BB4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_19:
    // 0x80001BB8: b           L_80001D64
    // 0x80001BBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80001D64;
    // 0x80001BBC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80001BC0:
    // 0x80001BC0: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x80001BC4: addiu       $t2, $t2, -0x960
    ctx->r10 = ADD32(ctx->r10, -0X960);
    // 0x80001BC8: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x80001BCC: sw          $t2, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r10;
    // 0x80001BD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80001BD4: jal         0x80002140
    // 0x80001BD8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80002140(rdram, ctx);
        goto after_20;
    // 0x80001BD8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_20:
    // 0x80001BDC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001BE0: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x80001BE4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001BE8: jal         0x801E1FAC
    // 0x80001BEC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E1FAC)(rdram, ctx);
        goto after_21;
    // 0x80001BEC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_21:
    // 0x80001BF0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001BF4: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001BF8: addiu       $a3, $a3, -0xD80
    ctx->r7 = ADD32(ctx->r7, -0XD80);
    // 0x80001BFC: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x80001C00: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001C04: jal         0x801E38A0
    // 0x80001C08: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E38A0)(rdram, ctx);
        goto after_22;
    // 0x80001C08: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_22:
    // 0x80001C0C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80001C10: lwc1        $f8, 0x2BDC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2BDC);
    // 0x80001C14: lwc1        $f10, 0x58($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X58);
    // 0x80001C18: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80001C1C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80001C20: addiu       $a0, $s0, -0x1528
    ctx->r4 = ADD32(ctx->r16, -0X1528);
    // 0x80001C24: bc1f        L_80001C48
    if (!c1cs) {
        // 0x80001C28: or          $a1, $s2, $zero
        ctx->r5 = ctx->r18 | 0;
            goto L_80001C48;
    }
    // 0x80001C28: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001C2C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80001C30: addiu       $a0, $s0, -0x1528
    ctx->r4 = ADD32(ctx->r16, -0X1528);
    // 0x80001C34: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001C38: jal         0x801E1F18
    // 0x80001C3C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E1F18)(rdram, ctx);
        goto after_23;
    // 0x80001C3C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_23:
    // 0x80001C40: b           L_80001D64
    // 0x80001C44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80001D64;
    // 0x80001C44: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80001C48:
    // 0x80001C48: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001C4C: addiu       $a3, $a3, -0xE20
    ctx->r7 = ADD32(ctx->r7, -0XE20);
    // 0x80001C50: jal         0x801E33B4
    // 0x80001C54: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E33B4)(rdram, ctx);
        goto after_24;
    // 0x80001C54: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_24:
    // 0x80001C58: b           L_80001D64
    // 0x80001C5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80001D64;
    // 0x80001C5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80001C60:
    // 0x80001C60: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x80001C64: addiu       $t3, $t3, -0x8A8
    ctx->r11 = ADD32(ctx->r11, -0X8A8);
    // 0x80001C68: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x80001C6C: sw          $t3, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r11;
    // 0x80001C70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80001C74: jal         0x80002140
    // 0x80001C78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80002140(rdram, ctx);
        goto after_25;
    // 0x80001C78: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_25:
    // 0x80001C7C: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80001C80: addiu       $s0, $s0, -0x5530
    ctx->r16 = ADD32(ctx->r16, -0X5530);
    // 0x80001C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001C88: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001C8C: jal         0x801E20B8
    // 0x80001C90: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E20B8)(rdram, ctx);
        goto after_26;
    // 0x80001C90: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_26:
    // 0x80001C94: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001C98: addiu       $a3, $a3, -0xD48
    ctx->r7 = ADD32(ctx->r7, -0XD48);
    // 0x80001C9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001CA0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001CA4: jal         0x801E35C0
    // 0x80001CA8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E35C0)(rdram, ctx);
        goto after_27;
    // 0x80001CA8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_27:
    // 0x80001CAC: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80001CB0: addiu       $s0, $s0, -0x1528
    ctx->r16 = ADD32(ctx->r16, -0X1528);
    // 0x80001CB4: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001CB8: addiu       $a3, $a3, -0xDF8
    ctx->r7 = ADD32(ctx->r7, -0XDF8);
    // 0x80001CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001CC0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001CC4: jal         0x801E33B4
    // 0x80001CC8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E33B4)(rdram, ctx);
        goto after_28;
    // 0x80001CC8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_28:
    // 0x80001CCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001CD0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001CD4: jal         0x801E34C0
    // 0x80001CD8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E34C0)(rdram, ctx);
        goto after_29;
    // 0x80001CD8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_29:
    // 0x80001CDC: b           L_80001D64
    // 0x80001CE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80001D64;
    // 0x80001CE0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80001CE4:
    // 0x80001CE4: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x80001CE8: addiu       $t4, $t4, -0x7F0
    ctx->r12 = ADD32(ctx->r12, -0X7F0);
    // 0x80001CEC: lw          $a2, 0x8($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X8);
    // 0x80001CF0: sw          $t4, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r12;
    // 0x80001CF4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80001CF8: jal         0x80002140
    // 0x80001CFC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80002140(rdram, ctx);
        goto after_30;
    // 0x80001CFC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_30:
    // 0x80001D00: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80001D04: addiu       $s0, $s0, -0x5530
    ctx->r16 = ADD32(ctx->r16, -0X5530);
    // 0x80001D08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001D0C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001D10: jal         0x801E28A4
    // 0x80001D14: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E28A4)(rdram, ctx);
        goto after_31;
    // 0x80001D14: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_31:
    // 0x80001D18: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001D1C: addiu       $a3, $a3, -0xD00
    ctx->r7 = ADD32(ctx->r7, -0XD00);
    // 0x80001D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001D24: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001D28: jal         0x801E39C0
    // 0x80001D2C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E39C0)(rdram, ctx);
        goto after_32;
    // 0x80001D2C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_32:
    // 0x80001D30: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80001D34: addiu       $s0, $s0, -0x1528
    ctx->r16 = ADD32(ctx->r16, -0X1528);
    // 0x80001D38: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001D3C: addiu       $a3, $a3, -0xDF8
    ctx->r7 = ADD32(ctx->r7, -0XDF8);
    // 0x80001D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001D44: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001D48: jal         0x801E33B4
    // 0x80001D4C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E33B4)(rdram, ctx);
        goto after_33;
    // 0x80001D4C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_33:
    // 0x80001D50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80001D54: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80001D58: jal         0x801E34C0
    // 0x80001D5C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    LOOKUP_FUNC(0x801E34C0)(rdram, ctx);
        goto after_34;
    // 0x80001D5C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_34:
L_80001D60:
    // 0x80001D60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80001D64:
    // 0x80001D64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80001D68: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80001D6C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80001D70: jr          $ra
    // 0x80001D74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80001D74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80001D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001D78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80001D7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80001D80: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80001D84: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80001D88: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x80001D8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80001D90: andi        $t6, $v0, 0x7
    ctx->r14 = ctx->r2 & 0X7;
    // 0x80001D94: sltiu       $at, $t6, 0x7
    ctx->r1 = ctx->r14 < 0X7 ? 1 : 0;
    // 0x80001D98: beq         $at, $zero, L_80002098
    if (ctx->r1 == 0) {
        // 0x80001D9C: or          $s1, $a2, $zero
        ctx->r17 = ctx->r6 | 0;
            goto L_80002098;
    }
    // 0x80001D9C: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x80001DA0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80001DA4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80001DA8: addu        $at, $at, $t7
    gpr jr_addend_80001DB4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80001DAC: lw          $t7, 0x2BE0($at)
    ctx->r15 = ADD32(ctx->r1, 0X2BE0);
    // 0x80001DB0: nop

    // 0x80001DB4: jr          $t7
    // 0x80001DB8: nop

    switch (jr_addend_80001DB4 >> 2) {
        case 0: goto L_80002034; break;
        case 1: goto L_80001FC8; break;
        case 2: goto L_80001DBC; break;
        case 3: goto L_80001E28; break;
        case 4: goto L_80001E94; break;
        case 5: goto L_80001F00; break;
        case 6: goto L_80001F64; break;
        default: switch_error(__func__, 0x80001DB4, 0x800D2BE0);
    }
    // 0x80001DB8: nop

L_80001DBC:
    // 0x80001DBC: lui         $t8, 0x8020
    ctx->r24 = S32(0X8020 << 16);
    // 0x80001DC0: addiu       $t8, $t8, -0xC40
    ctx->r24 = ADD32(ctx->r24, -0XC40);
    // 0x80001DC4: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x80001DC8: sw          $t8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r24;
    // 0x80001DCC: jal         0x80002140
    // 0x80001DD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80002140(rdram, ctx);
        goto after_0;
    // 0x80001DD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80001DD4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001DD8: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x80001DDC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80001DE0: jal         0x801E1300
    // 0x80001DE4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(0x801E1300)(rdram, ctx);
        goto after_1;
    // 0x80001DE4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_1:
    // 0x80001DE8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001DEC: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001DF0: addiu       $a3, $a3, -0xDD0
    ctx->r7 = ADD32(ctx->r7, -0XDD0);
    // 0x80001DF4: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x80001DF8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80001DFC: jal         0x801E35C0
    // 0x80001E00: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(0x801E35C0)(rdram, ctx);
        goto after_2;
    // 0x80001E00: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x80001E04: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001E08: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001E0C: addiu       $a3, $a3, -0xE20
    ctx->r7 = ADD32(ctx->r7, -0XE20);
    // 0x80001E10: addiu       $a0, $a0, -0x1528
    ctx->r4 = ADD32(ctx->r4, -0X1528);
    // 0x80001E14: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80001E18: jal         0x801E33B4
    // 0x80001E1C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(0x801E33B4)(rdram, ctx);
        goto after_3;
    // 0x80001E1C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_3:
    // 0x80001E20: b           L_80002098
    // 0x80001E24: nop

        goto L_80002098;
    // 0x80001E24: nop

L_80001E28:
    // 0x80001E28: lui         $t9, 0x8020
    ctx->r25 = S32(0X8020 << 16);
    // 0x80001E2C: addiu       $t9, $t9, -0xB88
    ctx->r25 = ADD32(ctx->r25, -0XB88);
    // 0x80001E30: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x80001E34: sw          $t9, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r25;
    // 0x80001E38: jal         0x80002140
    // 0x80001E3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80002140(rdram, ctx);
        goto after_4;
    // 0x80001E3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80001E40: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001E44: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x80001E48: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80001E4C: jal         0x801E1730
    // 0x80001E50: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(0x801E1730)(rdram, ctx);
        goto after_5;
    // 0x80001E50: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_5:
    // 0x80001E54: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001E58: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001E5C: addiu       $a3, $a3, -0xDB8
    ctx->r7 = ADD32(ctx->r7, -0XDB8);
    // 0x80001E60: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x80001E64: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80001E68: jal         0x801E35C0
    // 0x80001E6C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(0x801E35C0)(rdram, ctx);
        goto after_6;
    // 0x80001E6C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_6:
    // 0x80001E70: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001E74: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001E78: addiu       $a3, $a3, -0xE20
    ctx->r7 = ADD32(ctx->r7, -0XE20);
    // 0x80001E7C: addiu       $a0, $a0, -0x1528
    ctx->r4 = ADD32(ctx->r4, -0X1528);
    // 0x80001E80: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80001E84: jal         0x801E33B4
    // 0x80001E88: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(0x801E33B4)(rdram, ctx);
        goto after_7;
    // 0x80001E88: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_7:
    // 0x80001E8C: b           L_80002098
    // 0x80001E90: nop

        goto L_80002098;
    // 0x80001E90: nop

L_80001E94:
    // 0x80001E94: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x80001E98: addiu       $t0, $t0, -0xAD0
    ctx->r8 = ADD32(ctx->r8, -0XAD0);
    // 0x80001E9C: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x80001EA0: sw          $t0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r8;
    // 0x80001EA4: jal         0x80002140
    // 0x80001EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80002140(rdram, ctx);
        goto after_8;
    // 0x80001EA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80001EAC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001EB0: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x80001EB4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80001EB8: jal         0x801E1B60
    // 0x80001EBC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(0x801E1B60)(rdram, ctx);
        goto after_9;
    // 0x80001EBC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_9:
    // 0x80001EC0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001EC4: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001EC8: addiu       $a3, $a3, -0xDA0
    ctx->r7 = ADD32(ctx->r7, -0XDA0);
    // 0x80001ECC: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x80001ED0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80001ED4: jal         0x801E35C0
    // 0x80001ED8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(0x801E35C0)(rdram, ctx);
        goto after_10;
    // 0x80001ED8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_10:
    // 0x80001EDC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001EE0: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001EE4: addiu       $a3, $a3, -0xE20
    ctx->r7 = ADD32(ctx->r7, -0XE20);
    // 0x80001EE8: addiu       $a0, $a0, -0x1528
    ctx->r4 = ADD32(ctx->r4, -0X1528);
    // 0x80001EEC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80001EF0: jal         0x801E33B4
    // 0x80001EF4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(0x801E33B4)(rdram, ctx);
        goto after_11;
    // 0x80001EF4: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_11:
    // 0x80001EF8: b           L_80002098
    // 0x80001EFC: nop

        goto L_80002098;
    // 0x80001EFC: nop

L_80001F00:
    // 0x80001F00: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x80001F04: addiu       $t1, $t1, -0xA18
    ctx->r9 = ADD32(ctx->r9, -0XA18);
    // 0x80001F08: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x80001F0C: sw          $t1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r9;
    // 0x80001F10: jal         0x80002140
    // 0x80001F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80002140(rdram, ctx);
        goto after_12;
    // 0x80001F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80001F18: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001F1C: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x80001F20: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80001F24: jal         0x801E1E50
    // 0x80001F28: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(0x801E1E50)(rdram, ctx);
        goto after_13;
    // 0x80001F28: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_13:
    // 0x80001F2C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001F30: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001F34: addiu       $a3, $a3, -0xD88
    ctx->r7 = ADD32(ctx->r7, -0XD88);
    // 0x80001F38: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x80001F3C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80001F40: jal         0x801E38A0
    // 0x80001F44: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(0x801E38A0)(rdram, ctx);
        goto after_14;
    // 0x80001F44: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_14:
    // 0x80001F48: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001F4C: addiu       $a0, $a0, -0x1528
    ctx->r4 = ADD32(ctx->r4, -0X1528);
    // 0x80001F50: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80001F54: jal         0x801E1DBC
    // 0x80001F58: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(0x801E1DBC)(rdram, ctx);
        goto after_15;
    // 0x80001F58: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_15:
    // 0x80001F5C: b           L_80002098
    // 0x80001F60: nop

        goto L_80002098;
    // 0x80001F60: nop

L_80001F64:
    // 0x80001F64: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x80001F68: addiu       $t2, $t2, -0x960
    ctx->r10 = ADD32(ctx->r10, -0X960);
    // 0x80001F6C: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x80001F70: sw          $t2, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r10;
    // 0x80001F74: jal         0x80002140
    // 0x80001F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80002140(rdram, ctx);
        goto after_16;
    // 0x80001F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80001F7C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001F80: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x80001F84: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80001F88: jal         0x801E1FAC
    // 0x80001F8C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(0x801E1FAC)(rdram, ctx);
        goto after_17;
    // 0x80001F8C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_17:
    // 0x80001F90: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001F94: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001F98: addiu       $a3, $a3, -0xD80
    ctx->r7 = ADD32(ctx->r7, -0XD80);
    // 0x80001F9C: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x80001FA0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80001FA4: jal         0x801E38A0
    // 0x80001FA8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(0x801E38A0)(rdram, ctx);
        goto after_18;
    // 0x80001FA8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_18:
    // 0x80001FAC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001FB0: addiu       $a0, $a0, -0x1528
    ctx->r4 = ADD32(ctx->r4, -0X1528);
    // 0x80001FB4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80001FB8: jal         0x801E1F18
    // 0x80001FBC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(0x801E1F18)(rdram, ctx);
        goto after_19;
    // 0x80001FBC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_19:
    // 0x80001FC0: b           L_80002098
    // 0x80001FC4: nop

        goto L_80002098;
    // 0x80001FC4: nop

L_80001FC8:
    // 0x80001FC8: lui         $t3, 0x8020
    ctx->r11 = S32(0X8020 << 16);
    // 0x80001FCC: addiu       $t3, $t3, -0x8A8
    ctx->r11 = ADD32(ctx->r11, -0X8A8);
    // 0x80001FD0: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x80001FD4: sw          $t3, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r11;
    // 0x80001FD8: jal         0x80002140
    // 0x80001FDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80002140(rdram, ctx);
        goto after_20;
    // 0x80001FDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80001FE0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001FE4: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x80001FE8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80001FEC: jal         0x801E20B8
    // 0x80001FF0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(0x801E20B8)(rdram, ctx);
        goto after_21;
    // 0x80001FF0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_21:
    // 0x80001FF4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80001FF8: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80001FFC: addiu       $a3, $a3, -0xD78
    ctx->r7 = ADD32(ctx->r7, -0XD78);
    // 0x80002000: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x80002004: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80002008: jal         0x801E35C0
    // 0x8000200C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(0x801E35C0)(rdram, ctx);
        goto after_22;
    // 0x8000200C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_22:
    // 0x80002010: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80002014: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80002018: addiu       $a3, $a3, -0xDF8
    ctx->r7 = ADD32(ctx->r7, -0XDF8);
    // 0x8000201C: addiu       $a0, $a0, -0x1528
    ctx->r4 = ADD32(ctx->r4, -0X1528);
    // 0x80002020: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80002024: jal         0x801E33B4
    // 0x80002028: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(0x801E33B4)(rdram, ctx);
        goto after_23;
    // 0x80002028: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_23:
    // 0x8000202C: b           L_80002098
    // 0x80002030: nop

        goto L_80002098;
    // 0x80002030: nop

L_80002034:
    // 0x80002034: lui         $t4, 0x8020
    ctx->r12 = S32(0X8020 << 16);
    // 0x80002038: addiu       $t4, $t4, -0x7F0
    ctx->r12 = ADD32(ctx->r12, -0X7F0);
    // 0x8000203C: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x80002040: sw          $t4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r12;
    // 0x80002044: jal         0x80002140
    // 0x80002048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80002140(rdram, ctx);
        goto after_24;
    // 0x80002048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x8000204C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80002050: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x80002054: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80002058: jal         0x801E28A4
    // 0x8000205C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(0x801E28A4)(rdram, ctx);
        goto after_25;
    // 0x8000205C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_25:
    // 0x80002060: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80002064: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80002068: addiu       $a3, $a3, -0xD60
    ctx->r7 = ADD32(ctx->r7, -0XD60);
    // 0x8000206C: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x80002070: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80002074: jal         0x801E39C0
    // 0x80002078: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(0x801E39C0)(rdram, ctx);
        goto after_26;
    // 0x80002078: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_26:
    // 0x8000207C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80002080: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80002084: addiu       $a3, $a3, -0xDF8
    ctx->r7 = ADD32(ctx->r7, -0XDF8);
    // 0x80002088: addiu       $a0, $a0, -0x1528
    ctx->r4 = ADD32(ctx->r4, -0X1528);
    // 0x8000208C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80002090: jal         0x801E33B4
    // 0x80002094: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(0x801E33B4)(rdram, ctx);
        goto after_27;
    // 0x80002094: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_27:
L_80002098:
    // 0x80002098: jal         0x80004804
    // 0x8000209C: nop

    func_80004804(rdram, ctx);
        goto after_28;
    // 0x8000209C: nop

    after_28:
    // 0x800020A0: beq         $v0, $zero, L_800020BC
    if (ctx->r2 == 0) {
        // 0x800020A4: lui         $t5, 0x800E
        ctx->r13 = S32(0X800E << 16);
            goto L_800020BC;
    }
    // 0x800020A4: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x800020A8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800020AC: ori         $at, $at, 0x9E34
    ctx->r1 = ctx->r1 | 0X9E34;
    // 0x800020B0: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x800020B4: addu        $t6, $t5, $at
    ctx->r14 = ADD32(ctx->r13, ctx->r1);
    // 0x800020B8: bne         $s0, $t6, L_800020D0
    if (ctx->r16 != ctx->r14) {
        // 0x800020BC: lui         $a0, 0x8013
        ctx->r4 = S32(0X8013 << 16);
            goto L_800020D0;
    }
L_800020BC:
    // 0x800020BC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800020C0: addiu       $a0, $a0, -0x5530
    ctx->r4 = ADD32(ctx->r4, -0X5530);
    // 0x800020C4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800020C8: jal         0x801E3F44
    // 0x800020CC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    LOOKUP_FUNC(0x801E3F44)(rdram, ctx);
        goto after_29;
    // 0x800020CC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_29:
L_800020D0:
    // 0x800020D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800020D4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800020D8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800020DC: jr          $ra
    // 0x800020E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800020E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800020E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800020E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800020E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800020EC: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x800020F0: nop

    // 0x800020F4: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    // 0x800020F8: beq         $t6, $zero, L_80002110
    if (ctx->r14 == 0) {
        // 0x800020FC: andi        $t7, $v0, 0x800
        ctx->r15 = ctx->r2 & 0X800;
            goto L_80002110;
    }
    // 0x800020FC: andi        $t7, $v0, 0x800
    ctx->r15 = ctx->r2 & 0X800;
    // 0x80002100: jal         0x80001D78
    // 0x80002104: nop

    func_80001D78(rdram, ctx);
        goto after_0;
    // 0x80002104: nop

    after_0:
    // 0x80002108: b           L_80002134
    // 0x8000210C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80002134;
    // 0x8000210C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002110:
    // 0x80002110: beq         $t7, $zero, L_80002128
    if (ctx->r15 == 0) {
        // 0x80002114: nop
    
            goto L_80002128;
    }
    // 0x80002114: nop

    // 0x80002118: jal         0x80001948
    // 0x8000211C: nop

    func_80001948(rdram, ctx);
        goto after_1;
    // 0x8000211C: nop

    after_1:
    // 0x80002120: b           L_80002134
    // 0x80002124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80002134;
    // 0x80002124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002128:
    // 0x80002128: jal         0x80001500
    // 0x8000212C: nop

    func_80001500(rdram, ctx);
        goto after_2;
    // 0x8000212C: nop

    after_2:
    // 0x80002130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80002134:
    // 0x80002134: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80002138: jr          $ra
    // 0x8000213C: nop

    return;
    // 0x8000213C: nop

;}
RECOMP_FUNC void func_80002140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002140: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80002144: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x80002148: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8000214C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80002150: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80002154: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80002158: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000215C: addiu       $v0, $v0, 0x24D0
    ctx->r2 = ADD32(ctx->r2, 0X24D0);
    // 0x80002160: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80002164: addiu       $a0, $a2, 0x20
    ctx->r4 = ADD32(ctx->r6, 0X20);
    // 0x80002168: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x8000216C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_80002170:
    // 0x80002170: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    // 0x80002174: lhu         $t7, 0x0($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X0);
    // 0x80002178: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8000217C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80002180: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80002184: bgez        $t7, L_8000219C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80002188: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8000219C;
    }
    // 0x80002188: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000218C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80002190: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80002194: nop

    // 0x80002198: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_8000219C:
    // 0x8000219C: nop

    // 0x800021A0: div.s       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x800021A4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800021A8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800021AC: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x800021B0: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x800021B4: add.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x800021B8: swc1        $f4, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f4.u32l;
    // 0x800021BC: lhu         $t9, 0x0($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X0);
    // 0x800021C0: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x800021C4: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x800021C8: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x800021CC: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800021D0: bgez        $t9, L_800021E4
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800021D4: cvt.s.w     $f16, $f8
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
            goto L_800021E4;
    }
    // 0x800021D4: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800021D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800021DC: nop

    // 0x800021E0: add.s       $f6, $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f18.fl;
L_800021E4:
    // 0x800021E4: nop

    // 0x800021E8: div.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800021EC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800021F0: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x800021F4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x800021F8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800021FC: add.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80002200: swc1        $f8, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f8.u32l;
    // 0x80002204: lhu         $t1, 0x0($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X0);
    // 0x80002208: lh          $t0, 0x0($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X0);
    // 0x8000220C: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x80002210: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x80002214: cvt.s.w     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80002218: bgez        $t1, L_8000222C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8000221C: cvt.s.w     $f18, $f10
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8000222C;
    }
    // 0x8000221C: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80002220: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80002224: nop

    // 0x80002228: add.s       $f16, $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f4.fl;
L_8000222C:
    // 0x8000222C: nop

    // 0x80002230: div.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80002234: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80002238: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8000223C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80002240: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80002244: add.s       $f10, $f18, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f18.fl + ctx->f8.fl;
    // 0x80002248: swc1        $f10, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f10.u32l;
    // 0x8000224C: lhu         $t3, 0x0($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X0);
    // 0x80002250: lh          $t2, 0x0($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X0);
    // 0x80002254: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x80002258: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x8000225C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80002260: bgez        $t3, L_80002274
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80002264: cvt.s.w     $f4, $f6
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80002274;
    }
    // 0x80002264: cvt.s.w     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    ctx->f4.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80002268: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000226C: nop

    // 0x80002270: add.s       $f18, $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f8.fl;
L_80002274:
    // 0x80002274: nop

    // 0x80002278: div.s       $f10, $f18, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8000227C: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80002280: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80002284: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80002288: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8000228C: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80002290: bne         $a3, $a1, L_80002170
    if (ctx->r7 != ctx->r5) {
        // 0x80002294: swc1        $f6, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->f6.u32l;
            goto L_80002170;
    }
    // 0x80002294: swc1        $f6, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->f6.u32l;
    // 0x80002298: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8000229C: jal         0x800022B4
    // 0x800022A0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_800022B4(rdram, ctx);
        goto after_0;
    // 0x800022A0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x800022A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800022A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800022AC: jr          $ra
    // 0x800022B0: nop

    return;
    // 0x800022B0: nop

;}
RECOMP_FUNC void func_800022B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800022B4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800022B8: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800022BC: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x800022C0: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x800022C4: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x800022C8: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x800022CC: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x800022D0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x800022D4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x800022D8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800022DC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800022E0: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x800022E4: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x800022E8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800022EC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800022F0: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x800022F4: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x800022F8: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x800022FC: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x80002300: nop

    // 0x80002304: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
    // 0x80002308: lhu         $t7, 0x3C($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X3C);
    // 0x8000230C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80002310: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x80002314: beq         $t8, $zero, L_80002328
    if (ctx->r24 == 0) {
        // 0x80002318: nop
    
            goto L_80002328;
    }
    // 0x80002318: nop

    // 0x8000231C: lw          $s4, 0x8($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X8);
    // 0x80002320: b           L_80002334
    // 0x80002324: lhu         $a1, 0x30($s7)
    ctx->r5 = MEM_HU(ctx->r23, 0X30);
        goto L_80002334;
    // 0x80002324: lhu         $a1, 0x30($s7)
    ctx->r5 = MEM_HU(ctx->r23, 0X30);
L_80002328:
    // 0x80002328: lw          $s4, 0x4($v0)
    ctx->r20 = MEM_W(ctx->r2, 0X4);
    // 0x8000232C: nop

    // 0x80002330: lhu         $a1, 0x30($s7)
    ctx->r5 = MEM_HU(ctx->r23, 0X30);
L_80002334:
    // 0x80002334: lhu         $a2, 0x32($s7)
    ctx->r6 = MEM_HU(ctx->r23, 0X32);
    // 0x80002338: jal         0x80005060
    // 0x8000233C: addiu       $a0, $a0, 0x1E60
    ctx->r4 = ADD32(ctx->r4, 0X1E60);
    func_80005060(rdram, ctx);
        goto after_0;
    // 0x8000233C: addiu       $a0, $a0, 0x1E60
    ctx->r4 = ADD32(ctx->r4, 0X1E60);
    after_0:
    // 0x80002340: beq         $v0, $zero, L_80002350
    if (ctx->r2 == 0) {
        // 0x80002344: nop
    
            goto L_80002350;
    }
    // 0x80002344: nop

    // 0x80002348: jal         0x80002D0C
    // 0x8000234C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_80002D0C(rdram, ctx);
        goto after_1;
    // 0x8000234C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_1:
L_80002350:
    // 0x80002350: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80002354: lwc1        $f4, 0x4C($s7)
    ctx->f4.u32l = MEM_W(ctx->r23, 0X4C);
    // 0x80002358: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8000235C: c.eq.s      $f22, $f4
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f22.fl == ctx->f4.fl;
    // 0x80002360: nop

    // 0x80002364: bc1t        L_80002390
    if (c1cs) {
        // 0x80002368: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_80002390;
    }
    // 0x80002368: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8000236C: lhu         $a1, 0x34($s7)
    ctx->r5 = MEM_HU(ctx->r23, 0X34);
    // 0x80002370: lhu         $a2, 0x36($s7)
    ctx->r6 = MEM_HU(ctx->r23, 0X36);
    // 0x80002374: jal         0x80005060
    // 0x80002378: addiu       $a0, $a0, 0x2178
    ctx->r4 = ADD32(ctx->r4, 0X2178);
    func_80005060(rdram, ctx);
        goto after_2;
    // 0x80002378: addiu       $a0, $a0, 0x2178
    ctx->r4 = ADD32(ctx->r4, 0X2178);
    after_2:
    // 0x8000237C: beq         $v0, $zero, L_80002390
    if (ctx->r2 == 0) {
        // 0x80002380: lui         $at, 0x42C8
        ctx->r1 = S32(0X42C8 << 16);
            goto L_80002390;
    }
    // 0x80002380: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80002384: jal         0x80002D0C
    // 0x80002388: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    func_80002D0C(rdram, ctx);
        goto after_3;
    // 0x80002388: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    after_3:
    // 0x8000238C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
L_80002390:
    // 0x80002390: lui         $s6, 0x8013
    ctx->r22 = S32(0X8013 << 16);
    // 0x80002394: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80002398: addiu       $s6, $s6, -0x5530
    ctx->r22 = ADD32(ctx->r22, -0X5530);
    // 0x8000239C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x800023A0: addiu       $fp, $zero, -0x1
    ctx->r30 = ADD32(0, -0X1);
L_800023A4:
    // 0x800023A4: lh          $s3, 0x0($s4)
    ctx->r19 = MEM_H(ctx->r20, 0X0);
    // 0x800023A8: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    // 0x800023AC: beq         $s3, $fp, L_8000254C
    if (ctx->r19 == ctx->r30) {
        // 0x800023B0: sll         $v0, $s2, 3
        ctx->r2 = S32(ctx->r18 << 3);
            goto L_8000254C;
    }
    // 0x800023B0: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x800023B4: lwc1        $f0, 0x4C($s7)
    ctx->f0.u32l = MEM_W(ctx->r23, 0X4C);
    // 0x800023B8: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x800023BC: c.eq.s      $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f22.fl == ctx->f0.fl;
    // 0x800023C0: addiu       $s3, $s3, -0x1
    ctx->r19 = ADD32(ctx->r19, -0X1);
    // 0x800023C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800023C8: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800023CC: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800023D0: sll         $t9, $s3, 16
    ctx->r25 = S32(ctx->r19 << 16);
    // 0x800023D4: addiu       $t4, $t4, 0x24D0
    ctx->r12 = ADD32(ctx->r12, 0X24D0);
    // 0x800023D8: addiu       $t2, $t2, 0x1E60
    ctx->r10 = ADD32(ctx->r10, 0X1E60);
    // 0x800023DC: addiu       $t1, $v0, -0x24
    ctx->r9 = ADD32(ctx->r2, -0X24);
    // 0x800023E0: sll         $t3, $s2, 6
    ctx->r11 = S32(ctx->r18 << 6);
    // 0x800023E4: sra         $s3, $t9, 16
    ctx->r19 = S32(SIGNED(ctx->r25) >> 16);
    // 0x800023E8: addu        $s5, $t3, $t4
    ctx->r21 = ADD32(ctx->r11, ctx->r12);
    // 0x800023EC: bc1t        L_80002414
    if (c1cs) {
        // 0x800023F0: addu        $s0, $t1, $t2
        ctx->r16 = ADD32(ctx->r9, ctx->r10);
            goto L_80002414;
    }
    // 0x800023F0: addu        $s0, $t1, $t2
    ctx->r16 = ADD32(ctx->r9, ctx->r10);
    // 0x800023F4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800023F8: addiu       $t6, $t6, 0x2178
    ctx->r14 = ADD32(ctx->r14, 0X2178);
    // 0x800023FC: addiu       $t5, $v0, -0x24
    ctx->r13 = ADD32(ctx->r2, -0X24);
    // 0x80002400: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80002404: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    // 0x80002408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8000240C: jal         0x80005D60
    // 0x80002410: addiu       $a3, $s2, -0x1
    ctx->r7 = ADD32(ctx->r18, -0X1);
    func_80005D60(rdram, ctx);
        goto after_4;
    // 0x80002410: addiu       $a3, $s2, -0x1
    ctx->r7 = ADD32(ctx->r18, -0X1);
    after_4:
L_80002414:
    // 0x80002414: lwc1        $f6, 0x0($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80002418: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x8000241C: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80002420: lwc1        $f18, 0x8($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80002424: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80002428: addiu       $t1, $t1, 0x24D0
    ctx->r9 = ADD32(ctx->r9, 0X24D0);
    // 0x8000242C: mul.s       $f16, $f10, $f20
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x80002430: swc1        $f8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f8.u32l;
    // 0x80002434: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80002438: sll         $t2, $s2, 6
    ctx->r10 = S32(ctx->r18 << 6);
    // 0x8000243C: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x80002440: swc1        $f16, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f16.u32l;
    // 0x80002444: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x80002448: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x8000244C: lhu         $t7, 0x3C($s7)
    ctx->r15 = MEM_HU(ctx->r23, 0X3C);
    // 0x80002450: nop

    // 0x80002454: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x80002458: beq         $t8, $zero, L_80002484
    if (ctx->r24 == 0) {
        // 0x8000245C: nop
    
            goto L_80002484;
    }
    // 0x8000245C: nop

    // 0x80002460: lwc1        $f6, 0x8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80002464: lwc1        $f10, 0xC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80002468: lwc1        $f18, 0x10($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8000246C: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x80002470: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x80002474: neg.s       $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = -ctx->f18.fl;
    // 0x80002478: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
    // 0x8000247C: swc1        $f16, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f16.u32l;
    // 0x80002480: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
L_80002484:
    // 0x80002484: lh          $t9, 0x0($s4)
    ctx->r25 = MEM_H(ctx->r20, 0X0);
    // 0x80002488: lw          $t3, 0x64($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X64);
    // 0x8000248C: sll         $t0, $t9, 6
    ctx->r8 = S32(ctx->r25 << 6);
    // 0x80002490: addu        $s1, $t2, $t3
    ctx->r17 = ADD32(ctx->r10, ctx->r11);
    // 0x80002494: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80002498: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x8000249C: jal         0x80003908
    // 0x800024A0: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    func_80003908(rdram, ctx);
        goto after_5;
    // 0x800024A0: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    after_5:
    // 0x800024A4: lui         $t4, 0x800A
    ctx->r12 = S32(0X800A << 16);
    // 0x800024A8: lhu         $t4, -0x238C($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X238C);
    // 0x800024AC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800024B0: beq         $t4, $zero, L_800024F8
    if (ctx->r12 == 0) {
        // 0x800024B4: lw          $t5, 0x50($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X50);
            goto L_800024F8;
    }
    // 0x800024B4: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x800024B8: bne         $s2, $at, L_800024F8
    if (ctx->r18 != ctx->r1) {
        // 0x800024BC: lw          $t5, 0x50($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X50);
            goto L_800024F8;
    }
    // 0x800024BC: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x800024C0: jal         0x80004804
    // 0x800024C4: nop

    func_80004804(rdram, ctx);
        goto after_6;
    // 0x800024C4: nop

    after_6:
    // 0x800024C8: beq         $v0, $zero, L_800024F4
    if (ctx->r2 == 0) {
        // 0x800024CC: lui         $a0, 0x8013
        ctx->r4 = S32(0X8013 << 16);
            goto L_800024F4;
    }
    // 0x800024CC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800024D0: addiu       $a0, $a0, 0x16A8
    ctx->r4 = ADD32(ctx->r4, 0X16A8);
    // 0x800024D4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800024D8: jal         0x8007F940
    // 0x800024DC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8007F940(rdram, ctx);
        goto after_7;
    // 0x800024DC: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_7:
    // 0x800024E0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800024E4: addiu       $a1, $a1, 0x16E8
    ctx->r5 = ADD32(ctx->r5, 0X16E8);
    // 0x800024E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800024EC: jal         0x8007F940
    // 0x800024F0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8007F940(rdram, ctx);
        goto after_8;
    // 0x800024F0: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_8:
L_800024F4:
    // 0x800024F4: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
L_800024F8:
    // 0x800024F8: sll         $t6, $s3, 3
    ctx->r14 = S32(ctx->r19 << 3);
    // 0x800024FC: addu        $a1, $t5, $t6
    ctx->r5 = ADD32(ctx->r13, ctx->r14);
    // 0x80002500: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x80002504: lui         $t9, 0x102
    ctx->r25 = S32(0X102 << 16);
    // 0x80002508: beq         $t7, $zero, L_8000254C
    if (ctx->r15 == 0) {
        // 0x8000250C: ori         $t9, $t9, 0x40
        ctx->r25 = ctx->r25 | 0X40;
            goto L_8000254C;
    }
    // 0x8000250C: ori         $t9, $t9, 0x40
    ctx->r25 = ctx->r25 | 0X40;
    // 0x80002510: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x80002514: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80002518: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000251C: sw          $t8, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r24;
    // 0x80002520: addu        $t0, $s1, $at
    ctx->r8 = ADD32(ctx->r17, ctx->r1);
    // 0x80002524: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x80002528: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000252C: lw          $v0, 0x0($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X0);
    // 0x80002530: lui         $t2, 0x600
    ctx->r10 = S32(0X600 << 16);
    // 0x80002534: addiu       $t1, $v0, 0x8
    ctx->r9 = ADD32(ctx->r2, 0X8);
    // 0x80002538: sw          $t1, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r9;
    // 0x8000253C: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x80002540: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
    // 0x80002544: nop

    // 0x80002548: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
L_8000254C:
    // 0x8000254C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80002550: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x80002554: bne         $s2, $at, L_800023A4
    if (ctx->r18 != ctx->r1) {
        // 0x80002558: nop
    
            goto L_800023A4;
    }
    // 0x80002558: nop

    // 0x8000255C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80002560: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80002564: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80002568: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8000256C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80002570: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80002574: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80002578: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8000257C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80002580: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80002584: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80002588: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8000258C: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80002590: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80002594: jr          $ra
    // 0x80002598: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80002598: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8000259C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000259C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800025A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800025A4: lhu         $t1, 0x32($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X32);
    // 0x800025A8: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800025AC: lhu         $a0, 0x30($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X30);
    // 0x800025B0: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x800025B4: jal         0x8000385C
    // 0x800025B8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    func_8000385C(rdram, ctx);
        goto after_0;
    // 0x800025B8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    after_0:
    // 0x800025BC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800025C0: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x800025C4: lhu         $t7, 0x3C($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X3C);
    // 0x800025C8: andi        $t0, $v1, 0xFF00
    ctx->r8 = ctx->r3 & 0XFF00;
    // 0x800025CC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800025D0: srl         $t6, $t0, 8
    ctx->r14 = S32(U32(ctx->r8) >> 8);
    // 0x800025D4: andi        $t8, $t7, 0x4000
    ctx->r24 = ctx->r15 & 0X4000;
    // 0x800025D8: or          $t0, $t6, $zero
    ctx->r8 = ctx->r14 | 0;
    // 0x800025DC: beq         $t8, $zero, L_800025EC
    if (ctx->r24 == 0) {
        // 0x800025E0: andi        $a2, $v1, 0xFF
        ctx->r6 = ctx->r3 & 0XFF;
            goto L_800025EC;
    }
    // 0x800025E0: andi        $a2, $v1, 0xFF
    ctx->r6 = ctx->r3 & 0XFF;
    // 0x800025E4: b           L_8000262C
    // 0x800025E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000262C;
    // 0x800025E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800025EC:
    // 0x800025EC: andi        $v0, $a2, 0xFFFF
    ctx->r2 = ctx->r6 & 0XFFFF;
    // 0x800025F0: beq         $v0, $zero, L_80002604
    if (ctx->r2 == 0) {
        // 0x800025F4: addiu       $a0, $v0, -0x1
        ctx->r4 = ADD32(ctx->r2, -0X1);
            goto L_80002604;
    }
    // 0x800025F4: addiu       $a0, $v0, -0x1
    ctx->r4 = ADD32(ctx->r2, -0X1);
    // 0x800025F8: andi        $t9, $a0, 0xFFFF
    ctx->r25 = ctx->r4 & 0XFFFF;
    // 0x800025FC: sltu        $at, $t1, $t9
    ctx->r1 = ctx->r9 < ctx->r25 ? 1 : 0;
    // 0x80002600: beq         $at, $zero, L_80002628
    if (ctx->r1 == 0) {
        // 0x80002604: andi        $v0, $t0, 0xFFFF
        ctx->r2 = ctx->r8 & 0XFFFF;
            goto L_80002628;
    }
L_80002604:
    // 0x80002604: andi        $v0, $t0, 0xFFFF
    ctx->r2 = ctx->r8 & 0XFFFF;
    // 0x80002608: beq         $v0, $zero, L_80002620
    if (ctx->r2 == 0) {
        // 0x8000260C: addiu       $a3, $v0, -0x1
        ctx->r7 = ADD32(ctx->r2, -0X1);
            goto L_80002620;
    }
    // 0x8000260C: addiu       $a3, $v0, -0x1
    ctx->r7 = ADD32(ctx->r2, -0X1);
    // 0x80002610: andi        $t2, $a3, 0xFFFF
    ctx->r10 = ctx->r7 & 0XFFFF;
    // 0x80002614: sltu        $at, $t2, $t1
    ctx->r1 = ctx->r10 < ctx->r9 ? 1 : 0;
    // 0x80002618: beq         $at, $zero, L_8000262C
    if (ctx->r1 == 0) {
        // 0x8000261C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8000262C;
    }
    // 0x8000261C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80002620:
    // 0x80002620: b           L_8000262C
    // 0x80002624: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000262C;
    // 0x80002624: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80002628:
    // 0x80002628: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000262C:
    // 0x8000262C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80002630: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80002634: jr          $ra
    // 0x80002638: nop

    return;
    // 0x80002638: nop

;}
RECOMP_FUNC void func_8000263C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000263C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80002640: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002644: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80002648: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8000264C: jal         0x8000259C
    // 0x80002650: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8000259C(rdram, ctx);
        goto after_0;
    // 0x80002650: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80002654: beq         $v0, $zero, L_800026CC
    if (ctx->r2 == 0) {
        // 0x80002658: addiu       $a0, $sp, 0x1C
        ctx->r4 = ADD32(ctx->r29, 0X1C);
            goto L_800026CC;
    }
    // 0x80002658: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x8000265C: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80002660: jal         0x800043AC
    // 0x80002664: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    func_800043AC(rdram, ctx);
        goto after_1;
    // 0x80002664: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    after_1:
    // 0x80002668: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8000266C: lbu         $t6, -0x2FAF($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X2FAF);
    // 0x80002670: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80002674: bne         $t6, $zero, L_800026CC
    if (ctx->r14 != 0) {
        // 0x80002678: addiu       $v0, $v0, 0x3B20
        ctx->r2 = ADD32(ctx->r2, 0X3B20);
            goto L_800026CC;
    }
    // 0x80002678: addiu       $v0, $v0, 0x3B20
    ctx->r2 = ADD32(ctx->r2, 0X3B20);
    // 0x8000267C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80002680: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80002684: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80002688: swc1        $f4, 0x6424($at)
    MEM_W(0X6424, ctx->r1) = ctx->f4.u32l;
    // 0x8000268C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80002690: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80002694: swc1        $f6, 0x6428($at)
    MEM_W(0X6428, ctx->r1) = ctx->f6.u32l;
    // 0x80002698: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8000269C: swc1        $f8, 0x642C($at)
    MEM_W(0X642C, ctx->r1) = ctx->f8.u32l;
    // 0x800026A0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800026A4: nop

    // 0x800026A8: swc1        $f4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f4.u32l;
    // 0x800026AC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800026B0: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800026B4: nop

    // 0x800026B8: swc1        $f10, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f10.u32l;
    // 0x800026BC: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x800026C0: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800026C4: nop

    // 0x800026C8: swc1        $f16, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f16.u32l;
L_800026CC:
    // 0x800026CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800026D0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800026D4: jr          $ra
    // 0x800026D8: nop

    return;
    // 0x800026D8: nop

;}
RECOMP_FUNC void func_800026DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800026DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800026E0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800026E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800026E8: lw          $a1, 0x30($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X30);
    // 0x800026EC: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x800026F0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800026F4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800026F8: lwc1        $f4, 0x58($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X58);
    // 0x800026FC: lhu         $t7, 0x2($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X2);
    // 0x80002700: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80002704: andi        $t8, $t7, 0xFFF8
    ctx->r24 = ctx->r15 & 0XFFF8;
    // 0x80002708: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8000270C: sh          $t8, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r24;
    // 0x80002710: lhu         $v1, 0xB78($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB78);
    // 0x80002714: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80002718: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8000271C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80002720: bne         $v1, $at, L_80002730
    if (ctx->r3 != ctx->r1) {
        // 0x80002724: lui         $v0, 0x8010
        ctx->r2 = S32(0X8010 << 16);
            goto L_80002730;
    }
    // 0x80002724: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x80002728: b           L_80002774
    // 0x8000272C: addiu       $a2, $a2, -0x46
    ctx->r6 = ADD32(ctx->r6, -0X46);
        goto L_80002774;
    // 0x8000272C: addiu       $a2, $a2, -0x46
    ctx->r6 = ADD32(ctx->r6, -0X46);
L_80002730:
    // 0x80002730: lbu         $v0, 0x5232($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5232);
    // 0x80002734: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80002738: bne         $v0, $at, L_8000274C
    if (ctx->r2 != ctx->r1) {
        // 0x8000273C: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_8000274C;
    }
    // 0x8000273C: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80002740: b           L_80002774
    // 0x80002744: addiu       $a2, $a2, -0xC8
    ctx->r6 = ADD32(ctx->r6, -0XC8);
        goto L_80002774;
    // 0x80002744: addiu       $a2, $a2, -0xC8
    ctx->r6 = ADD32(ctx->r6, -0XC8);
    // 0x80002748: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
L_8000274C:
    // 0x8000274C: bne         $v0, $at, L_8000275C
    if (ctx->r2 != ctx->r1) {
        // 0x80002750: lui         $t9, 0x8011
        ctx->r25 = S32(0X8011 << 16);
            goto L_8000275C;
    }
    // 0x80002750: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80002754: b           L_80002774
    // 0x80002758: addiu       $a2, $a2, -0x96
    ctx->r6 = ADD32(ctx->r6, -0X96);
        goto L_80002774;
    // 0x80002758: addiu       $a2, $a2, -0x96
    ctx->r6 = ADD32(ctx->r6, -0X96);
L_8000275C:
    // 0x8000275C: lbu         $t9, -0x301C($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X301C);
    // 0x80002760: nop

    // 0x80002764: andi        $t0, $t9, 0x4
    ctx->r8 = ctx->r25 & 0X4;
    // 0x80002768: beq         $t0, $zero, L_80002774
    if (ctx->r8 == 0) {
        // 0x8000276C: nop
    
            goto L_80002774;
    }
    // 0x8000276C: nop

    // 0x80002770: addiu       $a2, $a2, -0x46
    ctx->r6 = ADD32(ctx->r6, -0X46);
L_80002774:
    // 0x80002774: bne         $v1, $zero, L_800027C0
    if (ctx->r3 != 0) {
        // 0x80002778: lui         $t1, 0x8011
        ctx->r9 = S32(0X8011 << 16);
            goto L_800027C0;
    }
    // 0x80002778: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8000277C: lbu         $t1, -0x2FAF($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X2FAF);
    // 0x80002780: lui         $t2, 0x8009
    ctx->r10 = S32(0X8009 << 16);
    // 0x80002784: bne         $t1, $zero, L_800027C0
    if (ctx->r9 != 0) {
        // 0x80002788: nop
    
            goto L_800027C0;
    }
    // 0x80002788: nop

    // 0x8000278C: lw          $t2, 0x3B90($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X3B90);
    // 0x80002790: nop

    // 0x80002794: slti        $at, $t2, 0xB
    ctx->r1 = SIGNED(ctx->r10) < 0XB ? 1 : 0;
    // 0x80002798: bne         $at, $zero, L_800027B0
    if (ctx->r1 != 0) {
        // 0x8000279C: nop
    
            goto L_800027B0;
    }
    // 0x8000279C: nop

    // 0x800027A0: jal         0x80002C30
    // 0x800027A4: nop

    func_80002C30(rdram, ctx);
        goto after_0;
    // 0x800027A4: nop

    after_0:
    // 0x800027A8: b           L_800027CC
    // 0x800027AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800027CC;
    // 0x800027AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800027B0:
    // 0x800027B0: jal         0x80002B3C
    // 0x800027B4: nop

    func_80002B3C(rdram, ctx);
        goto after_1;
    // 0x800027B4: nop

    after_1:
    // 0x800027B8: b           L_800027CC
    // 0x800027BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800027CC;
    // 0x800027BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800027C0:
    // 0x800027C0: jal         0x80002B3C
    // 0x800027C4: nop

    func_80002B3C(rdram, ctx);
        goto after_2;
    // 0x800027C4: nop

    after_2:
    // 0x800027C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800027CC:
    // 0x800027CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800027D0: jr          $ra
    // 0x800027D4: nop

    return;
    // 0x800027D4: nop

;}
RECOMP_FUNC void func_800027D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800027D8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800027DC: lw          $v0, 0x398($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X398);
    // 0x800027E0: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x800027E4: bne         $v0, $zero, L_80002800
    if (ctx->r2 != 0) {
        // 0x800027E8: lui         $a1, 0x8012
        ctx->r5 = S32(0X8012 << 16);
            goto L_80002800;
    }
    // 0x800027E8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800027EC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800027F0: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x800027F4: addiu       $v1, $v1, 0x3B80
    ctx->r3 = ADD32(ctx->r3, 0X3B80);
    // 0x800027F8: b           L_8000283C
    // 0x800027FC: addiu       $a1, $a1, 0xB72
    ctx->r5 = ADD32(ctx->r5, 0XB72);
        goto L_8000283C;
    // 0x800027FC: addiu       $a1, $a1, 0xB72
    ctx->r5 = ADD32(ctx->r5, 0XB72);
L_80002800:
    // 0x80002800: addiu       $a1, $a1, 0xB72
    ctx->r5 = ADD32(ctx->r5, 0XB72);
    // 0x80002804: lhu         $t6, 0x0($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X0);
    // 0x80002808: addiu       $v1, $v1, 0x3B80
    ctx->r3 = ADD32(ctx->r3, 0X3B80);
    // 0x8000280C: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x80002810: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x80002814: nop

    // 0x80002818: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8000281C: beq         $t9, $zero, L_8000283C
    if (ctx->r25 == 0) {
        // 0x80002820: nop
    
            goto L_8000283C;
    }
    // 0x80002820: nop

    // 0x80002824: lw          $t0, 0xCC($v0)
    ctx->r8 = MEM_W(ctx->r2, 0XCC);
    // 0x80002828: nop

    // 0x8000282C: bne         $a0, $t0, L_8000283C
    if (ctx->r4 != ctx->r8) {
        // 0x80002830: nop
    
            goto L_8000283C;
    }
    // 0x80002830: nop

    // 0x80002834: jr          $ra
    // 0x80002838: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80002838: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000283C:
    // 0x8000283C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80002840: lw          $v0, 0x3F0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3F0);
    // 0x80002844: nop

    // 0x80002848: beq         $v0, $zero, L_8000288C
    if (ctx->r2 == 0) {
        // 0x8000284C: nop
    
            goto L_8000288C;
    }
    // 0x8000284C: nop

    // 0x80002850: lhu         $t1, 0x0($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X0);
    // 0x80002854: nop

    // 0x80002858: addu        $t2, $v1, $t1
    ctx->r10 = ADD32(ctx->r3, ctx->r9);
    // 0x8000285C: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x80002860: nop

    // 0x80002864: sra         $t4, $t3, 1
    ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
    // 0x80002868: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x8000286C: beq         $t5, $zero, L_8000288C
    if (ctx->r13 == 0) {
        // 0x80002870: nop
    
            goto L_8000288C;
    }
    // 0x80002870: nop

    // 0x80002874: lw          $t6, 0xCC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XCC);
    // 0x80002878: nop

    // 0x8000287C: bne         $a0, $t6, L_8000288C
    if (ctx->r4 != ctx->r14) {
        // 0x80002880: nop
    
            goto L_8000288C;
    }
    // 0x80002880: nop

    // 0x80002884: jr          $ra
    // 0x80002888: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80002888: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000288C:
    // 0x8000288C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80002890: lw          $v0, 0x448($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X448);
    // 0x80002894: nop

    // 0x80002898: beq         $v0, $zero, L_800028DC
    if (ctx->r2 == 0) {
        // 0x8000289C: nop
    
            goto L_800028DC;
    }
    // 0x8000289C: nop

    // 0x800028A0: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x800028A4: nop

    // 0x800028A8: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x800028AC: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x800028B0: nop

    // 0x800028B4: sra         $t0, $t9, 2
    ctx->r8 = S32(SIGNED(ctx->r25) >> 2);
    // 0x800028B8: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x800028BC: beq         $t1, $zero, L_800028DC
    if (ctx->r9 == 0) {
        // 0x800028C0: nop
    
            goto L_800028DC;
    }
    // 0x800028C0: nop

    // 0x800028C4: lw          $t2, 0xCC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XCC);
    // 0x800028C8: nop

    // 0x800028CC: bne         $a0, $t2, L_800028DC
    if (ctx->r4 != ctx->r10) {
        // 0x800028D0: nop
    
            goto L_800028DC;
    }
    // 0x800028D0: nop

    // 0x800028D4: jr          $ra
    // 0x800028D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800028D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800028DC:
    // 0x800028DC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800028E0: lw          $v0, 0x4A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4A0);
    // 0x800028E4: nop

    // 0x800028E8: beq         $v0, $zero, L_8000292C
    if (ctx->r2 == 0) {
        // 0x800028EC: nop
    
            goto L_8000292C;
    }
    // 0x800028EC: nop

    // 0x800028F0: lhu         $t3, 0x0($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X0);
    // 0x800028F4: nop

    // 0x800028F8: addu        $t4, $v1, $t3
    ctx->r12 = ADD32(ctx->r3, ctx->r11);
    // 0x800028FC: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x80002900: nop

    // 0x80002904: sra         $t6, $t5, 3
    ctx->r14 = S32(SIGNED(ctx->r13) >> 3);
    // 0x80002908: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8000290C: beq         $t7, $zero, L_8000292C
    if (ctx->r15 == 0) {
        // 0x80002910: nop
    
            goto L_8000292C;
    }
    // 0x80002910: nop

    // 0x80002914: lw          $t8, 0xCC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XCC);
    // 0x80002918: nop

    // 0x8000291C: bne         $a0, $t8, L_80002930
    if (ctx->r4 != ctx->r24) {
        // 0x80002920: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80002930;
    }
    // 0x80002920: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80002924: jr          $ra
    // 0x80002928: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80002928: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000292C:
    // 0x8000292C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80002930:
    // 0x80002930: jr          $ra
    // 0x80002934: nop

    return;
    // 0x80002934: nop

;}
RECOMP_FUNC void func_80002938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002938: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8000293C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80002940: lbu         $t6, -0x2FAF($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X2FAF);
    // 0x80002944: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80002948: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x8000294C: beq         $t6, $zero, L_80002968
    if (ctx->r14 == 0) {
        // 0x80002950: addiu       $a3, $sp, 0x40
        ctx->r7 = ADD32(ctx->r29, 0X40);
            goto L_80002968;
    }
    // 0x80002950: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    // 0x80002954: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80002958: lwc1        $f5, 0x2C00($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X2C00);
    // 0x8000295C: lwc1        $f4, 0x2C04($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2C04);
    // 0x80002960: b           L_8000297C
    // 0x80002964: cvt.s.d     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f16.fl = CVT_S_D(ctx->f4.d);
        goto L_8000297C;
    // 0x80002964: cvt.s.d     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f16.fl = CVT_S_D(ctx->f4.d);
L_80002968:
    // 0x80002968: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000296C: lwc1        $f7, 0x2C08($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X2C08);
    // 0x80002970: lwc1        $f6, 0x2C0C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2C0C);
    // 0x80002974: nop

    // 0x80002978: cvt.s.d     $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f16.fl = CVT_S_D(ctx->f6.d);
L_8000297C:
    // 0x8000297C: lwc1        $f12, 0x38($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X38);
    // 0x80002980: lwc1        $f14, 0x40($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X40);
    // 0x80002984: lw          $a2, 0x44($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X44);
    // 0x80002988: addiu       $t7, $sp, 0x3C
    ctx->r15 = ADD32(ctx->r29, 0X3C);
    // 0x8000298C: addiu       $t8, $sp, 0x38
    ctx->r24 = ADD32(ctx->r29, 0X38);
    // 0x80002990: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80002994: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80002998: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x8000299C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x800029A0: jal         0x80004650
    // 0x800029A4: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    func_80004650(rdram, ctx);
        goto after_0;
    // 0x800029A4: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_0:
    // 0x800029A8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800029AC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800029B0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800029B4: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x800029B8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x800029BC: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x800029C0: ori         $at, $at, 0x9E34
    ctx->r1 = ctx->r1 | 0X9E34;
    // 0x800029C4: lw          $v0, 0x44($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X44);
    // 0x800029C8: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800029CC: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x800029D0: beq         $a0, $t0, L_800029E8
    if (ctx->r4 == ctx->r8) {
        // 0x800029D4: lui         $t2, 0x8012
        ctx->r10 = S32(0X8012 << 16);
            goto L_800029E8;
    }
    // 0x800029D4: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800029D8: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x800029DC: lbu         $t1, 0x5232($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X5232);
    // 0x800029E0: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x800029E4: bne         $t1, $at, L_800029F4
    if (ctx->r9 != ctx->r1) {
        // 0x800029E8: lui         $at, 0x4140
        ctx->r1 = S32(0X4140 << 16);
            goto L_800029F4;
    }
L_800029E8:
    // 0x800029E8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800029EC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800029F0: nop

L_800029F4:
    // 0x800029F4: lhu         $t2, 0xB78($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0XB78);
    // 0x800029F8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x800029FC: bne         $t2, $at, L_80002A10
    if (ctx->r10 != ctx->r1) {
        // 0x80002A00: lui         $t3, 0x8011
        ctx->r11 = S32(0X8011 << 16);
            goto L_80002A10;
    }
    // 0x80002A00: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x80002A04: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80002A08: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80002A0C: nop

L_80002A10:
    // 0x80002A10: lw          $t3, -0x2F98($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X2F98);
    // 0x80002A14: lui         $t4, 0x3
    ctx->r12 = S32(0X3 << 16);
    // 0x80002A18: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80002A1C: lbu         $t4, -0x765E($t4)
    ctx->r12 = MEM_BU(ctx->r12, -0X765E);
    // 0x80002A20: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80002A24: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80002A28: bne         $t4, $at, L_80002A38
    if (ctx->r12 != ctx->r1) {
        // 0x80002A2C: lui         $at, 0x42F0
        ctx->r1 = S32(0X42F0 << 16);
            goto L_80002A38;
    }
    // 0x80002A2C: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80002A30: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80002A34: nop

L_80002A38:
    // 0x80002A38: c.le.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl <= ctx->f0.fl;
    // 0x80002A3C: lwc1        $f18, 0x38($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80002A40: bc1f        L_80002A5C
    if (!c1cs) {
        // 0x80002A44: lui         $at, 0x4316
        ctx->r1 = S32(0X4316 << 16);
            goto L_80002A5C;
    }
    // 0x80002A44: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80002A48: lhu         $t5, 0x2($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X2);
    // 0x80002A4C: nop

    // 0x80002A50: ori         $t6, $t5, 0x8
    ctx->r14 = ctx->r13 | 0X8;
    // 0x80002A54: b           L_80002B2C
    // 0x80002A58: sh          $t6, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r14;
        goto L_80002B2C;
    // 0x80002A58: sh          $t6, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r14;
L_80002A5C:
    // 0x80002A5C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80002A60: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80002A64: div.s       $f0, $f10, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80002A68: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80002A6C: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80002A70: neg.s       $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = -ctx->f16.fl;
    // 0x80002A74: swc1        $f4, 0x50($v0)
    MEM_W(0X50, ctx->r2) = ctx->f4.u32l;
    // 0x80002A78: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80002A7C: nop

    // 0x80002A80: swc1        $f6, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->f6.u32l;
    // 0x80002A84: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80002A88: nop

    // 0x80002A8C: swc1        $f8, 0x58($v0)
    MEM_W(0X58, ctx->r2) = ctx->f8.u32l;
    // 0x80002A90: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80002A94: div.s       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80002A98: add.s       $f4, $f2, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f18.fl;
    // 0x80002A9C: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x80002AA0: nop

    // 0x80002AA4: bc1t        L_80002B08
    if (c1cs) {
        // 0x80002AA8: nop
    
            goto L_80002B08;
    }
    // 0x80002AA8: nop

    // 0x80002AAC: sub.s       $f6, $f18, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f2.fl;
    // 0x80002AB0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80002AB4: c.lt.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl < ctx->f6.fl;
    // 0x80002AB8: nop

    // 0x80002ABC: bc1t        L_80002B08
    if (c1cs) {
        // 0x80002AC0: nop
    
            goto L_80002B08;
    }
    // 0x80002AC0: nop

    // 0x80002AC4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80002AC8: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80002ACC: div.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80002AD0: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80002AD4: add.s       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f2.fl;
    // 0x80002AD8: c.lt.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl < ctx->f12.fl;
    // 0x80002ADC: nop

    // 0x80002AE0: bc1t        L_80002B08
    if (c1cs) {
        // 0x80002AE4: nop
    
            goto L_80002B08;
    }
    // 0x80002AE4: nop

    // 0x80002AE8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80002AEC: nop

    // 0x80002AF0: div.s       $f6, $f0, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    // 0x80002AF4: sub.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f6.fl;
    // 0x80002AF8: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x80002AFC: nop

    // 0x80002B00: bc1f        L_80002B1C
    if (!c1cs) {
        // 0x80002B04: nop
    
            goto L_80002B1C;
    }
    // 0x80002B04: nop

L_80002B08:
    // 0x80002B08: lhu         $t7, 0x2($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X2);
    // 0x80002B0C: nop

    // 0x80002B10: ori         $t8, $t7, 0x8
    ctx->r24 = ctx->r15 | 0X8;
    // 0x80002B14: b           L_80002B2C
    // 0x80002B18: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
        goto L_80002B2C;
    // 0x80002B18: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
L_80002B1C:
    // 0x80002B1C: lhu         $t9, 0x2($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X2);
    // 0x80002B20: nop

    // 0x80002B24: andi        $t0, $t9, 0xFFF7
    ctx->r8 = ctx->r25 & 0XFFF7;
    // 0x80002B28: sh          $t0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r8;
L_80002B2C:
    // 0x80002B2C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80002B30: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80002B34: jr          $ra
    // 0x80002B38: nop

    return;
    // 0x80002B38: nop

;}
RECOMP_FUNC void func_80002B3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002B3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80002B40: slti        $at, $a2, 0x64
    ctx->r1 = SIGNED(ctx->r6) < 0X64 ? 1 : 0;
    // 0x80002B44: beq         $at, $zero, L_80002B58
    if (ctx->r1 == 0) {
        // 0x80002B48: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80002B58;
    }
    // 0x80002B48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002B4C: lhu         $t6, 0x2($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X2);
    // 0x80002B50: b           L_80002C20
    // 0x80002B54: sh          $t6, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r14;
        goto L_80002C20;
    // 0x80002B54: sh          $t6, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r14;
L_80002B58:
    // 0x80002B58: slti        $at, $a2, 0x96
    ctx->r1 = SIGNED(ctx->r6) < 0X96 ? 1 : 0;
    // 0x80002B5C: beq         $at, $zero, L_80002B7C
    if (ctx->r1 == 0) {
        // 0x80002B60: slti        $at, $a2, 0xDC
        ctx->r1 = SIGNED(ctx->r6) < 0XDC ? 1 : 0;
            goto L_80002B7C;
    }
    // 0x80002B60: slti        $at, $a2, 0xDC
    ctx->r1 = SIGNED(ctx->r6) < 0XDC ? 1 : 0;
    // 0x80002B64: lhu         $t7, 0x2($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X2);
    // 0x80002B68: nop

    // 0x80002B6C: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x80002B70: b           L_80002C20
    // 0x80002B74: sh          $t8, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r24;
        goto L_80002C20;
    // 0x80002B74: sh          $t8, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r24;
    // 0x80002B78: slti        $at, $a2, 0xDC
    ctx->r1 = SIGNED(ctx->r6) < 0XDC ? 1 : 0;
L_80002B7C:
    // 0x80002B7C: bne         $at, $zero, L_80002BA0
    if (ctx->r1 != 0) {
        // 0x80002B80: nop
    
            goto L_80002BA0;
    }
    // 0x80002B80: nop

    // 0x80002B84: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80002B88: jal         0x800027D8
    // 0x80002B8C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800027D8(rdram, ctx);
        goto after_0;
    // 0x80002B8C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80002B90: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80002B94: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80002B98: beq         $v0, $zero, L_80002BB4
    if (ctx->r2 == 0) {
        // 0x80002B9C: slti        $at, $a2, 0x12C
        ctx->r1 = SIGNED(ctx->r6) < 0X12C ? 1 : 0;
            goto L_80002BB4;
    }
    // 0x80002B9C: slti        $at, $a2, 0x12C
    ctx->r1 = SIGNED(ctx->r6) < 0X12C ? 1 : 0;
L_80002BA0:
    // 0x80002BA0: lhu         $t9, 0x2($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X2);
    // 0x80002BA4: nop

    // 0x80002BA8: ori         $t0, $t9, 0x2
    ctx->r8 = ctx->r25 | 0X2;
    // 0x80002BAC: b           L_80002C20
    // 0x80002BB0: sh          $t0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r8;
        goto L_80002C20;
    // 0x80002BB0: sh          $t0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r8;
L_80002BB4:
    // 0x80002BB4: beq         $at, $zero, L_80002BD4
    if (ctx->r1 == 0) {
        // 0x80002BB8: slti        $at, $a2, 0x1F4
        ctx->r1 = SIGNED(ctx->r6) < 0X1F4 ? 1 : 0;
            goto L_80002BD4;
    }
    // 0x80002BB8: slti        $at, $a2, 0x1F4
    ctx->r1 = SIGNED(ctx->r6) < 0X1F4 ? 1 : 0;
    // 0x80002BBC: lhu         $t1, 0x2($a1)
    ctx->r9 = MEM_HU(ctx->r5, 0X2);
    // 0x80002BC0: nop

    // 0x80002BC4: ori         $t2, $t1, 0x3
    ctx->r10 = ctx->r9 | 0X3;
    // 0x80002BC8: b           L_80002C20
    // 0x80002BCC: sh          $t2, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r10;
        goto L_80002C20;
    // 0x80002BCC: sh          $t2, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r10;
    // 0x80002BD0: slti        $at, $a2, 0x1F4
    ctx->r1 = SIGNED(ctx->r6) < 0X1F4 ? 1 : 0;
L_80002BD4:
    // 0x80002BD4: beq         $at, $zero, L_80002BF4
    if (ctx->r1 == 0) {
        // 0x80002BD8: slti        $at, $a2, 0x2EE
        ctx->r1 = SIGNED(ctx->r6) < 0X2EE ? 1 : 0;
            goto L_80002BF4;
    }
    // 0x80002BD8: slti        $at, $a2, 0x2EE
    ctx->r1 = SIGNED(ctx->r6) < 0X2EE ? 1 : 0;
    // 0x80002BDC: lhu         $t3, 0x2($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X2);
    // 0x80002BE0: nop

    // 0x80002BE4: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x80002BE8: b           L_80002C20
    // 0x80002BEC: sh          $t4, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r12;
        goto L_80002C20;
    // 0x80002BEC: sh          $t4, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r12;
    // 0x80002BF0: slti        $at, $a2, 0x2EE
    ctx->r1 = SIGNED(ctx->r6) < 0X2EE ? 1 : 0;
L_80002BF4:
    // 0x80002BF4: beq         $at, $zero, L_80002C10
    if (ctx->r1 == 0) {
        // 0x80002BF8: nop
    
            goto L_80002C10;
    }
    // 0x80002BF8: nop

    // 0x80002BFC: lhu         $t5, 0x2($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X2);
    // 0x80002C00: nop

    // 0x80002C04: ori         $t6, $t5, 0x5
    ctx->r14 = ctx->r13 | 0X5;
    // 0x80002C08: b           L_80002C20
    // 0x80002C0C: sh          $t6, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r14;
        goto L_80002C20;
    // 0x80002C0C: sh          $t6, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r14;
L_80002C10:
    // 0x80002C10: lhu         $t7, 0x2($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X2);
    // 0x80002C14: nop

    // 0x80002C18: ori         $t8, $t7, 0x6
    ctx->r24 = ctx->r15 | 0X6;
    // 0x80002C1C: sh          $t8, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r24;
L_80002C20:
    // 0x80002C20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80002C24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80002C28: jr          $ra
    // 0x80002C2C: nop

    return;
    // 0x80002C2C: nop

;}
RECOMP_FUNC void func_80002C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002C30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80002C34: slti        $at, $a2, 0x50
    ctx->r1 = SIGNED(ctx->r6) < 0X50 ? 1 : 0;
    // 0x80002C38: beq         $at, $zero, L_80002C54
    if (ctx->r1 == 0) {
        // 0x80002C3C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80002C54;
    }
    // 0x80002C3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002C40: lhu         $t6, 0x2($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X2);
    // 0x80002C44: nop

    // 0x80002C48: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x80002C4C: b           L_80002CFC
    // 0x80002C50: sh          $t7, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r15;
        goto L_80002CFC;
    // 0x80002C50: sh          $t7, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r15;
L_80002C54:
    // 0x80002C54: slti        $at, $a2, 0x64
    ctx->r1 = SIGNED(ctx->r6) < 0X64 ? 1 : 0;
    // 0x80002C58: beq         $at, $zero, L_80002C78
    if (ctx->r1 == 0) {
        // 0x80002C5C: slti        $at, $a2, 0x96
        ctx->r1 = SIGNED(ctx->r6) < 0X96 ? 1 : 0;
            goto L_80002C78;
    }
    // 0x80002C5C: slti        $at, $a2, 0x96
    ctx->r1 = SIGNED(ctx->r6) < 0X96 ? 1 : 0;
    // 0x80002C60: lhu         $t8, 0x2($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X2);
    // 0x80002C64: nop

    // 0x80002C68: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x80002C6C: b           L_80002CFC
    // 0x80002C70: sh          $t9, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r25;
        goto L_80002CFC;
    // 0x80002C70: sh          $t9, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r25;
    // 0x80002C74: slti        $at, $a2, 0x96
    ctx->r1 = SIGNED(ctx->r6) < 0X96 ? 1 : 0;
L_80002C78:
    // 0x80002C78: bne         $at, $zero, L_80002C9C
    if (ctx->r1 != 0) {
        // 0x80002C7C: nop
    
            goto L_80002C9C;
    }
    // 0x80002C7C: nop

    // 0x80002C80: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80002C84: jal         0x800027D8
    // 0x80002C88: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800027D8(rdram, ctx);
        goto after_0;
    // 0x80002C88: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80002C8C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80002C90: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80002C94: beq         $v0, $zero, L_80002CB0
    if (ctx->r2 == 0) {
        // 0x80002C98: slti        $at, $a2, 0x12C
        ctx->r1 = SIGNED(ctx->r6) < 0X12C ? 1 : 0;
            goto L_80002CB0;
    }
    // 0x80002C98: slti        $at, $a2, 0x12C
    ctx->r1 = SIGNED(ctx->r6) < 0X12C ? 1 : 0;
L_80002C9C:
    // 0x80002C9C: lhu         $t0, 0x2($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X2);
    // 0x80002CA0: nop

    // 0x80002CA4: ori         $t1, $t0, 0x3
    ctx->r9 = ctx->r8 | 0X3;
    // 0x80002CA8: b           L_80002CFC
    // 0x80002CAC: sh          $t1, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r9;
        goto L_80002CFC;
    // 0x80002CAC: sh          $t1, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r9;
L_80002CB0:
    // 0x80002CB0: beq         $at, $zero, L_80002CD0
    if (ctx->r1 == 0) {
        // 0x80002CB4: slti        $at, $a2, 0x1F4
        ctx->r1 = SIGNED(ctx->r6) < 0X1F4 ? 1 : 0;
            goto L_80002CD0;
    }
    // 0x80002CB4: slti        $at, $a2, 0x1F4
    ctx->r1 = SIGNED(ctx->r6) < 0X1F4 ? 1 : 0;
    // 0x80002CB8: lhu         $t2, 0x2($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X2);
    // 0x80002CBC: nop

    // 0x80002CC0: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x80002CC4: b           L_80002CFC
    // 0x80002CC8: sh          $t3, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r11;
        goto L_80002CFC;
    // 0x80002CC8: sh          $t3, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r11;
    // 0x80002CCC: slti        $at, $a2, 0x1F4
    ctx->r1 = SIGNED(ctx->r6) < 0X1F4 ? 1 : 0;
L_80002CD0:
    // 0x80002CD0: beq         $at, $zero, L_80002CEC
    if (ctx->r1 == 0) {
        // 0x80002CD4: nop
    
            goto L_80002CEC;
    }
    // 0x80002CD4: nop

    // 0x80002CD8: lhu         $t4, 0x2($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X2);
    // 0x80002CDC: nop

    // 0x80002CE0: ori         $t5, $t4, 0x5
    ctx->r13 = ctx->r12 | 0X5;
    // 0x80002CE4: b           L_80002CFC
    // 0x80002CE8: sh          $t5, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r13;
        goto L_80002CFC;
    // 0x80002CE8: sh          $t5, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r13;
L_80002CEC:
    // 0x80002CEC: lhu         $t6, 0x2($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X2);
    // 0x80002CF0: nop

    // 0x80002CF4: ori         $t7, $t6, 0x6
    ctx->r15 = ctx->r14 | 0X6;
    // 0x80002CF8: sh          $t7, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r15;
L_80002CFC:
    // 0x80002CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80002D00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80002D04: jr          $ra
    // 0x80002D08: nop

    return;
    // 0x80002D08: nop

;}
RECOMP_FUNC void func_80002D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002D0C: jr          $ra
    // 0x80002D10: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80002D10: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80002D14: nop

    // 0x80002D18: nop

    // 0x80002D1C: nop

;}
RECOMP_FUNC void func_80002D20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002D20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80002D24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002D28: jal         0x800047C8
    // 0x80002D2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800047C8(rdram, ctx);
        goto after_0;
    // 0x80002D2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80002D30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80002D34: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80002D38: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x80002D3C: addiu       $t7, $t7, 0x2AD0
    ctx->r15 = ADD32(ctx->r15, 0X2AD0);
    // 0x80002D40: sll         $t6, $a0, 14
    ctx->r14 = S32(ctx->r4 << 14);
    // 0x80002D44: addiu       $v0, $v0, -0x552C
    ctx->r2 = ADD32(ctx->r2, -0X552C);
    // 0x80002D48: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80002D4C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80002D50: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80002D54: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80002D58: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x80002D5C: sw          $t8, -0x5530($at)
    MEM_W(-0X5530, ctx->r1) = ctx->r24;
    // 0x80002D60: addiu       $t1, $t1, -0x5528
    ctx->r9 = ADD32(ctx->r9, -0X5528);
    // 0x80002D64: sll         $t0, $a0, 13
    ctx->r8 = S32(ctx->r4 << 13);
    // 0x80002D68: addiu       $v1, $v1, -0x1524
    ctx->r3 = ADD32(ctx->r3, -0X1524);
    // 0x80002D6C: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80002D70: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x80002D74: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80002D78: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x80002D7C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80002D80: sw          $t2, -0x1528($at)
    MEM_W(-0X1528, ctx->r1) = ctx->r10;
    // 0x80002D84: addiu       $t5, $t5, -0x1520
    ctx->r13 = ADD32(ctx->r13, -0X1520);
    // 0x80002D88: sll         $t4, $a0, 12
    ctx->r12 = S32(ctx->r4 << 12);
    // 0x80002D8C: addiu       $a1, $a1, 0xAE4
    ctx->r5 = ADD32(ctx->r5, 0XAE4);
    // 0x80002D90: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80002D94: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80002D98: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80002D9C: jal         0x800049AC
    // 0x80002DA0: sw          $t6, 0xAE0($at)
    MEM_W(0XAE0, ctx->r1) = ctx->r14;
    func_800049AC(rdram, ctx);
        goto after_1;
    // 0x80002DA0: sw          $t6, 0xAE0($at)
    MEM_W(0XAE0, ctx->r1) = ctx->r14;
    after_1:
    // 0x80002DA4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80002DA8: bne         $v0, $zero, L_80002E30
    if (ctx->r2 != 0) {
        // 0x80002DAC: lui         $v1, 0x8013
        ctx->r3 = S32(0X8013 << 16);
            goto L_80002E30;
    }
    // 0x80002DAC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x80002DB0: sll         $t0, $a0, 4
    ctx->r8 = S32(ctx->r4 << 4);
    // 0x80002DB4: subu        $t0, $t0, $a0
    ctx->r8 = SUB32(ctx->r8, ctx->r4);
    // 0x80002DB8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80002DBC: subu        $t0, $t0, $a0
    ctx->r8 = SUB32(ctx->r8, ctx->r4);
    // 0x80002DC0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80002DC4: lui         $t8, 0x8037
    ctx->r24 = S32(0X8037 << 16);
    // 0x80002DC8: addiu       $t8, $t8, -0x4A00
    ctx->r24 = ADD32(ctx->r24, -0X4A00);
    // 0x80002DCC: subu        $t0, $t0, $a0
    ctx->r8 = SUB32(ctx->r8, ctx->r4);
    // 0x80002DD0: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80002DD4: sll         $t3, $a0, 2
    ctx->r11 = S32(ctx->r4 << 2);
    // 0x80002DD8: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80002DDC: sll         $t0, $t0, 7
    ctx->r8 = S32(ctx->r8 << 7);
    // 0x80002DE0: subu        $t3, $t3, $a0
    ctx->r11 = SUB32(ctx->r11, ctx->r4);
    // 0x80002DE4: lui         $t4, 0x802F
    ctx->r12 = S32(0X802F << 16);
    // 0x80002DE8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x80002DEC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80002DF0: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80002DF4: addiu       $t4, $t4, 0x5F20
    ctx->r12 = ADD32(ctx->r12, 0X5F20);
    // 0x80002DF8: sll         $t3, $t3, 12
    ctx->r11 = S32(ctx->r11 << 12);
    // 0x80002DFC: addiu       $a1, $a1, 0xAEC
    ctx->r5 = ADD32(ctx->r5, 0XAEC);
    // 0x80002E00: addiu       $v1, $v1, 0xAE8
    ctx->r3 = ADD32(ctx->r3, 0XAE8);
    // 0x80002E04: addiu       $t2, $t1, 0x610
    ctx->r10 = ADD32(ctx->r9, 0X610);
    // 0x80002E08: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80002E0C: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
    // 0x80002E10: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    // 0x80002E14: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80002E18: addiu       $t6, $zero, 0x1D6
    ctx->r14 = ADD32(0, 0X1D6);
    // 0x80002E1C: sw          $t6, 0xAF8($at)
    MEM_W(0XAF8, ctx->r1) = ctx->r14;
    // 0x80002E20: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80002E24: addiu       $t7, $zero, 0x300
    ctx->r15 = ADD32(0, 0X300);
    // 0x80002E28: b           L_80002E78
    // 0x80002E2C: sw          $t7, 0xAFC($at)
    MEM_W(0XAFC, ctx->r1) = ctx->r15;
        goto L_80002E78;
    // 0x80002E2C: sw          $t7, 0xAFC($at)
    MEM_W(0XAFC, ctx->r1) = ctx->r15;
L_80002E30:
    // 0x80002E30: lui         $v0, 0x802F
    ctx->r2 = S32(0X802F << 16);
    // 0x80002E34: addiu       $v0, $v0, -0xE0
    ctx->r2 = ADD32(ctx->r2, -0XE0);
    // 0x80002E38: sll         $t8, $a0, 13
    ctx->r24 = S32(ctx->r4 << 13);
    // 0x80002E3C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80002E40: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80002E44: sll         $t1, $a0, 12
    ctx->r9 = S32(ctx->r4 << 12);
    // 0x80002E48: addiu       $a1, $a1, 0xAEC
    ctx->r5 = ADD32(ctx->r5, 0XAEC);
    // 0x80002E4C: addiu       $v1, $v1, 0xAE8
    ctx->r3 = ADD32(ctx->r3, 0XAE8);
    // 0x80002E50: addiu       $t0, $t9, 0x2000
    ctx->r8 = ADD32(ctx->r25, 0X2000);
    // 0x80002E54: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x80002E58: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x80002E5C: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x80002E60: addiu       $t3, $zero, 0x80
    ctx->r11 = ADD32(0, 0X80);
    // 0x80002E64: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80002E68: sw          $t3, 0xAF8($at)
    MEM_W(0XAF8, ctx->r1) = ctx->r11;
    // 0x80002E6C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80002E70: addiu       $t4, $zero, 0x100
    ctx->r12 = ADD32(0, 0X100);
    // 0x80002E74: sw          $t4, 0xAFC($at)
    MEM_W(0XAFC, ctx->r1) = ctx->r12;
L_80002E78:
    // 0x80002E78: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80002E7C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80002E80: sw          $t5, 0xAF0($at)
    MEM_W(0XAF0, ctx->r1) = ctx->r13;
    // 0x80002E84: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80002E88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80002E8C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80002E90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80002E94: jr          $ra
    // 0x80002E98: sw          $t6, 0xAF4($at)
    MEM_W(0XAF4, ctx->r1) = ctx->r14;
    return;
    // 0x80002E98: sw          $t6, 0xAF4($at)
    MEM_W(0XAF4, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_80002E9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002E9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80002EA0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80002EA4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80002EA8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80002EAC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80002EB0: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x80002EB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80002EB8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80002EBC: blez        $a1, L_80002F04
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80002EC0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80002F04;
    }
    // 0x80002EC0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80002EC4: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
L_80002EC8:
    // 0x80002EC8: lw          $t6, 0x30($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X30);
    // 0x80002ECC: nop

    // 0x80002ED0: beq         $t6, $zero, L_80002EF8
    if (ctx->r14 == 0) {
        // 0x80002ED4: nop
    
            goto L_80002EF8;
    }
    // 0x80002ED4: nop

    // 0x80002ED8: lhu         $t7, 0x0($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X0);
    // 0x80002EDC: nop

    // 0x80002EE0: bne         $s2, $t7, L_80002EF8
    if (ctx->r18 != ctx->r15) {
        // 0x80002EE4: nop
    
            goto L_80002EF8;
    }
    // 0x80002EE4: nop

    // 0x80002EE8: jal         0x800010A0
    // 0x80002EEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800010A0(rdram, ctx);
        goto after_0;
    // 0x80002EEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80002EF0: jal         0x800069A0
    // 0x80002EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800069A0(rdram, ctx);
        goto after_1;
    // 0x80002EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_80002EF8:
    // 0x80002EF8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80002EFC: bne         $s1, $s3, L_80002EC8
    if (ctx->r17 != ctx->r19) {
        // 0x80002F00: addiu       $s0, $s0, 0x34
        ctx->r16 = ADD32(ctx->r16, 0X34);
            goto L_80002EC8;
    }
    // 0x80002F00: addiu       $s0, $s0, 0x34
    ctx->r16 = ADD32(ctx->r16, 0X34);
L_80002F04:
    // 0x80002F04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80002F08: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80002F0C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80002F10: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80002F14: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80002F18: jr          $ra
    // 0x80002F1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80002F1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80002F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002F20: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80002F24: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x80002F28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80002F2C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80002F30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002F34: ori         $at, $at, 0x95E0
    ctx->r1 = ctx->r1 | 0X95E0;
    // 0x80002F38: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x80002F3C: jal         0x80002E9C
    // 0x80002F40: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80002E9C(rdram, ctx);
        goto after_0;
    // 0x80002F40: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x80002F44: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80002F48: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x80002F4C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80002F50: ori         $at, $at, 0x9E34
    ctx->r1 = ctx->r1 | 0X9E34;
    // 0x80002F54: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80002F58: jal         0x80002E9C
    // 0x80002F5C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80002E9C(rdram, ctx);
        goto after_1;
    // 0x80002F5C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x80002F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80002F64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80002F68: jr          $ra
    // 0x80002F6C: nop

    return;
    // 0x80002F6C: nop

;}
RECOMP_FUNC void func_80002F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002F70: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80002F74: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80002F78: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80002F7C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80002F80: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80002F84: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80002F88: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80002F8C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80002F90: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80002F94: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80002F98: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80002F9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80002FA0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80002FA4: blez        $a1, L_80003070
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80002FA8: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_80003070;
    }
    // 0x80002FA8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80002FAC: lui         $s5, 0x8009
    ctx->r21 = S32(0X8009 << 16);
    // 0x80002FB0: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x80002FB4: addiu       $s3, $s3, 0x3B90
    ctx->r19 = ADD32(ctx->r19, 0X3B90);
    // 0x80002FB8: addiu       $s5, $s5, 0x6980
    ctx->r21 = ADD32(ctx->r21, 0X6980);
    // 0x80002FBC: addiu       $fp, $zero, -0x8
    ctx->r30 = ADD32(0, -0X8);
    // 0x80002FC0: addiu       $s7, $zero, 0x8
    ctx->r23 = ADD32(0, 0X8);
    // 0x80002FC4: addiu       $s6, $zero, 0x7
    ctx->r22 = ADD32(0, 0X7);
    // 0x80002FC8: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
L_80002FCC:
    // 0x80002FCC: lhu         $t7, 0x0($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X0);
    // 0x80002FD0: lw          $s0, 0x30($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X30);
    // 0x80002FD4: bne         $s4, $t7, L_80003064
    if (ctx->r20 != ctx->r15) {
        // 0x80002FD8: lw          $t6, 0x44($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X44);
            goto L_80003064;
    }
    // 0x80002FD8: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80002FDC: beq         $s0, $zero, L_80003064
    if (ctx->r16 == 0) {
        // 0x80002FE0: lw          $t6, 0x44($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X44);
            goto L_80003064;
    }
    // 0x80002FE0: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80002FE4: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x80002FE8: nop

    // 0x80002FEC: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80002FF0: bne         $at, $zero, L_80003008
    if (ctx->r1 != 0) {
        // 0x80002FF4: nop
    
            goto L_80003008;
    }
    // 0x80002FF4: nop

    // 0x80002FF8: beq         $s6, $v0, L_80003008
    if (ctx->r22 == ctx->r2) {
        // 0x80002FFC: nop
    
            goto L_80003008;
    }
    // 0x80002FFC: nop

    // 0x80003000: bne         $s7, $v0, L_80003040
    if (ctx->r23 != ctx->r2) {
        // 0x80003004: nop
    
            goto L_80003040;
    }
    // 0x80003004: nop

L_80003008:
    // 0x80003008: jal         0x80002938
    // 0x8000300C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80002938(rdram, ctx);
        goto after_0;
    // 0x8000300C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x80003010: lhu         $t8, 0x2($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X2);
    // 0x80003014: nop

    // 0x80003018: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x8000301C: bne         $t9, $zero, L_80003064
    if (ctx->r25 != 0) {
        // 0x80003020: lw          $t6, 0x44($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X44);
            goto L_80003064;
    }
    // 0x80003020: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80003024: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x80003028: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8000302C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80003030: jal         0x800026DC
    // 0x80003034: sw          $t1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r9;
    func_800026DC(rdram, ctx);
        goto after_1;
    // 0x80003034: sw          $t1, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r9;
    after_1:
    // 0x80003038: b           L_80003064
    // 0x8000303C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
        goto L_80003064;
    // 0x8000303C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
L_80003040:
    // 0x80003040: jal         0x80002938
    // 0x80003044: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80002938(rdram, ctx);
        goto after_2;
    // 0x80003044: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80003048: lhu         $t2, 0x2($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X2);
    // 0x8000304C: nop

    // 0x80003050: and         $t4, $t2, $fp
    ctx->r12 = ctx->r10 & ctx->r30;
    // 0x80003054: sh          $t4, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r12;
    // 0x80003058: andi        $t5, $t4, 0xFFE7
    ctx->r13 = ctx->r12 & 0XFFE7;
    // 0x8000305C: sh          $t5, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r13;
    // 0x80003060: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
L_80003064:
    // 0x80003064: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80003068: bne         $s2, $t6, L_80002FCC
    if (ctx->r18 != ctx->r14) {
        // 0x8000306C: addiu       $s1, $s1, 0x34
        ctx->r17 = ADD32(ctx->r17, 0X34);
            goto L_80002FCC;
    }
    // 0x8000306C: addiu       $s1, $s1, 0x34
    ctx->r17 = ADD32(ctx->r17, 0X34);
L_80003070:
    // 0x80003070: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80003074: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80003078: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000307C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80003080: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80003084: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80003088: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8000308C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80003090: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80003094: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80003098: jr          $ra
    // 0x8000309C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8000309C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800030A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800030A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800030A4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800030A8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800030AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800030B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800030B4: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x800030B8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800030BC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800030C0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800030C4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800030C8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800030CC: blez        $a1, L_8000314C
    if (SIGNED(ctx->r5) <= 0) {
        // 0x800030D0: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8000314C;
    }
    // 0x800030D0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800030D4: lui         $s3, 0x8009
    ctx->r19 = S32(0X8009 << 16);
    // 0x800030D8: addiu       $s3, $s3, 0x6980
    ctx->r19 = ADD32(ctx->r19, 0X6980);
    // 0x800030DC: addiu       $s5, $zero, 0x8
    ctx->r21 = ADD32(0, 0X8);
    // 0x800030E0: addiu       $s4, $zero, 0x7
    ctx->r20 = ADD32(0, 0X7);
    // 0x800030E4: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
L_800030E8:
    // 0x800030E8: lhu         $t6, 0x0($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X0);
    // 0x800030EC: lw          $v1, 0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X30);
    // 0x800030F0: bne         $s2, $t6, L_80003140
    if (ctx->r18 != ctx->r14) {
        // 0x800030F4: nop
    
            goto L_80003140;
    }
    // 0x800030F4: nop

    // 0x800030F8: beq         $v1, $zero, L_80003140
    if (ctx->r3 == 0) {
        // 0x800030FC: nop
    
            goto L_80003140;
    }
    // 0x800030FC: nop

    // 0x80003100: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x80003104: nop

    // 0x80003108: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8000310C: bne         $at, $zero, L_80003124
    if (ctx->r1 != 0) {
        // 0x80003110: nop
    
            goto L_80003124;
    }
    // 0x80003110: nop

    // 0x80003114: beq         $s4, $v0, L_80003124
    if (ctx->r20 == ctx->r2) {
        // 0x80003118: nop
    
            goto L_80003124;
    }
    // 0x80003118: nop

    // 0x8000311C: bne         $s5, $v0, L_80003140
    if (ctx->r21 != ctx->r2) {
        // 0x80003120: nop
    
            goto L_80003140;
    }
    // 0x80003120: nop

L_80003124:
    // 0x80003124: lhu         $t7, 0x2($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X2);
    // 0x80003128: nop

    // 0x8000312C: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x80003130: bne         $t8, $zero, L_80003140
    if (ctx->r24 != 0) {
        // 0x80003134: nop
    
            goto L_80003140;
    }
    // 0x80003134: nop

    // 0x80003138: jal         0x800026DC
    // 0x8000313C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800026DC(rdram, ctx);
        goto after_0;
    // 0x8000313C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
L_80003140:
    // 0x80003140: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80003144: bne         $s1, $s6, L_800030E8
    if (ctx->r17 != ctx->r22) {
        // 0x80003148: addiu       $s0, $s0, 0x34
        ctx->r16 = ADD32(ctx->r16, 0X34);
            goto L_800030E8;
    }
    // 0x80003148: addiu       $s0, $s0, 0x34
    ctx->r16 = ADD32(ctx->r16, 0X34);
L_8000314C:
    // 0x8000314C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80003150: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80003154: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80003158: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8000315C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80003160: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80003164: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80003168: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8000316C: jr          $ra
    // 0x80003170: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80003170: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80003174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003174: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80003178: sw          $zero, 0x3B90($at)
    MEM_W(0X3B90, ctx->r1) = 0;
    // 0x8000317C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80003180: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x80003184: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80003188: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8000318C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80003190: ori         $at, $at, 0x95E0
    ctx->r1 = ctx->r1 | 0X95E0;
    // 0x80003194: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x80003198: jal         0x80002F70
    // 0x8000319C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80002F70(rdram, ctx);
        goto after_0;
    // 0x8000319C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x800031A0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800031A4: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x800031A8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800031AC: ori         $at, $at, 0x9E34
    ctx->r1 = ctx->r1 | 0X9E34;
    // 0x800031B0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800031B4: jal         0x80002F70
    // 0x800031B8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80002F70(rdram, ctx);
        goto after_1;
    // 0x800031B8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x800031BC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800031C0: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x800031C4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800031C8: ori         $at, $at, 0x95E0
    ctx->r1 = ctx->r1 | 0X95E0;
    // 0x800031CC: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x800031D0: jal         0x800030A0
    // 0x800031D4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800030A0(rdram, ctx);
        goto after_2;
    // 0x800031D4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_2:
    // 0x800031D8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800031DC: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x800031E0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800031E4: ori         $at, $at, 0x9E34
    ctx->r1 = ctx->r1 | 0X9E34;
    // 0x800031E8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800031EC: jal         0x800030A0
    // 0x800031F0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_800030A0(rdram, ctx);
        goto after_3;
    // 0x800031F0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_3:
    // 0x800031F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800031F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800031FC: jr          $ra
    // 0x80003200: nop

    return;
    // 0x80003200: nop

;}
RECOMP_FUNC void func_80003204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003204: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80003208: addiu       $v0, $v0, 0x361E
    ctx->r2 = ADD32(ctx->r2, 0X361E);
    // 0x8000320C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80003210: lhu         $t6, 0x0($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X0);
    // 0x80003214: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80003218: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8000321C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80003220: andi        $t7, $t6, 0xBFFF
    ctx->r15 = ctx->r14 & 0XBFFF;
    // 0x80003224: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80003228: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x8000322C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80003230: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80003234: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x80003238: blez        $a1, L_80003288
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8000323C: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80003288;
    }
    // 0x8000323C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80003240: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
L_80003244:
    // 0x80003244: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
    // 0x80003248: nop

    // 0x8000324C: bne         $s3, $t8, L_8000327C
    if (ctx->r19 != ctx->r24) {
        // 0x80003250: nop
    
            goto L_8000327C;
    }
    // 0x80003250: nop

    // 0x80003254: lw          $v0, 0x30($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X30);
    // 0x80003258: nop

    // 0x8000325C: beq         $v0, $zero, L_8000327C
    if (ctx->r2 == 0) {
        // 0x80003260: nop
    
            goto L_8000327C;
    }
    // 0x80003260: nop

    // 0x80003264: lbu         $t9, 0x1($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X1);
    // 0x80003268: nop

    // 0x8000326C: bne         $t9, $zero, L_8000327C
    if (ctx->r25 != 0) {
        // 0x80003270: nop
    
            goto L_8000327C;
    }
    // 0x80003270: nop

    // 0x80003274: jal         0x800012B0
    // 0x80003278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800012B0(rdram, ctx);
        goto after_0;
    // 0x80003278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
L_8000327C:
    // 0x8000327C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80003280: bne         $s1, $s2, L_80003244
    if (ctx->r17 != ctx->r18) {
        // 0x80003284: addiu       $s0, $s0, 0x34
        ctx->r16 = ADD32(ctx->r16, 0X34);
            goto L_80003244;
    }
    // 0x80003284: addiu       $s0, $s0, 0x34
    ctx->r16 = ADD32(ctx->r16, 0X34);
L_80003288:
    // 0x80003288: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8000328C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80003290: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80003294: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80003298: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8000329C: jr          $ra
    // 0x800032A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800032A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800032A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800032A4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x800032A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800032AC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800032B0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800032B4: jal         0x80004874
    // 0x800032B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80004874(rdram, ctx);
        goto after_0;
    // 0x800032B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x800032BC: beq         $v0, $zero, L_80003500
    if (ctx->r2 == 0) {
        // 0x800032C0: lui         $t6, 0x8010
        ctx->r14 = S32(0X8010 << 16);
            goto L_80003500;
    }
    // 0x800032C0: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x800032C4: lhu         $t6, 0x6968($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X6968);
    // 0x800032C8: nop

    // 0x800032CC: beq         $t6, $zero, L_80003504
    if (ctx->r14 == 0) {
        // 0x800032D0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80003504;
    }
    // 0x800032D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800032D4: jal         0x80004534
    // 0x800032D8: nop

    func_80004534(rdram, ctx);
        goto after_1;
    // 0x800032D8: nop

    after_1:
    // 0x800032DC: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x800032E0: addiu       $s0, $s0, -0x2F94
    ctx->r16 = ADD32(ctx->r16, -0X2F94);
    // 0x800032E4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800032E8: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800032EC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800032F0: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x800032F4: lui         $s2, 0xE700
    ctx->r18 = S32(0XE700 << 16);
    // 0x800032F8: addiu       $s1, $s1, -0x5530
    ctx->r17 = ADD32(ctx->r17, -0X5530);
    // 0x800032FC: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x80003300: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80003304: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80003308: nop

    // 0x8000330C: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80003310: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x80003314: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80003318: jal         0x80013A04
    // 0x8000331C: sw          $s2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r18;
    func_80013A04(rdram, ctx);
        goto after_2;
    // 0x8000331C: sw          $s2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r18;
    after_2:
    // 0x80003320: jal         0x800076AC
    // 0x80003324: nop

    func_800076AC(rdram, ctx);
        goto after_3;
    // 0x80003324: nop

    after_3:
    // 0x80003328: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8000332C: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x80003330: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80003334: ori         $at, $at, 0x95E0
    ctx->r1 = ctx->r1 | 0X95E0;
    // 0x80003338: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x8000333C: jal         0x80003204
    // 0x80003340: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80003204(rdram, ctx);
        goto after_4;
    // 0x80003340: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_4:
    // 0x80003344: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80003348: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x8000334C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80003350: ori         $at, $at, 0x9E34
    ctx->r1 = ctx->r1 | 0X9E34;
    // 0x80003354: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80003358: jal         0x80003204
    // 0x8000335C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80003204(rdram, ctx);
        goto after_5;
    // 0x8000335C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_5:
    // 0x80003360: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x80003364: addiu       $a2, $a2, 0xAE0
    ctx->r6 = ADD32(ctx->r6, 0XAE0);
    // 0x80003368: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x8000336C: lui         $t7, 0xBD00
    ctx->r15 = S32(0XBD00 << 16);
    // 0x80003370: addiu       $t9, $a0, 0x8
    ctx->r25 = ADD32(ctx->r4, 0X8);
    // 0x80003374: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80003378: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8000337C: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x80003380: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x80003384: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80003388: addiu       $t6, $a0, 0x8
    ctx->r14 = ADD32(ctx->r4, 0X8);
    // 0x8000338C: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80003390: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x80003394: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80003398: lw          $t8, 0x37A0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X37A0);
    // 0x8000339C: nop

    // 0x800033A0: bne         $t8, $zero, L_800033B8
    if (ctx->r24 != 0) {
        // 0x800033A4: nop
    
            goto L_800033B8;
    }
    // 0x800033A4: nop

    // 0x800033A8: jal         0x800099B4
    // 0x800033AC: nop

    func_800099B4(rdram, ctx);
        goto after_6;
    // 0x800033AC: nop

    after_6:
    // 0x800033B0: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x800033B4: addiu       $a2, $a2, 0xAE0
    ctx->r6 = ADD32(ctx->r6, 0XAE0);
L_800033B8:
    // 0x800033B8: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x800033BC: lui         $t7, 0xB800
    ctx->r15 = S32(0XB800 << 16);
    // 0x800033C0: addiu       $t9, $a0, 0x8
    ctx->r25 = ADD32(ctx->r4, 0X8);
    // 0x800033C4: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x800033C8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x800033CC: sw          $s2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r18;
    // 0x800033D0: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x800033D4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800033D8: addiu       $t6, $a0, 0x8
    ctx->r14 = ADD32(ctx->r4, 0X8);
    // 0x800033DC: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x800033E0: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x800033E4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800033E8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800033EC: lui         $t6, 0x600
    ctx->r14 = S32(0X600 << 16);
    // 0x800033F0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800033F4: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x800033F8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800033FC: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x80003400: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80003404: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80003408: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8000340C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80003410: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80003414: lw          $t7, 0xAE4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XAE4);
    // 0x80003418: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000341C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80003420: lw          $a1, -0x1528($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1528);
    // 0x80003424: lui         $t6, 0xB800
    ctx->r14 = S32(0XB800 << 16);
    // 0x80003428: addiu       $t8, $a1, 0x8
    ctx->r24 = ADD32(ctx->r5, 0X8);
    // 0x8000342C: sw          $t8, -0x1528($at)
    MEM_W(-0X1528, ctx->r1) = ctx->r24;
    // 0x80003430: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x80003434: sw          $s2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r18;
    // 0x80003438: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8000343C: lw          $a1, -0x1528($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1528);
    // 0x80003440: nop

    // 0x80003444: addiu       $t9, $a1, 0x8
    ctx->r25 = ADD32(ctx->r5, 0X8);
    // 0x80003448: sw          $t9, -0x1528($at)
    MEM_W(-0X1528, ctx->r1) = ctx->r25;
    // 0x8000344C: sw          $zero, 0x4($a1)
    MEM_W(0X4, ctx->r5) = 0;
    // 0x80003450: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80003454: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80003458: lui         $t9, 0x600
    ctx->r25 = S32(0X600 << 16);
    // 0x8000345C: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x80003460: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x80003464: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80003468: sw          $s2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r18;
    // 0x8000346C: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x80003470: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80003474: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x80003478: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x8000347C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80003480: lw          $t6, -0x1524($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1524);
    // 0x80003484: lui         $t8, 0xB900
    ctx->r24 = S32(0XB900 << 16);
    // 0x80003488: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8000348C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80003490: lui         $t6, 0xF0A
    ctx->r14 = S32(0XF0A << 16);
    // 0x80003494: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80003498: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x8000349C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x800034A0: ori         $t6, $t6, 0x4000
    ctx->r14 = ctx->r14 | 0X4000;
    // 0x800034A4: ori         $t8, $t8, 0x31D
    ctx->r24 = ctx->r24 | 0X31D;
    // 0x800034A8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800034AC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x800034B0: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x800034B4: lui         $t9, 0xF0A
    ctx->r25 = S32(0XF0A << 16);
    // 0x800034B8: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x800034BC: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x800034C0: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x800034C4: ori         $t9, $t9, 0x4000
    ctx->r25 = ctx->r25 | 0X4000;
    // 0x800034C8: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x800034CC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800034D0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800034D4: nop

    // 0x800034D8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800034DC: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x800034E0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800034E4: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x800034E8: lw          $v1, 0x0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X0);
    // 0x800034EC: nop

    // 0x800034F0: addiu       $t8, $v1, 0x8
    ctx->r24 = ADD32(ctx->r3, 0X8);
    // 0x800034F4: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x800034F8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800034FC: sw          $s2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r18;
L_80003500:
    // 0x80003500: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80003504:
    // 0x80003504: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80003508: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000350C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80003510: jr          $ra
    // 0x80003514: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80003514: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80003518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003518: blez        $a2, L_80003690
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8000351C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80003690;
    }
    // 0x8000351C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80003520: andi        $a3, $a2, 0x3
    ctx->r7 = ctx->r6 & 0X3;
    // 0x80003524: beq         $a3, $zero, L_80003584
    if (ctx->r7 == 0) {
        // 0x80003528: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_80003584;
    }
    // 0x80003528: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000352C: lwc1        $f2, 0x2DA8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X2DA8);
    // 0x80003530: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80003534: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_80003538:
    // 0x80003538: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x8000353C: sh          $zero, 0x2($a1)
    MEM_H(0X2, ctx->r5) = 0;
    // 0x80003540: sb          $zero, 0x1($a1)
    MEM_B(0X1, ctx->r5) = 0;
    // 0x80003544: sw          $a1, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r5;
    // 0x80003548: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8000354C: addiu       $a1, $a1, 0x5C
    ctx->r5 = ADD32(ctx->r5, 0X5C);
    // 0x80003550: swc1        $f2, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f2.u32l;
    // 0x80003554: swc1        $f2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f2.u32l;
    // 0x80003558: swc1        $f2, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f2.u32l;
    // 0x8000355C: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x80003560: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x80003564: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x80003568: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x8000356C: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x80003570: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x80003574: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x80003578: bne         $v1, $v0, L_80003538
    if (ctx->r3 != ctx->r2) {
        // 0x8000357C: addiu       $a0, $a0, 0x34
        ctx->r4 = ADD32(ctx->r4, 0X34);
            goto L_80003538;
    }
    // 0x8000357C: addiu       $a0, $a0, 0x34
    ctx->r4 = ADD32(ctx->r4, 0X34);
    // 0x80003580: beq         $v0, $a2, L_80003690
    if (ctx->r2 == ctx->r6) {
        // 0x80003584: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_80003690;
    }
L_80003584:
    // 0x80003584: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80003588: lwc1        $f2, 0x2DAC($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X2DAC);
    // 0x8000358C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80003590: nop

L_80003594:
    // 0x80003594: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x80003598: sh          $zero, 0x2($a1)
    MEM_H(0X2, ctx->r5) = 0;
    // 0x8000359C: sb          $zero, 0x1($a1)
    MEM_B(0X1, ctx->r5) = 0;
    // 0x800035A0: sw          $a1, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r5;
    // 0x800035A4: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x800035A8: swc1        $f0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f0.u32l;
    // 0x800035AC: swc1        $f0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f0.u32l;
    // 0x800035B0: swc1        $f0, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f0.u32l;
    // 0x800035B4: swc1        $f0, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f0.u32l;
    // 0x800035B8: swc1        $f0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f0.u32l;
    // 0x800035BC: swc1        $f0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f0.u32l;
    // 0x800035C0: swc1        $f2, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f2.u32l;
    // 0x800035C4: swc1        $f2, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f2.u32l;
    // 0x800035C8: swc1        $f2, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f2.u32l;
    // 0x800035CC: sb          $zero, 0x5D($a1)
    MEM_B(0X5D, ctx->r5) = 0;
    // 0x800035D0: sh          $zero, 0x5E($a1)
    MEM_H(0X5E, ctx->r5) = 0;
    // 0x800035D4: sw          $zero, 0x68($a1)
    MEM_W(0X68, ctx->r5) = 0;
    // 0x800035D8: addiu       $a1, $a1, 0x5C
    ctx->r5 = ADD32(ctx->r5, 0X5C);
    // 0x800035DC: sw          $a1, 0x64($a0)
    MEM_W(0X64, ctx->r4) = ctx->r5;
    // 0x800035E0: swc1        $f2, 0x58($a0)
    MEM_W(0X58, ctx->r4) = ctx->f2.u32l;
    // 0x800035E4: swc1        $f2, 0x54($a0)
    MEM_W(0X54, ctx->r4) = ctx->f2.u32l;
    // 0x800035E8: swc1        $f2, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f2.u32l;
    // 0x800035EC: swc1        $f0, 0x4C($a0)
    MEM_W(0X4C, ctx->r4) = ctx->f0.u32l;
    // 0x800035F0: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    // 0x800035F4: swc1        $f0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->f0.u32l;
    // 0x800035F8: swc1        $f0, 0x40($a0)
    MEM_W(0X40, ctx->r4) = ctx->f0.u32l;
    // 0x800035FC: swc1        $f0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->f0.u32l;
    // 0x80003600: swc1        $f0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f0.u32l;
    // 0x80003604: sw          $zero, 0x5C($a0)
    MEM_W(0X5C, ctx->r4) = 0;
    // 0x80003608: sb          $zero, 0x5D($a1)
    MEM_B(0X5D, ctx->r5) = 0;
    // 0x8000360C: sh          $zero, 0x5E($a1)
    MEM_H(0X5E, ctx->r5) = 0;
    // 0x80003610: sw          $zero, 0x68($a1)
    MEM_W(0X68, ctx->r5) = 0;
    // 0x80003614: addiu       $a1, $a1, 0x5C
    ctx->r5 = ADD32(ctx->r5, 0X5C);
    // 0x80003618: sw          $a1, 0x98($a0)
    MEM_W(0X98, ctx->r4) = ctx->r5;
    // 0x8000361C: swc1        $f2, 0x8C($a0)
    MEM_W(0X8C, ctx->r4) = ctx->f2.u32l;
    // 0x80003620: swc1        $f2, 0x88($a0)
    MEM_W(0X88, ctx->r4) = ctx->f2.u32l;
    // 0x80003624: swc1        $f2, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f2.u32l;
    // 0x80003628: swc1        $f0, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f0.u32l;
    // 0x8000362C: swc1        $f0, 0x7C($a0)
    MEM_W(0X7C, ctx->r4) = ctx->f0.u32l;
    // 0x80003630: swc1        $f0, 0x78($a0)
    MEM_W(0X78, ctx->r4) = ctx->f0.u32l;
    // 0x80003634: swc1        $f0, 0x74($a0)
    MEM_W(0X74, ctx->r4) = ctx->f0.u32l;
    // 0x80003638: swc1        $f0, 0x70($a0)
    MEM_W(0X70, ctx->r4) = ctx->f0.u32l;
    // 0x8000363C: swc1        $f0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->f0.u32l;
    // 0x80003640: sw          $zero, 0x90($a0)
    MEM_W(0X90, ctx->r4) = 0;
    // 0x80003644: sb          $zero, 0x5D($a1)
    MEM_B(0X5D, ctx->r5) = 0;
    // 0x80003648: sh          $zero, 0x5E($a1)
    MEM_H(0X5E, ctx->r5) = 0;
    // 0x8000364C: sw          $zero, 0x68($a1)
    MEM_W(0X68, ctx->r5) = 0;
    // 0x80003650: addiu       $a1, $a1, 0x5C
    ctx->r5 = ADD32(ctx->r5, 0X5C);
    // 0x80003654: sw          $a1, 0xCC($a0)
    MEM_W(0XCC, ctx->r4) = ctx->r5;
    // 0x80003658: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8000365C: addiu       $a1, $a1, 0x5C
    ctx->r5 = ADD32(ctx->r5, 0X5C);
    // 0x80003660: swc1        $f2, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = ctx->f2.u32l;
    // 0x80003664: swc1        $f2, 0xBC($a0)
    MEM_W(0XBC, ctx->r4) = ctx->f2.u32l;
    // 0x80003668: swc1        $f2, 0xB8($a0)
    MEM_W(0XB8, ctx->r4) = ctx->f2.u32l;
    // 0x8000366C: swc1        $f0, 0xB4($a0)
    MEM_W(0XB4, ctx->r4) = ctx->f0.u32l;
    // 0x80003670: swc1        $f0, 0xB0($a0)
    MEM_W(0XB0, ctx->r4) = ctx->f0.u32l;
    // 0x80003674: swc1        $f0, 0xAC($a0)
    MEM_W(0XAC, ctx->r4) = ctx->f0.u32l;
    // 0x80003678: swc1        $f0, 0xA8($a0)
    MEM_W(0XA8, ctx->r4) = ctx->f0.u32l;
    // 0x8000367C: swc1        $f0, 0xA4($a0)
    MEM_W(0XA4, ctx->r4) = ctx->f0.u32l;
    // 0x80003680: swc1        $f0, 0xA0($a0)
    MEM_W(0XA0, ctx->r4) = ctx->f0.u32l;
    // 0x80003684: sw          $zero, 0xC4($a0)
    MEM_W(0XC4, ctx->r4) = 0;
    // 0x80003688: bne         $v0, $a2, L_80003594
    if (ctx->r2 != ctx->r6) {
        // 0x8000368C: addiu       $a0, $a0, 0xD0
        ctx->r4 = ADD32(ctx->r4, 0XD0);
            goto L_80003594;
    }
    // 0x8000368C: addiu       $a0, $a0, 0xD0
    ctx->r4 = ADD32(ctx->r4, 0XD0);
L_80003690:
    // 0x80003690: jr          $ra
    // 0x80003694: nop

    return;
    // 0x80003694: nop

;}
RECOMP_FUNC void func_80003698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003698: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8000369C: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x800036A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800036A4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800036A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800036AC: ori         $at, $at, 0x95E0
    ctx->r1 = ctx->r1 | 0X95E0;
    // 0x800036B0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800036B4: addiu       $a1, $a1, 0xB00
    ctx->r5 = ADD32(ctx->r5, 0XB00);
    // 0x800036B8: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x800036BC: jal         0x80003518
    // 0x800036C0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80003518(rdram, ctx);
        goto after_0;
    // 0x800036C0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_0:
    // 0x800036C4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800036C8: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x800036CC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x800036D0: ori         $at, $at, 0x9E34
    ctx->r1 = ctx->r1 | 0X9E34;
    // 0x800036D4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800036D8: addiu       $a1, $a1, 0x1510
    ctx->r5 = ADD32(ctx->r5, 0X1510);
    // 0x800036DC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800036E0: jal         0x80003518
    // 0x800036E4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_80003518(rdram, ctx);
        goto after_1;
    // 0x800036E4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x800036E8: jal         0x8000EE90
    // 0x800036EC: nop

    func_8000EE90(rdram, ctx);
        goto after_2;
    // 0x800036EC: nop

    after_2:
    // 0x800036F0: jal         0x80010FC4
    // 0x800036F4: nop

    func_80010FC4(rdram, ctx);
        goto after_3;
    // 0x800036F4: nop

    after_3:
    // 0x800036F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800036FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80003700: jr          $ra
    // 0x80003704: nop

    return;
    // 0x80003704: nop

;}
RECOMP_FUNC void func_80003768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003768: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x8000376C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80003770: lw          $t7, 0xAF8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XAF8);
    // 0x80003774: addiu       $a3, $a3, 0xAE8
    ctx->r7 = ADD32(ctx->r7, 0XAE8);
    // 0x80003778: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8000377C: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x80003780: lw          $v0, 0xAF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XAF0);
    // 0x80003784: sll         $a2, $a0, 6
    ctx->r6 = S32(ctx->r4 << 6);
    // 0x80003788: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x8000378C: addu        $t6, $a2, $a1
    ctx->r14 = ADD32(ctx->r6, ctx->r5);
    // 0x80003790: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80003794: sltu        $at, $t6, $t9
    ctx->r1 = ctx->r14 < ctx->r25 ? 1 : 0;
    // 0x80003798: beq         $at, $zero, L_800037B4
    if (ctx->r1 == 0) {
        // 0x8000379C: sltu        $at, $a1, $v0
        ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
            goto L_800037B4;
    }
    // 0x8000379C: sltu        $at, $a1, $v0
    ctx->r1 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x800037A0: bne         $at, $zero, L_800037B4
    if (ctx->r1 != 0) {
        // 0x800037A4: addu        $t0, $a1, $a2
        ctx->r8 = ADD32(ctx->r5, ctx->r6);
            goto L_800037B4;
    }
    // 0x800037A4: addu        $t0, $a1, $a2
    ctx->r8 = ADD32(ctx->r5, ctx->r6);
    // 0x800037A8: sw          $t0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r8;
    // 0x800037AC: jr          $ra
    // 0x800037B0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x800037B0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_800037B4:
    // 0x800037B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800037B8: jr          $ra
    // 0x800037BC: nop

    return;
    // 0x800037BC: nop

;}
RECOMP_FUNC void func_80003818(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003818: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8000381C: lw          $t0, 0xAFC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0XAFC);
    // 0x80003820: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80003824: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x80003828: lw          $t9, 0xAF4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XAF4);
    // 0x8000382C: lw          $t7, 0xAEC($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XAEC);
    // 0x80003830: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80003834: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x80003838: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8000383C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80003840: sltu        $at, $t8, $t2
    ctx->r1 = ctx->r24 < ctx->r10 ? 1 : 0;
    // 0x80003844: beq         $at, $zero, L_80003854
    if (ctx->r1 == 0) {
        // 0x80003848: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80003854;
    }
    // 0x80003848: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000384C: jr          $ra
    // 0x80003850: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80003850: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80003854:
    // 0x80003854: jr          $ra
    // 0x80003858: nop

    return;
    // 0x80003858: nop

;}
RECOMP_FUNC void func_8000385C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000385C: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80003860: slti        $at, $t6, 0x13A
    ctx->r1 = SIGNED(ctx->r14) < 0X13A ? 1 : 0;
    // 0x80003864: beq         $at, $zero, L_80003888
    if (ctx->r1 == 0) {
        // 0x80003868: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_80003888;
    }
    // 0x80003868: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8000386C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80003870: lui         $v1, 0x8009
    ctx->r3 = S32(0X8009 << 16);
    // 0x80003874: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x80003878: lw          $v1, 0x4D30($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4D30);
    // 0x8000387C: nop

    // 0x80003880: bne         $v1, $zero, L_80003898
    if (ctx->r3 != 0) {
        // 0x80003884: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80003898;
    }
    // 0x80003884: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80003888:
    // 0x80003888: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x8000388C: lw          $v0, 0x4D30($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4D30);
    // 0x80003890: jr          $ra
    // 0x80003894: nop

    return;
    // 0x80003894: nop

L_80003898:
    // 0x80003898: jr          $ra
    // 0x8000389C: nop

    return;
    // 0x8000389C: nop

;}
RECOMP_FUNC void func_800038A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800038A0: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x800038A4: slti        $at, $t6, 0x20E
    ctx->r1 = SIGNED(ctx->r14) < 0X20E ? 1 : 0;
    // 0x800038A8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800038AC: beq         $at, $zero, L_800038CC
    if (ctx->r1 == 0) {
        // 0x800038B0: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_800038CC;
    }
    // 0x800038B0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x800038B4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800038B8: lui         $v1, 0x802B
    ctx->r3 = S32(0X802B << 16);
    // 0x800038BC: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x800038C0: lw          $v0, 0x5F10($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X5F10);
    // 0x800038C4: jr          $ra
    // 0x800038C8: nop

    return;
    // 0x800038C8: nop

L_800038CC:
    // 0x800038CC: slti        $at, $v0, 0x23B
    ctx->r1 = SIGNED(ctx->r2) < 0X23B ? 1 : 0;
    // 0x800038D0: beq         $at, $zero, L_800038F0
    if (ctx->r1 == 0) {
        // 0x800038D4: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_800038F0;
    }
    // 0x800038D4: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x800038D8: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x800038DC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x800038E0: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x800038E4: lw          $v0, -0x57A8($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X57A8);
    // 0x800038E8: jr          $ra
    // 0x800038EC: nop

    return;
    // 0x800038EC: nop

L_800038F0:
    // 0x800038F0: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x800038F4: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x800038F8: lw          $v1, -0x4F4C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4F4C);
    // 0x800038FC: nop

    // 0x80003900: jr          $ra
    // 0x80003904: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80003904: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80003908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003908: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8000390C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80003910: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80003914: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80003918: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8000391C: swc1        $f25, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x80003920: swc1        $f24, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f24.u32l;
    // 0x80003924: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80003928: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x8000392C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80003930: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80003934: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x80003938: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000393C: lwc1        $f0, 0x3B94($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3B94);
    // 0x80003940: lwc1        $f4, 0xC($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80003944: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80003948: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8000394C: lwc1        $f10, 0x10($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X10);
    // 0x80003950: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80003954: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x80003958: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8000395C: nop

    // 0x80003960: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80003964: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80003968: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000396C: nop

    // 0x80003970: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80003974: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80003978: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x8000397C: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80003980: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80003984: bgez        $a0, L_80003998
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80003988: and         $t7, $a0, $at
        ctx->r15 = ctx->r4 & ctx->r1;
            goto L_80003998;
    }
    // 0x80003988: and         $t7, $a0, $at
    ctx->r15 = ctx->r4 & ctx->r1;
    // 0x8000398C: beq         $t7, $zero, L_80003998
    if (ctx->r15 == 0) {
        // 0x80003990: addiu       $at, $at, 0x1
        ctx->r1 = ADD32(ctx->r1, 0X1);
            goto L_80003998;
    }
    // 0x80003990: addiu       $at, $at, 0x1
    ctx->r1 = ADD32(ctx->r1, 0X1);
    // 0x80003994: subu        $t7, $t7, $at
    ctx->r15 = SUB32(ctx->r15, ctx->r1);
L_80003998:
    // 0x80003998: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8000399C: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x800039A0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800039A4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800039A8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800039AC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x800039B0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800039B4: mfc1        $t0, $f6
    ctx->r8 = (int32_t)ctx->f6.u32l;
    // 0x800039B8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800039BC: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x800039C0: bgez        $t0, L_800039D4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x800039C4: and         $t1, $t0, $at
        ctx->r9 = ctx->r8 & ctx->r1;
            goto L_800039D4;
    }
    // 0x800039C4: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x800039C8: beq         $t1, $zero, L_800039D4
    if (ctx->r9 == 0) {
        // 0x800039CC: addiu       $at, $at, 0x1
        ctx->r1 = ADD32(ctx->r1, 0X1);
            goto L_800039D4;
    }
    // 0x800039CC: addiu       $at, $at, 0x1
    ctx->r1 = ADD32(ctx->r1, 0X1);
    // 0x800039D0: subu        $t1, $t1, $at
    ctx->r9 = SUB32(ctx->r9, ctx->r1);
L_800039D4:
    // 0x800039D4: sh          $t1, 0x48($sp)
    MEM_H(0X48, ctx->r29) = ctx->r9;
    // 0x800039D8: lwc1        $f8, 0x14($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X14);
    // 0x800039DC: sh          $a0, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r4;
    // 0x800039E0: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800039E4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800039E8: nop

    // 0x800039EC: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800039F0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800039F4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800039F8: nop

    // 0x800039FC: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80003A00: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x80003A04: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80003A08: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80003A0C: bgez        $t3, L_80003A20
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80003A10: and         $t4, $t3, $at
        ctx->r12 = ctx->r11 & ctx->r1;
            goto L_80003A20;
    }
    // 0x80003A10: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x80003A14: beq         $t4, $zero, L_80003A20
    if (ctx->r12 == 0) {
        // 0x80003A18: addiu       $at, $at, 0x1
        ctx->r1 = ADD32(ctx->r1, 0X1);
            goto L_80003A20;
    }
    // 0x80003A18: addiu       $at, $at, 0x1
    ctx->r1 = ADD32(ctx->r1, 0X1);
    // 0x80003A1C: subu        $t4, $t4, $at
    ctx->r12 = SUB32(ctx->r12, ctx->r1);
L_80003A20:
    // 0x80003A20: jal         0x8007F9A0
    // 0x80003A24: sh          $t4, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r12;
    func_8007F9A0(rdram, ctx);
        goto after_0;
    // 0x80003A24: sh          $t4, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r12;
    after_0:
    // 0x80003A28: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80003A2C: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x80003A30: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80003A34: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80003A38: lhu         $a0, 0x4A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4A);
    // 0x80003A3C: jal         0x8007FA10
    // 0x80003A40: div.s       $f20, $f8, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = DIV_S(ctx->f8.fl, ctx->f24.fl);
    func_8007FA10(rdram, ctx);
        goto after_1;
    // 0x80003A40: div.s       $f20, $f8, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f20.fl = DIV_S(ctx->f8.fl, ctx->f24.fl);
    after_1:
    // 0x80003A44: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80003A48: lhu         $a0, 0x48($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X48);
    // 0x80003A4C: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80003A50: jal         0x8007F9A0
    // 0x80003A54: div.s       $f22, $f4, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f22.fl = DIV_S(ctx->f4.fl, ctx->f24.fl);
    func_8007F9A0(rdram, ctx);
        goto after_2;
    // 0x80003A54: div.s       $f22, $f4, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f22.fl = DIV_S(ctx->f4.fl, ctx->f24.fl);
    after_2:
    // 0x80003A58: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80003A5C: lhu         $a0, 0x48($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X48);
    // 0x80003A60: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80003A64: nop

    // 0x80003A68: div.s       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f24.fl);
    // 0x80003A6C: jal         0x8007FA10
    // 0x80003A70: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    func_8007FA10(rdram, ctx);
        goto after_3;
    // 0x80003A70: swc1        $f10, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x80003A74: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80003A78: lhu         $a0, 0x46($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X46);
    // 0x80003A7C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80003A80: nop

    // 0x80003A84: div.s       $f16, $f6, $f24
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f24.fl);
    // 0x80003A88: jal         0x8007F9A0
    // 0x80003A8C: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    func_8007F9A0(rdram, ctx);
        goto after_4;
    // 0x80003A8C: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x80003A90: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80003A94: lhu         $a0, 0x46($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X46);
    // 0x80003A98: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80003A9C: nop

    // 0x80003AA0: div.s       $f2, $f10, $f24
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f24.fl);
    // 0x80003AA4: jal         0x8007FA10
    // 0x80003AA8: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    func_8007FA10(rdram, ctx);
        goto after_5;
    // 0x80003AA8: swc1        $f2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f2.u32l;
    after_5:
    // 0x80003AAC: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80003AB0: lwc1        $f16, 0x50($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80003AB4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80003AB8: lwc1        $f2, 0x58($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80003ABC: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80003AC0: div.s       $f0, $f6, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f24.fl);
    // 0x80003AC4: addiu       $a2, $a2, 0x2490
    ctx->r6 = ADD32(ctx->r6, 0X2490);
    // 0x80003AC8: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80003ACC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80003AD0: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80003AD4: swc1        $f6, 0x8($a2)
    MEM_W(0X8, ctx->r6) = ctx->f6.u32l;
    // 0x80003AD8: swc1        $f18, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f18.u32l;
    // 0x80003ADC: swc1        $f18, 0x1C($a2)
    MEM_W(0X1C, ctx->r6) = ctx->f18.u32l;
    // 0x80003AE0: swc1        $f18, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->f18.u32l;
    // 0x80003AE4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80003AE8: or          $v1, $s1, $zero
    ctx->r3 = ctx->r17 | 0;
    // 0x80003AEC: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x80003AF0: mul.s       $f8, $f16, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80003AF4: swc1        $f8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f8.u32l;
    // 0x80003AF8: mul.s       $f10, $f16, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x80003AFC: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80003B00: nop

    // 0x80003B04: mul.s       $f12, $f20, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = MUL_S(ctx->f20.fl, ctx->f8.fl);
    // 0x80003B08: swc1        $f10, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->f10.u32l;
    // 0x80003B0C: mul.s       $f10, $f12, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f0.fl);
    // 0x80003B10: nop

    // 0x80003B14: mul.s       $f4, $f22, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f22.fl, ctx->f2.fl);
    // 0x80003B18: nop

    // 0x80003B1C: mul.s       $f8, $f12, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x80003B20: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80003B24: swc1        $f6, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f6.u32l;
    // 0x80003B28: mul.s       $f10, $f22, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x80003B2C: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80003B30: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80003B34: mul.s       $f6, $f20, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x80003B38: swc1        $f4, 0x14($a2)
    MEM_W(0X14, ctx->r6) = ctx->f4.u32l;
    // 0x80003B3C: mul.s       $f14, $f22, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f22.fl, ctx->f8.fl);
    // 0x80003B40: swc1        $f6, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->f6.u32l;
    // 0x80003B44: mul.s       $f10, $f14, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80003B48: nop

    // 0x80003B4C: mul.s       $f4, $f20, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x80003B50: nop

    // 0x80003B54: mul.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x80003B58: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80003B5C: swc1        $f6, 0x20($a2)
    MEM_W(0X20, ctx->r6) = ctx->f6.u32l;
    // 0x80003B60: mul.s       $f10, $f20, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x80003B64: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80003B68: mul.s       $f6, $f22, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f22.fl, ctx->f16.fl);
    // 0x80003B6C: sub.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80003B70: swc1        $f4, 0x24($a2)
    MEM_W(0X24, ctx->r6) = ctx->f4.u32l;
    // 0x80003B74: swc1        $f6, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f6.u32l;
    // 0x80003B78: lwc1        $f8, 0x0($s2)
    ctx->f8.u32l = MEM_W(ctx->r18, 0X0);
    // 0x80003B7C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80003B80: swc1        $f8, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->f8.u32l;
    // 0x80003B84: lwc1        $f10, 0x4($s2)
    ctx->f10.u32l = MEM_W(ctx->r18, 0X4);
    // 0x80003B88: lwc1        $f8, 0x0($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80003B8C: swc1        $f10, 0x34($a2)
    MEM_W(0X34, ctx->r6) = ctx->f10.u32l;
    // 0x80003B90: lwc1        $f4, 0x8($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X8);
    // 0x80003B94: swc1        $f6, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = ctx->f6.u32l;
    // 0x80003B98: swc1        $f4, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->f4.u32l;
    // 0x80003B9C: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80003BA0: lwc1        $f6, 0x4($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80003BA4: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80003BA8: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80003BAC: nop

    // 0x80003BB0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80003BB4: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x80003BB8: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80003BBC: lwc1        $f4, 0x8($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X8);
    // 0x80003BC0: nop

    // 0x80003BC4: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80003BC8: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80003BCC: swc1        $f8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->f8.u32l;
    // 0x80003BD0: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80003BD4: lwc1        $f4, 0x0($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80003BD8: lwc1        $f8, 0x4($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80003BDC: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80003BE0: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x80003BE4: nop

    // 0x80003BE8: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80003BEC: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80003BF0: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80003BF4: lwc1        $f6, 0x8($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X8);
    // 0x80003BF8: nop

    // 0x80003BFC: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80003C00: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80003C04: swc1        $f4, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->f4.u32l;
    // 0x80003C08: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80003C0C: lwc1        $f6, 0x0($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80003C10: lwc1        $f4, 0x4($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X4);
    // 0x80003C14: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80003C18: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x80003C1C: nop

    // 0x80003C20: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80003C24: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80003C28: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80003C2C: lwc1        $f8, 0x8($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X8);
    // 0x80003C30: swc1        $f0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f0.u32l;
    // 0x80003C34: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80003C38: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80003C3C: swc1        $f6, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f6.u32l;
    // 0x80003C40: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80003C44: lwc1        $f8, 0x10($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X10);
    // 0x80003C48: lwc1        $f6, 0x14($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X14);
    // 0x80003C4C: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80003C50: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80003C54: nop

    // 0x80003C58: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80003C5C: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x80003C60: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80003C64: lwc1        $f4, 0x18($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X18);
    // 0x80003C68: nop

    // 0x80003C6C: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80003C70: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80003C74: swc1        $f8, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f8.u32l;
    // 0x80003C78: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80003C7C: lwc1        $f4, 0x10($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X10);
    // 0x80003C80: lwc1        $f8, 0x14($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X14);
    // 0x80003C84: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80003C88: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x80003C8C: nop

    // 0x80003C90: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80003C94: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80003C98: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80003C9C: lwc1        $f6, 0x18($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X18);
    // 0x80003CA0: nop

    // 0x80003CA4: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80003CA8: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80003CAC: swc1        $f4, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f4.u32l;
    // 0x80003CB0: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80003CB4: lwc1        $f6, 0x10($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X10);
    // 0x80003CB8: lwc1        $f4, 0x14($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X14);
    // 0x80003CBC: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80003CC0: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x80003CC4: nop

    // 0x80003CC8: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80003CCC: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80003CD0: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80003CD4: lwc1        $f8, 0x18($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X18);
    // 0x80003CD8: swc1        $f0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f0.u32l;
    // 0x80003CDC: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80003CE0: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80003CE4: swc1        $f6, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f6.u32l;
    // 0x80003CE8: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80003CEC: lwc1        $f8, 0x20($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X20);
    // 0x80003CF0: lwc1        $f6, 0x24($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X24);
    // 0x80003CF4: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80003CF8: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80003CFC: nop

    // 0x80003D00: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80003D04: lwc1        $f8, 0x20($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X20);
    // 0x80003D08: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80003D0C: lwc1        $f4, 0x28($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X28);
    // 0x80003D10: nop

    // 0x80003D14: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80003D18: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80003D1C: swc1        $f8, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f8.u32l;
    // 0x80003D20: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80003D24: lwc1        $f4, 0x20($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X20);
    // 0x80003D28: lwc1        $f8, 0x24($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X24);
    // 0x80003D2C: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80003D30: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x80003D34: nop

    // 0x80003D38: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80003D3C: lwc1        $f4, 0x24($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80003D40: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80003D44: lwc1        $f6, 0x28($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X28);
    // 0x80003D48: nop

    // 0x80003D4C: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80003D50: add.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80003D54: swc1        $f4, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->f4.u32l;
    // 0x80003D58: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80003D5C: lwc1        $f6, 0x20($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X20);
    // 0x80003D60: lwc1        $f4, 0x24($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X24);
    // 0x80003D64: mul.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80003D68: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x80003D6C: nop

    // 0x80003D70: mul.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80003D74: lwc1        $f6, 0x28($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80003D78: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80003D7C: lwc1        $f8, 0x28($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X28);
    // 0x80003D80: nop

    // 0x80003D84: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80003D88: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80003D8C: swc1        $f6, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->f6.u32l;
    // 0x80003D90: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80003D94: swc1        $f0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f0.u32l;
    // 0x80003D98: lwc1        $f8, 0x30($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X30);
    // 0x80003D9C: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80003DA0: lwc1        $f6, 0x34($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X34);
    // 0x80003DA4: mul.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80003DA8: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80003DAC: addiu       $a1, $a0, 0x20
    ctx->r5 = ADD32(ctx->r4, 0X20);
    // 0x80003DB0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80003DB4: lwc1        $f8, 0x38($a2)
    ctx->f8.u32l = MEM_W(ctx->r6, 0X38);
    // 0x80003DB8: add.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f10.fl;
    // 0x80003DBC: lwc1        $f4, 0x20($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X20);
    // 0x80003DC0: nop

    // 0x80003DC4: mul.s       $f10, $f8, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80003DC8: lwc1        $f4, 0x30($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X30);
    // 0x80003DCC: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80003DD0: add.s       $f6, $f4, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80003DD4: swc1        $f6, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->f6.u32l;
    // 0x80003DD8: lwc1        $f10, 0x30($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X30);
    // 0x80003DDC: lwc1        $f4, 0x4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80003DE0: lwc1        $f6, 0x34($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X34);
    // 0x80003DE4: mul.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80003DE8: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x80003DEC: nop

    // 0x80003DF0: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80003DF4: lwc1        $f10, 0x38($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X38);
    // 0x80003DF8: add.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f4.fl;
    // 0x80003DFC: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80003E00: nop

    // 0x80003E04: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80003E08: lwc1        $f8, 0x34($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X34);
    // 0x80003E0C: add.s       $f10, $f6, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x80003E10: add.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80003E14: swc1        $f6, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->f6.u32l;
    // 0x80003E18: lwc1        $f8, 0x8($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X8);
    // 0x80003E1C: lwc1        $f4, 0x30($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X30);
    // 0x80003E20: lwc1        $f6, 0x34($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X34);
    // 0x80003E24: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80003E28: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x80003E2C: nop

    // 0x80003E30: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80003E34: lwc1        $f4, 0x38($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X38);
    // 0x80003E38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80003E3C: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80003E40: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80003E44: nop

    // 0x80003E48: mul.s       $f8, $f4, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80003E4C: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x80003E50: add.s       $f4, $f6, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80003E54: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80003E58: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80003E5C: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x80003E60: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80003E64: swc1        $f6, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f6.u32l;
    // 0x80003E68: swc1        $f8, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->f8.u32l;
L_80003E6C:
    // 0x80003E6C: lwc1        $f10, 0x0($v1)
    ctx->f10.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80003E70: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80003E74: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80003E78: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80003E7C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80003E80: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80003E84: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80003E88: nop

    // 0x80003E8C: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80003E90: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80003E94: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80003E98: nop

    // 0x80003E9C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80003EA0: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x80003EA4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80003EA8: sra         $t6, $v0, 16
    ctx->r14 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80003EAC: sh          $t6, -0x8($a0)
    MEM_H(-0X8, ctx->r4) = ctx->r14;
    // 0x80003EB0: sh          $v0, -0x8($a1)
    MEM_H(-0X8, ctx->r5) = ctx->r2;
    // 0x80003EB4: lwc1        $f8, -0xC($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, -0XC);
    // 0x80003EB8: nop

    // 0x80003EBC: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80003EC0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80003EC4: nop

    // 0x80003EC8: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80003ECC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80003ED0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80003ED4: nop

    // 0x80003ED8: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80003EDC: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x80003EE0: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80003EE4: sra         $t8, $v0, 16
    ctx->r24 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80003EE8: sh          $t8, -0x6($a0)
    MEM_H(-0X6, ctx->r4) = ctx->r24;
    // 0x80003EEC: sh          $v0, -0x6($a1)
    MEM_H(-0X6, ctx->r5) = ctx->r2;
    // 0x80003EF0: lwc1        $f6, -0x8($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, -0X8);
    // 0x80003EF4: nop

    // 0x80003EF8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80003EFC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80003F00: nop

    // 0x80003F04: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80003F08: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80003F0C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80003F10: nop

    // 0x80003F14: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80003F18: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x80003F1C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80003F20: sra         $t0, $v0, 16
    ctx->r8 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80003F24: sh          $t0, -0x4($a0)
    MEM_H(-0X4, ctx->r4) = ctx->r8;
    // 0x80003F28: sh          $v0, -0x4($a1)
    MEM_H(-0X4, ctx->r5) = ctx->r2;
    // 0x80003F2C: lwc1        $f4, -0x4($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, -0X4);
    // 0x80003F30: nop

    // 0x80003F34: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80003F38: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80003F3C: nop

    // 0x80003F40: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80003F44: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80003F48: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80003F4C: nop

    // 0x80003F50: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80003F54: mfc1        $v0, $f8
    ctx->r2 = (int32_t)ctx->f8.u32l;
    // 0x80003F58: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80003F5C: sra         $t2, $v0, 16
    ctx->r10 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80003F60: sh          $t2, -0x2($a0)
    MEM_H(-0X2, ctx->r4) = ctx->r10;
    // 0x80003F64: bne         $a2, $a3, L_80003E6C
    if (ctx->r6 != ctx->r7) {
        // 0x80003F68: sh          $v0, -0x2($a1)
        MEM_H(-0X2, ctx->r5) = ctx->r2;
            goto L_80003E6C;
    }
    // 0x80003F68: sh          $v0, -0x2($a1)
    MEM_H(-0X2, ctx->r5) = ctx->r2;
    // 0x80003F6C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80003F70: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80003F74: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80003F78: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80003F7C: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80003F80: lwc1        $f25, 0x28($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x80003F84: lwc1        $f24, 0x2C($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80003F88: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80003F8C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80003F90: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80003F94: jr          $ra
    // 0x80003F98: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x80003F98: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_80004000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004000: lwc1        $f16, 0x4($a1)
    ctx->f16.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80004004: nop

    // 0x80004008: swc1        $f16, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f16.u32l;
    // 0x8000400C: lwc1        $f18, 0x8($a1)
    ctx->f18.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80004010: nop

    // 0x80004014: swc1        $f18, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f18.u32l;
    // 0x80004018: lwc1        $f4, 0x18($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X18);
    // 0x8000401C: nop

    // 0x80004020: swc1        $f4, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->f4.u32l;
    // 0x80004024: lwc1        $f6, 0x1C($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X1C);
    // 0x80004028: nop

    // 0x8000402C: swc1        $f6, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f6.u32l;
    // 0x80004030: lwc1        $f8, 0x20($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X20);
    // 0x80004034: jr          $ra
    // 0x80004038: swc1        $f8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x80004038: swc1        $f8, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_80004134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004134: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80004138: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000413C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80004140: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80004144: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80004148: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8000414C: lwc1        $f4, 0x30($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X30);
    // 0x80004150: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80004154: swc1        $f4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f4.u32l;
    // 0x80004158: lwc1        $f6, 0x34($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X34);
    // 0x8000415C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80004160: swc1        $f6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f6.u32l;
    // 0x80004164: lwc1        $f8, 0x38($a1)
    ctx->f8.u32l = MEM_W(ctx->r5, 0X38);
    // 0x80004168: nop

    // 0x8000416C: swc1        $f8, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f8.u32l;
    // 0x80004170: lwc1        $f2, 0x0($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80004174: lwc1        $f14, 0x4($a1)
    ctx->f14.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80004178: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x8000417C: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80004180: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80004184: nop

    // 0x80004188: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8000418C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80004190: jal         0x8007FA40
    // 0x80004194: add.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f6.fl;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x80004194: add.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f6.fl;
    after_0:
    // 0x80004198: lwc1        $f14, 0x10($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X10);
    // 0x8000419C: lwc1        $f16, 0x14($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X14);
    // 0x800041A0: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x800041A4: lwc1        $f2, 0x18($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X18);
    // 0x800041A8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x800041AC: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x800041B0: nop

    // 0x800041B4: mul.s       $f6, $f2, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800041B8: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800041BC: jal         0x8007FA40
    // 0x800041C0: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    func_8007FA40(rdram, ctx);
        goto after_1;
    // 0x800041C0: add.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f8.fl;
    after_1:
    // 0x800041C4: lwc1        $f14, 0x20($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X20);
    // 0x800041C8: lwc1        $f16, 0x24($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X24);
    // 0x800041CC: mul.s       $f10, $f14, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x800041D0: lwc1        $f2, 0x28($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X28);
    // 0x800041D4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x800041D8: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x800041DC: nop

    // 0x800041E0: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800041E4: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x800041E8: jal         0x8007FA40
    // 0x800041EC: add.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f6.fl;
    func_8007FA40(rdram, ctx);
        goto after_2;
    // 0x800041EC: add.s       $f12, $f8, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f6.fl;
    after_2:
    // 0x800041F0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800041F4: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800041F8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x800041FC: c.eq.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl == ctx->f16.fl;
    // 0x80004200: nop

    // 0x80004204: bc1t        L_80004234
    if (c1cs) {
        // 0x80004208: nop
    
            goto L_80004234;
    }
    // 0x80004208: nop

    // 0x8000420C: lwc1        $f10, 0x0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80004210: lwc1        $f8, 0x4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80004214: div.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80004218: lwc1        $f10, 0x8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8000421C: swc1        $f4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->f4.u32l;
    // 0x80004220: div.s       $f6, $f8, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80004224: nop

    // 0x80004228: div.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8000422C: swc1        $f6, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->f6.u32l;
    // 0x80004230: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
L_80004234:
    // 0x80004234: c.eq.s      $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f20.fl == ctx->f16.fl;
    // 0x80004238: nop

    // 0x8000423C: bc1t        L_8000426C
    if (c1cs) {
        // 0x80004240: nop
    
            goto L_8000426C;
    }
    // 0x80004240: nop

    // 0x80004244: lwc1        $f8, 0x10($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80004248: lwc1        $f10, 0x14($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14);
    // 0x8000424C: div.s       $f6, $f8, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80004250: lwc1        $f8, 0x18($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X18);
    // 0x80004254: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x80004258: div.s       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8000425C: nop

    // 0x80004260: div.s       $f6, $f8, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80004264: swc1        $f4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f4.u32l;
    // 0x80004268: swc1        $f6, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f6.u32l;
L_8000426C:
    // 0x8000426C: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x80004270: nop

    // 0x80004274: bc1t        L_800042A4
    if (c1cs) {
        // 0x80004278: nop
    
            goto L_800042A4;
    }
    // 0x80004278: nop

    // 0x8000427C: lwc1        $f10, 0x20($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X20);
    // 0x80004280: lwc1        $f8, 0x24($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X24);
    // 0x80004284: div.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80004288: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x8000428C: swc1        $f4, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->f4.u32l;
    // 0x80004290: div.s       $f6, $f8, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80004294: nop

    // 0x80004298: div.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8000429C: swc1        $f6, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f6.u32l;
    // 0x800042A0: swc1        $f4, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->f4.u32l;
L_800042A4:
    // 0x800042A4: swc1        $f18, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->f18.u32l;
    // 0x800042A8: swc1        $f20, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->f20.u32l;
    // 0x800042AC: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x800042B0: nop

    // 0x800042B4: swc1        $f8, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->f8.u32l;
    // 0x800042B8: lwc1        $f14, 0x4($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X4);
    // 0x800042BC: lwc1        $f2, 0x0($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X0);
    // 0x800042C0: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x800042C4: nop

    // 0x800042C8: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x800042CC: jal         0x8007FA40
    // 0x800042D0: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    func_8007FA40(rdram, ctx);
        goto after_3;
    // 0x800042D0: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    after_3:
    // 0x800042D4: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x800042D8: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x800042DC: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x800042E0: jal         0x8001C5D0
    // 0x800042E4: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_8001C5D0(rdram, ctx);
        goto after_4;
    // 0x800042E4: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_4:
    // 0x800042E8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800042EC: lwc1        $f21, 0x2DB0($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X2DB0);
    // 0x800042F0: lwc1        $f20, 0x2DB4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X2DB4);
    // 0x800042F4: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x800042F8: mul.d       $f8, $f4, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f20.d);
    // 0x800042FC: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80004300: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80004304: nop

    // 0x80004308: c.eq.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl == ctx->f16.fl;
    // 0x8000430C: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x80004310: bc1f        L_80004340
    if (!c1cs) {
        // 0x80004314: swc1        $f6, 0x10($s1)
        MEM_W(0X10, ctx->r17) = ctx->f6.u32l;
            goto L_80004340;
    }
    // 0x80004314: swc1        $f6, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->f6.u32l;
    // 0x80004318: swc1        $f16, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f16.u32l;
    // 0x8000431C: lwc1        $f12, 0x10($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80004320: lwc1        $f14, 0x14($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X14);
    // 0x80004324: jal         0x8001C5D0
    // 0x80004328: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    func_8001C5D0(rdram, ctx);
        goto after_5;
    // 0x80004328: neg.s       $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = -ctx->f12.fl;
    after_5:
    // 0x8000432C: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80004330: mul.d       $f4, $f10, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f20.d);
    // 0x80004334: cvt.s.d     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f8.fl = CVT_S_D(ctx->f4.d);
    // 0x80004338: b           L_80004390
    // 0x8000433C: swc1        $f8, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f8.u32l;
        goto L_80004390;
    // 0x8000433C: swc1        $f8, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f8.u32l;
L_80004340:
    // 0x80004340: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x80004344: lwc1        $f10, 0x28($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X28);
    // 0x80004348: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
    // 0x8000434C: div.s       $f12, $f6, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80004350: jal         0x8001C5D0
    // 0x80004354: div.s       $f14, $f10, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    func_8001C5D0(rdram, ctx);
        goto after_6;
    // 0x80004354: div.s       $f14, $f10, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    after_6:
    // 0x80004358: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x8000435C: mul.d       $f8, $f4, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f20.d);
    // 0x80004360: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80004364: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x80004368: swc1        $f6, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->f6.u32l;
    // 0x8000436C: lwc1        $f4, 0x0($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80004370: lwc1        $f10, 0x4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80004374: div.s       $f14, $f4, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f14.fl = DIV_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80004378: jal         0x8001C5D0
    // 0x8000437C: div.s       $f12, $f10, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    func_8001C5D0(rdram, ctx);
        goto after_7;
    // 0x8000437C: div.s       $f12, $f10, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = DIV_S(ctx->f10.fl, ctx->f2.fl);
    after_7:
    // 0x80004380: cvt.d.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.d = CVT_D_S(ctx->f0.fl);
    // 0x80004384: mul.d       $f6, $f8, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f6.d = MUL_D(ctx->f8.d, ctx->f20.d);
    // 0x80004388: cvt.s.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f10.fl = CVT_S_D(ctx->f6.d);
    // 0x8000438C: swc1        $f10, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->f10.u32l;
L_80004390:
    // 0x80004390: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80004394: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80004398: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8000439C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x800043A0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x800043A4: jr          $ra
    // 0x800043A8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800043A8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800043AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800043AC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800043B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800043B4: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x800043B8: jal         0x8007FC08
    // 0x800043BC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_8007FC08(rdram, ctx);
        goto after_0;
    // 0x800043BC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x800043C0: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x800043C4: jal         0x80004134
    // 0x800043C8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_80004134(rdram, ctx);
        goto after_1;
    // 0x800043C8: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x800043CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800043D0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x800043D4: jr          $ra
    // 0x800043D8: nop

    return;
    // 0x800043D8: nop

;}
RECOMP_FUNC void func_80004534(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004534: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80004538: lw          $v0, -0x2F98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2F98);
    // 0x8000453C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x80004540: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80004544: ori         $at, $at, 0xA0D8
    ctx->r1 = ctx->r1 | 0XA0D8;
    // 0x80004548: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8000454C: addu        $v0, $v0, $at
    ctx->r2 = ADD32(ctx->r2, ctx->r1);
    // 0x80004550: lwc1        $f4, 0x3C($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x80004554: lw          $a2, 0x34($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X34);
    // 0x80004558: lw          $a3, 0x38($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X38);
    // 0x8000455C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80004560: lwc1        $f6, 0x40($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X40);
    // 0x80004564: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80004568: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x8000456C: lwc1        $f8, 0x44($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X44);
    // 0x80004570: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80004574: addiu       $a0, $a0, 0x17E8
    ctx->r4 = ADD32(ctx->r4, 0X17E8);
    // 0x80004578: addiu       $a1, $sp, 0x86
    ctx->r5 = ADD32(ctx->r29, 0X86);
    // 0x8000457C: jal         0x8007FEF0
    // 0x80004580: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    func_8007FEF0(rdram, ctx);
        goto after_0;
    // 0x80004580: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80004584: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x80004588: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8000458C: lwc1        $f10, 0x10($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X10);
    // 0x80004590: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x80004594: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x80004598: lw          $a3, 0xC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XC);
    // 0x8000459C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800045A0: lwc1        $f16, 0x14($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X14);
    // 0x800045A4: addiu       $a0, $a0, 0x1828
    ctx->r4 = ADD32(ctx->r4, 0X1828);
    // 0x800045A8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    // 0x800045AC: lwc1        $f18, 0x18($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X18);
    // 0x800045B0: nop

    // 0x800045B4: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x800045B8: lwc1        $f0, 0x1C($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x800045BC: nop

    // 0x800045C0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x800045C4: lwc1        $f4, 0x20($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X20);
    // 0x800045C8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x800045CC: jal         0x80080208
    // 0x800045D0: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    func_80080208(rdram, ctx);
        goto after_1;
    // 0x800045D0: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x800045D4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800045D8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800045DC: addiu       $a1, $a1, 0x17E8
    ctx->r5 = ADD32(ctx->r5, 0X17E8);
    // 0x800045E0: addiu       $a0, $a0, 0x1828
    ctx->r4 = ADD32(ctx->r4, 0X1828);
    // 0x800045E4: jal         0x8007F940
    // 0x800045E8: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_8007F940(rdram, ctx);
        goto after_2;
    // 0x800045E8: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_2:
    // 0x800045EC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800045F0: addiu       $a0, $a0, 0x17A8
    ctx->r4 = ADD32(ctx->r4, 0X17A8);
    // 0x800045F4: jal         0x8007FC08
    // 0x800045F8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8007FC08(rdram, ctx);
        goto after_3;
    // 0x800045F8: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x800045FC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80004600: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x80004604: jr          $ra
    // 0x80004608: nop

    return;
    // 0x80004608: nop

;}
RECOMP_FUNC void func_8000460C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000460C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80004610: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80004614: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80004618: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000461C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80004620: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80004624: lw          $a2, 0xC($a0)
    ctx->r6 = MEM_W(ctx->r4, 0XC);
    // 0x80004628: lwc1        $f14, 0x8($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X8);
    // 0x8000462C: lwc1        $f12, 0x4($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80004630: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80004634: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80004638: jal         0x80004650
    // 0x8000463C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_80004650(rdram, ctx);
        goto after_0;
    // 0x8000463C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x80004640: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80004644: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80004648: jr          $ra
    // 0x8000464C: nop

    return;
    // 0x8000464C: nop

;}
RECOMP_FUNC void func_80004650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004650: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80004654: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x80004658: lhu         $t7, 0x5228($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X5228);
    // 0x8000465C: lw          $t6, 0x3B98($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B98);
    // 0x80004660: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80004664: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80004668: beq         $t6, $t7, L_8000469C
    if (ctx->r14 == ctx->r15) {
        // 0x8000466C: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_8000469C;
    }
    // 0x8000466C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80004670: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80004674: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x80004678: jal         0x80004534
    // 0x8000467C: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    func_80004534(rdram, ctx);
        goto after_0;
    // 0x8000467C: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x80004680: lui         $t8, 0x8010
    ctx->r24 = S32(0X8010 << 16);
    // 0x80004684: lhu         $t8, 0x5228($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X5228);
    // 0x80004688: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x8000468C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80004690: lwc1        $f12, 0x18($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80004694: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80004698: sw          $t8, 0x3B98($at)
    MEM_W(0X3B98, ctx->r1) = ctx->r24;
L_8000469C:
    // 0x8000469C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800046A0: addiu       $v0, $v0, 0x17A8
    ctx->r2 = ADD32(ctx->r2, 0X17A8);
    // 0x800046A4: lwc1        $f4, 0x0($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X0);
    // 0x800046A8: lwc1        $f8, 0x10($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X10);
    // 0x800046AC: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x800046B0: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800046B4: lwc1        $f18, 0x20($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X20);
    // 0x800046B8: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x800046BC: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x800046C0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800046C4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x800046C8: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x800046CC: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800046D0: lwc1        $f10, 0x30($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X30);
    // 0x800046D4: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x800046D8: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x800046DC: swc1        $f18, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f18.u32l;
    // 0x800046E0: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x800046E4: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x800046E8: mul.s       $f16, $f4, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x800046EC: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800046F0: lwc1        $f18, 0x24($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X24);
    // 0x800046F4: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x800046F8: nop

    // 0x800046FC: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80004700: add.s       $f6, $f16, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80004704: lwc1        $f10, 0x34($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X34);
    // 0x80004708: add.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8000470C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80004710: swc1        $f18, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
    // 0x80004714: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80004718: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x8000471C: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80004720: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80004724: lwc1        $f18, 0x2C($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x80004728: mul.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f14.fl);
    // 0x8000472C: nop

    // 0x80004730: mul.s       $f8, $f18, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80004734: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80004738: lwc1        $f10, 0x3C($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X3C);
    // 0x8000473C: add.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x80004740: add.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80004744: swc1        $f18, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f18.u32l;
    // 0x80004748: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x8000474C: nop

    // 0x80004750: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80004754: nop

    // 0x80004758: bc1f        L_80004788
    if (!c1cs) {
        // 0x8000475C: nop
    
            goto L_80004788;
    }
    // 0x8000475C: nop

    // 0x80004760: lwc1        $f4, 0x0($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X0);
    // 0x80004764: nop

    // 0x80004768: div.s       $f16, $f4, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x8000476C: swc1        $f16, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f16.u32l;
    // 0x80004770: lwc1        $f8, 0x0($v1)
    ctx->f8.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80004774: lwc1        $f10, 0x0($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80004778: nop

    // 0x8000477C: div.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = DIV_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80004780: b           L_80004794
    // 0x80004784: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
        goto L_80004794;
    // 0x80004784: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
L_80004788:
    // 0x80004788: swc1        $f2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f2.u32l;
    // 0x8000478C: swc1        $f2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f2.u32l;
    // 0x80004790: swc1        $f2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f2.u32l;
L_80004794:
    // 0x80004794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80004798: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000479C: jr          $ra
    // 0x800047A0: nop

    return;
    // 0x800047A0: nop

;}
RECOMP_FUNC void func_800047A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800047A4: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800047A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800047AC: addiu       $v0, $v0, 0x3B9C
    ctx->r2 = ADD32(ctx->r2, 0X3B9C);
    // 0x800047B0: sw          $a0, 0x1868($at)
    MEM_W(0X1868, ctx->r1) = ctx->r4;
    // 0x800047B4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800047B8: nop

    // 0x800047BC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800047C0: jr          $ra
    // 0x800047C4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    return;
    // 0x800047C4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_800047C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800047C8: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x800047CC: lw          $t6, 0x3B9C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3B9C);
    // 0x800047D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800047D4: beq         $t6, $zero, L_800047F4
    if (ctx->r14 == 0) {
        // 0x800047D8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800047F4;
    }
    // 0x800047D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800047DC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800047E0: lbu         $a0, 0x186B($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X186B);
    // 0x800047E4: jal         0x8001B854
    // 0x800047E8: nop

    func_8001B854(rdram, ctx);
        goto after_0;
    // 0x800047E8: nop

    after_0:
    // 0x800047EC: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x800047F0: sw          $zero, 0x3B9C($at)
    MEM_W(0X3B9C, ctx->r1) = 0;
L_800047F4:
    // 0x800047F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800047F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800047FC: jr          $ra
    // 0x80004800: nop

    return;
    // 0x80004800: nop

;}
RECOMP_FUNC void func_80004804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004804: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80004808: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8000480C: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x80004810: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80004814: lbu         $v0, -0x765E($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X765E);
    // 0x80004818: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8000481C: bne         $v0, $at, L_80004830
    if (ctx->r2 != ctx->r1) {
        // 0x80004820: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_80004830;
    }
    // 0x80004820: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80004824: jr          $ra
    // 0x80004828: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80004828: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000482C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
L_80004830:
    // 0x80004830: bne         $v0, $at, L_80004844
    if (ctx->r2 != ctx->r1) {
        // 0x80004834: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_80004844;
    }
    // 0x80004834: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80004838: jr          $ra
    // 0x8000483C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8000483C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80004840: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
L_80004844:
    // 0x80004844: bne         $v0, $at, L_80004858
    if (ctx->r2 != ctx->r1) {
        // 0x80004848: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_80004858;
    }
    // 0x80004848: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x8000484C: jr          $ra
    // 0x80004850: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80004850: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80004854: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
L_80004858:
    // 0x80004858: bne         $v0, $at, L_8000486C
    if (ctx->r2 != ctx->r1) {
        // 0x8000485C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8000486C;
    }
    // 0x8000485C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80004860: jr          $ra
    // 0x80004864: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80004864: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80004868: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000486C:
    // 0x8000486C: jr          $ra
    // 0x80004870: nop

    return;
    // 0x80004870: nop

;}
