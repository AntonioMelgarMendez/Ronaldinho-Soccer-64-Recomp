#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8002A650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A650: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002A654: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002A658: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8002A65C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8002A660: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8002A664: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8002A668: lw          $s0, 0x14($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X14);
    // 0x8002A66C: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x8002A670: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x8002A674: beq         $s0, $s3, L_8002A6A4
    if (ctx->r16 == ctx->r19) {
        // 0x8002A678: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8002A6A4;
    }
    // 0x8002A678: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8002A67C:
    // 0x8002A67C: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x8002A680: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8002A684: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8002A688: jalr        $s2
    // 0x8002A68C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_0;
    // 0x8002A68C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8002A690: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8002A694: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8002A698: sll         $t7, $s1, 16
    ctx->r15 = S32(ctx->r17 << 16);
    // 0x8002A69C: bne         $s0, $s3, L_8002A67C
    if (ctx->r16 != ctx->r19) {
        // 0x8002A6A0: sra         $s1, $t7, 16
        ctx->r17 = S32(SIGNED(ctx->r15) >> 16);
            goto L_8002A67C;
    }
    // 0x8002A6A0: sra         $s1, $t7, 16
    ctx->r17 = S32(SIGNED(ctx->r15) >> 16);
L_8002A6A4:
    // 0x8002A6A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8002A6A8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8002A6AC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8002A6B0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8002A6B4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8002A6B8: jr          $ra
    // 0x8002A6BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8002A6BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8002A6C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A6C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002A6C4: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002A6C8: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x8002A6CC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002A6D0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8002A6D4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8002A6D8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8002A6DC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8002A6E0: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x8002A6E4: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x8002A6E8: lw          $s0, 0x0($t7)
    ctx->r16 = MEM_W(ctx->r15, 0X0);
    // 0x8002A6EC: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8002A6F0: beq         $s0, $s3, L_8002A720
    if (ctx->r16 == ctx->r19) {
        // 0x8002A6F4: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8002A720;
    }
    // 0x8002A6F4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8002A6F8:
    // 0x8002A6F8: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x8002A6FC: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8002A700: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x8002A704: jalr        $s2
    // 0x8002A708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_0;
    // 0x8002A708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8002A70C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8002A710: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8002A714: sll         $t9, $s1, 16
    ctx->r25 = S32(ctx->r17 << 16);
    // 0x8002A718: bne         $s0, $s3, L_8002A6F8
    if (ctx->r16 != ctx->r19) {
        // 0x8002A71C: sra         $s1, $t9, 16
        ctx->r17 = S32(SIGNED(ctx->r25) >> 16);
            goto L_8002A6F8;
    }
    // 0x8002A71C: sra         $s1, $t9, 16
    ctx->r17 = S32(SIGNED(ctx->r25) >> 16);
L_8002A720:
    // 0x8002A720: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8002A724: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8002A728: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8002A72C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8002A730: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8002A734: jr          $ra
    // 0x8002A738: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8002A738: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8002A73C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A73C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002A740: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002A744: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8002A748: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8002A74C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8002A750: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8002A754: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x8002A758: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x8002A75C: lw          $s0, 0x0($t6)
    ctx->r16 = MEM_W(ctx->r14, 0X0);
    // 0x8002A760: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x8002A764: beq         $s0, $s3, L_8002A794
    if (ctx->r16 == ctx->r19) {
        // 0x8002A768: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8002A794;
    }
    // 0x8002A768: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8002A76C:
    // 0x8002A76C: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x8002A770: sra         $t7, $a1, 16
    ctx->r15 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8002A774: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8002A778: jalr        $s2
    // 0x8002A77C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r18)(rdram, ctx);
        goto after_0;
    // 0x8002A77C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8002A780: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8002A784: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8002A788: sll         $t8, $s1, 16
    ctx->r24 = S32(ctx->r17 << 16);
    // 0x8002A78C: bne         $s0, $s3, L_8002A76C
    if (ctx->r16 != ctx->r19) {
        // 0x8002A790: sra         $s1, $t8, 16
        ctx->r17 = S32(SIGNED(ctx->r24) >> 16);
            goto L_8002A76C;
    }
    // 0x8002A790: sra         $s1, $t8, 16
    ctx->r17 = S32(SIGNED(ctx->r24) >> 16);
L_8002A794:
    // 0x8002A794: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8002A798: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8002A79C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8002A7A0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8002A7A4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8002A7A8: jr          $ra
    // 0x8002A7AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8002A7AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8002A7B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A7B0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8002A7B4: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x8002A7B8: lw          $v1, 0x14($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X14);
    // 0x8002A7BC: bne         $v0, $zero, L_8002A7CC
    if (ctx->r2 != 0) {
        // 0x8002A7C0: nop
    
            goto L_8002A7CC;
    }
    // 0x8002A7C0: nop

    // 0x8002A7C4: jr          $ra
    // 0x8002A7C8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8002A7C8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8002A7CC:
    // 0x8002A7CC: blez        $v0, L_8002A7EC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8002A7D0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8002A7EC;
    }
    // 0x8002A7D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8002A7D4:
    // 0x8002A7D4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8002A7D8: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x8002A7DC: slt         $at, $t7, $v0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8002A7E0: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8002A7E4: bne         $at, $zero, L_8002A7D4
    if (ctx->r1 != 0) {
        // 0x8002A7E8: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_8002A7D4;
    }
    // 0x8002A7E8: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_8002A7EC:
    // 0x8002A7EC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8002A7F0: jr          $ra
    // 0x8002A7F4: nop

    return;
    // 0x8002A7F4: nop

;}
RECOMP_FUNC void func_8002A7F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A7F8: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x8002A7FC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8002A800: bne         $v0, $zero, L_8002A810
    if (ctx->r2 != 0) {
        // 0x8002A804: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_8002A810;
    }
    // 0x8002A804: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x8002A808: jr          $ra
    // 0x8002A80C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8002A80C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_8002A810:
    // 0x8002A810: blez        $v0, L_8002A830
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8002A814: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_8002A830;
    }
    // 0x8002A814: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8002A818:
    // 0x8002A818: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8002A81C: andi        $t7, $a0, 0xFF
    ctx->r15 = ctx->r4 & 0XFF;
    // 0x8002A820: slt         $at, $t7, $v0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8002A824: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8002A828: bne         $at, $zero, L_8002A818
    if (ctx->r1 != 0) {
        // 0x8002A82C: or          $a0, $t7, $zero
        ctx->r4 = ctx->r15 | 0;
            goto L_8002A818;
    }
    // 0x8002A82C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
L_8002A830:
    // 0x8002A830: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8002A834: jr          $ra
    // 0x8002A838: nop

    return;
    // 0x8002A838: nop

    // 0x8002A83C: nop

;}
RECOMP_FUNC void func_8002A840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002A848: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8002A84C: addiu       $a0, $a0, 0x1D30
    ctx->r4 = ADD32(ctx->r4, 0X1D30);
    // 0x8002A850: jal         0x800218E0
    // 0x8002A854: addiu       $a1, $zero, 0x1800
    ctx->r5 = ADD32(0, 0X1800);
    func_800218E0(rdram, ctx);
        goto after_0;
    // 0x8002A854: addiu       $a1, $zero, 0x1800
    ctx->r5 = ADD32(0, 0X1800);
    after_0:
    // 0x8002A858: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002A85C: sh          $zero, 0x3530($at)
    MEM_H(0X3530, ctx->r1) = 0;
    // 0x8002A860: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002A864: sw          $zero, 0x3534($at)
    MEM_W(0X3534, ctx->r1) = 0;
    // 0x8002A868: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002A86C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002A870: sw          $zero, 0x3538($at)
    MEM_W(0X3538, ctx->r1) = 0;
    // 0x8002A874: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002A878: sw          $zero, 0x353C($at)
    MEM_W(0X353C, ctx->r1) = 0;
    // 0x8002A87C: jr          $ra
    // 0x8002A880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8002A880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002A884(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A884: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002A888: sh          $zero, -0x66A($at)
    MEM_H(-0X66A, ctx->r1) = 0;
    // 0x8002A88C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8002A890: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8002A894: addiu       $t6, $t6, 0x3FF8
    ctx->r14 = ADD32(ctx->r14, 0X3FF8);
    // 0x8002A898: addiu       $t7, $t7, 0x3FE0
    ctx->r15 = ADD32(ctx->r15, 0X3FE0);
    // 0x8002A89C: addiu       $t8, $zero, 0x808
    ctx->r24 = ADD32(0, 0X808);
    // 0x8002A8A0: sw          $t6, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r14;
    // 0x8002A8A4: sw          $t7, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r15;
    // 0x8002A8A8: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x8002A8AC: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x8002A8B0: sh          $t8, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r24;
    // 0x8002A8B4: sh          $zero, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = 0;
    // 0x8002A8B8: sh          $zero, 0x20($a0)
    MEM_H(0X20, ctx->r4) = 0;
    // 0x8002A8BC: sh          $zero, 0x22($a0)
    MEM_H(0X22, ctx->r4) = 0;
    // 0x8002A8C0: sh          $zero, 0x24($a0)
    MEM_H(0X24, ctx->r4) = 0;
    // 0x8002A8C4: sh          $zero, 0x26($a0)
    MEM_H(0X26, ctx->r4) = 0;
    // 0x8002A8C8: sh          $zero, 0x28($a0)
    MEM_H(0X28, ctx->r4) = 0;
    // 0x8002A8CC: sh          $zero, 0x2A($a0)
    MEM_H(0X2A, ctx->r4) = 0;
    // 0x8002A8D0: sh          $zero, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = 0;
    // 0x8002A8D4: sh          $zero, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = 0;
    // 0x8002A8D8: sh          $zero, 0x30($a0)
    MEM_H(0X30, ctx->r4) = 0;
    // 0x8002A8DC: sh          $zero, 0x32($a0)
    MEM_H(0X32, ctx->r4) = 0;
    // 0x8002A8E0: sh          $zero, 0x34($a0)
    MEM_H(0X34, ctx->r4) = 0;
    // 0x8002A8E4: sh          $zero, 0x36($a0)
    MEM_H(0X36, ctx->r4) = 0;
    // 0x8002A8E8: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x8002A8EC: sb          $zero, 0x3C($a0)
    MEM_B(0X3C, ctx->r4) = 0;
    // 0x8002A8F0: sb          $zero, 0x3D($a0)
    MEM_B(0X3D, ctx->r4) = 0;
    // 0x8002A8F4: sb          $zero, 0x3E($a0)
    MEM_B(0X3E, ctx->r4) = 0;
    // 0x8002A8F8: jr          $ra
    // 0x8002A8FC: sb          $zero, 0x3F($a0)
    MEM_B(0X3F, ctx->r4) = 0;
    return;
    // 0x8002A8FC: sb          $zero, 0x3F($a0)
    MEM_B(0X3F, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8002A900(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A900: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A904: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002A908: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002A90C: jal         0x80029C6C
    // 0x8002A910: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80029C6C(rdram, ctx);
        goto after_0;
    // 0x8002A910: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8002A914: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8002A918: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8002A91C: bne         $v0, $a0, L_8002A92C
    if (ctx->r2 != ctx->r4) {
        // 0x8002A920: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8002A92C;
    }
    // 0x8002A920: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002A924: b           L_8002A948
    // 0x8002A928: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A948;
    // 0x8002A928: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002A92C:
    // 0x8002A92C: lw          $t6, 0x38($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X38);
    // 0x8002A930: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002A934: beq         $a0, $t6, L_8002A944
    if (ctx->r4 == ctx->r14) {
        // 0x8002A938: nop
    
            goto L_8002A944;
    }
    // 0x8002A938: nop

    // 0x8002A93C: b           L_8002A948
    // 0x8002A940: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A948;
    // 0x8002A940: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002A944:
    // 0x8002A944: sw          $v1, 0x38($a1)
    MEM_W(0X38, ctx->r5) = ctx->r3;
L_8002A948:
    // 0x8002A948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002A94C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002A950: jr          $ra
    // 0x8002A954: nop

    return;
    // 0x8002A954: nop

;}
RECOMP_FUNC void func_8002A958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A958: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A95C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002A960: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x8002A964: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002A968: bne         $v0, $at, L_8002A978
    if (ctx->r2 != ctx->r1) {
        // 0x8002A96C: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8002A978;
    }
    // 0x8002A96C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8002A970: b           L_8002A9B4
    // 0x8002A974: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A9B4;
    // 0x8002A974: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002A978:
    // 0x8002A978: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8002A97C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8002A980: jal         0x80029CD0
    // 0x8002A984: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_80029CD0(rdram, ctx);
        goto after_0;
    // 0x8002A984: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8002A988: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8002A98C: nop

    // 0x8002A990: lw          $a0, 0x38($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X38);
    // 0x8002A994: jal         0x8002A884
    // 0x8002A998: nop

    func_8002A884(rdram, ctx);
        goto after_1;
    // 0x8002A998: nop

    after_1:
    // 0x8002A99C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8002A9A0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8002A9A4: lw          $t6, 0x38($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X38);
    // 0x8002A9A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002A9AC: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8002A9B0: sw          $t7, 0x38($a2)
    MEM_W(0X38, ctx->r6) = ctx->r15;
L_8002A9B4:
    // 0x8002A9B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002A9B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002A9BC: jr          $ra
    // 0x8002A9C0: nop

    return;
    // 0x8002A9C0: nop

;}
RECOMP_FUNC void func_8002A9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A9C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A9C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002A9CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002A9D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002A9D4: jal         0x8002A900
    // 0x8002A9D8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002A900(rdram, ctx);
        goto after_0;
    // 0x8002A9D8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002A9DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002A9E0: bne         $v0, $at, L_8002AA04
    if (ctx->r2 != ctx->r1) {
        // 0x8002A9E4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8002AA04;
    }
    // 0x8002A9E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002A9E8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8002A9EC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8002A9F0: lw          $t8, 0x38($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X38);
    // 0x8002A9F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002A9F8: b           L_8002AA04
    // 0x8002A9FC: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
        goto L_8002AA04;
    // 0x8002A9FC: sw          $t6, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r14;
    // 0x8002AA00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002AA04:
    // 0x8002AA04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002AA08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002AA0C: jr          $ra
    // 0x8002AA10: nop

    return;
    // 0x8002AA10: nop

;}
RECOMP_FUNC void func_8002AA14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AA14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002AA18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AA1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002AA20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002AA24: jal         0x8002A958
    // 0x8002AA28: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002A958(rdram, ctx);
        goto after_0;
    // 0x8002AA28: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002AA2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002AA30: bne         $v0, $at, L_8002AA50
    if (ctx->r2 != ctx->r1) {
        // 0x8002AA34: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8002AA50;
    }
    // 0x8002AA34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002AA38: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8002AA3C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002AA40: lw          $t7, 0x38($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X38);
    // 0x8002AA44: b           L_8002AA50
    // 0x8002AA48: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
        goto L_8002AA50;
    // 0x8002AA48: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8002AA4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002AA50:
    // 0x8002AA50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002AA54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002AA58: jr          $ra
    // 0x8002AA5C: nop

    return;
    // 0x8002AA5C: nop

;}
RECOMP_FUNC void func_8002AA60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AA60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002AA64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AA68: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8002AA6C: jal         0x80029380
    // 0x8002AA70: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_80029380(rdram, ctx);
        goto after_0;
    // 0x8002AA70: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8002AA74: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8002AA78: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    // 0x8002AA7C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8002AA80: jal         0x8002A9C4
    // 0x8002AA84: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_8002A9C4(rdram, ctx);
        goto after_1;
    // 0x8002AA84: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x8002AA88: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8002AA8C: nop

    // 0x8002AA90: lw          $a0, 0x38($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X38);
    // 0x8002AA94: jal         0x8002A884
    // 0x8002AA98: nop

    func_8002A884(rdram, ctx);
        goto after_2;
    // 0x8002AA98: nop

    after_2:
    // 0x8002AA9C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002AAA0: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
    // 0x8002AAA4: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x8002AAA8: jal         0x8002AB30
    // 0x8002AAAC: nop

    func_8002AB30(rdram, ctx);
        goto after_3;
    // 0x8002AAAC: nop

    after_3:
    // 0x8002AAB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002AAB4: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8002AAB8: jr          $ra
    // 0x8002AABC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8002AABC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8002AAC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AAC0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8002AAC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002AAC8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8002AACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AAD0: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x8002AAD4: jal         0x8002AAEC
    // 0x8002AAD8: nop

    func_8002AAEC(rdram, ctx);
        goto after_0;
    // 0x8002AAD8: nop

    after_0:
    // 0x8002AADC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002AAE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002AAE4: jr          $ra
    // 0x8002AAE8: nop

    return;
    // 0x8002AAE8: nop

;}
RECOMP_FUNC void func_8002AAEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AAEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002AAF0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002AAF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AAF8: lui         $a1, 0x8003
    ctx->r5 = S32(0X8003 << 16);
    // 0x8002AAFC: addiu       $a1, $a1, -0x4B70
    ctx->r5 = ADD32(ctx->r5, -0X4B70);
    // 0x8002AB00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8002AB04: jal         0x8002AA60
    // 0x8002AB08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8002AA60(rdram, ctx);
        goto after_0;
    // 0x8002AB08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8002AB0C: lw          $t7, 0x14($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X14);
    // 0x8002AB10: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8002AB14: lw          $t8, 0x38($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X38);
    // 0x8002AB18: nop

    // 0x8002AB1C: sw          $t6, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r14;
    // 0x8002AB20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002AB24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002AB28: jr          $ra
    // 0x8002AB2C: nop

    return;
    // 0x8002AB2C: nop

;}
RECOMP_FUNC void func_8002AB30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AB30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002AB34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AB38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002AB3C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8002AB40: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8002AB44: lw          $a0, 0x38($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X38);
    // 0x8002AB48: nop

    // 0x8002AB4C: sh          $a1, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r5;
    // 0x8002AB50: lh          $v0, 0x20($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X20);
    // 0x8002AB54: nop

    // 0x8002AB58: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x8002AB5C: sh          $v0, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r2;
    // 0x8002AB60: sh          $a2, 0x22($a0)
    MEM_H(0X22, ctx->r4) = ctx->r6;
    // 0x8002AB64: lh          $v0, 0x22($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X22);
    // 0x8002AB68: nop

    // 0x8002AB6C: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x8002AB70: jal         0x8002DDAC
    // 0x8002AB74: sh          $v0, 0x1C($a3)
    MEM_H(0X1C, ctx->r7) = ctx->r2;
    func_8002DDAC(rdram, ctx);
        goto after_0;
    // 0x8002AB74: sh          $v0, 0x1C($a3)
    MEM_H(0X1C, ctx->r7) = ctx->r2;
    after_0:
    // 0x8002AB78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002AB7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002AB80: jr          $ra
    // 0x8002AB84: nop

    return;
    // 0x8002AB84: nop

;}
RECOMP_FUNC void func_8002AB88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AB88: lbu         $t6, 0x4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X4);
    // 0x8002AB8C: nop

    // 0x8002AB90: sb          $t6, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r14;
    // 0x8002AB94: lbu         $t7, 0x5($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X5);
    // 0x8002AB98: nop

    // 0x8002AB9C: sb          $t7, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r15;
    // 0x8002ABA0: lh          $t8, 0x6($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X6);
    // 0x8002ABA4: nop

    // 0x8002ABA8: sh          $t8, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r24;
    // 0x8002ABAC: lw          $t9, 0x30($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X30);
    // 0x8002ABB0: nop

    // 0x8002ABB4: sw          $t9, 0x30($a1)
    MEM_W(0X30, ctx->r5) = ctx->r25;
    // 0x8002ABB8: lhu         $t0, 0x12($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X12);
    // 0x8002ABBC: nop

    // 0x8002ABC0: sh          $t0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r8;
    // 0x8002ABC4: lbu         $t1, 0xE($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0XE);
    // 0x8002ABC8: nop

    // 0x8002ABCC: sb          $t1, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r9;
    // 0x8002ABD0: lbu         $t2, 0xF($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0XF);
    // 0x8002ABD4: nop

    // 0x8002ABD8: sb          $t2, 0xF($a1)
    MEM_B(0XF, ctx->r5) = ctx->r10;
    // 0x8002ABDC: lbu         $t3, 0x10($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X10);
    // 0x8002ABE0: nop

    // 0x8002ABE4: sb          $t3, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r11;
    // 0x8002ABE8: lbu         $t4, 0x11($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X11);
    // 0x8002ABEC: nop

    // 0x8002ABF0: sb          $t4, 0x11($a1)
    MEM_B(0X11, ctx->r5) = ctx->r12;
    // 0x8002ABF4: lhu         $t5, 0x16($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X16);
    // 0x8002ABF8: nop

    // 0x8002ABFC: andi        $t6, $t5, 0x7FFF
    ctx->r14 = ctx->r13 & 0X7FFF;
    // 0x8002AC00: sh          $t6, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r14;
    // 0x8002AC04: lw          $t7, 0x8($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X8);
    // 0x8002AC08: nop

    // 0x8002AC0C: sw          $t7, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r15;
    // 0x8002AC10: lw          $t8, 0x18($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X18);
    // 0x8002AC14: nop

    // 0x8002AC18: sw          $t8, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r24;
    // 0x8002AC1C: lw          $t9, 0x1C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X1C);
    // 0x8002AC20: nop

    // 0x8002AC24: sw          $t9, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r25;
    // 0x8002AC28: lw          $at, 0x20($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X20);
    // 0x8002AC2C: nop

    // 0x8002AC30: sw          $at, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r1;
    // 0x8002AC34: lw          $at, 0x24($a0)
    ctx->r1 = MEM_W(ctx->r4, 0X24);
    // 0x8002AC38: nop

    // 0x8002AC3C: sw          $at, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r1;
    // 0x8002AC40: lwc1        $f4, 0x28($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8002AC44: nop

    // 0x8002AC48: swc1        $f4, 0x28($a1)
    MEM_W(0X28, ctx->r5) = ctx->f4.u32l;
    // 0x8002AC4C: lwc1        $f6, 0x2C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x8002AC50: jr          $ra
    // 0x8002AC54: swc1        $f6, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->f6.u32l;
    return;
    // 0x8002AC54: swc1        $f6, 0x2C($a1)
    MEM_W(0X2C, ctx->r5) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_8002AC58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AC58: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8002AC5C: lhu         $t6, -0x32AE($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X32AE);
    // 0x8002AC60: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8002AC64: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x8002AC68: beq         $t7, $zero, L_8002AC78
    if (ctx->r15 == 0) {
        // 0x8002AC6C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8002AC78;
    }
    // 0x8002AC6C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8002AC70: jr          $ra
    // 0x8002AC74: andi        $v0, $zero, 0xFF
    ctx->r2 = 0 & 0XFF;
    return;
    // 0x8002AC74: andi        $v0, $zero, 0xFF
    ctx->r2 = 0 & 0XFF;
L_8002AC78:
    // 0x8002AC78: jr          $ra
    // 0x8002AC7C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    return;
    // 0x8002AC7C: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
;}
RECOMP_FUNC void func_8002AC80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AC80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002AC84: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002AC88: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x8002AC8C: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x8002AC90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AC94: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8002AC98: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8002AC9C: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x8002ACA0: sh          $t6, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r14;
    // 0x8002ACA4: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x8002ACA8: lw          $a1, 0x7210($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7210);
    // 0x8002ACAC: jal         0x800296F8
    // 0x8002ACB0: nop

    func_800296F8(rdram, ctx);
        goto after_0;
    // 0x8002ACB0: nop

    after_0:
    // 0x8002ACB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002ACB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002ACBC: jr          $ra
    // 0x8002ACC0: nop

    return;
    // 0x8002ACC0: nop

;}
RECOMP_FUNC void func_8002ACC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002ACC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002ACC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002ACCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002ACD0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8002ACD4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8002ACD8: jal         0x8002C188
    // 0x8002ACDC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002ACDC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002ACE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002ACE4: jal         0x8002C1B8
    // 0x8002ACE8: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002ACE8: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    after_1:
    // 0x8002ACEC: lbu         $a2, 0x27($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X27);
    // 0x8002ACF0: lw          $t6, 0x4($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X4);
    // 0x8002ACF4: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x8002ACF8: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x8002ACFC: sh          $v0, 0x20($t6)
    MEM_H(0X20, ctx->r14) = ctx->r2;
    // 0x8002AD00: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x8002AD04: lw          $a1, 0x7210($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7210);
    // 0x8002AD08: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8002AD0C: jal         0x800296F8
    // 0x8002AD10: nop

    func_800296F8(rdram, ctx);
        goto after_2;
    // 0x8002AD10: nop

    after_2:
    // 0x8002AD14: jal         0x8002AC58
    // 0x8002AD18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002AC58(rdram, ctx);
        goto after_3;
    // 0x8002AD18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8002AD1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002AD20: sll         $t8, $v0, 24
    ctx->r24 = S32(ctx->r2 << 24);
    // 0x8002AD24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002AD28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8002AD2C: jr          $ra
    // 0x8002AD30: sra         $v0, $t8, 24
    ctx->r2 = S32(SIGNED(ctx->r24) >> 24);
    return;
    // 0x8002AD30: sra         $v0, $t8, 24
    ctx->r2 = S32(SIGNED(ctx->r24) >> 24);
;}
RECOMP_FUNC void func_8002AD34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AD34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002AD38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AD3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002AD40: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002AD44: jal         0x8002C188
    // 0x8002AD48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002AD48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002AD4C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8002AD50: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002AD54: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x8002AD58: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8002AD5C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002AD60: bne         $v0, $zero, L_8002AD84
    if (ctx->r2 != 0) {
        // 0x8002AD64: sh          $t6, 0x20($t7)
        MEM_H(0X20, ctx->r15) = ctx->r14;
            goto L_8002AD84;
    }
    // 0x8002AD64: sh          $t6, 0x20($t7)
    MEM_H(0X20, ctx->r15) = ctx->r14;
    // 0x8002AD68: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8002AD6C: sb          $t8, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r24;
    // 0x8002AD70: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x8002AD74: lui         $t9, 0x8003
    ctx->r25 = S32(0X8003 << 16);
    // 0x8002AD78: addiu       $t9, $t9, -0x4DB0
    ctx->r25 = ADD32(ctx->r25, -0X4DB0);
    // 0x8002AD7C: b           L_8002ADB8
    // 0x8002AD80: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
        goto L_8002ADB8;
    // 0x8002AD80: sw          $t9, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r25;
L_8002AD84:
    // 0x8002AD84: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002AD88: bne         $v1, $at, L_8002ADAC
    if (ctx->r3 != ctx->r1) {
        // 0x8002AD8C: lui         $t4, 0x8003
        ctx->r12 = S32(0X8003 << 16);
            goto L_8002ADAC;
    }
    // 0x8002AD8C: lui         $t4, 0x8003
    ctx->r12 = S32(0X8003 << 16);
    // 0x8002AD90: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8002AD94: sb          $t1, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r9;
    // 0x8002AD98: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
    // 0x8002AD9C: lui         $t2, 0x8003
    ctx->r10 = S32(0X8003 << 16);
    // 0x8002ADA0: addiu       $t2, $t2, -0x4BB4
    ctx->r10 = ADD32(ctx->r10, -0X4BB4);
    // 0x8002ADA4: b           L_8002ADB8
    // 0x8002ADA8: sw          $t2, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r10;
        goto L_8002ADB8;
    // 0x8002ADA8: sw          $t2, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r10;
L_8002ADAC:
    // 0x8002ADAC: lw          $t5, 0x4($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X4);
    // 0x8002ADB0: addiu       $t4, $t4, -0x6610
    ctx->r12 = ADD32(ctx->r12, -0X6610);
    // 0x8002ADB4: sw          $t4, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r12;
L_8002ADB8:
    // 0x8002ADB8: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x8002ADBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002ADC0: addiu       $t7, $t6, -0x2
    ctx->r15 = ADD32(ctx->r14, -0X2);
    // 0x8002ADC4: sw          $t7, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r15;
    // 0x8002ADC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002ADCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002ADD0: jr          $ra
    // 0x8002ADD4: nop

    return;
    // 0x8002ADD4: nop

;}
RECOMP_FUNC void func_8002ADD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002ADD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002ADDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002ADE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002ADE4: lh          $t6, 0x20($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X20);
    // 0x8002ADE8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8002ADEC: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8002ADF0: sh          $t7, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r15;
    // 0x8002ADF4: lh          $t8, 0x20($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X20);
    // 0x8002ADF8: nop

    // 0x8002ADFC: blez        $t8, L_8002AE18
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8002AE00: nop
    
            goto L_8002AE18;
    }
    // 0x8002AE00: nop

    // 0x8002AE04: lhu         $t9, -0x32AE($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X32AE);
    // 0x8002AE08: nop

    // 0x8002AE0C: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x8002AE10: beq         $t0, $zero, L_8002AE24
    if (ctx->r8 == 0) {
        // 0x8002AE14: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002AE24;
    }
    // 0x8002AE14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002AE18:
    // 0x8002AE18: jal         0x80029828
    // 0x8002AE1C: sh          $zero, 0x20($a0)
    MEM_H(0X20, ctx->r4) = 0;
    func_80029828(rdram, ctx);
        goto after_0;
    // 0x8002AE1C: sh          $zero, 0x20($a0)
    MEM_H(0X20, ctx->r4) = 0;
    after_0:
    // 0x8002AE20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002AE24:
    // 0x8002AE24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002AE28: jr          $ra
    // 0x8002AE2C: nop

    return;
    // 0x8002AE2C: nop

;}
RECOMP_FUNC void func_8002AE30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AE30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002AE34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AE38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002AE3C: lh          $t6, 0x20($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X20);
    // 0x8002AE40: nop

    // 0x8002AE44: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8002AE48: sh          $t7, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r15;
    // 0x8002AE4C: lh          $t8, 0x20($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X20);
    // 0x8002AE50: nop

    // 0x8002AE54: bgtz        $t8, L_8002AE68
    if (SIGNED(ctx->r24) > 0) {
        // 0x8002AE58: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002AE68;
    }
    // 0x8002AE58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002AE5C: jal         0x80029828
    // 0x8002AE60: nop

    func_80029828(rdram, ctx);
        goto after_0;
    // 0x8002AE60: nop

    after_0:
    // 0x8002AE64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002AE68:
    // 0x8002AE68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002AE6C: jr          $ra
    // 0x8002AE70: nop

    return;
    // 0x8002AE70: nop

;}
RECOMP_FUNC void func_8002AE74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AE74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002AE78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AE7C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002AE80: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8002AE84: lhu         $t6, -0x32AE($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X32AE);
    // 0x8002AE88: lh          $t7, 0x20($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X20);
    // 0x8002AE8C: nop

    // 0x8002AE90: and         $t8, $t6, $t7
    ctx->r24 = ctx->r14 & ctx->r15;
    // 0x8002AE94: bne         $t8, $zero, L_8002AEA8
    if (ctx->r24 != 0) {
        // 0x8002AE98: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002AEA8;
    }
    // 0x8002AE98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002AE9C: jal         0x800297E0
    // 0x8002AEA0: nop

    func_800297E0(rdram, ctx);
        goto after_0;
    // 0x8002AEA0: nop

    after_0:
    // 0x8002AEA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002AEA8:
    // 0x8002AEA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002AEAC: jr          $ra
    // 0x8002AEB0: nop

    return;
    // 0x8002AEB0: nop

;}
RECOMP_FUNC void func_8002AEB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AEB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002AEB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AEBC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002AEC0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8002AEC4: lhu         $t6, -0x32AE($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X32AE);
    // 0x8002AEC8: lh          $t7, 0x20($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X20);
    // 0x8002AECC: nop

    // 0x8002AED0: and         $t8, $t6, $t7
    ctx->r24 = ctx->r14 & ctx->r15;
    // 0x8002AED4: beq         $t8, $zero, L_8002AEE8
    if (ctx->r24 == 0) {
        // 0x8002AED8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002AEE8;
    }
    // 0x8002AED8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002AEDC: jal         0x800297E0
    // 0x8002AEE0: nop

    func_800297E0(rdram, ctx);
        goto after_0;
    // 0x8002AEE0: nop

    after_0:
    // 0x8002AEE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002AEE8:
    // 0x8002AEE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002AEEC: jr          $ra
    // 0x8002AEF0: nop

    return;
    // 0x8002AEF0: nop

;}
RECOMP_FUNC void func_8002AEF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AEF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002AEF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AEFC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002AF00: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8002AF04: lh          $t7, -0x32A8($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X32A8);
    // 0x8002AF08: lh          $t6, 0x20($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X20);
    // 0x8002AF0C: nop

    // 0x8002AF10: bne         $t6, $t7, L_8002AF24
    if (ctx->r14 != ctx->r15) {
        // 0x8002AF14: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002AF24;
    }
    // 0x8002AF14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002AF18: jal         0x800297E0
    // 0x8002AF1C: nop

    func_800297E0(rdram, ctx);
        goto after_0;
    // 0x8002AF1C: nop

    after_0:
    // 0x8002AF20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002AF24:
    // 0x8002AF24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002AF28: jr          $ra
    // 0x8002AF2C: nop

    return;
    // 0x8002AF2C: nop

;}
RECOMP_FUNC void func_8002AF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AF30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002AF34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AF38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002AF3C: jal         0x8002BEC4
    // 0x8002AF40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002BEC4(rdram, ctx);
        goto after_0;
    // 0x8002AF40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002AF44: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002AF48: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8002AF4C: jal         0x8002BFF4
    // 0x8002AF50: nop

    func_8002BFF4(rdram, ctx);
        goto after_1;
    // 0x8002AF50: nop

    after_1:
    // 0x8002AF54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002AF58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002AF5C: jr          $ra
    // 0x8002AF60: nop

    return;
    // 0x8002AF60: nop

;}
RECOMP_FUNC void func_8002AF64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AF64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002AF68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AF6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002AF70: jal         0x8002D6A8
    // 0x8002AF74: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002D6A8(rdram, ctx);
        goto after_0;
    // 0x8002AF74: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002AF78: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8002AF7C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002AF80: lhu         $t6, 0x1C($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X1C);
    // 0x8002AF84: nop

    // 0x8002AF88: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x8002AF8C: beq         $t7, $zero, L_8002AFCC
    if (ctx->r15 == 0) {
        // 0x8002AF90: nop
    
            goto L_8002AFCC;
    }
    // 0x8002AF90: nop

    // 0x8002AF94: lw          $t8, 0x38($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X38);
    // 0x8002AF98: nop

    // 0x8002AF9C: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x8002AFA0: nop

    // 0x8002AFA4: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x8002AFA8: nop

    // 0x8002AFAC: lw          $v0, 0x14($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X14);
    // 0x8002AFB0: nop

    // 0x8002AFB4: lw          $t1, 0x18($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X18);
    // 0x8002AFB8: nop

    // 0x8002AFBC: sw          $t1, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r9;
    // 0x8002AFC0: lw          $t2, 0x1C($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X1C);
    // 0x8002AFC4: b           L_8002AFDC
    // 0x8002AFC8: sw          $t2, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r10;
        goto L_8002AFDC;
    // 0x8002AFC8: sw          $t2, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r10;
L_8002AFCC:
    // 0x8002AFCC: jal         0x8002AF30
    // 0x8002AFD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002AF30(rdram, ctx);
        goto after_1;
    // 0x8002AFD0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x8002AFD4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8002AFD8: nop

L_8002AFDC:
    // 0x8002AFDC: jal         0x8002AC58
    // 0x8002AFE0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002AC58(rdram, ctx);
        goto after_2;
    // 0x8002AFE0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x8002AFE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002AFE8: sll         $t3, $v0, 24
    ctx->r11 = S32(ctx->r2 << 24);
    // 0x8002AFEC: sra         $v0, $t3, 24
    ctx->r2 = S32(SIGNED(ctx->r11) >> 24);
    // 0x8002AFF0: jr          $ra
    // 0x8002AFF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8002AFF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002AFF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AFF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002AFFC: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8002B000: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B004: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002B008: lw          $a1, 0x38($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X38);
    // 0x8002B00C: jal         0x8002AF64
    // 0x8002B010: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_8002AF64(rdram, ctx);
        goto after_0;
    // 0x8002B010: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x8002B014: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8002B018: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8002B01C: lh          $t6, 0x20($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X20);
    // 0x8002B020: nop

    // 0x8002B024: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8002B028: sh          $t7, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r15;
    // 0x8002B02C: lh          $t8, 0x20($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X20);
    // 0x8002B030: nop

    // 0x8002B034: blez        $t8, L_8002B050
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8002B038: nop
    
            goto L_8002B050;
    }
    // 0x8002B038: nop

    // 0x8002B03C: lhu         $t9, -0x32AE($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X32AE);
    // 0x8002B040: nop

    // 0x8002B044: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x8002B048: beq         $t0, $zero, L_8002B05C
    if (ctx->r8 == 0) {
        // 0x8002B04C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002B05C;
    }
    // 0x8002B04C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B050:
    // 0x8002B050: jal         0x80029828
    // 0x8002B054: sh          $zero, 0x20($a3)
    MEM_H(0X20, ctx->r7) = 0;
    func_80029828(rdram, ctx);
        goto after_1;
    // 0x8002B054: sh          $zero, 0x20($a3)
    MEM_H(0X20, ctx->r7) = 0;
    after_1:
    // 0x8002B058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B05C:
    // 0x8002B05C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B060: jr          $ra
    // 0x8002B064: nop

    return;
    // 0x8002B064: nop

;}
RECOMP_FUNC void func_8002B068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B068: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B06C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8002B070: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B074: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002B078: lw          $a1, 0x38($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X38);
    // 0x8002B07C: jal         0x8002AF64
    // 0x8002B080: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_8002AF64(rdram, ctx);
        goto after_0;
    // 0x8002B080: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x8002B084: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8002B088: nop

    // 0x8002B08C: lh          $t6, 0x20($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X20);
    // 0x8002B090: nop

    // 0x8002B094: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8002B098: sh          $t7, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r15;
    // 0x8002B09C: lh          $t8, 0x20($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X20);
    // 0x8002B0A0: nop

    // 0x8002B0A4: bgtz        $t8, L_8002B0B8
    if (SIGNED(ctx->r24) > 0) {
        // 0x8002B0A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002B0B8;
    }
    // 0x8002B0A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B0AC: jal         0x80029828
    // 0x8002B0B0: nop

    func_80029828(rdram, ctx);
        goto after_1;
    // 0x8002B0B0: nop

    after_1:
    // 0x8002B0B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B0B8:
    // 0x8002B0B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B0BC: jr          $ra
    // 0x8002B0C0: nop

    return;
    // 0x8002B0C0: nop

;}
RECOMP_FUNC void func_8002B0C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B0C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B0C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B0CC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8002B0D0: lhu         $t6, -0x32AE($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X32AE);
    // 0x8002B0D4: lh          $t7, 0x20($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X20);
    // 0x8002B0D8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002B0DC: and         $t8, $t6, $t7
    ctx->r24 = ctx->r14 & ctx->r15;
    // 0x8002B0E0: beq         $t8, $zero, L_8002B0FC
    if (ctx->r24 == 0) {
        // 0x8002B0E4: nop
    
            goto L_8002B0FC;
    }
    // 0x8002B0E4: nop

    // 0x8002B0E8: lw          $a1, 0x38($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X38);
    // 0x8002B0EC: jal         0x8002AF64
    // 0x8002B0F0: nop

    func_8002AF64(rdram, ctx);
        goto after_0;
    // 0x8002B0F0: nop

    after_0:
    // 0x8002B0F4: b           L_8002B108
    // 0x8002B0F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002B108;
    // 0x8002B0F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B0FC:
    // 0x8002B0FC: jal         0x800297E0
    // 0x8002B100: nop

    func_800297E0(rdram, ctx);
        goto after_1;
    // 0x8002B100: nop

    after_1:
    // 0x8002B104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B108:
    // 0x8002B108: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B10C: jr          $ra
    // 0x8002B110: nop

    return;
    // 0x8002B110: nop

;}
RECOMP_FUNC void func_8002B114(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B118: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B11C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8002B120: lhu         $t6, -0x32AE($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X32AE);
    // 0x8002B124: lh          $t7, 0x20($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X20);
    // 0x8002B128: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8002B12C: and         $t8, $t6, $t7
    ctx->r24 = ctx->r14 & ctx->r15;
    // 0x8002B130: beq         $t8, $zero, L_8002B148
    if (ctx->r24 == 0) {
        // 0x8002B134: nop
    
            goto L_8002B148;
    }
    // 0x8002B134: nop

    // 0x8002B138: jal         0x800297E0
    // 0x8002B13C: nop

    func_800297E0(rdram, ctx);
        goto after_0;
    // 0x8002B13C: nop

    after_0:
    // 0x8002B140: b           L_8002B158
    // 0x8002B144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002B158;
    // 0x8002B144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B148:
    // 0x8002B148: lw          $a1, 0x38($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X38);
    // 0x8002B14C: jal         0x8002AF64
    // 0x8002B150: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_8002AF64(rdram, ctx);
        goto after_1;
    // 0x8002B150: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x8002B154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B158:
    // 0x8002B158: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B15C: jr          $ra
    // 0x8002B160: nop

    return;
    // 0x8002B160: nop

;}
RECOMP_FUNC void func_8002B164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B164: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B168: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B16C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8002B170: lh          $t7, -0x32A8($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X32A8);
    // 0x8002B174: lh          $t6, 0x20($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X20);
    // 0x8002B178: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8002B17C: bne         $t6, $t7, L_8002B194
    if (ctx->r14 != ctx->r15) {
        // 0x8002B180: nop
    
            goto L_8002B194;
    }
    // 0x8002B180: nop

    // 0x8002B184: jal         0x800297E0
    // 0x8002B188: nop

    func_800297E0(rdram, ctx);
        goto after_0;
    // 0x8002B188: nop

    after_0:
    // 0x8002B18C: b           L_8002B1A4
    // 0x8002B190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002B1A4;
    // 0x8002B190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B194:
    // 0x8002B194: lw          $a1, 0x38($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X38);
    // 0x8002B198: jal         0x8002AF64
    // 0x8002B19C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_8002AF64(rdram, ctx);
        goto after_1;
    // 0x8002B19C: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x8002B1A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B1A4:
    // 0x8002B1A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B1A8: jr          $ra
    // 0x8002B1AC: nop

    return;
    // 0x8002B1AC: nop

;}
RECOMP_FUNC void func_8002B1B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B1B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B1B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B1B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002B1BC: lw          $a2, 0x38($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X38);
    // 0x8002B1C0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002B1C4: lhu         $t6, 0x1C($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X1C);
    // 0x8002B1C8: nop

    // 0x8002B1CC: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x8002B1D0: beq         $t7, $zero, L_8002B1E8
    if (ctx->r15 == 0) {
        // 0x8002B1D4: nop
    
            goto L_8002B1E8;
    }
    // 0x8002B1D4: nop

    // 0x8002B1D8: jal         0x800297E0
    // 0x8002B1DC: nop

    func_800297E0(rdram, ctx);
        goto after_0;
    // 0x8002B1DC: nop

    after_0:
    // 0x8002B1E0: b           L_8002B1F4
    // 0x8002B1E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002B1F4;
    // 0x8002B1E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B1E8:
    // 0x8002B1E8: jal         0x8002AF64
    // 0x8002B1EC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_8002AF64(rdram, ctx);
        goto after_1;
    // 0x8002B1EC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_1:
    // 0x8002B1F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B1F4:
    // 0x8002B1F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B1F8: jr          $ra
    // 0x8002B1FC: nop

    return;
    // 0x8002B1FC: nop

;}
RECOMP_FUNC void func_8002B200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B200: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B204: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B208: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002B20C: lw          $a2, 0x38($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X38);
    // 0x8002B210: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002B214: lhu         $t6, 0x1C($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X1C);
    // 0x8002B218: nop

    // 0x8002B21C: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x8002B220: beq         $t7, $zero, L_8002B238
    if (ctx->r15 == 0) {
        // 0x8002B224: nop
    
            goto L_8002B238;
    }
    // 0x8002B224: nop

    // 0x8002B228: jal         0x800297E0
    // 0x8002B22C: nop

    func_800297E0(rdram, ctx);
        goto after_0;
    // 0x8002B22C: nop

    after_0:
    // 0x8002B230: b           L_8002B244
    // 0x8002B234: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002B244;
    // 0x8002B234: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B238:
    // 0x8002B238: jal         0x8002AF64
    // 0x8002B23C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_8002AF64(rdram, ctx);
        goto after_1;
    // 0x8002B23C: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_1:
    // 0x8002B240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B244:
    // 0x8002B244: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B248: jr          $ra
    // 0x8002B24C: nop

    return;
    // 0x8002B24C: nop

;}
RECOMP_FUNC void func_8002B250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B250: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B258: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002B25C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8002B260: sh          $t6, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r14;
    // 0x8002B264: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x8002B268: jal         0x8002984C
    // 0x8002B26C: addiu       $a0, $a0, -0x4DB0
    ctx->r4 = ADD32(ctx->r4, -0X4DB0);
    func_8002984C(rdram, ctx);
        goto after_0;
    // 0x8002B26C: addiu       $a0, $a0, -0x4DB0
    ctx->r4 = ADD32(ctx->r4, -0X4DB0);
    after_0:
    // 0x8002B270: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B274: nop

    // 0x8002B278: lw          $a1, 0x38($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X38);
    // 0x8002B27C: jal         0x8002AF64
    // 0x8002B280: nop

    func_8002AF64(rdram, ctx);
        goto after_1;
    // 0x8002B280: nop

    after_1:
    // 0x8002B284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B288: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B28C: jr          $ra
    // 0x8002B290: nop

    return;
    // 0x8002B290: nop

;}
RECOMP_FUNC void func_8002B294(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B294: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B298: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8002B29C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B2A0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002B2A4: lw          $a1, 0x38($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X38);
    // 0x8002B2A8: jal         0x8002AF30
    // 0x8002B2AC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_8002AF30(rdram, ctx);
        goto after_0;
    // 0x8002B2AC: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x8002B2B0: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8002B2B4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8002B2B8: lh          $t6, 0x20($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X20);
    // 0x8002B2BC: nop

    // 0x8002B2C0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8002B2C4: sh          $t7, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r15;
    // 0x8002B2C8: lh          $t8, 0x20($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X20);
    // 0x8002B2CC: nop

    // 0x8002B2D0: blez        $t8, L_8002B2EC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8002B2D4: nop
    
            goto L_8002B2EC;
    }
    // 0x8002B2D4: nop

    // 0x8002B2D8: lhu         $t9, -0x32AE($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X32AE);
    // 0x8002B2DC: nop

    // 0x8002B2E0: andi        $t0, $t9, 0x2
    ctx->r8 = ctx->r25 & 0X2;
    // 0x8002B2E4: beq         $t0, $zero, L_8002B2F8
    if (ctx->r8 == 0) {
        // 0x8002B2E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002B2F8;
    }
    // 0x8002B2E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B2EC:
    // 0x8002B2EC: jal         0x80029828
    // 0x8002B2F0: sh          $zero, 0x20($a3)
    MEM_H(0X20, ctx->r7) = 0;
    func_80029828(rdram, ctx);
        goto after_1;
    // 0x8002B2F0: sh          $zero, 0x20($a3)
    MEM_H(0X20, ctx->r7) = 0;
    after_1:
    // 0x8002B2F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B2F8:
    // 0x8002B2F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B2FC: jr          $ra
    // 0x8002B300: nop

    return;
    // 0x8002B300: nop

;}
RECOMP_FUNC void func_8002B304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B304: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B308: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8002B30C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B310: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002B314: lw          $a1, 0x38($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X38);
    // 0x8002B318: jal         0x8002AF30
    // 0x8002B31C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_8002AF30(rdram, ctx);
        goto after_0;
    // 0x8002B31C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x8002B320: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8002B324: nop

    // 0x8002B328: lh          $t6, 0x20($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X20);
    // 0x8002B32C: nop

    // 0x8002B330: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8002B334: sh          $t7, 0x20($a3)
    MEM_H(0X20, ctx->r7) = ctx->r15;
    // 0x8002B338: lh          $t8, 0x20($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X20);
    // 0x8002B33C: nop

    // 0x8002B340: bgtz        $t8, L_8002B354
    if (SIGNED(ctx->r24) > 0) {
        // 0x8002B344: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002B354;
    }
    // 0x8002B344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B348: jal         0x80029828
    // 0x8002B34C: nop

    func_80029828(rdram, ctx);
        goto after_1;
    // 0x8002B34C: nop

    after_1:
    // 0x8002B350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B354:
    // 0x8002B354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B358: jr          $ra
    // 0x8002B35C: nop

    return;
    // 0x8002B35C: nop

;}
RECOMP_FUNC void func_8002B360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B360: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B364: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B368: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8002B36C: lhu         $t6, -0x32AE($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X32AE);
    // 0x8002B370: lh          $t7, 0x20($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X20);
    // 0x8002B374: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002B378: and         $t8, $t6, $t7
    ctx->r24 = ctx->r14 & ctx->r15;
    // 0x8002B37C: beq         $t8, $zero, L_8002B398
    if (ctx->r24 == 0) {
        // 0x8002B380: nop
    
            goto L_8002B398;
    }
    // 0x8002B380: nop

    // 0x8002B384: lw          $a1, 0x38($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X38);
    // 0x8002B388: jal         0x8002AF30
    // 0x8002B38C: nop

    func_8002AF30(rdram, ctx);
        goto after_0;
    // 0x8002B38C: nop

    after_0:
    // 0x8002B390: b           L_8002B3A4
    // 0x8002B394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002B3A4;
    // 0x8002B394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B398:
    // 0x8002B398: jal         0x800297E0
    // 0x8002B39C: nop

    func_800297E0(rdram, ctx);
        goto after_1;
    // 0x8002B39C: nop

    after_1:
    // 0x8002B3A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B3A4:
    // 0x8002B3A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B3A8: jr          $ra
    // 0x8002B3AC: nop

    return;
    // 0x8002B3AC: nop

;}
RECOMP_FUNC void func_8002B3B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B3B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B3B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B3B8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8002B3BC: lhu         $t6, -0x32AE($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X32AE);
    // 0x8002B3C0: lh          $t7, 0x20($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X20);
    // 0x8002B3C4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8002B3C8: and         $t8, $t6, $t7
    ctx->r24 = ctx->r14 & ctx->r15;
    // 0x8002B3CC: beq         $t8, $zero, L_8002B3E4
    if (ctx->r24 == 0) {
        // 0x8002B3D0: nop
    
            goto L_8002B3E4;
    }
    // 0x8002B3D0: nop

    // 0x8002B3D4: jal         0x800297E0
    // 0x8002B3D8: nop

    func_800297E0(rdram, ctx);
        goto after_0;
    // 0x8002B3D8: nop

    after_0:
    // 0x8002B3DC: b           L_8002B3F4
    // 0x8002B3E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002B3F4;
    // 0x8002B3E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B3E4:
    // 0x8002B3E4: lw          $a1, 0x38($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X38);
    // 0x8002B3E8: jal         0x8002AF30
    // 0x8002B3EC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_8002AF30(rdram, ctx);
        goto after_1;
    // 0x8002B3EC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x8002B3F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B3F4:
    // 0x8002B3F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B3F8: jr          $ra
    // 0x8002B3FC: nop

    return;
    // 0x8002B3FC: nop

;}
RECOMP_FUNC void func_8002B400(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B400: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B404: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B408: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8002B40C: lh          $t7, -0x32A8($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X32A8);
    // 0x8002B410: lh          $t6, 0x20($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X20);
    // 0x8002B414: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8002B418: bne         $t6, $t7, L_8002B430
    if (ctx->r14 != ctx->r15) {
        // 0x8002B41C: nop
    
            goto L_8002B430;
    }
    // 0x8002B41C: nop

    // 0x8002B420: jal         0x800297E0
    // 0x8002B424: nop

    func_800297E0(rdram, ctx);
        goto after_0;
    // 0x8002B424: nop

    after_0:
    // 0x8002B428: b           L_8002B440
    // 0x8002B42C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002B440;
    // 0x8002B42C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B430:
    // 0x8002B430: lw          $a1, 0x38($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X38);
    // 0x8002B434: jal         0x8002AF30
    // 0x8002B438: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_8002AF30(rdram, ctx);
        goto after_1;
    // 0x8002B438: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x8002B43C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B440:
    // 0x8002B440: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B444: jr          $ra
    // 0x8002B448: nop

    return;
    // 0x8002B448: nop

;}
RECOMP_FUNC void func_8002B44C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B44C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B450: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B454: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002B458: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8002B45C: sh          $t6, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r14;
    // 0x8002B460: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x8002B464: jal         0x8002984C
    // 0x8002B468: addiu       $a0, $a0, -0x4BB4
    ctx->r4 = ADD32(ctx->r4, -0X4BB4);
    func_8002984C(rdram, ctx);
        goto after_0;
    // 0x8002B468: addiu       $a0, $a0, -0x4BB4
    ctx->r4 = ADD32(ctx->r4, -0X4BB4);
    after_0:
    // 0x8002B46C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B470: nop

    // 0x8002B474: lw          $a1, 0x38($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X38);
    // 0x8002B478: jal         0x8002AF30
    // 0x8002B47C: nop

    func_8002AF30(rdram, ctx);
        goto after_1;
    // 0x8002B47C: nop

    after_1:
    // 0x8002B480: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B488: jr          $ra
    // 0x8002B48C: nop

    return;
    // 0x8002B48C: nop

;}
RECOMP_FUNC void func_8002B490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B494: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002B498: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B49C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002B4A0: lw          $a1, 0x38($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X38);
    // 0x8002B4A4: jal         0x8002B4BC
    // 0x8002B4A8: nop

    func_8002B4BC(rdram, ctx);
        goto after_0;
    // 0x8002B4A8: nop

    after_0:
    // 0x8002B4AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B4B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B4B4: jr          $ra
    // 0x8002B4B8: nop

    return;
    // 0x8002B4B8: nop

;}
RECOMP_FUNC void func_8002B4BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B4BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002B4C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8002B4C4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8002B4C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002B4CC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002B4D0: lui         $s2, 0x800A
    ctx->r18 = S32(0X800A << 16);
    // 0x8002B4D4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8002B4D8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8002B4DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002B4E0: sh          $zero, 0x3530($at)
    MEM_H(0X3530, ctx->r1) = 0;
    // 0x8002B4E4: addiu       $s2, $s2, 0x6E10
    ctx->r18 = ADD32(ctx->r18, 0X6E10);
L_8002B4E8:
    // 0x8002B4E8: jal         0x8002C188
    // 0x8002B4EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002B4EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8002B4F0: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8002B4F4: addu        $t7, $s2, $t6
    ctx->r15 = ADD32(ctx->r18, ctx->r14);
    // 0x8002B4F8: lw          $t9, 0x0($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X0);
    // 0x8002B4FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8002B500: jalr        $t9
    // 0x8002B504: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8002B504: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x8002B508: beq         $v0, $zero, L_8002B4E8
    if (ctx->r2 == 0) {
        // 0x8002B50C: nop
    
            goto L_8002B4E8;
    }
    // 0x8002B50C: nop

    // 0x8002B510: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8002B514: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002B518: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B51C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8002B520: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8002B524: jr          $ra
    // 0x8002B528: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8002B528: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8002B52C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B52C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B530: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B534: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002B538: jal         0x8002C2B0
    // 0x8002B53C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C2B0(rdram, ctx);
        goto after_0;
    // 0x8002B53C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002B540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B548: jr          $ra
    // 0x8002B54C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002B54C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002B550(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B554: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B558: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002B55C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002B560: jal         0x8002C188
    // 0x8002B564: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002B564: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002B568: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B56C: sltiu       $at, $v0, 0x7
    ctx->r1 = ctx->r2 < 0X7 ? 1 : 0;
    // 0x8002B570: beq         $at, $zero, L_8002B5F8
    if (ctx->r1 == 0) {
        // 0x8002B574: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_8002B5F8;
    }
    // 0x8002B574: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8002B578: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8002B57C: addu        $at, $at, $t6
    gpr jr_addend_8002B588 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8002B580: lw          $t6, 0x45F4($at)
    ctx->r14 = ADD32(ctx->r1, 0X45F4);
    // 0x8002B584: nop

    // 0x8002B588: jr          $t6
    // 0x8002B58C: nop

    switch (jr_addend_8002B588 >> 2) {
        case 0: goto L_8002B590; break;
        case 1: goto L_8002B5A0; break;
        case 2: goto L_8002B5B0; break;
        case 3: goto L_8002B5C0; break;
        case 4: goto L_8002B5D0; break;
        case 5: goto L_8002B5E0; break;
        case 6: goto L_8002B5F0; break;
        default: switch_error(__func__, 0x8002B588, 0x800D45F4);
    }
    // 0x8002B58C: nop

L_8002B590:
    // 0x8002B590: jal         0x8002C1B8
    // 0x8002B594: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002B594: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x8002B598: b           L_8002B5FC
    // 0x8002B59C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002B5FC;
    // 0x8002B59C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B5A0:
    // 0x8002B5A0: jal         0x8002C1B8
    // 0x8002B5A4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C1B8(rdram, ctx);
        goto after_2;
    // 0x8002B5A4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_2:
    // 0x8002B5A8: b           L_8002B5FC
    // 0x8002B5AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002B5FC;
    // 0x8002B5AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B5B0:
    // 0x8002B5B0: jal         0x8002C1B8
    // 0x8002B5B4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C1B8(rdram, ctx);
        goto after_3;
    // 0x8002B5B4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_3:
    // 0x8002B5B8: b           L_8002B5FC
    // 0x8002B5BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002B5FC;
    // 0x8002B5BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B5C0:
    // 0x8002B5C0: jal         0x8002C1B8
    // 0x8002B5C4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C1B8(rdram, ctx);
        goto after_4;
    // 0x8002B5C4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_4:
    // 0x8002B5C8: b           L_8002B5FC
    // 0x8002B5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002B5FC;
    // 0x8002B5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B5D0:
    // 0x8002B5D0: jal         0x8002C1B8
    // 0x8002B5D4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C1B8(rdram, ctx);
        goto after_5;
    // 0x8002B5D4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_5:
    // 0x8002B5D8: b           L_8002B5FC
    // 0x8002B5DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002B5FC;
    // 0x8002B5DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B5E0:
    // 0x8002B5E0: jal         0x8002C1B8
    // 0x8002B5E4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C1B8(rdram, ctx);
        goto after_6;
    // 0x8002B5E4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_6:
    // 0x8002B5E8: b           L_8002B5FC
    // 0x8002B5EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002B5FC;
    // 0x8002B5EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B5F0:
    // 0x8002B5F0: jal         0x8002C1B8
    // 0x8002B5F4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C1B8(rdram, ctx);
        goto after_7;
    // 0x8002B5F4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_7:
L_8002B5F8:
    // 0x8002B5F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002B5FC:
    // 0x8002B5FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B600: jr          $ra
    // 0x8002B604: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002B604: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002B608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B608: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B60C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002B610: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8002B614: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x8002B618: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8002B61C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8002B620: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B624: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8002B628: beq         $t7, $at, L_8002B648
    if (ctx->r15 == ctx->r1) {
        // 0x8002B62C: sw          $a3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r7;
            goto L_8002B648;
    }
    // 0x8002B62C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8002B630: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8002B634: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x8002B638: addu        $a3, $a3, $t8
    ctx->r7 = ADD32(ctx->r7, ctx->r24);
    // 0x8002B63C: lbu         $a3, -0x6B7($a3)
    ctx->r7 = MEM_BU(ctx->r7, -0X6B7);
    // 0x8002B640: b           L_8002B650
    // 0x8002B644: lbu         $t9, 0x23($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X23);
        goto L_8002B650;
    // 0x8002B644: lbu         $t9, 0x23($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X23);
L_8002B648:
    // 0x8002B648: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8002B64C: lbu         $t9, 0x23($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X23);
L_8002B650:
    // 0x8002B650: nop

    // 0x8002B654: addu        $a2, $t9, $a3
    ctx->r6 = ADD32(ctx->r25, ctx->r7);
    // 0x8002B658: andi        $t0, $a2, 0xFF
    ctx->r8 = ctx->r6 & 0XFF;
    // 0x8002B65C: jal         0x8002135C
    // 0x8002B660: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x8002B660: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    after_0:
    // 0x8002B664: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B668: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B66C: jr          $ra
    // 0x8002B670: nop

    return;
    // 0x8002B670: nop

;}
RECOMP_FUNC void func_8002B674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B674: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002B678: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B67C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8002B680: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8002B684: jal         0x8002C188
    // 0x8002B688: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002B688: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002B68C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8002B690: jal         0x8002C188
    // 0x8002B694: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    func_8002C188(rdram, ctx);
        goto after_1;
    // 0x8002B694: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    after_1:
    // 0x8002B698: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8002B69C: jal         0x8002C188
    // 0x8002B6A0: sb          $v0, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r2;
    func_8002C188(rdram, ctx);
        goto after_2;
    // 0x8002B6A0: sb          $v0, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r2;
    after_2:
    // 0x8002B6A4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002B6A8: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x8002B6AC: lbu         $a2, 0x1E($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X1E);
    // 0x8002B6B0: jal         0x8002B608
    // 0x8002B6B4: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    func_8002B608(rdram, ctx);
        goto after_3;
    // 0x8002B6B4: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_3:
    // 0x8002B6B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B6BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002B6C0: jr          $ra
    // 0x8002B6C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002B6C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002B6C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B6C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B6CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002B6D0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B6D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B6D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002B6DC: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8002B6E0: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8002B6E4: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8002B6E8: nop

    // 0x8002B6EC: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    // 0x8002B6F0: jal         0x80020CE0
    // 0x8002B6F4: nop

    func_80020CE0(rdram, ctx);
        goto after_0;
    // 0x8002B6F4: nop

    after_0:
    // 0x8002B6F8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B6FC: jal         0x8002C2B0
    // 0x8002B700: nop

    func_8002C2B0(rdram, ctx);
        goto after_1;
    // 0x8002B700: nop

    after_1:
    // 0x8002B704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B70C: jr          $ra
    // 0x8002B710: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002B710: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002B714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B714: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B718: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B71C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002B720: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002B724: jal         0x8002C188
    // 0x8002B728: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002B728: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002B72C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8002B730: nop

    // 0x8002B734: sb          $v0, 0x5($t6)
    MEM_B(0X5, ctx->r14) = ctx->r2;
    // 0x8002B738: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B73C: jal         0x8002C2D8
    // 0x8002B740: nop

    func_8002C2D8(rdram, ctx);
        goto after_1;
    // 0x8002B740: nop

    after_1:
    // 0x8002B744: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B748: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B74C: jr          $ra
    // 0x8002B750: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002B750: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002B754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B754: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B75C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002B760: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002B764: jal         0x8002C300
    // 0x8002B768: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002B768: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002B76C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B770: jal         0x8002C1B8
    // 0x8002B774: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002B774: nop

    after_1:
    // 0x8002B778: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8002B77C: nop

    // 0x8002B780: sh          $v0, 0x6($t6)
    MEM_H(0X6, ctx->r14) = ctx->r2;
    // 0x8002B784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B78C: jr          $ra
    // 0x8002B790: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002B790: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002B794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B794: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002B798: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B79C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8002B7A0: lw          $t6, 0x38($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X38);
    // 0x8002B7A4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8002B7A8: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8002B7AC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002B7B0: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8002B7B4: nop

    // 0x8002B7B8: lw          $v1, 0x14($t8)
    ctx->r3 = MEM_W(ctx->r24, 0X14);
    // 0x8002B7BC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8002B7C0: jal         0x8002C188
    // 0x8002B7C4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002B7C4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x8002B7C8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B7CC: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8002B7D0: beq         $v0, $zero, L_8002B7F8
    if (ctx->r2 == 0) {
        // 0x8002B7D4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8002B7F8;
    }
    // 0x8002B7D4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002B7D8: beq         $v0, $at, L_8002B804
    if (ctx->r2 == ctx->r1) {
        // 0x8002B7DC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8002B804;
    }
    // 0x8002B7DC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002B7E0: beq         $v0, $at, L_8002B810
    if (ctx->r2 == ctx->r1) {
        // 0x8002B7E4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8002B810;
    }
    // 0x8002B7E4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8002B7E8: beq         $v0, $at, L_8002B828
    if (ctx->r2 == ctx->r1) {
        // 0x8002B7EC: nop
    
            goto L_8002B828;
    }
    // 0x8002B7EC: nop

    // 0x8002B7F0: b           L_8002B85C
    // 0x8002B7F4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
        goto L_8002B85C;
    // 0x8002B7F4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
L_8002B7F8:
    // 0x8002B7F8: lbu         $t9, 0x5($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X5);
    // 0x8002B7FC: b           L_8002B858
    // 0x8002B800: sb          $t9, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r25;
        goto L_8002B858;
    // 0x8002B800: sb          $t9, 0x5($a2)
    MEM_B(0X5, ctx->r6) = ctx->r25;
L_8002B804:
    // 0x8002B804: lh          $t0, 0x6($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X6);
    // 0x8002B808: b           L_8002B858
    // 0x8002B80C: sh          $t0, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r8;
        goto L_8002B858;
    // 0x8002B80C: sh          $t0, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r8;
L_8002B810:
    // 0x8002B810: lwc1        $f4, 0x28($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X28);
    // 0x8002B814: nop

    // 0x8002B818: swc1        $f4, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->f4.u32l;
    // 0x8002B81C: lwc1        $f6, 0x2C($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X2C);
    // 0x8002B820: b           L_8002B858
    // 0x8002B824: swc1        $f6, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->f6.u32l;
        goto L_8002B858;
    // 0x8002B824: swc1        $f6, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->f6.u32l;
L_8002B828:
    // 0x8002B828: lbu         $t1, 0xE($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0XE);
    // 0x8002B82C: nop

    // 0x8002B830: sb          $t1, 0xE($a2)
    MEM_B(0XE, ctx->r6) = ctx->r9;
    // 0x8002B834: lbu         $t2, 0xF($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0XF);
    // 0x8002B838: nop

    // 0x8002B83C: sb          $t2, 0xF($a2)
    MEM_B(0XF, ctx->r6) = ctx->r10;
    // 0x8002B840: lbu         $t3, 0x10($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X10);
    // 0x8002B844: nop

    // 0x8002B848: sb          $t3, 0x10($a2)
    MEM_B(0X10, ctx->r6) = ctx->r11;
    // 0x8002B84C: lbu         $t4, 0x11($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X11);
    // 0x8002B850: nop

    // 0x8002B854: sb          $t4, 0x11($a2)
    MEM_B(0X11, ctx->r6) = ctx->r12;
L_8002B858:
    // 0x8002B858: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
L_8002B85C:
    // 0x8002B85C: jal         0x8002C2B0
    // 0x8002B860: nop

    func_8002C2B0(rdram, ctx);
        goto after_1;
    // 0x8002B860: nop

    after_1:
    // 0x8002B864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B868: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002B86C: jr          $ra
    // 0x8002B870: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002B870: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002B874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B874: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002B878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B87C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8002B880: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8002B884: jal         0x8002C188
    // 0x8002B888: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002B888: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002B88C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8002B890: jal         0x8002C1B8
    // 0x8002B894: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002B894: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    after_1:
    // 0x8002B898: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8002B89C: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x8002B8A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002B8A4: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x8002B8A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002B8AC: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x8002B8B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002B8B4: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x8002B8B8: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x8002B8BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B8C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002B8C4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8002B8C8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8002B8CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002B8D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002B8D4: jr          $ra
    // 0x8002B8D8: sb          $t6, -0x6A23($at)
    MEM_B(-0X6A23, ctx->r1) = ctx->r14;
    return;
    // 0x8002B8D8: sb          $t6, -0x6A23($at)
    MEM_B(-0X6A23, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void func_8002B8DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B8DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B8E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B8E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002B8E8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002B8EC: jal         0x8002C2B0
    // 0x8002B8F0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C2B0(rdram, ctx);
        goto after_0;
    // 0x8002B8F0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002B8F4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B8F8: jal         0x8002C240
    // 0x8002B8FC: nop

    func_8002C240(rdram, ctx);
        goto after_1;
    // 0x8002B8FC: nop

    after_1:
    // 0x8002B900: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002B904: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8002B908: jal         0x8002B9AC
    // 0x8002B90C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002B9AC(rdram, ctx);
        goto after_2;
    // 0x8002B90C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8002B910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B918: jr          $ra
    // 0x8002B91C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002B91C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002B920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B920: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B924: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B928: lw          $t6, 0xC($a1)
    ctx->r14 = MEM_W(ctx->r5, 0XC);
    // 0x8002B92C: sh          $zero, 0x36($a1)
    MEM_H(0X36, ctx->r5) = 0;
    // 0x8002B930: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8002B934: sw          $t6, 0x38($a1)
    MEM_W(0X38, ctx->r5) = ctx->r14;
    // 0x8002B938: sb          $t7, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r15;
    // 0x8002B93C: jal         0x8002C2B0
    // 0x8002B940: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C2B0(rdram, ctx);
        goto after_0;
    // 0x8002B940: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002B944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B948: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B94C: jr          $ra
    // 0x8002B950: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002B950: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002B954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B954: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B958: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B95C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002B960: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x8002B964: nop

    // 0x8002B968: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8002B96C: nop

    // 0x8002B970: lw          $t9, 0x14($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X14);
    // 0x8002B974: nop

    // 0x8002B978: lw          $v0, 0x38($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X38);
    // 0x8002B97C: nop

    // 0x8002B980: lw          $a1, 0xC($v0)
    ctx->r5 = MEM_W(ctx->r2, 0XC);
    // 0x8002B984: lhu         $a2, 0x36($v0)
    ctx->r6 = MEM_HU(ctx->r2, 0X36);
    // 0x8002B988: jal         0x8002B9AC
    // 0x8002B98C: nop

    func_8002B9AC(rdram, ctx);
        goto after_0;
    // 0x8002B98C: nop

    after_0:
    // 0x8002B990: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B994: jal         0x8002C2B0
    // 0x8002B998: nop

    func_8002C2B0(rdram, ctx);
        goto after_1;
    // 0x8002B998: nop

    after_1:
    // 0x8002B99C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B9A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B9A4: jr          $ra
    // 0x8002B9A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002B9A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002B9AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B9AC: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8002B9B0: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x8002B9B4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8002B9B8: sw          $a1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r5;
    // 0x8002B9BC: sw          $a1, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r5;
    // 0x8002B9C0: sh          $a2, 0x36($v0)
    MEM_H(0X36, ctx->r2) = ctx->r6;
    // 0x8002B9C4: sb          $t7, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r15;
    // 0x8002B9C8: lhu         $t8, 0x1C($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X1C);
    // 0x8002B9CC: nop

    // 0x8002B9D0: andi        $t9, $t8, 0xFFF7
    ctx->r25 = ctx->r24 & 0XFFF7;
    // 0x8002B9D4: jr          $ra
    // 0x8002B9D8: sh          $t9, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = ctx->r25;
    return;
    // 0x8002B9D8: sh          $t9, 0x1C($v0)
    MEM_H(0X1C, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_8002B9DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B9DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B9E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002B9E4: jal         0x8002B9AC
    // 0x8002B9E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002B9AC(rdram, ctx);
        goto after_0;
    // 0x8002B9E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8002B9EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002B9F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002B9F4: jr          $ra
    // 0x8002B9F8: nop

    return;
    // 0x8002B9F8: nop

;}
RECOMP_FUNC void func_8002B9FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002B9FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002BA00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002BA04: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8002BA08: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8002BA0C: jal         0x8002C2B0
    // 0x8002BA10: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C2B0(rdram, ctx);
        goto after_0;
    // 0x8002BA10: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002BA14: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8002BA18: jal         0x8002C240
    // 0x8002BA1C: nop

    func_8002C240(rdram, ctx);
        goto after_1;
    // 0x8002BA1C: nop

    after_1:
    // 0x8002BA20: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002BA24: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8002BA28: jal         0x8002B9AC
    // 0x8002BA2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002B9AC(rdram, ctx);
        goto after_2;
    // 0x8002BA2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8002BA30: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002BA34: lhu         $t6, 0x3530($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3530);
    // 0x8002BA38: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002BA3C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8002BA40: jal         0x8002BEC4
    // 0x8002BA44: sh          $t6, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r14;
    func_8002BEC4(rdram, ctx);
        goto after_3;
    // 0x8002BA44: sh          $t6, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r14;
    after_3:
    // 0x8002BA48: lhu         $t7, 0x1E($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X1E);
    // 0x8002BA4C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002BA50: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8002BA54: jal         0x8002BC60
    // 0x8002BA58: sh          $t7, 0x3530($at)
    MEM_H(0X3530, ctx->r1) = ctx->r15;
    func_8002BC60(rdram, ctx);
        goto after_4;
    // 0x8002BA58: sh          $t7, 0x3530($at)
    MEM_H(0X3530, ctx->r1) = ctx->r15;
    after_4:
    // 0x8002BA5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002BA60: sll         $t8, $v0, 24
    ctx->r24 = S32(ctx->r2 << 24);
    // 0x8002BA64: sra         $v0, $t8, 24
    ctx->r2 = S32(SIGNED(ctx->r24) >> 24);
    // 0x8002BA68: jr          $ra
    // 0x8002BA6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8002BA6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8002BA70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BA70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002BA74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002BA78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002BA7C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002BA80: jal         0x8002C300
    // 0x8002BA84: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002BA84: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002BA88: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002BA8C: jal         0x8002C1B8
    // 0x8002BA90: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002BA90: nop

    after_1:
    // 0x8002BA94: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002BA98: jal         0x8002BC60
    // 0x8002BA9C: sh          $v0, 0x36($a0)
    MEM_H(0X36, ctx->r4) = ctx->r2;
    func_8002BC60(rdram, ctx);
        goto after_2;
    // 0x8002BA9C: sh          $v0, 0x36($a0)
    MEM_H(0X36, ctx->r4) = ctx->r2;
    after_2:
    // 0x8002BAA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002BAA4: sll         $t6, $v0, 24
    ctx->r14 = S32(ctx->r2 << 24);
    // 0x8002BAA8: sra         $v0, $t6, 24
    ctx->r2 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8002BAAC: jr          $ra
    // 0x8002BAB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8002BAB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002BAB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BAB4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002BAB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002BABC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8002BAC0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8002BAC4: jal         0x8002C188
    // 0x8002BAC8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002BAC8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002BACC: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8002BAD0: bne         $v0, $at, L_8002BAEC
    if (ctx->r2 != ctx->r1) {
        // 0x8002BAD4: sh          $v0, 0x1C($sp)
        MEM_H(0X1C, ctx->r29) = ctx->r2;
            goto L_8002BAEC;
    }
    // 0x8002BAD4: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x8002BAD8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8002BADC: jal         0x8002C1B8
    // 0x8002BAE0: sh          $zero, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = 0;
    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002BAE0: sh          $zero, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = 0;
    after_1:
    // 0x8002BAE4: b           L_8002BB0C
    // 0x8002BAE8: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
        goto L_8002BB0C;
    // 0x8002BAE8: andi        $v1, $v0, 0xFFFF
    ctx->r3 = ctx->r2 & 0XFFFF;
L_8002BAEC:
    // 0x8002BAEC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8002BAF0: jal         0x8002C1B8
    // 0x8002BAF4: nop

    func_8002C1B8(rdram, ctx);
        goto after_2;
    // 0x8002BAF4: nop

    after_2:
    // 0x8002BAF8: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x8002BAFC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002BB00: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x8002BB04: lhu         $v1, -0x6B8($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X6B8);
    // 0x8002BB08: nop

L_8002BB0C:
    // 0x8002BB0C: lhu         $t7, 0x1C($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X1C);
    // 0x8002BB10: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002BB14: addu        $a1, $v1, $t7
    ctx->r5 = ADD32(ctx->r3, ctx->r15);
    // 0x8002BB18: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x8002BB1C: jal         0x8002BB50
    // 0x8002BB20: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8002BB50(rdram, ctx);
        goto after_3;
    // 0x8002BB20: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_3:
    // 0x8002BB24: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8002BB28: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8002BB2C: sb          $t9, 0x4($t0)
    MEM_B(0X4, ctx->r8) = ctx->r25;
    // 0x8002BB30: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8002BB34: jal         0x8002BC60
    // 0x8002BB38: nop

    func_8002BC60(rdram, ctx);
        goto after_4;
    // 0x8002BB38: nop

    after_4:
    // 0x8002BB3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002BB40: sll         $t1, $v0, 24
    ctx->r9 = S32(ctx->r2 << 24);
    // 0x8002BB44: sra         $v0, $t1, 24
    ctx->r2 = S32(SIGNED(ctx->r9) >> 24);
    // 0x8002BB48: jr          $ra
    // 0x8002BB4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8002BB4C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8002BB50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BB50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002BB54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002BB58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002BB5C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002BB60: lw          $a0, 0x38($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X38);
    // 0x8002BB64: jal         0x8002EC68
    // 0x8002BB68: sh          $a1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r5;
    func_8002EC68(rdram, ctx);
        goto after_0;
    // 0x8002BB68: sh          $a1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002BB6C: lhu         $a1, 0x1E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X1E);
    // 0x8002BB70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002BB74: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8002BB78: andi        $t8, $a1, 0xFFFF
    ctx->r24 = ctx->r5 & 0XFFFF;
    // 0x8002BB7C: jal         0x8007AAF8
    // 0x8002BB80: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8007AAF8(rdram, ctx);
        goto after_1;
    // 0x8002BB80: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_1:
    // 0x8002BB84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002BB88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002BB8C: jr          $ra
    // 0x8002BB90: nop

    return;
    // 0x8002BB90: nop

;}
RECOMP_FUNC void func_8002BB94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BB94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002BB98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002BB9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002BBA0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8002BBA4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8002BBA8: jal         0x8002EC68
    // 0x8002BBAC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002EC68(rdram, ctx);
        goto after_0;
    // 0x8002BBAC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002BBB0: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x8002BBB4: jal         0x8002C188
    // 0x8002BBB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002C188(rdram, ctx);
        goto after_1;
    // 0x8002BBB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8002BBBC: sh          $v0, 0x36($s0)
    MEM_H(0X36, ctx->r16) = ctx->r2;
    // 0x8002BBC0: jal         0x8002C1B8
    // 0x8002BBC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002C1B8(rdram, ctx);
        goto after_2;
    // 0x8002BBC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8002BBC8: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8002BBCC: lw          $t7, -0x48E4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X48E4);
    // 0x8002BBD0: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x8002BBD4: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x8002BBD8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8002BBDC: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8002BBE0: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8002BBE4: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x8002BBE8: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8002BBEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002BBF0: jal         0x8002BC60
    // 0x8002BBF4: sw          $t2, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r10;
    func_8002BC60(rdram, ctx);
        goto after_3;
    // 0x8002BBF4: sw          $t2, 0x30($t3)
    MEM_W(0X30, ctx->r11) = ctx->r10;
    after_3:
    // 0x8002BBF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002BBFC: sll         $t4, $v0, 24
    ctx->r12 = S32(ctx->r2 << 24);
    // 0x8002BC00: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002BC04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8002BC08: jr          $ra
    // 0x8002BC0C: sra         $v0, $t4, 24
    ctx->r2 = S32(SIGNED(ctx->r12) >> 24);
    return;
    // 0x8002BC0C: sra         $v0, $t4, 24
    ctx->r2 = S32(SIGNED(ctx->r12) >> 24);
;}
RECOMP_FUNC void func_8002BC10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BC10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002BC14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002BC18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002BC1C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002BC20: jal         0x8002C188
    // 0x8002BC24: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002BC24: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002BC28: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002BC2C: jal         0x8002C1B8
    // 0x8002BC30: sh          $v0, 0x36($a0)
    MEM_H(0X36, ctx->r4) = ctx->r2;
    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002BC30: sh          $v0, 0x36($a0)
    MEM_H(0X36, ctx->r4) = ctx->r2;
    after_1:
    // 0x8002BC34: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8002BC38: nop

    // 0x8002BC3C: sh          $v0, 0x12($t6)
    MEM_H(0X12, ctx->r14) = ctx->r2;
    // 0x8002BC40: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002BC44: jal         0x8002BC60
    // 0x8002BC48: nop

    func_8002BC60(rdram, ctx);
        goto after_2;
    // 0x8002BC48: nop

    after_2:
    // 0x8002BC4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002BC50: sll         $t7, $v0, 24
    ctx->r15 = S32(ctx->r2 << 24);
    // 0x8002BC54: sra         $v0, $t7, 24
    ctx->r2 = S32(SIGNED(ctx->r15) >> 24);
    // 0x8002BC58: jr          $ra
    // 0x8002BC5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8002BC5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002BC60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BC60: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002BC64: lhu         $t6, 0x3530($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3530);
    // 0x8002BC68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002BC6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8002BC70: bne         $t6, $at, L_8002BC88
    if (ctx->r14 != ctx->r1) {
        // 0x8002BC74: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8002BC88;
    }
    // 0x8002BC74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002BC78: jal         0x8002AC58
    // 0x8002BC7C: nop

    func_8002AC58(rdram, ctx);
        goto after_0;
    // 0x8002BC7C: nop

    after_0:
    // 0x8002BC80: b           L_8002BC90
    // 0x8002BC84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002BC90;
    // 0x8002BC84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002BC88:
    // 0x8002BC88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002BC8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002BC90:
    // 0x8002BC90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002BC94: jr          $ra
    // 0x8002BC98: nop

    return;
    // 0x8002BC98: nop

;}
