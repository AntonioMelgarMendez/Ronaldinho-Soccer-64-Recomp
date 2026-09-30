#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80004874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004874: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80004878: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8000487C: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x80004880: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80004884: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80004888: lw          $v0, 0x3BA0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3BA0);
    // 0x8000488C: lbu         $t7, -0x765E($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X765E);
    // 0x80004890: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80004894: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80004898: beq         $v0, $v1, L_800048CC
    if (ctx->r2 == ctx->r3) {
        // 0x8000489C: sw          $t7, 0x3BA0($at)
        MEM_W(0X3BA0, ctx->r1) = ctx->r15;
            goto L_800048CC;
    }
    // 0x8000489C: sw          $t7, 0x3BA0($at)
    MEM_W(0X3BA0, ctx->r1) = ctx->r15;
    // 0x800048A0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x800048A4: beq         $v0, $at, L_800048CC
    if (ctx->r2 == ctx->r1) {
        // 0x800048A8: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_800048CC;
    }
    // 0x800048A8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x800048AC: beq         $v0, $at, L_800048CC
    if (ctx->r2 == ctx->r1) {
        // 0x800048B0: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_800048CC;
    }
    // 0x800048B0: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x800048B4: beq         $v0, $at, L_800048CC
    if (ctx->r2 == ctx->r1) {
        // 0x800048B8: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_800048CC;
    }
    // 0x800048B8: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x800048BC: beq         $v0, $at, L_800048CC
    if (ctx->r2 == ctx->r1) {
        // 0x800048C0: nop
    
            goto L_800048CC;
    }
    // 0x800048C0: nop

    // 0x800048C4: jr          $ra
    // 0x800048C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800048C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800048CC:
    // 0x800048CC: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x800048D0: lw          $t8, 0x3BA0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3BA0);
    // 0x800048D4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x800048D8: beq         $t8, $v1, L_80004908
    if (ctx->r24 == ctx->r3) {
        // 0x800048DC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80004908;
    }
    // 0x800048DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800048E0: beq         $t8, $at, L_80004908
    if (ctx->r24 == ctx->r1) {
        // 0x800048E4: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_80004908;
    }
    // 0x800048E4: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x800048E8: beq         $t8, $at, L_80004908
    if (ctx->r24 == ctx->r1) {
        // 0x800048EC: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_80004908;
    }
    // 0x800048EC: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x800048F0: beq         $t8, $at, L_80004908
    if (ctx->r24 == ctx->r1) {
        // 0x800048F4: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_80004908;
    }
    // 0x800048F4: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x800048F8: beq         $t8, $at, L_80004908
    if (ctx->r24 == ctx->r1) {
        // 0x800048FC: nop
    
            goto L_80004908;
    }
    // 0x800048FC: nop

    // 0x80004900: jr          $ra
    // 0x80004904: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80004904: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80004908:
    // 0x80004908: jr          $ra
    // 0x8000490C: nop

    return;
    // 0x8000490C: nop

;}
RECOMP_FUNC void func_80004910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004910: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80004914: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x80004918: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x8000491C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x80004920: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80004924: lw          $v0, 0x3BA4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3BA4);
    // 0x80004928: lbu         $t7, -0x765E($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X765E);
    // 0x8000492C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80004930: lui         $at, 0x8009
    ctx->r1 = S32(0X8009 << 16);
    // 0x80004934: beq         $v0, $v1, L_80004968
    if (ctx->r2 == ctx->r3) {
        // 0x80004938: sw          $t7, 0x3BA4($at)
        MEM_W(0X3BA4, ctx->r1) = ctx->r15;
            goto L_80004968;
    }
    // 0x80004938: sw          $t7, 0x3BA4($at)
    MEM_W(0X3BA4, ctx->r1) = ctx->r15;
    // 0x8000493C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80004940: beq         $v0, $at, L_80004968
    if (ctx->r2 == ctx->r1) {
        // 0x80004944: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_80004968;
    }
    // 0x80004944: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80004948: beq         $v0, $at, L_80004968
    if (ctx->r2 == ctx->r1) {
        // 0x8000494C: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_80004968;
    }
    // 0x8000494C: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80004950: beq         $v0, $at, L_80004968
    if (ctx->r2 == ctx->r1) {
        // 0x80004954: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_80004968;
    }
    // 0x80004954: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80004958: beq         $v0, $at, L_80004968
    if (ctx->r2 == ctx->r1) {
        // 0x8000495C: nop
    
            goto L_80004968;
    }
    // 0x8000495C: nop

    // 0x80004960: jr          $ra
    // 0x80004964: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80004964: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80004968:
    // 0x80004968: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8000496C: lw          $t8, 0x3BA4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X3BA4);
    // 0x80004970: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80004974: beq         $t8, $v1, L_800049A4
    if (ctx->r24 == ctx->r3) {
        // 0x80004978: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800049A4;
    }
    // 0x80004978: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000497C: beq         $t8, $at, L_800049A4
    if (ctx->r24 == ctx->r1) {
        // 0x80004980: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_800049A4;
    }
    // 0x80004980: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80004984: beq         $t8, $at, L_800049A4
    if (ctx->r24 == ctx->r1) {
        // 0x80004988: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_800049A4;
    }
    // 0x80004988: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x8000498C: beq         $t8, $at, L_800049A4
    if (ctx->r24 == ctx->r1) {
        // 0x80004990: addiu       $at, $zero, 0xE
        ctx->r1 = ADD32(0, 0XE);
            goto L_800049A4;
    }
    // 0x80004990: addiu       $at, $zero, 0xE
    ctx->r1 = ADD32(0, 0XE);
    // 0x80004994: beq         $t8, $at, L_800049A4
    if (ctx->r24 == ctx->r1) {
        // 0x80004998: nop
    
            goto L_800049A4;
    }
    // 0x80004998: nop

    // 0x8000499C: jr          $ra
    // 0x800049A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800049A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800049A4:
    // 0x800049A4: jr          $ra
    // 0x800049A8: nop

    return;
    // 0x800049A8: nop

;}
RECOMP_FUNC void func_800049AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800049AC: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x800049B0: lw          $v0, 0x6980($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6980);
    // 0x800049B4: nop

    // 0x800049B8: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x800049BC: beq         $at, $zero, L_800049D0
    if (ctx->r1 == 0) {
        // 0x800049C0: slti        $at, $v0, 0x7
        ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
            goto L_800049D0;
    }
    // 0x800049C0: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x800049C4: jr          $ra
    // 0x800049C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800049C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800049CC: slti        $at, $v0, 0x7
    ctx->r1 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
L_800049D0:
    // 0x800049D0: bne         $at, $zero, L_800049E0
    if (ctx->r1 != 0) {
        // 0x800049D4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800049E0;
    }
    // 0x800049D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800049D8: jr          $ra
    // 0x800049DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800049DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800049E0:
    // 0x800049E0: jr          $ra
    // 0x800049E4: nop

    return;
    // 0x800049E4: nop

;}
RECOMP_FUNC void func_800049E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800049E8: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800049EC: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x800049F0: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x800049F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800049F8: lbu         $t7, -0x765E($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X765E);
    // 0x800049FC: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80004A00: bne         $t7, $at, L_80004A24
    if (ctx->r15 != ctx->r1) {
        // 0x80004A04: lui         $t8, 0x802C
        ctx->r24 = S32(0X802C << 16);
            goto L_80004A24;
    }
    // 0x80004A04: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x80004A08: lbu         $t8, 0x3968($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X3968);
    // 0x80004A0C: nop

    // 0x80004A10: slti        $at, $t8, 0x8
    ctx->r1 = SIGNED(ctx->r24) < 0X8 ? 1 : 0;
    // 0x80004A14: bne         $at, $zero, L_80004A28
    if (ctx->r1 != 0) {
        // 0x80004A18: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80004A28;
    }
    // 0x80004A18: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80004A1C: jr          $ra
    // 0x80004A20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80004A20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80004A24:
    // 0x80004A24: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80004A28:
    // 0x80004A28: jr          $ra
    // 0x80004A2C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80004A2C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80004A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004A60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80004A64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80004A68: jal         0x80004A90
    // 0x80004A6C: nop

    func_80004A90(rdram, ctx);
        goto after_0;
    // 0x80004A6C: nop

    after_0:
    // 0x80004A70: jal         0x800054F4
    // 0x80004A74: nop

    func_800054F4(rdram, ctx);
        goto after_1;
    // 0x80004A74: nop

    after_1:
    // 0x80004A78: jal         0x800136F0
    // 0x80004A7C: nop

    func_800136F0(rdram, ctx);
        goto after_2;
    // 0x80004A7C: nop

    after_2:
    // 0x80004A80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80004A84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80004A88: jr          $ra
    // 0x80004A8C: nop

    return;
    // 0x80004A8C: nop

;}
RECOMP_FUNC void func_80004A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004A90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80004A94: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80004A98: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80004A9C: jal         0x8007FBD8
    // 0x80004AA0: addiu       $a0, $a0, 0x1668
    ctx->r4 = ADD32(ctx->r4, 0X1668);
    func_8007FBD8(rdram, ctx);
        goto after_0;
    // 0x80004AA0: addiu       $a0, $a0, 0x1668
    ctx->r4 = ADD32(ctx->r4, 0X1668);
    after_0:
    // 0x80004AA4: lui         $at, 0x4570
    ctx->r1 = S32(0X4570 << 16);
    // 0x80004AA8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80004AAC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80004AB0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80004AB4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80004AB8: lwc1        $f8, 0x2E20($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2E20);
    // 0x80004ABC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80004AC0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80004AC4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80004AC8: addiu       $a0, $a0, 0x1628
    ctx->r4 = ADD32(ctx->r4, 0X1628);
    // 0x80004ACC: lui         $a1, 0xC5A0
    ctx->r5 = S32(0XC5A0 << 16);
    // 0x80004AD0: lui         $a2, 0x45A0
    ctx->r6 = S32(0X45A0 << 16);
    // 0x80004AD4: lui         $a3, 0xC570
    ctx->r7 = S32(0XC570 << 16);
    // 0x80004AD8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80004ADC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    // 0x80004AE0: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x80004AE4: jal         0x800803D4
    // 0x80004AE8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    func_800803D4(rdram, ctx);
        goto after_1;
    // 0x80004AE8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x80004AEC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80004AF0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80004AF4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80004AF8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80004AFC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80004B00: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80004B04: jal         0x80080494
    // 0x80004B08: addiu       $a0, $a0, 0x16A8
    ctx->r4 = ADD32(ctx->r4, 0X16A8);
    func_80080494(rdram, ctx);
        goto after_2;
    // 0x80004B08: addiu       $a0, $a0, 0x16A8
    ctx->r4 = ADD32(ctx->r4, 0X16A8);
    after_2:
    // 0x80004B0C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80004B10: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80004B14: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80004B18: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80004B1C: addiu       $a0, $a0, 0x16E8
    ctx->r4 = ADD32(ctx->r4, 0X16E8);
    // 0x80004B20: jal         0x80080528
    // 0x80004B24: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_80080528(rdram, ctx);
        goto after_3;
    // 0x80004B24: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_3:
    // 0x80004B28: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80004B2C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80004B30: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80004B34: addiu       $a0, $a0, 0x1768
    ctx->r4 = ADD32(ctx->r4, 0X1768);
    // 0x80004B38: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    // 0x80004B3C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80004B40: jal         0x80080714
    // 0x80004B44: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_80080714(rdram, ctx);
        goto after_4;
    // 0x80004B44: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x80004B48: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80004B4C: lwc1        $f0, 0x2E24($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X2E24);
    // 0x80004B50: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80004B54: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80004B58: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80004B5C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80004B60: jal         0x80080494
    // 0x80004B64: addiu       $a0, $a0, 0x1728
    ctx->r4 = ADD32(ctx->r4, 0X1728);
    func_80080494(rdram, ctx);
        goto after_5;
    // 0x80004B64: addiu       $a0, $a0, 0x1728
    ctx->r4 = ADD32(ctx->r4, 0X1728);
    after_5:
    // 0x80004B68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80004B6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80004B70: jr          $ra
    // 0x80004B74: nop

    return;
    // 0x80004B74: nop

    // 0x80004B78: nop

    // 0x80004B7C: nop

;}
RECOMP_FUNC void func_80004B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004B80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80004B84: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80004B88: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80004B8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80004B90: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80004B94: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80004B98: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x80004B9C: jal         0x80004D00
    // 0x80004BA0: nop

    func_80004D00(rdram, ctx);
        goto after_0;
    // 0x80004BA0: nop

    after_0:
    // 0x80004BA4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80004BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80004BAC: jal         0x80004D9C
    // 0x80004BB0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80004D9C(rdram, ctx);
        goto after_1;
    // 0x80004BB0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x80004BB4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80004BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80004BBC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80004BC0: jal         0x80004D78
    // 0x80004BC4: sw          $t6, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r14;
    func_80004D78(rdram, ctx);
        goto after_2;
    // 0x80004BC4: sw          $t6, 0x10($s1)
    MEM_W(0X10, ctx->r17) = ctx->r14;
    after_2:
    // 0x80004BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80004BCC: jal         0x80004E20
    // 0x80004BD0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80004E20(rdram, ctx);
        goto after_3;
    // 0x80004BD0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x80004BD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80004BD8: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x80004BDC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80004BE0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80004BE4: jr          $ra
    // 0x80004BE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80004BE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80004BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004BEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80004BF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80004BF4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80004BF8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80004BFC: jal         0x80004C98
    // 0x80004C00: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_80004C98(rdram, ctx);
        goto after_0;
    // 0x80004C00: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x80004C04: beq         $v0, $zero, L_80004C38
    if (ctx->r2 == 0) {
        // 0x80004C08: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80004C38;
    }
    // 0x80004C08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80004C0C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80004C10: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80004C14: jal         0x80004C48
    // 0x80004C18: nop

    func_80004C48(rdram, ctx);
        goto after_1;
    // 0x80004C18: nop

    after_1:
    // 0x80004C1C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80004C20: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80004C24: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x80004C28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80004C2C: b           L_80004C38
    // 0x80004C30: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
        goto L_80004C38;
    // 0x80004C30: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x80004C34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80004C38:
    // 0x80004C38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80004C3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80004C40: jr          $ra
    // 0x80004C44: nop

    return;
    // 0x80004C44: nop

;}
RECOMP_FUNC void func_80004C48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004C48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80004C4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80004C50: jal         0x80004D00
    // 0x80004C54: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80004D00(rdram, ctx);
        goto after_0;
    // 0x80004C54: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80004C58: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80004C5C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80004C60: jal         0x80004D9C
    // 0x80004C64: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80004D9C(rdram, ctx);
        goto after_1;
    // 0x80004C64: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x80004C68: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80004C6C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80004C70: jal         0x80004D78
    // 0x80004C74: nop

    func_80004D78(rdram, ctx);
        goto after_2;
    // 0x80004C74: nop

    after_2:
    // 0x80004C78: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80004C7C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80004C80: jal         0x80004E20
    // 0x80004C84: nop

    func_80004E20(rdram, ctx);
        goto after_3;
    // 0x80004C84: nop

    after_3:
    // 0x80004C88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80004C8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80004C90: jr          $ra
    // 0x80004C94: nop

    return;
    // 0x80004C94: nop

;}
RECOMP_FUNC void func_80004C98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004C98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80004C9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80004CA0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80004CA4: jal         0x80004E78
    // 0x80004CA8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80004E78(rdram, ctx);
        goto after_0;
    // 0x80004CA8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80004CAC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80004CB0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80004CB4: beq         $v1, $zero, L_80004CEC
    if (ctx->r3 == 0) {
        // 0x80004CB8: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80004CEC;
    }
    // 0x80004CB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80004CBC:
    // 0x80004CBC: lw          $t6, 0x10($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X10);
    // 0x80004CC0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80004CC4: bne         $a1, $t6, L_80004CDC
    if (ctx->r5 != ctx->r14) {
        // 0x80004CC8: nop
    
            goto L_80004CDC;
    }
    // 0x80004CC8: nop

    // 0x80004CCC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80004CD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80004CD4: b           L_80004CF0
    // 0x80004CD8: sw          $v1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r3;
        goto L_80004CF0;
    // 0x80004CD8: sw          $v1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r3;
L_80004CDC:
    // 0x80004CDC: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
    // 0x80004CE0: nop

    // 0x80004CE4: bne         $v1, $zero, L_80004CBC
    if (ctx->r3 != 0) {
        // 0x80004CE8: nop
    
            goto L_80004CBC;
    }
    // 0x80004CE8: nop

L_80004CEC:
    // 0x80004CEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80004CF0:
    // 0x80004CF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80004CF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80004CF8: jr          $ra
    // 0x80004CFC: nop

    return;
    // 0x80004CFC: nop

;}
RECOMP_FUNC void func_80004D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004D00: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80004D04: nop

    // 0x80004D08: beq         $v0, $zero, L_80004D1C
    if (ctx->r2 == 0) {
        // 0x80004D0C: nop
    
            goto L_80004D1C;
    }
    // 0x80004D0C: nop

    // 0x80004D10: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x80004D14: nop

    // 0x80004D18: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_80004D1C:
    // 0x80004D1C: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x80004D20: nop

    // 0x80004D24: beq         $v0, $zero, L_80004D38
    if (ctx->r2 == 0) {
        // 0x80004D28: nop
    
            goto L_80004D38;
    }
    // 0x80004D28: nop

    // 0x80004D2C: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x80004D30: nop

    // 0x80004D34: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
L_80004D38:
    // 0x80004D38: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80004D3C: nop

    // 0x80004D40: bne         $a1, $t8, L_80004D54
    if (ctx->r5 != ctx->r24) {
        // 0x80004D44: nop
    
            goto L_80004D54;
    }
    // 0x80004D44: nop

    // 0x80004D48: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x80004D4C: nop

    // 0x80004D50: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
L_80004D54:
    // 0x80004D54: lw          $t0, 0x4($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X4);
    // 0x80004D58: nop

    // 0x80004D5C: bne         $a1, $t0, L_80004D70
    if (ctx->r5 != ctx->r8) {
        // 0x80004D60: nop
    
            goto L_80004D70;
    }
    // 0x80004D60: nop

    // 0x80004D64: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x80004D68: nop

    // 0x80004D6C: sw          $t1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r9;
L_80004D70:
    // 0x80004D70: jr          $ra
    // 0x80004D74: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x80004D74: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
;}
RECOMP_FUNC void func_80004D78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004D78: sw          $zero, 0x0($a1)
    MEM_W(0X0, ctx->r5) = 0;
    // 0x80004D7C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80004D80: nop

    // 0x80004D84: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x80004D88: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x80004D8C: nop

    // 0x80004D90: sw          $a1, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r5;
    // 0x80004D94: jr          $ra
    // 0x80004D98: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    return;
    // 0x80004D98: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80004D9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004D9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80004DA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80004DA4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80004DA8: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x80004DAC: jal         0x80004E78
    // 0x80004DB0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_80004E78(rdram, ctx);
        goto after_0;
    // 0x80004DB0: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x80004DB4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80004DB8: nop

    // 0x80004DBC: lw          $v1, 0x8($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X8);
    // 0x80004DC0: nop

    // 0x80004DC4: beq         $v1, $zero, L_80004DD8
    if (ctx->r3 == 0) {
        // 0x80004DC8: nop
    
            goto L_80004DD8;
    }
    // 0x80004DC8: nop

    // 0x80004DCC: lw          $t6, 0xC($a2)
    ctx->r14 = MEM_W(ctx->r6, 0XC);
    // 0x80004DD0: nop

    // 0x80004DD4: sw          $t6, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r14;
L_80004DD8:
    // 0x80004DD8: lw          $v1, 0xC($a2)
    ctx->r3 = MEM_W(ctx->r6, 0XC);
    // 0x80004DDC: nop

    // 0x80004DE0: beq         $v1, $zero, L_80004DF4
    if (ctx->r3 == 0) {
        // 0x80004DE4: nop
    
            goto L_80004DF4;
    }
    // 0x80004DE4: nop

    // 0x80004DE8: lw          $t7, 0x8($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X8);
    // 0x80004DEC: nop

    // 0x80004DF0: sw          $t7, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r15;
L_80004DF4:
    // 0x80004DF4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80004DF8: nop

    // 0x80004DFC: bne         $a2, $t8, L_80004E14
    if (ctx->r6 != ctx->r24) {
        // 0x80004E00: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80004E14;
    }
    // 0x80004E00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80004E04: lw          $t9, 0xC($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XC);
    // 0x80004E08: nop

    // 0x80004E0C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80004E10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80004E14:
    // 0x80004E14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80004E18: jr          $ra
    // 0x80004E1C: nop

    return;
    // 0x80004E1C: nop

;}
RECOMP_FUNC void func_80004E20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004E20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80004E24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80004E28: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80004E2C: lw          $a1, 0x10($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X10);
    // 0x80004E30: jal         0x80004E78
    // 0x80004E34: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_80004E78(rdram, ctx);
        goto after_0;
    // 0x80004E34: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x80004E38: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80004E3C: nop

    // 0x80004E40: sw          $zero, 0x8($a2)
    MEM_W(0X8, ctx->r6) = 0;
    // 0x80004E44: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80004E48: nop

    // 0x80004E4C: beq         $v1, $zero, L_80004E64
    if (ctx->r3 == 0) {
        // 0x80004E50: nop
    
            goto L_80004E64;
    }
    // 0x80004E50: nop

    // 0x80004E54: sw          $v1, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->r3;
    // 0x80004E58: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80004E5C: nop

    // 0x80004E60: sw          $a2, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r6;
L_80004E64:
    // 0x80004E64: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x80004E68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80004E6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80004E70: jr          $ra
    // 0x80004E74: nop

    return;
    // 0x80004E74: nop

;}
RECOMP_FUNC void func_80004E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004E78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80004E7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80004E80: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80004E84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80004E88: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80004E8C: lw          $a1, 0x10($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X10);
    // 0x80004E90: jal         0x80005038
    // 0x80004E94: nop

    func_80005038(rdram, ctx);
        goto after_0;
    // 0x80004E94: nop

    after_0:
    // 0x80004E98: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80004E9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80004EA0: lw          $t9, 0x14($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X14);
    // 0x80004EA4: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80004EA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80004EAC: jr          $ra
    // 0x80004EB0: addu        $v0, $t7, $t9
    ctx->r2 = ADD32(ctx->r15, ctx->r25);
    return;
    // 0x80004EB0: addu        $v0, $t7, $t9
    ctx->r2 = ADD32(ctx->r15, ctx->r25);
;}
RECOMP_FUNC void func_80004EB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80004EB4: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80004EB8: sw          $a1, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r5;
    // 0x80004EBC: sw          $a2, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r6;
    // 0x80004EC0: sw          $a3, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r7;
    // 0x80004EC4: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x80004EC8: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x80004ECC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80004ED0: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x80004ED4: addiu       $t9, $t8, -0x18
    ctx->r25 = ADD32(ctx->r24, -0X18);
    // 0x80004ED8: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x80004EDC: sw          $t9, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r25;
    // 0x80004EE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80004EE4: blez        $a1, L_80004FD0
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80004EE8: sw          $t6, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->r14;
            goto L_80004FD0;
    }
    // 0x80004EE8: sw          $t6, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r14;
    // 0x80004EEC: andi        $v1, $a1, 0x1
    ctx->r3 = ctx->r5 & 0X1;
    // 0x80004EF0: beq         $v1, $zero, L_80004F2C
    if (ctx->r3 == 0) {
        // 0x80004EF4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80004F2C;
    }
    // 0x80004EF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80004EF8: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x80004EFC: bne         $a1, $at, L_80004F0C
    if (ctx->r5 != ctx->r1) {
        // 0x80004F00: sw          $zero, 0x0($a2)
        MEM_W(0X0, ctx->r6) = 0;
            goto L_80004F0C;
    }
    // 0x80004F00: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x80004F04: b           L_80004F14
    // 0x80004F08: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
        goto L_80004F14;
    // 0x80004F08: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
L_80004F0C:
    // 0x80004F0C: addiu       $t2, $a2, 0x18
    ctx->r10 = ADD32(ctx->r6, 0X18);
    // 0x80004F10: sw          $t2, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r10;
L_80004F14:
    // 0x80004F14: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80004F18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80004F1C: sw          $t1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r9;
    // 0x80004F20: sw          $zero, 0x8($v1)
    MEM_W(0X8, ctx->r3) = 0;
    // 0x80004F24: beq         $v0, $a1, L_80004FCC
    if (ctx->r2 == ctx->r5) {
        // 0x80004F28: sw          $zero, 0xC($v1)
        MEM_W(0XC, ctx->r3) = 0;
            goto L_80004FCC;
    }
    // 0x80004F28: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
L_80004F2C:
    // 0x80004F2C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80004F30: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80004F34: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80004F38: addu        $a0, $a2, $v1
    ctx->r4 = ADD32(ctx->r6, ctx->r3);
    // 0x80004F3C: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
L_80004F40:
    // 0x80004F40: bne         $v0, $zero, L_80004F50
    if (ctx->r2 != 0) {
        // 0x80004F44: addiu       $t5, $v0, 0x1
        ctx->r13 = ADD32(ctx->r2, 0X1);
            goto L_80004F50;
    }
    // 0x80004F44: addiu       $t5, $v0, 0x1
    ctx->r13 = ADD32(ctx->r2, 0X1);
    // 0x80004F48: b           L_80004F5C
    // 0x80004F4C: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
        goto L_80004F5C;
    // 0x80004F4C: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
L_80004F50:
    // 0x80004F50: addu        $t3, $v1, $a2
    ctx->r11 = ADD32(ctx->r3, ctx->r6);
    // 0x80004F54: addiu       $t4, $t3, -0x18
    ctx->r12 = ADD32(ctx->r11, -0X18);
    // 0x80004F58: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
L_80004F5C:
    // 0x80004F5C: bne         $a1, $t5, L_80004F6C
    if (ctx->r5 != ctx->r13) {
        // 0x80004F60: addiu       $t0, $v0, 0x2
        ctx->r8 = ADD32(ctx->r2, 0X2);
            goto L_80004F6C;
    }
    // 0x80004F60: addiu       $t0, $v0, 0x2
    ctx->r8 = ADD32(ctx->r2, 0X2);
    // 0x80004F64: b           L_80004F78
    // 0x80004F68: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
        goto L_80004F78;
    // 0x80004F68: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
L_80004F6C:
    // 0x80004F6C: addu        $t6, $v1, $a2
    ctx->r14 = ADD32(ctx->r3, ctx->r6);
    // 0x80004F70: addiu       $t7, $t6, 0x18
    ctx->r15 = ADD32(ctx->r14, 0X18);
    // 0x80004F74: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
L_80004F78:
    // 0x80004F78: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x80004F7C: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x80004F80: bne         $v0, $t1, L_80004F90
    if (ctx->r2 != ctx->r9) {
        // 0x80004F84: sw          $t1, 0x10($a0)
        MEM_W(0X10, ctx->r4) = ctx->r9;
            goto L_80004F90;
    }
    // 0x80004F84: sw          $t1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r9;
    // 0x80004F88: b           L_80004F98
    // 0x80004F8C: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
        goto L_80004F98;
    // 0x80004F8C: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
L_80004F90:
    // 0x80004F90: addu        $t8, $v1, $a2
    ctx->r24 = ADD32(ctx->r3, ctx->r6);
    // 0x80004F94: sw          $t8, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r24;
L_80004F98:
    // 0x80004F98: bne         $a1, $t0, L_80004FA8
    if (ctx->r5 != ctx->r8) {
        // 0x80004F9C: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_80004FA8;
    }
    // 0x80004F9C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x80004FA0: b           L_80004FB4
    // 0x80004FA4: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
        goto L_80004FB4;
    // 0x80004FA4: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
L_80004FA8:
    // 0x80004FA8: addu        $t9, $v1, $a2
    ctx->r25 = ADD32(ctx->r3, ctx->r6);
    // 0x80004FAC: addiu       $t2, $t9, 0x30
    ctx->r10 = ADD32(ctx->r25, 0X30);
    // 0x80004FB0: sw          $t2, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r10;
L_80004FB4:
    // 0x80004FB4: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x80004FB8: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x80004FBC: sw          $t1, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r9;
    // 0x80004FC0: addiu       $v1, $v1, 0x30
    ctx->r3 = ADD32(ctx->r3, 0X30);
    // 0x80004FC4: bne         $t0, $a1, L_80004F40
    if (ctx->r8 != ctx->r5) {
        // 0x80004FC8: addiu       $a0, $a0, 0x30
        ctx->r4 = ADD32(ctx->r4, 0X30);
            goto L_80004F40;
    }
    // 0x80004FC8: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
L_80004FCC:
    // 0x80004FCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80004FD0:
    // 0x80004FD0: blez        $a3, L_80005030
    if (SIGNED(ctx->r7) <= 0) {
        // 0x80004FD4: andi        $a1, $a3, 0x3
        ctx->r5 = ctx->r7 & 0X3;
            goto L_80005030;
    }
    // 0x80004FD4: andi        $a1, $a3, 0x3
    ctx->r5 = ctx->r7 & 0X3;
    // 0x80004FD8: beq         $a1, $zero, L_80005004
    if (ctx->r5 == 0) {
        // 0x80004FDC: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_80005004;
    }
    // 0x80004FDC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80004FE0: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x80004FE4: sll         $t4, $v0, 2
    ctx->r12 = S32(ctx->r2 << 2);
    // 0x80004FE8: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
L_80004FEC:
    // 0x80004FEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80004FF0: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x80004FF4: bne         $a0, $v0, L_80004FEC
    if (ctx->r4 != ctx->r2) {
        // 0x80004FF8: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80004FEC;
    }
    // 0x80004FF8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80004FFC: beq         $v0, $a3, L_80005030
    if (ctx->r2 == ctx->r7) {
        // 0x80005000: nop
    
            goto L_80005030;
    }
    // 0x80005000: nop

L_80005004:
    // 0x80005004: lw          $t5, 0x10($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X10);
    // 0x80005008: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8000500C: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x80005010: addu        $a0, $t7, $t5
    ctx->r4 = ADD32(ctx->r15, ctx->r13);
    // 0x80005014: addu        $v1, $t5, $t6
    ctx->r3 = ADD32(ctx->r13, ctx->r14);
L_80005018:
    // 0x80005018: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x8000501C: sw          $zero, -0xC($v1)
    MEM_W(-0XC, ctx->r3) = 0;
    // 0x80005020: sw          $zero, -0x8($v1)
    MEM_W(-0X8, ctx->r3) = 0;
    // 0x80005024: sw          $zero, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = 0;
    // 0x80005028: bne         $v1, $a0, L_80005018
    if (ctx->r3 != ctx->r4) {
        // 0x8000502C: sw          $zero, -0x10($v1)
        MEM_W(-0X10, ctx->r3) = 0;
            goto L_80005018;
    }
    // 0x8000502C: sw          $zero, -0x10($v1)
    MEM_W(-0X10, ctx->r3) = 0;
L_80005030:
    // 0x80005030: jr          $ra
    // 0x80005034: nop

    return;
    // 0x80005034: nop

;}
RECOMP_FUNC void func_80005038(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005038: addu        $t6, $a0, $a0
    ctx->r14 = ADD32(ctx->r4, ctx->r4);
    // 0x8000503C: srl         $t7, $t6, 8
    ctx->r15 = S32(U32(ctx->r14) >> 8);
    // 0x80005040: divu        $zero, $t7, $a1
    lo = S32(U32(ctx->r15) / U32(ctx->r5)); hi = S32(U32(ctx->r15) % U32(ctx->r5));
    // 0x80005044: bne         $a1, $zero, L_80005050
    if (ctx->r5 != 0) {
        // 0x80005048: nop
    
            goto L_80005050;
    }
    // 0x80005048: nop

    // 0x8000504C: break       7
    do_break(2147504204);
L_80005050:
    // 0x80005050: mfhi        $v0
    ctx->r2 = hi;
    // 0x80005054: jr          $ra
    // 0x80005058: nop

    return;
    // 0x80005058: nop

    // 0x8000505C: nop

;}
RECOMP_FUNC void func_80005060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005060: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80005064: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80005068: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8000506C: lhu         $s0, 0x46($sp)
    ctx->r16 = MEM_HU(ctx->r29, 0X46);
    // 0x80005070: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80005074: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80005078: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000507C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80005080: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x80005084: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80005088: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8000508C: jal         0x8000385C
    // 0x80005090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000385C(rdram, ctx);
        goto after_0;
    // 0x80005090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80005094: bltz        $s1, L_800050AC
    if (SIGNED(ctx->r17) < 0) {
        // 0x80005098: or          $s3, $v0, $zero
        ctx->r19 = ctx->r2 | 0;
            goto L_800050AC;
    }
    // 0x80005098: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x8000509C: jal         0x800004DC
    // 0x800050A0: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    func_800004DC(rdram, ctx);
        goto after_1;
    // 0x800050A0: andi        $a0, $s0, 0xFFFF
    ctx->r4 = ctx->r16 & 0XFFFF;
    after_1:
    // 0x800050A4: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800050A8: bne         $at, $zero, L_800050B8
    if (ctx->r1 != 0) {
        // 0x800050AC: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_800050B8;
    }
L_800050AC:
    // 0x800050AC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800050B0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800050B4: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_800050B8:
    // 0x800050B8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x800050BC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800050C0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x800050C4: jal         0x80005594
    // 0x800050C8: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    func_80005594(rdram, ctx);
        goto after_2;
    // 0x800050C8: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    after_2:
    // 0x800050CC: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x800050D0: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x800050D4: jal         0x800051A4
    // 0x800050D8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800051A4(rdram, ctx);
        goto after_3;
    // 0x800050D8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
    // 0x800050DC: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800050E0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800050E4: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x800050E8: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800050EC: nop

    // 0x800050F0: bc1t        L_80005188
    if (c1cs) {
        // 0x800050F4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80005188;
    }
    // 0x800050F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800050F8: lhu         $t7, 0x2($s3)
    ctx->r15 = MEM_HU(ctx->r19, 0X2);
    // 0x800050FC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80005100: slt         $at, $a2, $t7
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80005104: beq         $at, $zero, L_80005174
    if (ctx->r1 == 0) {
        // 0x80005108: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80005174;
    }
    // 0x80005108: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000510C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80005110: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x80005114: c.le.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl <= ctx->f8.fl;
    // 0x80005118: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8000511C: bc1f        L_80005178
    if (!c1cs) {
        // 0x80005120: lw          $t0, 0x34($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X34);
            goto L_80005178;
    }
    // 0x80005120: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80005124: jal         0x800051A4
    // 0x80005128: addiu       $a0, $a0, 0x3470
    ctx->r4 = ADD32(ctx->r4, 0X3470);
    func_800051A4(rdram, ctx);
        goto after_4;
    // 0x80005128: addiu       $a0, $a0, 0x3470
    ctx->r4 = ADD32(ctx->r4, 0X3470);
    after_4:
    // 0x8000512C: lbu         $t8, 0x1($s3)
    ctx->r24 = MEM_BU(ctx->r19, 0X1);
    // 0x80005130: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80005134: blez        $t8, L_80005184
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80005138: lui         $s1, 0x8013
        ctx->r17 = S32(0X8013 << 16);
            goto L_80005184;
    }
    // 0x80005138: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x8000513C: addiu       $s1, $s1, 0x3470
    ctx->r17 = ADD32(ctx->r17, 0X3470);
L_80005140:
    // 0x80005140: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80005144: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80005148: addiu       $s2, $s2, 0x24
    ctx->r18 = ADD32(ctx->r18, 0X24);
    // 0x8000514C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80005150: jal         0x80005D60
    // 0x80005154: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_80005D60(rdram, ctx);
        goto after_5;
    // 0x80005154: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_5:
    // 0x80005158: lbu         $t9, 0x1($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X1);
    // 0x8000515C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80005160: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80005164: bne         $at, $zero, L_80005140
    if (ctx->r1 != 0) {
        // 0x80005168: addiu       $s1, $s1, 0x24
        ctx->r17 = ADD32(ctx->r17, 0X24);
            goto L_80005140;
    }
    // 0x80005168: addiu       $s1, $s1, 0x24
    ctx->r17 = ADD32(ctx->r17, 0X24);
    // 0x8000516C: b           L_80005188
    // 0x80005170: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80005188;
    // 0x80005170: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80005174:
    // 0x80005174: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
L_80005178:
    // 0x80005178: nop

    // 0x8000517C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80005180: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
L_80005184:
    // 0x80005184: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80005188:
    // 0x80005188: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x8000518C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80005190: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80005194: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80005198: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8000519C: jr          $ra
    // 0x800051A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800051A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800051A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800051A4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800051A8: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x800051AC: lw          $v0, -0x4A98($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4A98);
    // 0x800051B0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800051B4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800051B8: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x800051BC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x800051C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800051C4: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800051C8: beq         $v0, $zero, L_80005208
    if (ctx->r2 == 0) {
        // 0x800051CC: sw          $zero, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = 0;
            goto L_80005208;
    }
    // 0x800051CC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x800051D0: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800051D4: lw          $v1, 0x3788($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3788);
    // 0x800051D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800051DC: sll         $t6, $v1, 8
    ctx->r14 = S32(ctx->r3 << 8);
    // 0x800051E0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800051E4: lui         $t7, 0x802E
    ctx->r15 = S32(0X802E << 16);
    // 0x800051E8: sw          $v1, 0x3788($at)
    MEM_W(0X3788, ctx->r1) = ctx->r3;
    // 0x800051EC: addiu       $t7, $t7, 0x5E18
    ctx->r15 = ADD32(ctx->r15, 0X5E18);
    // 0x800051F0: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x800051F4: bne         $at, $zero, L_80005238
    if (ctx->r1 != 0) {
        // 0x800051F8: addu        $a3, $t6, $t7
        ctx->r7 = ADD32(ctx->r14, ctx->r15);
            goto L_80005238;
    }
    // 0x800051F8: addu        $a3, $t6, $t7
    ctx->r7 = ADD32(ctx->r14, ctx->r15);
    // 0x800051FC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80005200: b           L_80005238
    // 0x80005204: sw          $zero, 0x3788($at)
    MEM_W(0X3788, ctx->r1) = 0;
        goto L_80005238;
    // 0x80005204: sw          $zero, 0x3788($at)
    MEM_W(0X3788, ctx->r1) = 0;
L_80005208:
    // 0x80005208: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x8000520C: subu        $t8, $t8, $s1
    ctx->r24 = SUB32(ctx->r24, ctx->r17);
    // 0x80005210: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80005214: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x80005218: addiu       $at, $zero, 0x79
    ctx->r1 = ADD32(0, 0X79);
    // 0x8000521C: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x80005220: lui         $t2, 0x802E
    ctx->r10 = S32(0X802E << 16);
    // 0x80005224: addiu       $t2, $t2, 0x5E18
    ctx->r10 = ADD32(ctx->r10, 0X5E18);
    // 0x80005228: mfhi        $t0
    ctx->r8 = hi;
    // 0x8000522C: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x80005230: addu        $a3, $t1, $t2
    ctx->r7 = ADD32(ctx->r9, ctx->r10);
    // 0x80005234: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
L_80005238:
    // 0x80005238: bne         $v0, $zero, L_8000525C
    if (ctx->r2 != 0) {
        // 0x8000523C: lui         $a0, 0x802E
        ctx->r4 = S32(0X802E << 16);
            goto L_8000525C;
    }
    // 0x8000523C: lui         $a0, 0x802E
    ctx->r4 = S32(0X802E << 16);
    // 0x80005240: lhu         $t4, 0x0($a3)
    ctx->r12 = MEM_HU(ctx->r7, 0X0);
    // 0x80005244: nop

    // 0x80005248: bne         $s1, $t4, L_80005260
    if (ctx->r17 != ctx->r12) {
        // 0x8000524C: addiu       $at, $zero, -0x10
        ctx->r1 = ADD32(0, -0X10);
            goto L_80005260;
    }
    // 0x8000524C: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80005250: lhu         $t5, 0x2($a3)
    ctx->r13 = MEM_HU(ctx->r7, 0X2);
    // 0x80005254: nop

    // 0x80005258: beq         $s0, $t5, L_800053E0
    if (ctx->r16 == ctx->r13) {
        // 0x8000525C: addiu       $at, $zero, -0x10
        ctx->r1 = ADD32(0, -0X10);
            goto L_800053E0;
    }
L_8000525C:
    // 0x8000525C: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
L_80005260:
    // 0x80005260: and         $v0, $s0, $at
    ctx->r2 = ctx->r16 & ctx->r1;
    // 0x80005264: sh          $s1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r17;
    // 0x80005268: sh          $s0, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r16;
    // 0x8000526C: sll         $t6, $s1, 8
    ctx->r14 = S32(ctx->r17 << 8);
    // 0x80005270: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80005274: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80005278: addiu       $a0, $a0, -0x5870
    ctx->r4 = ADD32(ctx->r4, -0X5870);
    // 0x8000527C: bgez        $v0, L_8000528C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80005280: sra         $t7, $v0, 4
        ctx->r15 = S32(SIGNED(ctx->r2) >> 4);
            goto L_8000528C;
    }
    // 0x80005280: sra         $t7, $v0, 4
    ctx->r15 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80005284: addiu       $at, $v0, 0xF
    ctx->r1 = ADD32(ctx->r2, 0XF);
    // 0x80005288: sra         $t7, $at, 4
    ctx->r15 = S32(SIGNED(ctx->r1) >> 4);
L_8000528C:
    // 0x8000528C: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x80005290: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x80005294: jal         0x80004BEC
    // 0x80005298: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_80004BEC(rdram, ctx);
        goto after_0;
    // 0x80005298: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x8000529C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x800052A0: beq         $v0, $zero, L_8000533C
    if (ctx->r2 == 0) {
        // 0x800052A4: lui         $a0, 0x802E
        ctx->r4 = S32(0X802E << 16);
            goto L_8000533C;
    }
    // 0x800052A4: lui         $a0, 0x802E
    ctx->r4 = S32(0X802E << 16);
    // 0x800052A8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800052AC: nop

    // 0x800052B0: lw          $v0, 0x0($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X0);
    // 0x800052B4: nop

    // 0x800052B8: sltu        $at, $v0, $s0
    ctx->r1 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x800052BC: beq         $at, $zero, L_800053B4
    if (ctx->r1 == 0) {
        // 0x800052C0: subu        $t9, $s0, $v0
        ctx->r25 = SUB32(ctx->r16, ctx->r2);
            goto L_800053B4;
    }
    // 0x800052C0: subu        $t9, $s0, $v0
    ctx->r25 = SUB32(ctx->r16, ctx->r2);
    // 0x800052C4: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800052C8: sltiu       $at, $t0, 0x6
    ctx->r1 = ctx->r8 < 0X6 ? 1 : 0;
    // 0x800052CC: bne         $at, $zero, L_8000531C
    if (ctx->r1 != 0) {
        // 0x800052D0: or          $a1, $s1, $zero
        ctx->r5 = ctx->r17 | 0;
            goto L_8000531C;
    }
    // 0x800052D0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800052D4: addiu       $a2, $v0, 0x1
    ctx->r6 = ADD32(ctx->r2, 0X1);
    // 0x800052D8: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x800052DC: addiu       $a0, $t8, 0x4
    ctx->r4 = ADD32(ctx->r24, 0X4);
    // 0x800052E0: jal         0x80005410
    // 0x800052E4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80005410(rdram, ctx);
        goto after_1;
    // 0x800052E4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x800052E8: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x800052EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800052F0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x800052F4: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x800052F8: jal         0x80005410
    // 0x800052FC: addiu       $a0, $v1, 0x4
    ctx->r4 = ADD32(ctx->r3, 0X4);
    func_80005410(rdram, ctx);
        goto after_2;
    // 0x800052FC: addiu       $a0, $v1, 0x4
    ctx->r4 = ADD32(ctx->r3, 0X4);
    after_2:
    // 0x80005300: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80005304: nop

    // 0x80005308: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x8000530C: nop

    // 0x80005310: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80005314: b           L_800053B4
    // 0x80005318: sw          $t3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r11;
        goto L_800053B4;
    // 0x80005318: sw          $t3, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r11;
L_8000531C:
    // 0x8000531C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80005320: addiu       $a2, $v0, 0x1
    ctx->r6 = ADD32(ctx->r2, 0X1);
    // 0x80005324: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x80005328: jal         0x80005410
    // 0x8000532C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_80005410(rdram, ctx);
        goto after_3;
    // 0x8000532C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_3:
    // 0x80005330: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80005334: b           L_800053B4
    // 0x80005338: sw          $s0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r16;
        goto L_800053B4;
    // 0x80005338: sw          $s0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r16;
L_8000533C:
    // 0x8000533C: jal         0x80004B80
    // 0x80005340: addiu       $a0, $a0, -0x5870
    ctx->r4 = ADD32(ctx->r4, -0X5870);
    func_80004B80(rdram, ctx);
        goto after_4;
    // 0x80005340: addiu       $a0, $a0, -0x5870
    ctx->r4 = ADD32(ctx->r4, -0X5870);
    after_4:
    // 0x80005344: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80005348: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8000534C: subu        $t5, $s0, $a2
    ctx->r13 = SUB32(ctx->r16, ctx->r6);
    // 0x80005350: slti        $at, $t5, 0x6
    ctx->r1 = SIGNED(ctx->r13) < 0X6 ? 1 : 0;
    // 0x80005354: bne         $at, $zero, L_80005398
    if (ctx->r1 != 0) {
        // 0x80005358: addiu       $a0, $v1, 0x4
        ctx->r4 = ADD32(ctx->r3, 0X4);
            goto L_80005398;
    }
    // 0x80005358: addiu       $a0, $v1, 0x4
    ctx->r4 = ADD32(ctx->r3, 0X4);
    // 0x8000535C: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x80005360: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80005364: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x80005368: jal         0x80005410
    // 0x8000536C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_80005410(rdram, ctx);
        goto after_5;
    // 0x8000536C: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_5:
    // 0x80005370: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x80005374: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80005378: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8000537C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x80005380: jal         0x80005410
    // 0x80005384: addiu       $a0, $v1, 0x4
    ctx->r4 = ADD32(ctx->r3, 0X4);
    func_80005410(rdram, ctx);
        goto after_6;
    // 0x80005384: addiu       $a0, $v1, 0x4
    ctx->r4 = ADD32(ctx->r3, 0X4);
    after_6:
    // 0x80005388: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8000538C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80005390: b           L_800053B4
    // 0x80005394: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
        goto L_800053B4;
    // 0x80005394: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
L_80005398:
    // 0x80005398: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8000539C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x800053A0: jal         0x80005410
    // 0x800053A4: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    func_80005410(rdram, ctx);
        goto after_7;
    // 0x800053A4: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_7:
    // 0x800053A8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800053AC: nop

    // 0x800053B0: sw          $s0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r16;
L_800053B4:
    // 0x800053B4: jal         0x8000385C
    // 0x800053B8: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    func_8000385C(rdram, ctx);
        goto after_8;
    // 0x800053B8: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    after_8:
    // 0x800053BC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x800053C0: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x800053C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800053C8: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x800053CC: addiu       $a1, $v1, 0x4
    ctx->r5 = ADD32(ctx->r3, 0X4);
    // 0x800053D0: jal         0x80006370
    // 0x800053D4: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    func_80006370(rdram, ctx);
        goto after_9;
    // 0x800053D4: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    after_9:
    // 0x800053D8: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x800053DC: nop

L_800053E0:
    // 0x800053E0: andi        $a0, $s1, 0xFFFF
    ctx->r4 = ctx->r17 & 0XFFFF;
    // 0x800053E4: jal         0x8000385C
    // 0x800053E8: addiu       $s0, $a3, 0x4
    ctx->r16 = ADD32(ctx->r7, 0X4);
    func_8000385C(rdram, ctx);
        goto after_10;
    // 0x800053E8: addiu       $s0, $a3, 0x4
    ctx->r16 = ADD32(ctx->r7, 0X4);
    after_10:
    // 0x800053EC: lbu         $a0, 0x1($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X1);
    // 0x800053F0: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x800053F4: jal         0x800058A0
    // 0x800053F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800058A0(rdram, ctx);
        goto after_11;
    // 0x800053F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
    // 0x800053FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80005400: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80005404: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80005408: jr          $ra
    // 0x8000540C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8000540C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80005410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005410: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80005414: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80005418: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8000541C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80005420: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80005424: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80005428: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8000542C: jal         0x8000385C
    // 0x80005430: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    func_8000385C(rdram, ctx);
        goto after_0;
    // 0x80005430: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    after_0:
    // 0x80005434: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x80005438: lw          $a1, 0x10($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X10);
    // 0x8000543C: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x80005440: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x80005444: and         $t9, $t1, $at
    ctx->r25 = ctx->r9 & ctx->r1;
    // 0x80005448: sll         $t2, $t9, 1
    ctx->r10 = S32(ctx->r25 << 1);
    // 0x8000544C: sll         $t6, $t1, 1
    ctx->r14 = S32(ctx->r9 << 1);
    // 0x80005450: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x80005454: lhu         $a2, 0x0($t7)
    ctx->r6 = MEM_HU(ctx->r15, 0X0);
    // 0x80005458: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x8000545C: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x80005460: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
    // 0x80005464: lui         $t6, 0x700
    ctx->r14 = S32(0X700 << 16);
    // 0x80005468: lui         $t5, 0x20
    ctx->r13 = S32(0X20 << 16);
    // 0x8000546C: lw          $v1, 0x8($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X8);
    // 0x80005470: addiu       $t5, $t5, 0x3E90
    ctx->r13 = ADD32(ctx->r13, 0X3E90);
    // 0x80005474: addiu       $t6, $t6, 0x0
    ctx->r14 = ADD32(ctx->r14, 0X0);
    // 0x80005478: addu        $t8, $s0, $a2
    ctx->r24 = ADD32(ctx->r16, ctx->r6);
    // 0x8000547C: sll         $t2, $t9, 1
    ctx->r10 = S32(ctx->r25 << 1);
    // 0x80005480: subu        $t7, $t5, $t6
    ctx->r15 = SUB32(ctx->r13, ctx->r14);
    // 0x80005484: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x80005488: subu        $s0, $t8, $t4
    ctx->r16 = SUB32(ctx->r24, ctx->r12);
    // 0x8000548C: lhu         $t8, 0x2($t3)
    ctx->r24 = MEM_HU(ctx->r11, 0X2);
    // 0x80005490: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x80005494: addu        $s1, $a2, $v1
    ctx->r17 = ADD32(ctx->r6, ctx->r3);
    // 0x80005498: addu        $t0, $t8, $v1
    ctx->r8 = ADD32(ctx->r24, ctx->r3);
    // 0x8000549C: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x800054A0: addiu       $v1, $v1, -0x2F8C
    ctx->r3 = ADD32(ctx->r3, -0X2F8C);
    // 0x800054A4: lbu         $t5, 0x0($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X0);
    // 0x800054A8: andi        $a3, $s0, 0x7
    ctx->r7 = ctx->r16 & 0X7;
    // 0x800054AC: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x800054B0: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x800054B4: subu        $a0, $s1, $a3
    ctx->r4 = SUB32(ctx->r17, ctx->r7);
    // 0x800054B8: and         $t4, $t0, $at
    ctx->r12 = ctx->r8 & ctx->r1;
    // 0x800054BC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800054C0: subu        $a1, $s0, $a3
    ctx->r5 = SUB32(ctx->r16, ctx->r7);
    // 0x800054C4: subu        $a2, $t4, $a0
    ctx->r6 = SUB32(ctx->r12, ctx->r4);
    // 0x800054C8: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
    // 0x800054CC: jal         0x8001B1B4
    // 0x800054D0: sb          $t5, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r13;
    func_8001B1B4(rdram, ctx);
        goto after_1;
    // 0x800054D0: sb          $t5, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r13;
    after_1:
    // 0x800054D4: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
    // 0x800054D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800054DC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800054E0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800054E4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800054E8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800054EC: jr          $ra
    // 0x800054F0: sb          $t7, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r15;
    return;
    // 0x800054F0: sb          $t7, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r15;
;}
RECOMP_FUNC void func_800054F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800054F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800054F8: lui         $t6, 0x802E
    ctx->r14 = S32(0X802E << 16);
    // 0x800054FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80005500: addiu       $t6, $t6, -0x5618
    ctx->r14 = ADD32(ctx->r14, -0X5618);
    // 0x80005504: lui         $a0, 0x802E
    ctx->r4 = S32(0X802E << 16);
    // 0x80005508: lui         $a2, 0x802E
    ctx->r6 = S32(0X802E << 16);
    // 0x8000550C: addiu       $a2, $a2, -0x5858
    ctx->r6 = ADD32(ctx->r6, -0X5858);
    // 0x80005510: addiu       $a0, $a0, -0x5870
    ctx->r4 = ADD32(ctx->r4, -0X5870);
    // 0x80005514: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80005518: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x8000551C: jal         0x80004EB4
    // 0x80005520: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    func_80004EB4(rdram, ctx);
        goto after_0;
    // 0x80005520: addiu       $a3, $zero, 0xB
    ctx->r7 = ADD32(0, 0XB);
    after_0:
    // 0x80005524: lui         $v0, 0x802E
    ctx->r2 = S32(0X802E << 16);
    // 0x80005528: lui         $a0, 0x802E
    ctx->r4 = S32(0X802E << 16);
    // 0x8000552C: lui         $a1, 0x802E
    ctx->r5 = S32(0X802E << 16);
    // 0x80005530: lui         $a2, 0x802E
    ctx->r6 = S32(0X802E << 16);
    // 0x80005534: lui         $v1, 0x802E
    ctx->r3 = S32(0X802E << 16);
    // 0x80005538: lui         $a3, 0x802E
    ctx->r7 = S32(0X802E << 16);
    // 0x8000553C: addiu       $a3, $a3, 0x7498
    ctx->r7 = ADD32(ctx->r7, 0X7498);
    // 0x80005540: addiu       $v1, $v1, -0x3F68
    ctx->r3 = ADD32(ctx->r3, -0X3F68);
    // 0x80005544: addiu       $a2, $a2, -0x46E8
    ctx->r6 = ADD32(ctx->r6, -0X46E8);
    // 0x80005548: addiu       $a1, $a1, -0x4E68
    ctx->r5 = ADD32(ctx->r5, -0X4E68);
    // 0x8000554C: addiu       $a0, $a0, -0x55E8
    ctx->r4 = ADD32(ctx->r4, -0X55E8);
    // 0x80005550: addiu       $v0, $v0, -0x5858
    ctx->r2 = ADD32(ctx->r2, -0X5858);
L_80005554:
    // 0x80005554: sw          $v1, 0x5C($v0)
    MEM_W(0X5C, ctx->r2) = ctx->r3;
    // 0x80005558: addiu       $v1, $v1, 0x1E00
    ctx->r3 = ADD32(ctx->r3, 0X1E00);
    // 0x8000555C: sw          $a1, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r5;
    // 0x80005560: sw          $a2, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r6;
    // 0x80005564: sw          $a0, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r4;
    // 0x80005568: addiu       $a0, $a0, 0x1E00
    ctx->r4 = ADD32(ctx->r4, 0X1E00);
    // 0x8000556C: addiu       $a2, $a2, 0x1E00
    ctx->r6 = ADD32(ctx->r6, 0X1E00);
    // 0x80005570: addiu       $a1, $a1, 0x1E00
    ctx->r5 = ADD32(ctx->r5, 0X1E00);
    // 0x80005574: bne         $v1, $a3, L_80005554
    if (ctx->r3 != ctx->r7) {
        // 0x80005578: addiu       $v0, $v0, 0x60
        ctx->r2 = ADD32(ctx->r2, 0X60);
            goto L_80005554;
    }
    // 0x80005578: addiu       $v0, $v0, 0x60
    ctx->r2 = ADD32(ctx->r2, 0X60);
    // 0x8000557C: jal         0x800062C0
    // 0x80005580: nop

    func_800062C0(rdram, ctx);
        goto after_1;
    // 0x80005580: nop

    after_1:
    // 0x80005584: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80005588: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000558C: jr          $ra
    // 0x80005590: nop

    return;
    // 0x80005590: nop

;}
RECOMP_FUNC void func_80005594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005594: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80005598: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x8000559C: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x800055A0: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x800055A4: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x800055A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800055AC: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x800055B0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800055B4: beq         $at, $zero, L_800055CC
    if (ctx->r1 == 0) {
        // 0x800055B8: or          $t0, $zero, $zero
        ctx->r8 = 0 | 0;
            goto L_800055CC;
    }
    // 0x800055B8: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x800055BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800055C0: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x800055C4: b           L_80005764
    // 0x800055C8: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
        goto L_80005764;
    // 0x800055C8: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
L_800055CC:
    // 0x800055CC: lw          $t7, 0x10($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X10);
    // 0x800055D0: lhu         $t4, 0x2($a0)
    ctx->r12 = MEM_HU(ctx->r4, 0X2);
    // 0x800055D4: lw          $t1, 0x4($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X4);
    // 0x800055D8: blez        $t4, L_80005764
    if (SIGNED(ctx->r12) <= 0) {
        // 0x800055DC: or          $t3, $zero, $zero
        ctx->r11 = 0 | 0;
            goto L_80005764;
    }
    // 0x800055DC: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
    // 0x800055E0: lui         $s2, 0xFFFF
    ctx->r18 = S32(0XFFFF << 16);
    // 0x800055E4: addiu       $s1, $zero, -0xC1
    ctx->r17 = ADD32(0, -0XC1);
    // 0x800055E8: addiu       $s0, $zero, 0xC0
    ctx->r16 = ADD32(0, 0XC0);
    // 0x800055EC: addiu       $t5, $zero, 0x80
    ctx->r13 = ADD32(0, 0X80);
L_800055F0:
    // 0x800055F0: blez        $v0, L_80005600
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800055F4: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80005600;
    }
    // 0x800055F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800055F8: b           L_800056D4
    // 0x800055FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        goto L_800056D4;
    // 0x800055FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_80005600:
    // 0x80005600: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x80005604: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80005608: bne         $t2, $zero, L_8000561C
    if (ctx->r10 != 0) {
        // 0x8000560C: nop
    
            goto L_8000561C;
    }
    // 0x8000560C: nop

    // 0x80005610: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x80005614: b           L_800056D4
    // 0x80005618: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
        goto L_800056D4;
    // 0x80005618: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_8000561C:
    // 0x8000561C: bne         $t5, $t2, L_8000563C
    if (ctx->r13 != ctx->r10) {
        // 0x80005620: andi        $t8, $t2, 0x80
        ctx->r24 = ctx->r10 & 0X80;
            goto L_8000563C;
    }
    // 0x80005620: andi        $t8, $t2, 0x80
    ctx->r24 = ctx->r10 & 0X80;
    // 0x80005624: lb          $at, 0x1($t1)
    ctx->r1 = MEM_B(ctx->r9, 0X1);
    // 0x80005628: lbu         $a0, 0x2($t1)
    ctx->r4 = MEM_BU(ctx->r9, 0X2);
    // 0x8000562C: sll         $at, $at, 8
    ctx->r1 = S32(ctx->r1 << 8);
    // 0x80005630: addiu       $t1, $t1, 0x3
    ctx->r9 = ADD32(ctx->r9, 0X3);
    // 0x80005634: b           L_800056D4
    // 0x80005638: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
        goto L_800056D4;
    // 0x80005638: or          $a0, $a0, $at
    ctx->r4 = ctx->r4 | ctx->r1;
L_8000563C:
    // 0x8000563C: bne         $t8, $zero, L_80005674
    if (ctx->r24 != 0) {
        // 0x80005640: andi        $t9, $t2, 0xC0
        ctx->r25 = ctx->r10 & 0XC0;
            goto L_80005674;
    }
    // 0x80005640: andi        $t9, $t2, 0xC0
    ctx->r25 = ctx->r10 & 0XC0;
    // 0x80005644: andi        $t9, $t2, 0x40
    ctx->r25 = ctx->r10 & 0X40;
    // 0x80005648: beq         $t9, $zero, L_80005664
    if (ctx->r25 == 0) {
        // 0x8000564C: sll         $a0, $t2, 16
        ctx->r4 = S32(ctx->r10 << 16);
            goto L_80005664;
    }
    // 0x8000564C: sll         $a0, $t2, 16
    ctx->r4 = S32(ctx->r10 << 16);
    // 0x80005650: addiu       $a0, $t2, -0x80
    ctx->r4 = ADD32(ctx->r10, -0X80);
    // 0x80005654: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80005658: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8000565C: b           L_800056D4
    // 0x80005660: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
        goto L_800056D4;
    // 0x80005660: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_80005664:
    // 0x80005664: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80005668: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8000566C: b           L_800056D4
    // 0x80005670: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
        goto L_800056D4;
    // 0x80005670: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_80005674:
    // 0x80005674: bne         $s0, $t9, L_800056C8
    if (ctx->r16 != ctx->r25) {
        // 0x80005678: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_800056C8;
    }
    // 0x80005678: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8000567C: andi        $t6, $t2, 0x20
    ctx->r14 = ctx->r10 & 0X20;
    // 0x80005680: bne         $t6, $zero, L_800056A8
    if (ctx->r14 != 0) {
        // 0x80005684: ori         $t9, $t2, 0xC0
        ctx->r25 = ctx->r10 | 0XC0;
            goto L_800056A8;
    }
    // 0x80005684: ori         $t9, $t2, 0xC0
    ctx->r25 = ctx->r10 | 0XC0;
    // 0x80005688: lbu         $t7, 0x1($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X1);
    // 0x8000568C: and         $t8, $t2, $s1
    ctx->r24 = ctx->r10 & ctx->r17;
    // 0x80005690: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x80005694: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
    // 0x80005698: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8000569C: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800056A0: b           L_800056D4
    // 0x800056A4: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
        goto L_800056D4;
    // 0x800056A4: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
L_800056A8:
    // 0x800056A8: lbu         $t7, 0x1($t1)
    ctx->r15 = MEM_BU(ctx->r9, 0X1);
    // 0x800056AC: sll         $t6, $t9, 8
    ctx->r14 = S32(ctx->r25 << 8);
    // 0x800056B0: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x800056B4: addu        $a0, $t8, $s2
    ctx->r4 = ADD32(ctx->r24, ctx->r18);
    // 0x800056B8: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x800056BC: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
    // 0x800056C0: b           L_800056D4
    // 0x800056C4: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
        goto L_800056D4;
    // 0x800056C4: addiu       $t1, $t1, 0x2
    ctx->r9 = ADD32(ctx->r9, 0X2);
L_800056C8:
    // 0x800056C8: and         $v0, $t2, $s1
    ctx->r2 = ctx->r10 & ctx->r17;
    // 0x800056CC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800056D0: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_800056D4:
    // 0x800056D4: addu        $t6, $t0, $v1
    ctx->r14 = ADD32(ctx->r8, ctx->r3);
    // 0x800056D8: addu        $t8, $t6, $a0
    ctx->r24 = ADD32(ctx->r14, ctx->r4);
    // 0x800056DC: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x800056E0: sra         $t7, $t9, 16
    ctx->r15 = S32(SIGNED(ctx->r25) >> 16);
    // 0x800056E4: addu        $t2, $t7, $t3
    ctx->r10 = ADD32(ctx->r15, ctx->r11);
    // 0x800056E8: slt         $at, $t2, $a1
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800056EC: bne         $at, $zero, L_80005744
    if (ctx->r1 != 0) {
        // 0x800056F0: nop
    
            goto L_80005744;
    }
    // 0x800056F0: nop

    // 0x800056F4: bne         $a1, $t2, L_8000570C
    if (ctx->r5 != ctx->r10) {
        // 0x800056F8: addiu       $t6, $t3, -0x1
        ctx->r14 = ADD32(ctx->r11, -0X1);
            goto L_8000570C;
    }
    // 0x800056F8: addiu       $t6, $t3, -0x1
    ctx->r14 = ADD32(ctx->r11, -0X1);
    // 0x800056FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80005700: sw          $t3, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r11;
    // 0x80005704: b           L_80005764
    // 0x80005708: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
        goto L_80005764;
    // 0x80005708: swc1        $f6, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f6.u32l;
L_8000570C:
    // 0x8000570C: subu        $t8, $a1, $t0
    ctx->r24 = SUB32(ctx->r5, ctx->r8);
    // 0x80005710: sw          $t6, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r14;
    // 0x80005714: subu        $t9, $t8, $t3
    ctx->r25 = SUB32(ctx->r24, ctx->r11);
    // 0x80005718: addu        $t6, $v1, $a0
    ctx->r14 = ADD32(ctx->r3, ctx->r4);
    // 0x8000571C: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x80005720: addiu       $t7, $t9, 0x1
    ctx->r15 = ADD32(ctx->r25, 0X1);
    // 0x80005724: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x80005728: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8000572C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80005730: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80005734: nop

    // 0x80005738: div.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8000573C: b           L_80005764
    // 0x80005740: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
        goto L_80005764;
    // 0x80005740: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
L_80005744:
    // 0x80005744: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80005748: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x8000574C: sra         $v1, $t9, 16
    ctx->r3 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80005750: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x80005754: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x80005758: sll         $t6, $t0, 16
    ctx->r14 = S32(ctx->r8 << 16);
    // 0x8000575C: bne         $t3, $t4, L_800055F0
    if (ctx->r11 != ctx->r12) {
        // 0x80005760: sra         $t0, $t6, 16
        ctx->r8 = S32(SIGNED(ctx->r14) >> 16);
            goto L_800055F0;
    }
    // 0x80005760: sra         $t0, $t6, 16
    ctx->r8 = S32(SIGNED(ctx->r14) >> 16);
L_80005764:
    // 0x80005764: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x80005768: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x8000576C: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x80005770: jr          $ra
    // 0x80005774: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80005774: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800058A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800058A0: blez        $a0, L_80005D58
    if (SIGNED(ctx->r4) <= 0) {
        // 0x800058A4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80005D58;
    }
    // 0x800058A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800058A8: andi        $a3, $a0, 0x3
    ctx->r7 = ctx->r4 & 0X3;
    // 0x800058AC: beq         $a3, $zero, L_800059BC
    if (ctx->r7 == 0) {
        // 0x800058B0: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_800059BC;
    }
    // 0x800058B0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800058B4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800058B8: lui         $at, 0x3F70
    ctx->r1 = S32(0X3F70 << 16);
    // 0x800058BC: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x800058C0: lui         $at, 0x3FB0
    ctx->r1 = S32(0X3FB0 << 16);
    // 0x800058C4: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x800058C8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x800058CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800058D0: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_800058D4:
    // 0x800058D4: lh          $t6, 0x6($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X6);
    // 0x800058D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800058DC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x800058E0: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    // 0x800058E4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800058E8: addiu       $a2, $a2, 0x24
    ctx->r6 = ADD32(ctx->r6, 0X24);
    // 0x800058EC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800058F0: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x800058F4: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x800058F8: swc1        $f16, -0x18($a2)
    MEM_W(-0X18, ctx->r6) = ctx->f16.u32l;
    // 0x800058FC: lh          $t7, -0x4($a1)
    ctx->r15 = MEM_H(ctx->r5, -0X4);
    // 0x80005900: nop

    // 0x80005904: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x80005908: nop

    // 0x8000590C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80005910: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80005914: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x80005918: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8000591C: swc1        $f10, -0x14($a2)
    MEM_W(-0X14, ctx->r6) = ctx->f10.u32l;
    // 0x80005920: lh          $t8, -0x2($a1)
    ctx->r24 = MEM_H(ctx->r5, -0X2);
    // 0x80005924: nop

    // 0x80005928: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x8000592C: nop

    // 0x80005930: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80005934: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80005938: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x8000593C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80005940: swc1        $f8, -0x10($a2)
    MEM_W(-0X10, ctx->r6) = ctx->f8.u32l;
    // 0x80005944: lh          $t9, -0xC($a1)
    ctx->r25 = MEM_H(ctx->r5, -0XC);
    // 0x80005948: nop

    // 0x8000594C: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80005950: nop

    // 0x80005954: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80005958: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x8000595C: mul.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f2.d);
    // 0x80005960: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80005964: swc1        $f6, -0x24($a2)
    MEM_W(-0X24, ctx->r6) = ctx->f6.u32l;
    // 0x80005968: lh          $t0, -0xA($a1)
    ctx->r8 = MEM_H(ctx->r5, -0XA);
    // 0x8000596C: nop

    // 0x80005970: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80005974: nop

    // 0x80005978: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8000597C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80005980: mul.d       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f2.d);
    // 0x80005984: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80005988: swc1        $f4, -0x20($a2)
    MEM_W(-0X20, ctx->r6) = ctx->f4.u32l;
    // 0x8000598C: lh          $t1, -0x8($a1)
    ctx->r9 = MEM_H(ctx->r5, -0X8);
    // 0x80005990: swc1        $f12, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->f12.u32l;
    // 0x80005994: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x80005998: swc1        $f12, -0x8($a2)
    MEM_W(-0X8, ctx->r6) = ctx->f12.u32l;
    // 0x8000599C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800059A0: swc1        $f12, -0xC($a2)
    MEM_W(-0XC, ctx->r6) = ctx->f12.u32l;
    // 0x800059A4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800059A8: mul.d       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f2.d);
    // 0x800059AC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x800059B0: bne         $v1, $v0, L_800058D4
    if (ctx->r3 != ctx->r2) {
        // 0x800059B4: swc1        $f18, -0x1C($a2)
        MEM_W(-0X1C, ctx->r6) = ctx->f18.u32l;
            goto L_800058D4;
    }
    // 0x800059B4: swc1        $f18, -0x1C($a2)
    MEM_W(-0X1C, ctx->r6) = ctx->f18.u32l;
    // 0x800059B8: beq         $v0, $a0, L_80005D58
    if (ctx->r2 == ctx->r4) {
        // 0x800059BC: lui         $at, 0x3FB0
        ctx->r1 = S32(0X3FB0 << 16);
            goto L_80005D58;
    }
L_800059BC:
    // 0x800059BC: lui         $at, 0x3FB0
    ctx->r1 = S32(0X3FB0 << 16);
    // 0x800059C0: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x800059C4: lui         $at, 0x3F70
    ctx->r1 = S32(0X3F70 << 16);
    // 0x800059C8: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x800059CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800059D0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800059D4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800059D8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x800059DC: nop

L_800059E0:
    // 0x800059E0: lh          $t2, 0x6($a1)
    ctx->r10 = MEM_H(ctx->r5, 0X6);
    // 0x800059E4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x800059E8: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x800059EC: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    // 0x800059F0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800059F4: addiu       $a2, $a2, 0x90
    ctx->r6 = ADD32(ctx->r6, 0X90);
    // 0x800059F8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800059FC: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x80005A00: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80005A04: swc1        $f16, -0x84($a2)
    MEM_W(-0X84, ctx->r6) = ctx->f16.u32l;
    // 0x80005A08: lh          $t3, -0x28($a1)
    ctx->r11 = MEM_H(ctx->r5, -0X28);
    // 0x80005A0C: nop

    // 0x80005A10: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x80005A14: nop

    // 0x80005A18: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80005A1C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80005A20: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x80005A24: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80005A28: swc1        $f10, -0x80($a2)
    MEM_W(-0X80, ctx->r6) = ctx->f10.u32l;
    // 0x80005A2C: lh          $t4, -0x26($a1)
    ctx->r12 = MEM_H(ctx->r5, -0X26);
    // 0x80005A30: nop

    // 0x80005A34: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x80005A38: nop

    // 0x80005A3C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80005A40: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80005A44: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x80005A48: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80005A4C: swc1        $f8, -0x7C($a2)
    MEM_W(-0X7C, ctx->r6) = ctx->f8.u32l;
    // 0x80005A50: lh          $t5, -0x30($a1)
    ctx->r13 = MEM_H(ctx->r5, -0X30);
    // 0x80005A54: nop

    // 0x80005A58: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80005A5C: nop

    // 0x80005A60: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80005A64: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80005A68: mul.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f2.d);
    // 0x80005A6C: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80005A70: swc1        $f6, -0x90($a2)
    MEM_W(-0X90, ctx->r6) = ctx->f6.u32l;
    // 0x80005A74: lh          $t6, -0x2E($a1)
    ctx->r14 = MEM_H(ctx->r5, -0X2E);
    // 0x80005A78: nop

    // 0x80005A7C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80005A80: nop

    // 0x80005A84: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80005A88: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80005A8C: mul.d       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f2.d);
    // 0x80005A90: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80005A94: swc1        $f4, -0x8C($a2)
    MEM_W(-0X8C, ctx->r6) = ctx->f4.u32l;
    // 0x80005A98: lh          $t7, -0x2C($a1)
    ctx->r15 = MEM_H(ctx->r5, -0X2C);
    // 0x80005A9C: swc1        $f12, -0x78($a2)
    MEM_W(-0X78, ctx->r6) = ctx->f12.u32l;
    // 0x80005AA0: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80005AA4: swc1        $f12, -0x74($a2)
    MEM_W(-0X74, ctx->r6) = ctx->f12.u32l;
    // 0x80005AA8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80005AAC: swc1        $f12, -0x70($a2)
    MEM_W(-0X70, ctx->r6) = ctx->f12.u32l;
    // 0x80005AB0: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80005AB4: mul.d       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f2.d);
    // 0x80005AB8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80005ABC: swc1        $f18, -0x88($a2)
    MEM_W(-0X88, ctx->r6) = ctx->f18.u32l;
    // 0x80005AC0: lh          $t8, -0x1E($a1)
    ctx->r24 = MEM_H(ctx->r5, -0X1E);
    // 0x80005AC4: nop

    // 0x80005AC8: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80005ACC: nop

    // 0x80005AD0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80005AD4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80005AD8: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x80005ADC: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80005AE0: swc1        $f16, -0x60($a2)
    MEM_W(-0X60, ctx->r6) = ctx->f16.u32l;
    // 0x80005AE4: lh          $t9, -0x1C($a1)
    ctx->r25 = MEM_H(ctx->r5, -0X1C);
    // 0x80005AE8: nop

    // 0x80005AEC: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x80005AF0: nop

    // 0x80005AF4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80005AF8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80005AFC: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x80005B00: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80005B04: swc1        $f10, -0x5C($a2)
    MEM_W(-0X5C, ctx->r6) = ctx->f10.u32l;
    // 0x80005B08: lh          $t0, -0x1A($a1)
    ctx->r8 = MEM_H(ctx->r5, -0X1A);
    // 0x80005B0C: nop

    // 0x80005B10: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80005B14: nop

    // 0x80005B18: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80005B1C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80005B20: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x80005B24: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80005B28: swc1        $f8, -0x58($a2)
    MEM_W(-0X58, ctx->r6) = ctx->f8.u32l;
    // 0x80005B2C: lh          $t1, -0x24($a1)
    ctx->r9 = MEM_H(ctx->r5, -0X24);
    // 0x80005B30: nop

    // 0x80005B34: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x80005B38: nop

    // 0x80005B3C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80005B40: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80005B44: mul.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f2.d);
    // 0x80005B48: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80005B4C: swc1        $f6, -0x6C($a2)
    MEM_W(-0X6C, ctx->r6) = ctx->f6.u32l;
    // 0x80005B50: lh          $t2, -0x22($a1)
    ctx->r10 = MEM_H(ctx->r5, -0X22);
    // 0x80005B54: nop

    // 0x80005B58: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80005B5C: nop

    // 0x80005B60: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80005B64: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80005B68: mul.d       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f2.d);
    // 0x80005B6C: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80005B70: swc1        $f4, -0x68($a2)
    MEM_W(-0X68, ctx->r6) = ctx->f4.u32l;
    // 0x80005B74: lh          $t3, -0x20($a1)
    ctx->r11 = MEM_H(ctx->r5, -0X20);
    // 0x80005B78: swc1        $f12, -0x4C($a2)
    MEM_W(-0X4C, ctx->r6) = ctx->f12.u32l;
    // 0x80005B7C: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x80005B80: swc1        $f12, -0x50($a2)
    MEM_W(-0X50, ctx->r6) = ctx->f12.u32l;
    // 0x80005B84: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80005B88: swc1        $f12, -0x54($a2)
    MEM_W(-0X54, ctx->r6) = ctx->f12.u32l;
    // 0x80005B8C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80005B90: mul.d       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f2.d);
    // 0x80005B94: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80005B98: swc1        $f18, -0x64($a2)
    MEM_W(-0X64, ctx->r6) = ctx->f18.u32l;
    // 0x80005B9C: lh          $t4, -0x12($a1)
    ctx->r12 = MEM_H(ctx->r5, -0X12);
    // 0x80005BA0: nop

    // 0x80005BA4: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80005BA8: nop

    // 0x80005BAC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80005BB0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80005BB4: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x80005BB8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80005BBC: swc1        $f16, -0x3C($a2)
    MEM_W(-0X3C, ctx->r6) = ctx->f16.u32l;
    // 0x80005BC0: lh          $t5, -0x10($a1)
    ctx->r13 = MEM_H(ctx->r5, -0X10);
    // 0x80005BC4: nop

    // 0x80005BC8: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x80005BCC: nop

    // 0x80005BD0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80005BD4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80005BD8: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x80005BDC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80005BE0: swc1        $f10, -0x38($a2)
    MEM_W(-0X38, ctx->r6) = ctx->f10.u32l;
    // 0x80005BE4: lh          $t6, -0xE($a1)
    ctx->r14 = MEM_H(ctx->r5, -0XE);
    // 0x80005BE8: nop

    // 0x80005BEC: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x80005BF0: nop

    // 0x80005BF4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80005BF8: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80005BFC: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x80005C00: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80005C04: swc1        $f8, -0x34($a2)
    MEM_W(-0X34, ctx->r6) = ctx->f8.u32l;
    // 0x80005C08: lh          $t7, -0x18($a1)
    ctx->r15 = MEM_H(ctx->r5, -0X18);
    // 0x80005C0C: nop

    // 0x80005C10: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80005C14: nop

    // 0x80005C18: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80005C1C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80005C20: mul.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f2.d);
    // 0x80005C24: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80005C28: swc1        $f6, -0x48($a2)
    MEM_W(-0X48, ctx->r6) = ctx->f6.u32l;
    // 0x80005C2C: lh          $t8, -0x16($a1)
    ctx->r24 = MEM_H(ctx->r5, -0X16);
    // 0x80005C30: nop

    // 0x80005C34: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80005C38: nop

    // 0x80005C3C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80005C40: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80005C44: mul.d       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f2.d);
    // 0x80005C48: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80005C4C: swc1        $f4, -0x44($a2)
    MEM_W(-0X44, ctx->r6) = ctx->f4.u32l;
    // 0x80005C50: lh          $t9, -0x14($a1)
    ctx->r25 = MEM_H(ctx->r5, -0X14);
    // 0x80005C54: swc1        $f12, -0x28($a2)
    MEM_W(-0X28, ctx->r6) = ctx->f12.u32l;
    // 0x80005C58: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80005C5C: swc1        $f12, -0x2C($a2)
    MEM_W(-0X2C, ctx->r6) = ctx->f12.u32l;
    // 0x80005C60: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80005C64: swc1        $f12, -0x30($a2)
    MEM_W(-0X30, ctx->r6) = ctx->f12.u32l;
    // 0x80005C68: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80005C6C: mul.d       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f2.d);
    // 0x80005C70: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80005C74: swc1        $f18, -0x40($a2)
    MEM_W(-0X40, ctx->r6) = ctx->f18.u32l;
    // 0x80005C78: lh          $t0, -0x6($a1)
    ctx->r8 = MEM_H(ctx->r5, -0X6);
    // 0x80005C7C: nop

    // 0x80005C80: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80005C84: nop

    // 0x80005C88: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80005C8C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80005C90: mul.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x80005C94: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80005C98: swc1        $f16, -0x18($a2)
    MEM_W(-0X18, ctx->r6) = ctx->f16.u32l;
    // 0x80005C9C: lh          $t1, -0x4($a1)
    ctx->r9 = MEM_H(ctx->r5, -0X4);
    // 0x80005CA0: nop

    // 0x80005CA4: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80005CA8: nop

    // 0x80005CAC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80005CB0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80005CB4: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x80005CB8: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80005CBC: swc1        $f10, -0x14($a2)
    MEM_W(-0X14, ctx->r6) = ctx->f10.u32l;
    // 0x80005CC0: lh          $t2, -0x2($a1)
    ctx->r10 = MEM_H(ctx->r5, -0X2);
    // 0x80005CC4: nop

    // 0x80005CC8: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80005CCC: nop

    // 0x80005CD0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80005CD4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80005CD8: mul.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x80005CDC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80005CE0: swc1        $f8, -0x10($a2)
    MEM_W(-0X10, ctx->r6) = ctx->f8.u32l;
    // 0x80005CE4: lh          $t3, -0xC($a1)
    ctx->r11 = MEM_H(ctx->r5, -0XC);
    // 0x80005CE8: nop

    // 0x80005CEC: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80005CF0: nop

    // 0x80005CF4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80005CF8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80005CFC: mul.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f2.d);
    // 0x80005D00: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80005D04: swc1        $f6, -0x24($a2)
    MEM_W(-0X24, ctx->r6) = ctx->f6.u32l;
    // 0x80005D08: lh          $t4, -0xA($a1)
    ctx->r12 = MEM_H(ctx->r5, -0XA);
    // 0x80005D0C: nop

    // 0x80005D10: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80005D14: nop

    // 0x80005D18: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80005D1C: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80005D20: mul.d       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f2.d); 
    ctx->f18.d = MUL_D(ctx->f16.d, ctx->f2.d);
    // 0x80005D24: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80005D28: swc1        $f4, -0x20($a2)
    MEM_W(-0X20, ctx->r6) = ctx->f4.u32l;
    // 0x80005D2C: lh          $t5, -0x8($a1)
    ctx->r13 = MEM_H(ctx->r5, -0X8);
    // 0x80005D30: swc1        $f12, -0x4($a2)
    MEM_W(-0X4, ctx->r6) = ctx->f12.u32l;
    // 0x80005D34: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x80005D38: swc1        $f12, -0x8($a2)
    MEM_W(-0X8, ctx->r6) = ctx->f12.u32l;
    // 0x80005D3C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80005D40: swc1        $f12, -0xC($a2)
    MEM_W(-0XC, ctx->r6) = ctx->f12.u32l;
    // 0x80005D44: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80005D48: mul.d       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f2.d);
    // 0x80005D4C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80005D50: bne         $v0, $a0, L_800059E0
    if (ctx->r2 != ctx->r4) {
        // 0x80005D54: swc1        $f18, -0x1C($a2)
        MEM_W(-0X1C, ctx->r6) = ctx->f18.u32l;
            goto L_800059E0;
    }
    // 0x80005D54: swc1        $f18, -0x1C($a2)
    MEM_W(-0X1C, ctx->r6) = ctx->f18.u32l;
L_80005D58:
    // 0x80005D58: jr          $ra
    // 0x80005D5C: nop

    return;
    // 0x80005D5C: nop

;}
RECOMP_FUNC void func_80005D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005D60: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80005D64: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80005D68: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x80005D6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80005D70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80005D74: bne         $a3, $at, L_80005D90
    if (ctx->r7 != ctx->r1) {
        // 0x80005D78: swc1        $f21, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
            goto L_80005D90;
    }
    // 0x80005D78: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80005D7C: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80005D80: jal         0x800060C8
    // 0x80005D84: nop

    func_800060C8(rdram, ctx);
        goto after_0;
    // 0x80005D84: nop

    after_0:
    // 0x80005D88: b           L_80005EE0
    // 0x80005D8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80005EE0;
    // 0x80005D8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80005D90:
    // 0x80005D90: lwc1        $f0, 0x0($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80005D94: lwc1        $f4, 0x0($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X0);
    // 0x80005D98: lwc1        $f2, 0x4($a0)
    ctx->f2.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80005D9C: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x80005DA0: lwc1        $f12, 0x8($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X8);
    // 0x80005DA4: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80005DA8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80005DAC: add.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f0.fl;
    // 0x80005DB0: swc1        $f10, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->f10.u32l;
    // 0x80005DB4: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x80005DB8: nop

    // 0x80005DBC: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x80005DC0: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80005DC4: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x80005DC8: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80005DCC: swc1        $f10, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->f10.u32l;
    // 0x80005DD0: lwc1        $f4, 0x8($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80005DD4: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x80005DD8: sub.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x80005DDC: lwc1        $f4, 0xC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80005DE0: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80005DE4: add.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x80005DE8: swc1        $f10, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->f10.u32l;
    // 0x80005DEC: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x80005DF0: lwc1        $f8, 0x20($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80005DF4: lwc1        $f6, 0xC($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0XC);
    // 0x80005DF8: lwc1        $f4, 0x10($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80005DFC: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80005E00: lwc1        $f10, 0x10($a1)
    ctx->f10.u32l = MEM_W(ctx->r5, 0X10);
    // 0x80005E04: lwc1        $f8, 0x14($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80005E08: lwc1        $f6, 0x14($a1)
    ctx->f6.u32l = MEM_W(ctx->r5, 0X14);
    // 0x80005E0C: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x80005E10: sub.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80005E14: bc1f        L_80005E34
    if (!c1cs) {
        // 0x80005E18: sub.s       $f18, $f6, $f8
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f8.fl;
            goto L_80005E34;
    }
    // 0x80005E18: sub.s       $f18, $f6, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80005E1C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80005E20: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80005E24: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x80005E28: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80005E2C: b           L_80005E58
    // 0x80005E30: sub.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f0.fl;
        goto L_80005E58;
    // 0x80005E30: sub.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f14.fl - ctx->f0.fl;
L_80005E34:
    // 0x80005E34: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80005E38: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80005E3C: c.le.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
    // 0x80005E40: nop

    // 0x80005E44: bc1f        L_80005E58
    if (!c1cs) {
        // 0x80005E48: nop
    
            goto L_80005E58;
    }
    // 0x80005E48: nop

    // 0x80005E4C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80005E50: nop

    // 0x80005E54: add.s       $f14, $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f0.fl;
L_80005E58:
    // 0x80005E58: mul.s       $f10, $f14, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f20.fl);
    // 0x80005E5C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80005E60: c.lt.s      $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f2.fl < ctx->f16.fl;
    // 0x80005E64: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80005E68: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x80005E6C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80005E70: bc1f        L_80005E80
    if (!c1cs) {
        // 0x80005E74: swc1        $f6, 0xC($a0)
        MEM_W(0XC, ctx->r4) = ctx->f6.u32l;
            goto L_80005E80;
    }
    // 0x80005E74: swc1        $f6, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->f6.u32l;
    // 0x80005E78: b           L_80005E94
    // 0x80005E7C: sub.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f0.fl;
        goto L_80005E94;
    // 0x80005E7C: sub.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f16.fl - ctx->f0.fl;
L_80005E80:
    // 0x80005E80: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x80005E84: nop

    // 0x80005E88: bc1f        L_80005E94
    if (!c1cs) {
        // 0x80005E8C: nop
    
            goto L_80005E94;
    }
    // 0x80005E8C: nop

    // 0x80005E90: add.s       $f16, $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f0.fl;
L_80005E94:
    // 0x80005E94: mul.s       $f8, $f16, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f20.fl);
    // 0x80005E98: lwc1        $f10, 0x10($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X10);
    // 0x80005E9C: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x80005EA0: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80005EA4: bc1f        L_80005EB4
    if (!c1cs) {
        // 0x80005EA8: swc1        $f4, 0x10($a0)
        MEM_W(0X10, ctx->r4) = ctx->f4.u32l;
            goto L_80005EB4;
    }
    // 0x80005EA8: swc1        $f4, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->f4.u32l;
    // 0x80005EAC: b           L_80005EC8
    // 0x80005EB0: sub.s       $f18, $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f18.fl - ctx->f0.fl;
        goto L_80005EC8;
    // 0x80005EB0: sub.s       $f18, $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f18.fl - ctx->f0.fl;
L_80005EB4:
    // 0x80005EB4: c.le.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl <= ctx->f12.fl;
    // 0x80005EB8: nop

    // 0x80005EBC: bc1f        L_80005EC8
    if (!c1cs) {
        // 0x80005EC0: nop
    
            goto L_80005EC8;
    }
    // 0x80005EC0: nop

    // 0x80005EC4: add.s       $f18, $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f0.fl;
L_80005EC8:
    // 0x80005EC8: mul.s       $f6, $f18, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x80005ECC: lwc1        $f8, 0x14($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80005ED0: nop

    // 0x80005ED4: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80005ED8: swc1        $f10, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->f10.u32l;
    // 0x80005EDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80005EE0:
    // 0x80005EE0: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80005EE4: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80005EE8: jr          $ra
    // 0x80005EEC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80005EEC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80005EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80005EF0: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80005EF4: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80005EF8: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x80005EFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80005F00: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x80005F04: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x80005F08: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x80005F0C: lw          $a3, 0x14($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X14);
    // 0x80005F10: lw          $a2, 0x10($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X10);
    // 0x80005F14: lw          $a1, 0xC($t6)
    ctx->r5 = MEM_W(ctx->r14, 0XC);
    // 0x80005F18: jal         0x80080770
    // 0x80005F1C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_80080770(rdram, ctx);
        goto after_0;
    // 0x80005F1C: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x80005F20: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80005F24: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80005F28: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80005F2C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80005F30: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80005F34: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80005F38: add.s       $f18, $f10, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80005F3C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x80005F40: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80005F44: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80005F48: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80005F4C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80005F50: sub.d       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f4.d - ctx->f6.d;
    // 0x80005F54: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80005F58: mul.d       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f2.d);
    // 0x80005F5C: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80005F60: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80005F64: cvt.s.d     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f18.fl = CVT_S_D(ctx->f8.d);
    // 0x80005F68: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80005F6C: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80005F70: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80005F74: sub.s       $f14, $f10, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x80005F78: lwc1        $f18, 0x40($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80005F7C: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80005F80: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80005F84: sub.s       $f16, $f18, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80005F88: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80005F8C: nop

    // 0x80005F90: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80005F94: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x80005F98: jal         0x8007FA40
    // 0x80005F9C: add.s       $f12, $f18, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f8.fl;
    func_8007FA40(rdram, ctx);
        goto after_1;
    // 0x80005F9C: add.s       $f12, $f18, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f8.fl;
    after_1:
    // 0x80005FA0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80005FA4: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80005FA8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80005FAC: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80005FB0: mul.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x80005FB4: lwc1        $f14, 0x18($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80005FB8: cvt.s.d     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f12.fl = CVT_S_D(ctx->f6.d);
    // 0x80005FBC: jal         0x8001C5D0
    // 0x80005FC0: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    func_8001C5D0(rdram, ctx);
        goto after_2;
    // 0x80005FC0: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_2:
    // 0x80005FC4: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80005FC8: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80005FCC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80005FD0: lwc1        $f19, 0x2F30($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X2F30);
    // 0x80005FD4: lwc1        $f18, 0x2F34($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X2F34);
    // 0x80005FD8: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80005FDC: mul.d       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x80005FE0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80005FE4: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80005FE8: lw          $v0, 0x70($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X70);
    // 0x80005FEC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80005FF0: c.lt.s      $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f12.fl < ctx->f16.fl;
    // 0x80005FF4: cvt.s.d     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f4.fl = CVT_S_D(ctx->f8.d);
    // 0x80005FF8: bc1f        L_8000608C
    if (!c1cs) {
        // 0x80005FFC: swc1        $f4, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
            goto L_8000608C;
    }
    // 0x80005FFC: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x80006000: lwc1        $f6, 0x44($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80006004: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80006008: cvt.d.s     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f0.d = CVT_D_S(ctx->f16.fl);
    // 0x8000600C: sub.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80006010: lw          $t7, 0x64($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X64);
    // 0x80006014: neg.s       $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = -ctx->f18.fl;
    // 0x80006018: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x8000601C: mul.d       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x80006020: nop

    // 0x80006024: mul.d       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x80006028: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x8000602C: swc1        $f18, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f18.u32l;
    // 0x80006030: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80006034: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80006038: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x8000603C: sub.s       $f6, $f8, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80006040: neg.s       $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = -ctx->f6.fl;
    // 0x80006044: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x80006048: mul.d       $f8, $f18, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f2.d);
    // 0x8000604C: nop

    // 0x80006050: mul.d       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f8.d, ctx->f0.d);
    // 0x80006054: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80006058: swc1        $f6, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->f6.u32l;
    // 0x8000605C: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80006060: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80006064: lw          $t9, 0x6C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X6C);
    // 0x80006068: sub.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x8000606C: neg.s       $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = -ctx->f8.fl;
    // 0x80006070: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80006074: mul.d       $f10, $f6, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x80006078: nop

    // 0x8000607C: mul.d       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x80006080: cvt.s.d     $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f8.fl = CVT_S_D(ctx->f18.d);
    // 0x80006084: b           L_800060B8
    // 0x80006088: swc1        $f8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f8.u32l;
        goto L_800060B8;
    // 0x80006088: swc1        $f8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f8.u32l;
L_8000608C:
    // 0x8000608C: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x80006090: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80006094: swc1        $f12, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->f12.u32l;
    // 0x80006098: lw          $t1, 0x68($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X68);
    // 0x8000609C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800060A0: nop

    // 0x800060A4: swc1        $f4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f4.u32l;
    // 0x800060A8: lw          $t2, 0x6C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X6C);
    // 0x800060AC: nop

    // 0x800060B0: swc1        $f12, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f12.u32l;
    // 0x800060B4: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
L_800060B8:
    // 0x800060B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800060BC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x800060C0: jr          $ra
    // 0x800060C4: nop

    return;
    // 0x800060C4: nop

;}
RECOMP_FUNC void func_800060C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800060C8: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x800060CC: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800060D0: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x800060D4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800060D8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800060DC: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x800060E0: addiu       $t8, $sp, 0x90
    ctx->r24 = ADD32(ctx->r29, 0X90);
    // 0x800060E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800060E8: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800060EC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800060F0: addiu       $a1, $sp, 0x9C
    ctx->r5 = ADD32(ctx->r29, 0X9C);
    // 0x800060F4: addiu       $a2, $sp, 0x98
    ctx->r6 = ADD32(ctx->r29, 0X98);
    // 0x800060F8: jal         0x80005EF0
    // 0x800060FC: addiu       $a3, $sp, 0x94
    ctx->r7 = ADD32(ctx->r29, 0X94);
    func_80005EF0(rdram, ctx);
        goto after_0;
    // 0x800060FC: addiu       $a3, $sp, 0x94
    ctx->r7 = ADD32(ctx->r29, 0X94);
    after_0:
    // 0x80006100: lw          $a0, 0xA4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA4);
    // 0x80006104: addiu       $t9, $sp, 0x80
    ctx->r25 = ADD32(ctx->r29, 0X80);
    // 0x80006108: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8000610C: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x80006110: addiu       $a2, $sp, 0x88
    ctx->r6 = ADD32(ctx->r29, 0X88);
    // 0x80006114: jal         0x80005EF0
    // 0x80006118: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    func_80005EF0(rdram, ctx);
        goto after_1;
    // 0x80006118: addiu       $a3, $sp, 0x84
    ctx->r7 = ADD32(ctx->r29, 0X84);
    after_1:
    // 0x8000611C: lwc1        $f12, 0x9C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x80006120: lwc1        $f6, 0x8C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x80006124: lwc1        $f14, 0x98($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X98);
    // 0x80006128: mul.s       $f10, $f12, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = MUL_S(ctx->f12.fl, ctx->f6.fl);
    // 0x8000612C: lwc1        $f4, 0x88($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80006130: lwc1        $f16, 0x94($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X94);
    // 0x80006134: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x80006138: mul.s       $f8, $f14, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x8000613C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80006140: add.s       $f10, $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80006144: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80006148: nop

    // 0x8000614C: mul.s       $f6, $f16, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x80006150: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80006154: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80006158: nop

    // 0x8000615C: c.lt.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl < ctx->f6.fl;
    // 0x80006160: nop

    // 0x80006164: bc1f        L_80006194
    if (!c1cs) {
        // 0x80006168: nop
    
            goto L_80006194;
    }
    // 0x80006168: nop

    // 0x8000616C: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80006170: neg.s       $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = -ctx->f4.fl;
    // 0x80006174: lwc1        $f4, 0x80($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X80);
    // 0x80006178: neg.s       $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = -ctx->f18.fl;
    // 0x8000617C: neg.s       $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = -ctx->f8.fl;
    // 0x80006180: neg.s       $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = -ctx->f4.fl;
    // 0x80006184: swc1        $f18, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->f18.u32l;
    // 0x80006188: swc1        $f10, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->f10.u32l;
    // 0x8000618C: swc1        $f6, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->f6.u32l;
    // 0x80006190: swc1        $f2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->f2.u32l;
L_80006194:
    // 0x80006194: lwc1        $f18, 0x90($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X90);
    // 0x80006198: lwc1        $f8, 0x80($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X80);
    // 0x8000619C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800061A0: sub.s       $f2, $f8, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x800061A4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800061A8: c.lt.s      $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f6.fl < ctx->f2.fl;
    // 0x800061AC: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x800061B0: bc1f        L_800061C4
    if (!c1cs) {
        // 0x800061B4: nop
    
            goto L_800061C4;
    }
    // 0x800061B4: nop

    // 0x800061B8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800061BC: nop

    // 0x800061C0: sub.s       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f4.fl;
L_800061C4:
    // 0x800061C4: lui         $at, 0xC334
    ctx->r1 = S32(0XC334 << 16);
    // 0x800061C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800061CC: lwc1        $f4, 0x8C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8C);
    // 0x800061D0: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x800061D4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800061D8: bc1f        L_800061EC
    if (!c1cs) {
        // 0x800061DC: nop
    
            goto L_800061EC;
    }
    // 0x800061DC: nop

    // 0x800061E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800061E4: nop

    // 0x800061E8: add.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f8.fl;
L_800061EC:
    // 0x800061EC: mul.s       $f6, $f0, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f20.fl);
    // 0x800061F0: sub.s       $f10, $f4, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f12.fl;
    // 0x800061F4: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x800061F8: mul.s       $f8, $f10, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x800061FC: add.s       $f18, $f6, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f18.fl;
    // 0x80006200: lwc1        $f6, 0x88($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X88);
    // 0x80006204: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80006208: add.s       $f12, $f8, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f12.fl;
    // 0x8000620C: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80006210: sub.s       $f4, $f6, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x80006214: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x80006218: mul.s       $f10, $f4, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f20.fl);
    // 0x8000621C: sub.s       $f6, $f8, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x80006220: swc1        $f12, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f12.u32l;
    // 0x80006224: swc1        $f18, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->f18.u32l;
    // 0x80006228: mul.s       $f4, $f6, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x8000622C: add.s       $f14, $f10, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f14.fl;
    // 0x80006230: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80006234: add.s       $f16, $f4, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80006238: swc1        $f14, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f14.u32l;
    // 0x8000623C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80006240: jal         0x80080580
    // 0x80006244: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    func_80080580(rdram, ctx);
        goto after_2;
    // 0x80006244: swc1        $f16, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->f16.u32l;
    after_2:
    // 0x80006248: lw          $v0, 0xA4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA4);
    // 0x8000624C: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x80006250: lwc1        $f10, 0x0($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X0);
    // 0x80006254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80006258: sub.s       $f8, $f10, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8000625C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x80006260: mul.s       $f6, $f8, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80006264: add.s       $f4, $f6, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x80006268: swc1        $f4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f4.u32l;
    // 0x8000626C: lwc1        $f2, 0x4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X4);
    // 0x80006270: lwc1        $f10, 0x4($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80006274: nop

    // 0x80006278: sub.s       $f8, $f10, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f2.fl;
    // 0x8000627C: mul.s       $f6, $f8, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x80006280: add.s       $f4, $f6, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x80006284: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x80006288: lwc1        $f12, 0x8($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X8);
    // 0x8000628C: lwc1        $f10, 0x8($v0)
    ctx->f10.u32l = MEM_W(ctx->r2, 0X8);
    // 0x80006290: nop

    // 0x80006294: sub.s       $f8, $f10, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x80006298: mul.s       $f6, $f8, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x8000629C: add.s       $f4, $f6, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f6.fl + ctx->f12.fl;
    // 0x800062A0: jal         0x80004134
    // 0x800062A4: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
    func_80004134(rdram, ctx);
        goto after_3;
    // 0x800062A4: swc1        $f4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x800062A8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800062AC: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800062B0: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800062B4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800062B8: jr          $ra
    // 0x800062BC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x800062BC: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_800062C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800062C0: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x800062C4: lw          $t6, -0x4A98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4A98);
    // 0x800062C8: ori         $t7, $zero, 0xFFFF
    ctx->r15 = 0 | 0XFFFF;
    // 0x800062CC: beq         $t6, $zero, L_80006318
    if (ctx->r14 == 0) {
        // 0x800062D0: lui         $at, 0x802E
        ctx->r1 = S32(0X802E << 16);
            goto L_80006318;
    }
    // 0x800062D0: lui         $at, 0x802E
    ctx->r1 = S32(0X802E << 16);
    // 0x800062D4: lui         $v1, 0x802E
    ctx->r3 = S32(0X802E << 16);
    // 0x800062D8: lui         $a0, 0x802E
    ctx->r4 = S32(0X802E << 16);
    // 0x800062DC: addiu       $a0, $a0, 0x6E18
    ctx->r4 = ADD32(ctx->r4, 0X6E18);
    // 0x800062E0: addiu       $v1, $v1, 0x5E18
    ctx->r3 = ADD32(ctx->r3, 0X5E18);
    // 0x800062E4: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_800062E8:
    // 0x800062E8: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x800062EC: sh          $v0, -0x300($v1)
    MEM_H(-0X300, ctx->r3) = ctx->r2;
    // 0x800062F0: sh          $v0, -0x2FE($v1)
    MEM_H(-0X2FE, ctx->r3) = ctx->r2;
    // 0x800062F4: sh          $v0, -0x200($v1)
    MEM_H(-0X200, ctx->r3) = ctx->r2;
    // 0x800062F8: sh          $v0, -0x1FE($v1)
    MEM_H(-0X1FE, ctx->r3) = ctx->r2;
    // 0x800062FC: sh          $v0, -0x100($v1)
    MEM_H(-0X100, ctx->r3) = ctx->r2;
    // 0x80006300: sh          $v0, -0xFE($v1)
    MEM_H(-0XFE, ctx->r3) = ctx->r2;
    // 0x80006304: sh          $v0, -0x400($v1)
    MEM_H(-0X400, ctx->r3) = ctx->r2;
    // 0x80006308: bne         $v1, $a0, L_800062E8
    if (ctx->r3 != ctx->r4) {
        // 0x8000630C: sh          $v0, -0x3FE($v1)
        MEM_H(-0X3FE, ctx->r3) = ctx->r2;
            goto L_800062E8;
    }
    // 0x8000630C: sh          $v0, -0x3FE($v1)
    MEM_H(-0X3FE, ctx->r3) = ctx->r2;
    // 0x80006310: jr          $ra
    // 0x80006314: nop

    return;
    // 0x80006314: nop

L_80006318:
    // 0x80006318: sh          $t7, 0x5E18($at)
    MEM_H(0X5E18, ctx->r1) = ctx->r15;
    // 0x8000631C: lui         $at, 0x802E
    ctx->r1 = S32(0X802E << 16);
    // 0x80006320: ori         $t8, $zero, 0xFFFF
    ctx->r24 = 0 | 0XFFFF;
    // 0x80006324: lui         $v1, 0x802E
    ctx->r3 = S32(0X802E << 16);
    // 0x80006328: lui         $a0, 0x802F
    ctx->r4 = S32(0X802F << 16);
    // 0x8000632C: addiu       $a0, $a0, -0x28E8
    ctx->r4 = ADD32(ctx->r4, -0X28E8);
    // 0x80006330: addiu       $v1, $v1, 0x5F18
    ctx->r3 = ADD32(ctx->r3, 0X5F18);
    // 0x80006334: sh          $t8, 0x5E1A($at)
    MEM_H(0X5E1A, ctx->r1) = ctx->r24;
    // 0x80006338: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
L_8000633C:
    // 0x8000633C: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x80006340: sh          $v0, -0x300($v1)
    MEM_H(-0X300, ctx->r3) = ctx->r2;
    // 0x80006344: sh          $v0, -0x2FE($v1)
    MEM_H(-0X2FE, ctx->r3) = ctx->r2;
    // 0x80006348: sh          $v0, -0x200($v1)
    MEM_H(-0X200, ctx->r3) = ctx->r2;
    // 0x8000634C: sh          $v0, -0x1FE($v1)
    MEM_H(-0X1FE, ctx->r3) = ctx->r2;
    // 0x80006350: sh          $v0, -0x100($v1)
    MEM_H(-0X100, ctx->r3) = ctx->r2;
    // 0x80006354: sh          $v0, -0xFE($v1)
    MEM_H(-0XFE, ctx->r3) = ctx->r2;
    // 0x80006358: sh          $v0, -0x400($v1)
    MEM_H(-0X400, ctx->r3) = ctx->r2;
    // 0x8000635C: bne         $v1, $a0, L_8000633C
    if (ctx->r3 != ctx->r4) {
        // 0x80006360: sh          $v0, -0x3FE($v1)
        MEM_H(-0X3FE, ctx->r3) = ctx->r2;
            goto L_8000633C;
    }
    // 0x80006360: sh          $v0, -0x3FE($v1)
    MEM_H(-0X3FE, ctx->r3) = ctx->r2;
    // 0x80006364: jr          $ra
    // 0x80006368: nop

    return;
    // 0x80006368: nop

    // 0x8000636C: nop

;}
RECOMP_FUNC void func_80006370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006370: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80006374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80006378: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8000637C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80006380: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80006384: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80006388: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8000638C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80006390: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80006394: nop

    // 0x80006398: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8000639C: lbu         $a0, 0x1($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1);
    // 0x800063A0: jal         0x800065D8
    // 0x800063A4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_800065D8(rdram, ctx);
        goto after_0;
    // 0x800063A4: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_0:
    // 0x800063A8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800063AC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800063B0: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x800063B4: jal         0x80006410
    // 0x800063B8: nop

    func_80006410(rdram, ctx);
        goto after_1;
    // 0x800063B8: nop

    after_1:
    // 0x800063BC: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x800063C0: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x800063C4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800063C8: and         $v0, $v1, $at
    ctx->r2 = ctx->r3 & ctx->r1;
    // 0x800063CC: beq         $v1, $v0, L_80006400
    if (ctx->r3 == ctx->r2) {
        // 0x800063D0: sll         $t8, $v1, 1
        ctx->r24 = S32(ctx->r3 << 1);
            goto L_80006400;
    }
    // 0x800063D0: sll         $t8, $v1, 1
    ctx->r24 = S32(ctx->r3 << 1);
    // 0x800063D4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x800063D8: sll         $t2, $v0, 1
    ctx->r10 = S32(ctx->r2 << 1);
    // 0x800063DC: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x800063E0: lhu         $t0, 0x0($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0X0);
    // 0x800063E4: addu        $t3, $a3, $t2
    ctx->r11 = ADD32(ctx->r7, ctx->r10);
    // 0x800063E8: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
    // 0x800063EC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x800063F0: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x800063F4: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x800063F8: jal         0x80006410
    // 0x800063FC: subu        $a0, $t1, $t4
    ctx->r4 = SUB32(ctx->r9, ctx->r12);
    func_80006410(rdram, ctx);
        goto after_2;
    // 0x800063FC: subu        $a0, $t1, $t4
    ctx->r4 = SUB32(ctx->r9, ctx->r12);
    after_2:
L_80006400:
    // 0x80006400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80006404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80006408: jr          $ra
    // 0x8000640C: nop

    return;
    // 0x8000640C: nop

;}
RECOMP_FUNC void func_80006410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006410: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80006414: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80006418: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8000641C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80006420: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x80006424: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80006428: jal         0x800067F8
    // 0x8000642C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_800067F8(rdram, ctx);
        goto after_0;
    // 0x8000642C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x80006430: blez        $s2, L_800064BC
    if (SIGNED(ctx->r18) <= 0) {
        // 0x80006434: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_800064BC;
    }
    // 0x80006434: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80006438:
    // 0x80006438: jal         0x800064D4
    // 0x8000643C: nop

    func_800064D4(rdram, ctx);
        goto after_1;
    // 0x8000643C: nop

    after_1:
    // 0x80006440: lh          $t6, 0x0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X0);
    // 0x80006444: nop

    // 0x80006448: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8000644C: jal         0x800064D4
    // 0x80006450: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
    func_800064D4(rdram, ctx);
        goto after_2;
    // 0x80006450: sh          $t7, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r15;
    after_2:
    // 0x80006454: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    // 0x80006458: nop

    // 0x8000645C: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x80006460: jal         0x800064D4
    // 0x80006464: sh          $t9, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r25;
    func_800064D4(rdram, ctx);
        goto after_3;
    // 0x80006464: sh          $t9, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r25;
    after_3:
    // 0x80006468: lh          $t0, 0x4($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X4);
    // 0x8000646C: nop

    // 0x80006470: addu        $t1, $t0, $v0
    ctx->r9 = ADD32(ctx->r8, ctx->r2);
    // 0x80006474: jal         0x800064D4
    // 0x80006478: sh          $t1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r9;
    func_800064D4(rdram, ctx);
        goto after_4;
    // 0x80006478: sh          $t1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r9;
    after_4:
    // 0x8000647C: lh          $t2, 0x6($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X6);
    // 0x80006480: nop

    // 0x80006484: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x80006488: jal         0x800064D4
    // 0x8000648C: sh          $t3, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r11;
    func_800064D4(rdram, ctx);
        goto after_5;
    // 0x8000648C: sh          $t3, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r11;
    after_5:
    // 0x80006490: lh          $t4, 0x8($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X8);
    // 0x80006494: nop

    // 0x80006498: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x8000649C: jal         0x800064D4
    // 0x800064A0: sh          $t5, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r13;
    func_800064D4(rdram, ctx);
        goto after_6;
    // 0x800064A0: sh          $t5, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r13;
    after_6:
    // 0x800064A4: lh          $t6, 0xA($s0)
    ctx->r14 = MEM_H(ctx->r16, 0XA);
    // 0x800064A8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800064AC: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x800064B0: sh          $t7, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r15;
    // 0x800064B4: bne         $s1, $s2, L_80006438
    if (ctx->r17 != ctx->r18) {
        // 0x800064B8: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_80006438;
    }
    // 0x800064B8: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_800064BC:
    // 0x800064BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800064C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800064C4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800064C8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800064CC: jr          $ra
    // 0x800064D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800064D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800064D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800064D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800064D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800064DC: jal         0x80006768
    // 0x800064E0: nop

    func_80006768(rdram, ctx);
        goto after_0;
    // 0x800064E0: nop

    after_0:
    // 0x800064E4: beq         $v0, $zero, L_800065C8
    if (ctx->r2 == 0) {
        // 0x800064E8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_800065C8;
    }
    // 0x800064E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800064EC: jal         0x80006768
    // 0x800064F0: nop

    func_80006768(rdram, ctx);
        goto after_1;
    // 0x800064F0: nop

    after_1:
    // 0x800064F4: beq         $v0, $zero, L_80006588
    if (ctx->r2 == 0) {
        // 0x800064F8: nop
    
            goto L_80006588;
    }
    // 0x800064F8: nop

    // 0x800064FC: jal         0x80006768
    // 0x80006500: nop

    func_80006768(rdram, ctx);
        goto after_2;
    // 0x80006500: nop

    after_2:
    // 0x80006504: beq         $v0, $zero, L_8000654C
    if (ctx->r2 == 0) {
        // 0x80006508: nop
    
            goto L_8000654C;
    }
    // 0x80006508: nop

    // 0x8000650C: jal         0x80006608
    // 0x80006510: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80006608(rdram, ctx);
        goto after_3;
    // 0x80006510: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_3:
    // 0x80006514: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x80006518: andi        $t6, $v1, 0x8000
    ctx->r14 = ctx->r3 & 0X8000;
    // 0x8000651C: beq         $t6, $zero, L_8000653C
    if (ctx->r14 == 0) {
        // 0x80006520: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_8000653C;
    }
    // 0x80006520: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80006524: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x80006528: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x8000652C: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80006530: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80006534: b           L_800065C8
    // 0x80006538: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_800065C8;
    // 0x80006538: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8000653C:
    // 0x8000653C: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80006540: sra         $t7, $v0, 16
    ctx->r15 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80006544: b           L_800065C8
    // 0x80006548: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_800065C8;
    // 0x80006548: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8000654C:
    // 0x8000654C: jal         0x80006608
    // 0x80006550: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80006608(rdram, ctx);
        goto after_4;
    // 0x80006550: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_4:
    // 0x80006554: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x80006558: andi        $t8, $v1, 0x200
    ctx->r24 = ctx->r3 & 0X200;
    // 0x8000655C: beq         $t8, $zero, L_80006578
    if (ctx->r24 == 0) {
        // 0x80006560: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_80006578;
    }
    // 0x80006560: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80006564: addiu       $a0, $v1, -0x400
    ctx->r4 = ADD32(ctx->r3, -0X400);
    // 0x80006568: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8000656C: sra         $t9, $v0, 16
    ctx->r25 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80006570: b           L_800065C8
    // 0x80006574: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_800065C8;
    // 0x80006574: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_80006578:
    // 0x80006578: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8000657C: sra         $t9, $v0, 16
    ctx->r25 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80006580: b           L_800065C8
    // 0x80006584: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_800065C8;
    // 0x80006584: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_80006588:
    // 0x80006588: jal         0x80006608
    // 0x8000658C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80006608(rdram, ctx);
        goto after_5;
    // 0x8000658C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_5:
    // 0x80006590: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
    // 0x80006594: andi        $t0, $v1, 0x20
    ctx->r8 = ctx->r3 & 0X20;
    // 0x80006598: beq         $t0, $zero, L_800065B4
    if (ctx->r8 == 0) {
        // 0x8000659C: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_800065B4;
    }
    // 0x8000659C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x800065A0: addiu       $a0, $v1, -0x40
    ctx->r4 = ADD32(ctx->r3, -0X40);
    // 0x800065A4: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x800065A8: sra         $t1, $v0, 16
    ctx->r9 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800065AC: b           L_800065C8
    // 0x800065B0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_800065C8;
    // 0x800065B0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_800065B4:
    // 0x800065B4: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x800065B8: sra         $t1, $v0, 16
    ctx->r9 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800065BC: b           L_800065C8
    // 0x800065C0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_800065C8;
    // 0x800065C0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x800065C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800065C8:
    // 0x800065C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800065CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800065D0: jr          $ra
    // 0x800065D4: nop

    return;
    // 0x800065D4: nop

;}
RECOMP_FUNC void func_800065D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800065D8: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x800065DC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x800065E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800065E4: sll         $a1, $a3, 2
    ctx->r5 = S32(ctx->r7 << 2);
    // 0x800065E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800065EC: subu        $a1, $a1, $a3
    ctx->r5 = SUB32(ctx->r5, ctx->r7);
    // 0x800065F0: jal         0x80080910
    // 0x800065F4: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    func_80080910(rdram, ctx);
        goto after_0;
    // 0x800065F4: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    after_0:
    // 0x800065F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800065FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80006600: jr          $ra
    // 0x80006604: nop

    return;
    // 0x80006604: nop

;}
RECOMP_FUNC void func_80006608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006608: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8000660C: addiu       $t0, $t0, 0x3798
    ctx->r8 = ADD32(ctx->r8, 0X3798);
    // 0x80006610: lw          $v0, 0x0($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X0);
    // 0x80006614: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80006618: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8000661C: beq         $at, $zero, L_80006650
    if (ctx->r1 == 0) {
        // 0x80006620: addiu       $t1, $t1, 0x3794
        ctx->r9 = ADD32(ctx->r9, 0X3794);
            goto L_80006650;
    }
    // 0x80006620: addiu       $t1, $t1, 0x3794
    ctx->r9 = ADD32(ctx->r9, 0X3794);
    // 0x80006624: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x80006628: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8000662C: sllv        $t7, $t6, $a0
    ctx->r15 = S32(ctx->r14 << (ctx->r4 & 31));
    // 0x80006630: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80006634: subu        $t3, $v0, $a0
    ctx->r11 = SUB32(ctx->r2, ctx->r4);
    // 0x80006638: and         $v1, $t8, $a1
    ctx->r3 = ctx->r24 & ctx->r5;
    // 0x8000663C: srlv        $t9, $a1, $a0
    ctx->r25 = S32(U32(ctx->r5) >> (ctx->r4 & 31));
    // 0x80006640: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x80006644: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x80006648: jr          $ra
    // 0x8000664C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8000664C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80006650:
    // 0x80006650: bne         $a0, $v0, L_800066C8
    if (ctx->r4 != ctx->r2) {
        // 0x80006654: lui         $t2, 0x8013
        ctx->r10 = S32(0X8013 << 16);
            goto L_800066C8;
    }
    // 0x80006654: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x80006658: addiu       $t2, $t2, 0x3790
    ctx->r10 = ADD32(ctx->r10, 0X3790);
    // 0x8000665C: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x80006660: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80006664: lw          $a3, 0x0($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X0);
    // 0x80006668: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8000666C: addiu       $t1, $t1, 0x3794
    ctx->r9 = ADD32(ctx->r9, 0X3794);
    // 0x80006670: sllv        $t5, $t4, $a0
    ctx->r13 = S32(ctx->r12 << (ctx->r4 & 31));
    // 0x80006674: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x80006678: lw          $t7, 0x0($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X0);
    // 0x8000667C: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80006680: and         $t3, $a3, $at
    ctx->r11 = ctx->r7 & ctx->r1;
    // 0x80006684: srl         $t4, $t3, 24
    ctx->r12 = S32(U32(ctx->r11) >> 24);
    // 0x80006688: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8000668C: sll         $t9, $a3, 24
    ctx->r25 = S32(ctx->r7 << 24);
    // 0x80006690: and         $v0, $t6, $t7
    ctx->r2 = ctx->r14 & ctx->r15;
    // 0x80006694: or          $t5, $t9, $t4
    ctx->r13 = ctx->r25 | ctx->r12;
    // 0x80006698: and         $t6, $a3, $at
    ctx->r14 = ctx->r7 & ctx->r1;
    // 0x8000669C: srl         $t7, $t6, 8
    ctx->r15 = S32(U32(ctx->r14) >> 8);
    // 0x800066A0: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x800066A4: andi        $t3, $a3, 0xFF00
    ctx->r11 = ctx->r7 & 0XFF00;
    // 0x800066A8: sll         $t9, $t3, 8
    ctx->r25 = S32(ctx->r11 << 8);
    // 0x800066AC: or          $t4, $t8, $t9
    ctx->r12 = ctx->r24 | ctx->r25;
    // 0x800066B0: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x800066B4: addiu       $t6, $a2, 0x4
    ctx->r14 = ADD32(ctx->r6, 0X4);
    // 0x800066B8: sw          $t4, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r12;
    // 0x800066BC: sw          $t6, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r14;
    // 0x800066C0: jr          $ra
    // 0x800066C4: sw          $t5, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r13;
    return;
    // 0x800066C4: sw          $t5, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r13;
L_800066C8:
    // 0x800066C8: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x800066CC: addiu       $t2, $t2, 0x3790
    ctx->r10 = ADD32(ctx->r10, 0X3790);
    // 0x800066D0: lw          $a2, 0x0($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X0);
    // 0x800066D4: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800066D8: lw          $a3, 0x0($a2)
    ctx->r7 = MEM_W(ctx->r6, 0X0);
    // 0x800066DC: addiu       $t1, $t1, 0x3794
    ctx->r9 = ADD32(ctx->r9, 0X3794);
    // 0x800066E0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800066E4: lw          $t9, 0x0($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X0);
    // 0x800066E8: sllv        $t3, $t7, $v0
    ctx->r11 = S32(ctx->r15 << (ctx->r2 & 31));
    // 0x800066EC: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x800066F0: addiu       $t8, $t3, -0x1
    ctx->r24 = ADD32(ctx->r11, -0X1);
    // 0x800066F4: and         $t5, $a3, $at
    ctx->r13 = ctx->r7 & ctx->r1;
    // 0x800066F8: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x800066FC: and         $v1, $t8, $t9
    ctx->r3 = ctx->r24 & ctx->r25;
    // 0x80006700: srl         $t7, $t5, 24
    ctx->r15 = S32(U32(ctx->r13) >> 24);
    // 0x80006704: and         $t8, $a3, $at
    ctx->r24 = ctx->r7 & ctx->r1;
    // 0x80006708: sll         $t6, $a3, 24
    ctx->r14 = S32(ctx->r7 << 24);
    // 0x8000670C: or          $t3, $t6, $t7
    ctx->r11 = ctx->r14 | ctx->r15;
    // 0x80006710: srl         $t9, $t8, 8
    ctx->r25 = S32(U32(ctx->r24) >> 8);
    // 0x80006714: or          $t4, $t3, $t9
    ctx->r12 = ctx->r11 | ctx->r25;
    // 0x80006718: andi        $t5, $a3, 0xFF00
    ctx->r13 = ctx->r7 & 0XFF00;
    // 0x8000671C: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80006720: sll         $t6, $t5, 8
    ctx->r14 = S32(ctx->r13 << 8);
    // 0x80006724: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80006728: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x8000672C: sllv        $t9, $t3, $a0
    ctx->r25 = S32(ctx->r11 << (ctx->r4 & 31));
    // 0x80006730: addiu       $t5, $t9, -0x1
    ctx->r13 = ADD32(ctx->r25, -0X1);
    // 0x80006734: addiu       $t8, $a2, 0x4
    ctx->r24 = ADD32(ctx->r6, 0X4);
    // 0x80006738: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x8000673C: and         $t4, $t7, $t5
    ctx->r12 = ctx->r15 & ctx->r13;
    // 0x80006740: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x80006744: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x80006748: sllv        $t6, $t4, $v0
    ctx->r14 = S32(ctx->r12 << (ctx->r2 & 31));
    // 0x8000674C: srlv        $t7, $t7, $a0
    ctx->r15 = S32(U32(ctx->r15) >> (ctx->r4 & 31));
    // 0x80006750: subu        $t3, $t8, $a0
    ctx->r11 = SUB32(ctx->r24, ctx->r4);
    // 0x80006754: or          $v1, $v1, $t6
    ctx->r3 = ctx->r3 | ctx->r14;
    // 0x80006758: sw          $t7, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r15;
    // 0x8000675C: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x80006760: jr          $ra
    // 0x80006764: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80006764: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80006768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006768: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8000676C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x80006770: addiu       $a2, $a2, 0x3798
    ctx->r6 = ADD32(ctx->r6, 0X3798);
    // 0x80006774: addiu       $a1, $a1, 0x3794
    ctx->r5 = ADD32(ctx->r5, 0X3794);
    // 0x80006778: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8000677C: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x80006780: srl         $t6, $v0, 1
    ctx->r14 = S32(U32(ctx->r2) >> 1);
    // 0x80006784: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80006788: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x8000678C: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x80006790: bne         $t8, $zero, L_800067F0
    if (ctx->r24 != 0) {
        // 0x80006794: andi        $v1, $v0, 0x1
        ctx->r3 = ctx->r2 & 0X1;
            goto L_800067F0;
    }
    // 0x80006794: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x80006798: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x8000679C: addiu       $a3, $a3, 0x3790
    ctx->r7 = ADD32(ctx->r7, 0X3790);
    // 0x800067A0: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x800067A4: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x800067A8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800067AC: nop

    // 0x800067B0: and         $t2, $a0, $at
    ctx->r10 = ctx->r4 & ctx->r1;
    // 0x800067B4: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x800067B8: srl         $t3, $t2, 24
    ctx->r11 = S32(U32(ctx->r10) >> 24);
    // 0x800067BC: and         $t5, $a0, $at
    ctx->r13 = ctx->r4 & ctx->r1;
    // 0x800067C0: sll         $t1, $a0, 24
    ctx->r9 = S32(ctx->r4 << 24);
    // 0x800067C4: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x800067C8: srl         $t6, $t5, 8
    ctx->r14 = S32(U32(ctx->r13) >> 8);
    // 0x800067CC: andi        $t8, $a0, 0xFF00
    ctx->r24 = ctx->r4 & 0XFF00;
    // 0x800067D0: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x800067D4: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x800067D8: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x800067DC: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x800067E0: addiu       $t2, $v0, 0x4
    ctx->r10 = ADD32(ctx->r2, 0X4);
    // 0x800067E4: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x800067E8: sw          $t2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r10;
    // 0x800067EC: sw          $t1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r9;
L_800067F0:
    // 0x800067F0: jr          $ra
    // 0x800067F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800067F4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800067F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800067F8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800067FC: addiu       $at, $zero, -0x4
    ctx->r1 = ADD32(0, -0X4);
    // 0x80006800: addiu       $a1, $a1, 0x3790
    ctx->r5 = ADD32(ctx->r5, 0X3790);
    // 0x80006804: and         $t6, $a0, $at
    ctx->r14 = ctx->r4 & ctx->r1;
    // 0x80006808: andi        $v0, $a0, 0x3
    ctx->r2 = ctx->r4 & 0X3;
    // 0x8000680C: beq         $v0, $zero, L_80006840
    if (ctx->r2 == 0) {
        // 0x80006810: sw          $t6, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r14;
            goto L_80006840;
    }
    // 0x80006810: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80006814: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80006818: beq         $v0, $at, L_80006894
    if (ctx->r2 == ctx->r1) {
        // 0x8000681C: addiu       $t0, $zero, 0x18
        ctx->r8 = ADD32(0, 0X18);
            goto L_80006894;
    }
    // 0x8000681C: addiu       $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
    // 0x80006820: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80006824: beq         $v0, $at, L_800068E8
    if (ctx->r2 == ctx->r1) {
        // 0x80006828: addiu       $t1, $zero, 0x10
        ctx->r9 = ADD32(0, 0X10);
            goto L_800068E8;
    }
    // 0x80006828: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x8000682C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80006830: beq         $v0, $at, L_8000693C
    if (ctx->r2 == ctx->r1) {
        // 0x80006834: nop
    
            goto L_8000693C;
    }
    // 0x80006834: nop

    // 0x80006838: b           L_80006990
    // 0x8000683C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
        goto L_80006990;
    // 0x8000683C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_80006840:
    // 0x80006840: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x80006844: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80006848: sw          $t7, 0x3798($at)
    MEM_W(0X3798, ctx->r1) = ctx->r15;
    // 0x8000684C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80006850: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x80006854: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80006858: nop

    // 0x8000685C: and         $t0, $v1, $at
    ctx->r8 = ctx->r3 & ctx->r1;
    // 0x80006860: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80006864: srl         $t1, $t0, 24
    ctx->r9 = S32(U32(ctx->r8) >> 24);
    // 0x80006868: and         $t3, $v1, $at
    ctx->r11 = ctx->r3 & ctx->r1;
    // 0x8000686C: sll         $t9, $v1, 24
    ctx->r25 = S32(ctx->r3 << 24);
    // 0x80006870: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x80006874: srl         $t4, $t3, 8
    ctx->r12 = S32(U32(ctx->r11) >> 8);
    // 0x80006878: andi        $t6, $v1, 0xFF00
    ctx->r14 = ctx->r3 & 0XFF00;
    // 0x8000687C: sll         $t7, $t6, 8
    ctx->r15 = S32(ctx->r14 << 8);
    // 0x80006880: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x80006884: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x80006888: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000688C: b           L_80006990
    // 0x80006890: sw          $t8, 0x3794($at)
    MEM_W(0X3794, ctx->r1) = ctx->r24;
        goto L_80006990;
    // 0x80006890: sw          $t8, 0x3794($at)
    MEM_W(0X3794, ctx->r1) = ctx->r24;
L_80006894:
    // 0x80006894: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80006898: sw          $t0, 0x3798($at)
    MEM_W(0X3798, ctx->r1) = ctx->r8;
    // 0x8000689C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x800068A0: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x800068A4: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x800068A8: nop

    // 0x800068AC: and         $t3, $v1, $at
    ctx->r11 = ctx->r3 & ctx->r1;
    // 0x800068B0: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x800068B4: srl         $t2, $t3, 24
    ctx->r10 = S32(U32(ctx->r11) >> 24);
    // 0x800068B8: and         $t6, $v1, $at
    ctx->r14 = ctx->r3 & ctx->r1;
    // 0x800068BC: sll         $t1, $v1, 24
    ctx->r9 = S32(ctx->r3 << 24);
    // 0x800068C0: or          $t4, $t1, $t2
    ctx->r12 = ctx->r9 | ctx->r10;
    // 0x800068C4: srl         $t5, $t6, 8
    ctx->r13 = S32(U32(ctx->r14) >> 8);
    // 0x800068C8: andi        $t8, $v1, 0xFF00
    ctx->r24 = ctx->r3 & 0XFF00;
    // 0x800068CC: sll         $t0, $t8, 8
    ctx->r8 = S32(ctx->r24 << 8);
    // 0x800068D0: or          $t7, $t4, $t5
    ctx->r15 = ctx->r12 | ctx->r13;
    // 0x800068D4: or          $t9, $t7, $t0
    ctx->r25 = ctx->r15 | ctx->r8;
    // 0x800068D8: srl         $t3, $t9, 8
    ctx->r11 = S32(U32(ctx->r25) >> 8);
    // 0x800068DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800068E0: b           L_80006990
    // 0x800068E4: sw          $t3, 0x3794($at)
    MEM_W(0X3794, ctx->r1) = ctx->r11;
        goto L_80006990;
    // 0x800068E4: sw          $t3, 0x3794($at)
    MEM_W(0X3794, ctx->r1) = ctx->r11;
L_800068E8:
    // 0x800068E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800068EC: sw          $t1, 0x3798($at)
    MEM_W(0X3798, ctx->r1) = ctx->r9;
    // 0x800068F0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x800068F4: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x800068F8: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x800068FC: nop

    // 0x80006900: and         $t4, $v1, $at
    ctx->r12 = ctx->r3 & ctx->r1;
    // 0x80006904: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80006908: srl         $t5, $t4, 24
    ctx->r13 = S32(U32(ctx->r12) >> 24);
    // 0x8000690C: and         $t7, $v1, $at
    ctx->r15 = ctx->r3 & ctx->r1;
    // 0x80006910: sll         $t6, $v1, 24
    ctx->r14 = S32(ctx->r3 << 24);
    // 0x80006914: or          $t8, $t6, $t5
    ctx->r24 = ctx->r14 | ctx->r13;
    // 0x80006918: srl         $t0, $t7, 8
    ctx->r8 = S32(U32(ctx->r15) >> 8);
    // 0x8000691C: andi        $t3, $v1, 0xFF00
    ctx->r11 = ctx->r3 & 0XFF00;
    // 0x80006920: sll         $t1, $t3, 8
    ctx->r9 = S32(ctx->r11 << 8);
    // 0x80006924: or          $t9, $t8, $t0
    ctx->r25 = ctx->r24 | ctx->r8;
    // 0x80006928: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x8000692C: srl         $t4, $t2, 16
    ctx->r12 = S32(U32(ctx->r10) >> 16);
    // 0x80006930: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80006934: b           L_80006990
    // 0x80006938: sw          $t4, 0x3794($at)
    MEM_W(0X3794, ctx->r1) = ctx->r12;
        goto L_80006990;
    // 0x80006938: sw          $t4, 0x3794($at)
    MEM_W(0X3794, ctx->r1) = ctx->r12;
L_8000693C:
    // 0x8000693C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80006940: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80006944: sw          $t6, 0x3798($at)
    MEM_W(0X3798, ctx->r1) = ctx->r14;
    // 0x80006948: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x8000694C: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x80006950: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80006954: nop

    // 0x80006958: and         $t8, $v1, $at
    ctx->r24 = ctx->r3 & ctx->r1;
    // 0x8000695C: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80006960: srl         $t0, $t8, 24
    ctx->r8 = S32(U32(ctx->r24) >> 24);
    // 0x80006964: and         $t9, $v1, $at
    ctx->r25 = ctx->r3 & ctx->r1;
    // 0x80006968: sll         $t7, $v1, 24
    ctx->r15 = S32(ctx->r3 << 24);
    // 0x8000696C: or          $t3, $t7, $t0
    ctx->r11 = ctx->r15 | ctx->r8;
    // 0x80006970: srl         $t1, $t9, 8
    ctx->r9 = S32(U32(ctx->r25) >> 8);
    // 0x80006974: andi        $t4, $v1, 0xFF00
    ctx->r12 = ctx->r3 & 0XFF00;
    // 0x80006978: sll         $t6, $t4, 8
    ctx->r14 = S32(ctx->r12 << 8);
    // 0x8000697C: or          $t2, $t3, $t1
    ctx->r10 = ctx->r11 | ctx->r9;
    // 0x80006980: or          $t5, $t2, $t6
    ctx->r13 = ctx->r10 | ctx->r14;
    // 0x80006984: srl         $t8, $t5, 24
    ctx->r24 = S32(U32(ctx->r13) >> 24);
    // 0x80006988: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8000698C: sw          $t8, 0x3794($at)
    MEM_W(0X3794, ctx->r1) = ctx->r24;
L_80006990:
    // 0x80006990: addiu       $t7, $v0, 0x4
    ctx->r15 = ADD32(ctx->r2, 0X4);
    // 0x80006994: jr          $ra
    // 0x80006998: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    return;
    // 0x80006998: sw          $t7, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r15;
    // 0x8000699C: nop

;}
RECOMP_FUNC void func_800069A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800069A0: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x800069A4: nop

    // 0x800069A8: beq         $v0, $zero, L_80006A14
    if (ctx->r2 == 0) {
        // 0x800069AC: nop
    
            goto L_80006A14;
    }
    // 0x800069AC: nop

    // 0x800069B0: lhu         $t0, 0x2($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X2);
    // 0x800069B4: lhu         $t6, 0x1C($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X1C);
    // 0x800069B8: lhu         $t7, 0x1E($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X1E);
    // 0x800069BC: lhu         $t8, 0x20($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X20);
    // 0x800069C0: lhu         $t9, 0x22($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X22);
    // 0x800069C4: lwc1        $f4, 0x24($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X24);
    // 0x800069C8: andi        $t1, $t0, 0xFF00
    ctx->r9 = ctx->r8 & 0XFF00;
    // 0x800069CC: sh          $t1, 0x3C($v0)
    MEM_H(0X3C, ctx->r2) = ctx->r9;
    // 0x800069D0: sh          $t6, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r14;
    // 0x800069D4: sh          $t7, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r15;
    // 0x800069D8: sh          $t8, 0x34($v0)
    MEM_H(0X34, ctx->r2) = ctx->r24;
    // 0x800069DC: sh          $t9, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r25;
    // 0x800069E0: swc1        $f4, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->f4.u32l;
    // 0x800069E4: lwc1        $f6, 0x4($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X4);
    // 0x800069E8: nop

    // 0x800069EC: swc1        $f6, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f6.u32l;
    // 0x800069F0: lwc1        $f8, 0x8($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X8);
    // 0x800069F4: nop

    // 0x800069F8: swc1        $f8, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->f8.u32l;
    // 0x800069FC: lwc1        $f10, 0xC($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0XC);
    // 0x80006A00: nop

    // 0x80006A04: swc1        $f10, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f10.u32l;
    // 0x80006A08: lwc1        $f16, 0x14($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X14);
    // 0x80006A0C: nop

    // 0x80006A10: swc1        $f16, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f16.u32l;
L_80006A14:
    // 0x80006A14: jr          $ra
    // 0x80006A18: nop

    return;
    // 0x80006A18: nop

;}
RECOMP_FUNC void func_80006A1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80006A1C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80006A20: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x80006A24: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x80006A28: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x80006A2C: addiu       $t9, $zero, 0x0
    ctx->r25 = ADD32(0, 0X0);
    // 0x80006A30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80006A34: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80006A38: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80006A3C: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
    // 0x80006A40: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80006A44: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80006A48: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80006A4C: lwc1        $f0, 0x8($a1)
    ctx->f0.u32l = MEM_W(ctx->r5, 0X8);
    // 0x80006A50: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80006A54: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80006A58: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80006A5C: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x80006A60: bc1f        L_80006B18
    if (!c1cs) {
        // 0x80006A64: addiu       $a2, $zero, 0x0
        ctx->r6 = ADD32(0, 0X0);
            goto L_80006B18;
    }
    // 0x80006A64: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80006A68: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80006A6C: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80006A70: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80006A74: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80006A78: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x80006A7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80006A80: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80006A84: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80006A88: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80006A8C: nop

    // 0x80006A90: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x80006A94: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80006A98: nop

    // 0x80006A9C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80006AA0: beq         $v0, $zero, L_80006AF0
    if (ctx->r2 == 0) {
        // 0x80006AA4: nop
    
            goto L_80006AF0;
    }
    // 0x80006AA4: nop

    // 0x80006AA8: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80006AAC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80006AB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80006AB4: sub.d       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f10.d = ctx->f8.d - ctx->f10.d;
    // 0x80006AB8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80006ABC: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80006AC0: nop

    // 0x80006AC4: cvt.w.d     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_D(ctx->f10.d);
    // 0x80006AC8: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80006ACC: nop

    // 0x80006AD0: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80006AD4: bne         $v0, $zero, L_80006AE8
    if (ctx->r2 != 0) {
        // 0x80006AD8: nop
    
            goto L_80006AE8;
    }
    // 0x80006AD8: nop

    // 0x80006ADC: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x80006AE0: b           L_80006B00
    // 0x80006AE4: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_80006B00;
    // 0x80006AE4: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_80006AE8:
    // 0x80006AE8: b           L_80006B00
    // 0x80006AEC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80006B00;
    // 0x80006AEC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80006AF0:
    // 0x80006AF0: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x80006AF4: nop

    // 0x80006AF8: bltz        $v0, L_80006AE8
    if (SIGNED(ctx->r2) < 0) {
        // 0x80006AFC: nop
    
            goto L_80006AE8;
    }
    // 0x80006AFC: nop

L_80006B00:
    // 0x80006B00: lui         $at, 0x7
    ctx->r1 = S32(0X7 << 16);
    // 0x80006B04: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80006B08: and         $t1, $v0, $at
    ctx->r9 = ctx->r2 & ctx->r1;
    // 0x80006B0C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80006B10: b           L_80006BCC
    // 0x80006B14: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_80006BCC;
    // 0x80006B14: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_80006B18:
    // 0x80006B18: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80006B1C: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80006B20: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80006B24: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
    // 0x80006B28: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80006B2C: mul.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f2.d);
    // 0x80006B30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80006B34: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80006B38: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80006B3C: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80006B40: nop

    // 0x80006B44: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x80006B48: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80006B4C: nop

    // 0x80006B50: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80006B54: beq         $v0, $zero, L_80006BA4
    if (ctx->r2 == 0) {
        // 0x80006B58: nop
    
            goto L_80006BA4;
    }
    // 0x80006B58: nop

    // 0x80006B5C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80006B60: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80006B64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80006B68: sub.d       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f6.d = ctx->f4.d - ctx->f6.d;
    // 0x80006B6C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80006B70: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80006B74: nop

    // 0x80006B78: cvt.w.d     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_D(ctx->f6.d);
    // 0x80006B7C: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80006B80: nop

    // 0x80006B84: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80006B88: bne         $v0, $zero, L_80006B9C
    if (ctx->r2 != 0) {
        // 0x80006B8C: nop
    
            goto L_80006B9C;
    }
    // 0x80006B8C: nop

    // 0x80006B90: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x80006B94: b           L_80006BB4
    // 0x80006B98: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_80006BB4;
    // 0x80006B98: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_80006B9C:
    // 0x80006B9C: b           L_80006BB4
    // 0x80006BA0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80006BB4;
    // 0x80006BA0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80006BA4:
    // 0x80006BA4: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x80006BA8: nop

    // 0x80006BAC: bltz        $v0, L_80006B9C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80006BB0: nop
    
            goto L_80006B9C;
    }
    // 0x80006BB0: nop

L_80006BB4:
    // 0x80006BB4: lui         $at, 0x7
    ctx->r1 = S32(0X7 << 16);
    // 0x80006BB8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80006BBC: and         $t3, $v0, $at
    ctx->r11 = ctx->r2 & ctx->r1;
    // 0x80006BC0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80006BC4: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x80006BC8: or          $v0, $t3, $at
    ctx->r2 = ctx->r11 | ctx->r1;
L_80006BCC:
    // 0x80006BCC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80006BD0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80006BD4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80006BD8: jal         0x80080A54
    // 0x80006BDC: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    func_80080A54(rdram, ctx);
        goto after_0;
    // 0x80006BDC: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_0:
    // 0x80006BE0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80006BE4: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x80006BE8: lhu         $t5, 0x0($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X0);
    // 0x80006BEC: lhu         $t0, 0x2($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X2);
    // 0x80006BF0: andi        $t8, $t5, 0x3FF
    ctx->r24 = ctx->r13 & 0X3FF;
    // 0x80006BF4: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x80006BF8: andi        $t1, $t0, 0xFF
    ctx->r9 = ctx->r8 & 0XFF;
    // 0x80006BFC: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x80006C00: sra         $t4, $t2, 31
    ctx->r12 = S32(SIGNED(ctx->r10) >> 31);
    // 0x80006C04: or          $a0, $v0, $t4
    ctx->r4 = ctx->r2 | ctx->r12;
    // 0x80006C08: or          $a1, $v1, $t2
    ctx->r5 = ctx->r3 | ctx->r10;
    // 0x80006C0C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80006C10: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80006C14: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80006C18: jal         0x80080A54
    // 0x80006C1C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    func_80080A54(rdram, ctx);
        goto after_1;
    // 0x80006C1C: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_1:
    // 0x80006C20: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80006C24: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x80006C28: lhu         $t3, 0x4($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X4);
    // 0x80006C2C: lhu         $t2, 0x6($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X6);
    // 0x80006C30: andi        $t0, $t3, 0x3FF
    ctx->r8 = ctx->r11 & 0X3FF;
    // 0x80006C34: sll         $t1, $t0, 8
    ctx->r9 = S32(ctx->r8 << 8);
    // 0x80006C38: andi        $t6, $t2, 0xFF
    ctx->r14 = ctx->r10 & 0XFF;
    // 0x80006C3C: or          $t7, $t1, $t6
    ctx->r15 = ctx->r9 | ctx->r14;
    // 0x80006C40: sra         $t4, $t7, 31
    ctx->r12 = S32(SIGNED(ctx->r15) >> 31);
    // 0x80006C44: or          $a0, $v0, $t4
    ctx->r4 = ctx->r2 | ctx->r12;
    // 0x80006C48: or          $a1, $v1, $t7
    ctx->r5 = ctx->r3 | ctx->r15;
    // 0x80006C4C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80006C50: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80006C54: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80006C58: jal         0x80080A54
    // 0x80006C5C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_80080A54(rdram, ctx);
        goto after_2;
    // 0x80006C5C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_2:
    // 0x80006C60: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80006C64: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x80006C68: lhu         $t6, 0xC($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XC);
    // 0x80006C6C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80006C70: andi        $t7, $t6, 0xFF00
    ctx->r15 = ctx->r14 & 0XFF00;
    // 0x80006C74: sra         $t8, $t7, 8
    ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
    // 0x80006C78: sra         $t4, $t8, 31
    ctx->r12 = S32(SIGNED(ctx->r24) >> 31);
    // 0x80006C7C: or          $t0, $v0, $t4
    ctx->r8 = ctx->r2 | ctx->r12;
    // 0x80006C80: or          $t1, $v1, $t8
    ctx->r9 = ctx->r3 | ctx->r24;
    // 0x80006C84: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x80006C88: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80006C8C: lwc1        $f0, 0x10($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X10);
    // 0x80006C90: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80006C94: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80006C98: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80006C9C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80006CA0: bc1f        L_80006D4C
    if (!c1cs) {
        // 0x80006CA4: addiu       $t0, $zero, 0x0
        ctx->r8 = ADD32(0, 0X0);
            goto L_80006D4C;
    }
    // 0x80006CA4: addiu       $t0, $zero, 0x0
    ctx->r8 = ADD32(0, 0X0);
    // 0x80006CA8: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80006CAC: mul.d       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f2.d);
    // 0x80006CB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80006CB4: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80006CB8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80006CBC: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80006CC0: nop

    // 0x80006CC4: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x80006CC8: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80006CCC: nop

    // 0x80006CD0: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80006CD4: beq         $v0, $zero, L_80006D24
    if (ctx->r2 == 0) {
        // 0x80006CD8: nop
    
            goto L_80006D24;
    }
    // 0x80006CD8: nop

    // 0x80006CDC: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80006CE0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80006CE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80006CE8: sub.d       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f18.d = ctx->f16.d - ctx->f18.d;
    // 0x80006CEC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80006CF0: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80006CF4: nop

    // 0x80006CF8: cvt.w.d     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_D(ctx->f18.d);
    // 0x80006CFC: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80006D00: nop

    // 0x80006D04: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80006D08: bne         $v0, $zero, L_80006D1C
    if (ctx->r2 != 0) {
        // 0x80006D0C: nop
    
            goto L_80006D1C;
    }
    // 0x80006D0C: nop

    // 0x80006D10: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x80006D14: b           L_80006D34
    // 0x80006D18: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_80006D34;
    // 0x80006D18: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_80006D1C:
    // 0x80006D1C: b           L_80006D34
    // 0x80006D20: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80006D34;
    // 0x80006D20: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80006D24:
    // 0x80006D24: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x80006D28: nop

    // 0x80006D2C: bltz        $v0, L_80006D1C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80006D30: nop
    
            goto L_80006D1C;
    }
    // 0x80006D30: nop

L_80006D34:
    // 0x80006D34: lui         $at, 0x7
    ctx->r1 = S32(0X7 << 16);
    // 0x80006D38: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80006D3C: and         $t6, $v0, $at
    ctx->r14 = ctx->r2 & ctx->r1;
    // 0x80006D40: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80006D44: b           L_80006DF4
    // 0x80006D48: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
        goto L_80006DF4;
    // 0x80006D48: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_80006D4C:
    // 0x80006D4C: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x80006D50: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80006D54: mul.d       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f2.d);
    // 0x80006D58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80006D5C: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80006D60: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80006D64: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80006D68: nop

    // 0x80006D6C: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x80006D70: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80006D74: nop

    // 0x80006D78: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80006D7C: beq         $v0, $zero, L_80006DCC
    if (ctx->r2 == 0) {
        // 0x80006D80: nop
    
            goto L_80006DCC;
    }
    // 0x80006D80: nop

    // 0x80006D84: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80006D88: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80006D8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80006D90: sub.d       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f10.d = ctx->f8.d - ctx->f10.d;
    // 0x80006D94: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80006D98: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80006D9C: nop

    // 0x80006DA0: cvt.w.d     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_D(ctx->f10.d);
    // 0x80006DA4: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80006DA8: nop

    // 0x80006DAC: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80006DB0: bne         $v0, $zero, L_80006DC4
    if (ctx->r2 != 0) {
        // 0x80006DB4: nop
    
            goto L_80006DC4;
    }
    // 0x80006DB4: nop

    // 0x80006DB8: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x80006DBC: b           L_80006DDC
    // 0x80006DC0: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_80006DDC;
    // 0x80006DC0: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_80006DC4:
    // 0x80006DC4: b           L_80006DDC
    // 0x80006DC8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80006DDC;
    // 0x80006DC8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80006DCC:
    // 0x80006DCC: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x80006DD0: nop

    // 0x80006DD4: bltz        $v0, L_80006DC4
    if (SIGNED(ctx->r2) < 0) {
        // 0x80006DD8: nop
    
            goto L_80006DC4;
    }
    // 0x80006DD8: nop

L_80006DDC:
    // 0x80006DDC: lui         $at, 0x7
    ctx->r1 = S32(0X7 << 16);
    // 0x80006DE0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80006DE4: and         $t8, $v0, $at
    ctx->r24 = ctx->r2 & ctx->r1;
    // 0x80006DE8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80006DEC: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x80006DF0: or          $v0, $t8, $at
    ctx->r2 = ctx->r24 | ctx->r1;
L_80006DF4:
    // 0x80006DF4: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80006DF8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80006DFC: or          $a0, $t4, $t0
    ctx->r4 = ctx->r12 | ctx->r8;
    // 0x80006E00: or          $a1, $t5, $v0
    ctx->r5 = ctx->r13 | ctx->r2;
    // 0x80006E04: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80006E08: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80006E0C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80006E10: jal         0x80080A54
    // 0x80006E14: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    func_80080A54(rdram, ctx);
        goto after_3;
    // 0x80006E14: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    after_3:
    // 0x80006E18: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80006E1C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x80006E20: lwc1        $f0, 0x14($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X14);
    // 0x80006E24: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80006E28: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80006E2C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80006E30: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x80006E34: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80006E38: bc1f        L_80006EE4
    if (!c1cs) {
        // 0x80006E3C: addiu       $t6, $zero, 0x0
        ctx->r14 = ADD32(0, 0X0);
            goto L_80006EE4;
    }
    // 0x80006E3C: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x80006E40: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x80006E44: mul.d       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f2.d);
    // 0x80006E48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80006E4C: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80006E50: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80006E54: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80006E58: nop

    // 0x80006E5C: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x80006E60: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80006E64: nop

    // 0x80006E68: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80006E6C: beq         $v0, $zero, L_80006EBC
    if (ctx->r2 == 0) {
        // 0x80006E70: nop
    
            goto L_80006EBC;
    }
    // 0x80006E70: nop

    // 0x80006E74: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80006E78: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80006E7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80006E80: sub.d       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f6.d = ctx->f4.d - ctx->f6.d;
    // 0x80006E84: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80006E88: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80006E8C: nop

    // 0x80006E90: cvt.w.d     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_D(ctx->f6.d);
    // 0x80006E94: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80006E98: nop

    // 0x80006E9C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80006EA0: bne         $v0, $zero, L_80006EB4
    if (ctx->r2 != 0) {
        // 0x80006EA4: nop
    
            goto L_80006EB4;
    }
    // 0x80006EA4: nop

    // 0x80006EA8: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x80006EAC: b           L_80006ECC
    // 0x80006EB0: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_80006ECC;
    // 0x80006EB0: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_80006EB4:
    // 0x80006EB4: b           L_80006ECC
    // 0x80006EB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80006ECC;
    // 0x80006EB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80006EBC:
    // 0x80006EBC: mfc1        $v0, $f6
    ctx->r2 = (int32_t)ctx->f6.u32l;
    // 0x80006EC0: nop

    // 0x80006EC4: bltz        $v0, L_80006EB4
    if (SIGNED(ctx->r2) < 0) {
        // 0x80006EC8: nop
    
            goto L_80006EB4;
    }
    // 0x80006EC8: nop

L_80006ECC:
    // 0x80006ECC: lui         $at, 0x7
    ctx->r1 = S32(0X7 << 16);
    // 0x80006ED0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80006ED4: and         $t9, $v0, $at
    ctx->r25 = ctx->r2 & ctx->r1;
    // 0x80006ED8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80006EDC: b           L_80006F8C
    // 0x80006EE0: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_80006F8C;
    // 0x80006EE0: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_80006EE4:
    // 0x80006EE4: neg.s       $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = -ctx->f0.fl;
    // 0x80006EE8: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80006EEC: mul.d       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f2.d);
    // 0x80006EF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80006EF4: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80006EF8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80006EFC: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80006F00: nop

    // 0x80006F04: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x80006F08: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80006F0C: nop

    // 0x80006F10: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80006F14: beq         $v0, $zero, L_80006F64
    if (ctx->r2 == 0) {
        // 0x80006F18: nop
    
            goto L_80006F64;
    }
    // 0x80006F18: nop

    // 0x80006F1C: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80006F20: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80006F24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80006F28: sub.d       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f18.d = ctx->f16.d - ctx->f18.d;
    // 0x80006F2C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80006F30: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80006F34: nop

    // 0x80006F38: cvt.w.d     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_D(ctx->f18.d);
    // 0x80006F3C: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80006F40: nop

    // 0x80006F44: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80006F48: bne         $v0, $zero, L_80006F5C
    if (ctx->r2 != 0) {
        // 0x80006F4C: nop
    
            goto L_80006F5C;
    }
    // 0x80006F4C: nop

    // 0x80006F50: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x80006F54: b           L_80006F74
    // 0x80006F58: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_80006F74;
    // 0x80006F58: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_80006F5C:
    // 0x80006F5C: b           L_80006F74
    // 0x80006F60: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80006F74;
    // 0x80006F60: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80006F64:
    // 0x80006F64: mfc1        $v0, $f18
    ctx->r2 = (int32_t)ctx->f18.u32l;
    // 0x80006F68: nop

    // 0x80006F6C: bltz        $v0, L_80006F5C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80006F70: nop
    
            goto L_80006F5C;
    }
    // 0x80006F70: nop

L_80006F74:
    // 0x80006F74: lui         $at, 0x7
    ctx->r1 = S32(0X7 << 16);
    // 0x80006F78: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80006F7C: and         $t2, $v0, $at
    ctx->r10 = ctx->r2 & ctx->r1;
    // 0x80006F80: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80006F84: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x80006F88: or          $v0, $t2, $at
    ctx->r2 = ctx->r10 | ctx->r1;
L_80006F8C:
    // 0x80006F8C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80006F90: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80006F94: or          $a0, $t0, $t6
    ctx->r4 = ctx->r8 | ctx->r14;
    // 0x80006F98: or          $a1, $t1, $v0
    ctx->r5 = ctx->r9 | ctx->r2;
    // 0x80006F9C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80006FA0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80006FA4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80006FA8: jal         0x80080A54
    // 0x80006FAC: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    func_80080A54(rdram, ctx);
        goto after_4;
    // 0x80006FAC: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    after_4:
    // 0x80006FB0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80006FB4: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x80006FB8: lwc1        $f0, 0x18($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X18);
    // 0x80006FBC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80006FC0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80006FC4: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80006FC8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80006FCC: bc1f        L_80007090
    if (!c1cs) {
        // 0x80006FD0: addiu       $t8, $zero, 0x0
        ctx->r24 = ADD32(0, 0X0);
            goto L_80007090;
    }
    // 0x80006FD0: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x80006FD4: lui         $at, 0x4030
    ctx->r1 = S32(0X4030 << 16);
    // 0x80006FD8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80006FDC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80006FE0: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80006FE4: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80006FE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80006FEC: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80006FF0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80006FF4: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80006FF8: nop

    // 0x80006FFC: cvt.w.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_D(ctx->f10.d);
    // 0x80007000: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80007004: nop

    // 0x80007008: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8000700C: beq         $v0, $zero, L_80007074
    if (ctx->r2 == 0) {
        // 0x80007010: nop
    
            goto L_80007074;
    }
    // 0x80007010: nop

    // 0x80007014: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80007018: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8000701C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80007020: sub.d       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f16.d = ctx->f10.d - ctx->f16.d;
    // 0x80007024: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80007028: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8000702C: nop

    // 0x80007030: cvt.w.d     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_D(ctx->f16.d);
    // 0x80007034: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80007038: nop

    // 0x8000703C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80007040: bne         $v0, $zero, L_80007064
    if (ctx->r2 != 0) {
        // 0x80007044: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80007064;
    }
    // 0x80007044: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80007048: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x8000704C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80007050: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    // 0x80007054: andi        $t3, $v0, 0x1FFF
    ctx->r11 = ctx->r2 & 0X1FFF;
    // 0x80007058: b           L_80007138
    // 0x8000705C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
        goto L_80007138;
    // 0x8000705C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
L_80007060:
    // 0x80007060: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80007064:
    // 0x80007064: andi        $t3, $v0, 0x1FFF
    ctx->r11 = ctx->r2 & 0X1FFF;
    // 0x80007068: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8000706C: b           L_80007138
    // 0x80007070: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
        goto L_80007138;
    // 0x80007070: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
L_80007074:
    // 0x80007074: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x80007078: nop

    // 0x8000707C: bltz        $v0, L_80007060
    if (SIGNED(ctx->r2) < 0) {
        // 0x80007080: andi        $t3, $v0, 0x1FFF
        ctx->r11 = ctx->r2 & 0X1FFF;
            goto L_80007060;
    }
    // 0x80007080: andi        $t3, $v0, 0x1FFF
    ctx->r11 = ctx->r2 & 0X1FFF;
    // 0x80007084: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80007088: b           L_80007138
    // 0x8000708C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
        goto L_80007138;
    // 0x8000708C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
L_80007090:
    // 0x80007090: lui         $at, 0x4030
    ctx->r1 = S32(0X4030 << 16);
    // 0x80007094: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80007098: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8000709C: neg.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = -ctx->f0.fl;
    // 0x800070A0: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800070A4: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x800070A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800070AC: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x800070B0: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800070B4: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x800070B8: nop

    // 0x800070BC: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x800070C0: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x800070C4: nop

    // 0x800070C8: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x800070CC: beq         $v0, $zero, L_8000711C
    if (ctx->r2 == 0) {
        // 0x800070D0: nop
    
            goto L_8000711C;
    }
    // 0x800070D0: nop

    // 0x800070D4: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x800070D8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800070DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800070E0: sub.d       $f10, $f8, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f10.d = ctx->f8.d - ctx->f10.d;
    // 0x800070E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800070E8: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x800070EC: nop

    // 0x800070F0: cvt.w.d     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_D(ctx->f10.d);
    // 0x800070F4: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x800070F8: nop

    // 0x800070FC: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80007100: bne         $v0, $zero, L_80007114
    if (ctx->r2 != 0) {
        // 0x80007104: nop
    
            goto L_80007114;
    }
    // 0x80007104: nop

    // 0x80007108: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x8000710C: b           L_8000712C
    // 0x80007110: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_8000712C;
    // 0x80007110: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_80007114:
    // 0x80007114: b           L_8000712C
    // 0x80007118: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8000712C;
    // 0x80007118: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8000711C:
    // 0x8000711C: mfc1        $v0, $f10
    ctx->r2 = (int32_t)ctx->f10.u32l;
    // 0x80007120: nop

    // 0x80007124: bltz        $v0, L_80007114
    if (SIGNED(ctx->r2) < 0) {
        // 0x80007128: nop
    
            goto L_80007114;
    }
    // 0x80007128: nop

L_8000712C:
    // 0x8000712C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80007130: andi        $t4, $v0, 0x1FFF
    ctx->r12 = ctx->r2 & 0X1FFF;
    // 0x80007134: ori         $v0, $t4, 0x2000
    ctx->r2 = ctx->r12 | 0X2000;
L_80007138:
    // 0x80007138: or          $a0, $t6, $t8
    ctx->r4 = ctx->r14 | ctx->r24;
    // 0x8000713C: or          $a1, $t7, $v0
    ctx->r5 = ctx->r15 | ctx->r2;
    // 0x80007140: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80007144: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80007148: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8000714C: jal         0x80080A54
    // 0x80007150: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_80080A54(rdram, ctx);
        goto after_5;
    // 0x80007150: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_5:
    // 0x80007154: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80007158: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x8000715C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80007160: lwc1        $f16, 0x1C($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80007164: lwc1        $f5, 0x2F40($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X2F40);
    // 0x80007168: lwc1        $f4, 0x2F44($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2F44);
    // 0x8000716C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80007170: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x80007174: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80007178: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8000717C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80007180: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80007184: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80007188: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8000718C: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80007190: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x80007194: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80007198: nop

    // 0x8000719C: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x800071A0: beq         $t5, $zero, L_800071F0
    if (ctx->r13 == 0) {
        // 0x800071A4: nop
    
            goto L_800071F0;
    }
    // 0x800071A4: nop

    // 0x800071A8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x800071AC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800071B0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800071B4: sub.d       $f8, $f6, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f8.d = ctx->f6.d - ctx->f8.d;
    // 0x800071B8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800071BC: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800071C0: nop

    // 0x800071C4: cvt.w.d     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.u32l = CVT_W_D(ctx->f8.d);
    // 0x800071C8: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800071CC: nop

    // 0x800071D0: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x800071D4: bne         $t5, $zero, L_800071E8
    if (ctx->r13 != 0) {
        // 0x800071D8: nop
    
            goto L_800071E8;
    }
    // 0x800071D8: nop

    // 0x800071DC: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x800071E0: b           L_80007200
    // 0x800071E4: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_80007200;
    // 0x800071E4: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_800071E8:
    // 0x800071E8: b           L_80007200
    // 0x800071EC: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_80007200;
    // 0x800071EC: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
L_800071F0:
    // 0x800071F0: mfc1        $t5, $f8
    ctx->r13 = (int32_t)ctx->f8.u32l;
    // 0x800071F4: nop

    // 0x800071F8: bltz        $t5, L_800071E8
    if (SIGNED(ctx->r13) < 0) {
        // 0x800071FC: nop
    
            goto L_800071E8;
    }
    // 0x800071FC: nop

L_80007200:
    // 0x80007200: andi        $t4, $t5, 0xFF
    ctx->r12 = ctx->r13 & 0XFF;
    // 0x80007204: sra         $t0, $t4, 31
    ctx->r8 = S32(SIGNED(ctx->r12) >> 31);
    // 0x80007208: or          $t8, $t6, $t0
    ctx->r24 = ctx->r14 | ctx->r8;
    // 0x8000720C: or          $t9, $t7, $t4
    ctx->r25 = ctx->r15 | ctx->r12;
    // 0x80007210: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80007214: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80007218: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8000721C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80007220: sw          $t2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r10;
    // 0x80007224: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x80007228: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8000722C: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x80007230: sw          $t5, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r13;
    // 0x80007234: sw          $t4, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r12;
    // 0x80007238: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000723C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80007240: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80007244: jr          $ra
    // 0x80007248: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80007248: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8000724C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000724C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80007250: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80007254: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80007258: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8000725C: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x80007260: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x80007264: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80007268: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8000726C: lw          $t1, 0xC($a0)
    ctx->r9 = MEM_W(ctx->r4, 0XC);
    // 0x80007270: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x80007274: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80007278: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8000727C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80007280: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x80007284: andi        $a1, $t9, 0xFF
    ctx->r5 = ctx->r25 & 0XFF;
    // 0x80007288: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8000728C: jal         0x80080A54
    // 0x80007290: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    func_80080A54(rdram, ctx);
        goto after_0;
    // 0x80007290: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    after_0:
    // 0x80007294: sh          $v1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r3;
    // 0x80007298: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8000729C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800072A0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800072A4: jal         0x800809B0
    // 0x800072A8: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_800809B0(rdram, ctx);
        goto after_1;
    // 0x800072A8: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_1:
    // 0x800072AC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x800072B0: ori         $at, $at, 0xFF00
    ctx->r1 = ctx->r1 | 0XFF00;
    // 0x800072B4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x800072B8: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x800072BC: and         $a1, $v1, $at
    ctx->r5 = ctx->r3 & ctx->r1;
    // 0x800072C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800072C4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800072C8: jal         0x800809B0
    // 0x800072CC: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_800809B0(rdram, ctx);
        goto after_2;
    // 0x800072CC: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_2:
    // 0x800072D0: sh          $v1, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r3;
    // 0x800072D4: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800072D8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800072DC: andi        $t1, $t7, 0xFF
    ctx->r9 = ctx->r15 & 0XFF;
    // 0x800072E0: sh          $t1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r9;
    // 0x800072E4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x800072E8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x800072EC: jal         0x800809B0
    // 0x800072F0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    func_800809B0(rdram, ctx);
        goto after_3;
    // 0x800072F0: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_3:
    // 0x800072F4: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x800072F8: ori         $at, $at, 0xFF00
    ctx->r1 = ctx->r1 | 0XFF00;
    // 0x800072FC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80007300: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x80007304: and         $a1, $v1, $at
    ctx->r5 = ctx->r3 & ctx->r1;
    // 0x80007308: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8000730C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80007310: jal         0x800809B0
    // 0x80007314: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_800809B0(rdram, ctx);
        goto after_4;
    // 0x80007314: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_4:
    // 0x80007318: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
    // 0x8000731C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80007320: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80007324: andi        $t7, $t5, 0xFF
    ctx->r15 = ctx->r13 & 0XFF;
    // 0x80007328: sh          $t7, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r15;
    // 0x8000732C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80007330: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80007334: jal         0x800809B0
    // 0x80007338: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    func_800809B0(rdram, ctx);
        goto after_5;
    // 0x80007338: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    after_5:
    // 0x8000733C: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x80007340: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80007344: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x80007348: and         $t9, $v1, $at
    ctx->r25 = ctx->r3 & ctx->r1;
    // 0x8000734C: or          $t1, $v1, $zero
    ctx->r9 = ctx->r3 | 0;
    // 0x80007350: beq         $t9, $zero, L_80007390
    if (ctx->r25 == 0) {
        // 0x80007354: lui         $at, 0x7
        ctx->r1 = S32(0X7 << 16);
            goto L_80007390;
    }
    // 0x80007354: lui         $at, 0x7
    ctx->r1 = S32(0X7 << 16);
    // 0x80007358: lui         $at, 0x7
    ctx->r1 = S32(0X7 << 16);
    // 0x8000735C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80007360: and         $a1, $t1, $at
    ctx->r5 = ctx->r9 & ctx->r1;
    // 0x80007364: jal         0x80080E48
    // 0x80007368: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80080E48(rdram, ctx);
        goto after_6;
    // 0x80007368: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x8000736C: lui         $at, 0x3F60
    ctx->r1 = S32(0X3F60 << 16);
    // 0x80007370: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80007374: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80007378: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x8000737C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80007380: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80007384: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80007388: b           L_800073C4
    // 0x8000738C: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
        goto L_800073C4;
    // 0x8000738C: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
L_80007390:
    // 0x80007390: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80007394: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80007398: and         $t3, $a1, $at
    ctx->r11 = ctx->r5 & ctx->r1;
    // 0x8000739C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x800073A0: jal         0x80080E48
    // 0x800073A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80080E48(rdram, ctx);
        goto after_7;
    // 0x800073A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x800073A8: lui         $at, 0x3F60
    ctx->r1 = S32(0X3F60 << 16);
    // 0x800073AC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x800073B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800073B4: cvt.d.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f18.d = CVT_D_S(ctx->f0.fl);
    // 0x800073B8: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x800073BC: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800073C0: swc1        $f8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f8.u32l;
L_800073C4:
    // 0x800073C4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800073C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800073CC: andi        $t5, $a1, 0xFF
    ctx->r13 = ctx->r5 & 0XFF;
    // 0x800073D0: jal         0x80080E48
    // 0x800073D4: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    func_80080E48(rdram, ctx);
        goto after_8;
    // 0x800073D4: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    after_8:
    // 0x800073D8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800073DC: lwc1        $f17, 0x2F48($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X2F48);
    // 0x800073E0: lwc1        $f16, 0x2F4C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X2F4C);
    // 0x800073E4: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x800073E8: nop

    // 0x800073EC: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x800073F0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800073F4: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x800073F8: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800073FC: swc1        $f4, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f4.u32l;
    // 0x80007400: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80007404: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80007408: jal         0x800809B0
    // 0x8000740C: nop

    func_800809B0(rdram, ctx);
        goto after_9;
    // 0x8000740C: nop

    after_9:
    // 0x80007410: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80007414: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x80007418: or          $t7, $v1, $zero
    ctx->r15 = ctx->r3 | 0;
    // 0x8000741C: andi        $t9, $v1, 0x2000
    ctx->r25 = ctx->r3 & 0X2000;
    // 0x80007420: beq         $t9, $zero, L_80007454
    if (ctx->r25 == 0) {
        // 0x80007424: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80007454;
    }
    // 0x80007424: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80007428: jal         0x80080E48
    // 0x8000742C: andi        $a1, $t7, 0x1FFF
    ctx->r5 = ctx->r15 & 0X1FFF;
    func_80080E48(rdram, ctx);
        goto after_10;
    // 0x8000742C: andi        $a1, $t7, 0x1FFF
    ctx->r5 = ctx->r15 & 0X1FFF;
    after_10:
    // 0x80007430: lui         $at, 0x3FB0
    ctx->r1 = S32(0X3FB0 << 16);
    // 0x80007434: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x80007438: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8000743C: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x80007440: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80007444: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x80007448: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8000744C: b           L_80007484
    // 0x80007450: swc1        $f18, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f18.u32l;
        goto L_80007484;
    // 0x80007450: swc1        $f18, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f18.u32l;
L_80007454:
    // 0x80007454: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80007458: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8000745C: andi        $t1, $a1, 0x1FFF
    ctx->r9 = ctx->r5 & 0X1FFF;
    // 0x80007460: jal         0x80080E48
    // 0x80007464: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_80080E48(rdram, ctx);
        goto after_11;
    // 0x80007464: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_11:
    // 0x80007468: lui         $at, 0x3FB0
    ctx->r1 = S32(0X3FB0 << 16);
    // 0x8000746C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80007470: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80007474: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80007478: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x8000747C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80007480: swc1        $f10, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->f10.u32l;
L_80007484:
    // 0x80007484: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80007488: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8000748C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80007490: jal         0x800809B0
    // 0x80007494: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    func_800809B0(rdram, ctx);
        goto after_12;
    // 0x80007494: addiu       $a3, $zero, 0xE
    ctx->r7 = ADD32(0, 0XE);
    after_12:
    // 0x80007498: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x8000749C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800074A0: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x800074A4: and         $t5, $v1, $at
    ctx->r13 = ctx->r3 & ctx->r1;
    // 0x800074A8: or          $t3, $v1, $zero
    ctx->r11 = ctx->r3 | 0;
    // 0x800074AC: beq         $t5, $zero, L_800074EC
    if (ctx->r13 == 0) {
        // 0x800074B0: lui         $at, 0x7
        ctx->r1 = S32(0X7 << 16);
            goto L_800074EC;
    }
    // 0x800074B0: lui         $at, 0x7
    ctx->r1 = S32(0X7 << 16);
    // 0x800074B4: lui         $at, 0x7
    ctx->r1 = S32(0X7 << 16);
    // 0x800074B8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800074BC: and         $a1, $t3, $at
    ctx->r5 = ctx->r11 & ctx->r1;
    // 0x800074C0: jal         0x80080E48
    // 0x800074C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80080E48(rdram, ctx);
        goto after_13;
    // 0x800074C4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_13:
    // 0x800074C8: lui         $at, 0x3F60
    ctx->r1 = S32(0X3F60 << 16);
    // 0x800074CC: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x800074D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800074D4: neg.s       $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = -ctx->f0.fl;
    // 0x800074D8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800074DC: mul.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f18.d, ctx->f4.d);
    // 0x800074E0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800074E4: b           L_80007520
    // 0x800074E8: swc1        $f8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f8.u32l;
        goto L_80007520;
    // 0x800074E8: swc1        $f8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f8.u32l;
L_800074EC:
    // 0x800074EC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x800074F0: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800074F4: and         $t9, $a1, $at
    ctx->r25 = ctx->r5 & ctx->r1;
    // 0x800074F8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x800074FC: jal         0x80080E48
    // 0x80007500: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80080E48(rdram, ctx);
        goto after_14;
    // 0x80007500: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_14:
    // 0x80007504: lui         $at, 0x3F60
    ctx->r1 = S32(0X3F60 << 16);
    // 0x80007508: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8000750C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80007510: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x80007514: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80007518: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8000751C: swc1        $f4, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f4.u32l;
L_80007520:
    // 0x80007520: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80007524: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80007528: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8000752C: jal         0x800809B0
    // 0x80007530: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    func_800809B0(rdram, ctx);
        goto after_15;
    // 0x80007530: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    after_15:
    // 0x80007534: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x80007538: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8000753C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x80007540: and         $t1, $v1, $at
    ctx->r9 = ctx->r3 & ctx->r1;
    // 0x80007544: or          $t7, $v1, $zero
    ctx->r15 = ctx->r3 | 0;
    // 0x80007548: beq         $t1, $zero, L_80007588
    if (ctx->r9 == 0) {
        // 0x8000754C: lui         $at, 0x7
        ctx->r1 = S32(0X7 << 16);
            goto L_80007588;
    }
    // 0x8000754C: lui         $at, 0x7
    ctx->r1 = S32(0X7 << 16);
    // 0x80007550: lui         $at, 0x7
    ctx->r1 = S32(0X7 << 16);
    // 0x80007554: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80007558: and         $a1, $t7, $at
    ctx->r5 = ctx->r15 & ctx->r1;
    // 0x8000755C: jal         0x80080E48
    // 0x80007560: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80080E48(rdram, ctx);
        goto after_16;
    // 0x80007560: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_16:
    // 0x80007564: lui         $at, 0x3F60
    ctx->r1 = S32(0X3F60 << 16);
    // 0x80007568: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x8000756C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80007570: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x80007574: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80007578: mul.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = MUL_D(ctx->f8.d, ctx->f10.d);
    // 0x8000757C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80007580: b           L_800075BC
    // 0x80007584: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
        goto L_800075BC;
    // 0x80007584: swc1        $f18, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f18.u32l;
L_80007588:
    // 0x80007588: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8000758C: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80007590: and         $t5, $a1, $at
    ctx->r13 = ctx->r5 & ctx->r1;
    // 0x80007594: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x80007598: jal         0x80080E48
    // 0x8000759C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80080E48(rdram, ctx);
        goto after_17;
    // 0x8000759C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_17:
    // 0x800075A0: lui         $at, 0x3F60
    ctx->r1 = S32(0X3F60 << 16);
    // 0x800075A4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x800075A8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800075AC: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x800075B0: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x800075B4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800075B8: swc1        $f10, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f10.u32l;
L_800075BC:
    // 0x800075BC: jal         0x800062C0
    // 0x800075C0: nop

    func_800062C0(rdram, ctx);
        goto after_18;
    // 0x800075C0: nop

    after_18:
    // 0x800075C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800075C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800075CC: jr          $ra
    // 0x800075D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800075D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800075D4: nop

    // 0x800075D8: nop

    // 0x800075DC: nop

;}
RECOMP_FUNC void func_800075E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800075E0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800075E4: addiu       $a0, $a0, -0x30A0
    ctx->r4 = ADD32(ctx->r4, -0X30A0);
    // 0x800075E8: lb          $t6, 0x4($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X4);
    // 0x800075EC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800075F0: bne         $v1, $t6, L_80007624
    if (ctx->r3 != ctx->r14) {
        // 0x800075F4: nop
    
            goto L_80007624;
    }
    // 0x800075F4: nop

    // 0x800075F8: lb          $t7, 0x5($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X5);
    // 0x800075FC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80007600: bne         $v1, $t7, L_8000761C
    if (ctx->r3 != ctx->r15) {
        // 0x80007604: addiu       $a0, $a0, 0x37A0
        ctx->r4 = ADD32(ctx->r4, 0X37A0);
            goto L_8000761C;
    }
    // 0x80007604: addiu       $a0, $a0, 0x37A0
    ctx->r4 = ADD32(ctx->r4, 0X37A0);
    // 0x80007608: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8000760C: addiu       $a0, $a0, 0x37A0
    ctx->r4 = ADD32(ctx->r4, 0X37A0);
    // 0x80007610: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80007614: b           L_80007664
    // 0x80007618: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
        goto L_80007664;
    // 0x80007618: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
L_8000761C:
    // 0x8000761C: b           L_80007664
    // 0x80007620: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
        goto L_80007664;
    // 0x80007620: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
L_80007624:
    // 0x80007624: lb          $v0, 0x1($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X1);
    // 0x80007628: nop

    // 0x8000762C: bne         $v1, $v0, L_80007640
    if (ctx->r3 != ctx->r2) {
        // 0x80007630: lui         $a0, 0x8013
        ctx->r4 = S32(0X8013 << 16);
            goto L_80007640;
    }
    // 0x80007630: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80007634: addiu       $a0, $a0, 0x37A0
    ctx->r4 = ADD32(ctx->r4, 0X37A0);
    // 0x80007638: b           L_80007664
    // 0x8000763C: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
        goto L_80007664;
    // 0x8000763C: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
L_80007640:
    // 0x80007640: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80007644: bne         $v0, $at, L_80007658
    if (ctx->r2 != ctx->r1) {
        // 0x80007648: lui         $a0, 0x8013
        ctx->r4 = S32(0X8013 << 16);
            goto L_80007658;
    }
    // 0x80007648: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8000764C: addiu       $a0, $a0, 0x37A0
    ctx->r4 = ADD32(ctx->r4, 0X37A0);
    // 0x80007650: b           L_80007664
    // 0x80007654: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
        goto L_80007664;
    // 0x80007654: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
L_80007658:
    // 0x80007658: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8000765C: addiu       $a0, $a0, 0x37A0
    ctx->r4 = ADD32(ctx->r4, 0X37A0);
    // 0x80007660: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
L_80007664:
    // 0x80007664: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80007668: lw          $t9, -0x2F98($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2F98);
    // 0x8000766C: lui         $t0, 0x3
    ctx->r8 = S32(0X3 << 16);
    // 0x80007670: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80007674: lbu         $t0, -0x765E($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X765E);
    // 0x80007678: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8000767C: bne         $t0, $at, L_800076A4
    if (ctx->r8 != ctx->r1) {
        // 0x80007680: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_800076A4;
    }
    // 0x80007680: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80007684: lhu         $v0, 0xB7E($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0XB7E);
    // 0x80007688: nop

    // 0x8000768C: andi        $t1, $v0, 0x200
    ctx->r9 = ctx->r2 & 0X200;
    // 0x80007690: bne         $t1, $zero, L_800076A0
    if (ctx->r9 != 0) {
        // 0x80007694: andi        $t2, $v0, 0x400
        ctx->r10 = ctx->r2 & 0X400;
            goto L_800076A0;
    }
    // 0x80007694: andi        $t2, $v0, 0x400
    ctx->r10 = ctx->r2 & 0X400;
    // 0x80007698: beq         $t2, $zero, L_800076A4
    if (ctx->r10 == 0) {
        // 0x8000769C: nop
    
            goto L_800076A4;
    }
    // 0x8000769C: nop

L_800076A0:
    // 0x800076A0: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
L_800076A4:
    // 0x800076A4: jr          $ra
    // 0x800076A8: nop

    return;
    // 0x800076A8: nop

;}
RECOMP_FUNC void func_800076AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800076AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800076B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800076B4: jal         0x800094B4
    // 0x800076B8: nop

    func_800094B4(rdram, ctx);
        goto after_0;
    // 0x800076B8: nop

    after_0:
    // 0x800076BC: jal         0x800075E0
    // 0x800076C0: nop

    func_800075E0(rdram, ctx);
        goto after_1;
    // 0x800076C0: nop

    after_1:
    // 0x800076C4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800076C8: lw          $v0, 0x37A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X37A0);
    // 0x800076CC: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800076D0: beq         $v0, $zero, L_800076F8
    if (ctx->r2 == 0) {
        // 0x800076D4: addiu       $v1, $v1, 0x37AC
        ctx->r3 = ADD32(ctx->r3, 0X37AC);
            goto L_800076F8;
    }
    // 0x800076D4: addiu       $v1, $v1, 0x37AC
    ctx->r3 = ADD32(ctx->r3, 0X37AC);
    // 0x800076D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800076DC: beq         $v0, $at, L_800077C8
    if (ctx->r2 == ctx->r1) {
        // 0x800076E0: lui         $a1, 0x8013
        ctx->r5 = S32(0X8013 << 16);
            goto L_800077C8;
    }
    // 0x800076E0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800076E4: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800076E8: beq         $v0, $a2, L_80007864
    if (ctx->r2 == ctx->r6) {
        // 0x800076EC: lui         $a1, 0x8013
        ctx->r5 = S32(0X8013 << 16);
            goto L_80007864;
    }
    // 0x800076EC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x800076F0: b           L_800078C4
    // 0x800076F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800078C4;
    // 0x800076F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800076F8:
    // 0x800076F8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800076FC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80007700: sw          $t6, 0x37A4($at)
    MEM_W(0X37A4, ctx->r1) = ctx->r14;
    // 0x80007704: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80007708: lwc1        $f4, 0x3020($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3020);
    // 0x8000770C: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x80007710: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80007714: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x80007718: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8000771C: addiu       $a0, $a0, 0x37B0
    ctx->r4 = ADD32(ctx->r4, 0X37B0);
    // 0x80007720: addiu       $v0, $v0, 0x37A8
    ctx->r2 = ADD32(ctx->r2, 0X37A8);
    // 0x80007724: addiu       $t7, $zero, 0xAA
    ctx->r15 = ADD32(0, 0XAA);
    // 0x80007728: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8000772C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80007730: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x80007734: swc1        $f6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f6.u32l;
    // 0x80007738: lw          $t8, -0x2F98($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X2F98);
    // 0x8000773C: lui         $t9, 0x3
    ctx->r25 = S32(0X3 << 16);
    // 0x80007740: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80007744: lbu         $t9, -0x765E($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X765E);
    // 0x80007748: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8000774C: slti        $at, $t9, 0xD
    ctx->r1 = SIGNED(ctx->r25) < 0XD ? 1 : 0;
    // 0x80007750: bne         $at, $zero, L_800077A4
    if (ctx->r1 != 0) {
        // 0x80007754: addiu       $a1, $a1, 0xAE0
        ctx->r5 = ADD32(ctx->r5, 0XAE0);
            goto L_800077A4;
    }
    // 0x80007754: addiu       $a1, $a1, 0xAE0
    ctx->r5 = ADD32(ctx->r5, 0XAE0);
    // 0x80007758: lwc1        $f8, 0x0($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8000775C: lui         $at, 0xBFE0
    ctx->r1 = S32(0XBFE0 << 16);
    // 0x80007760: mtc1        $at, $f1
    ctx->f_odd[(1 - 1) * 2] = ctx->r1;
    // 0x80007764: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80007768: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8000776C: mul.d       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f0.d);
    // 0x80007770: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80007774: or          $t0, $t7, $zero
    ctx->r8 = ctx->r15 | 0;
    // 0x80007778: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8000777C: mul.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x80007780: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80007784: swc1        $f18, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f18.u32l;
    // 0x80007788: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8000778C: swc1        $f10, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f10.u32l;
    // 0x80007790: bgez        $t0, L_800077A0
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80007794: sra         $t1, $t0, 1
        ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
            goto L_800077A0;
    }
    // 0x80007794: sra         $t1, $t0, 1
    ctx->r9 = S32(SIGNED(ctx->r8) >> 1);
    // 0x80007798: addiu       $at, $t0, 0x1
    ctx->r1 = ADD32(ctx->r8, 0X1);
    // 0x8000779C: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_800077A0:
    // 0x800077A0: sw          $t1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r9;
L_800077A4:
    // 0x800077A4: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x800077A8: lui         $t4, 0x8009
    ctx->r12 = S32(0X8009 << 16);
    // 0x800077AC: addiu       $t2, $v1, 0x8
    ctx->r10 = ADD32(ctx->r3, 0X8);
    // 0x800077B0: sw          $t2, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r10;
    // 0x800077B4: addiu       $t4, $t4, 0x5258
    ctx->r12 = ADD32(ctx->r12, 0X5258);
    // 0x800077B8: lui         $t3, 0x600
    ctx->r11 = S32(0X600 << 16);
    // 0x800077BC: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x800077C0: b           L_800078C0
    // 0x800077C4: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
        goto L_800078C0;
    // 0x800077C4: sw          $t4, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r12;
L_800077C8:
    // 0x800077C8: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x800077CC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800077D0: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x800077D4: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800077D8: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x800077DC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800077E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800077E4: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x800077E8: sw          $t5, 0x37A4($at)
    MEM_W(0X37A4, ctx->r1) = ctx->r13;
    // 0x800077EC: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800077F0: addiu       $v0, $v0, 0x37B8
    ctx->r2 = ADD32(ctx->r2, 0X37B8);
    // 0x800077F4: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    // 0x800077F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800077FC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80007800: addiu       $a1, $a1, 0xAE0
    ctx->r5 = ADD32(ctx->r5, 0XAE0);
    // 0x80007804: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80007808: lui         $at, 0xC416
    ctx->r1 = S32(0XC416 << 16);
    // 0x8000780C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80007810: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80007814: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x80007818: addiu       $t6, $v1, 0x8
    ctx->r14 = ADD32(ctx->r3, 0X8);
    // 0x8000781C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80007820: addiu       $t8, $t8, 0x52E0
    ctx->r24 = ADD32(ctx->r24, 0X52E0);
    // 0x80007824: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x80007828: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x8000782C: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x80007830: swc1        $f0, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f0.u32l;
    // 0x80007834: swc1        $f0, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f0.u32l;
    // 0x80007838: swc1        $f2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f2.u32l;
    // 0x8000783C: swc1        $f2, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f2.u32l;
    // 0x80007840: swc1        $f12, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f12.u32l;
    // 0x80007844: swc1        $f12, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f12.u32l;
    // 0x80007848: swc1        $f16, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f16.u32l;
    // 0x8000784C: swc1        $f18, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f18.u32l;
    // 0x80007850: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    // 0x80007854: swc1        $f6, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f6.u32l;
    // 0x80007858: sw          $t8, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r24;
    // 0x8000785C: b           L_800078C0
    // 0x80007860: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
        goto L_800078C0;
    // 0x80007860: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
L_80007864:
    // 0x80007864: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80007868: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8000786C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80007870: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80007874: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80007878: sw          $a2, 0x37A4($at)
    MEM_W(0X37A4, ctx->r1) = ctx->r6;
    // 0x8000787C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x80007880: addiu       $v0, $v0, 0x37B8
    ctx->r2 = ADD32(ctx->r2, 0X37B8);
    // 0x80007884: addiu       $a1, $a1, 0xAE0
    ctx->r5 = ADD32(ctx->r5, 0XAE0);
    // 0x80007888: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8000788C: lui         $at, 0xC416
    ctx->r1 = S32(0XC416 << 16);
    // 0x80007890: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80007894: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x80007898: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x8000789C: lui         $t1, 0x8009
    ctx->r9 = S32(0X8009 << 16);
    // 0x800078A0: swc1        $f0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f0.u32l;
    // 0x800078A4: swc1        $f0, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f0.u32l;
    // 0x800078A8: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    // 0x800078AC: swc1        $f8, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f8.u32l;
    // 0x800078B0: addiu       $t1, $t1, 0x52E0
    ctx->r9 = ADD32(ctx->r9, 0X52E0);
    // 0x800078B4: lui         $t0, 0x600
    ctx->r8 = S32(0X600 << 16);
    // 0x800078B8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x800078BC: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
L_800078C0:
    // 0x800078C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800078C4:
    // 0x800078C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800078C8: jr          $ra
    // 0x800078CC: nop

    return;
    // 0x800078CC: nop

;}
RECOMP_FUNC void func_800078D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800078D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800078D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800078D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800078DC: lhu         $v1, 0x2($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X2);
    // 0x800078E0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800078E4: andi        $t6, $v1, 0x7
    ctx->r14 = ctx->r3 & 0X7;
    // 0x800078E8: jal         0x800049AC
    // 0x800078EC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_800049AC(rdram, ctx);
        goto after_0;
    // 0x800078EC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x800078F0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x800078F4: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800078F8: bne         $v0, $zero, L_80007A14
    if (ctx->r2 != 0) {
        // 0x800078FC: lui         $t7, 0x8013
        ctx->r15 = S32(0X8013 << 16);
            goto L_80007A14;
    }
    // 0x800078FC: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80007900: lw          $t7, 0x37A0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X37A0);
    // 0x80007904: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80007908: bne         $t7, $zero, L_800079DC
    if (ctx->r15 != 0) {
        // 0x8000790C: sltiu       $at, $v1, 0x7
        ctx->r1 = ctx->r3 < 0X7 ? 1 : 0;
            goto L_800079DC;
    }
    // 0x8000790C: sltiu       $at, $v1, 0x7
    ctx->r1 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80007910: lw          $t8, -0x2F98($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X2F98);
    // 0x80007914: lui         $t9, 0x3
    ctx->r25 = S32(0X3 << 16);
    // 0x80007918: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8000791C: lbu         $t9, -0x765E($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X765E);
    // 0x80007920: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80007924: bne         $t9, $at, L_8000798C
    if (ctx->r25 != ctx->r1) {
        // 0x80007928: lui         $t0, 0x8012
        ctx->r8 = S32(0X8012 << 16);
            goto L_8000798C;
    }
    // 0x80007928: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8000792C: lhu         $t0, 0xB78($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0XB78);
    // 0x80007930: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80007934: bne         $t0, $zero, L_80007990
    if (ctx->r8 != 0) {
        // 0x80007938: sltiu       $at, $v1, 0x7
        ctx->r1 = ctx->r3 < 0X7 ? 1 : 0;
            goto L_80007990;
    }
    // 0x80007938: sltiu       $at, $v1, 0x7
    ctx->r1 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x8000793C: lbu         $t1, -0x3092($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X3092);
    // 0x80007940: sltiu       $at, $v1, 0x7
    ctx->r1 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80007944: bne         $t1, $zero, L_8000798C
    if (ctx->r9 != 0) {
        // 0x80007948: nop
    
            goto L_8000798C;
    }
    // 0x80007948: nop

    // 0x8000794C: beq         $at, $zero, L_80007A14
    if (ctx->r1 == 0) {
        // 0x80007950: sll         $t2, $v1, 2
        ctx->r10 = S32(ctx->r3 << 2);
            goto L_80007A14;
    }
    // 0x80007950: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x80007954: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80007958: addu        $at, $at, $t2
    gpr jr_addend_80007964 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8000795C: lw          $t2, 0x3024($at)
    ctx->r10 = ADD32(ctx->r1, 0X3024);
    // 0x80007960: nop

    // 0x80007964: jr          $t2
    // 0x80007968: nop

    switch (jr_addend_80007964 >> 2) {
        case 0: goto L_8000796C; break;
        case 1: goto L_8000796C; break;
        case 2: goto L_8000796C; break;
        case 3: goto L_8000796C; break;
        case 4: goto L_8000797C; break;
        case 5: goto L_8000797C; break;
        case 6: goto L_8000797C; break;
        default: switch_error(__func__, 0x80007964, 0x800D3024);
    }
    // 0x80007968: nop

L_8000796C:
    // 0x8000796C: jal         0x80007E70
    // 0x80007970: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80007E70(rdram, ctx);
        goto after_1;
    // 0x80007970: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x80007974: b           L_800079CC
    // 0x80007978: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_800079CC;
    // 0x80007978: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_8000797C:
    // 0x8000797C: jal         0x8000815C
    // 0x80007980: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_8000815C(rdram, ctx);
        goto after_2;
    // 0x80007980: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
    // 0x80007984: b           L_800079CC
    // 0x80007988: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_800079CC;
    // 0x80007988: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_8000798C:
    // 0x8000798C: sltiu       $at, $v1, 0x7
    ctx->r1 = ctx->r3 < 0X7 ? 1 : 0;
L_80007990:
    // 0x80007990: beq         $at, $zero, L_80007A14
    if (ctx->r1 == 0) {
        // 0x80007994: sll         $t3, $v1, 2
        ctx->r11 = S32(ctx->r3 << 2);
            goto L_80007A14;
    }
    // 0x80007994: sll         $t3, $v1, 2
    ctx->r11 = S32(ctx->r3 << 2);
    // 0x80007998: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000799C: addu        $at, $at, $t3
    gpr jr_addend_800079A8 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800079A0: lw          $t3, 0x3040($at)
    ctx->r11 = ADD32(ctx->r1, 0X3040);
    // 0x800079A4: nop

    // 0x800079A8: jr          $t3
    // 0x800079AC: nop

    switch (jr_addend_800079A8 >> 2) {
        case 0: goto L_800079B0; break;
        case 1: goto L_800079B0; break;
        case 2: goto L_800079B0; break;
        case 3: goto L_800079B0; break;
        case 4: goto L_800079B0; break;
        case 5: goto L_800079C0; break;
        case 6: goto L_800079C0; break;
        default: switch_error(__func__, 0x800079A8, 0x800D3040);
    }
    // 0x800079AC: nop

L_800079B0:
    // 0x800079B0: jal         0x80007A24
    // 0x800079B4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80007A24(rdram, ctx);
        goto after_3;
    // 0x800079B4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_3:
    // 0x800079B8: b           L_800079CC
    // 0x800079BC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_800079CC;
    // 0x800079BC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_800079C0:
    // 0x800079C0: jal         0x80007E70
    // 0x800079C4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_80007E70(rdram, ctx);
        goto after_4;
    // 0x800079C4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_4:
    // 0x800079C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_800079CC:
    // 0x800079CC: jal         0x800095E8
    // 0x800079D0: nop

    func_800095E8(rdram, ctx);
        goto after_5;
    // 0x800079D0: nop

    after_5:
    // 0x800079D4: b           L_80007A18
    // 0x800079D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80007A18;
    // 0x800079D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800079DC:
    // 0x800079DC: beq         $at, $zero, L_80007A14
    if (ctx->r1 == 0) {
        // 0x800079E0: sll         $t4, $v1, 2
        ctx->r12 = S32(ctx->r3 << 2);
            goto L_80007A14;
    }
    // 0x800079E0: sll         $t4, $v1, 2
    ctx->r12 = S32(ctx->r3 << 2);
    // 0x800079E4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800079E8: addu        $at, $at, $t4
    gpr jr_addend_800079F4 = ctx->r12;
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800079EC: lw          $t4, 0x305C($at)
    ctx->r12 = ADD32(ctx->r1, 0X305C);
    // 0x800079F0: nop

    // 0x800079F4: jr          $t4
    // 0x800079F8: nop

    switch (jr_addend_800079F4 >> 2) {
        case 0: goto L_800079FC; break;
        case 1: goto L_800079FC; break;
        case 2: goto L_800079FC; break;
        case 3: goto L_800079FC; break;
        case 4: goto L_800079FC; break;
        case 5: goto L_80007A0C; break;
        case 6: goto L_80007A0C; break;
        default: switch_error(__func__, 0x800079F4, 0x800D305C);
    }
    // 0x800079F8: nop

L_800079FC:
    // 0x800079FC: jal         0x800082A0
    // 0x80007A00: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800082A0(rdram, ctx);
        goto after_6;
    // 0x80007A00: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_6:
    // 0x80007A04: b           L_80007A18
    // 0x80007A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80007A18;
    // 0x80007A08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80007A0C:
    // 0x80007A0C: jal         0x800083EC
    // 0x80007A10: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800083EC(rdram, ctx);
        goto after_7;
    // 0x80007A10: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_7:
L_80007A14:
    // 0x80007A14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80007A18:
    // 0x80007A18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80007A1C: jr          $ra
    // 0x80007A20: nop

    return;
    // 0x80007A20: nop

;}
RECOMP_FUNC void func_80007A24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007A24: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x80007A28: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80007A2C: lw          $t6, 0x37A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X37A4);
    // 0x80007A30: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80007A34: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80007A38: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80007A3C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80007A40: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80007A44: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80007A48: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80007A4C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80007A50: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80007A54: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80007A58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80007A5C: blez        $t6, L_80007E40
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80007A60: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_80007E40;
    }
    // 0x80007A60: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80007A64: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80007A68: addiu       $s0, $s0, 0xAE0
    ctx->r16 = ADD32(ctx->r16, 0XAE0);
L_80007A6C:
    // 0x80007A6C: jal         0x80003818
    // 0x80007A70: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    func_80003818(rdram, ctx);
        goto after_0;
    // 0x80007A70: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_0:
    // 0x80007A74: bne         $v0, $zero, L_80007E40
    if (ctx->r2 != 0) {
        // 0x80007A78: lui         $s3, 0x8013
        ctx->r19 = S32(0X8013 << 16);
            goto L_80007E40;
    }
    // 0x80007A78: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x80007A7C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x80007A80: addiu       $v0, $v0, 0x37B0
    ctx->r2 = ADD32(ctx->r2, 0X37B0);
    // 0x80007A84: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80007A88: lw          $s3, 0xAEC($s3)
    ctx->r19 = MEM_W(ctx->r19, 0XAEC);
    // 0x80007A8C: bgez        $t7, L_80007A9C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80007A90: sra         $t8, $t7, 1
        ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
            goto L_80007A9C;
    }
    // 0x80007A90: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x80007A94: addiu       $at, $t7, 0x1
    ctx->r1 = ADD32(ctx->r15, 0X1);
    // 0x80007A98: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_80007A9C:
    // 0x80007A9C: addiu       $t9, $s1, 0x3C0
    ctx->r25 = ADD32(ctx->r17, 0X3C0);
    // 0x80007AA0: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80007AA4: sw          $t9, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r25;
    // 0x80007AA8: addiu       $t9, $s1, 0x340
    ctx->r25 = ADD32(ctx->r17, 0X340);
    // 0x80007AAC: addiu       $t8, $s1, 0x240
    ctx->r24 = ADD32(ctx->r17, 0X240);
    // 0x80007AB0: addiu       $t7, $s1, 0x4C0
    ctx->r15 = ADD32(ctx->r17, 0X4C0);
    // 0x80007AB4: addiu       $t6, $s1, 0x480
    ctx->r14 = ADD32(ctx->r17, 0X480);
    // 0x80007AB8: sw          $t6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r14;
    // 0x80007ABC: sw          $t7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r15;
    // 0x80007AC0: sw          $t8, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r24;
    // 0x80007AC4: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x80007AC8: addiu       $t9, $s1, 0x540
    ctx->r25 = ADD32(ctx->r17, 0X540);
    // 0x80007ACC: addiu       $t8, $s1, 0x500
    ctx->r24 = ADD32(ctx->r17, 0X500);
    // 0x80007AD0: addiu       $t7, $s1, 0x440
    ctx->r15 = ADD32(ctx->r17, 0X440);
    // 0x80007AD4: addiu       $t6, $s1, 0x400
    ctx->r14 = ADD32(ctx->r17, 0X400);
    // 0x80007AD8: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
    // 0x80007ADC: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x80007AE0: sw          $t8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r24;
    // 0x80007AE4: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x80007AE8: addiu       $a0, $s1, 0x140
    ctx->r4 = ADD32(ctx->r17, 0X140);
    // 0x80007AEC: addiu       $a1, $s1, 0x80
    ctx->r5 = ADD32(ctx->r17, 0X80);
    // 0x80007AF0: addiu       $a2, $zero, 0x1E0
    ctx->r6 = ADD32(0, 0X1E0);
    // 0x80007AF4: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x80007AF8: addiu       $s4, $s1, 0x1C0
    ctx->r20 = ADD32(ctx->r17, 0X1C0);
    // 0x80007AFC: addiu       $s5, $s1, 0x200
    ctx->r21 = ADD32(ctx->r17, 0X200);
    // 0x80007B00: addiu       $s6, $s1, 0x2C0
    ctx->r22 = ADD32(ctx->r17, 0X2C0);
    // 0x80007B04: addiu       $s7, $s1, 0x300
    ctx->r23 = ADD32(ctx->r17, 0X300);
    // 0x80007B08: jal         0x80008538
    // 0x80007B0C: addiu       $fp, $s1, 0x380
    ctx->r30 = ADD32(ctx->r17, 0X380);
    func_80008538(rdram, ctx);
        goto after_1;
    // 0x80007B0C: addiu       $fp, $s1, 0x380
    ctx->r30 = ADD32(ctx->r17, 0X380);
    after_1:
    // 0x80007B10: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x80007B14: addiu       $v0, $v0, 0x37B0
    ctx->r2 = ADD32(ctx->r2, 0X37B0);
    // 0x80007B18: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80007B1C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80007B20: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80007B24: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80007B28: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80007B2C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x80007B30: jal         0x80008538
    // 0x80007B34: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_80008538(rdram, ctx);
        goto after_2;
    // 0x80007B34: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_2:
    // 0x80007B38: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80007B3C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80007B40: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x80007B44: jal         0x80008538
    // 0x80007B48: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_80008538(rdram, ctx);
        goto after_3;
    // 0x80007B48: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_3:
    // 0x80007B4C: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    // 0x80007B50: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80007B54: addiu       $a2, $zero, 0xFA
    ctx->r6 = ADD32(0, 0XFA);
    // 0x80007B58: jal         0x80008538
    // 0x80007B5C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_80008538(rdram, ctx);
        goto after_4;
    // 0x80007B5C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_4:
    // 0x80007B60: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x80007B64: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    // 0x80007B68: addiu       $a2, $zero, 0xFA
    ctx->r6 = ADD32(0, 0XFA);
    // 0x80007B6C: jal         0x80008538
    // 0x80007B70: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_80008538(rdram, ctx);
        goto after_5;
    // 0x80007B70: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_5:
    // 0x80007B74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80007B78: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x80007B7C: jal         0x800088CC
    // 0x80007B80: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_800088CC(rdram, ctx);
        goto after_6;
    // 0x80007B80: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_6:
    // 0x80007B84: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007B88: lui         $t9, 0x400
    ctx->r25 = S32(0X400 << 16);
    // 0x80007B8C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80007B90: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80007B94: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80007B98: addu        $t6, $s3, $at
    ctx->r14 = ADD32(ctx->r19, ctx->r1);
    // 0x80007B9C: ori         $t9, $t9, 0x617F
    ctx->r25 = ctx->r25 | 0X617F;
    // 0x80007BA0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80007BA4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80007BA8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007BAC: lui         $t9, 0x1A
    ctx->r25 = S32(0X1A << 16);
    // 0x80007BB0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80007BB4: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80007BB8: lui         $t8, 0xB100
    ctx->r24 = S32(0XB100 << 16);
    // 0x80007BBC: ori         $t8, $t8, 0x218
    ctx->r24 = ctx->r24 | 0X218;
    // 0x80007BC0: ori         $t9, $t9, 0x1802
    ctx->r25 = ctx->r25 | 0X1802;
    // 0x80007BC4: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80007BC8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80007BCC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007BD0: lui         $t8, 0x22
    ctx->r24 = S32(0X22 << 16);
    // 0x80007BD4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80007BD8: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80007BDC: lui         $t7, 0xB100
    ctx->r15 = S32(0XB100 << 16);
    // 0x80007BE0: ori         $t7, $t7, 0x220
    ctx->r15 = ctx->r15 | 0X220;
    // 0x80007BE4: ori         $t8, $t8, 0x2002
    ctx->r24 = ctx->r24 | 0X2002;
    // 0x80007BE8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80007BEC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80007BF0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007BF4: lui         $t7, 0xE
    ctx->r15 = S32(0XE << 16);
    // 0x80007BF8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80007BFC: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80007C00: lui         $t6, 0xB108
    ctx->r14 = S32(0XB108 << 16);
    // 0x80007C04: ori         $t6, $t6, 0xA0C
    ctx->r14 = ctx->r14 | 0XA0C;
    // 0x80007C08: ori         $t7, $t7, 0xC0A
    ctx->r15 = ctx->r15 | 0XC0A;
    // 0x80007C0C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80007C10: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80007C14: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007C18: lui         $t6, 0x16
    ctx->r14 = S32(0X16 << 16);
    // 0x80007C1C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80007C20: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80007C24: lui         $t9, 0xB110
    ctx->r25 = S32(0XB110 << 16);
    // 0x80007C28: ori         $t9, $t9, 0x1214
    ctx->r25 = ctx->r25 | 0X1214;
    // 0x80007C2C: ori         $t6, $t6, 0x1412
    ctx->r14 = ctx->r14 | 0X1412;
    // 0x80007C30: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80007C34: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80007C38: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007C3C: lui         $t9, 0x1E
    ctx->r25 = S32(0X1E << 16);
    // 0x80007C40: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80007C44: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80007C48: lui         $t8, 0xB118
    ctx->r24 = S32(0XB118 << 16);
    // 0x80007C4C: ori         $t8, $t8, 0x1A1C
    ctx->r24 = ctx->r24 | 0X1A1C;
    // 0x80007C50: ori         $t9, $t9, 0x1C1A
    ctx->r25 = ctx->r25 | 0X1C1A;
    // 0x80007C54: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80007C58: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80007C5C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007C60: lui         $t8, 0x26
    ctx->r24 = S32(0X26 << 16);
    // 0x80007C64: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80007C68: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80007C6C: lui         $t7, 0xB120
    ctx->r15 = S32(0XB120 << 16);
    // 0x80007C70: ori         $t7, $t7, 0x2224
    ctx->r15 = ctx->r15 | 0X2224;
    // 0x80007C74: ori         $t8, $t8, 0x2422
    ctx->r24 = ctx->r24 | 0X2422;
    // 0x80007C78: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80007C7C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80007C80: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007C84: lui         $t7, 0x2E
    ctx->r15 = S32(0X2E << 16);
    // 0x80007C88: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80007C8C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80007C90: lui         $t6, 0xB128
    ctx->r14 = S32(0XB128 << 16);
    // 0x80007C94: ori         $t6, $t6, 0x2A2C
    ctx->r14 = ctx->r14 | 0X2A2C;
    // 0x80007C98: ori         $t7, $t7, 0x2C2A
    ctx->r15 = ctx->r15 | 0X2C2A;
    // 0x80007C9C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80007CA0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80007CA4: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x80007CA8: lw          $s3, 0xAEC($s3)
    ctx->r19 = MEM_W(ctx->r19, 0XAEC);
    // 0x80007CAC: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x80007CB0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80007CB4: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x80007CB8: jal         0x80008538
    // 0x80007CBC: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_80008538(rdram, ctx);
        goto after_7;
    // 0x80007CBC: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_7:
    // 0x80007CC0: lw          $a1, 0x54($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X54);
    // 0x80007CC4: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80007CC8: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x80007CCC: jal         0x80008538
    // 0x80007CD0: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_80008538(rdram, ctx);
        goto after_8;
    // 0x80007CD0: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_8:
    // 0x80007CD4: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x80007CD8: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x80007CDC: addiu       $a2, $zero, 0x96
    ctx->r6 = ADD32(0, 0X96);
    // 0x80007CE0: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x80007CE4: jal         0x80008538
    // 0x80007CE8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80008538(rdram, ctx);
        goto after_9;
    // 0x80007CE8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_9:
    // 0x80007CEC: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x80007CF0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80007CF4: addiu       $a2, $zero, 0x96
    ctx->r6 = ADD32(0, 0X96);
    // 0x80007CF8: jal         0x80008538
    // 0x80007CFC: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_80008538(rdram, ctx);
        goto after_10;
    // 0x80007CFC: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_10:
    // 0x80007D00: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x80007D04: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80007D08: addiu       $a2, $zero, 0x96
    ctx->r6 = ADD32(0, 0X96);
    // 0x80007D0C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x80007D10: jal         0x80008538
    // 0x80007D14: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80008538(rdram, ctx);
        goto after_11;
    // 0x80007D14: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_11:
    // 0x80007D18: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x80007D1C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80007D20: addiu       $a2, $zero, 0x96
    ctx->r6 = ADD32(0, 0X96);
    // 0x80007D24: jal         0x80008538
    // 0x80007D28: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_80008538(rdram, ctx);
        goto after_12;
    // 0x80007D28: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_12:
    // 0x80007D2C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007D30: lui         $t9, 0x400
    ctx->r25 = S32(0X400 << 16);
    // 0x80007D34: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80007D38: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80007D3C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80007D40: addu        $t6, $s3, $at
    ctx->r14 = ADD32(ctx->r19, ctx->r1);
    // 0x80007D44: ori         $t9, $t9, 0x617F
    ctx->r25 = ctx->r25 | 0X617F;
    // 0x80007D48: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80007D4C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80007D50: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007D54: lui         $t9, 0x6
    ctx->r25 = S32(0X6 << 16);
    // 0x80007D58: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80007D5C: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80007D60: lui         $t8, 0xB100
    ctx->r24 = S32(0XB100 << 16);
    // 0x80007D64: ori         $t8, $t8, 0x204
    ctx->r24 = ctx->r24 | 0X204;
    // 0x80007D68: ori         $t9, $t9, 0x402
    ctx->r25 = ctx->r25 | 0X402;
    // 0x80007D6C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80007D70: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80007D74: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007D78: lui         $t8, 0xE
    ctx->r24 = S32(0XE << 16);
    // 0x80007D7C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80007D80: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80007D84: lui         $t7, 0xB108
    ctx->r15 = S32(0XB108 << 16);
    // 0x80007D88: ori         $t7, $t7, 0xA0C
    ctx->r15 = ctx->r15 | 0XA0C;
    // 0x80007D8C: ori         $t8, $t8, 0xC0A
    ctx->r24 = ctx->r24 | 0XC0A;
    // 0x80007D90: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80007D94: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80007D98: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007D9C: lui         $t7, 0x16
    ctx->r15 = S32(0X16 << 16);
    // 0x80007DA0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80007DA4: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80007DA8: lui         $t6, 0xB110
    ctx->r14 = S32(0XB110 << 16);
    // 0x80007DAC: ori         $t6, $t6, 0x1214
    ctx->r14 = ctx->r14 | 0X1214;
    // 0x80007DB0: ori         $t7, $t7, 0x1412
    ctx->r15 = ctx->r15 | 0X1412;
    // 0x80007DB4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80007DB8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80007DBC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007DC0: lui         $t6, 0x1E
    ctx->r14 = S32(0X1E << 16);
    // 0x80007DC4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80007DC8: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80007DCC: lui         $t9, 0xB118
    ctx->r25 = S32(0XB118 << 16);
    // 0x80007DD0: ori         $t9, $t9, 0x1A1C
    ctx->r25 = ctx->r25 | 0X1A1C;
    // 0x80007DD4: ori         $t6, $t6, 0x1C1A
    ctx->r14 = ctx->r14 | 0X1C1A;
    // 0x80007DD8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80007DDC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80007DE0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007DE4: lui         $t9, 0x26
    ctx->r25 = S32(0X26 << 16);
    // 0x80007DE8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80007DEC: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80007DF0: lui         $t8, 0xB120
    ctx->r24 = S32(0XB120 << 16);
    // 0x80007DF4: ori         $t8, $t8, 0x2224
    ctx->r24 = ctx->r24 | 0X2224;
    // 0x80007DF8: ori         $t9, $t9, 0x2422
    ctx->r25 = ctx->r25 | 0X2422;
    // 0x80007DFC: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80007E00: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80007E04: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007E08: lui         $t8, 0x2E
    ctx->r24 = S32(0X2E << 16);
    // 0x80007E0C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80007E10: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80007E14: lui         $t7, 0xB128
    ctx->r15 = S32(0XB128 << 16);
    // 0x80007E18: ori         $t7, $t7, 0x2A2C
    ctx->r15 = ctx->r15 | 0X2A2C;
    // 0x80007E1C: ori         $t8, $t8, 0x2C2A
    ctx->r24 = ctx->r24 | 0X2C2A;
    // 0x80007E20: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x80007E24: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80007E28: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80007E2C: lw          $t9, 0x37A4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X37A4);
    // 0x80007E30: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80007E34: slt         $at, $s2, $t9
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80007E38: bne         $at, $zero, L_80007A6C
    if (ctx->r1 != 0) {
        // 0x80007E3C: nop
    
            goto L_80007A6C;
    }
    // 0x80007E3C: nop

L_80007E40:
    // 0x80007E40: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80007E44: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80007E48: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80007E4C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80007E50: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80007E54: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80007E58: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80007E5C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80007E60: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80007E64: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80007E68: jr          $ra
    // 0x80007E6C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    return;
    // 0x80007E6C: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
;}
RECOMP_FUNC void func_80007E70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007E70: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x80007E74: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80007E78: lw          $t6, 0x37A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X37A4);
    // 0x80007E7C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80007E80: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80007E84: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80007E88: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80007E8C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80007E90: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80007E94: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80007E98: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80007E9C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80007EA0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80007EA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80007EA8: blez        $t6, L_8000812C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80007EAC: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8000812C;
    }
    // 0x80007EAC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80007EB0: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80007EB4: addiu       $s0, $s0, 0xAE0
    ctx->r16 = ADD32(ctx->r16, 0XAE0);
L_80007EB8:
    // 0x80007EB8: jal         0x80003818
    // 0x80007EBC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_80003818(rdram, ctx);
        goto after_0;
    // 0x80007EBC: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_0:
    // 0x80007EC0: bne         $v0, $zero, L_8000812C
    if (ctx->r2 != 0) {
        // 0x80007EC4: lui         $s3, 0x8013
        ctx->r19 = S32(0X8013 << 16);
            goto L_8000812C;
    }
    // 0x80007EC4: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x80007EC8: lw          $s3, 0xAEC($s3)
    ctx->r19 = MEM_W(ctx->r19, 0XAEC);
    // 0x80007ECC: addiu       $t7, $s1, 0x3C0
    ctx->r15 = ADD32(ctx->r17, 0X3C0);
    // 0x80007ED0: addiu       $t8, $s1, 0x400
    ctx->r24 = ADD32(ctx->r17, 0X400);
    // 0x80007ED4: addiu       $t9, $s1, 0x480
    ctx->r25 = ADD32(ctx->r17, 0X480);
    // 0x80007ED8: addiu       $t4, $s1, 0x4C0
    ctx->r12 = ADD32(ctx->r17, 0X4C0);
    // 0x80007EDC: addiu       $t5, $s1, 0x500
    ctx->r13 = ADD32(ctx->r17, 0X500);
    // 0x80007EE0: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
    // 0x80007EE4: sw          $t4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r12;
    // 0x80007EE8: sw          $t9, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r25;
    // 0x80007EEC: sw          $t8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r24;
    // 0x80007EF0: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x80007EF4: addiu       $a0, $s1, 0x80
    ctx->r4 = ADD32(ctx->r17, 0X80);
    // 0x80007EF8: addiu       $a1, $s1, 0x140
    ctx->r5 = ADD32(ctx->r17, 0X140);
    // 0x80007EFC: addiu       $a2, $zero, 0x1E0
    ctx->r6 = ADD32(0, 0X1E0);
    // 0x80007F00: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x80007F04: addiu       $s4, $s1, 0x1C0
    ctx->r20 = ADD32(ctx->r17, 0X1C0);
    // 0x80007F08: addiu       $s5, $s1, 0x200
    ctx->r21 = ADD32(ctx->r17, 0X200);
    // 0x80007F0C: addiu       $s6, $s1, 0x2C0
    ctx->r22 = ADD32(ctx->r17, 0X2C0);
    // 0x80007F10: addiu       $s7, $s1, 0x300
    ctx->r23 = ADD32(ctx->r17, 0X300);
    // 0x80007F14: jal         0x80008538
    // 0x80007F18: addiu       $fp, $s1, 0x380
    ctx->r30 = ADD32(ctx->r17, 0X380);
    func_80008538(rdram, ctx);
        goto after_1;
    // 0x80007F18: addiu       $fp, $s1, 0x380
    ctx->r30 = ADD32(ctx->r17, 0X380);
    after_1:
    // 0x80007F1C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80007F20: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80007F24: addiu       $a2, $zero, 0x96
    ctx->r6 = ADD32(0, 0X96);
    // 0x80007F28: jal         0x80008538
    // 0x80007F2C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_80008538(rdram, ctx);
        goto after_2;
    // 0x80007F2C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_2:
    // 0x80007F30: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80007F34: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x80007F38: addiu       $a2, $zero, 0x96
    ctx->r6 = ADD32(0, 0X96);
    // 0x80007F3C: jal         0x80008538
    // 0x80007F40: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_80008538(rdram, ctx);
        goto after_3;
    // 0x80007F40: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_3:
    // 0x80007F44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80007F48: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    // 0x80007F4C: jal         0x800088CC
    // 0x80007F50: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_800088CC(rdram, ctx);
        goto after_4;
    // 0x80007F50: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_4:
    // 0x80007F54: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007F58: lui         $t7, 0x400
    ctx->r15 = S32(0X400 << 16);
    // 0x80007F5C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80007F60: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80007F64: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80007F68: addu        $t8, $s3, $at
    ctx->r24 = ADD32(ctx->r19, ctx->r1);
    // 0x80007F6C: ori         $t7, $t7, 0x40FF
    ctx->r15 = ctx->r15 | 0X40FF;
    // 0x80007F70: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80007F74: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80007F78: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007F7C: lui         $t4, 0xB100
    ctx->r12 = S32(0XB100 << 16);
    // 0x80007F80: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80007F84: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80007F88: lui         $t5, 0x6
    ctx->r13 = S32(0X6 << 16);
    // 0x80007F8C: ori         $t5, $t5, 0x402
    ctx->r13 = ctx->r13 | 0X402;
    // 0x80007F90: ori         $t4, $t4, 0x204
    ctx->r12 = ctx->r12 | 0X204;
    // 0x80007F94: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80007F98: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x80007F9C: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007FA0: lui         $t8, 0xE
    ctx->r24 = S32(0XE << 16);
    // 0x80007FA4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80007FA8: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80007FAC: lui         $t7, 0xB108
    ctx->r15 = S32(0XB108 << 16);
    // 0x80007FB0: ori         $t7, $t7, 0xA0C
    ctx->r15 = ctx->r15 | 0XA0C;
    // 0x80007FB4: ori         $t8, $t8, 0xC0A
    ctx->r24 = ctx->r24 | 0XC0A;
    // 0x80007FB8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80007FBC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80007FC0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007FC4: lui         $t5, 0x16
    ctx->r13 = S32(0X16 << 16);
    // 0x80007FC8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80007FCC: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80007FD0: lui         $t4, 0xB110
    ctx->r12 = S32(0XB110 << 16);
    // 0x80007FD4: ori         $t4, $t4, 0x1214
    ctx->r12 = ctx->r12 | 0X1214;
    // 0x80007FD8: ori         $t5, $t5, 0x1412
    ctx->r13 = ctx->r13 | 0X1412;
    // 0x80007FDC: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x80007FE0: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80007FE4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80007FE8: lui         $t7, 0xB118
    ctx->r15 = S32(0XB118 << 16);
    // 0x80007FEC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80007FF0: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80007FF4: lui         $t8, 0x1E
    ctx->r24 = S32(0X1E << 16);
    // 0x80007FF8: ori         $t8, $t8, 0x1C1A
    ctx->r24 = ctx->r24 | 0X1C1A;
    // 0x80007FFC: ori         $t7, $t7, 0x1A1C
    ctx->r15 = ctx->r15 | 0X1A1C;
    // 0x80008000: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80008004: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80008008: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x8000800C: lw          $s3, 0xAEC($s3)
    ctx->r19 = MEM_W(ctx->r19, 0XAEC);
    // 0x80008010: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80008014: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80008018: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x8000801C: jal         0x80008538
    // 0x80008020: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_80008538(rdram, ctx);
        goto after_5;
    // 0x80008020: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_5:
    // 0x80008024: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80008028: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x8000802C: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x80008030: jal         0x80008538
    // 0x80008034: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_80008538(rdram, ctx);
        goto after_6;
    // 0x80008034: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_6:
    // 0x80008038: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8000803C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x80008040: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x80008044: jal         0x80008538
    // 0x80008048: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_80008538(rdram, ctx);
        goto after_7;
    // 0x80008048: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_7:
    // 0x8000804C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80008050: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80008054: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x80008058: jal         0x80008538
    // 0x8000805C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_80008538(rdram, ctx);
        goto after_8;
    // 0x8000805C: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_8:
    // 0x80008060: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80008064: lui         $t4, 0x400
    ctx->r12 = S32(0X400 << 16);
    // 0x80008068: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8000806C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80008070: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80008074: addu        $t5, $s3, $at
    ctx->r13 = ADD32(ctx->r19, ctx->r1);
    // 0x80008078: ori         $t4, $t4, 0x40FF
    ctx->r12 = ctx->r12 | 0X40FF;
    // 0x8000807C: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80008080: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x80008084: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80008088: lui         $t7, 0xB100
    ctx->r15 = S32(0XB100 << 16);
    // 0x8000808C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80008090: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x80008094: lui         $t8, 0x6
    ctx->r24 = S32(0X6 << 16);
    // 0x80008098: ori         $t8, $t8, 0x402
    ctx->r24 = ctx->r24 | 0X402;
    // 0x8000809C: ori         $t7, $t7, 0x204
    ctx->r15 = ctx->r15 | 0X204;
    // 0x800080A0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800080A4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800080A8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800080AC: lui         $t5, 0xE
    ctx->r13 = S32(0XE << 16);
    // 0x800080B0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800080B4: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x800080B8: lui         $t4, 0xB108
    ctx->r12 = S32(0XB108 << 16);
    // 0x800080BC: ori         $t4, $t4, 0xA0C
    ctx->r12 = ctx->r12 | 0XA0C;
    // 0x800080C0: ori         $t5, $t5, 0xC0A
    ctx->r13 = ctx->r13 | 0XC0A;
    // 0x800080C4: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x800080C8: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x800080CC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800080D0: lui         $t8, 0x16
    ctx->r24 = S32(0X16 << 16);
    // 0x800080D4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800080D8: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x800080DC: lui         $t7, 0xB110
    ctx->r15 = S32(0XB110 << 16);
    // 0x800080E0: ori         $t7, $t7, 0x1214
    ctx->r15 = ctx->r15 | 0X1214;
    // 0x800080E4: ori         $t8, $t8, 0x1412
    ctx->r24 = ctx->r24 | 0X1412;
    // 0x800080E8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800080EC: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800080F0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800080F4: lui         $t4, 0xB118
    ctx->r12 = S32(0XB118 << 16);
    // 0x800080F8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800080FC: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80008100: lui         $t5, 0x1E
    ctx->r13 = S32(0X1E << 16);
    // 0x80008104: ori         $t5, $t5, 0x1C1A
    ctx->r13 = ctx->r13 | 0X1C1A;
    // 0x80008108: ori         $t4, $t4, 0x1A1C
    ctx->r12 = ctx->r12 | 0X1A1C;
    // 0x8000810C: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80008110: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80008114: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x80008118: lw          $t6, 0x37A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X37A4);
    // 0x8000811C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80008120: slt         $at, $s2, $t6
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80008124: bne         $at, $zero, L_80007EB8
    if (ctx->r1 != 0) {
        // 0x80008128: nop
    
            goto L_80007EB8;
    }
    // 0x80008128: nop

L_8000812C:
    // 0x8000812C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80008130: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80008134: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80008138: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8000813C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80008140: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80008144: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80008148: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8000814C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80008150: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80008154: jr          $ra
    // 0x80008158: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    return;
    // 0x80008158: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_8000815C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000815C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80008160: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80008164: lw          $t6, 0x37A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X37A4);
    // 0x80008168: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8000816C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80008170: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80008174: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80008178: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8000817C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80008180: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80008184: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80008188: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8000818C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80008190: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80008194: blez        $t6, L_80008270
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80008198: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80008270;
    }
    // 0x80008198: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8000819C: lui         $s7, 0x400
    ctx->r23 = S32(0X400 << 16);
    // 0x800081A0: lui         $s6, 0x8013
    ctx->r22 = S32(0X8013 << 16);
    // 0x800081A4: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x800081A8: addiu       $s0, $s0, 0xAE0
    ctx->r16 = ADD32(ctx->r16, 0XAE0);
    // 0x800081AC: addiu       $s6, $s6, 0xAEC
    ctx->r22 = ADD32(ctx->r22, 0XAEC);
    // 0x800081B0: ori         $s7, $s7, 0x207F
    ctx->r23 = ctx->r23 | 0X207F;
    // 0x800081B4: lui         $fp, 0x8000
    ctx->r30 = S32(0X8000 << 16);
L_800081B8:
    // 0x800081B8: jal         0x80003818
    // 0x800081BC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80003818(rdram, ctx);
        goto after_0;
    // 0x800081BC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x800081C0: bne         $v0, $zero, L_80008270
    if (ctx->r2 != 0) {
        // 0x800081C4: addiu       $a0, $s4, 0x400
        ctx->r4 = ADD32(ctx->r20, 0X400);
            goto L_80008270;
    }
    // 0x800081C4: addiu       $a0, $s4, 0x400
    ctx->r4 = ADD32(ctx->r20, 0X400);
    // 0x800081C8: lw          $s3, 0x0($s6)
    ctx->r19 = MEM_W(ctx->r22, 0X0);
    // 0x800081CC: addiu       $s2, $s4, 0x140
    ctx->r18 = ADD32(ctx->r20, 0X140);
    // 0x800081D0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800081D4: addiu       $a2, $zero, 0xFA
    ctx->r6 = ADD32(0, 0XFA);
    // 0x800081D8: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    // 0x800081DC: jal         0x80008538
    // 0x800081E0: addiu       $s5, $s4, 0x500
    ctx->r21 = ADD32(ctx->r20, 0X500);
    func_80008538(rdram, ctx);
        goto after_1;
    // 0x800081E0: addiu       $s5, $s4, 0x500
    ctx->r21 = ADD32(ctx->r20, 0X500);
    after_1:
    // 0x800081E4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800081E8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800081EC: addiu       $a2, $zero, 0xFA
    ctx->r6 = ADD32(0, 0XFA);
    // 0x800081F0: jal         0x80008538
    // 0x800081F4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    func_80008538(rdram, ctx);
        goto after_2;
    // 0x800081F4: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_2:
    // 0x800081F8: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x800081FC: addu        $t8, $s3, $fp
    ctx->r24 = ADD32(ctx->r19, ctx->r30);
    // 0x80008200: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80008204: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x80008208: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8000820C: sw          $s7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r23;
    // 0x80008210: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80008214: lui         $t0, 0xB102
    ctx->r8 = S32(0XB102 << 16);
    // 0x80008218: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8000821C: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x80008220: lui         $t1, 0x2
    ctx->r9 = S32(0X2 << 16);
    // 0x80008224: ori         $t1, $t1, 0x400
    ctx->r9 = ctx->r9 | 0X400;
    // 0x80008228: ori         $t0, $t0, 0x604
    ctx->r8 = ctx->r8 | 0X604;
    // 0x8000822C: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x80008230: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80008234: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80008238: lui         $t3, 0xB10A
    ctx->r11 = S32(0XB10A << 16);
    // 0x8000823C: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x80008240: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x80008244: lui         $t4, 0xA
    ctx->r12 = S32(0XA << 16);
    // 0x80008248: ori         $t4, $t4, 0xC08
    ctx->r12 = ctx->r12 | 0XC08;
    // 0x8000824C: ori         $t3, $t3, 0xE0C
    ctx->r11 = ctx->r11 | 0XE0C;
    // 0x80008250: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x80008254: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80008258: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8000825C: lw          $t5, 0x37A4($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X37A4);
    // 0x80008260: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80008264: slt         $at, $s1, $t5
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80008268: bne         $at, $zero, L_800081B8
    if (ctx->r1 != 0) {
        // 0x8000826C: nop
    
            goto L_800081B8;
    }
    // 0x8000826C: nop

L_80008270:
    // 0x80008270: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80008274: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80008278: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8000827C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80008280: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80008284: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80008288: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8000828C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80008290: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80008294: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80008298: jr          $ra
    // 0x8000829C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8000829C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800082A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800082A0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800082A4: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800082A8: lui         $s7, 0x8013
    ctx->r23 = S32(0X8013 << 16);
    // 0x800082AC: addiu       $s7, $s7, 0x37A4
    ctx->r23 = ADD32(ctx->r23, 0X37A4);
    // 0x800082B0: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x800082B4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800082B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800082BC: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x800082C0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800082C4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800082C8: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800082CC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800082D0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800082D4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800082D8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800082DC: blez        $t6, L_800083BC
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800082E0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_800083BC;
    }
    // 0x800082E0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x800082E4: lui         $fp, 0x8013
    ctx->r30 = S32(0X8013 << 16);
    // 0x800082E8: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800082EC: addiu       $s1, $s1, 0xAE0
    ctx->r17 = ADD32(ctx->r17, 0XAE0);
    // 0x800082F0: addiu       $fp, $fp, 0xAEC
    ctx->r30 = ADD32(ctx->r30, 0XAEC);
L_800082F4:
    // 0x800082F4: jal         0x80003818
    // 0x800082F8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80003818(rdram, ctx);
        goto after_0;
    // 0x800082F8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x800082FC: bne         $v0, $zero, L_800083BC
    if (ctx->r2 != 0) {
        // 0x80008300: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_800083BC;
    }
    // 0x80008300: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80008304: lw          $s4, 0x0($fp)
    ctx->r20 = MEM_W(ctx->r30, 0X0);
    // 0x80008308: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8000830C: addiu       $s5, $s3, 0x440
    ctx->r21 = ADD32(ctx->r19, 0X440);
    // 0x80008310: addiu       $s2, $s3, 0x140
    ctx->r18 = ADD32(ctx->r19, 0X140);
    // 0x80008314: jal         0x80009238
    // 0x80008318: addiu       $s6, $s3, 0x540
    ctx->r22 = ADD32(ctx->r19, 0X540);
    func_80009238(rdram, ctx);
        goto after_1;
    // 0x80008318: addiu       $s6, $s3, 0x540
    ctx->r22 = ADD32(ctx->r19, 0X540);
    after_1:
    // 0x8000831C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80008320: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80008324: jal         0x80008CAC
    // 0x80008328: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_80008CAC(rdram, ctx);
        goto after_2;
    // 0x80008328: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x8000832C: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80008330: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80008334: jal         0x80008CAC
    // 0x80008338: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_80008CAC(rdram, ctx);
        goto after_3;
    // 0x80008338: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_3:
    // 0x8000833C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80008340: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x80008344: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80008348: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x8000834C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80008350: addu        $t9, $s4, $at
    ctx->r25 = ADD32(ctx->r20, ctx->r1);
    // 0x80008354: ori         $t8, $t8, 0x207F
    ctx->r24 = ctx->r24 | 0X207F;
    // 0x80008358: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000835C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80008360: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80008364: lui         $t1, 0xB102
    ctx->r9 = S32(0XB102 << 16);
    // 0x80008368: addiu       $t0, $v0, 0x8
    ctx->r8 = ADD32(ctx->r2, 0X8);
    // 0x8000836C: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x80008370: lui         $t2, 0x2
    ctx->r10 = S32(0X2 << 16);
    // 0x80008374: ori         $t2, $t2, 0x400
    ctx->r10 = ctx->r10 | 0X400;
    // 0x80008378: ori         $t1, $t1, 0x604
    ctx->r9 = ctx->r9 | 0X604;
    // 0x8000837C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x80008380: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x80008384: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80008388: lui         $t4, 0xB10A
    ctx->r12 = S32(0XB10A << 16);
    // 0x8000838C: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x80008390: sw          $t3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r11;
    // 0x80008394: lui         $t5, 0xA
    ctx->r13 = S32(0XA << 16);
    // 0x80008398: ori         $t5, $t5, 0xC08
    ctx->r13 = ctx->r13 | 0XC08;
    // 0x8000839C: ori         $t4, $t4, 0xE0C
    ctx->r12 = ctx->r12 | 0XE0C;
    // 0x800083A0: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x800083A4: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x800083A8: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x800083AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800083B0: slt         $at, $s0, $t6
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x800083B4: bne         $at, $zero, L_800082F4
    if (ctx->r1 != 0) {
        // 0x800083B8: nop
    
            goto L_800082F4;
    }
    // 0x800083B8: nop

L_800083BC:
    // 0x800083BC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800083C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800083C4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800083C8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800083CC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800083D0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800083D4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800083D8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800083DC: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800083E0: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800083E4: jr          $ra
    // 0x800083E8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800083E8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800083EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800083EC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800083F0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800083F4: lui         $s7, 0x8013
    ctx->r23 = S32(0X8013 << 16);
    // 0x800083F8: addiu       $s7, $s7, 0x37A4
    ctx->r23 = ADD32(ctx->r23, 0X37A4);
    // 0x800083FC: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x80008400: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80008404: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80008408: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8000840C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80008410: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80008414: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80008418: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8000841C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80008420: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80008424: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80008428: blez        $t6, L_80008508
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8000842C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80008508;
    }
    // 0x8000842C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80008430: lui         $fp, 0x8013
    ctx->r30 = S32(0X8013 << 16);
    // 0x80008434: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x80008438: addiu       $s1, $s1, 0xAE0
    ctx->r17 = ADD32(ctx->r17, 0XAE0);
    // 0x8000843C: addiu       $fp, $fp, 0xAEC
    ctx->r30 = ADD32(ctx->r30, 0XAEC);
L_80008440:
    // 0x80008440: jal         0x80003818
    // 0x80008444: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_80003818(rdram, ctx);
        goto after_0;
    // 0x80008444: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x80008448: bne         $v0, $zero, L_80008508
    if (ctx->r2 != 0) {
        // 0x8000844C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80008508;
    }
    // 0x8000844C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80008450: lw          $s4, 0x0($fp)
    ctx->r20 = MEM_W(ctx->r30, 0X0);
    // 0x80008454: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80008458: addiu       $s5, $s3, 0x400
    ctx->r21 = ADD32(ctx->r19, 0X400);
    // 0x8000845C: addiu       $s2, $s3, 0x140
    ctx->r18 = ADD32(ctx->r19, 0X140);
    // 0x80008460: jal         0x80009238
    // 0x80008464: addiu       $s6, $s3, 0x500
    ctx->r22 = ADD32(ctx->r19, 0X500);
    func_80009238(rdram, ctx);
        goto after_1;
    // 0x80008464: addiu       $s6, $s3, 0x500
    ctx->r22 = ADD32(ctx->r19, 0X500);
    after_1:
    // 0x80008468: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8000846C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80008470: jal         0x80008CAC
    // 0x80008474: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_80008CAC(rdram, ctx);
        goto after_2;
    // 0x80008474: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_2:
    // 0x80008478: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x8000847C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80008480: jal         0x80008CAC
    // 0x80008484: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_80008CAC(rdram, ctx);
        goto after_3;
    // 0x80008484: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_3:
    // 0x80008488: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8000848C: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x80008490: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80008494: sw          $t7, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r15;
    // 0x80008498: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000849C: addu        $t9, $s4, $at
    ctx->r25 = ADD32(ctx->r20, ctx->r1);
    // 0x800084A0: ori         $t8, $t8, 0x207F
    ctx->r24 = ctx->r24 | 0X207F;
    // 0x800084A4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800084A8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800084AC: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x800084B0: lui         $t1, 0xB102
    ctx->r9 = S32(0XB102 << 16);
    // 0x800084B4: addiu       $t0, $v0, 0x8
    ctx->r8 = ADD32(ctx->r2, 0X8);
    // 0x800084B8: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x800084BC: lui         $t2, 0x2
    ctx->r10 = S32(0X2 << 16);
    // 0x800084C0: ori         $t2, $t2, 0x400
    ctx->r10 = ctx->r10 | 0X400;
    // 0x800084C4: ori         $t1, $t1, 0x604
    ctx->r9 = ctx->r9 | 0X604;
    // 0x800084C8: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x800084CC: sw          $t2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r10;
    // 0x800084D0: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x800084D4: lui         $t4, 0xB10A
    ctx->r12 = S32(0XB10A << 16);
    // 0x800084D8: addiu       $t3, $v0, 0x8
    ctx->r11 = ADD32(ctx->r2, 0X8);
    // 0x800084DC: sw          $t3, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r11;
    // 0x800084E0: lui         $t5, 0xA
    ctx->r13 = S32(0XA << 16);
    // 0x800084E4: ori         $t5, $t5, 0xC08
    ctx->r13 = ctx->r13 | 0XC08;
    // 0x800084E8: ori         $t4, $t4, 0xE0C
    ctx->r12 = ctx->r12 | 0XE0C;
    // 0x800084EC: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x800084F0: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x800084F4: lw          $t6, 0x0($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X0);
    // 0x800084F8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800084FC: slt         $at, $s0, $t6
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x80008500: bne         $at, $zero, L_80008440
    if (ctx->r1 != 0) {
        // 0x80008504: nop
    
            goto L_80008440;
    }
    // 0x80008504: nop

L_80008508:
    // 0x80008508: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8000850C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80008510: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80008514: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80008518: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8000851C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80008520: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80008524: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80008528: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8000852C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80008530: jr          $ra
    // 0x80008534: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80008534: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80008538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80008538: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8000853C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80008540: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80008544: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80008548: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8000854C: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x80008550: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    // 0x80008554: jal         0x8000916C
    // 0x80008558: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    func_8000916C(rdram, ctx);
        goto after_0;
    // 0x80008558: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x8000855C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80008560: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    // 0x80008564: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x80008568: jal         0x8000916C
    // 0x8000856C: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    func_8000916C(rdram, ctx);
        goto after_1;
    // 0x8000856C: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x80008570: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80008574: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80008578: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8000857C: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80008580: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80008584: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80008588: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8000858C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80008590: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    // 0x80008594: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80008598: jal         0x8007FA40
    // 0x8000859C: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    func_8007FA40(rdram, ctx);
        goto after_2;
    // 0x8000859C: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    after_2:
    // 0x800085A0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x800085A4: lwc1        $f2, 0x24($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800085A8: c.eq.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl == ctx->f12.fl;
    // 0x800085AC: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800085B0: bc1t        L_800085E8
    if (c1cs) {
        // 0x800085B4: nop
    
            goto L_800085E8;
    }
    // 0x800085B4: nop

    // 0x800085B8: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x800085BC: nop

    // 0x800085C0: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x800085C4: nop

    // 0x800085C8: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800085CC: mul.s       $f8, $f2, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x800085D0: nop

    // 0x800085D4: mul.s       $f10, $f14, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f12.fl);
    // 0x800085D8: nop

    // 0x800085DC: div.s       $f2, $f8, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x800085E0: b           L_800085F0
    // 0x800085E4: div.s       $f14, $f10, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
        goto L_800085F0;
    // 0x800085E4: div.s       $f14, $f10, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
L_800085E8:
    // 0x800085E8: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
    // 0x800085EC: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
L_800085F0:
    // 0x800085F0: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800085F4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800085F8: sub.s       $f4, $f18, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f14.fl;
    // 0x800085FC: lwc1        $f1, 0x3078($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3078);
    // 0x80008600: sub.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f2.fl;
    // 0x80008604: lwc1        $f0, 0x307C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X307C);
    // 0x80008608: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8000860C: nop

    // 0x80008610: div.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f0.d);
    // 0x80008614: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x80008618: addiu       $v0, $v0, 0xAEC
    ctx->r2 = ADD32(ctx->r2, 0XAEC);
    // 0x8000861C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80008620: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x80008624: addiu       $v1, $v1, 0x37B0
    ctx->r3 = ADD32(ctx->r3, 0X37B0);
    // 0x80008628: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8000862C: nop

    // 0x80008630: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80008634: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80008638: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000863C: nop

    // 0x80008640: cvt.w.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = CVT_W_D(ctx->f10.d);
    // 0x80008644: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x80008648: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8000864C: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x80008650: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80008654: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x80008658: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x8000865C: sub.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x80008660: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80008664: nop

    // 0x80008668: div.d       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x8000866C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80008670: nop

    // 0x80008674: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80008678: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000867C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008680: nop

    // 0x80008684: cvt.w.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_D(ctx->f18.d);
    // 0x80008688: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x8000868C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80008690: sh          $t1, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r9;
    // 0x80008694: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80008698: nop

    // 0x8000869C: sh          $zero, 0x2($t3)
    MEM_H(0X2, ctx->r11) = 0;
    // 0x800086A0: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x800086A4: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x800086A8: nop

    // 0x800086AC: sb          $t4, 0xF($t5)
    MEM_B(0XF, ctx->r13) = ctx->r12;
    // 0x800086B0: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800086B4: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800086B8: add.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x800086BC: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x800086C0: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x800086C4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800086C8: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x800086CC: nop

    // 0x800086D0: div.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f0.d);
    // 0x800086D4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800086D8: nop

    // 0x800086DC: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x800086E0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800086E4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800086E8: nop

    // 0x800086EC: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x800086F0: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x800086F4: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x800086F8: sh          $t9, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r25;
    // 0x800086FC: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80008700: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80008704: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x80008708: sub.s       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x8000870C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80008710: nop

    // 0x80008714: div.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x80008718: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x8000871C: nop

    // 0x80008720: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80008724: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80008728: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000872C: nop

    // 0x80008730: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x80008734: mfc1        $t2, $f8
    ctx->r10 = (int32_t)ctx->f8.u32l;
    // 0x80008738: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x8000873C: sh          $t2, 0x4($t3)
    MEM_H(0X4, ctx->r11) = ctx->r10;
    // 0x80008740: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x80008744: nop

    // 0x80008748: sh          $zero, 0x2($t4)
    MEM_H(0X2, ctx->r12) = 0;
    // 0x8000874C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80008750: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80008754: nop

    // 0x80008758: sb          $t5, 0xF($t6)
    MEM_B(0XF, ctx->r14) = ctx->r13;
    // 0x8000875C: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80008760: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80008764: sub.s       $f18, $f10, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x80008768: addiu       $t8, $t7, 0x10
    ctx->r24 = ADD32(ctx->r15, 0X10);
    // 0x8000876C: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x80008770: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80008774: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80008778: nop

    // 0x8000877C: div.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x80008780: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80008784: nop

    // 0x80008788: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8000878C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80008790: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008794: nop

    // 0x80008798: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x8000879C: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x800087A0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800087A4: sh          $t0, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r8;
    // 0x800087A8: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x800087AC: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x800087B0: add.s       $f4, $f18, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f2.fl;
    // 0x800087B4: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x800087B8: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800087BC: nop

    // 0x800087C0: div.d       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = DIV_D(ctx->f8.d, ctx->f0.d);
    // 0x800087C4: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800087C8: nop

    // 0x800087CC: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800087D0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800087D4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800087D8: nop

    // 0x800087DC: cvt.w.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.u32l = CVT_W_D(ctx->f10.d);
    // 0x800087E0: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x800087E4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800087E8: sh          $t3, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r11;
    // 0x800087EC: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x800087F0: nop

    // 0x800087F4: sh          $zero, 0x2($t5)
    MEM_H(0X2, ctx->r13) = 0;
    // 0x800087F8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x800087FC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80008800: nop

    // 0x80008804: sb          $t6, 0xF($t7)
    MEM_B(0XF, ctx->r15) = ctx->r14;
    // 0x80008808: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8000880C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80008810: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x80008814: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x80008818: add.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f2.fl;
    // 0x8000881C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80008820: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80008824: nop

    // 0x80008828: div.d       $f18, $f10, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x8000882C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80008830: nop

    // 0x80008834: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80008838: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000883C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008840: nop

    // 0x80008844: cvt.w.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_D(ctx->f18.d);
    // 0x80008848: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x8000884C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80008850: sh          $t1, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r9;
    // 0x80008854: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80008858: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x8000885C: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x80008860: add.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x80008864: cvt.d.s     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f18.d = CVT_D_S(ctx->f10.fl);
    // 0x80008868: nop

    // 0x8000886C: div.d       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f18.d, ctx->f0.d);
    // 0x80008870: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80008874: nop

    // 0x80008878: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8000887C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80008880: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008884: nop

    // 0x80008888: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x8000888C: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x80008890: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80008894: sh          $t4, 0x4($t5)
    MEM_H(0X4, ctx->r13) = ctx->r12;
    // 0x80008898: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8000889C: nop

    // 0x800088A0: sh          $zero, 0x2($t6)
    MEM_H(0X2, ctx->r14) = 0;
    // 0x800088A4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800088A8: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x800088AC: nop

    // 0x800088B0: sb          $t7, 0xF($t8)
    MEM_B(0XF, ctx->r24) = ctx->r15;
    // 0x800088B4: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x800088B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800088BC: addiu       $t0, $t9, 0x10
    ctx->r8 = ADD32(ctx->r25, 0X10);
    // 0x800088C0: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x800088C4: jr          $ra
    // 0x800088C8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800088C8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800088CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800088CC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800088D0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800088D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800088D8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800088DC: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x800088E0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x800088E4: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x800088E8: addiu       $a0, $a0, 0x140
    ctx->r4 = ADD32(ctx->r4, 0X140);
    // 0x800088EC: jal         0x8000916C
    // 0x800088F0: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    func_8000916C(rdram, ctx);
        goto after_0;
    // 0x800088F0: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x800088F4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x800088F8: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x800088FC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x80008900: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x80008904: jal         0x8000916C
    // 0x80008908: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_8000916C(rdram, ctx);
        goto after_1;
    // 0x80008908: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_1:
    // 0x8000890C: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80008910: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80008914: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80008918: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000891C: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80008920: mul.s       $f18, $f0, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80008924: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80008928: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8000892C: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x80008930: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80008934: jal         0x8007FA40
    // 0x80008938: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    func_8007FA40(rdram, ctx);
        goto after_2;
    // 0x80008938: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    after_2:
    // 0x8000893C: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80008940: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80008944: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x80008948: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000894C: bc1t        L_80008984
    if (c1cs) {
        // 0x80008950: lui         $at, 0x800D
        ctx->r1 = S32(0X800D << 16);
            goto L_80008984;
    }
    // 0x80008950: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80008954: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80008958: nop

    // 0x8000895C: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80008960: nop

    // 0x80008964: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80008968: mul.s       $f8, $f14, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x8000896C: nop

    // 0x80008970: mul.s       $f10, $f16, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x80008974: nop

    // 0x80008978: div.s       $f14, $f8, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8000897C: b           L_8000898C
    // 0x80008980: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
        goto L_8000898C;
    // 0x80008980: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
L_80008984:
    // 0x80008984: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x80008988: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
L_8000898C:
    // 0x8000898C: lwc1        $f1, 0x3080($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3080);
    // 0x80008990: lwc1        $f0, 0x3084($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X3084);
    // 0x80008994: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80008998: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8000899C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800089A0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800089A4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x800089A8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800089AC: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x800089B0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800089B4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800089B8: addiu       $v0, $v0, 0xAEC
    ctx->r2 = ADD32(ctx->r2, 0XAEC);
    // 0x800089BC: div.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f12.fl);
    // 0x800089C0: sub.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x800089C4: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x800089C8: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x800089CC: addiu       $v1, $v1, 0x37B0
    ctx->r3 = ADD32(ctx->r3, 0X37B0);
    // 0x800089D0: sub.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x800089D4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x800089D8: nop

    // 0x800089DC: div.d       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f8.d, ctx->f0.d);
    // 0x800089E0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800089E4: nop

    // 0x800089E8: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800089EC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800089F0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800089F4: nop

    // 0x800089F8: cvt.w.d     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = CVT_W_D(ctx->f4.d);
    // 0x800089FC: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x80008A00: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80008A04: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x80008A08: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80008A0C: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80008A10: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x80008A14: sub.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80008A18: mul.s       $f4, $f8, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80008A1C: add.s       $f10, $f6, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x80008A20: nop

    // 0x80008A24: div.s       $f18, $f4, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = DIV_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80008A28: sub.s       $f8, $f10, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x80008A2C: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x80008A30: nop

    // 0x80008A34: div.d       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x80008A38: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80008A3C: nop

    // 0x80008A40: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80008A44: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80008A48: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008A4C: nop

    // 0x80008A50: cvt.w.d     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_D(ctx->f6.d);
    // 0x80008A54: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x80008A58: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80008A5C: sh          $t1, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r9;
    // 0x80008A60: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80008A64: nop

    // 0x80008A68: sh          $zero, 0x2($t3)
    MEM_H(0X2, ctx->r11) = 0;
    // 0x80008A6C: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x80008A70: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x80008A74: nop

    // 0x80008A78: sb          $t4, 0xF($t5)
    MEM_B(0XF, ctx->r13) = ctx->r12;
    // 0x80008A7C: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80008A80: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80008A84: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80008A88: sub.s       $f4, $f18, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f8.fl;
    // 0x80008A8C: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x80008A90: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80008A94: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80008A98: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80008A9C: div.s       $f10, $f6, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80008AA0: sub.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f10.fl;
    // 0x80008AA4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80008AA8: nop

    // 0x80008AAC: div.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x80008AB0: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80008AB4: nop

    // 0x80008AB8: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80008ABC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80008AC0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008AC4: nop

    // 0x80008AC8: cvt.w.d     $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = CVT_W_D(ctx->f8.d);
    // 0x80008ACC: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80008AD0: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80008AD4: sh          $t9, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r25;
    // 0x80008AD8: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80008ADC: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80008AE0: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80008AE4: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80008AE8: mul.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80008AEC: sub.s       $f10, $f4, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f14.fl;
    // 0x80008AF0: nop

    // 0x80008AF4: div.s       $f18, $f8, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f12.fl);
    // 0x80008AF8: sub.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f18.fl;
    // 0x80008AFC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80008B00: nop

    // 0x80008B04: div.d       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f8.d, ctx->f0.d);
    // 0x80008B08: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80008B0C: nop

    // 0x80008B10: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80008B14: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80008B18: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008B1C: nop

    // 0x80008B20: cvt.w.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_D(ctx->f4.d);
    // 0x80008B24: mfc1        $t2, $f10
    ctx->r10 = (int32_t)ctx->f10.u32l;
    // 0x80008B28: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80008B2C: sh          $t2, 0x4($t3)
    MEM_H(0X4, ctx->r11) = ctx->r10;
    // 0x80008B30: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x80008B34: nop

    // 0x80008B38: sh          $zero, 0x2($t4)
    MEM_H(0X2, ctx->r12) = 0;
    // 0x80008B3C: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80008B40: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80008B44: nop

    // 0x80008B48: sb          $t5, 0xF($t6)
    MEM_B(0XF, ctx->r14) = ctx->r13;
    // 0x80008B4C: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80008B50: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80008B54: sub.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x80008B58: addiu       $t8, $t7, 0x10
    ctx->r24 = ADD32(ctx->r15, 0X10);
    // 0x80008B5C: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80008B60: nop

    // 0x80008B64: div.d       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f8.d, ctx->f0.d);
    // 0x80008B68: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80008B6C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80008B70: nop

    // 0x80008B74: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80008B78: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80008B7C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008B80: nop

    // 0x80008B84: cvt.w.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_D(ctx->f4.d);
    // 0x80008B88: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x80008B8C: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80008B90: sh          $t0, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r8;
    // 0x80008B94: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80008B98: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x80008B9C: add.s       $f6, $f18, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f14.fl;
    // 0x80008BA0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80008BA4: nop

    // 0x80008BA8: div.d       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f8.d, ctx->f0.d);
    // 0x80008BAC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80008BB0: nop

    // 0x80008BB4: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80008BB8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80008BBC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008BC0: nop

    // 0x80008BC4: cvt.w.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_D(ctx->f4.d);
    // 0x80008BC8: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x80008BCC: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80008BD0: sh          $t3, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r11;
    // 0x80008BD4: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x80008BD8: nop

    // 0x80008BDC: sh          $zero, 0x2($t5)
    MEM_H(0X2, ctx->r13) = 0;
    // 0x80008BE0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80008BE4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80008BE8: nop

    // 0x80008BEC: sb          $t6, 0xF($t7)
    MEM_B(0XF, ctx->r15) = ctx->r14;
    // 0x80008BF0: lwc1        $f18, 0x34($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80008BF4: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80008BF8: add.s       $f6, $f18, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f16.fl;
    // 0x80008BFC: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x80008C00: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80008C04: nop

    // 0x80008C08: div.d       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f8.d, ctx->f0.d);
    // 0x80008C0C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80008C10: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80008C14: nop

    // 0x80008C18: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80008C1C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80008C20: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008C24: nop

    // 0x80008C28: cvt.w.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_D(ctx->f4.d);
    // 0x80008C2C: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x80008C30: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80008C34: sh          $t1, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r9;
    // 0x80008C38: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80008C3C: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x80008C40: sub.s       $f6, $f18, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f14.fl;
    // 0x80008C44: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80008C48: nop

    // 0x80008C4C: div.d       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f8.d, ctx->f0.d);
    // 0x80008C50: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80008C54: nop

    // 0x80008C58: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80008C5C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80008C60: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008C64: nop

    // 0x80008C68: cvt.w.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_D(ctx->f4.d);
    // 0x80008C6C: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x80008C70: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80008C74: sh          $t4, 0x4($t5)
    MEM_H(0X4, ctx->r13) = ctx->r12;
    // 0x80008C78: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80008C7C: nop

    // 0x80008C80: sh          $zero, 0x2($t6)
    MEM_H(0X2, ctx->r14) = 0;
    // 0x80008C84: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80008C88: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80008C8C: nop

    // 0x80008C90: sb          $t7, 0xF($t8)
    MEM_B(0XF, ctx->r24) = ctx->r15;
    // 0x80008C94: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80008C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80008C9C: addiu       $t0, $t9, 0x10
    ctx->r8 = ADD32(ctx->r25, 0X10);
    // 0x80008CA0: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x80008CA4: jr          $ra
    // 0x80008CA8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80008CA8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80008CAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80008CAC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80008CB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80008CB4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80008CB8: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80008CBC: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x80008CC0: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x80008CC4: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80008CC8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80008CCC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80008CD0: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80008CD4: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80008CD8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80008CDC: c.le.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl <= ctx->f18.fl;
    // 0x80008CE0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80008CE4: bc1f        L_80008CF4
    if (!c1cs) {
        // 0x80008CE8: nop
    
            goto L_80008CF4;
    }
    // 0x80008CE8: nop

    // 0x80008CEC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80008CF0: nop

L_80008CF4:
    // 0x80008CF4: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80008CF8: nop

    // 0x80008CFC: bc1f        L_80008D08
    if (!c1cs) {
        // 0x80008D00: nop
    
            goto L_80008D08;
    }
    // 0x80008D00: nop

    // 0x80008D04: mov.s       $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.fl = ctx->f0.fl;
L_80008D08:
    // 0x80008D08: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80008D0C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80008D10: sub.s       $f8, $f0, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f0.fl - ctx->f18.fl;
    // 0x80008D14: lw          $t8, 0x37B0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X37B0);
    // 0x80008D18: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80008D1C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80008D20: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80008D24: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80008D28: addiu       $a2, $sp, 0x44
    ctx->r6 = ADD32(ctx->r29, 0X44);
    // 0x80008D2C: addiu       $a3, $sp, 0x3C
    ctx->r7 = ADD32(ctx->r29, 0X3C);
    // 0x80008D30: mul.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80008D34: jal         0x8000916C
    // 0x80008D38: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    func_8000916C(rdram, ctx);
        goto after_0;
    // 0x80008D38: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80008D3C: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    // 0x80008D40: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80008D44: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x80008D48: jal         0x8000916C
    // 0x80008D4C: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    func_8000916C(rdram, ctx);
        goto after_1;
    // 0x80008D4C: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    after_1:
    // 0x80008D50: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80008D54: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80008D58: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80008D5C: sub.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f8.fl - ctx->f4.fl;
    // 0x80008D60: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80008D64: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80008D68: sub.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f6.fl;
    // 0x80008D6C: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80008D70: swc1        $f16, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f16.u32l;
    // 0x80008D74: mul.s       $f4, $f16, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x80008D78: jal         0x8007FA40
    // 0x80008D7C: add.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f4.fl;
    func_8007FA40(rdram, ctx);
        goto after_2;
    // 0x80008D7C: add.s       $f12, $f8, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f4.fl;
    after_2:
    // 0x80008D80: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80008D84: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80008D88: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x80008D8C: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80008D90: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80008D94: bc1t        L_80008DC4
    if (c1cs) {
        // 0x80008D98: addiu       $t9, $zero, 0x168
        ctx->r25 = ADD32(0, 0X168);
            goto L_80008DC4;
    }
    // 0x80008D98: addiu       $t9, $zero, 0x168
    ctx->r25 = ADD32(0, 0X168);
    // 0x80008D9C: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80008DA0: nop

    // 0x80008DA4: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80008DA8: mul.s       $f6, $f14, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x80008DAC: nop

    // 0x80008DB0: mul.s       $f8, $f16, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f2.fl);
    // 0x80008DB4: nop

    // 0x80008DB8: div.s       $f14, $f6, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80008DBC: b           L_80008DCC
    // 0x80008DC0: div.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
        goto L_80008DCC;
    // 0x80008DC0: div.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
L_80008DC4:
    // 0x80008DC4: mov.s       $f14, $f2
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    ctx->f14.fl = ctx->f2.fl;
    // 0x80008DC8: mov.s       $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.fl = ctx->f2.fl;
L_80008DCC:
    // 0x80008DCC: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80008DD0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80008DD4: sub.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x80008DD8: lwc1        $f1, 0x3088($at)
    ctx->f_odd[(1 - 1) * 2] = MEM_W(ctx->r1, 0X3088);
    // 0x80008DDC: sub.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f14.fl;
    // 0x80008DE0: lwc1        $f0, 0x308C($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X308C);
    // 0x80008DE4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80008DE8: nop

    // 0x80008DEC: div.d       $f4, $f8, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = DIV_D(ctx->f8.d, ctx->f0.d);
    // 0x80008DF0: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x80008DF4: addiu       $v0, $v0, 0xAEC
    ctx->r2 = ADD32(ctx->r2, 0XAEC);
    // 0x80008DF8: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x80008DFC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80008E00: addiu       $a0, $zero, 0x1E0
    ctx->r4 = ADD32(0, 0X1E0);
    // 0x80008E04: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80008E08: nop

    // 0x80008E0C: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80008E10: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80008E14: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008E18: nop

    // 0x80008E1C: cvt.w.d     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_D(ctx->f4.d);
    // 0x80008E20: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x80008E24: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80008E28: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x80008E2C: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80008E30: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x80008E34: add.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f14.fl;
    // 0x80008E38: sub.s       $f4, $f8, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x80008E3C: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x80008E40: nop

    // 0x80008E44: div.d       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x80008E48: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80008E4C: nop

    // 0x80008E50: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80008E54: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80008E58: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008E5C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80008E60: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x80008E64: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80008E68: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x80008E6C: nop

    // 0x80008E70: sh          $t4, 0x4($t5)
    MEM_H(0X4, ctx->r13) = ctx->r12;
    // 0x80008E74: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80008E78: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80008E7C: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x80008E80: sh          $zero, 0x2($t6)
    MEM_H(0X2, ctx->r14) = 0;
    // 0x80008E84: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80008E88: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80008E8C: sh          $zero, 0x8($t7)
    MEM_H(0X8, ctx->r15) = 0;
    // 0x80008E90: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x80008E94: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80008E98: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x80008E9C: beq         $v1, $zero, L_80008EE8
    if (ctx->r3 == 0) {
        // 0x80008EA0: sh          $zero, 0xA($t8)
        MEM_H(0XA, ctx->r24) = 0;
            goto L_80008EE8;
    }
    // 0x80008EA0: sh          $zero, 0xA($t8)
    MEM_H(0XA, ctx->r24) = 0;
    // 0x80008EA4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80008EA8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80008EAC: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80008EB0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80008EB4: ctc1        $v1, $FpcCsr
    set_cop1_cs(ctx->r3);
    // 0x80008EB8: nop

    // 0x80008EBC: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80008EC0: cfc1        $v1, $FpcCsr
    ctx->r3 = get_cop1_cs();
    // 0x80008EC4: nop

    // 0x80008EC8: andi        $v1, $v1, 0x78
    ctx->r3 = ctx->r3 & 0X78;
    // 0x80008ECC: bne         $v1, $zero, L_80008EE0
    if (ctx->r3 != 0) {
        // 0x80008ED0: nop
    
            goto L_80008EE0;
    }
    // 0x80008ED0: nop

    // 0x80008ED4: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x80008ED8: b           L_80008EF8
    // 0x80008EDC: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
        goto L_80008EF8;
    // 0x80008EDC: or          $v1, $v1, $at
    ctx->r3 = ctx->r3 | ctx->r1;
L_80008EE0:
    // 0x80008EE0: b           L_80008EF8
    // 0x80008EE4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
        goto L_80008EF8;
    // 0x80008EE4: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_80008EE8:
    // 0x80008EE8: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x80008EEC: nop

    // 0x80008EF0: bltz        $v1, L_80008EE0
    if (SIGNED(ctx->r3) < 0) {
        // 0x80008EF4: nop
    
            goto L_80008EE0;
    }
    // 0x80008EF4: nop

L_80008EF8:
    // 0x80008EF8: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80008EFC: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80008F00: sb          $v1, 0xF($t0)
    MEM_B(0XF, ctx->r8) = ctx->r3;
    // 0x80008F04: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80008F08: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80008F0C: add.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80008F10: addiu       $t2, $t1, 0x10
    ctx->r10 = ADD32(ctx->r9, 0X10);
    // 0x80008F14: sub.s       $f8, $f6, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f14.fl;
    // 0x80008F18: sw          $t2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r10;
    // 0x80008F1C: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x80008F20: nop

    // 0x80008F24: div.d       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x80008F28: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80008F2C: nop

    // 0x80008F30: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80008F34: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80008F38: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008F3C: nop

    // 0x80008F40: cvt.w.d     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_D(ctx->f10.d);
    // 0x80008F44: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x80008F48: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80008F4C: sh          $t4, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r12;
    // 0x80008F50: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80008F54: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80008F58: sub.s       $f4, $f8, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x80008F5C: sub.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f16.fl;
    // 0x80008F60: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x80008F64: nop

    // 0x80008F68: div.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x80008F6C: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80008F70: nop

    // 0x80008F74: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80008F78: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80008F7C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008F80: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80008F84: cvt.w.d     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = CVT_W_D(ctx->f8.d);
    // 0x80008F88: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80008F8C: mfc1        $t7, $f4
    ctx->r15 = (int32_t)ctx->f4.u32l;
    // 0x80008F90: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80008F94: sh          $t7, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r15;
    // 0x80008F98: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80008F9C: mul.s       $f2, $f16, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f16.fl, ctx->f10.fl);
    // 0x80008FA0: sh          $zero, 0x2($t9)
    MEM_H(0X2, ctx->r25) = 0;
    // 0x80008FA4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80008FA8: nop

    // 0x80008FAC: sh          $a0, 0x8($t0)
    MEM_H(0X8, ctx->r8) = ctx->r4;
    // 0x80008FB0: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80008FB4: nop

    // 0x80008FB8: sh          $zero, 0xA($t1)
    MEM_H(0XA, ctx->r9) = 0;
    // 0x80008FBC: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x80008FC0: nop

    // 0x80008FC4: sb          $v1, 0xF($t2)
    MEM_B(0XF, ctx->r10) = ctx->r3;
    // 0x80008FC8: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80008FCC: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80008FD0: sub.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f2.fl;
    // 0x80008FD4: addiu       $t4, $t3, 0x10
    ctx->r12 = ADD32(ctx->r11, 0X10);
    // 0x80008FD8: add.s       $f4, $f8, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f14.fl;
    // 0x80008FDC: sw          $t4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r12;
    // 0x80008FE0: cvt.d.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f10.d = CVT_D_S(ctx->f4.fl);
    // 0x80008FE4: nop

    // 0x80008FE8: div.d       $f6, $f10, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = DIV_D(ctx->f10.d, ctx->f0.d);
    // 0x80008FEC: addiu       $v1, $zero, 0x3E0
    ctx->r3 = ADD32(0, 0X3E0);
    // 0x80008FF0: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80008FF4: nop

    // 0x80008FF8: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80008FFC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80009000: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80009004: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80009008: cvt.w.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_D(ctx->f6.d);
    // 0x8000900C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80009010: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80009014: mfc1        $t6, $f8
    ctx->r14 = (int32_t)ctx->f8.u32l;
    // 0x80009018: mul.s       $f12, $f14, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x8000901C: sh          $t6, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r14;
    // 0x80009020: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80009024: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80009028: add.s       $f6, $f12, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f12.fl + ctx->f10.fl;
    // 0x8000902C: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80009030: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x80009034: nop

    // 0x80009038: div.d       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x8000903C: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80009040: nop

    // 0x80009044: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80009048: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000904C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80009050: nop

    // 0x80009054: cvt.w.d     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_D(ctx->f10.d);
    // 0x80009058: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x8000905C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80009060: sh          $t9, 0x4($t0)
    MEM_H(0X4, ctx->r8) = ctx->r25;
    // 0x80009064: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80009068: nop

    // 0x8000906C: sh          $zero, 0x2($t1)
    MEM_H(0X2, ctx->r9) = 0;
    // 0x80009070: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x80009074: nop

    // 0x80009078: sh          $zero, 0x8($t2)
    MEM_H(0X8, ctx->r10) = 0;
    // 0x8000907C: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80009080: nop

    // 0x80009084: sh          $v1, 0xA($t3)
    MEM_H(0XA, ctx->r11) = ctx->r3;
    // 0x80009088: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x8000908C: nop

    // 0x80009090: sb          $zero, 0xF($t4)
    MEM_B(0XF, ctx->r12) = 0;
    // 0x80009094: lwc1        $f8, 0x40($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80009098: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x8000909C: add.s       $f4, $f2, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f8.fl;
    // 0x800090A0: addiu       $t6, $t5, 0x10
    ctx->r14 = ADD32(ctx->r13, 0X10);
    // 0x800090A4: add.s       $f10, $f4, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x800090A8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800090AC: cvt.d.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f6.d = CVT_D_S(ctx->f10.fl);
    // 0x800090B0: nop

    // 0x800090B4: div.d       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f0.d);
    // 0x800090B8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800090BC: nop

    // 0x800090C0: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800090C4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800090C8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800090CC: nop

    // 0x800090D0: cvt.w.d     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.u32l = CVT_W_D(ctx->f8.d);
    // 0x800090D4: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x800090D8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x800090DC: sh          $t8, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r24;
    // 0x800090E0: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x800090E4: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x800090E8: sub.s       $f6, $f10, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f12.fl;
    // 0x800090EC: add.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x800090F0: cvt.d.s     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f4.d = CVT_D_S(ctx->f8.fl);
    // 0x800090F4: nop

    // 0x800090F8: div.d       $f10, $f4, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = DIV_D(ctx->f4.d, ctx->f0.d);
    // 0x800090FC: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80009100: nop

    // 0x80009104: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80009108: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000910C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80009110: nop

    // 0x80009114: cvt.w.d     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_D(ctx->f10.d);
    // 0x80009118: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x8000911C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80009120: sh          $t1, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r9;
    // 0x80009124: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80009128: nop

    // 0x8000912C: sh          $zero, 0x2($t3)
    MEM_H(0X2, ctx->r11) = 0;
    // 0x80009130: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x80009134: nop

    // 0x80009138: sh          $a0, 0x8($t4)
    MEM_H(0X8, ctx->r12) = ctx->r4;
    // 0x8000913C: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x80009140: nop

    // 0x80009144: sh          $v1, 0xA($t5)
    MEM_H(0XA, ctx->r13) = ctx->r3;
    // 0x80009148: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x8000914C: nop

    // 0x80009150: sb          $zero, 0xF($t6)
    MEM_B(0XF, ctx->r14) = 0;
    // 0x80009154: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80009158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000915C: addiu       $t8, $t7, 0x10
    ctx->r24 = ADD32(ctx->r15, 0X10);
    // 0x80009160: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80009164: jr          $ra
    // 0x80009168: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80009168: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8000916C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000916C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80009170: lw          $v1, 0x18($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X18);
    // 0x80009174: lw          $t8, 0x1C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X1C);
    // 0x80009178: lui         $t1, 0xFFFF
    ctx->r9 = S32(0XFFFF << 16);
    // 0x8000917C: andi        $a1, $v1, 0xFFFF
    ctx->r5 = ctx->r3 & 0XFFFF;
    // 0x80009180: sll         $t7, $a1, 8
    ctx->r15 = S32(ctx->r5 << 8);
    // 0x80009184: and         $v0, $v1, $t1
    ctx->r2 = ctx->r3 & ctx->r9;
    // 0x80009188: and         $t0, $t8, $t1
    ctx->r8 = ctx->r24 & ctx->r9;
    // 0x8000918C: sra         $t6, $v0, 8
    ctx->r14 = S32(SIGNED(ctx->r2) >> 8);
    // 0x80009190: sra         $t9, $t0, 8
    ctx->r25 = S32(SIGNED(ctx->r8) >> 8);
    // 0x80009194: sll         $t2, $t7, 8
    ctx->r10 = S32(ctx->r15 << 8);
    // 0x80009198: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8000919C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x800091A0: bgez        $t2, L_800091B0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x800091A4: or          $t0, $t9, $zero
        ctx->r8 = ctx->r25 | 0;
            goto L_800091B0;
    }
    // 0x800091A4: or          $t0, $t9, $zero
    ctx->r8 = ctx->r25 | 0;
    // 0x800091A8: lui         $at, 0xFF00
    ctx->r1 = S32(0XFF00 << 16);
    // 0x800091AC: addu        $a1, $t7, $at
    ctx->r5 = ADD32(ctx->r15, ctx->r1);
L_800091B0:
    // 0x800091B0: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x800091B4: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x800091B8: andi        $t5, $v1, 0xFFFF
    ctx->r13 = ctx->r3 & 0XFFFF;
    // 0x800091BC: srl         $t6, $t5, 8
    ctx->r14 = S32(U32(ctx->r13) >> 8);
    // 0x800091C0: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x800091C4: addiu       $a1, $a1, -0x80
    ctx->r5 = ADD32(ctx->r5, -0X80);
    // 0x800091C8: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x800091CC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x800091D0: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800091D4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800091D8: lwc1        $f10, 0x37A8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X37A8);
    // 0x800091DC: and         $t3, $v1, $t1
    ctx->r11 = ctx->r3 & ctx->r9;
    // 0x800091E0: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x800091E4: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x800091E8: srl         $t4, $t3, 24
    ctx->r12 = S32(U32(ctx->r11) >> 24);
    // 0x800091EC: addu        $v0, $v0, $t4
    ctx->r2 = ADD32(ctx->r2, ctx->r12);
    // 0x800091F0: div.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f2.fl);
    // 0x800091F4: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x800091F8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800091FC: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80009200: and         $t8, $t7, $t1
    ctx->r24 = ctx->r15 & ctx->r9;
    // 0x80009204: srl         $t9, $t8, 24
    ctx->r25 = S32(U32(ctx->r24) >> 24);
    // 0x80009208: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8000920C: mtc1        $t0, $f6
    ctx->f6.u32l = ctx->r8;
    // 0x80009210: add.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f18.fl;
    // 0x80009214: swc1        $f4, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f4.u32l;
    // 0x80009218: lwc1        $f16, 0x37AC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X37AC);
    // 0x8000921C: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80009220: mul.s       $f8, $f0, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80009224: nop

    // 0x80009228: div.s       $f18, $f8, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x8000922C: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80009230: jr          $ra
    // 0x80009234: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
    return;
    // 0x80009234: swc1        $f4, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->f4.u32l;
;}
RECOMP_FUNC void func_80009238(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009238: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8000923C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80009240: lw          $t6, 0x18($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X18);
    // 0x80009244: lw          $t0, 0x38($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X38);
    // 0x80009248: lui         $a3, 0xFFFF
    ctx->r7 = S32(0XFFFF << 16);
    // 0x8000924C: and         $v0, $t6, $a3
    ctx->r2 = ctx->r14 & ctx->r7;
    // 0x80009250: and         $t1, $t0, $a3
    ctx->r9 = ctx->r8 & ctx->r7;
    // 0x80009254: sra         $t7, $v0, 8
    ctx->r15 = S32(SIGNED(ctx->r2) >> 8);
    // 0x80009258: srl         $t2, $t1, 24
    ctx->r10 = S32(U32(ctx->r9) >> 24);
    // 0x8000925C: addu        $v0, $t7, $t2
    ctx->r2 = ADD32(ctx->r15, ctx->r10);
    // 0x80009260: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80009264: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x80009268: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000926C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80009270: lw          $t8, 0x1C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X1C);
    // 0x80009274: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80009278: lw          $t3, 0x3C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X3C);
    // 0x8000927C: and         $v1, $t8, $a3
    ctx->r3 = ctx->r24 & ctx->r7;
    // 0x80009280: and         $t4, $t3, $a3
    ctx->r12 = ctx->r11 & ctx->r7;
    // 0x80009284: sra         $t9, $v1, 8
    ctx->r25 = S32(SIGNED(ctx->r3) >> 8);
    // 0x80009288: srl         $t5, $t4, 24
    ctx->r13 = S32(U32(ctx->r12) >> 24);
    // 0x8000928C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80009290: addu        $v1, $t9, $t5
    ctx->r3 = ADD32(ctx->r25, ctx->r13);
    // 0x80009294: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x80009298: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8000929C: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x800092A0: addiu       $t7, $t7, 0x37B8
    ctx->r15 = ADD32(ctx->r15, 0X37B8);
    // 0x800092A4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800092A8: addu        $a2, $t6, $t7
    ctx->r6 = ADD32(ctx->r14, ctx->r15);
    // 0x800092AC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800092B0: lwc1        $f10, 0x0($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X0);
    // 0x800092B4: lwc1        $f14, 0x4($a2)
    ctx->f14.u32l = MEM_W(ctx->r6, 0X4);
    // 0x800092B8: sub.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800092BC: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x800092C0: div.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x800092C4: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x800092C8: lwc1        $f10, 0x8($a2)
    ctx->f10.u32l = MEM_W(ctx->r6, 0X8);
    // 0x800092CC: lw          $t8, 0x37A0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X37A0);
    // 0x800092D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800092D4: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x800092D8: bne         $t8, $at, L_800092E8
    if (ctx->r24 != ctx->r1) {
        // 0x800092DC: sub.s       $f16, $f8, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
            goto L_800092E8;
    }
    // 0x800092DC: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800092E0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800092E4: nop

L_800092E8:
    // 0x800092E8: mul.s       $f10, $f16, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x800092EC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800092F0: swc1        $f14, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f14.u32l;
    // 0x800092F4: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x800092F8: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x800092FC: jal         0x8007FA40
    // 0x80009300: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    func_8007FA40(rdram, ctx);
        goto after_0;
    // 0x80009300: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80009304: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80009308: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000930C: div.s       $f4, $f0, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80009310: lwc1        $f13, 0x3090($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X3090);
    // 0x80009314: lwc1        $f12, 0x3094($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X3094);
    // 0x80009318: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000931C: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80009320: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80009324: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80009328: cvt.d.s     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f2.d = CVT_D_S(ctx->f4.fl);
    // 0x8000932C: c.lt.d      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.d < ctx->f2.d;
    // 0x80009330: nop

    // 0x80009334: bc1f        L_80009358
    if (!c1cs) {
        // 0x80009338: nop
    
            goto L_80009358;
    }
    // 0x80009338: nop

    // 0x8000933C: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80009340: nop

    // 0x80009344: div.d       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f12.d);
    // 0x80009348: cvt.s.d     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f14.fl = CVT_S_D(ctx->f8.d);
    // 0x8000934C: nop

    // 0x80009350: div.s       $f10, $f0, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = DIV_S(ctx->f0.fl, ctx->f14.fl);
    // 0x80009354: cvt.d.s     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f2.d = CVT_D_S(ctx->f10.fl);
L_80009358:
    // 0x80009358: lwc1        $f13, 0x3098($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X3098);
    // 0x8000935C: lwc1        $f12, 0x309C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X309C);
    // 0x80009360: nop

    // 0x80009364: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    // 0x80009368: nop

    // 0x8000936C: bc1f        L_80009388
    if (!c1cs) {
        // 0x80009370: nop
    
            goto L_80009388;
    }
    // 0x80009370: nop

    // 0x80009374: cvt.d.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.d = CVT_D_S(ctx->f0.fl);
    // 0x80009378: nop

    // 0x8000937C: div.d       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = DIV_D(ctx->f4.d, ctx->f12.d);
    // 0x80009380: cvt.s.d     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f14.fl = CVT_S_D(ctx->f6.d);
    // 0x80009384: nop

L_80009388:
    // 0x80009388: div.s       $f18, $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = DIV_S(ctx->f18.fl, ctx->f14.fl);
    // 0x8000938C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80009390: lwc1        $f3, 0x30A0($at)
    ctx->f_odd[(3 - 1) * 2] = MEM_W(ctx->r1, 0X30A0);
    // 0x80009394: lwc1        $f2, 0x30A4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, 0X30A4);
    // 0x80009398: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x8000939C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800093A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800093A4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800093A8: addiu       $v0, $v0, 0x37B0
    ctx->r2 = ADD32(ctx->r2, 0X37B0);
    // 0x800093AC: div.s       $f16, $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = DIV_S(ctx->f16.fl, ctx->f14.fl);
    // 0x800093B0: mul.s       $f8, $f18, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x800093B4: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800093B8: mul.d       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f2.d);
    // 0x800093BC: nop

    // 0x800093C0: mul.s       $f8, $f16, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x800093C4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800093C8: swc1        $f6, 0x37A8($at)
    MEM_W(0X37A8, ctx->r1) = ctx->f6.u32l;
    // 0x800093CC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800093D0: mul.d       $f4, $f10, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = MUL_D(ctx->f10.d, ctx->f2.d);
    // 0x800093D4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800093D8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800093DC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800093E0: swc1        $f6, 0x37AC($at)
    MEM_W(0X37AC, ctx->r1) = ctx->f6.u32l;
    // 0x800093E4: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x800093E8: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x800093EC: lui         $at, 0x44A0
    ctx->r1 = S32(0X44A0 << 16);
    // 0x800093F0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800093F4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800093F8: div.s       $f4, $f0, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = DIV_S(ctx->f0.fl, ctx->f10.fl);
    // 0x800093FC: lwc1        $f5, 0x30A8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X30A8);
    // 0x80009400: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80009404: lwc1        $f4, 0x30AC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X30AC);
    // 0x80009408: sub.d       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f8.d - ctx->f6.d;
    // 0x8000940C: mul.d       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x80009410: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80009414: nop

    // 0x80009418: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8000941C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80009420: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80009424: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80009428: cvt.w.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_D(ctx->f8.d);
    // 0x8000942C: swc1        $f6, 0x37B0($at)
    MEM_W(0X37B0, ctx->r1) = ctx->f6.u32l;
    // 0x80009430: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80009434: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80009438: bgez        $t0, L_80009444
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8000943C: nop
    
            goto L_80009444;
    }
    // 0x8000943C: nop

    // 0x80009440: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
L_80009444:
    // 0x80009444: lw          $t1, -0x2F98($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X2F98);
    // 0x80009448: lui         $t2, 0x3
    ctx->r10 = S32(0X3 << 16);
    // 0x8000944C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80009450: lbu         $t2, -0x765E($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X765E);
    // 0x80009454: nop

    // 0x80009458: slti        $at, $t2, 0xD
    ctx->r1 = SIGNED(ctx->r10) < 0XD ? 1 : 0;
    // 0x8000945C: bne         $at, $zero, L_800094A8
    if (ctx->r1 != 0) {
        // 0x80009460: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800094A8;
    }
    // 0x80009460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80009464: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x80009468: nop

    // 0x8000946C: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x80009470: nop

    // 0x80009474: cvt.d.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.d = CVT_D_W(ctx->f10.u32l);
    // 0x80009478: mul.d       $f8, $f4, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x8000947C: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80009480: nop

    // 0x80009484: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80009488: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000948C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80009490: nop

    // 0x80009494: cvt.w.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = CVT_W_D(ctx->f8.d);
    // 0x80009498: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8000949C: swc1        $f6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f6.u32l;
    // 0x800094A0: nop

    // 0x800094A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800094A8:
    // 0x800094A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800094AC: jr          $ra
    // 0x800094B0: nop

    return;
    // 0x800094B0: nop

;}
RECOMP_FUNC void func_800094B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800094B4: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x800094B8: addiu       $v0, $v0, 0x37E8
    ctx->r2 = ADD32(ctx->r2, 0X37E8);
    // 0x800094BC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800094C0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
L_800094C4:
    // 0x800094C4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x800094C8: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x800094CC: sh          $zero, 0x14($v0)
    MEM_H(0X14, ctx->r2) = 0;
    // 0x800094D0: sh          $zero, 0x1E($v0)
    MEM_H(0X1E, ctx->r2) = 0;
    // 0x800094D4: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x800094D8: bne         $v1, $a0, L_800094C4
    if (ctx->r3 != ctx->r4) {
        // 0x800094DC: sh          $zero, -0x28($v0)
        MEM_H(-0X28, ctx->r2) = 0;
            goto L_800094C4;
    }
    // 0x800094DC: sh          $zero, -0x28($v0)
    MEM_H(-0X28, ctx->r2) = 0;
    // 0x800094E0: jr          $ra
    // 0x800094E4: nop

    return;
    // 0x800094E4: nop

;}
RECOMP_FUNC void func_800094E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800094E8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800094EC: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x800094F0: sll         $s0, $a0, 16
    ctx->r16 = S32(ctx->r4 << 16);
    // 0x800094F4: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x800094F8: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x800094FC: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x80009500: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x80009504: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x80009508: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x8000950C: sll         $t2, $a3, 16
    ctx->r10 = S32(ctx->r7 << 16);
    // 0x80009510: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x80009514: sra         $a3, $t2, 16
    ctx->r7 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80009518: sra         $a2, $t9, 16
    ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8000951C: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80009520: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80009524: sw          $a0, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r4;
    // 0x80009528: addiu       $v0, $v0, 0x37E8
    ctx->r2 = ADD32(ctx->r2, 0X37E8);
    // 0x8000952C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80009530: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
L_80009534:
    // 0x80009534: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x80009538: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8000953C: bne         $a0, $zero, L_8000955C
    if (ctx->r4 != 0) {
        // 0x80009540: addiu       $t4, $a0, 0x1
        ctx->r12 = ADD32(ctx->r4, 0X1);
            goto L_8000955C;
    }
    // 0x80009540: addiu       $t4, $a0, 0x1
    ctx->r12 = ADD32(ctx->r4, 0X1);
    // 0x80009544: sh          $s0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r16;
    // 0x80009548: sh          $a1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r5;
    // 0x8000954C: sh          $a2, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r6;
    // 0x80009550: sh          $a3, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r7;
    // 0x80009554: b           L_800095DC
    // 0x80009558: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
        goto L_800095DC;
    // 0x80009558: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
L_8000955C:
    // 0x8000955C: lh          $a0, 0xA($v0)
    ctx->r4 = MEM_H(ctx->r2, 0XA);
    // 0x80009560: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x80009564: bne         $a0, $zero, L_80009584
    if (ctx->r4 != 0) {
        // 0x80009568: addiu       $t5, $a0, 0x1
        ctx->r13 = ADD32(ctx->r4, 0X1);
            goto L_80009584;
    }
    // 0x80009568: addiu       $t5, $a0, 0x1
    ctx->r13 = ADD32(ctx->r4, 0X1);
    // 0x8000956C: sh          $t5, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r13;
    // 0x80009570: sh          $s0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r16;
    // 0x80009574: sh          $a1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r5;
    // 0x80009578: sh          $a2, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r6;
    // 0x8000957C: b           L_800095DC
    // 0x80009580: sh          $a3, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r7;
        goto L_800095DC;
    // 0x80009580: sh          $a3, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r7;
L_80009584:
    // 0x80009584: lh          $a0, 0xA($v0)
    ctx->r4 = MEM_H(ctx->r2, 0XA);
    // 0x80009588: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x8000958C: bne         $a0, $zero, L_800095AC
    if (ctx->r4 != 0) {
        // 0x80009590: addiu       $t6, $a0, 0x1
        ctx->r14 = ADD32(ctx->r4, 0X1);
            goto L_800095AC;
    }
    // 0x80009590: addiu       $t6, $a0, 0x1
    ctx->r14 = ADD32(ctx->r4, 0X1);
    // 0x80009594: sh          $t6, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r14;
    // 0x80009598: sh          $s0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r16;
    // 0x8000959C: sh          $a1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r5;
    // 0x800095A0: sh          $a2, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r6;
    // 0x800095A4: b           L_800095DC
    // 0x800095A8: sh          $a3, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r7;
        goto L_800095DC;
    // 0x800095A8: sh          $a3, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r7;
L_800095AC:
    // 0x800095AC: lh          $a0, 0xA($v0)
    ctx->r4 = MEM_H(ctx->r2, 0XA);
    // 0x800095B0: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x800095B4: bne         $a0, $zero, L_800095D4
    if (ctx->r4 != 0) {
        // 0x800095B8: addiu       $t7, $a0, 0x1
        ctx->r15 = ADD32(ctx->r4, 0X1);
            goto L_800095D4;
    }
    // 0x800095B8: addiu       $t7, $a0, 0x1
    ctx->r15 = ADD32(ctx->r4, 0X1);
    // 0x800095BC: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
    // 0x800095C0: sh          $s0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r16;
    // 0x800095C4: sh          $a1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r5;
    // 0x800095C8: sh          $a2, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r6;
    // 0x800095CC: b           L_800095DC
    // 0x800095D0: sh          $a3, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r7;
        goto L_800095DC;
    // 0x800095D0: sh          $a3, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r7;
L_800095D4:
    // 0x800095D4: bne         $v1, $t0, L_80009534
    if (ctx->r3 != ctx->r8) {
        // 0x800095D8: addiu       $v0, $v0, 0xA
        ctx->r2 = ADD32(ctx->r2, 0XA);
            goto L_80009534;
    }
    // 0x800095D8: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
L_800095DC:
    // 0x800095DC: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x800095E0: jr          $ra
    // 0x800095E4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800095E4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800095E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800095E8: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800095EC: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x800095F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800095F4: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x800095F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800095FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80009600: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80009604: lbu         $t7, -0x765E($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X765E);
    // 0x80009608: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8000960C: slti        $at, $t7, 0xD
    ctx->r1 = SIGNED(ctx->r15) < 0XD ? 1 : 0;
    // 0x80009610: beq         $at, $zero, L_800096EC
    if (ctx->r1 == 0) {
        // 0x80009614: lui         $at, 0x4120
        ctx->r1 = S32(0X4120 << 16);
            goto L_800096EC;
    }
    // 0x80009614: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80009618: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8000961C: lui         $at, 0x41B8
    ctx->r1 = S32(0X41B8 << 16);
    // 0x80009620: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80009624: lwc1        $f0, 0x4($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X4);
    // 0x80009628: or          $t8, $a0, $zero
    ctx->r24 = ctx->r4 | 0;
    // 0x8000962C: sub.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl - ctx->f4.fl;
    // 0x80009630: lwc1        $f2, 0xC($t8)
    ctx->f2.u32l = MEM_W(ctx->r24, 0XC);
    // 0x80009634: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80009638: nop

    // 0x8000963C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80009640: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80009644: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80009648: nop

    // 0x8000964C: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80009650: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80009654: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x80009658: sub.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x8000965C: sll         $t0, $a0, 16
    ctx->r8 = S32(ctx->r4 << 16);
    // 0x80009660: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80009664: sra         $a0, $t0, 16
    ctx->r4 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80009668: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8000966C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80009670: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80009674: nop

    // 0x80009678: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8000967C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80009680: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80009684: add.s       $f18, $f0, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x80009688: sll         $t3, $a1, 16
    ctx->r11 = S32(ctx->r5 << 16);
    // 0x8000968C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80009690: sra         $a1, $t3, 16
    ctx->r5 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80009694: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80009698: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000969C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800096A0: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x800096A4: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800096A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800096AC: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800096B0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800096B4: add.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f2.fl + ctx->f6.fl;
    // 0x800096B8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800096BC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800096C0: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800096C4: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800096C8: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x800096CC: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x800096D0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800096D4: sll         $t0, $a3, 16
    ctx->r8 = S32(ctx->r7 << 16);
    // 0x800096D8: sra         $a3, $t0, 16
    ctx->r7 = S32(SIGNED(ctx->r8) >> 16);
    // 0x800096DC: jal         0x800094E8
    // 0x800096E0: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    func_800094E8(rdram, ctx);
        goto after_0;
    // 0x800096E0: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    after_0:
    // 0x800096E4: b           L_800097B4
    // 0x800096E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800097B4;
    // 0x800096E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800096EC:
    // 0x800096EC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800096F0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x800096F4: lwc1        $f0, 0x4($t8)
    ctx->f0.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800096F8: lwc1        $f2, 0xC($t8)
    ctx->f2.u32l = MEM_W(ctx->r24, 0XC);
    // 0x800096FC: sub.s       $f16, $f0, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f12.fl;
    // 0x80009700: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80009704: nop

    // 0x80009708: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x8000970C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80009710: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80009714: lui         $at, 0x4170
    ctx->r1 = S32(0X4170 << 16);
    // 0x80009718: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8000971C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80009720: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80009724: mfc1        $a0, $f18
    ctx->r4 = (int32_t)ctx->f18.u32l;
    // 0x80009728: sub.s       $f6, $f2, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x8000972C: sll         $t3, $a0, 16
    ctx->r11 = S32(ctx->r4 << 16);
    // 0x80009730: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80009734: sra         $a0, $t3, 16
    ctx->r4 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80009738: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x8000973C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80009740: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80009744: lui         $at, 0x41B8
    ctx->r1 = S32(0X41B8 << 16);
    // 0x80009748: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8000974C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80009750: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x80009754: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80009758: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x8000975C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80009760: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80009764: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80009768: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8000976C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80009770: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80009774: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80009778: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8000977C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80009780: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80009784: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80009788: add.s       $f4, $f2, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x8000978C: sll         $t0, $a2, 16
    ctx->r8 = S32(ctx->r6 << 16);
    // 0x80009790: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80009794: sra         $a2, $t0, 16
    ctx->r6 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80009798: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000979C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800097A0: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800097A4: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x800097A8: jal         0x800094E8
    // 0x800097AC: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    func_800094E8(rdram, ctx);
        goto after_1;
    // 0x800097AC: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    after_1:
    // 0x800097B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800097B4:
    // 0x800097B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800097B8: jr          $ra
    // 0x800097BC: nop

    return;
    // 0x800097BC: nop

;}
RECOMP_FUNC void func_800097C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800097C0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800097C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800097C8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800097CC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800097D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800097D4: lh          $t6, 0x0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X0);
    // 0x800097D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800097DC: beq         $t6, $zero, L_8000990C
    if (ctx->r14 == 0) {
        // 0x800097E0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8000990C;
    }
    // 0x800097E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800097E4: lh          $t7, 0x4($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X4);
    // 0x800097E8: lh          $s1, 0x2($a1)
    ctx->r17 = MEM_H(ctx->r5, 0X2);
    // 0x800097EC: sh          $t7, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r15;
    // 0x800097F0: lh          $t8, 0x8($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X8);
    // 0x800097F4: lh          $s2, 0x6($a1)
    ctx->r18 = MEM_H(ctx->r5, 0X6);
    // 0x800097F8: sh          $t8, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r24;
    // 0x800097FC: lh          $t9, 0x6($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X6);
    // 0x80009800: nop

    // 0x80009804: slt         $at, $s1, $t9
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80009808: beq         $at, $zero, L_8000990C
    if (ctx->r1 == 0) {
        // 0x8000980C: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8000990C;
    }
    // 0x8000980C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80009810: lh          $t0, 0x2($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X2);
    // 0x80009814: lh          $t1, 0x2C($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2C);
    // 0x80009818: slt         $at, $t0, $s2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x8000981C: beq         $at, $zero, L_8000990C
    if (ctx->r1 == 0) {
        // 0x80009820: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8000990C;
    }
    // 0x80009820: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80009824: lh          $t2, 0x8($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X8);
    // 0x80009828: lh          $t4, 0x28($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X28);
    // 0x8000982C: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80009830: beq         $at, $zero, L_8000990C
    if (ctx->r1 == 0) {
        // 0x80009834: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8000990C;
    }
    // 0x80009834: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80009838: lh          $t3, 0x4($a0)
    ctx->r11 = MEM_H(ctx->r4, 0X4);
    // 0x8000983C: nop

    // 0x80009840: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80009844: beq         $at, $zero, L_8000990C
    if (ctx->r1 == 0) {
        // 0x80009848: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8000990C;
    }
    // 0x80009848: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8000984C: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x80009850: lh          $a2, 0x2($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X2);
    // 0x80009854: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x80009858: slt         $at, $s1, $a2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8000985C: beq         $at, $zero, L_8000987C
    if (ctx->r1 == 0) {
        // 0x80009860: sra         $t5, $a0, 16
        ctx->r13 = S32(SIGNED(ctx->r4) >> 16);
            goto L_8000987C;
    }
    // 0x80009860: sra         $t5, $a0, 16
    ctx->r13 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80009864: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    // 0x80009868: lh          $a3, 0x28($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X28);
    // 0x8000986C: jal         0x800094E8
    // 0x80009870: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    func_800094E8(rdram, ctx);
        goto after_0;
    // 0x80009870: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    after_0:
    // 0x80009874: lh          $s1, 0x2($s0)
    ctx->r17 = MEM_H(ctx->r16, 0X2);
    // 0x80009878: nop

L_8000987C:
    // 0x8000987C: lh          $a0, 0x6($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X6);
    // 0x80009880: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    // 0x80009884: slt         $at, $a0, $s2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80009888: beq         $at, $zero, L_800098A8
    if (ctx->r1 == 0) {
        // 0x8000988C: sll         $a2, $s2, 16
        ctx->r6 = S32(ctx->r18 << 16);
            goto L_800098A8;
    }
    // 0x8000988C: sll         $a2, $s2, 16
    ctx->r6 = S32(ctx->r18 << 16);
    // 0x80009890: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80009894: lh          $a3, 0x28($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X28);
    // 0x80009898: jal         0x800094E8
    // 0x8000989C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    func_800094E8(rdram, ctx);
        goto after_1;
    // 0x8000989C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    after_1:
    // 0x800098A0: lh          $s2, 0x6($s0)
    ctx->r18 = MEM_H(ctx->r16, 0X6);
    // 0x800098A4: nop

L_800098A8:
    // 0x800098A8: lh          $a3, 0x4($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X4);
    // 0x800098AC: lh          $t7, 0x2C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2C);
    // 0x800098B0: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x800098B4: slt         $at, $t7, $a3
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x800098B8: beq         $at, $zero, L_800098D8
    if (ctx->r1 == 0) {
        // 0x800098BC: sra         $t8, $a0, 16
        ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
            goto L_800098D8;
    }
    // 0x800098BC: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800098C0: sll         $a2, $s2, 16
    ctx->r6 = S32(ctx->r18 << 16);
    // 0x800098C4: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800098C8: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x800098CC: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x800098D0: jal         0x800094E8
    // 0x800098D4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_800094E8(rdram, ctx);
        goto after_2;
    // 0x800098D4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_2:
L_800098D8:
    // 0x800098D8: lh          $a1, 0x8($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X8);
    // 0x800098DC: lh          $t0, 0x28($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X28);
    // 0x800098E0: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x800098E4: slt         $at, $a1, $t0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800098E8: beq         $at, $zero, L_80009908
    if (ctx->r1 == 0) {
        // 0x800098EC: sra         $t1, $a0, 16
        ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
            goto L_80009908;
    }
    // 0x800098EC: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800098F0: sll         $a2, $s2, 16
    ctx->r6 = S32(ctx->r18 << 16);
    // 0x800098F4: sra         $t2, $a2, 16
    ctx->r10 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800098F8: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x800098FC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80009900: jal         0x800094E8
    // 0x80009904: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    func_800094E8(rdram, ctx);
        goto after_3;
    // 0x80009904: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    after_3:
L_80009908:
    // 0x80009908: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8000990C:
    // 0x8000990C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80009910: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80009914: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80009918: jr          $ra
    // 0x8000991C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8000991C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80009920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009920: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80009924: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80009928: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8000992C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80009930: lui         $s3, 0x8013
    ctx->r19 = S32(0X8013 << 16);
    // 0x80009934: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80009938: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8000993C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80009940: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80009944: addiu       $s3, $s3, 0x37E8
    ctx->r19 = ADD32(ctx->r19, 0X37E8);
    // 0x80009948: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x8000994C: addiu       $s5, $zero, 0x20
    ctx->r21 = ADD32(0, 0X20);
L_80009950:
    // 0x80009950: lh          $t6, 0x0($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X0);
    // 0x80009954: subu        $s2, $s5, $s4
    ctx->r18 = SUB32(ctx->r21, ctx->r20);
    // 0x80009958: beq         $t6, $zero, L_80009984
    if (ctx->r14 == 0) {
        // 0x8000995C: slti        $at, $s2, 0x2
        ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
            goto L_80009984;
    }
    // 0x8000995C: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x80009960: bne         $at, $zero, L_80009984
    if (ctx->r1 != 0) {
        // 0x80009964: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_80009984;
    }
    // 0x80009964: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80009968: addiu       $s1, $s3, 0xA
    ctx->r17 = ADD32(ctx->r19, 0XA);
L_8000996C:
    // 0x8000996C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80009970: jal         0x800097C0
    // 0x80009974: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800097C0(rdram, ctx);
        goto after_0;
    // 0x80009974: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_0:
    // 0x80009978: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8000997C: bne         $s0, $s2, L_8000996C
    if (ctx->r16 != ctx->r18) {
        // 0x80009980: addiu       $s1, $s1, 0xA
        ctx->r17 = ADD32(ctx->r17, 0XA);
            goto L_8000996C;
    }
    // 0x80009980: addiu       $s1, $s1, 0xA
    ctx->r17 = ADD32(ctx->r17, 0XA);
L_80009984:
    // 0x80009984: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80009988: bne         $s4, $s5, L_80009950
    if (ctx->r20 != ctx->r21) {
        // 0x8000998C: addiu       $s3, $s3, 0xA
        ctx->r19 = ADD32(ctx->r19, 0XA);
            goto L_80009950;
    }
    // 0x8000998C: addiu       $s3, $s3, 0xA
    ctx->r19 = ADD32(ctx->r19, 0XA);
    // 0x80009990: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80009994: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80009998: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8000999C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800099A0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800099A4: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x800099A8: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x800099AC: jr          $ra
    // 0x800099B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800099B0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800099B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800099B4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800099B8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800099BC: lb          $t6, -0x309F($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X309F);
    // 0x800099C0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800099C4: lui         $s1, 0x8013
    ctx->r17 = S32(0X8013 << 16);
    // 0x800099C8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800099CC: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800099D0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800099D4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800099D8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800099DC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800099E0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800099E4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800099E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800099EC: bne         $t6, $zero, L_800099FC
    if (ctx->r14 != 0) {
        // 0x800099F0: addiu       $s1, $s1, 0x37E8
        ctx->r17 = ADD32(ctx->r17, 0X37E8);
            goto L_800099FC;
    }
    // 0x800099F0: addiu       $s1, $s1, 0x37E8
    ctx->r17 = ADD32(ctx->r17, 0X37E8);
    // 0x800099F4: b           L_80009A00
    // 0x800099F8: addiu       $s0, $zero, 0xB4
    ctx->r16 = ADD32(0, 0XB4);
        goto L_80009A00;
    // 0x800099F8: addiu       $s0, $zero, 0xB4
    ctx->r16 = ADD32(0, 0XB4);
L_800099FC:
    // 0x800099FC: addiu       $s0, $zero, 0x78
    ctx->r16 = ADD32(0, 0X78);
L_80009A00:
    // 0x80009A00: jal         0x800049AC
    // 0x80009A04: nop

    func_800049AC(rdram, ctx);
        goto after_0;
    // 0x80009A04: nop

    after_0:
    // 0x80009A08: bne         $v0, $zero, L_80009C04
    if (ctx->r2 != 0) {
        // 0x80009A0C: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80009C04;
    }
    // 0x80009A0C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80009A10: jal         0x80009920
    // 0x80009A14: nop

    func_80009920(rdram, ctx);
        goto after_1;
    // 0x80009A14: nop

    after_1:
    // 0x80009A18: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x80009A1C: addiu       $s2, $s2, 0xAE0
    ctx->r18 = ADD32(ctx->r18, 0XAE0);
    // 0x80009A20: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80009A24: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80009A28: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80009A2C: sw          $t7, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r15;
    // 0x80009A30: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80009A34: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80009A38: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80009A3C: lui         $t0, 0xFA00
    ctx->r8 = S32(0XFA00 << 16);
    // 0x80009A40: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80009A44: sw          $t9, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r25;
    // 0x80009A48: andi        $t1, $s0, 0xFF
    ctx->r9 = ctx->r16 & 0XFF;
    // 0x80009A4C: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x80009A50: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x80009A54: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80009A58: lui         $t3, 0xB900
    ctx->r11 = S32(0XB900 << 16);
    // 0x80009A5C: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
    // 0x80009A60: sw          $t2, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r10;
    // 0x80009A64: lui         $t4, 0x50
    ctx->r12 = S32(0X50 << 16);
    // 0x80009A68: ori         $t4, $t4, 0x4DD8
    ctx->r12 = ctx->r12 | 0X4DD8;
    // 0x80009A6C: ori         $t3, $t3, 0x31D
    ctx->r11 = ctx->r11 | 0X31D;
    // 0x80009A70: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80009A74: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x80009A78: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80009A7C: lui         $t7, 0xFFFD
    ctx->r15 = S32(0XFFFD << 16);
    // 0x80009A80: addiu       $t5, $v0, 0x8
    ctx->r13 = ADD32(ctx->r2, 0X8);
    // 0x80009A84: sw          $t5, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r13;
    // 0x80009A88: lui         $t6, 0xFCFF
    ctx->r14 = S32(0XFCFF << 16);
    // 0x80009A8C: ori         $t6, $t6, 0xFFFF
    ctx->r14 = ctx->r14 | 0XFFFF;
    // 0x80009A90: ori         $t7, $t7, 0xF6FB
    ctx->r15 = ctx->r15 | 0XF6FB;
    // 0x80009A94: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x80009A98: lui         $s7, 0x6
    ctx->r23 = S32(0X6 << 16);
    // 0x80009A9C: lui         $s6, 0xB100
    ctx->r22 = S32(0XB100 << 16);
    // 0x80009AA0: lui         $s4, 0x400
    ctx->r20 = S32(0X400 << 16);
    // 0x80009AA4: ori         $s4, $s4, 0x103F
    ctx->r20 = ctx->r20 | 0X103F;
    // 0x80009AA8: ori         $s6, $s6, 0x204
    ctx->r22 = ctx->r22 | 0X204;
    // 0x80009AAC: ori         $s7, $s7, 0x402
    ctx->r23 = ctx->r23 | 0X402;
    // 0x80009AB0: addiu       $s0, $s0, 0xAEC
    ctx->r16 = ADD32(ctx->r16, 0XAEC);
    // 0x80009AB4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80009AB8: addiu       $fp, $zero, 0x20
    ctx->r30 = ADD32(0, 0X20);
    // 0x80009ABC: lui         $s5, 0x8000
    ctx->r21 = S32(0X8000 << 16);
    // 0x80009AC0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80009AC4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
L_80009AC8:
    // 0x80009AC8: lh          $t8, 0x0($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X0);
    // 0x80009ACC: nop

    // 0x80009AD0: beq         $t8, $zero, L_80009BF4
    if (ctx->r24 == 0) {
        // 0x80009AD4: nop
    
            goto L_80009BF4;
    }
    // 0x80009AD4: nop

    // 0x80009AD8: jal         0x80003818
    // 0x80009ADC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80003818(rdram, ctx);
        goto after_2;
    // 0x80009ADC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_2:
    // 0x80009AE0: bne         $v0, $zero, L_80009C04
    if (ctx->r2 != 0) {
        // 0x80009AE4: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80009C04;
    }
    // 0x80009AE4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80009AE8: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x80009AEC: lh          $t9, 0x2($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X2);
    // 0x80009AF0: nop

    // 0x80009AF4: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
    // 0x80009AF8: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x80009AFC: lh          $t0, 0x4($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X4);
    // 0x80009B00: nop

    // 0x80009B04: sh          $t0, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r8;
    // 0x80009B08: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x80009B0C: nop

    // 0x80009B10: sh          $zero, 0x2($t2)
    MEM_H(0X2, ctx->r10) = 0;
    // 0x80009B14: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80009B18: nop

    // 0x80009B1C: addiu       $t4, $t3, 0x10
    ctx->r12 = ADD32(ctx->r11, 0X10);
    // 0x80009B20: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x80009B24: lh          $t5, 0x6($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X6);
    // 0x80009B28: nop

    // 0x80009B2C: sh          $t5, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r13;
    // 0x80009B30: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80009B34: lh          $t7, 0x4($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X4);
    // 0x80009B38: nop

    // 0x80009B3C: sh          $t7, 0x4($t8)
    MEM_H(0X4, ctx->r24) = ctx->r15;
    // 0x80009B40: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80009B44: nop

    // 0x80009B48: sh          $zero, 0x2($t9)
    MEM_H(0X2, ctx->r25) = 0;
    // 0x80009B4C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80009B50: nop

    // 0x80009B54: addiu       $t1, $t0, 0x10
    ctx->r9 = ADD32(ctx->r8, 0X10);
    // 0x80009B58: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x80009B5C: lh          $t2, 0x2($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X2);
    // 0x80009B60: nop

    // 0x80009B64: sh          $t2, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r10;
    // 0x80009B68: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x80009B6C: lh          $t4, 0x8($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X8);
    // 0x80009B70: nop

    // 0x80009B74: sh          $t4, 0x4($t5)
    MEM_H(0X4, ctx->r13) = ctx->r12;
    // 0x80009B78: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80009B7C: nop

    // 0x80009B80: sh          $zero, 0x2($t6)
    MEM_H(0X2, ctx->r14) = 0;
    // 0x80009B84: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80009B88: nop

    // 0x80009B8C: addiu       $t8, $t7, 0x10
    ctx->r24 = ADD32(ctx->r15, 0X10);
    // 0x80009B90: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80009B94: lh          $t9, 0x6($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X6);
    // 0x80009B98: addu        $t7, $v1, $s5
    ctx->r15 = ADD32(ctx->r3, ctx->r21);
    // 0x80009B9C: sh          $t9, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r25;
    // 0x80009BA0: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x80009BA4: lh          $t1, 0x8($s1)
    ctx->r9 = MEM_H(ctx->r17, 0X8);
    // 0x80009BA8: nop

    // 0x80009BAC: sh          $t1, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r9;
    // 0x80009BB0: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80009BB4: nop

    // 0x80009BB8: sh          $zero, 0x2($t3)
    MEM_H(0X2, ctx->r11) = 0;
    // 0x80009BBC: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x80009BC0: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80009BC4: addiu       $t5, $t4, 0x10
    ctx->r13 = ADD32(ctx->r12, 0X10);
    // 0x80009BC8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80009BCC: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x80009BD0: sw          $t6, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r14;
    // 0x80009BD4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80009BD8: sw          $s4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r20;
    // 0x80009BDC: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80009BE0: nop

    // 0x80009BE4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80009BE8: sw          $t8, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r24;
    // 0x80009BEC: sw          $s7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r23;
    // 0x80009BF0: sw          $s6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r22;
L_80009BF4:
    // 0x80009BF4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80009BF8: bne         $s3, $fp, L_80009AC8
    if (ctx->r19 != ctx->r30) {
        // 0x80009BFC: addiu       $s1, $s1, 0xA
        ctx->r17 = ADD32(ctx->r17, 0XA);
            goto L_80009AC8;
    }
    // 0x80009BFC: addiu       $s1, $s1, 0xA
    ctx->r17 = ADD32(ctx->r17, 0XA);
    // 0x80009C00: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80009C04:
    // 0x80009C04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80009C08: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80009C0C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80009C10: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80009C14: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80009C18: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80009C1C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80009C20: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80009C24: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80009C28: jr          $ra
    // 0x80009C2C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80009C2C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80009C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009C30: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x80009C34: lh          $v0, 0x8($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X8);
    // 0x80009C38: lh          $a3, 0x4($a1)
    ctx->r7 = MEM_H(ctx->r5, 0X4);
    // 0x80009C3C: lh          $t1, 0x6($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X6);
    // 0x80009C40: sll         $t8, $v0, 10
    ctx->r24 = S32(ctx->r2 << 10);
    // 0x80009C44: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x80009C48: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80009C4C: sll         $t2, $t1, 10
    ctx->r10 = S32(ctx->r9 << 10);
    // 0x80009C50: subu        $v1, $t2, $t0
    ctx->r3 = SUB32(ctx->r10, ctx->r8);
    // 0x80009C54: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x80009C58: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80009C5C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x80009C60: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80009C64: bgez        $v1, L_80009C74
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80009C68: sra         $t3, $v1, 2
        ctx->r11 = S32(SIGNED(ctx->r3) >> 2);
            goto L_80009C74;
    }
    // 0x80009C68: sra         $t3, $v1, 2
    ctx->r11 = S32(SIGNED(ctx->r3) >> 2);
    // 0x80009C6C: addiu       $at, $v1, 0x3
    ctx->r1 = ADD32(ctx->r3, 0X3);
    // 0x80009C70: sra         $t3, $at, 2
    ctx->r11 = S32(SIGNED(ctx->r1) >> 2);
L_80009C74:
    // 0x80009C74: sll         $t4, $t3, 16
    ctx->r12 = S32(ctx->r11 << 16);
    // 0x80009C78: sra         $t5, $t4, 16
    ctx->r13 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80009C7C: sllv        $t9, $v0, $a3
    ctx->r25 = S32(ctx->r2 << (ctx->r7 & 31));
    // 0x80009C80: sllv        $t1, $t5, $a3
    ctx->r9 = S32(ctx->r13 << (ctx->r7 & 31));
    // 0x80009C84: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x80009C88: sllv        $t6, $a2, $a3
    ctx->r14 = S32(ctx->r6 << (ctx->r7 & 31));
    // 0x80009C8C: addu        $t5, $t3, $t1
    ctx->r13 = ADD32(ctx->r11, ctx->r9);
    // 0x80009C90: sh          $t9, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r25;
    // 0x80009C94: addu        $t7, $t5, $t1
    ctx->r15 = ADD32(ctx->r13, ctx->r9);
    // 0x80009C98: addu        $t9, $t7, $t1
    ctx->r25 = ADD32(ctx->r15, ctx->r9);
    // 0x80009C9C: sh          $t6, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r14;
    // 0x80009CA0: sh          $t3, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r11;
    // 0x80009CA4: sh          $t6, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r14;
    // 0x80009CA8: sh          $t5, 0x28($a0)
    MEM_H(0X28, ctx->r4) = ctx->r13;
    // 0x80009CAC: sh          $t6, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = ctx->r14;
    // 0x80009CB0: sh          $t7, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r15;
    // 0x80009CB4: sh          $t6, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r14;
    // 0x80009CB8: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    // 0x80009CBC: sh          $t9, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r25;
    // 0x80009CC0: jr          $ra
    // 0x80009CC4: sh          $t6, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r14;
    return;
    // 0x80009CC4: sh          $t6, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_80009CC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009CC8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80009CCC: lb          $v1, -0x309B($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X309B);
    // 0x80009CD0: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80009CD4: bne         $v1, $at, L_80009CE4
    if (ctx->r3 != ctx->r1) {
        // 0x80009CD8: slti        $at, $v1, 0x6
        ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
            goto L_80009CE4;
    }
    // 0x80009CD8: slti        $at, $v1, 0x6
    ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80009CDC: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80009CE0: slti        $at, $v1, 0x6
    ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
L_80009CE4:
    // 0x80009CE4: bne         $at, $zero, L_80009CF0
    if (ctx->r1 != 0) {
        // 0x80009CE8: nop
    
            goto L_80009CF0;
    }
    // 0x80009CE8: nop

    // 0x80009CEC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80009CF0:
    // 0x80009CF0: jr          $ra
    // 0x80009CF4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80009CF4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80009CF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009CF8: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80009CFC: addiu       $v0, $v0, -0x2F8C
    ctx->r2 = ADD32(ctx->r2, -0X2F8C);
    // 0x80009D00: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x80009D04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80009D08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80009D0C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80009D10: lui         $a1, 0x803F
    ctx->r5 = S32(0X803F << 16);
    // 0x80009D14: sb          $t7, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r15;
    // 0x80009D18: addiu       $a1, $a1, -0x5000
    ctx->r5 = ADD32(ctx->r5, -0X5000);
    // 0x80009D1C: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x80009D20: jal         0x8001B120
    // 0x80009D24: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_8001B120(rdram, ctx);
        goto after_0;
    // 0x80009D24: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x80009D28: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80009D2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80009D30: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80009D34: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80009D38: jr          $ra
    // 0x80009D3C: sb          $t8, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r24;
    return;
    // 0x80009D3C: sb          $t8, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r24;
;}
RECOMP_FUNC void func_80009D40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80009D40: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80009D44: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80009D48: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80009D4C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80009D50: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80009D54: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x80009D58: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80009D5C: jal         0x80009CC8
    // 0x80009D60: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    func_80009CC8(rdram, ctx);
        goto after_0;
    // 0x80009D60: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    after_0:
    // 0x80009D64: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x80009D68: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80009D6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80009D70: lh          $t7, 0x68E4($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X68E4);
    // 0x80009D74: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x80009D78: addiu       $t9, $t9, 0x68F0
    ctx->r25 = ADD32(ctx->r25, 0X68F0);
    // 0x80009D7C: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80009D80: jal         0x80009CF8
    // 0x80009D84: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    func_80009CF8(rdram, ctx);
        goto after_1;
    // 0x80009D84: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    after_1:
    // 0x80009D88: lh          $t0, 0xA($s0)
    ctx->r8 = MEM_H(ctx->r16, 0XA);
    // 0x80009D8C: lh          $t3, 0xC($s0)
    ctx->r11 = MEM_H(ctx->r16, 0XC);
    // 0x80009D90: sll         $t1, $t0, 26
    ctx->r9 = S32(ctx->r8 << 26);
    // 0x80009D94: sra         $s1, $t1, 16
    ctx->r17 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80009D98: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x80009D9C: sra         $t5, $a2, 16
    ctx->r13 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80009DA0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80009DA4: sll         $t4, $t3, 10
    ctx->r12 = S32(ctx->r11 << 10);
    // 0x80009DA8: sh          $t4, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r12;
    // 0x80009DAC: addiu       $a0, $a0, 0x6428
    ctx->r4 = ADD32(ctx->r4, 0X6428);
    // 0x80009DB0: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x80009DB4: jal         0x80009C30
    // 0x80009DB8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80009C30(rdram, ctx);
        goto after_2;
    // 0x80009DB8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80009DBC: lh          $t6, 0x50($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X50);
    // 0x80009DC0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80009DC4: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80009DC8: lwc1        $f9, 0x30B0($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X30B0);
    // 0x80009DCC: cvt.d.w     $f22, $f6
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    ctx->f22.d = CVT_D_W(ctx->f6.u32l);
    // 0x80009DD0: lwc1        $f8, 0x30B4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X30B4);
    // 0x80009DD4: mtc1        $s1, $f4
    ctx->f4.u32l = ctx->r17;
    // 0x80009DD8: mul.d       $f10, $f22, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f22.d, ctx->f8.d);
    // 0x80009DDC: cvt.d.w     $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    ctx->f20.d = CVT_D_W(ctx->f4.u32l);
    // 0x80009DE0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80009DE4: addiu       $a0, $a0, 0x6478
    ctx->r4 = ADD32(ctx->r4, 0X6478);
    // 0x80009DE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80009DEC: add.d       $f16, $f20, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f20.d + ctx->f10.d;
    // 0x80009DF0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80009DF4: nop

    // 0x80009DF8: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80009DFC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80009E00: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80009E04: nop

    // 0x80009E08: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x80009E0C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80009E10: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80009E14: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x80009E18: jal         0x80009C30
    // 0x80009E1C: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    func_80009C30(rdram, ctx);
        goto after_3;
    // 0x80009E1C: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    after_3:
    // 0x80009E20: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80009E24: lwc1        $f5, 0x30B8($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X30B8);
    // 0x80009E28: lwc1        $f4, 0x30BC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X30BC);
    // 0x80009E2C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80009E30: mul.d       $f6, $f22, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f22.d, ctx->f4.d);
    // 0x80009E34: addiu       $a0, $a0, 0x64C8
    ctx->r4 = ADD32(ctx->r4, 0X64C8);
    // 0x80009E38: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80009E3C: add.d       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f20.d + ctx->f6.d;
    // 0x80009E40: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80009E44: nop

    // 0x80009E48: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80009E4C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80009E50: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80009E54: nop

    // 0x80009E58: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x80009E5C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80009E60: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80009E64: sll         $t1, $a2, 16
    ctx->r9 = S32(ctx->r6 << 16);
    // 0x80009E68: jal         0x80009C30
    // 0x80009E6C: sra         $a2, $t1, 16
    ctx->r6 = S32(SIGNED(ctx->r9) >> 16);
    func_80009C30(rdram, ctx);
        goto after_4;
    // 0x80009E6C: sra         $a2, $t1, 16
    ctx->r6 = S32(SIGNED(ctx->r9) >> 16);
    after_4:
    // 0x80009E70: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80009E74: lwc1        $f17, 0x30C0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X30C0);
    // 0x80009E78: lwc1        $f16, 0x30C4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X30C4);
    // 0x80009E7C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80009E80: mul.d       $f18, $f22, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f22.d, ctx->f16.d);
    // 0x80009E84: addiu       $a0, $a0, 0x6518
    ctx->r4 = ADD32(ctx->r4, 0X6518);
    // 0x80009E88: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80009E8C: add.d       $f4, $f20, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f20.d + ctx->f18.d;
    // 0x80009E90: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80009E94: nop

    // 0x80009E98: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80009E9C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80009EA0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80009EA4: nop

    // 0x80009EA8: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x80009EAC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80009EB0: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80009EB4: sll         $t4, $a2, 16
    ctx->r12 = S32(ctx->r6 << 16);
    // 0x80009EB8: jal         0x80009C30
    // 0x80009EBC: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
    func_80009C30(rdram, ctx);
        goto after_5;
    // 0x80009EBC: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
    after_5:
    // 0x80009EC0: lh          $t6, 0x50($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X50);
    // 0x80009EC4: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80009EC8: addu        $a2, $s1, $t6
    ctx->r6 = ADD32(ctx->r17, ctx->r14);
    // 0x80009ECC: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x80009ED0: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80009ED4: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    // 0x80009ED8: addiu       $a0, $a0, 0x6568
    ctx->r4 = ADD32(ctx->r4, 0X6568);
    // 0x80009EDC: jal         0x80009C30
    // 0x80009EE0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80009C30(rdram, ctx);
        goto after_6;
    // 0x80009EE0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x80009EE4: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x80009EE8: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80009EEC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80009EF0: addiu       $a0, $a0, 0x65B8
    ctx->r4 = ADD32(ctx->r4, 0X65B8);
    // 0x80009EF4: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80009EF8: jal         0x80009C30
    // 0x80009EFC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80009C30(rdram, ctx);
        goto after_7;
    // 0x80009EFC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
    // 0x80009F00: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80009F04: lwc1        $f9, 0x30C8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X30C8);
    // 0x80009F08: lwc1        $f8, 0x30CC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X30CC);
    // 0x80009F0C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80009F10: mul.d       $f10, $f22, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f22.d, ctx->f8.d);
    // 0x80009F14: addiu       $a0, $a0, 0x6608
    ctx->r4 = ADD32(ctx->r4, 0X6608);
    // 0x80009F18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80009F1C: add.d       $f16, $f20, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f20.d + ctx->f10.d;
    // 0x80009F20: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80009F24: nop

    // 0x80009F28: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80009F2C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80009F30: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80009F34: nop

    // 0x80009F38: cvt.w.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_D(ctx->f16.d);
    // 0x80009F3C: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80009F40: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80009F44: sll         $t1, $a2, 16
    ctx->r9 = S32(ctx->r6 << 16);
    // 0x80009F48: jal         0x80009C30
    // 0x80009F4C: sra         $a2, $t1, 16
    ctx->r6 = S32(SIGNED(ctx->r9) >> 16);
    func_80009C30(rdram, ctx);
        goto after_8;
    // 0x80009F4C: sra         $a2, $t1, 16
    ctx->r6 = S32(SIGNED(ctx->r9) >> 16);
    after_8:
    // 0x80009F50: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80009F54: lwc1        $f5, 0x30D0($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X30D0);
    // 0x80009F58: lwc1        $f4, 0x30D4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X30D4);
    // 0x80009F5C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80009F60: mul.d       $f6, $f22, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = MUL_D(ctx->f22.d, ctx->f4.d);
    // 0x80009F64: addiu       $a0, $a0, 0x6658
    ctx->r4 = ADD32(ctx->r4, 0X6658);
    // 0x80009F68: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80009F6C: add.d       $f8, $f20, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f20.d + ctx->f6.d;
    // 0x80009F70: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80009F74: nop

    // 0x80009F78: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80009F7C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80009F80: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80009F84: nop

    // 0x80009F88: cvt.w.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_D(ctx->f8.d);
    // 0x80009F8C: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80009F90: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80009F94: sll         $t4, $a2, 16
    ctx->r12 = S32(ctx->r6 << 16);
    // 0x80009F98: jal         0x80009C30
    // 0x80009F9C: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
    func_80009C30(rdram, ctx);
        goto after_9;
    // 0x80009F9C: sra         $a2, $t4, 16
    ctx->r6 = S32(SIGNED(ctx->r12) >> 16);
    after_9:
    // 0x80009FA0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80009FA4: lwc1        $f17, 0x30D8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X30D8);
    // 0x80009FA8: lwc1        $f16, 0x30DC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X30DC);
    // 0x80009FAC: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80009FB0: mul.d       $f18, $f22, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f22.d, ctx->f16.d);
    // 0x80009FB4: addiu       $a0, $a0, 0x66A8
    ctx->r4 = ADD32(ctx->r4, 0X66A8);
    // 0x80009FB8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80009FBC: add.d       $f4, $f20, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f20.d + ctx->f18.d;
    // 0x80009FC0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80009FC4: nop

    // 0x80009FC8: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80009FCC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80009FD0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80009FD4: nop

    // 0x80009FD8: cvt.w.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_D(ctx->f4.d);
    // 0x80009FDC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80009FE0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80009FE4: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x80009FE8: jal         0x80009C30
    // 0x80009FEC: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
    func_80009C30(rdram, ctx);
        goto after_10;
    // 0x80009FEC: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
    after_10:
    // 0x80009FF0: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x80009FF4: lh          $a2, 0x36($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X36);
    // 0x80009FF8: addiu       $a0, $a0, 0x66F8
    ctx->r4 = ADD32(ctx->r4, 0X66F8);
    // 0x80009FFC: jal         0x80009C30
    // 0x8000A000: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80009C30(rdram, ctx);
        goto after_11;
    // 0x8000A000: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
    // 0x8000A004: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8000A008: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8000A00C: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8000A010: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8000A014: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8000A018: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8000A01C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8000A020: jr          $ra
    // 0x8000A024: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8000A024: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8000A028(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000A028: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8000A02C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000A030: jal         0x80009CC8
    // 0x8000A034: nop

    func_80009CC8(rdram, ctx);
        goto after_0;
    // 0x8000A034: nop

    after_0:
    // 0x8000A038: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x8000A03C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8000A040: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8000A044: lh          $t7, 0x68E4($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X68E4);
    // 0x8000A048: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8000A04C: addiu       $t9, $t9, 0x68F0
    ctx->r25 = ADD32(ctx->r25, 0X68F0);
    // 0x8000A050: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x8000A054: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x8000A058: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8000A05C: addiu       $v1, $v1, -0x30A0
    ctx->r3 = ADD32(ctx->r3, -0X30A0);
    // 0x8000A060: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x8000A064: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8000A068: lb          $t8, 0x5($v1)
    ctx->r24 = MEM_B(ctx->r3, 0X5);
    // 0x8000A06C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8000A070: beq         $t8, $at, L_8000A0AC
    if (ctx->r24 == ctx->r1) {
        // 0x8000A074: sw          $t7, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r15;
            goto L_8000A0AC;
    }
    // 0x8000A074: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x8000A078: lb          $t9, 0x1($v1)
    ctx->r25 = MEM_B(ctx->r3, 0X1);
    // 0x8000A07C: lb          $t7, 0x4($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X4);
    // 0x8000A080: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x8000A084: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8000A088: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8000A08C: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x8000A090: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8000A094: mfhi        $t9
    ctx->r25 = hi;
    // 0x8000A098: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x8000A09C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8000A0A0: lh          $t7, 0x6970($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X6970);
    // 0x8000A0A4: b           L_8000A0B4
    // 0x8000A0A8: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
        goto L_8000A0B4;
    // 0x8000A0A8: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
L_8000A0AC:
    // 0x8000A0AC: addiu       $t8, $zero, 0xC
    ctx->r24 = ADD32(0, 0XC);
    // 0x8000A0B0: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
L_8000A0B4:
    // 0x8000A0B4: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8000A0B8: addiu       $v1, $v1, -0x2F94
    ctx->r3 = ADD32(ctx->r3, -0X2F94);
    // 0x8000A0BC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A0C0: lui         $ra, 0xE700
    ctx->r31 = S32(0XE700 << 16);
    // 0x8000A0C4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8000A0C8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8000A0CC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000A0D0: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x8000A0D4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A0D8: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x8000A0DC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8000A0E0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000A0E4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000A0E8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8000A0EC: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8000A0F0: addiu       $t7, $t7, 0x5388
    ctx->r15 = ADD32(ctx->r15, 0X5388);
    // 0x8000A0F4: sll         $t6, $t9, 5
    ctx->r14 = S32(ctx->r25 << 5);
    // 0x8000A0F8: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    // 0x8000A0FC: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    // 0x8000A100: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A104: lui         $t9, 0xE800
    ctx->r25 = S32(0XE800 << 16);
    // 0x8000A108: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000A10C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000A110: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000A114: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000A118: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A11C: lui         $t7, 0xF500
    ctx->r15 = S32(0XF500 << 16);
    // 0x8000A120: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8000A124: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000A128: ori         $t7, $t7, 0x110
    ctx->r15 = ctx->r15 | 0X110;
    // 0x8000A12C: lui         $t8, 0x700
    ctx->r24 = S32(0X700 << 16);
    // 0x8000A130: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8000A134: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000A138: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A13C: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x8000A140: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8000A144: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8000A148: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000A14C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8000A150: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A154: lui         $t9, 0x703
    ctx->r25 = S32(0X703 << 16);
    // 0x8000A158: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8000A15C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8000A160: ori         $t9, $t9, 0xC000
    ctx->r25 = ctx->r25 | 0XC000;
    // 0x8000A164: lui         $t8, 0xF000
    ctx->r24 = S32(0XF000 << 16);
    // 0x8000A168: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000A16C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8000A170: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A174: addiu       $t9, $a0, 0x20
    ctx->r25 = ADD32(ctx->r4, 0X20);
    // 0x8000A178: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8000A17C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000A180: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000A184: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x8000A188: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A18C: lui         $t8, 0xFD10
    ctx->r24 = S32(0XFD10 << 16);
    // 0x8000A190: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8000A194: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8000A198: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8000A19C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000A1A0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A1A4: lui         $t7, 0xE800
    ctx->r15 = S32(0XE800 << 16);
    // 0x8000A1A8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8000A1AC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000A1B0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000A1B4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000A1B8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A1BC: lui         $t9, 0xF500
    ctx->r25 = S32(0XF500 << 16);
    // 0x8000A1C0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000A1C4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000A1C8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8000A1CC: ori         $t9, $t9, 0x100
    ctx->r25 = ctx->r25 | 0X100;
    // 0x8000A1D0: lui         $t7, 0x700
    ctx->r15 = S32(0X700 << 16);
    // 0x8000A1D4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8000A1D8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000A1DC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A1E0: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x8000A1E4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000A1E8: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000A1EC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000A1F0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000A1F4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A1F8: lui         $t8, 0x703
    ctx->r24 = S32(0X703 << 16);
    // 0x8000A1FC: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8000A200: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8000A204: ori         $t8, $t8, 0xC000
    ctx->r24 = ctx->r24 | 0XC000;
    // 0x8000A208: lui         $t6, 0xF000
    ctx->r14 = S32(0XF000 << 16);
    // 0x8000A20C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8000A210: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8000A214: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A218: lui         $t8, 0x8009
    ctx->r24 = S32(0X8009 << 16);
    // 0x8000A21C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8000A220: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8000A224: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000A228: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x8000A22C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A230: addiu       $t8, $t8, 0x5590
    ctx->r24 = ADD32(ctx->r24, 0X5590);
    // 0x8000A234: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8000A238: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8000A23C: lui         $t6, 0xFD50
    ctx->r14 = S32(0XFD50 << 16);
    // 0x8000A240: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8000A244: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8000A248: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A24C: lui         $t6, 0x701
    ctx->r14 = S32(0X701 << 16);
    // 0x8000A250: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8000A254: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8000A258: lui         $t7, 0xF550
    ctx->r15 = S32(0XF550 << 16);
    // 0x8000A25C: ori         $t7, $t7, 0xC0
    ctx->r15 = ctx->r15 | 0XC0;
    // 0x8000A260: ori         $t6, $t6, 0x705C
    ctx->r14 = ctx->r14 | 0X705C;
    // 0x8000A264: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8000A268: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000A26C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A270: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x8000A274: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000A278: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000A27C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000A280: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000A284: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A288: lui         $t8, 0x70F
    ctx->r24 = S32(0X70F << 16);
    // 0x8000A28C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8000A290: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8000A294: ori         $t8, $t8, 0xF400
    ctx->r24 = ctx->r24 | 0XF400;
    // 0x8000A298: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x8000A29C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8000A2A0: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8000A2A4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A2A8: lui         $t8, 0x101
    ctx->r24 = S32(0X101 << 16);
    // 0x8000A2AC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8000A2B0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8000A2B4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000A2B8: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x8000A2BC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A2C0: lui         $t6, 0xF540
    ctx->r14 = S32(0XF540 << 16);
    // 0x8000A2C4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8000A2C8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8000A2CC: ori         $t6, $t6, 0x4C0
    ctx->r14 = ctx->r14 | 0X4C0;
    // 0x8000A2D0: ori         $t8, $t8, 0x705C
    ctx->r24 = ctx->r24 | 0X705C;
    // 0x8000A2D4: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8000A2D8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8000A2DC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A2E0: lui         $t6, 0x107
    ctx->r14 = S32(0X107 << 16);
    // 0x8000A2E4: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8000A2E8: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8000A2EC: ori         $t6, $t6, 0xC07C
    ctx->r14 = ctx->r14 | 0XC07C;
    // 0x8000A2F0: lui         $t7, 0xF200
    ctx->r15 = S32(0XF200 << 16);
    // 0x8000A2F4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000A2F8: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8000A2FC: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x8000A300: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    // 0x8000A304: beq         $t8, $zero, L_8000A408
    if (ctx->r24 == 0) {
        // 0x8000A308: nop
    
            goto L_8000A408;
    }
    // 0x8000A308: nop

    // 0x8000A30C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A310: lui         $t7, 0xFD50
    ctx->r15 = S32(0XFD50 << 16);
    // 0x8000A314: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8000A318: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8000A31C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000A320: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8000A324: lui         $t9, 0xF550
    ctx->r25 = S32(0XF550 << 16);
    // 0x8000A328: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8000A32C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A330: lui         $at, 0x701
    ctx->r1 = S32(0X701 << 16);
    // 0x8000A334: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000A338: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000A33C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000A340: lh          $a0, 0x4($t4)
    ctx->r4 = MEM_H(ctx->r12, 0X4);
    // 0x8000A344: ori         $at, $at, 0x4000
    ctx->r1 = ctx->r1 | 0X4000;
    // 0x8000A348: andi        $t7, $a0, 0xF
    ctx->r15 = ctx->r4 & 0XF;
    // 0x8000A34C: sll         $t6, $t7, 10
    ctx->r14 = S32(ctx->r15 << 10);
    // 0x8000A350: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x8000A354: ori         $t9, $t8, 0x50
    ctx->r25 = ctx->r24 | 0X50;
    // 0x8000A358: or          $t7, $t9, $t7
    ctx->r15 = ctx->r25 | ctx->r15;
    // 0x8000A35C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8000A360: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A364: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x8000A368: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8000A36C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8000A370: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000A374: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8000A378: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A37C: lui         $t6, 0x70F
    ctx->r14 = S32(0X70F << 16);
    // 0x8000A380: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8000A384: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8000A388: ori         $t6, $t6, 0xF400
    ctx->r14 = ctx->r14 | 0XF400;
    // 0x8000A38C: lui         $t7, 0xF300
    ctx->r15 = S32(0XF300 << 16);
    // 0x8000A390: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000A394: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8000A398: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A39C: lui         $t7, 0xF540
    ctx->r15 = S32(0XF540 << 16);
    // 0x8000A3A0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000A3A4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000A3A8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8000A3AC: sw          $ra, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r31;
    // 0x8000A3B0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A3B4: ori         $t7, $t7, 0x400
    ctx->r15 = ctx->r15 | 0X400;
    // 0x8000A3B8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8000A3BC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8000A3C0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8000A3C4: lh          $a0, 0x4($t4)
    ctx->r4 = MEM_H(ctx->r12, 0X4);
    // 0x8000A3C8: lui         $at, 0x11
    ctx->r1 = S32(0X11 << 16);
    // 0x8000A3CC: andi        $t6, $a0, 0xF
    ctx->r14 = ctx->r4 & 0XF;
    // 0x8000A3D0: sll         $t8, $t6, 10
    ctx->r24 = S32(ctx->r14 << 10);
    // 0x8000A3D4: ori         $at, $at, 0x4000
    ctx->r1 = ctx->r1 | 0X4000;
    // 0x8000A3D8: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8000A3DC: ori         $t7, $t9, 0x50
    ctx->r15 = ctx->r25 | 0X50;
    // 0x8000A3E0: or          $t6, $t7, $t6
    ctx->r14 = ctx->r15 | ctx->r14;
    // 0x8000A3E4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x8000A3E8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8000A3EC: lui         $t7, 0x7
    ctx->r15 = S32(0X7 << 16);
    // 0x8000A3F0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8000A3F4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000A3F8: ori         $t7, $t7, 0xC07C
    ctx->r15 = ctx->r15 | 0XC07C;
    // 0x8000A3FC: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x8000A400: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8000A404: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
L_8000A408:
    // 0x8000A408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000A40C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x8000A410: jr          $ra
    // 0x8000A414: nop

    return;
    // 0x8000A414: nop

;}
RECOMP_FUNC void func_8000A418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000A418: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8000A41C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000A420: jal         0x80009CC8
    // 0x8000A424: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_80009CC8(rdram, ctx);
        goto after_0;
    // 0x8000A424: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8000A428: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x8000A42C: addiu       $s0, $s0, -0x2F94
    ctx->r16 = ADD32(ctx->r16, -0X2F94);
    // 0x8000A430: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8000A434: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x8000A438: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x8000A43C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8000A440: lh          $t7, 0x68E4($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X68E4);
    // 0x8000A444: addiu       $t0, $v1, 0x8
    ctx->r8 = ADD32(ctx->r3, 0X8);
    // 0x8000A448: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x8000A44C: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x8000A450: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8000A454: sw          $t1, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r9;
    // 0x8000A458: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8000A45C: lbu         $t2, -0x301C($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X301C);
    // 0x8000A460: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8000A464: addiu       $t9, $t9, 0x68F0
    ctx->r25 = ADD32(ctx->r25, 0X68F0);
    // 0x8000A468: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x8000A46C: andi        $t3, $t2, 0x2
    ctx->r11 = ctx->r10 & 0X2;
    // 0x8000A470: beq         $t3, $zero, L_8000A5D4
    if (ctx->r11 == 0) {
        // 0x8000A474: addu        $a1, $t8, $t9
        ctx->r5 = ADD32(ctx->r24, ctx->r25);
            goto L_8000A5D4;
    }
    // 0x8000A474: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x8000A478: jal         0x80004804
    // 0x8000A47C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80004804(rdram, ctx);
        goto after_1;
    // 0x8000A47C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_1:
    // 0x8000A480: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8000A484: beq         $v0, $zero, L_8000A5D4
    if (ctx->r2 == 0) {
        // 0x8000A488: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_8000A5D4;
    }
    // 0x8000A488: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8000A48C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8000A490: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8000A494: addiu       $t4, $v1, 0x8
    ctx->r12 = ADD32(ctx->r3, 0X8);
    // 0x8000A498: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x8000A49C: addiu       $t6, $t6, 0x6748
    ctx->r14 = ADD32(ctx->r14, 0X6748);
    // 0x8000A4A0: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8000A4A4: addiu       $a0, $a0, -0x30A0
    ctx->r4 = ADD32(ctx->r4, -0X30A0);
    // 0x8000A4A8: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x8000A4AC: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8000A4B0: lb          $t7, 0x4($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X4);
    // 0x8000A4B4: lui         $t2, 0xF800
    ctx->r10 = S32(0XF800 << 16);
    // 0x8000A4B8: beq         $t7, $zero, L_8000A4EC
    if (ctx->r15 == 0) {
        // 0x8000A4BC: nop
    
            goto L_8000A4EC;
    }
    // 0x8000A4BC: nop

    // 0x8000A4C0: lb          $t8, 0x5($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X5);
    // 0x8000A4C4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8000A4C8: beq         $t8, $at, L_8000A4EC
    if (ctx->r24 == ctx->r1) {
        // 0x8000A4CC: nop
    
            goto L_8000A4EC;
    }
    // 0x8000A4CC: nop

    // 0x8000A4D0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8000A4D4: lui         $t0, 0xF800
    ctx->r8 = S32(0XF800 << 16);
    // 0x8000A4D8: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x8000A4DC: sw          $t9, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r25;
    // 0x8000A4E0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8000A4E4: b           L_8000A504
    // 0x8000A4E8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
        goto L_8000A504;
    // 0x8000A4E8: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
L_8000A4EC:
    // 0x8000A4EC: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8000A4F0: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8000A4F4: addiu       $t1, $v1, 0x8
    ctx->r9 = ADD32(ctx->r3, 0X8);
    // 0x8000A4F8: sw          $t1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r9;
    // 0x8000A4FC: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x8000A500: sw          $t2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r10;
L_8000A504:
    // 0x8000A504: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x8000A508: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8000A50C: bne         $t4, $zero, L_8000A550
    if (ctx->r12 != 0) {
        // 0x8000A510: addiu       $a0, $a0, 0x6428
        ctx->r4 = ADD32(ctx->r4, 0X6428);
            goto L_8000A550;
    }
    // 0x8000A510: addiu       $a0, $a0, 0x6428
    ctx->r4 = ADD32(ctx->r4, 0X6428);
    // 0x8000A514: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8000A518: addiu       $a0, $a0, 0x5DA8
    ctx->r4 = ADD32(ctx->r4, 0X5DA8);
    // 0x8000A51C: jal         0x8000A5E4
    // 0x8000A520: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    func_8000A5E4(rdram, ctx);
        goto after_2;
    // 0x8000A520: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_2:
    // 0x8000A524: jal         0x8000A028
    // 0x8000A528: nop

    func_8000A028(rdram, ctx);
        goto after_3;
    // 0x8000A528: nop

    after_3:
    // 0x8000A52C: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8000A530: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8000A534: addiu       $t5, $v1, 0x8
    ctx->r13 = ADD32(ctx->r3, 0X8);
    // 0x8000A538: lui         $a2, 0x600
    ctx->r6 = S32(0X600 << 16);
    // 0x8000A53C: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x8000A540: addiu       $t6, $t6, 0x63B0
    ctx->r14 = ADD32(ctx->r14, 0X63B0);
    // 0x8000A544: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x8000A548: b           L_8000A584
    // 0x8000A54C: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
        goto L_8000A584;
    // 0x8000A54C: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
L_8000A550:
    // 0x8000A550: jal         0x8000A5E4
    // 0x8000A554: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    func_8000A5E4(rdram, ctx);
        goto after_4;
    // 0x8000A554: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    after_4:
    // 0x8000A558: jal         0x8000A028
    // 0x8000A55C: nop

    func_8000A028(rdram, ctx);
        goto after_5;
    // 0x8000A55C: nop

    after_5:
    // 0x8000A560: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8000A564: lui         $t9, 0x8009
    ctx->r25 = S32(0X8009 << 16);
    // 0x8000A568: addiu       $t7, $v1, 0x8
    ctx->r15 = ADD32(ctx->r3, 0X8);
    // 0x8000A56C: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x8000A570: addiu       $t9, $t9, 0x67B8
    ctx->r25 = ADD32(ctx->r25, 0X67B8);
    // 0x8000A574: lui         $t8, 0x600
    ctx->r24 = S32(0X600 << 16);
    // 0x8000A578: lui         $a2, 0x600
    ctx->r6 = S32(0X600 << 16);
    // 0x8000A57C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8000A580: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
L_8000A584:
    // 0x8000A584: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8000A588: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x8000A58C: addiu       $t0, $v1, 0x8
    ctx->r8 = ADD32(ctx->r3, 0X8);
    // 0x8000A590: sw          $t0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r8;
    // 0x8000A594: addiu       $t1, $t1, -0x2798
    ctx->r9 = ADD32(ctx->r9, -0X2798);
    // 0x8000A598: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x8000A59C: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x8000A5A0: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8000A5A4: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x8000A5A8: addiu       $t2, $v1, 0x8
    ctx->r10 = ADD32(ctx->r3, 0X8);
    // 0x8000A5AC: sw          $t2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r10;
    // 0x8000A5B0: addiu       $t3, $t3, -0x2730
    ctx->r11 = ADD32(ctx->r11, -0X2730);
    // 0x8000A5B4: sw          $t3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r11;
    // 0x8000A5B8: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x8000A5BC: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8000A5C0: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x8000A5C4: addiu       $t4, $v1, 0x8
    ctx->r12 = ADD32(ctx->r3, 0X8);
    // 0x8000A5C8: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x8000A5CC: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8000A5D0: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
L_8000A5D4:
    // 0x8000A5D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000A5D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000A5DC: jr          $ra
    // 0x8000A5E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8000A5E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8000A5E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000A5E4: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8000A5E8: sw          $fp, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r30;
    // 0x8000A5EC: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x8000A5F0: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x8000A5F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8000A5F8: or          $fp, $a1, $zero
    ctx->r30 = ctx->r5 | 0;
    // 0x8000A5FC: sw          $ra, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r31;
    // 0x8000A600: sw          $s7, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r23;
    // 0x8000A604: sw          $s6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r22;
    // 0x8000A608: sw          $s5, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r21;
    // 0x8000A60C: sw          $s4, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r20;
    // 0x8000A610: sw          $s3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r19;
    // 0x8000A614: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8000A618: swc1        $f31, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f_odd[(31 - 1) * 2];
    // 0x8000A61C: swc1        $f30, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f30.u32l;
    // 0x8000A620: swc1        $f29, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f_odd[(29 - 1) * 2];
    // 0x8000A624: swc1        $f28, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f28.u32l;
    // 0x8000A628: swc1        $f27, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f_odd[(27 - 1) * 2];
    // 0x8000A62C: swc1        $f26, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f26.u32l;
    // 0x8000A630: swc1        $f25, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8000A634: swc1        $f24, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f24.u32l;
    // 0x8000A638: swc1        $f23, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8000A63C: swc1        $f22, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f22.u32l;
    // 0x8000A640: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8000A644: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8000A648: blez        $a1, L_8000A8E4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8000A64C: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8000A8E4;
    }
    // 0x8000A64C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8000A650: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x8000A654: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x8000A658: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x8000A65C: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8000A660: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000A664: lwc1        $f25, 0x30E0($at)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r1, 0X30E0);
    // 0x8000A668: lwc1        $f24, 0x30E4($at)
    ctx->f24.u32l = MEM_W(ctx->r1, 0X30E4);
    // 0x8000A66C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8000A670: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x8000A674: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000A678: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x8000A67C: lwc1        $f21, 0x30E8($at)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r1, 0X30E8);
    // 0x8000A680: lwc1        $f20, 0x30EC($at)
    ctx->f20.u32l = MEM_W(ctx->r1, 0X30EC);
    // 0x8000A684: mtc1        $zero, $f28
    ctx->f28.u32l = 0;
    // 0x8000A688: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8000A68C: addiu       $s1, $s1, -0x30A0
    ctx->r17 = ADD32(ctx->r17, -0X30A0);
    // 0x8000A690: addiu       $s7, $zero, 0x5
    ctx->r23 = ADD32(0, 0X5);
    // 0x8000A694: addiu       $s6, $zero, 0x14
    ctx->r22 = ADD32(0, 0X14);
    // 0x8000A698: addiu       $s5, $sp, 0x90
    ctx->r21 = ADD32(ctx->r29, 0X90);
    // 0x8000A69C: addiu       $s4, $sp, 0x94
    ctx->r20 = ADD32(ctx->r29, 0X94);
    // 0x8000A6A0: addiu       $s3, $sp, 0x98
    ctx->r19 = ADD32(ctx->r29, 0X98);
L_8000A6A4:
    // 0x8000A6A4: lh          $t6, 0x0($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X0);
    // 0x8000A6A8: lh          $t7, 0x2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2);
    // 0x8000A6AC: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8000A6B0: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8000A6B4: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8000A6B8: lh          $t8, 0x4($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X4);
    // 0x8000A6BC: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    // 0x8000A6C0: mul.d       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = MUL_D(ctx->f6.d, ctx->f20.d);
    // 0x8000A6C4: cvt.d.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.d = CVT_D_W(ctx->f10.u32l);
    // 0x8000A6C8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8000A6CC: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x8000A6D0: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x8000A6D4: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    // 0x8000A6D8: mul.d       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f20.d); 
    ctx->f4.d = MUL_D(ctx->f18.d, ctx->f20.d);
    // 0x8000A6DC: cvt.d.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.d = CVT_D_W(ctx->f6.u32l);
    // 0x8000A6E0: mul.d       $f10, $f8, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f20.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f20.d);
    // 0x8000A6E4: cvt.s.d     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f14.fl = CVT_S_D(ctx->f4.d);
    // 0x8000A6E8: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x8000A6EC: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x8000A6F0: jal         0x80004650
    // 0x8000A6F4: nop

    func_80004650(rdram, ctx);
        goto after_0;
    // 0x8000A6F4: nop

    after_0:
    // 0x8000A6F8: lwc1        $f16, 0x90($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X90);
    // 0x8000A6FC: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x8000A700: div.s       $f4, $f16, $f30
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 30);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f30.fl); 
    ctx->f4.fl = DIV_S(ctx->f16.fl, ctx->f30.fl);
    // 0x8000A704: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8000A708: lui         $at, 0x43AF
    ctx->r1 = S32(0X43AF << 16);
    // 0x8000A70C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8000A710: addiu       $t9, $zero, 0x96
    ctx->r25 = ADD32(0, 0X96);
    // 0x8000A714: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8000A718: sub.d       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f22.d); 
    ctx->f8.d = ctx->f6.d - ctx->f22.d;
    // 0x8000A71C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000A720: mul.d       $f10, $f8, $f24
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f24.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f24.d);
    // 0x8000A724: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000A728: div.s       $f8, $f16, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f16.fl, ctx->f6.fl);
    // 0x8000A72C: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    // 0x8000A730: c.lt.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl < ctx->f14.fl;
    // 0x8000A734: nop

    // 0x8000A738: bc1f        L_8000A74C
    if (!c1cs) {
        // 0x8000A73C: nop
    
            goto L_8000A74C;
    }
    // 0x8000A73C: nop

    // 0x8000A740: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8000A744: nop

    // 0x8000A748: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
L_8000A74C:
    // 0x8000A74C: c.lt.s      $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    c1cs = ctx->f14.fl < ctx->f26.fl;
    // 0x8000A750: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8000A754: bc1f        L_8000A760
    if (!c1cs) {
        // 0x8000A758: sub.d       $f18, $f10, $f22
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f18.d = ctx->f10.d - ctx->f22.d;
            goto L_8000A760;
    }
    // 0x8000A758: sub.d       $f18, $f10, $f22
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f22.d); 
    ctx->f18.d = ctx->f10.d - ctx->f22.d;
    // 0x8000A75C: mov.s       $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    ctx->f14.fl = ctx->f26.fl;
L_8000A760:
    // 0x8000A760: lb          $t0, 0x1($s1)
    ctx->r8 = MEM_B(ctx->r17, 0X1);
    // 0x8000A764: lb          $t1, 0x4($s1)
    ctx->r9 = MEM_B(ctx->r17, 0X4);
    // 0x8000A768: multu       $t0, $s6
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r22)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8000A76C: mflo        $v0
    ctx->r2 = lo;
    // 0x8000A770: addiu       $v0, $v0, 0x32
    ctx->r2 = ADD32(ctx->r2, 0X32);
    // 0x8000A774: beq         $t1, $zero, L_8000A790
    if (ctx->r9 == 0) {
        // 0x8000A778: nop
    
            goto L_8000A790;
    }
    // 0x8000A778: nop

    // 0x8000A77C: lb          $t2, 0x5($s1)
    ctx->r10 = MEM_B(ctx->r17, 0X5);
    // 0x8000A780: nop

    // 0x8000A784: beq         $s7, $t2, L_8000A790
    if (ctx->r23 == ctx->r10) {
        // 0x8000A788: nop
    
            goto L_8000A790;
    }
    // 0x8000A788: nop

    // 0x8000A78C: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
L_8000A790:
    // 0x8000A790: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8000A794: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x8000A798: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8000A79C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000A7A0: mul.d       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f18.d, ctx->f6.d);
    // 0x8000A7A4: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000A7A8: cvt.s.d     $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f2.fl = CVT_S_D(ctx->f8.d);
    // 0x8000A7AC: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x8000A7B0: nop

    // 0x8000A7B4: bc1f        L_8000A7C0
    if (!c1cs) {
        // 0x8000A7B8: nop
    
            goto L_8000A7C0;
    }
    // 0x8000A7B8: nop

    // 0x8000A7BC: mov.s       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.fl = ctx->f12.fl;
L_8000A7C0:
    // 0x8000A7C0: c.lt.s      $f2, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    c1cs = ctx->f2.fl < ctx->f28.fl;
    // 0x8000A7C4: nop

    // 0x8000A7C8: bc1f        L_8000A7D4
    if (!c1cs) {
        // 0x8000A7CC: nop
    
            goto L_8000A7D4;
    }
    // 0x8000A7CC: nop

    // 0x8000A7D0: mov.s       $f2, $f28
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 28);
    ctx->f2.fl = ctx->f28.fl;
L_8000A7D4:
    // 0x8000A7D4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8000A7D8: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8000A7DC: nop

    // 0x8000A7E0: cvt.w.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    ctx->f4.u32l = CVT_W_S(ctx->f14.fl);
    // 0x8000A7E4: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8000A7E8: nop

    // 0x8000A7EC: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8000A7F0: beq         $v0, $zero, L_8000A83C
    if (ctx->r2 == 0) {
        // 0x8000A7F4: nop
    
            goto L_8000A83C;
    }
    // 0x8000A7F4: nop

    // 0x8000A7F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000A7FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000A800: sub.s       $f4, $f14, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f4.fl;
    // 0x8000A804: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000A808: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8000A80C: nop

    // 0x8000A810: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8000A814: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8000A818: nop

    // 0x8000A81C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8000A820: bne         $v0, $zero, L_8000A834
    if (ctx->r2 != 0) {
        // 0x8000A824: nop
    
            goto L_8000A834;
    }
    // 0x8000A824: nop

    // 0x8000A828: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x8000A82C: b           L_8000A84C
    // 0x8000A830: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_8000A84C;
    // 0x8000A830: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_8000A834:
    // 0x8000A834: b           L_8000A84C
    // 0x8000A838: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8000A84C;
    // 0x8000A838: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8000A83C:
    // 0x8000A83C: mfc1        $v0, $f4
    ctx->r2 = (int32_t)ctx->f4.u32l;
    // 0x8000A840: nop

    // 0x8000A844: bltz        $v0, L_8000A834
    if (SIGNED(ctx->r2) < 0) {
        // 0x8000A848: nop
    
            goto L_8000A834;
    }
    // 0x8000A848: nop

L_8000A84C:
    // 0x8000A84C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8000A850: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8000A854: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8000A858: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x8000A85C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8000A860: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8000A864: cvt.w.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_S(ctx->f2.fl);
    // 0x8000A868: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8000A86C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8000A870: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000A874: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8000A878: beq         $t5, $zero, L_8000A8C4
    if (ctx->r13 == 0) {
        // 0x8000A87C: nop
    
            goto L_8000A8C4;
    }
    // 0x8000A87C: nop

    // 0x8000A880: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8000A884: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8000A888: sub.s       $f18, $f2, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f2.fl - ctx->f18.fl;
    // 0x8000A88C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000A890: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8000A894: nop

    // 0x8000A898: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8000A89C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8000A8A0: nop

    // 0x8000A8A4: andi        $t5, $t5, 0x78
    ctx->r13 = ctx->r13 & 0X78;
    // 0x8000A8A8: bne         $t5, $zero, L_8000A8BC
    if (ctx->r13 != 0) {
        // 0x8000A8AC: nop
    
            goto L_8000A8BC;
    }
    // 0x8000A8AC: nop

    // 0x8000A8B0: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x8000A8B4: b           L_8000A8D4
    // 0x8000A8B8: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
        goto L_8000A8D4;
    // 0x8000A8B8: or          $t5, $t5, $at
    ctx->r13 = ctx->r13 | ctx->r1;
L_8000A8BC:
    // 0x8000A8BC: b           L_8000A8D4
    // 0x8000A8C0: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
        goto L_8000A8D4;
    // 0x8000A8C0: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
L_8000A8C4:
    // 0x8000A8C4: mfc1        $t5, $f18
    ctx->r13 = (int32_t)ctx->f18.u32l;
    // 0x8000A8C8: nop

    // 0x8000A8CC: bltz        $t5, L_8000A8BC
    if (SIGNED(ctx->r13) < 0) {
        // 0x8000A8D0: nop
    
            goto L_8000A8BC;
    }
    // 0x8000A8D0: nop

L_8000A8D4:
    // 0x8000A8D4: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x8000A8D8: sb          $t5, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r13;
    // 0x8000A8DC: bne         $s2, $fp, L_8000A6A4
    if (ctx->r18 != ctx->r30) {
        // 0x8000A8E0: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_8000A6A4;
    }
    // 0x8000A8E0: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
L_8000A8E4:
    // 0x8000A8E4: lw          $ra, 0x74($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X74);
    // 0x8000A8E8: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8000A8EC: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000A8F0: lwc1        $f23, 0x28($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X28);
    // 0x8000A8F4: lwc1        $f22, 0x2C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8000A8F8: lwc1        $f25, 0x30($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X30);
    // 0x8000A8FC: lwc1        $f24, 0x34($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8000A900: lwc1        $f27, 0x38($sp)
    ctx->f_odd[(27 - 1) * 2] = MEM_W(ctx->r29, 0X38);
    // 0x8000A904: lwc1        $f26, 0x3C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8000A908: lwc1        $f29, 0x40($sp)
    ctx->f_odd[(29 - 1) * 2] = MEM_W(ctx->r29, 0X40);
    // 0x8000A90C: lwc1        $f28, 0x44($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8000A910: lwc1        $f31, 0x48($sp)
    ctx->f_odd[(31 - 1) * 2] = MEM_W(ctx->r29, 0X48);
    // 0x8000A914: lwc1        $f30, 0x4C($sp)
    ctx->f30.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8000A918: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x8000A91C: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x8000A920: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x8000A924: lw          $s3, 0x5C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X5C);
    // 0x8000A928: lw          $s4, 0x60($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X60);
    // 0x8000A92C: lw          $s5, 0x64($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X64);
    // 0x8000A930: lw          $s6, 0x68($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X68);
    // 0x8000A934: lw          $s7, 0x6C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X6C);
    // 0x8000A938: lw          $fp, 0x70($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X70);
    // 0x8000A93C: jr          $ra
    // 0x8000A940: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x8000A940: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x8000A944: nop

    // 0x8000A948: nop

    // 0x8000A94C: nop

;}
RECOMP_FUNC void func_8000A950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000A950: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x8000A954: lw          $t6, 0x6980($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6980);
    // 0x8000A958: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000A95C: sltiu       $at, $t6, 0xC
    ctx->r1 = ctx->r14 < 0XC ? 1 : 0;
    // 0x8000A960: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000A964: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8000A968: beq         $at, $zero, L_8000AA54
    if (ctx->r1 == 0) {
        // 0x8000A96C: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_8000AA54;
    }
    // 0x8000A96C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8000A970: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8000A974: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8000A978: addu        $at, $at, $t6
    gpr jr_addend_8000A984 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8000A97C: lw          $t6, 0x3154($at)
    ctx->r14 = ADD32(ctx->r1, 0X3154);
    // 0x8000A980: nop

    // 0x8000A984: jr          $t6
    // 0x8000A988: nop

    switch (jr_addend_8000A984 >> 2) {
        case 0: goto L_8000A98C; break;
        case 1: goto L_8000AAA8; break;
        case 2: goto L_8000A99C; break;
        case 3: goto L_8000A9BC; break;
        case 4: goto L_8000A9BC; break;
        case 5: goto L_8000A9DC; break;
        case 6: goto L_8000AA14; break;
        case 7: goto L_8000A9F4; break;
        case 8: goto L_8000A9F4; break;
        case 9: goto L_8000AA04; break;
        case 10: goto L_8000AA04; break;
        case 11: goto L_8000AA04; break;
        default: switch_error(__func__, 0x8000A984, 0x800D3154);
    }
    // 0x8000A988: nop

L_8000A98C:
    // 0x8000A98C: jal         0x8000AB68
    // 0x8000A990: nop

    func_8000AB68(rdram, ctx);
        goto after_0;
    // 0x8000A990: nop

    after_0:
    // 0x8000A994: b           L_8000AAAC
    // 0x8000A998: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8000AAAC;
    // 0x8000A998: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8000A99C:
    // 0x8000A99C: jal         0x8005F560
    // 0x8000A9A0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8005F560(rdram, ctx);
        goto after_1;
    // 0x8000A9A0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x8000A9A4: jal         0x8000AE34
    // 0x8000A9A8: nop

    func_8000AE34(rdram, ctx);
        goto after_2;
    // 0x8000A9A8: nop

    after_2:
    // 0x8000A9AC: jal         0x8000B510
    // 0x8000A9B0: nop

    func_8000B510(rdram, ctx);
        goto after_3;
    // 0x8000A9B0: nop

    after_3:
    // 0x8000A9B4: b           L_8000AA54
    // 0x8000A9B8: nop

        goto L_8000AA54;
    // 0x8000A9B8: nop

L_8000A9BC:
    // 0x8000A9BC: jal         0x8005F560
    // 0x8000A9C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8005F560(rdram, ctx);
        goto after_4;
    // 0x8000A9C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x8000A9C4: jal         0x8000AE34
    // 0x8000A9C8: nop

    func_8000AE34(rdram, ctx);
        goto after_5;
    // 0x8000A9C8: nop

    after_5:
    // 0x8000A9CC: jal         0x8000B854
    // 0x8000A9D0: nop

    func_8000B854(rdram, ctx);
        goto after_6;
    // 0x8000A9D0: nop

    after_6:
    // 0x8000A9D4: b           L_8000AA54
    // 0x8000A9D8: nop

        goto L_8000AA54;
    // 0x8000A9D8: nop

L_8000A9DC:
    // 0x8000A9DC: jal         0x8000AE34
    // 0x8000A9E0: nop

    func_8000AE34(rdram, ctx);
        goto after_7;
    // 0x8000A9E0: nop

    after_7:
    // 0x8000A9E4: jal         0x8000BFFC
    // 0x8000A9E8: nop

    func_8000BFFC(rdram, ctx);
        goto after_8;
    // 0x8000A9E8: nop

    after_8:
    // 0x8000A9EC: b           L_8000AA54
    // 0x8000A9F0: nop

        goto L_8000AA54;
    // 0x8000A9F0: nop

L_8000A9F4:
    // 0x8000A9F4: jal         0x8000CC60
    // 0x8000A9F8: nop

    func_8000CC60(rdram, ctx);
        goto after_9;
    // 0x8000A9F8: nop

    after_9:
    // 0x8000A9FC: b           L_8000AA54
    // 0x8000AA00: nop

        goto L_8000AA54;
    // 0x8000AA00: nop

L_8000AA04:
    // 0x8000AA04: jal         0x8000C8B0
    // 0x8000AA08: nop

    func_8000C8B0(rdram, ctx);
        goto after_10;
    // 0x8000AA08: nop

    after_10:
    // 0x8000AA0C: b           L_8000AA54
    // 0x8000AA10: nop

        goto L_8000AA54;
    // 0x8000AA10: nop

L_8000AA14:
    // 0x8000AA14: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8000AA18: lw          $t7, -0x2F98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2F98);
    // 0x8000AA1C: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x8000AA20: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x8000AA24: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x8000AA28: addiu       $s0, $s0, -0x2F94
    ctx->r16 = ADD32(ctx->r16, -0X2F94);
    // 0x8000AA2C: lh          $a1, -0x7680($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X7680);
    // 0x8000AA30: jal         0x8000ACB0
    // 0x8000AA34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8000ACB0(rdram, ctx);
        goto after_11;
    // 0x8000AA34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8000AA38: jal         0x8000AE34
    // 0x8000AA3C: nop

    func_8000AE34(rdram, ctx);
        goto after_12;
    // 0x8000AA3C: nop

    after_12:
    // 0x8000AA40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8000AA44: jal         0x8001018C
    // 0x8000AA48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001018C(rdram, ctx);
        goto after_13;
    // 0x8000AA48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x8000AA4C: jal         0x8000D4F0
    // 0x8000AA50: nop

    func_8000D4F0(rdram, ctx);
        goto after_14;
    // 0x8000AA50: nop

    after_14:
L_8000AA54:
    // 0x8000AA54: lui         $s0, 0x8013
    ctx->r16 = S32(0X8013 << 16);
    // 0x8000AA58: addiu       $s0, $s0, 0x3940
    ctx->r16 = ADD32(ctx->r16, 0X3940);
L_8000AA5C:
    // 0x8000AA5C: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x8000AA60: lw          $s1, 0x4($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X4);
    // 0x8000AA64: beq         $v0, $zero, L_8000AA74
    if (ctx->r2 == 0) {
        // 0x8000AA68: nop
    
            goto L_8000AA74;
    }
    // 0x8000AA68: nop

    // 0x8000AA6C: jalr        $v0
    // 0x8000AA70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_15;
    // 0x8000AA70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
L_8000AA74:
    // 0x8000AA74: lhu         $t8, 0x0($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X0);
    // 0x8000AA78: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8000AA7C: bne         $t8, $at, L_8000AA94
    if (ctx->r24 != ctx->r1) {
        // 0x8000AA80: nop
    
            goto L_8000AA94;
    }
    // 0x8000AA80: nop

    // 0x8000AA84: jal         0x800010A0
    // 0x8000AA88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800010A0(rdram, ctx);
        goto after_16;
    // 0x8000AA88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_16:
    // 0x8000AA8C: jal         0x800069A0
    // 0x8000AA90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800069A0(rdram, ctx);
        goto after_17;
    // 0x8000AA90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
L_8000AA94:
    // 0x8000AA94: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8000AA98: addiu       $t9, $t9, 0x3F8C
    ctx->r25 = ADD32(ctx->r25, 0X3F8C);
    // 0x8000AA9C: addiu       $s0, $s0, 0x34
    ctx->r16 = ADD32(ctx->r16, 0X34);
    // 0x8000AAA0: bne         $s0, $t9, L_8000AA5C
    if (ctx->r16 != ctx->r25) {
        // 0x8000AAA4: nop
    
            goto L_8000AA5C;
    }
    // 0x8000AAA4: nop

L_8000AAA8:
    // 0x8000AAA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8000AAAC:
    // 0x8000AAAC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8000AAB0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8000AAB4: jr          $ra
    // 0x8000AAB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8000AAB8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
