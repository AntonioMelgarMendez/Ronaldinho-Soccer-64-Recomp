#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8002E798(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E798: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E79C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E7A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E7A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002E7A8: jal         0x8002C300
    // 0x8002E7AC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002E7AC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E7B0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E7B4: jal         0x8002C1B8
    // 0x8002E7B8: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002E7B8: nop

    after_1:
    // 0x8002E7BC: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002E7C0: lh          $t6, -0x66A($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X66A);
    // 0x8002E7C4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E7C8: slt         $at, $v0, $t6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8002E7CC: bne         $at, $zero, L_8002E7E4
    if (ctx->r1 != 0) {
        // 0x8002E7D0: nop
    
            goto L_8002E7E4;
    }
    // 0x8002E7D0: nop

    // 0x8002E7D4: jal         0x8002CD50
    // 0x8002E7D8: nop

    func_8002CD50(rdram, ctx);
        goto after_2;
    // 0x8002E7D8: nop

    after_2:
    // 0x8002E7DC: b           L_8002E7F0
    // 0x8002E7E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002E7F0;
    // 0x8002E7E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002E7E4:
    // 0x8002E7E4: jal         0x8002C288
    // 0x8002E7E8: nop

    func_8002C288(rdram, ctx);
        goto after_3;
    // 0x8002E7E8: nop

    after_3:
    // 0x8002E7EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002E7F0:
    // 0x8002E7F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E7F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E7F8: jr          $ra
    // 0x8002E7FC: nop

    return;
    // 0x8002E7FC: nop

;}
RECOMP_FUNC void func_8002E800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E800: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E804: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E808: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E80C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002E810: jal         0x8002C3F4
    // 0x8002E814: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C3F4(rdram, ctx);
        goto after_0;
    // 0x8002E814: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E818: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x8002E81C: lhu         $t7, 0x3530($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X3530);
    // 0x8002E820: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E824: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8002E828: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8002E82C: sw          $v0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r2;
    // 0x8002E830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E838: jr          $ra
    // 0x8002E83C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E83C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E840(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E848: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E84C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002E850: jal         0x8002C3F4
    // 0x8002E854: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C3F4(rdram, ctx);
        goto after_0;
    // 0x8002E854: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E858: srl         $a1, $v0, 16
    ctx->r5 = S32(U32(ctx->r2) >> 16);
    // 0x8002E85C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8002E860: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x8002E864: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x8002E868: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E86C: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8002E870: jal         0x8002E0F0
    // 0x8002E874: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    func_8002E0F0(rdram, ctx);
        goto after_1;
    // 0x8002E874: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    after_1:
    // 0x8002E878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E87C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E880: jr          $ra
    // 0x8002E884: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E884: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E888: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E88C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E890: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E894: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002E898: jal         0x8002C38C
    // 0x8002E89C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C38C(rdram, ctx);
        goto after_0;
    // 0x8002E89C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E8A0: sra         $a1, $v0, 8
    ctx->r5 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8002E8A4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8002E8A8: andi        $t9, $a2, 0xFF
    ctx->r25 = ctx->r6 & 0XFF;
    // 0x8002E8AC: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8002E8B0: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x8002E8B4: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x8002E8B8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E8BC: sra         $a2, $t0, 16
    ctx->r6 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8002E8C0: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8002E8C4: jal         0x8002E0F0
    // 0x8002E8C8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    func_8002E0F0(rdram, ctx);
        goto after_1;
    // 0x8002E8C8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    after_1:
    // 0x8002E8CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E8D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E8D4: jr          $ra
    // 0x8002E8D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E8D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E8DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E8DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E8E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E8E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E8E8: jal         0x8002C3F4
    // 0x8002E8EC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C3F4(rdram, ctx);
        goto after_0;
    // 0x8002E8EC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E8F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002E8F4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8002E8F8: jal         0x8002B9AC
    // 0x8002E8FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002B9AC(rdram, ctx);
        goto after_1;
    // 0x8002E8FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8002E900: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E904: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E908: jr          $ra
    // 0x8002E90C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E90C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E910(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E910: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E914: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E918: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E91C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002E920: jal         0x8002C3F4
    // 0x8002E924: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C3F4(rdram, ctx);
        goto after_0;
    // 0x8002E924: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E928: srl         $a1, $v0, 16
    ctx->r5 = S32(U32(ctx->r2) >> 16);
    // 0x8002E92C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8002E930: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x8002E934: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x8002E938: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E93C: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8002E940: jal         0x8002E208
    // 0x8002E944: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    func_8002E208(rdram, ctx);
        goto after_1;
    // 0x8002E944: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    after_1:
    // 0x8002E948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E94C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E950: jr          $ra
    // 0x8002E954: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E954: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E958: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E95C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E960: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E964: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002E968: jal         0x8002C3F4
    // 0x8002E96C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002C3F4(rdram, ctx);
        goto after_0;
    // 0x8002E96C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002E970: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E974: srl         $t6, $v0, 16
    ctx->r14 = S32(U32(ctx->r2) >> 16);
    // 0x8002E978: or          $t7, $v0, $zero
    ctx->r15 = ctx->r2 | 0;
    // 0x8002E97C: sh          $t6, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r14;
    // 0x8002E980: sh          $t7, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r15;
    // 0x8002E984: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E988: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E98C: jr          $ra
    // 0x8002E990: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E990: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E994: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E998: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E99C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E9A0: jal         0x8002C3F4
    // 0x8002E9A4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C3F4(rdram, ctx);
        goto after_0;
    // 0x8002E9A4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E9A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002E9AC: jal         0x8002BDB0
    // 0x8002E9B0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8002BDB0(rdram, ctx);
        goto after_1;
    // 0x8002E9B0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x8002E9B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E9B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E9BC: jr          $ra
    // 0x8002E9C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E9C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E9C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E9C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E9C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E9CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002E9D0: jal         0x8002C4FC
    // 0x8002E9D4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C4FC(rdram, ctx);
        goto after_0;
    // 0x8002E9D4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002E9D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002E9DC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8002E9E0: jal         0x8002B9AC
    // 0x8002E9E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002B9AC(rdram, ctx);
        goto after_1;
    // 0x8002E9E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8002E9E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E9EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E9F0: jr          $ra
    // 0x8002E9F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002E9F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002E9F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E9F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002E9FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002EA00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002EA04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002EA08: jal         0x8002C4FC
    // 0x8002EA0C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C4FC(rdram, ctx);
        goto after_0;
    // 0x8002EA0C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002EA10: srl         $a1, $v0, 16
    ctx->r5 = S32(U32(ctx->r2) >> 16);
    // 0x8002EA14: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8002EA18: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x8002EA1C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x8002EA20: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002EA24: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8002EA28: jal         0x8002E0F0
    // 0x8002EA2C: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    func_8002E0F0(rdram, ctx);
        goto after_1;
    // 0x8002EA2C: sra         $a2, $t8, 16
    ctx->r6 = S32(SIGNED(ctx->r24) >> 16);
    after_1:
    // 0x8002EA30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002EA34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002EA38: jr          $ra
    // 0x8002EA3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002EA3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002EA40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002EA40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002EA44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002EA48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002EA4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002EA50: jal         0x8002EAA8
    // 0x8002EA54: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002EAA8(rdram, ctx);
        goto after_0;
    // 0x8002EA54: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002EA58: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8002EA5C: nop

    // 0x8002EA60: sh          $v0, 0x14($t6)
    MEM_H(0X14, ctx->r14) = ctx->r2;
    // 0x8002EA64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002EA68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002EA6C: jr          $ra
    // 0x8002EA70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002EA70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002EA74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002EA74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002EA78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002EA7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002EA80: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002EA84: jal         0x8002EAA8
    // 0x8002EA88: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002EAA8(rdram, ctx);
        goto after_0;
    // 0x8002EA88: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002EA8C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8002EA90: nop

    // 0x8002EA94: sh          $v0, 0x18($t6)
    MEM_H(0X18, ctx->r14) = ctx->r2;
    // 0x8002EA98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002EA9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002EAA0: jr          $ra
    // 0x8002EAA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002EAA4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002EAA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002EAA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002EAAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002EAB0: jal         0x8002C188
    // 0x8002EAB4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002EAB4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8002EAB8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002EABC: jal         0x8002C188
    // 0x8002EAC0: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    func_8002C188(rdram, ctx);
        goto after_1;
    // 0x8002EAC0: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    after_1:
    // 0x8002EAC4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002EAC8: jal         0x8002C188
    // 0x8002EACC: sb          $v0, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r2;
    func_8002C188(rdram, ctx);
        goto after_2;
    // 0x8002EACC: sb          $v0, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r2;
    after_2:
    // 0x8002EAD0: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x8002EAD4: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x8002EAD8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002EADC: lh          $t7, -0x6B8($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X6B8);
    // 0x8002EAE0: lbu         $t8, 0x1E($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1E);
    // 0x8002EAE4: lbu         $t0, 0x1F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1F);
    // 0x8002EAE8: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002EAEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002EAF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002EAF4: mflo        $t9
    ctx->r25 = lo;
    // 0x8002EAF8: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x8002EAFC: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x8002EB00: jr          $ra
    // 0x8002EB04: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
    return;
    // 0x8002EB04: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
;}
RECOMP_FUNC void func_8002EB08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002EB08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002EB0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002EB10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002EB14: jal         0x8002C38C
    // 0x8002EB18: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C38C(rdram, ctx);
        goto after_0;
    // 0x8002EB18: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002EB1C: sra         $a1, $v0, 8
    ctx->r5 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8002EB20: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8002EB24: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x8002EB28: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8002EB2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002EB30: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8002EB34: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8002EB38: jal         0x8002135C
    // 0x8002EB3C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8002EB3C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    after_1:
    // 0x8002EB40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002EB44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002EB48: jr          $ra
    // 0x8002EB4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002EB4C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002EB50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002EB50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002EB54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002EB58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002EB5C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002EB60: jal         0x8002C38C
    // 0x8002EB64: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C38C(rdram, ctx);
        goto after_0;
    // 0x8002EB64: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002EB68: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8002EB6C: nop

    // 0x8002EB70: sh          $v0, 0x12($t6)
    MEM_H(0X12, ctx->r14) = ctx->r2;
    // 0x8002EB74: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002EB78: jal         0x8002BC60
    // 0x8002EB7C: nop

    func_8002BC60(rdram, ctx);
        goto after_1;
    // 0x8002EB7C: nop

    after_1:
    // 0x8002EB80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002EB84: sll         $t7, $v0, 24
    ctx->r15 = S32(ctx->r2 << 24);
    // 0x8002EB88: sra         $v0, $t7, 24
    ctx->r2 = S32(SIGNED(ctx->r15) >> 24);
    // 0x8002EB8C: jr          $ra
    // 0x8002EB90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8002EB90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002EB94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002EB94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002EB98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002EB9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002EBA0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002EBA4: jal         0x8002C328
    // 0x8002EBA8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C328(rdram, ctx);
        goto after_0;
    // 0x8002EBA8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002EBAC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8002EBB0: nop

    // 0x8002EBB4: sb          $v0, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r2;
    // 0x8002EBB8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002EBBC: jal         0x8002BC60
    // 0x8002EBC0: nop

    func_8002BC60(rdram, ctx);
        goto after_1;
    // 0x8002EBC0: nop

    after_1:
    // 0x8002EBC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002EBC8: sll         $t7, $v0, 24
    ctx->r15 = S32(ctx->r2 << 24);
    // 0x8002EBCC: sra         $v0, $t7, 24
    ctx->r2 = S32(SIGNED(ctx->r15) >> 24);
    // 0x8002EBD0: jr          $ra
    // 0x8002EBD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8002EBD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002EBD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002EBD8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002EBDC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002EBE0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002EBE4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8002EBE8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8002EBEC: jal         0x8002EC68
    // 0x8002EBF0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002EC68(rdram, ctx);
        goto after_0;
    // 0x8002EBF0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002EBF4: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    // 0x8002EBF8: jal         0x8002C300
    // 0x8002EBFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002C300(rdram, ctx);
        goto after_1;
    // 0x8002EBFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8002EC00: jal         0x8002C1B8
    // 0x8002EC04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002C1B8(rdram, ctx);
        goto after_2;
    // 0x8002EC04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8002EC08: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x8002EC0C: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x8002EC10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002EC14: lhu         $t7, -0x6B8($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X6B8);
    // 0x8002EC18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002EC1C: jal         0x8002C240
    // 0x8002EC20: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
    func_8002C240(rdram, ctx);
        goto after_3;
    // 0x8002EC20: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
    after_3:
    // 0x8002EC24: lhu         $t8, 0x26($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X26);
    // 0x8002EC28: lh          $t1, 0x24($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X24);
    // 0x8002EC2C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8002EC30: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x8002EC34: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8002EC38: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8002EC3C: lw          $t4, 0x0($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X0);
    // 0x8002EC40: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8002EC44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002EC48: jal         0x8002BC60
    // 0x8002EC4C: sw          $t4, 0x30($t5)
    MEM_W(0X30, ctx->r13) = ctx->r12;
    func_8002BC60(rdram, ctx);
        goto after_4;
    // 0x8002EC4C: sw          $t4, 0x30($t5)
    MEM_W(0X30, ctx->r13) = ctx->r12;
    after_4:
    // 0x8002EC50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002EC54: sll         $t6, $v0, 24
    ctx->r14 = S32(ctx->r2 << 24);
    // 0x8002EC58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002EC5C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8002EC60: jr          $ra
    // 0x8002EC64: sra         $v0, $t6, 24
    ctx->r2 = S32(SIGNED(ctx->r14) >> 24);
    return;
    // 0x8002EC64: sra         $v0, $t6, 24
    ctx->r2 = S32(SIGNED(ctx->r14) >> 24);
;}
RECOMP_FUNC void func_8002EC68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002EC68: lhu         $v0, 0x1C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X1C);
    // 0x8002EC6C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8002EC70: andi        $t6, $v0, 0x40
    ctx->r14 = ctx->r2 & 0X40;
    // 0x8002EC74: beq         $t6, $zero, L_8002EC80
    if (ctx->r14 == 0) {
        // 0x8002EC78: andi        $t7, $v0, 0x80
        ctx->r15 = ctx->r2 & 0X80;
            goto L_8002EC80;
    }
    // 0x8002EC78: andi        $t7, $v0, 0x80
    ctx->r15 = ctx->r2 & 0X80;
    // 0x8002EC7C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8002EC80:
    // 0x8002EC80: beq         $t7, $zero, L_8002EC94
    if (ctx->r15 == 0) {
        // 0x8002EC84: nop
    
            goto L_8002EC94;
    }
    // 0x8002EC84: nop

    // 0x8002EC88: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8002EC8C: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x8002EC90: sra         $v1, $t8, 16
    ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
L_8002EC94:
    // 0x8002EC94: jr          $ra
    // 0x8002EC98: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8002EC98: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8002EC9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002EC9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002ECA0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002ECA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002ECA8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8002ECAC: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8002ECB0: jal         0x8002C188
    // 0x8002ECB4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002ECB4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002ECB8: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002ECBC: lhu         $t6, 0x3530($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3530);
    // 0x8002ECC0: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x8002ECC4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002ECC8: addu        $v1, $s0, $t7
    ctx->r3 = ADD32(ctx->r16, ctx->r15);
    // 0x8002ECCC: lw          $t8, 0x8($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X8);
    // 0x8002ECD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002ECD4: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8002ECD8: jal         0x8002C38C
    // 0x8002ECDC: sw          $t9, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r25;
    func_8002C38C(rdram, ctx);
        goto after_1;
    // 0x8002ECDC: sw          $t9, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r25;
    after_1:
    // 0x8002ECE0: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x8002ECE4: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x8002ECE8: sh          $v0, 0x20($t0)
    MEM_H(0X20, ctx->r8) = ctx->r2;
    // 0x8002ECEC: lbu         $t1, 0x27($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X27);
    // 0x8002ECF0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8002ECF4: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8002ECF8: addu        $a1, $a1, $t2
    ctx->r5 = ADD32(ctx->r5, ctx->r10);
    // 0x8002ECFC: lw          $a1, 0x7210($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7210);
    // 0x8002ED00: jal         0x800296F8
    // 0x8002ED04: nop

    func_800296F8(rdram, ctx);
        goto after_2;
    // 0x8002ED04: nop

    after_2:
    // 0x8002ED08: jal         0x8002AC58
    // 0x8002ED0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002AC58(rdram, ctx);
        goto after_3;
    // 0x8002ED0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8002ED10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002ED14: sll         $t3, $v0, 24
    ctx->r11 = S32(ctx->r2 << 24);
    // 0x8002ED18: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002ED1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8002ED20: jr          $ra
    // 0x8002ED24: sra         $v0, $t3, 24
    ctx->r2 = S32(SIGNED(ctx->r11) >> 24);
    return;
    // 0x8002ED24: sra         $v0, $t3, 24
    ctx->r2 = S32(SIGNED(ctx->r11) >> 24);
;}
RECOMP_FUNC void func_8002ED28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002ED28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002ED2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002ED30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002ED34: jal         0x8002C45C
    // 0x8002ED38: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C45C(rdram, ctx);
        goto after_0;
    // 0x8002ED38: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002ED3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002ED40: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8002ED44: jal         0x8002B9AC
    // 0x8002ED48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002B9AC(rdram, ctx);
        goto after_1;
    // 0x8002ED48: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8002ED4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002ED50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002ED54: jr          $ra
    // 0x8002ED58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002ED58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002ED5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002ED5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002ED60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002ED64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002ED68: jal         0x8002C2B0
    // 0x8002ED6C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C2B0(rdram, ctx);
        goto after_0;
    // 0x8002ED6C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002ED70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002ED74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002ED78: jr          $ra
    // 0x8002ED7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002ED7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002ED80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002ED80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002ED84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002ED88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002ED8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002ED90: jal         0x8002C188
    // 0x8002ED94: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002ED94: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002ED98: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8002ED9C: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x8002EDA0: lbu         $t9, 0x8($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X8);
    // 0x8002EDA4: nop

    // 0x8002EDA8: andi        $t0, $t9, 0xFF01
    ctx->r8 = ctx->r25 & 0XFF01;
    // 0x8002EDAC: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x8002EDB0: sb          $t1, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r9;
    // 0x8002EDB4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002EDB8: jal         0x8002C188
    // 0x8002EDBC: nop

    func_8002C188(rdram, ctx);
        goto after_1;
    // 0x8002EDBC: nop

    after_1:
    // 0x8002EDC0: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8002EDC4: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x8002EDC8: lbu         $t4, 0x8($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X8);
    // 0x8002EDCC: nop

    // 0x8002EDD0: andi        $t5, $t4, 0xFFFE
    ctx->r13 = ctx->r12 & 0XFFFE;
    // 0x8002EDD4: or          $t6, $t3, $t5
    ctx->r14 = ctx->r11 | ctx->r13;
    // 0x8002EDD8: sb          $t6, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r14;
    // 0x8002EDDC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002EDE0: jal         0x8002C300
    // 0x8002EDE4: nop

    func_8002C300(rdram, ctx);
        goto after_2;
    // 0x8002EDE4: nop

    after_2:
    // 0x8002EDE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002EDEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002EDF0: jr          $ra
    // 0x8002EDF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002EDF4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002EE4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002EE4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002EE50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002EE54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002EE58: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002EE5C: jal         0x8002C188
    // 0x8002EE60: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002EE60: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002EE64: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8002EE68: sll         $t7, $v0, 5
    ctx->r15 = S32(ctx->r2 << 5);
    // 0x8002EE6C: lbu         $t9, 0x9($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X9);
    // 0x8002EE70: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x8002EE74: andi        $t0, $t9, 0xFFDF
    ctx->r8 = ctx->r25 & 0XFFDF;
    // 0x8002EE78: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x8002EE7C: sb          $t1, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r9;
    // 0x8002EE80: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002EE84: jal         0x8002C188
    // 0x8002EE88: nop

    func_8002C188(rdram, ctx);
        goto after_1;
    // 0x8002EE88: nop

    after_1:
    // 0x8002EE8C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8002EE90: sll         $t4, $v0, 7
    ctx->r12 = S32(ctx->r2 << 7);
    // 0x8002EE94: lbu         $t5, 0x9($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X9);
    // 0x8002EE98: nop

    // 0x8002EE9C: andi        $t6, $t5, 0xFF7F
    ctx->r14 = ctx->r13 & 0XFF7F;
    // 0x8002EEA0: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x8002EEA4: sb          $t7, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r15;
    // 0x8002EEA8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002EEAC: jal         0x8002C300
    // 0x8002EEB0: nop

    func_8002C300(rdram, ctx);
        goto after_2;
    // 0x8002EEB0: nop

    after_2:
    // 0x8002EEB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002EEB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002EEBC: jr          $ra
    // 0x8002EEC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002EEC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002EEC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002EEC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002EEC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002EECC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002EED0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002EED4: jal         0x8002C188
    // 0x8002EED8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002EED8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002EEDC: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8002EEE0: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x8002EEE4: lbu         $t9, 0x9($a1)
    ctx->r25 = MEM_BU(ctx->r5, 0X9);
    // 0x8002EEE8: andi        $t8, $t7, 0xE
    ctx->r24 = ctx->r15 & 0XE;
    // 0x8002EEEC: andi        $t0, $t9, 0xFFF1
    ctx->r8 = ctx->r25 & 0XFFF1;
    // 0x8002EEF0: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x8002EEF4: sb          $t1, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r9;
    // 0x8002EEF8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002EEFC: jal         0x8002C188
    // 0x8002EF00: nop

    func_8002C188(rdram, ctx);
        goto after_1;
    // 0x8002EF00: nop

    after_1:
    // 0x8002EF04: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8002EF08: nop

    // 0x8002EF0C: lw          $v1, 0x8($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X8);
    // 0x8002EF10: nop

    // 0x8002EF14: srl         $t3, $v1, 14
    ctx->r11 = S32(U32(ctx->r3) >> 14);
    // 0x8002EF18: xor         $t4, $v0, $t3
    ctx->r12 = ctx->r2 ^ ctx->r11;
    // 0x8002EF1C: sll         $t5, $t4, 29
    ctx->r13 = S32(ctx->r12 << 29);
    // 0x8002EF20: srl         $t6, $t5, 15
    ctx->r14 = S32(U32(ctx->r13) >> 15);
    // 0x8002EF24: xor         $t7, $t6, $v1
    ctx->r15 = ctx->r14 ^ ctx->r3;
    // 0x8002EF28: sw          $t7, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r15;
    // 0x8002EF2C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002EF30: jal         0x8002C300
    // 0x8002EF34: nop

    func_8002C300(rdram, ctx);
        goto after_2;
    // 0x8002EF34: nop

    after_2:
    // 0x8002EF38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002EF3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002EF40: jr          $ra
    // 0x8002EF44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002EF44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002EF48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002EF48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002EF4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002EF50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002EF54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002EF58: jal         0x8002C188
    // 0x8002EF5C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002EF5C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002EF60: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8002EF64: nop

    // 0x8002EF68: lhu         $t6, 0x16($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X16);
    // 0x8002EF6C: nop

    // 0x8002EF70: andi        $t7, $t6, 0xFFF0
    ctx->r15 = ctx->r14 & 0XFFF0;
    // 0x8002EF74: or          $t8, $v0, $t7
    ctx->r24 = ctx->r2 | ctx->r15;
    // 0x8002EF78: sh          $t8, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r24;
    // 0x8002EF7C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002EF80: jal         0x8002C1B8
    // 0x8002EF84: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002EF84: nop

    after_1:
    // 0x8002EF88: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8002EF8C: nop

    // 0x8002EF90: lhu         $t9, 0x16($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X16);
    // 0x8002EF94: nop

    // 0x8002EF98: andi        $t0, $t9, 0xFCFF
    ctx->r8 = ctx->r25 & 0XFCFF;
    // 0x8002EF9C: or          $t1, $v0, $t0
    ctx->r9 = ctx->r2 | ctx->r8;
    // 0x8002EFA0: sh          $t1, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r9;
    // 0x8002EFA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002EFA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002EFAC: jr          $ra
    // 0x8002EFB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002EFB0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002EFB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002EFB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002EFB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002EFBC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002EFC0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002EFC4: jal         0x8002C188
    // 0x8002EFC8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002EFC8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002EFCC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8002EFD0: nop

    // 0x8002EFD4: lhu         $t6, 0x16($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X16);
    // 0x8002EFD8: nop

    // 0x8002EFDC: andi        $t7, $t6, 0xFF0F
    ctx->r15 = ctx->r14 & 0XFF0F;
    // 0x8002EFE0: or          $t8, $v0, $t7
    ctx->r24 = ctx->r2 | ctx->r15;
    // 0x8002EFE4: sh          $t8, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r24;
    // 0x8002EFE8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002EFEC: jal         0x8002C1B8
    // 0x8002EFF0: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002EFF0: nop

    after_1:
    // 0x8002EFF4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x8002EFF8: nop

    // 0x8002EFFC: lhu         $t9, 0x16($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X16);
    // 0x8002F000: nop

    // 0x8002F004: andi        $t0, $t9, 0xFBFF
    ctx->r8 = ctx->r25 & 0XFBFF;
    // 0x8002F008: or          $t1, $v0, $t0
    ctx->r9 = ctx->r2 | ctx->r8;
    // 0x8002F00C: sh          $t1, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r9;
    // 0x8002F010: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002F014: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002F018: jr          $ra
    // 0x8002F01C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002F01C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002F020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F020: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8002F024: lhu         $t7, 0x16($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X16);
    // 0x8002F028: nop

    // 0x8002F02C: andi        $t8, $t7, 0xFFF0
    ctx->r24 = ctx->r15 & 0XFFF0;
    // 0x8002F030: or          $t1, $t8, $a1
    ctx->r9 = ctx->r24 | ctx->r5;
    // 0x8002F034: sh          $t1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r9;
    // 0x8002F038: ori         $t2, $t1, 0x300
    ctx->r10 = ctx->r9 | 0X300;
    // 0x8002F03C: jr          $ra
    // 0x8002F040: sh          $t2, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r10;
    return;
    // 0x8002F040: sh          $t2, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r10;
;}
RECOMP_FUNC void func_8002F044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F044: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002F048: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002F04C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002F050: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002F054: jal         0x8002C300
    // 0x8002F058: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002F058: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002F05C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002F060: jal         0x8002C1B8
    // 0x8002F064: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002F064: nop

    after_1:
    // 0x8002F068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002F06C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8002F070: sh          $v0, -0x32A8($at)
    MEM_H(-0X32A8, ctx->r1) = ctx->r2;
    // 0x8002F074: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002F078: jr          $ra
    // 0x8002F07C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8002F07C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002F080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F080: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002F084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002F088: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002F08C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002F090: jal         0x8002C300
    // 0x8002F094: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002F094: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002F098: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002F09C: jal         0x8002C1B8
    // 0x8002F0A0: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002F0A0: nop

    after_1:
    // 0x8002F0A4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8002F0A8: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002F0AC: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x8002F0B0: lhu         $t6, 0x3530($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3530);
    // 0x8002F0B4: lw          $t1, 0x4($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X4);
    // 0x8002F0B8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002F0BC: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x8002F0C0: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x8002F0C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002F0C8: addiu       $t0, $t9, 0x4
    ctx->r8 = ADD32(ctx->r25, 0X4);
    // 0x8002F0CC: sw          $t0, 0x6C($t1)
    MEM_W(0X6C, ctx->r9) = ctx->r8;
    // 0x8002F0D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002F0D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002F0D8: jr          $ra
    // 0x8002F0DC: nop

    return;
    // 0x8002F0DC: nop

;}
RECOMP_FUNC void func_8002F0E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F0E0: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002F0E4: lhu         $t6, 0x3530($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3530);
    // 0x8002F0E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002F0EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002F0F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002F0F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002F0F8: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x8002F0FC: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x8002F100: lw          $t1, 0x4($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X4);
    // 0x8002F104: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8002F108: sw          $t0, 0x68($t1)
    MEM_W(0X68, ctx->r9) = ctx->r8;
    // 0x8002F10C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002F110: jal         0x8002C300
    // 0x8002F114: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002F114: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002F118: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002F11C: jal         0x8002C1B8
    // 0x8002F120: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002F120: nop

    after_1:
    // 0x8002F124: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8002F128: lui         $t5, 0x801B
    ctx->r13 = S32(0X801B << 16);
    // 0x8002F12C: lhu         $t2, 0x1E($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X1E);
    // 0x8002F130: nop

    // 0x8002F134: slt         $at, $t2, $v0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8002F138: bne         $at, $zero, L_8002F15C
    if (ctx->r1 != 0) {
        // 0x8002F13C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8002F15C;
    }
    // 0x8002F13C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002F140: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
    // 0x8002F144: lhu         $t5, 0x3530($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X3530);
    // 0x8002F148: lw          $t4, 0x6C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X6C);
    // 0x8002F14C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8002F150: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x8002F154: sw          $t4, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r12;
    // 0x8002F158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002F15C:
    // 0x8002F15C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002F160: jr          $ra
    // 0x8002F164: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002F164: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002F168(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F168: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002F16C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002F170: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002F174: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002F178: jal         0x8002C300
    // 0x8002F17C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002C300(rdram, ctx);
        goto after_0;
    // 0x8002F17C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002F180: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002F184: jal         0x8002C1B8
    // 0x8002F188: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002F188: nop

    after_1:
    // 0x8002F18C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8002F190: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002F194: lhu         $t6, 0x1E($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X1E);
    // 0x8002F198: addiu       $v1, $v1, 0x3530
    ctx->r3 = ADD32(ctx->r3, 0X3530);
    // 0x8002F19C: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8002F1A0: sh          $t7, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r15;
    // 0x8002F1A4: lhu         $t8, 0x0($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X0);
    // 0x8002F1A8: lw          $t2, 0x4($a1)
    ctx->r10 = MEM_W(ctx->r5, 0X4);
    // 0x8002F1AC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8002F1B0: addu        $t0, $a1, $t9
    ctx->r8 = ADD32(ctx->r5, ctx->r25);
    // 0x8002F1B4: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x8002F1B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002F1BC: sw          $t1, 0x6C($t2)
    MEM_W(0X6C, ctx->r10) = ctx->r9;
    // 0x8002F1C0: lhu         $t5, 0x0($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X0);
    // 0x8002F1C4: lw          $t3, 0x4($a1)
    ctx->r11 = MEM_W(ctx->r5, 0X4);
    // 0x8002F1C8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8002F1CC: lw          $t4, 0x68($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X68);
    // 0x8002F1D0: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x8002F1D4: sw          $t4, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r12;
    // 0x8002F1D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002F1DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002F1E0: jr          $ra
    // 0x8002F1E4: nop

    return;
    // 0x8002F1E4: nop

    // 0x8002F1E8: nop

    // 0x8002F1EC: nop

;}
RECOMP_FUNC void func_8002F1F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F1F0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8002F1F4: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8002F1F8: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8002F1FC: sh          $t6, 0x6EE($v0)
    MEM_H(0X6EE, ctx->r2) = ctx->r14;
    // 0x8002F200: lh          $t7, 0x6EE($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X6EE);
    // 0x8002F204: sw          $zero, 0x6F0($v0)
    MEM_W(0X6F0, ctx->r2) = 0;
    // 0x8002F208: sh          $t7, 0x6EC($v0)
    MEM_H(0X6EC, ctx->r2) = ctx->r15;
    // 0x8002F20C: lh          $t8, 0x6EC($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X6EC);
    // 0x8002F210: nop

    // 0x8002F214: sh          $t8, 0x6EA($v0)
    MEM_H(0X6EA, ctx->r2) = ctx->r24;
    // 0x8002F218: lh          $t9, 0x6EA($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X6EA);
    // 0x8002F21C: jr          $ra
    // 0x8002F220: sh          $t9, 0x6E8($v0)
    MEM_H(0X6E8, ctx->r2) = ctx->r25;
    return;
    // 0x8002F220: sh          $t9, 0x6E8($v0)
    MEM_H(0X6E8, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_8002F224(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F224: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002F228: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8002F22C: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x8002F230: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8002F234: addiu       $s1, $t7, 0x1
    ctx->r17 = ADD32(ctx->r15, 0X1);
    // 0x8002F238: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8002F23C: slt         $at, $t6, $s1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8002F240: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002F244: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8002F248: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8002F24C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8002F250: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8002F254: beq         $at, $zero, L_8002F290
    if (ctx->r1 == 0) {
        // 0x8002F258: andi        $s0, $t6, 0xFF
        ctx->r16 = ctx->r14 & 0XFF;
            goto L_8002F290;
    }
    // 0x8002F258: andi        $s0, $t6, 0xFF
    ctx->r16 = ctx->r14 & 0XFF;
    // 0x8002F25C: lui         $s3, 0x2
    ctx->r19 = S32(0X2 << 16);
    // 0x8002F260: lui         $s2, 0x800E
    ctx->r18 = S32(0X800E << 16);
    // 0x8002F264: addiu       $s2, $s2, -0x3770
    ctx->r18 = ADD32(ctx->r18, -0X3770);
    // 0x8002F268: ori         $s3, $s3, 0xFEE8
    ctx->r19 = ctx->r19 | 0XFEE8;
L_8002F26C:
    // 0x8002F26C: sll         $t8, $s0, 5
    ctx->r24 = S32(ctx->r16 << 5);
    // 0x8002F270: addu        $t9, $s2, $t8
    ctx->r25 = ADD32(ctx->r18, ctx->r24);
    // 0x8002F274: jal         0x8002F310
    // 0x8002F278: addu        $a0, $t9, $s3
    ctx->r4 = ADD32(ctx->r25, ctx->r19);
    func_8002F310(rdram, ctx);
        goto after_0;
    // 0x8002F278: addu        $a0, $t9, $s3
    ctx->r4 = ADD32(ctx->r25, ctx->r19);
    after_0:
    // 0x8002F27C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8002F280: andi        $t0, $s0, 0xFF
    ctx->r8 = ctx->r16 & 0XFF;
    // 0x8002F284: slt         $at, $t0, $s1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8002F288: bne         $at, $zero, L_8002F26C
    if (ctx->r1 != 0) {
        // 0x8002F28C: or          $s0, $t0, $zero
        ctx->r16 = ctx->r8 | 0;
            goto L_8002F26C;
    }
    // 0x8002F28C: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
L_8002F290:
    // 0x8002F290: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8002F294: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8002F298: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8002F29C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8002F2A0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8002F2A4: jr          $ra
    // 0x8002F2A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8002F2A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8002F2AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F2AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002F2B0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8002F2B4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8002F2B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002F2BC: lui         $s1, 0x800E
    ctx->r17 = S32(0X800E << 16);
    // 0x8002F2C0: lui         $s2, 0x2
    ctx->r18 = S32(0X2 << 16);
    // 0x8002F2C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002F2C8: ori         $s2, $s2, 0xFEE8
    ctx->r18 = ctx->r18 | 0XFEE8;
    // 0x8002F2CC: addiu       $s1, $s1, -0x3770
    ctx->r17 = ADD32(ctx->r17, -0X3770);
    // 0x8002F2D0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8002F2D4:
    // 0x8002F2D4: sll         $t6, $s0, 5
    ctx->r14 = S32(ctx->r16 << 5);
    // 0x8002F2D8: addu        $t7, $s1, $t6
    ctx->r15 = ADD32(ctx->r17, ctx->r14);
    // 0x8002F2DC: jal         0x8002F310
    // 0x8002F2E0: addu        $a0, $t7, $s2
    ctx->r4 = ADD32(ctx->r15, ctx->r18);
    func_8002F310(rdram, ctx);
        goto after_0;
    // 0x8002F2E0: addu        $a0, $t7, $s2
    ctx->r4 = ADD32(ctx->r15, ctx->r18);
    after_0:
    // 0x8002F2E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8002F2E8: andi        $t8, $s0, 0xFFFF
    ctx->r24 = ctx->r16 & 0XFFFF;
    // 0x8002F2EC: slti        $at, $t8, 0x40
    ctx->r1 = SIGNED(ctx->r24) < 0X40 ? 1 : 0;
    // 0x8002F2F0: bne         $at, $zero, L_8002F2D4
    if (ctx->r1 != 0) {
        // 0x8002F2F4: or          $s0, $t8, $zero
        ctx->r16 = ctx->r24 | 0;
            goto L_8002F2D4;
    }
    // 0x8002F2F4: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x8002F2F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8002F2FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002F300: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8002F304: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8002F308: jr          $ra
    // 0x8002F30C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8002F30C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8002F310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F310: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x8002F314: sb          $zero, 0x5($a0)
    MEM_B(0X5, ctx->r4) = 0;
    // 0x8002F318: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
    // 0x8002F31C: sh          $zero, 0x8($a0)
    MEM_H(0X8, ctx->r4) = 0;
    // 0x8002F320: sb          $zero, 0x12($a0)
    MEM_B(0X12, ctx->r4) = 0;
    // 0x8002F324: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    // 0x8002F328: sh          $zero, 0xC($a0)
    MEM_H(0XC, ctx->r4) = 0;
    // 0x8002F32C: sh          $zero, 0xE($a0)
    MEM_H(0XE, ctx->r4) = 0;
    // 0x8002F330: sb          $zero, 0x13($a0)
    MEM_B(0X13, ctx->r4) = 0;
    // 0x8002F334: sh          $zero, 0x10($a0)
    MEM_H(0X10, ctx->r4) = 0;
    // 0x8002F338: sb          $zero, 0x14($a0)
    MEM_B(0X14, ctx->r4) = 0;
    // 0x8002F33C: jr          $ra
    // 0x8002F340: sb          $zero, 0x15($a0)
    MEM_B(0X15, ctx->r4) = 0;
    return;
    // 0x8002F340: sb          $zero, 0x15($a0)
    MEM_B(0X15, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8002F344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F344: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8002F348: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8002F34C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8002F350: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x8002F354: sb          $a1, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r5;
    // 0x8002F358: sb          $t9, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r25;
    // 0x8002F35C: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
    // 0x8002F360: sb          $a2, 0x12($a0)
    MEM_B(0X12, ctx->r4) = ctx->r6;
    // 0x8002F364: sh          $a3, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r7;
    // 0x8002F368: lh          $t0, 0x12($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X12);
    // 0x8002F36C: nop

    // 0x8002F370: sh          $t0, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r8;
    // 0x8002F374: lh          $t1, 0x16($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X16);
    // 0x8002F378: nop

    // 0x8002F37C: sh          $t1, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r9;
    // 0x8002F380: lhu         $t2, 0x1A($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X1A);
    // 0x8002F384: nop

    // 0x8002F388: sh          $t2, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r10;
    // 0x8002F38C: lbu         $t3, 0x1F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X1F);
    // 0x8002F390: nop

    // 0x8002F394: sb          $t3, 0x13($a0)
    MEM_B(0X13, ctx->r4) = ctx->r11;
    // 0x8002F398: lhu         $t4, 0x22($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X22);
    // 0x8002F39C: nop

    // 0x8002F3A0: sh          $t4, 0x10($a0)
    MEM_H(0X10, ctx->r4) = ctx->r12;
    // 0x8002F3A4: lbu         $t5, 0x27($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X27);
    // 0x8002F3A8: nop

    // 0x8002F3AC: sb          $t5, 0x14($a0)
    MEM_B(0X14, ctx->r4) = ctx->r13;
    // 0x8002F3B0: lbu         $t6, 0x2B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2B);
    // 0x8002F3B4: nop

    // 0x8002F3B8: sb          $t6, 0x15($a0)
    MEM_B(0X15, ctx->r4) = ctx->r14;
    // 0x8002F3BC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8002F3C0: nop

    // 0x8002F3C4: sw          $t7, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r15;
    // 0x8002F3C8: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8002F3CC: jr          $ra
    // 0x8002F3D0: sw          $t8, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r24;
    return;
    // 0x8002F3D0: sw          $t8, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_8002F3D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F3D4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002F3D8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8002F3DC: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8002F3E0: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8002F3E4: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8002F3E8: lh          $t7, 0x4A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4A);
    // 0x8002F3EC: lh          $t6, 0x46($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X46);
    // 0x8002F3F0: lhu         $t8, 0x52($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X52);
    // 0x8002F3F4: lbu         $t9, 0x57($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X57);
    // 0x8002F3F8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8002F3FC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8002F400: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8002F404: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8002F408: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8002F40C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8002F410: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8002F414: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8002F418: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8002F41C: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x8002F420: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8002F424: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8002F428: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8002F42C: jal         0x8002F344
    // 0x8002F430: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    func_8002F344(rdram, ctx);
        goto after_0;
    // 0x8002F430: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_0:
    // 0x8002F434: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8002F438: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8002F43C: jr          $ra
    // 0x8002F440: nop

    return;
    // 0x8002F440: nop

;}
RECOMP_FUNC void func_8002F444(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F444: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002F448: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8002F44C: sll         $s1, $a2, 16
    ctx->r17 = S32(ctx->r6 << 16);
    // 0x8002F450: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x8002F454: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8002F458: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8002F45C: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x8002F460: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x8002F464: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8002F468: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8002F46C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8002F470: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8002F474: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8002F478: blez        $t6, L_8002F4F8
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8002F47C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8002F4F8;
    }
    // 0x8002F47C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8002F480: lh          $t7, 0x42($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X42);
    // 0x8002F484: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8002F488: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x8002F48C: lui         $s4, 0x2
    ctx->r20 = S32(0X2 << 16);
    // 0x8002F490: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8002F494: addu        $s2, $t8, $t9
    ctx->r18 = ADD32(ctx->r24, ctx->r25);
    // 0x8002F498: ori         $s4, $s4, 0xFEE8
    ctx->r20 = ctx->r20 | 0XFEE8;
    // 0x8002F49C: sll         $t2, $s0, 4
    ctx->r10 = S32(ctx->r16 << 4);
L_8002F4A0:
    // 0x8002F4A0: addu        $v0, $s3, $t2
    ctx->r2 = ADD32(ctx->r19, ctx->r10);
    // 0x8002F4A4: lhu         $t3, 0x2($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X2);
    // 0x8002F4A8: lh          $a1, 0x6($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X6);
    // 0x8002F4AC: lh          $a2, 0x8($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X8);
    // 0x8002F4B0: lw          $a3, 0xC($v0)
    ctx->r7 = MEM_W(ctx->r2, 0XC);
    // 0x8002F4B4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8002F4B8: lbu         $t4, 0x0($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X0);
    // 0x8002F4BC: sll         $t0, $s0, 5
    ctx->r8 = S32(ctx->r16 << 5);
    // 0x8002F4C0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8002F4C4: lhu         $t5, 0x4($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X4);
    // 0x8002F4C8: addu        $t1, $s2, $t0
    ctx->r9 = ADD32(ctx->r18, ctx->r8);
    // 0x8002F4CC: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8002F4D0: lbu         $t6, 0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1);
    // 0x8002F4D4: addu        $a0, $t1, $s4
    ctx->r4 = ADD32(ctx->r9, ctx->r20);
    // 0x8002F4D8: jal         0x8002F528
    // 0x8002F4DC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    func_8002F528(rdram, ctx);
        goto after_0;
    // 0x8002F4DC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_0:
    // 0x8002F4E0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8002F4E4: sll         $t7, $s0, 16
    ctx->r15 = S32(ctx->r16 << 16);
    // 0x8002F4E8: sra         $s0, $t7, 16
    ctx->r16 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8002F4EC: slt         $at, $s0, $s1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8002F4F0: bne         $at, $zero, L_8002F4A0
    if (ctx->r1 != 0) {
        // 0x8002F4F4: sll         $t2, $s0, 4
        ctx->r10 = S32(ctx->r16 << 4);
            goto L_8002F4A0;
    }
    // 0x8002F4F4: sll         $t2, $s0, 4
    ctx->r10 = S32(ctx->r16 << 4);
L_8002F4F8:
    // 0x8002F4F8: lh          $t9, 0x42($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X42);
    // 0x8002F4FC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8002F500: addu        $v0, $t9, $s0
    ctx->r2 = ADD32(ctx->r25, ctx->r16);
    // 0x8002F504: sll         $t0, $v0, 16
    ctx->r8 = S32(ctx->r2 << 16);
    // 0x8002F508: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8002F50C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8002F510: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8002F514: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8002F518: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8002F51C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8002F520: jr          $ra
    // 0x8002F524: sra         $v0, $t0, 16
    ctx->r2 = S32(SIGNED(ctx->r8) >> 16);
    return;
    // 0x8002F524: sra         $v0, $t0, 16
    ctx->r2 = S32(SIGNED(ctx->r8) >> 16);
;}
RECOMP_FUNC void func_8002F528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F528: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002F52C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8002F530: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8002F534: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8002F538: lw          $t2, 0x4C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4C);
    // 0x8002F53C: lh          $t7, 0x4A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4A);
    // 0x8002F540: lh          $t6, 0x46($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X46);
    // 0x8002F544: lhu         $t8, 0x52($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X52);
    // 0x8002F548: lbu         $t9, 0x57($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X57);
    // 0x8002F54C: lhu         $t0, 0x5A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X5A);
    // 0x8002F550: lbu         $t1, 0x5F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X5F);
    // 0x8002F554: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8002F558: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8002F55C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8002F560: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8002F564: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8002F568: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8002F56C: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x8002F570: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8002F574: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8002F578: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8002F57C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8002F580: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8002F584: jal         0x8002F344
    // 0x8002F588: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    func_8002F344(rdram, ctx);
        goto after_0;
    // 0x8002F588: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    after_0:
    // 0x8002F58C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8002F590: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8002F594: jr          $ra
    // 0x8002F598: nop

    return;
    // 0x8002F598: nop

;}
RECOMP_FUNC void func_8002F60C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F60C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002F610: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8002F614: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8002F618: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8002F61C: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8002F620: lh          $t7, 0x4A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4A);
    // 0x8002F624: lh          $t6, 0x46($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X46);
    // 0x8002F628: lhu         $t8, 0x56($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X56);
    // 0x8002F62C: lbu         $t9, 0x53($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X53);
    // 0x8002F630: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8002F634: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8002F638: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8002F63C: addiu       $a3, $zero, 0x1000
    ctx->r7 = ADD32(0, 0X1000);
    // 0x8002F640: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8002F644: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8002F648: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8002F64C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8002F650: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8002F654: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x8002F658: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8002F65C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8002F660: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8002F664: jal         0x8002F344
    // 0x8002F668: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    func_8002F344(rdram, ctx);
        goto after_0;
    // 0x8002F668: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_0:
    // 0x8002F66C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8002F670: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8002F674: jr          $ra
    // 0x8002F678: nop

    return;
    // 0x8002F678: nop

;}
RECOMP_FUNC void func_8002F6EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F6EC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002F6F0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8002F6F4: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8002F6F8: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8002F6FC: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8002F700: lh          $t7, 0x4A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4A);
    // 0x8002F704: lh          $t6, 0x46($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X46);
    // 0x8002F708: lhu         $t8, 0x56($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X56);
    // 0x8002F70C: lbu         $t9, 0x53($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X53);
    // 0x8002F710: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8002F714: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8002F718: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8002F71C: addiu       $a3, $zero, 0x3000
    ctx->r7 = ADD32(0, 0X3000);
    // 0x8002F720: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8002F724: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8002F728: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8002F72C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8002F730: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8002F734: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x8002F738: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8002F73C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8002F740: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8002F744: jal         0x8002F344
    // 0x8002F748: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    func_8002F344(rdram, ctx);
        goto after_0;
    // 0x8002F748: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_0:
    // 0x8002F74C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8002F750: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8002F754: jr          $ra
    // 0x8002F758: nop

    return;
    // 0x8002F758: nop

;}
RECOMP_FUNC void func_8002F7CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F7CC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002F7D0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8002F7D4: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8002F7D8: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8002F7DC: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8002F7E0: lh          $t7, 0x4A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4A);
    // 0x8002F7E4: lh          $t6, 0x46($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X46);
    // 0x8002F7E8: lhu         $t8, 0x56($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X56);
    // 0x8002F7EC: lbu         $t9, 0x53($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X53);
    // 0x8002F7F0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8002F7F4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8002F7F8: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8002F7FC: addiu       $a3, $zero, 0x4000
    ctx->r7 = ADD32(0, 0X4000);
    // 0x8002F800: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8002F804: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8002F808: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8002F80C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8002F810: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8002F814: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x8002F818: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8002F81C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8002F820: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8002F824: jal         0x8002F344
    // 0x8002F828: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    func_8002F344(rdram, ctx);
        goto after_0;
    // 0x8002F828: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_0:
    // 0x8002F82C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8002F830: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8002F834: jr          $ra
    // 0x8002F838: nop

    return;
    // 0x8002F838: nop

;}
RECOMP_FUNC void func_8002F914(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F914: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002F918: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8002F91C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8002F920: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8002F924: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8002F928: lh          $t7, 0x4A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4A);
    // 0x8002F92C: lh          $t6, 0x46($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X46);
    // 0x8002F930: lhu         $t8, 0x52($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X52);
    // 0x8002F934: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8002F938: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8002F93C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8002F940: addiu       $a3, $zero, 0x3000
    ctx->r7 = ADD32(0, 0X3000);
    // 0x8002F944: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8002F948: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8002F94C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8002F950: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8002F954: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8002F958: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8002F95C: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8002F960: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8002F964: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8002F968: jal         0x8002F344
    // 0x8002F96C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_8002F344(rdram, ctx);
        goto after_0;
    // 0x8002F96C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_0:
    // 0x8002F970: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8002F974: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8002F978: jr          $ra
    // 0x8002F97C: nop

    return;
    // 0x8002F97C: nop

;}
RECOMP_FUNC void func_8002F9EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002F9EC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002F9F0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8002F9F4: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8002F9F8: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8002F9FC: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8002FA00: lh          $t7, 0x4A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4A);
    // 0x8002FA04: lh          $t6, 0x46($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X46);
    // 0x8002FA08: lhu         $t8, 0x52($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X52);
    // 0x8002FA0C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8002FA10: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8002FA14: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8002FA18: addiu       $a3, $zero, 0x3000
    ctx->r7 = ADD32(0, 0X3000);
    // 0x8002FA1C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8002FA20: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8002FA24: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8002FA28: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8002FA2C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8002FA30: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8002FA34: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8002FA38: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8002FA3C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8002FA40: jal         0x8002F344
    // 0x8002FA44: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_8002F344(rdram, ctx);
        goto after_0;
    // 0x8002FA44: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_0:
    // 0x8002FA48: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8002FA4C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8002FA50: jr          $ra
    // 0x8002FA54: nop

    return;
    // 0x8002FA54: nop

;}
RECOMP_FUNC void func_8002FB30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002FB30: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002FB34: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8002FB38: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8002FB3C: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8002FB40: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8002FB44: lh          $t7, 0x4A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4A);
    // 0x8002FB48: lh          $t6, 0x46($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X46);
    // 0x8002FB4C: lhu         $t8, 0x52($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X52);
    // 0x8002FB50: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8002FB54: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8002FB58: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8002FB5C: addiu       $a3, $zero, 0x3000
    ctx->r7 = ADD32(0, 0X3000);
    // 0x8002FB60: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8002FB64: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8002FB68: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8002FB6C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8002FB70: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8002FB74: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8002FB78: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8002FB7C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8002FB80: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8002FB84: jal         0x8002F344
    // 0x8002FB88: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_8002F344(rdram, ctx);
        goto after_0;
    // 0x8002FB88: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_0:
    // 0x8002FB8C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8002FB90: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8002FB94: jr          $ra
    // 0x8002FB98: nop

    return;
    // 0x8002FB98: nop

;}
RECOMP_FUNC void func_8002FB9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002FB9C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002FBA0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8002FBA4: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8002FBA8: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8002FBAC: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8002FBB0: lh          $t7, 0x4A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4A);
    // 0x8002FBB4: lh          $t6, 0x46($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X46);
    // 0x8002FBB8: lhu         $t8, 0x52($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X52);
    // 0x8002FBBC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8002FBC0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8002FBC4: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8002FBC8: addiu       $a3, $zero, 0x1000
    ctx->r7 = ADD32(0, 0X1000);
    // 0x8002FBCC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8002FBD0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8002FBD4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8002FBD8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8002FBDC: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8002FBE0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8002FBE4: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8002FBE8: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8002FBEC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8002FBF0: jal         0x8002F344
    // 0x8002FBF4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_8002F344(rdram, ctx);
        goto after_0;
    // 0x8002FBF4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_0:
    // 0x8002FBF8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8002FBFC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8002FC00: jr          $ra
    // 0x8002FC04: nop

    return;
    // 0x8002FC04: nop

;}
RECOMP_FUNC void func_8002FC08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002FC08: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002FC0C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8002FC10: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8002FC14: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8002FC18: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8002FC1C: lh          $t7, 0x4A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4A);
    // 0x8002FC20: lh          $t6, 0x46($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X46);
    // 0x8002FC24: lhu         $t8, 0x52($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X52);
    // 0x8002FC28: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8002FC2C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8002FC30: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8002FC34: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8002FC38: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8002FC3C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8002FC40: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8002FC44: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8002FC48: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8002FC4C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8002FC50: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8002FC54: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8002FC58: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8002FC5C: jal         0x8002F344
    // 0x8002FC60: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_8002F344(rdram, ctx);
        goto after_0;
    // 0x8002FC60: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_0:
    // 0x8002FC64: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8002FC68: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8002FC6C: jr          $ra
    // 0x8002FC70: nop

    return;
    // 0x8002FC70: nop

;}
RECOMP_FUNC void func_8002FC74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002FC74: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002FC78: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8002FC7C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8002FC80: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8002FC84: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8002FC88: lh          $t7, 0x4A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4A);
    // 0x8002FC8C: lh          $t6, 0x46($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X46);
    // 0x8002FC90: lhu         $t8, 0x52($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X52);
    // 0x8002FC94: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8002FC98: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8002FC9C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8002FCA0: addiu       $a3, $zero, 0x3000
    ctx->r7 = ADD32(0, 0X3000);
    // 0x8002FCA4: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8002FCA8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8002FCAC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8002FCB0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8002FCB4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8002FCB8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8002FCBC: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8002FCC0: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8002FCC4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8002FCC8: jal         0x8002F344
    // 0x8002FCCC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_8002F344(rdram, ctx);
        goto after_0;
    // 0x8002FCCC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_0:
    // 0x8002FCD0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8002FCD4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8002FCD8: jr          $ra
    // 0x8002FCDC: nop

    return;
    // 0x8002FCDC: nop

;}
RECOMP_FUNC void func_8002FCE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002FCE0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002FCE4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8002FCE8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8002FCEC: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8002FCF0: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8002FCF4: lh          $t7, 0x4A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4A);
    // 0x8002FCF8: lh          $t6, 0x46($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X46);
    // 0x8002FCFC: lhu         $t8, 0x52($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X52);
    // 0x8002FD00: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8002FD04: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8002FD08: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8002FD0C: addiu       $a3, $zero, 0x3000
    ctx->r7 = ADD32(0, 0X3000);
    // 0x8002FD10: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8002FD14: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8002FD18: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8002FD1C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8002FD20: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8002FD24: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8002FD28: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8002FD2C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8002FD30: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8002FD34: jal         0x8002F344
    // 0x8002FD38: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_8002F344(rdram, ctx);
        goto after_0;
    // 0x8002FD38: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_0:
    // 0x8002FD3C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8002FD40: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8002FD44: jr          $ra
    // 0x8002FD48: nop

    return;
    // 0x8002FD48: nop

;}
RECOMP_FUNC void func_8002FE24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002FE24: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8002FE28: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8002FE2C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8002FE30: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8002FE34: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x8002FE38: lh          $t7, 0x4A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4A);
    // 0x8002FE3C: lh          $t6, 0x46($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X46);
    // 0x8002FE40: lhu         $t8, 0x52($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X52);
    // 0x8002FE44: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8002FE48: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8002FE4C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8002FE50: addiu       $a3, $zero, 0x3000
    ctx->r7 = ADD32(0, 0X3000);
    // 0x8002FE54: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x8002FE58: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8002FE5C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8002FE60: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8002FE64: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8002FE68: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8002FE6C: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8002FE70: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8002FE74: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8002FE78: jal         0x8002F344
    // 0x8002FE7C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_8002F344(rdram, ctx);
        goto after_0;
    // 0x8002FE7C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_0:
    // 0x8002FE80: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8002FE84: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8002FE88: jr          $ra
    // 0x8002FE8C: nop

    return;
    // 0x8002FE8C: nop

;}
RECOMP_FUNC void func_8002FE90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002FE90: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8002FE94: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8002FE98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002FE9C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8002FEA0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8002FEA4: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8002FEA8: lw          $a0, -0x3080($t6)
    ctx->r4 = MEM_W(ctx->r14, -0X3080);
    // 0x8002FEAC: lh          $t7, 0x6EC($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X6EC);
    // 0x8002FEB0: lh          $t8, 0x6EE($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X6EE);
    // 0x8002FEB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002FEB8: lbu         $a2, 0x6E9($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X6E9);
    // 0x8002FEBC: lbu         $a3, 0x6EB($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X6EB);
    // 0x8002FEC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8002FEC4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8002FEC8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8002FECC: jal         0x8001ECD0
    // 0x8002FED0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    func_8001ECD0(rdram, ctx);
        goto after_0;
    // 0x8002FED0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    after_0:
    // 0x8002FED4: ori         $t9, $zero, 0xFFFF
    ctx->r25 = 0 | 0XFFFF;
    // 0x8002FED8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002FEDC: sh          $t9, 0x3540($at)
    MEM_H(0X3540, ctx->r1) = ctx->r25;
    // 0x8002FEE0: lbu         $v0, 0x12($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X12);
    // 0x8002FEE4: nop

    // 0x8002FEE8: sltiu       $at, $v0, 0x8
    ctx->r1 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8002FEEC: beq         $at, $zero, L_8002FF9C
    if (ctx->r1 == 0) {
        // 0x8002FEF0: sll         $t0, $v0, 2
        ctx->r8 = S32(ctx->r2 << 2);
            goto L_8002FF9C;
    }
    // 0x8002FEF0: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x8002FEF4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8002FEF8: addu        $at, $at, $t0
    gpr jr_addend_8002FF04 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8002FEFC: lw          $t0, 0x4610($at)
    ctx->r8 = ADD32(ctx->r1, 0X4610);
    // 0x8002FF00: nop

    // 0x8002FF04: jr          $t0
    // 0x8002FF08: nop

    switch (jr_addend_8002FF04 >> 2) {
        case 0: goto L_8002FF0C; break;
        case 1: goto L_8002FF1C; break;
        case 2: goto L_8002FF2C; break;
        case 3: goto L_8002FF40; break;
        case 4: goto L_8002FF54; break;
        case 5: goto L_8002FF68; break;
        case 6: goto L_8002FF7C; break;
        case 7: goto L_8002FF90; break;
        default: switch_error(__func__, 0x8002FF04, 0x800D4610);
    }
    // 0x8002FF08: nop

L_8002FF0C:
    // 0x8002FF0C: jal         0x8002FFAC
    // 0x8002FF10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002FFAC(rdram, ctx);
        goto after_1;
    // 0x8002FF10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8002FF14: b           L_8002FFA0
    // 0x8002FF18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8002FFA0;
    // 0x8002FF18: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8002FF1C:
    // 0x8002FF1C: jal         0x80030194
    // 0x8002FF20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80030194(rdram, ctx);
        goto after_2;
    // 0x8002FF20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8002FF24: b           L_8002FFA0
    // 0x8002FF28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8002FFA0;
    // 0x8002FF28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8002FF2C:
    // 0x8002FF2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002FF30: jal         0x80030ABC
    // 0x8002FF34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80030ABC(rdram, ctx);
        goto after_3;
    // 0x8002FF34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8002FF38: b           L_8002FFA0
    // 0x8002FF3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8002FFA0;
    // 0x8002FF3C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8002FF40:
    // 0x8002FF40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002FF44: jal         0x80030ABC
    // 0x8002FF48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80030ABC(rdram, ctx);
        goto after_4;
    // 0x8002FF48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x8002FF4C: b           L_8002FFA0
    // 0x8002FF50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8002FFA0;
    // 0x8002FF50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8002FF54:
    // 0x8002FF54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002FF58: jal         0x80030ABC
    // 0x8002FF5C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80030ABC(rdram, ctx);
        goto after_5;
    // 0x8002FF5C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x8002FF60: b           L_8002FFA0
    // 0x8002FF64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8002FFA0;
    // 0x8002FF64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8002FF68:
    // 0x8002FF68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002FF6C: jal         0x80030ABC
    // 0x8002FF70: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80030ABC(rdram, ctx);
        goto after_6;
    // 0x8002FF70: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x8002FF74: b           L_8002FFA0
    // 0x8002FF78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8002FFA0;
    // 0x8002FF78: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8002FF7C:
    // 0x8002FF7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002FF80: jal         0x80030ABC
    // 0x8002FF84: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80030ABC(rdram, ctx);
        goto after_7;
    // 0x8002FF84: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_7:
    // 0x8002FF88: b           L_8002FFA0
    // 0x8002FF8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8002FFA0;
    // 0x8002FF8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8002FF90:
    // 0x8002FF90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002FF94: jal         0x80030ABC
    // 0x8002FF98: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80030ABC(rdram, ctx);
        goto after_8;
    // 0x8002FF98: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_8:
L_8002FF9C:
    // 0x8002FF9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8002FFA0:
    // 0x8002FFA0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8002FFA4: jr          $ra
    // 0x8002FFA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8002FFA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8002FFAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002FFAC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8002FFB0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8002FFB4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8002FFB8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8002FFBC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8002FFC0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8002FFC4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8002FFC8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8002FFCC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8002FFD0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8002FFD4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002FFD8: lh          $s4, 0xA($a0)
    ctx->r20 = MEM_H(ctx->r4, 0XA);
    // 0x8002FFDC: lw          $s1, 0x18($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X18);
    // 0x8002FFE0: sll         $a1, $s4, 16
    ctx->r5 = S32(ctx->r20 << 16);
    // 0x8002FFE4: lbu         $s5, 0x15($a0)
    ctx->r21 = MEM_BU(ctx->r4, 0X15);
    // 0x8002FFE8: lh          $s6, 0xC($a0)
    ctx->r22 = MEM_H(ctx->r4, 0XC);
    // 0x8002FFEC: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8002FFF0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8002FFF4: jal         0x80031A5C
    // 0x8002FFF8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80031A5C(rdram, ctx);
        goto after_0;
    // 0x8002FFF8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_0:
    // 0x8002FFFC: sll         $a1, $s6, 16
    ctx->r5 = S32(ctx->r22 << 16);
    // 0x80030000: sra         $t7, $a1, 16
    ctx->r15 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80030004: sh          $v0, 0x4A($sp)
    MEM_H(0X4A, ctx->r29) = ctx->r2;
    // 0x80030008: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8003000C: jal         0x80031AB4
    // 0x80030010: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80031AB4(rdram, ctx);
        goto after_1;
    // 0x80030010: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x80030014: sll         $s6, $v0, 16
    ctx->r22 = S32(ctx->r2 << 16);
    // 0x80030018: sra         $t8, $s6, 16
    ctx->r24 = S32(SIGNED(ctx->r22) >> 16);
    // 0x8003001C: lh          $s4, 0x4A($sp)
    ctx->r20 = MEM_H(ctx->r29, 0X4A);
    // 0x80030020: or          $s6, $t8, $zero
    ctx->r22 = ctx->r24 | 0;
    // 0x80030024: sb          $zero, 0x45($sp)
    MEM_B(0X45, ctx->r29) = 0;
    // 0x80030028: sh          $zero, 0x50($sp)
    MEM_H(0X50, ctx->r29) = 0;
    // 0x8003002C: addiu       $fp, $zero, 0xFF
    ctx->r30 = ADD32(0, 0XFF);
    // 0x80030030: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x80030034: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_80030038:
    // 0x80030038: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8003003C:
    // 0x8003003C: lbu         $a2, 0x0($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X0);
    // 0x80030040: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80030044: bne         $fp, $a2, L_80030074
    if (ctx->r30 != ctx->r6) {
        // 0x80030048: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_80030074;
    }
    // 0x80030048: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8003004C: lbu         $a2, 0x0($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0X0);
    // 0x80030050: lhu         $v1, 0xE($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0XE);
    // 0x80030054: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x80030058: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003005C: beq         $at, $zero, L_8003006C
    if (ctx->r1 == 0) {
        // 0x80030060: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_8003006C;
    }
    // 0x80030060: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80030064: b           L_800300E0
    // 0x80030068: andi        $s5, $a2, 0xFF
    ctx->r21 = ctx->r6 & 0XFF;
        goto L_800300E0;
    // 0x80030068: andi        $s5, $a2, 0xFF
    ctx->r21 = ctx->r6 & 0XFF;
L_8003006C:
    // 0x8003006C: b           L_800300E0
    // 0x80030070: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
        goto L_800300E0;
    // 0x80030070: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80030074:
    // 0x80030074: slti        $at, $v0, 0xF6
    ctx->r1 = SIGNED(ctx->r2) < 0XF6 ? 1 : 0;
    // 0x80030078: bne         $at, $zero, L_8003008C
    if (ctx->r1 != 0) {
        // 0x8003007C: sll         $a0, $s4, 16
        ctx->r4 = S32(ctx->r20 << 16);
            goto L_8003008C;
    }
    // 0x8003007C: sll         $a0, $s4, 16
    ctx->r4 = S32(ctx->r20 << 16);
    // 0x80030080: lhu         $v1, 0xE($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0XE);
    // 0x80030084: b           L_800300E0
    // 0x80030088: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_800300E0;
    // 0x80030088: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8003008C:
    // 0x8003008C: sll         $a1, $s6, 16
    ctx->r5 = S32(ctx->r22 << 16);
    // 0x80030090: sra         $t0, $a1, 16
    ctx->r8 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80030094: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80030098: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8003009C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x800300A0: jal         0x80030308
    // 0x800300A4: andi        $a3, $s5, 0xFF
    ctx->r7 = ctx->r21 & 0XFF;
    func_80030308(rdram, ctx);
        goto after_2;
    // 0x800300A4: andi        $a3, $s5, 0xFF
    ctx->r7 = ctx->r21 & 0XFF;
    after_2:
    // 0x800300A8: lbu         $t2, 0x13($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X13);
    // 0x800300AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800300B0: andi        $t1, $s0, 0xFFFF
    ctx->r9 = ctx->r16 & 0XFFFF;
    // 0x800300B4: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
    // 0x800300B8: bgez        $t2, L_800300C8
    if (SIGNED(ctx->r10) >= 0) {
        // 0x800300BC: sra         $t3, $t2, 1
        ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
            goto L_800300C8;
    }
    // 0x800300BC: sra         $t3, $t2, 1
    ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
    // 0x800300C0: addiu       $at, $t2, 0x1
    ctx->r1 = ADD32(ctx->r10, 0X1);
    // 0x800300C4: sra         $t3, $at, 1
    ctx->r11 = S32(SIGNED(ctx->r1) >> 1);
L_800300C8:
    // 0x800300C8: addu        $s4, $s4, $t3
    ctx->r20 = ADD32(ctx->r20, ctx->r11);
    // 0x800300CC: addiu       $s4, $s4, 0x6
    ctx->r20 = ADD32(ctx->r20, 0X6);
    // 0x800300D0: sll         $t4, $s4, 16
    ctx->r12 = S32(ctx->r20 << 16);
    // 0x800300D4: lhu         $v1, 0xE($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0XE);
    // 0x800300D8: sra         $s4, $t4, 16
    ctx->r20 = S32(SIGNED(ctx->r12) >> 16);
    // 0x800300DC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_800300E0:
    // 0x800300E0: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800300E4: bne         $at, $zero, L_800300F0
    if (ctx->r1 != 0) {
        // 0x800300E8: nop
    
            goto L_800300F0;
    }
    // 0x800300E8: nop

    // 0x800300EC: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_800300F0:
    // 0x800300F0: bne         $s7, $s3, L_8003003C
    if (ctx->r23 != ctx->r19) {
        // 0x800300F4: nop
    
            goto L_8003003C;
    }
    // 0x800300F4: nop

    // 0x800300F8: lbu         $v0, 0x14($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X14);
    // 0x800300FC: lhu         $t8, 0x50($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X50);
    // 0x80030100: lhu         $v1, 0x10($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X10);
    // 0x80030104: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x80030108: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8003010C: addiu       $s6, $s6, 0xC
    ctx->r22 = ADD32(ctx->r22, 0XC);
    // 0x80030110: andi        $t0, $t9, 0xFFFF
    ctx->r8 = ctx->r25 & 0XFFFF;
    // 0x80030114: lh          $s4, 0x4A($sp)
    ctx->r20 = MEM_H(ctx->r29, 0X4A);
    // 0x80030118: sll         $t6, $s6, 16
    ctx->r14 = S32(ctx->r22 << 16);
    // 0x8003011C: slt         $at, $t0, $v1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80030120: sra         $s6, $t6, 16
    ctx->r22 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80030124: bne         $at, $zero, L_80030134
    if (ctx->r1 != 0) {
        // 0x80030128: sh          $t9, 0x50($sp)
        MEM_H(0X50, ctx->r29) = ctx->r25;
            goto L_80030134;
    }
    // 0x80030128: sh          $t9, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r25;
    // 0x8003012C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80030130: sb          $t1, 0x45($sp)
    MEM_B(0X45, ctx->r29) = ctx->r9;
L_80030134:
    // 0x80030134: lbu         $t2, 0x45($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X45);
    // 0x80030138: nop

    // 0x8003013C: bne         $s7, $t2, L_80030038
    if (ctx->r23 != ctx->r10) {
        // 0x80030140: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80030038;
    }
    // 0x80030140: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80030144: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80030148: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    // 0x8003014C: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80030150: lui         $t4, 0xE700
    ctx->r12 = S32(0XE700 << 16);
    // 0x80030154: addiu       $t3, $v1, 0x8
    ctx->r11 = ADD32(ctx->r3, 0X8);
    // 0x80030158: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x8003015C: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80030160: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x80030164: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80030168: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8003016C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80030170: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80030174: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80030178: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8003017C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80030180: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80030184: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80030188: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003018C: jr          $ra
    // 0x80030190: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80030190: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80030194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030194: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80030198: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8003019C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800301A0: lh          $t6, 0xC($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XC);
    // 0x800301A4: lh          $a1, 0xA($a0)
    ctx->r5 = MEM_H(ctx->r4, 0XA);
    // 0x800301A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x800301AC: jal         0x80031A5C
    // 0x800301B0: sh          $t6, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r14;
    func_80031A5C(rdram, ctx);
        goto after_0;
    // 0x800301B0: sh          $t6, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r14;
    after_0:
    // 0x800301B4: lh          $a1, 0x34($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X34);
    // 0x800301B8: sh          $v0, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r2;
    // 0x800301BC: jal         0x80031AB4
    // 0x800301C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80031AB4(rdram, ctx);
        goto after_1;
    // 0x800301C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x800301C4: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    // 0x800301C8: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x800301CC: lh          $t9, 0x36($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X36);
    // 0x800301D0: andi        $t7, $a0, 0x4000
    ctx->r15 = ctx->r4 & 0X4000;
    // 0x800301D4: beq         $t7, $zero, L_8003022C
    if (ctx->r15 == 0) {
        // 0x800301D8: andi        $t3, $a0, 0x1000
        ctx->r11 = ctx->r4 & 0X1000;
            goto L_8003022C;
    }
    // 0x800301D8: andi        $t3, $a0, 0x1000
    ctx->r11 = ctx->r4 & 0X1000;
    // 0x800301DC: lw          $t8, 0x1C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1C);
    // 0x800301E0: lh          $a1, 0x34($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X34);
    // 0x800301E4: bgez        $t8, L_800301FC
    if (SIGNED(ctx->r24) >= 0) {
        // 0x800301E8: lui         $a2, 0x800A
        ctx->r6 = S32(0X800A << 16);
            goto L_800301FC;
    }
    // 0x800301E8: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x800301EC: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x800301F0: lbu         $a2, 0x7277($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X7277);
    // 0x800301F4: b           L_80030208
    // 0x800301F8: lbu         $t0, 0x13($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X13);
        goto L_80030208;
    // 0x800301F8: lbu         $t0, 0x13($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X13);
L_800301FC:
    // 0x800301FC: lbu         $a2, 0x7275($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X7275);
    // 0x80030200: nop

    // 0x80030204: lbu         $t0, 0x13($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X13);
L_80030208:
    // 0x80030208: lbu         $a3, 0x15($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X15);
    // 0x8003020C: subu        $a0, $t9, $t0
    ctx->r4 = SUB32(ctx->r25, ctx->r8);
    // 0x80030210: addiu       $a0, $a0, -0x6
    ctx->r4 = ADD32(ctx->r4, -0X6);
    // 0x80030214: sll         $t1, $a0, 16
    ctx->r9 = S32(ctx->r4 << 16);
    // 0x80030218: jal         0x80030308
    // 0x8003021C: sra         $a0, $t1, 16
    ctx->r4 = S32(SIGNED(ctx->r9) >> 16);
    func_80030308(rdram, ctx);
        goto after_2;
    // 0x8003021C: sra         $a0, $t1, 16
    ctx->r4 = S32(SIGNED(ctx->r9) >> 16);
    after_2:
    // 0x80030220: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x80030224: nop

    // 0x80030228: andi        $t3, $a0, 0x1000
    ctx->r11 = ctx->r4 & 0X1000;
L_8003022C:
    // 0x8003022C: beq         $t3, $zero, L_8003023C
    if (ctx->r11 == 0) {
        // 0x80030230: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8003023C;
    }
    // 0x80030230: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80030234: b           L_80030240
    // 0x80030238: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80030240;
    // 0x80030238: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8003023C:
    // 0x8003023C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80030240:
    // 0x80030240: bne         $v1, $at, L_80030258
    if (ctx->r3 != ctx->r1) {
        // 0x80030244: andi        $t4, $a0, 0x2000
        ctx->r12 = ctx->r4 & 0X2000;
            goto L_80030258;
    }
    // 0x80030244: andi        $t4, $a0, 0x2000
    ctx->r12 = ctx->r4 & 0X2000;
    // 0x80030248: beq         $t4, $zero, L_80030258
    if (ctx->r12 == 0) {
        // 0x8003024C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80030258;
    }
    // 0x8003024C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80030250: b           L_80030258
    // 0x80030254: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_80030258;
    // 0x80030254: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80030258:
    // 0x80030258: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8003025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80030260: bgez        $v0, L_800302B0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80030264: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_800302B0;
    }
    // 0x80030264: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80030268: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8003026C: lui         $at, 0xBFF0
    ctx->r1 = S32(0XBFF0 << 16);
    // 0x80030270: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80030274: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80030278: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8003027C: nop

    // 0x80030280: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80030284: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x80030288: nop

    // 0x8003028C: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x80030290: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80030294: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80030298: nop

    // 0x8003029C: cvt.w.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_D(ctx->f10.d);
    // 0x800302A0: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x800302A4: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800302A8: b           L_800302B4
    // 0x800302AC: lhu         $t6, 0xE($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XE);
        goto L_800302B4;
    // 0x800302AC: lhu         $t6, 0xE($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XE);
L_800302B0:
    // 0x800302B0: lhu         $t6, 0xE($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0XE);
L_800302B4:
    // 0x800302B4: lh          $a1, 0x36($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X36);
    // 0x800302B8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800302BC: lbu         $t7, 0x13($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X13);
    // 0x800302C0: lh          $a2, 0x34($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X34);
    // 0x800302C4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x800302C8: lbu         $t8, 0x15($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X15);
    // 0x800302CC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x800302D0: jal         0x800306B4
    // 0x800302D4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    func_800306B4(rdram, ctx);
        goto after_3;
    // 0x800302D4: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    after_3:
    // 0x800302D8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800302DC: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    // 0x800302E0: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x800302E4: lui         $t0, 0xE700
    ctx->r8 = S32(0XE700 << 16);
    // 0x800302E8: addiu       $t9, $v1, 0x8
    ctx->r25 = ADD32(ctx->r3, 0X8);
    // 0x800302EC: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x800302F0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800302F4: sw          $t0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r8;
    // 0x800302F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800302FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80030300: jr          $ra
    // 0x80030304: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80030304: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80030308(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030308: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x8003030C: lui         $t4, 0x801B
    ctx->r12 = S32(0X801B << 16);
    // 0x80030310: addiu       $t4, $t4, 0x3540
    ctx->r12 = ADD32(ctx->r12, 0X3540);
    // 0x80030314: sw          $a3, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r7;
    // 0x80030318: lbu         $t6, 0x8F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X8F);
    // 0x8003031C: lhu         $t7, 0x0($t4)
    ctx->r15 = MEM_HU(ctx->r12, 0X0);
    // 0x80030320: sw          $a0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r4;
    // 0x80030324: sw          $a1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r5;
    // 0x80030328: sw          $a2, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r6;
    // 0x8003032C: beq         $t7, $t6, L_80030410
    if (ctx->r15 == ctx->r14) {
        // 0x80030330: or          $t3, $t6, $zero
        ctx->r11 = ctx->r14 | 0;
            goto L_80030410;
    }
    // 0x80030330: or          $t3, $t6, $zero
    ctx->r11 = ctx->r14 | 0;
    // 0x80030334: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x80030338: addiu       $v1, $v1, -0x2F94
    ctx->r3 = ADD32(ctx->r3, -0X2F94);
    // 0x8003033C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80030340: sh          $t6, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r14;
    // 0x80030344: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80030348: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8003034C: lui         $t9, 0xBA00
    ctx->r25 = S32(0XBA00 << 16);
    // 0x80030350: ori         $t9, $t9, 0xE02
    ctx->r25 = ctx->r25 | 0XE02;
    // 0x80030354: ori         $t7, $zero, 0x8000
    ctx->r15 = 0 | 0X8000;
    // 0x80030358: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8003035C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80030360: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80030364: lui         $t8, 0xFD10
    ctx->r24 = S32(0XFD10 << 16);
    // 0x80030368: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8003036C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80030370: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80030374: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80030378: lw          $t6, -0x3898($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3898);
    // 0x8003037C: sll         $t7, $t3, 3
    ctx->r15 = S32(ctx->r11 << 3);
    // 0x80030380: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x80030384: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80030388: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003038C: lui         $t7, 0xE800
    ctx->r15 = S32(0XE800 << 16);
    // 0x80030390: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80030394: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80030398: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8003039C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800303A0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800303A4: lui         $t8, 0xF500
    ctx->r24 = S32(0XF500 << 16);
    // 0x800303A8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800303AC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800303B0: ori         $t8, $t8, 0x1F0
    ctx->r24 = ctx->r24 | 0X1F0;
    // 0x800303B4: lui         $t9, 0x700
    ctx->r25 = S32(0X700 << 16);
    // 0x800303B8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800303BC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800303C0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800303C4: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x800303C8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800303CC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800303D0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800303D4: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800303D8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800303DC: lui         $t7, 0x703
    ctx->r15 = S32(0X703 << 16);
    // 0x800303E0: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800303E4: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800303E8: ori         $t7, $t7, 0xC000
    ctx->r15 = ctx->r15 | 0XC000;
    // 0x800303EC: lui         $t9, 0xF000
    ctx->r25 = S32(0XF000 << 16);
    // 0x800303F0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800303F4: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800303F8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800303FC: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80030400: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80030404: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80030408: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8003040C: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
L_80030410:
    // 0x80030410: lbu         $t9, 0x8B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X8B);
    // 0x80030414: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x80030418: addiu       $v1, $v1, -0x2F94
    ctx->r3 = ADD32(ctx->r3, -0X2F94);
    // 0x8003041C: beq         $t9, $zero, L_800306AC
    if (ctx->r25 == 0) {
        // 0x80030420: sw          $t9, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r25;
            goto L_800306AC;
    }
    // 0x80030420: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80030424: addiu       $t7, $zero, 0x1000
    ctx->r15 = ADD32(0, 0X1000);
    // 0x80030428: andi        $t8, $t9, 0x1
    ctx->r24 = ctx->r25 & 0X1;
    // 0x8003042C: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x80030430: or          $t4, $zero, $zero
    ctx->r12 = 0 | 0;
    // 0x80030434: beq         $t8, $zero, L_80030440
    if (ctx->r24 == 0) {
        // 0x80030438: sw          $t7, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r15;
            goto L_80030440;
    }
    // 0x80030438: sw          $t7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r15;
    // 0x8003043C: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
L_80030440:
    // 0x80030440: lh          $t9, 0x82($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X82);
    // 0x80030444: lh          $t7, 0x86($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X86);
    // 0x80030448: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8003044C: lw          $t8, -0x3080($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3080);
    // 0x80030450: addiu       $t2, $t9, 0x5
    ctx->r10 = ADD32(ctx->r25, 0X5);
    // 0x80030454: addiu       $t3, $t7, 0xB
    ctx->r11 = ADD32(ctx->r15, 0XB);
    // 0x80030458: sh          $t9, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r25;
    // 0x8003045C: sh          $t7, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = ctx->r15;
    // 0x80030460: sll         $t6, $t2, 16
    ctx->r14 = S32(ctx->r10 << 16);
    // 0x80030464: sll         $t9, $t3, 16
    ctx->r25 = S32(ctx->r11 << 16);
    // 0x80030468: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003046C: srl         $t7, $t8, 25
    ctx->r15 = S32(U32(ctx->r24) >> 25);
    // 0x80030470: sra         $t2, $t6, 16
    ctx->r10 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80030474: bne         $t7, $at, L_8003049C
    if (ctx->r15 != ctx->r1) {
        // 0x80030478: sra         $t3, $t9, 16
        ctx->r11 = S32(SIGNED(ctx->r25) >> 16);
            goto L_8003049C;
    }
    // 0x80030478: sra         $t3, $t9, 16
    ctx->r11 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8003047C: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x80030480: sll         $t9, $t2, 16
    ctx->r25 = S32(ctx->r10 << 16);
    // 0x80030484: sra         $t2, $t9, 16
    ctx->r10 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80030488: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x8003048C: sll         $t8, $t3, 16
    ctx->r24 = S32(ctx->r11 << 16);
    // 0x80030490: addiu       $t9, $zero, 0x400
    ctx->r25 = ADD32(0, 0X400);
    // 0x80030494: sra         $t3, $t8, 16
    ctx->r11 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80030498: sw          $t9, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r25;
L_8003049C:
    // 0x8003049C: lh          $t6, 0x82($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X82);
    // 0x800304A0: nop

    // 0x800304A4: slti        $at, $t6, 0x140
    ctx->r1 = SIGNED(ctx->r14) < 0X140 ? 1 : 0;
    // 0x800304A8: beq         $at, $zero, L_800306AC
    if (ctx->r1 == 0) {
        // 0x800304AC: nop
    
            goto L_800306AC;
    }
    // 0x800304AC: nop

    // 0x800304B0: blez        $t2, L_800306AC
    if (SIGNED(ctx->r10) <= 0) {
        // 0x800304B4: nop
    
            goto L_800306AC;
    }
    // 0x800304B4: nop

    // 0x800304B8: lh          $t8, 0x86($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X86);
    // 0x800304BC: nop

    // 0x800304C0: slti        $at, $t8, 0xF0
    ctx->r1 = SIGNED(ctx->r24) < 0XF0 ? 1 : 0;
    // 0x800304C4: beq         $at, $zero, L_800306AC
    if (ctx->r1 == 0) {
        // 0x800304C8: nop
    
            goto L_800306AC;
    }
    // 0x800304C8: nop

    // 0x800304CC: blez        $t3, L_800306AC
    if (SIGNED(ctx->r11) <= 0) {
        // 0x800304D0: slti        $at, $t2, 0x140
        ctx->r1 = SIGNED(ctx->r10) < 0X140 ? 1 : 0;
            goto L_800306AC;
    }
    // 0x800304D0: slti        $at, $t2, 0x140
    ctx->r1 = SIGNED(ctx->r10) < 0X140 ? 1 : 0;
    // 0x800304D4: bgez        $t6, L_800304E8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800304D8: lh          $t7, 0x86($sp)
        ctx->r15 = MEM_H(ctx->r29, 0X86);
            goto L_800304E8;
    }
    // 0x800304D8: lh          $t7, 0x86($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X86);
    // 0x800304DC: subu        $t4, $t4, $t6
    ctx->r12 = SUB32(ctx->r12, ctx->r14);
    // 0x800304E0: sh          $zero, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = 0;
    // 0x800304E4: lh          $t7, 0x86($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X86);
L_800304E8:
    // 0x800304E8: bne         $at, $zero, L_800304F4
    if (ctx->r1 != 0) {
        // 0x800304EC: sll         $t9, $t4, 5
        ctx->r25 = S32(ctx->r12 << 5);
            goto L_800304F4;
    }
    // 0x800304EC: sll         $t9, $t4, 5
    ctx->r25 = S32(ctx->r12 << 5);
    // 0x800304F0: addiu       $t2, $zero, 0x13F
    ctx->r10 = ADD32(0, 0X13F);
L_800304F4:
    // 0x800304F4: bgez        $t7, L_80030504
    if (SIGNED(ctx->r15) >= 0) {
        // 0x800304F8: slti        $at, $t3, 0xF0
        ctx->r1 = SIGNED(ctx->r11) < 0XF0 ? 1 : 0;
            goto L_80030504;
    }
    // 0x800304F8: slti        $at, $t3, 0xF0
    ctx->r1 = SIGNED(ctx->r11) < 0XF0 ? 1 : 0;
    // 0x800304FC: negu        $t5, $t7
    ctx->r13 = SUB32(0, ctx->r15);
    // 0x80030500: sh          $zero, 0x6C($sp)
    MEM_H(0X6C, ctx->r29) = 0;
L_80030504:
    // 0x80030504: bne         $at, $zero, L_80030510
    if (ctx->r1 != 0) {
        // 0x80030508: or          $t4, $t9, $zero
        ctx->r12 = ctx->r25 | 0;
            goto L_80030510;
    }
    // 0x80030508: or          $t4, $t9, $zero
    ctx->r12 = ctx->r25 | 0;
    // 0x8003050C: addiu       $t3, $zero, 0xEF
    ctx->r11 = ADD32(0, 0XEF);
L_80030510:
    // 0x80030510: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80030514: lui         $t7, 0xFD50
    ctx->r15 = S32(0XFD50 << 16);
    // 0x80030518: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8003051C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80030520: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80030524: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80030528: sll         $t8, $t5, 5
    ctx->r24 = S32(ctx->r13 << 5);
    // 0x8003052C: or          $t5, $t8, $zero
    ctx->r13 = ctx->r24 | 0;
    // 0x80030530: sra         $t8, $t9, 1
    ctx->r24 = S32(SIGNED(ctx->r25) >> 1);
    // 0x80030534: andi        $t6, $t8, 0xFFFF
    ctx->r14 = ctx->r24 & 0XFFFF;
    // 0x80030538: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003053C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80030540: lui         $t9, 0x8032
    ctx->r25 = S32(0X8032 << 16);
    // 0x80030544: addiu       $t9, $t9, 0x5800
    ctx->r25 = ADD32(ctx->r25, 0X5800);
    // 0x80030548: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x8003054C: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x80030550: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80030554: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80030558: lui         $t9, 0x705
    ctx->r25 = S32(0X705 << 16);
    // 0x8003055C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80030560: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80030564: ori         $t9, $t9, 0x4150
    ctx->r25 = ctx->r25 | 0X4150;
    // 0x80030568: lui         $t7, 0xF550
    ctx->r15 = S32(0XF550 << 16);
    // 0x8003056C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80030570: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80030574: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80030578: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x8003057C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80030580: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80030584: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80030588: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8003058C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80030590: lui         $t8, 0x702
    ctx->r24 = S32(0X702 << 16);
    // 0x80030594: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80030598: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8003059C: ori         $t8, $t8, 0xF800
    ctx->r24 = ctx->r24 | 0XF800;
    // 0x800305A0: lui         $t9, 0xF300
    ctx->r25 = S32(0XF300 << 16);
    // 0x800305A4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800305A8: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x800305AC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800305B0: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x800305B4: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800305B8: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800305BC: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800305C0: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800305C4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800305C8: lui         $t6, 0xF5
    ctx->r14 = S32(0XF5 << 16);
    // 0x800305CC: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800305D0: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800305D4: lui         $t8, 0xF540
    ctx->r24 = S32(0XF540 << 16);
    // 0x800305D8: ori         $t8, $t8, 0x200
    ctx->r24 = ctx->r24 | 0X200;
    // 0x800305DC: ori         $t6, $t6, 0x4150
    ctx->r14 = ctx->r14 | 0X4150;
    // 0x800305E0: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x800305E4: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800305E8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800305EC: lui         $t8, 0x3
    ctx->r24 = S32(0X3 << 16);
    // 0x800305F0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800305F4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800305F8: ori         $t8, $t8, 0xC02C
    ctx->r24 = ctx->r24 | 0XC02C;
    // 0x800305FC: lui         $t9, 0xF200
    ctx->r25 = S32(0XF200 << 16);
    // 0x80030600: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80030604: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80030608: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003060C: sll         $t7, $t2, 2
    ctx->r15 = S32(ctx->r10 << 2);
    // 0x80030610: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x80030614: sll         $t8, $t9, 12
    ctx->r24 = S32(ctx->r25 << 12);
    // 0x80030618: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8003061C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80030620: sll         $t7, $t3, 2
    ctx->r15 = S32(ctx->r11 << 2);
    // 0x80030624: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x80030628: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x8003062C: andi        $t9, $t7, 0xFFF
    ctx->r25 = ctx->r15 & 0XFFF;
    // 0x80030630: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x80030634: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80030638: lh          $t7, 0x6E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X6E);
    // 0x8003063C: nop

    // 0x80030640: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80030644: lh          $t7, 0x6C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X6C);
    // 0x80030648: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x8003064C: sll         $t8, $t9, 12
    ctx->r24 = S32(ctx->r25 << 12);
    // 0x80030650: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80030654: andi        $t9, $t6, 0xFFF
    ctx->r25 = ctx->r14 & 0XFFF;
    // 0x80030658: or          $t7, $t8, $t9
    ctx->r15 = ctx->r24 | ctx->r25;
    // 0x8003065C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80030660: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80030664: lui         $t8, 0xB400
    ctx->r24 = S32(0XB400 << 16);
    // 0x80030668: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8003066C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80030670: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x80030674: sll         $t7, $t4, 16
    ctx->r15 = S32(ctx->r12 << 16);
    // 0x80030678: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8003067C: or          $t8, $t7, $t6
    ctx->r24 = ctx->r15 | ctx->r14;
    // 0x80030680: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80030684: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80030688: lui         $t7, 0xB300
    ctx->r15 = S32(0XB300 << 16);
    // 0x8003068C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80030690: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80030694: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80030698: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x8003069C: nop

    // 0x800306A0: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x800306A4: ori         $t7, $t9, 0x400
    ctx->r15 = ctx->r25 | 0X400;
    // 0x800306A8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
L_800306AC:
    // 0x800306AC: jr          $ra
    // 0x800306B0: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    return;
    // 0x800306B0: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_800306B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800306B4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800306B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800306BC: lhu         $s0, 0x52($sp)
    ctx->r16 = MEM_HU(ctx->r29, 0X52);
    // 0x800306C0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800306C4: sll         $s1, $a1, 16
    ctx->r17 = S32(ctx->r5 << 16);
    // 0x800306C8: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800306CC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800306D0: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x800306D4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800306D8: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x800306DC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800306E0: sra         $t7, $a1, 16
    ctx->r15 = S32(SIGNED(ctx->r5) >> 16);
    // 0x800306E4: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x800306E8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x800306EC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x800306F0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800306F4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800306F8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800306FC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80030700: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80030704: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80030708: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8003070C: jal         0x800309F8
    // 0x80030710: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800309F8(rdram, ctx);
        goto after_0;
    // 0x80030710: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x80030714: lw          $v1, 0x4C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X4C);
    // 0x80030718: andi        $t1, $s0, 0xFF
    ctx->r9 = ctx->r16 & 0XFF;
    // 0x8003071C: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80030720: bne         $at, $zero, L_8003077C
    if (ctx->r1 != 0) {
        // 0x80030724: addiu       $fp, $zero, 0x1
        ctx->r30 = ADD32(0, 0X1);
            goto L_8003077C;
    }
    // 0x80030724: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x80030728: lhu         $t8, 0x8($s2)
    ctx->r24 = MEM_HU(ctx->r18, 0X8);
    // 0x8003072C: nop

    // 0x80030730: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80030734: beq         $t9, $zero, L_80030774
    if (ctx->r25 == 0) {
        // 0x80030738: nop
    
            goto L_80030774;
    }
    // 0x80030738: nop

    // 0x8003073C: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x80030740: bne         $v0, $zero, L_8003074C
    if (ctx->r2 != 0) {
        // 0x80030744: nop
    
            goto L_8003074C;
    }
    // 0x80030744: nop

    // 0x80030748: break       7
    do_break(2147682120);
L_8003074C:
    // 0x8003074C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80030750: bne         $v0, $at, L_80030764
    if (ctx->r2 != ctx->r1) {
        // 0x80030754: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80030764;
    }
    // 0x80030754: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80030758: bne         $v1, $at, L_80030764
    if (ctx->r3 != ctx->r1) {
        // 0x8003075C: nop
    
            goto L_80030764;
    }
    // 0x8003075C: nop

    // 0x80030760: break       6
    do_break(2147682144);
L_80030764:
    // 0x80030764: mfhi        $v1
    ctx->r3 = hi;
    // 0x80030768: sw          $v1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r3;
    // 0x8003076C: b           L_80030780
    // 0x80030770: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
        goto L_80030780;
    // 0x80030770: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
L_80030774:
    // 0x80030774: addiu       $t0, $v0, -0x1
    ctx->r8 = ADD32(ctx->r2, -0X1);
    // 0x80030778: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
L_8003077C:
    // 0x8003077C: lw          $s2, 0x4C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X4C);
L_80030780:
    // 0x80030780: blez        $t1, L_80030970
    if (SIGNED(ctx->r9) <= 0) {
        // 0x80030784: andi        $s4, $s0, 0xFF
        ctx->r20 = ctx->r16 & 0XFF;
            goto L_80030970;
    }
    // 0x80030784: andi        $s4, $s0, 0xFF
    ctx->r20 = ctx->r16 & 0XFF;
    // 0x80030788: lbu         $s5, 0x5F($sp)
    ctx->r21 = MEM_BU(ctx->r29, 0X5F);
    // 0x8003078C: lbu         $s7, 0x57($sp)
    ctx->r23 = MEM_BU(ctx->r29, 0X57);
    // 0x80030790: lbu         $s6, 0x5B($sp)
    ctx->r22 = MEM_BU(ctx->r29, 0X5B);
    // 0x80030794: or          $s3, $s4, $zero
    ctx->r19 = ctx->r20 | 0;
L_80030798:
    // 0x80030798: addiu       $a1, $s3, -0x1
    ctx->r5 = ADD32(ctx->r19, -0X1);
    // 0x8003079C: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x800307A0: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    // 0x800307A4: jal         0x800309F8
    // 0x800307A8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800309F8(rdram, ctx);
        goto after_1;
    // 0x800307A8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_1:
    // 0x800307AC: beq         $s5, $zero, L_800307CC
    if (ctx->r21 == 0) {
        // 0x800307B0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_800307CC;
    }
    // 0x800307B0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x800307B4: beq         $s5, $fp, L_80030838
    if (ctx->r21 == ctx->r30) {
        // 0x800307B8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80030838;
    }
    // 0x800307B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800307BC: beq         $s5, $at, L_800308C0
    if (ctx->r21 == ctx->r1) {
        // 0x800307C0: lw          $t3, 0x4C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X4C);
            goto L_800308C0;
    }
    // 0x800307C0: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x800307C4: b           L_80030964
    // 0x800307C8: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
        goto L_80030964;
    // 0x800307C8: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
L_800307CC:
    // 0x800307CC: div         $zero, $s2, $v1
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r3)));
    // 0x800307D0: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x800307D4: bne         $v1, $zero, L_800307E0
    if (ctx->r3 != 0) {
        // 0x800307D8: nop
    
            goto L_800307E0;
    }
    // 0x800307D8: nop

    // 0x800307DC: break       7
    do_break(2147682268);
L_800307E0:
    // 0x800307E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800307E4: bne         $v1, $at, L_800307F8
    if (ctx->r3 != ctx->r1) {
        // 0x800307E8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800307F8;
    }
    // 0x800307E8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800307EC: bne         $s2, $at, L_800307F8
    if (ctx->r18 != ctx->r1) {
        // 0x800307F0: nop
    
            goto L_800307F8;
    }
    // 0x800307F0: nop

    // 0x800307F4: break       6
    do_break(2147682292);
L_800307F8:
    // 0x800307F8: sra         $t5, $a0, 16
    ctx->r13 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800307FC: lh          $a1, 0x4A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X4A);
    // 0x80030800: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x80030804: andi        $a3, $s6, 0xFF
    ctx->r7 = ctx->r22 & 0XFF;
    // 0x80030808: or          $s0, $s7, $zero
    ctx->r16 = ctx->r23 | 0;
    // 0x8003080C: mflo        $a2
    ctx->r6 = lo;
    // 0x80030810: andi        $t4, $a2, 0xFF
    ctx->r12 = ctx->r6 & 0XFF;
    // 0x80030814: mfhi        $s2
    ctx->r18 = hi;
    // 0x80030818: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x8003081C: jal         0x800309A0
    // 0x80030820: nop

    func_800309A0(rdram, ctx);
        goto after_2;
    // 0x80030820: nop

    after_2:
    // 0x80030824: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
    // 0x80030828: addiu       $s1, $s1, 0x6
    ctx->r17 = ADD32(ctx->r17, 0X6);
    // 0x8003082C: sll         $t6, $s1, 16
    ctx->r14 = S32(ctx->r17 << 16);
    // 0x80030830: b           L_80030960
    // 0x80030834: sra         $s1, $t6, 16
    ctx->r17 = S32(SIGNED(ctx->r14) >> 16);
        goto L_80030960;
    // 0x80030834: sra         $s1, $t6, 16
    ctx->r17 = S32(SIGNED(ctx->r14) >> 16);
L_80030838:
    // 0x80030838: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8003083C: or          $s0, $s7, $zero
    ctx->r16 = ctx->r23 | 0;
    // 0x80030840: slt         $at, $t8, $v0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80030844: beq         $at, $zero, L_80030854
    if (ctx->r1 == 0) {
        // 0x80030848: nop
    
            goto L_80030854;
    }
    // 0x80030848: nop

    // 0x8003084C: bne         $fp, $s3, L_800308A8
    if (ctx->r30 != ctx->r19) {
        // 0x80030850: nop
    
            goto L_800308A8;
    }
    // 0x80030850: nop

L_80030854:
    // 0x80030854: div         $zero, $s2, $v1
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r3)));
    // 0x80030858: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x8003085C: bne         $v1, $zero, L_80030868
    if (ctx->r3 != 0) {
        // 0x80030860: nop
    
            goto L_80030868;
    }
    // 0x80030860: nop

    // 0x80030864: break       7
    do_break(2147682404);
L_80030868:
    // 0x80030868: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003086C: bne         $v1, $at, L_80030880
    if (ctx->r3 != ctx->r1) {
        // 0x80030870: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80030880;
    }
    // 0x80030870: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80030874: bne         $s2, $at, L_80030880
    if (ctx->r18 != ctx->r1) {
        // 0x80030878: nop
    
            goto L_80030880;
    }
    // 0x80030878: nop

    // 0x8003087C: break       6
    do_break(2147682428);
L_80030880:
    // 0x80030880: sra         $t0, $a0, 16
    ctx->r8 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80030884: lh          $a1, 0x4A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X4A);
    // 0x80030888: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8003088C: andi        $a3, $s6, 0xFF
    ctx->r7 = ctx->r22 & 0XFF;
    // 0x80030890: mflo        $a2
    ctx->r6 = lo;
    // 0x80030894: andi        $t9, $a2, 0xFF
    ctx->r25 = ctx->r6 & 0XFF;
    // 0x80030898: mfhi        $s2
    ctx->r18 = hi;
    // 0x8003089C: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x800308A0: jal         0x800309A0
    // 0x800308A4: nop

    func_800309A0(rdram, ctx);
        goto after_3;
    // 0x800308A4: nop

    after_3:
L_800308A8:
    // 0x800308A8: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
    // 0x800308AC: addiu       $s1, $s1, 0x6
    ctx->r17 = ADD32(ctx->r17, 0X6);
    // 0x800308B0: sll         $t1, $s1, 16
    ctx->r9 = S32(ctx->r17 << 16);
    // 0x800308B4: b           L_80030960
    // 0x800308B8: sra         $s1, $t1, 16
    ctx->r17 = S32(SIGNED(ctx->r9) >> 16);
        goto L_80030960;
    // 0x800308B8: sra         $s1, $t1, 16
    ctx->r17 = S32(SIGNED(ctx->r9) >> 16);
    // 0x800308BC: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
L_800308C0:
    // 0x800308C0: or          $s0, $s7, $zero
    ctx->r16 = ctx->r23 | 0;
    // 0x800308C4: slt         $at, $t3, $v0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800308C8: beq         $at, $zero, L_800308D8
    if (ctx->r1 == 0) {
        // 0x800308CC: nop
    
            goto L_800308D8;
    }
    // 0x800308CC: nop

    // 0x800308D0: bne         $fp, $s3, L_80030940
    if (ctx->r30 != ctx->r19) {
        // 0x800308D4: nop
    
            goto L_80030940;
    }
    // 0x800308D4: nop

L_800308D8:
    // 0x800308D8: div         $zero, $s2, $v1
    lo = S32(S64(S32(ctx->r18)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r18)) % S64(S32(ctx->r3)));
    // 0x800308DC: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x800308E0: bne         $v1, $zero, L_800308EC
    if (ctx->r3 != 0) {
        // 0x800308E4: nop
    
            goto L_800308EC;
    }
    // 0x800308E4: nop

    // 0x800308E8: break       7
    do_break(2147682536);
L_800308EC:
    // 0x800308EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800308F0: bne         $v1, $at, L_80030904
    if (ctx->r3 != ctx->r1) {
        // 0x800308F4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80030904;
    }
    // 0x800308F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800308F8: bne         $s2, $at, L_80030904
    if (ctx->r18 != ctx->r1) {
        // 0x800308FC: nop
    
            goto L_80030904;
    }
    // 0x800308FC: nop

    // 0x80030900: break       6
    do_break(2147682560);
L_80030904:
    // 0x80030904: sra         $t5, $a0, 16
    ctx->r13 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80030908: lh          $a1, 0x4A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X4A);
    // 0x8003090C: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x80030910: andi        $a3, $s6, 0xFF
    ctx->r7 = ctx->r22 & 0XFF;
    // 0x80030914: mflo        $a2
    ctx->r6 = lo;
    // 0x80030918: andi        $t4, $a2, 0xFF
    ctx->r12 = ctx->r6 & 0XFF;
    // 0x8003091C: mfhi        $s2
    ctx->r18 = hi;
    // 0x80030920: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x80030924: jal         0x800309A0
    // 0x80030928: nop

    func_800309A0(rdram, ctx);
        goto after_4;
    // 0x80030928: nop

    after_4:
    // 0x8003092C: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
    // 0x80030930: addiu       $s1, $s1, 0x6
    ctx->r17 = ADD32(ctx->r17, 0X6);
    // 0x80030934: sll         $t6, $s1, 16
    ctx->r14 = S32(ctx->r17 << 16);
    // 0x80030938: b           L_80030960
    // 0x8003093C: sra         $s1, $t6, 16
    ctx->r17 = S32(SIGNED(ctx->r14) >> 16);
        goto L_80030960;
    // 0x8003093C: sra         $s1, $t6, 16
    ctx->r17 = S32(SIGNED(ctx->r14) >> 16);
L_80030940:
    // 0x80030940: addiu       $t8, $s0, 0x6
    ctx->r24 = ADD32(ctx->r16, 0X6);
    // 0x80030944: bgez        $t8, L_80030954
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80030948: sra         $t9, $t8, 1
        ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
            goto L_80030954;
    }
    // 0x80030948: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8003094C: addiu       $at, $t8, 0x1
    ctx->r1 = ADD32(ctx->r24, 0X1);
    // 0x80030950: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_80030954:
    // 0x80030954: addu        $s1, $s1, $t9
    ctx->r17 = ADD32(ctx->r17, ctx->r25);
    // 0x80030958: sll         $t0, $s1, 16
    ctx->r8 = S32(ctx->r17 << 16);
    // 0x8003095C: sra         $s1, $t0, 16
    ctx->r17 = S32(SIGNED(ctx->r8) >> 16);
L_80030960:
    // 0x80030960: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
L_80030964:
    // 0x80030964: andi        $s3, $s4, 0xFF
    ctx->r19 = ctx->r20 & 0XFF;
    // 0x80030968: bgtz        $s3, L_80030798
    if (SIGNED(ctx->r19) > 0) {
        // 0x8003096C: or          $s4, $s3, $zero
        ctx->r20 = ctx->r19 | 0;
            goto L_80030798;
    }
    // 0x8003096C: or          $s4, $s3, $zero
    ctx->r20 = ctx->r19 | 0;
L_80030970:
    // 0x80030970: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80030974: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80030978: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003097C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80030980: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80030984: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80030988: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8003098C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80030990: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80030994: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80030998: jr          $ra
    // 0x8003099C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8003099C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800309A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800309A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800309A4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x800309A8: lbu         $t1, 0x23($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X23);
    // 0x800309AC: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x800309B0: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x800309B4: addu        $a2, $a2, $t2
    ctx->r6 = ADD32(ctx->r6, ctx->r10);
    // 0x800309B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800309BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800309C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800309C4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x800309C8: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x800309CC: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x800309D0: andi        $t0, $a3, 0xFF
    ctx->r8 = ctx->r7 & 0XFF;
    // 0x800309D4: lbu         $a2, 0x7261($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X7261);
    // 0x800309D8: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x800309DC: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800309E0: jal         0x80030308
    // 0x800309E4: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    func_80030308(rdram, ctx);
        goto after_0;
    // 0x800309E4: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    after_0:
    // 0x800309E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800309EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800309F0: jr          $ra
    // 0x800309F4: nop

    return;
    // 0x800309F4: nop

;}
RECOMP_FUNC void func_800309F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800309F8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800309FC: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80030A00: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80030A04: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80030A08: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x80030A0C: bne         $a0, $zero, L_80030A1C
    if (ctx->r4 != 0) {
        // 0x80030A10: sra         $a1, $t8, 16
        ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
            goto L_80030A1C;
    }
    // 0x80030A10: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80030A14: jr          $ra
    // 0x80030A18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80030A18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80030A1C:
    // 0x80030A1C: bne         $a1, $zero, L_80030A2C
    if (ctx->r5 != 0) {
        // 0x80030A20: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80030A2C;
    }
    // 0x80030A20: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80030A24: jr          $ra
    // 0x80030A28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80030A28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80030A2C:
    // 0x80030A2C: blez        $a1, L_80030A54
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80030A30: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80030A54;
    }
    // 0x80030A30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80030A34:
    // 0x80030A34: multu       $v1, $a0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030A38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80030A3C: sll         $t0, $v0, 16
    ctx->r8 = S32(ctx->r2 << 16);
    // 0x80030A40: sra         $v0, $t0, 16
    ctx->r2 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80030A44: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80030A48: mflo        $v1
    ctx->r3 = lo;
    // 0x80030A4C: bne         $at, $zero, L_80030A34
    if (ctx->r1 != 0) {
        // 0x80030A50: nop
    
            goto L_80030A34;
    }
    // 0x80030A50: nop

L_80030A54:
    // 0x80030A54: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80030A58: jr          $ra
    // 0x80030A5C: nop

    return;
    // 0x80030A5C: nop

;}
RECOMP_FUNC void func_80030A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030A60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80030A64: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80030A68: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80030A6C: lbu         $t8, 0x2B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2B);
    // 0x80030A70: lbu         $t6, 0x27($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X27);
    // 0x80030A74: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80030A78: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80030A7C: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80030A80: sll         $t7, $t6, 7
    ctx->r15 = S32(ctx->r14 << 7);
    // 0x80030A84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80030A88: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80030A8C: addiu       $t1, $t1, 0x3D30
    ctx->r9 = ADD32(ctx->r9, 0X3D30);
    // 0x80030A90: lh          $a1, 0x2E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2E);
    // 0x80030A94: lh          $a2, 0x32($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X32);
    // 0x80030A98: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x80030A9C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80030AA0: addu        $a3, $t0, $t1
    ctx->r7 = ADD32(ctx->r8, ctx->r9);
    // 0x80030AA4: jal         0x8002F3D4
    // 0x80030AA8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8002F3D4(rdram, ctx);
        goto after_0;
    // 0x80030AA8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x80030AAC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80030AB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80030AB4: jr          $ra
    // 0x80030AB8: nop

    return;
    // 0x80030AB8: nop

;}
RECOMP_FUNC void func_80030ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030ABC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80030AC0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80030AC4: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80030AC8: lh          $t6, 0xC($a0)
    ctx->r14 = MEM_H(ctx->r4, 0XC);
    // 0x80030ACC: lh          $a1, 0xA($a0)
    ctx->r5 = MEM_H(ctx->r4, 0XA);
    // 0x80030AD0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80030AD4: jal         0x80031A5C
    // 0x80030AD8: sh          $t6, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r14;
    func_80031A5C(rdram, ctx);
        goto after_0;
    // 0x80030AD8: sh          $t6, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r14;
    after_0:
    // 0x80030ADC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80030AE0: lh          $a1, 0x30($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X30);
    // 0x80030AE4: jal         0x80031AB4
    // 0x80030AE8: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    func_80031AB4(rdram, ctx);
        goto after_1;
    // 0x80030AE8: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    after_1:
    // 0x80030AEC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80030AF0: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x80030AF4: lhu         $v1, 0x8($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X8);
    // 0x80030AF8: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80030AFC: andi        $t8, $v1, 0x1000
    ctx->r24 = ctx->r3 & 0X1000;
    // 0x80030B00: beq         $t8, $zero, L_80030B10
    if (ctx->r24 == 0) {
        // 0x80030B04: or          $a2, $t7, $zero
        ctx->r6 = ctx->r15 | 0;
            goto L_80030B10;
    }
    // 0x80030B04: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80030B08: b           L_80030B14
    // 0x80030B0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80030B14;
    // 0x80030B0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80030B10:
    // 0x80030B10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80030B14:
    // 0x80030B14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80030B18: bne         $v0, $at, L_80030B30
    if (ctx->r2 != ctx->r1) {
        // 0x80030B1C: andi        $t9, $v1, 0x2000
        ctx->r25 = ctx->r3 & 0X2000;
            goto L_80030B30;
    }
    // 0x80030B1C: andi        $t9, $v1, 0x2000
    ctx->r25 = ctx->r3 & 0X2000;
    // 0x80030B20: beq         $t9, $zero, L_80030B30
    if (ctx->r25 == 0) {
        // 0x80030B24: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80030B30;
    }
    // 0x80030B24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80030B28: b           L_80030B30
    // 0x80030B2C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80030B30;
    // 0x80030B2C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80030B30:
    // 0x80030B30: lhu         $t0, 0xE($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0XE);
    // 0x80030B34: lw          $a3, 0x1C($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X1C);
    // 0x80030B38: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80030B3C: lbu         $t1, 0x13($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X13);
    // 0x80030B40: lbu         $t3, 0x47($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X47);
    // 0x80030B44: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80030B48: lbu         $t2, 0x15($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X15);
    // 0x80030B4C: lh          $a1, 0x32($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X32);
    // 0x80030B50: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80030B54: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80030B58: jal         0x80030B90
    // 0x80030B5C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    func_80030B90(rdram, ctx);
        goto after_2;
    // 0x80030B5C: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    after_2:
    // 0x80030B60: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80030B64: addiu       $a0, $a0, -0x2F94
    ctx->r4 = ADD32(ctx->r4, -0X2F94);
    // 0x80030B68: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80030B6C: lui         $t5, 0xE700
    ctx->r13 = S32(0XE700 << 16);
    // 0x80030B70: addiu       $t4, $v1, 0x8
    ctx->r12 = ADD32(ctx->r3, 0X8);
    // 0x80030B74: sw          $t4, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r12;
    // 0x80030B78: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80030B7C: sw          $t5, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r13;
    // 0x80030B80: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80030B84: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80030B88: jr          $ra
    // 0x80030B8C: nop

    return;
    // 0x80030B8C: nop

;}
RECOMP_FUNC void func_80030B90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030B90: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80030B94: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80030B98: lbu         $fp, 0x7B($sp)
    ctx->r30 = MEM_BU(ctx->r29, 0X7B);
    // 0x80030B9C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80030BA0: sll         $s3, $a1, 16
    ctx->r19 = S32(ctx->r5 << 16);
    // 0x80030BA4: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x80030BA8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80030BAC: sltiu       $at, $fp, 0x6
    ctx->r1 = ctx->r30 < 0X6 ? 1 : 0;
    // 0x80030BB0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80030BB4: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x80030BB8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80030BBC: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80030BC0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80030BC4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80030BC8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80030BCC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80030BD0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80030BD4: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x80030BD8: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x80030BDC: beq         $at, $zero, L_80030C74
    if (ctx->r1 == 0) {
        // 0x80030BE0: sw          $a3, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r7;
            goto L_80030C74;
    }
    // 0x80030BE0: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x80030BE4: sll         $t7, $fp, 2
    ctx->r15 = S32(ctx->r30 << 2);
    // 0x80030BE8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80030BEC: addu        $at, $at, $t7
    gpr jr_addend_80030BF8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80030BF0: lw          $t7, 0x4630($at)
    ctx->r15 = ADD32(ctx->r1, 0X4630);
    // 0x80030BF4: nop

    // 0x80030BF8: jr          $t7
    // 0x80030BFC: nop

    switch (jr_addend_80030BF8 >> 2) {
        case 0: goto L_80030C00; break;
        case 1: goto L_80030C14; break;
        case 2: goto L_80030C28; break;
        case 3: goto L_80030C3C; break;
        case 4: goto L_80030C50; break;
        case 5: goto L_80030C64; break;
        default: switch_error(__func__, 0x80030BF8, 0x800D4630);
    }
    // 0x80030BFC: nop

L_80030C00:
    // 0x80030C00: lbu         $t8, 0x6F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X6F);
    // 0x80030C04: nop

    // 0x80030C08: addiu       $t9, $t8, 0x6
    ctx->r25 = ADD32(ctx->r24, 0X6);
    // 0x80030C0C: b           L_80030C74
    // 0x80030C10: sb          $t9, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r25;
        goto L_80030C74;
    // 0x80030C10: sb          $t9, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r25;
L_80030C14:
    // 0x80030C14: lbu         $t0, 0x6F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X6F);
    // 0x80030C18: nop

    // 0x80030C1C: addiu       $t1, $t0, 0x7
    ctx->r9 = ADD32(ctx->r8, 0X7);
    // 0x80030C20: b           L_80030C74
    // 0x80030C24: sb          $t1, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r9;
        goto L_80030C74;
    // 0x80030C24: sb          $t1, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r9;
L_80030C28:
    // 0x80030C28: lbu         $t2, 0x6F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X6F);
    // 0x80030C2C: nop

    // 0x80030C30: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80030C34: b           L_80030C74
    // 0x80030C38: sb          $t3, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r11;
        goto L_80030C74;
    // 0x80030C38: sb          $t3, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r11;
L_80030C3C:
    // 0x80030C3C: lbu         $t4, 0x6F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X6F);
    // 0x80030C40: nop

    // 0x80030C44: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x80030C48: b           L_80030C74
    // 0x80030C4C: sb          $t5, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r13;
        goto L_80030C74;
    // 0x80030C4C: sb          $t5, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r13;
L_80030C50:
    // 0x80030C50: lbu         $t6, 0x6F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X6F);
    // 0x80030C54: nop

    // 0x80030C58: addiu       $t7, $t6, 0x10
    ctx->r15 = ADD32(ctx->r14, 0X10);
    // 0x80030C5C: b           L_80030C74
    // 0x80030C60: sb          $t7, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r15;
        goto L_80030C74;
    // 0x80030C60: sb          $t7, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r15;
L_80030C64:
    // 0x80030C64: lbu         $t8, 0x6F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X6F);
    // 0x80030C68: nop

    // 0x80030C6C: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x80030C70: sb          $t9, 0x4B($sp)
    MEM_B(0X4B, ctx->r29) = ctx->r25;
L_80030C74:
    // 0x80030C74: lhu         $s0, 0x6A($sp)
    ctx->r16 = MEM_HU(ctx->r29, 0X6A);
    // 0x80030C78: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80030C7C: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x80030C80: sra         $t0, $a1, 16
    ctx->r8 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80030C84: jal         0x800309F8
    // 0x80030C88: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    func_800309F8(rdram, ctx);
        goto after_0;
    // 0x80030C88: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_0:
    // 0x80030C8C: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x80030C90: andi        $t4, $s0, 0xFF
    ctx->r12 = ctx->r16 & 0XFF;
    // 0x80030C94: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80030C98: bne         $at, $zero, L_80030CF4
    if (ctx->r1 != 0) {
        // 0x80030C9C: addiu       $s7, $zero, 0x1
        ctx->r23 = ADD32(0, 0X1);
            goto L_80030CF4;
    }
    // 0x80030C9C: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x80030CA0: lhu         $t1, 0x8($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X8);
    // 0x80030CA4: nop

    // 0x80030CA8: andi        $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 & 0X8000;
    // 0x80030CAC: beq         $t2, $zero, L_80030CEC
    if (ctx->r10 == 0) {
        // 0x80030CB0: nop
    
            goto L_80030CEC;
    }
    // 0x80030CB0: nop

    // 0x80030CB4: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x80030CB8: bne         $v0, $zero, L_80030CC4
    if (ctx->r2 != 0) {
        // 0x80030CBC: nop
    
            goto L_80030CC4;
    }
    // 0x80030CBC: nop

    // 0x80030CC0: break       7
    do_break(2147683520);
L_80030CC4:
    // 0x80030CC4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80030CC8: bne         $v0, $at, L_80030CDC
    if (ctx->r2 != ctx->r1) {
        // 0x80030CCC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80030CDC;
    }
    // 0x80030CCC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80030CD0: bne         $v1, $at, L_80030CDC
    if (ctx->r3 != ctx->r1) {
        // 0x80030CD4: nop
    
            goto L_80030CDC;
    }
    // 0x80030CD4: nop

    // 0x80030CD8: break       6
    do_break(2147683544);
L_80030CDC:
    // 0x80030CDC: mfhi        $v1
    ctx->r3 = hi;
    // 0x80030CE0: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    // 0x80030CE4: b           L_80030CF8
    // 0x80030CE8: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
        goto L_80030CF8;
    // 0x80030CE8: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
L_80030CEC:
    // 0x80030CEC: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x80030CF0: sw          $t3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r11;
L_80030CF4:
    // 0x80030CF4: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
L_80030CF8:
    // 0x80030CF8: blez        $t4, L_80030EE0
    if (SIGNED(ctx->r12) <= 0) {
        // 0x80030CFC: andi        $s4, $s0, 0xFF
        ctx->r20 = ctx->r16 & 0XFF;
            goto L_80030EE0;
    }
    // 0x80030CFC: andi        $s4, $s0, 0xFF
    ctx->r20 = ctx->r16 & 0XFF;
    // 0x80030D00: lbu         $s5, 0x77($sp)
    ctx->r21 = MEM_BU(ctx->r29, 0X77);
    // 0x80030D04: lbu         $s6, 0x73($sp)
    ctx->r22 = MEM_BU(ctx->r29, 0X73);
    // 0x80030D08: or          $s2, $s4, $zero
    ctx->r18 = ctx->r20 | 0;
L_80030D0C:
    // 0x80030D0C: addiu       $a1, $s2, -0x1
    ctx->r5 = ADD32(ctx->r18, -0X1);
    // 0x80030D10: sll         $t5, $a1, 16
    ctx->r13 = S32(ctx->r5 << 16);
    // 0x80030D14: sra         $a1, $t5, 16
    ctx->r5 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80030D18: jal         0x800309F8
    // 0x80030D1C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800309F8(rdram, ctx);
        goto after_1;
    // 0x80030D1C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_1:
    // 0x80030D20: beq         $s5, $zero, L_80030D40
    if (ctx->r21 == 0) {
        // 0x80030D24: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80030D40;
    }
    // 0x80030D24: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80030D28: beq         $s5, $s7, L_80030DAC
    if (ctx->r21 == ctx->r23) {
        // 0x80030D2C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80030DAC;
    }
    // 0x80030D2C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80030D30: beq         $s5, $at, L_80030E34
    if (ctx->r21 == ctx->r1) {
        // 0x80030D34: lw          $t6, 0x64($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X64);
            goto L_80030E34;
    }
    // 0x80030D34: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
    // 0x80030D38: b           L_80030ED4
    // 0x80030D3C: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
        goto L_80030ED4;
    // 0x80030D3C: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
L_80030D40:
    // 0x80030D40: div         $zero, $s1, $v1
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r3)));
    // 0x80030D44: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x80030D48: bne         $v1, $zero, L_80030D54
    if (ctx->r3 != 0) {
        // 0x80030D4C: nop
    
            goto L_80030D54;
    }
    // 0x80030D4C: nop

    // 0x80030D50: break       7
    do_break(2147683664);
L_80030D54:
    // 0x80030D54: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80030D58: bne         $v1, $at, L_80030D6C
    if (ctx->r3 != ctx->r1) {
        // 0x80030D5C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80030D6C;
    }
    // 0x80030D5C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80030D60: bne         $s1, $at, L_80030D6C
    if (ctx->r17 != ctx->r1) {
        // 0x80030D64: nop
    
            goto L_80030D6C;
    }
    // 0x80030D64: nop

    // 0x80030D68: break       6
    do_break(2147683688);
L_80030D6C:
    // 0x80030D6C: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80030D70: lh          $a1, 0x62($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X62);
    // 0x80030D74: lbu         $s0, 0x4B($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X4B);
    // 0x80030D78: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80030D7C: andi        $a3, $s6, 0xFF
    ctx->r7 = ctx->r22 & 0XFF;
    // 0x80030D80: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    // 0x80030D84: mflo        $a2
    ctx->r6 = lo;
    // 0x80030D88: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x80030D8C: mfhi        $s1
    ctx->r17 = hi;
    // 0x80030D90: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80030D94: jal         0x80030F10
    // 0x80030D98: nop

    func_80030F10(rdram, ctx);
        goto after_2;
    // 0x80030D98: nop

    after_2:
    // 0x80030D9C: addu        $s3, $s3, $s0
    ctx->r19 = ADD32(ctx->r19, ctx->r16);
    // 0x80030DA0: sll         $t9, $s3, 16
    ctx->r25 = S32(ctx->r19 << 16);
    // 0x80030DA4: b           L_80030ED0
    // 0x80030DA8: sra         $s3, $t9, 16
    ctx->r19 = S32(SIGNED(ctx->r25) >> 16);
        goto L_80030ED0;
    // 0x80030DA8: sra         $s3, $t9, 16
    ctx->r19 = S32(SIGNED(ctx->r25) >> 16);
L_80030DAC:
    // 0x80030DAC: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x80030DB0: lbu         $s0, 0x4B($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X4B);
    // 0x80030DB4: slt         $at, $t1, $v0
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80030DB8: beq         $at, $zero, L_80030DC8
    if (ctx->r1 == 0) {
        // 0x80030DBC: nop
    
            goto L_80030DC8;
    }
    // 0x80030DBC: nop

    // 0x80030DC0: bne         $s7, $s2, L_80030E20
    if (ctx->r23 != ctx->r18) {
        // 0x80030DC4: nop
    
            goto L_80030E20;
    }
    // 0x80030DC4: nop

L_80030DC8:
    // 0x80030DC8: div         $zero, $s1, $v1
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r3)));
    // 0x80030DCC: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x80030DD0: bne         $v1, $zero, L_80030DDC
    if (ctx->r3 != 0) {
        // 0x80030DD4: nop
    
            goto L_80030DDC;
    }
    // 0x80030DD4: nop

    // 0x80030DD8: break       7
    do_break(2147683800);
L_80030DDC:
    // 0x80030DDC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80030DE0: bne         $v1, $at, L_80030DF4
    if (ctx->r3 != ctx->r1) {
        // 0x80030DE4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80030DF4;
    }
    // 0x80030DE4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80030DE8: bne         $s1, $at, L_80030DF4
    if (ctx->r17 != ctx->r1) {
        // 0x80030DEC: nop
    
            goto L_80030DF4;
    }
    // 0x80030DEC: nop

    // 0x80030DF0: break       6
    do_break(2147683824);
L_80030DF4:
    // 0x80030DF4: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80030DF8: lh          $a1, 0x62($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X62);
    // 0x80030DFC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80030E00: andi        $a3, $s6, 0xFF
    ctx->r7 = ctx->r22 & 0XFF;
    // 0x80030E04: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    // 0x80030E08: mflo        $a2
    ctx->r6 = lo;
    // 0x80030E0C: andi        $t2, $a2, 0xFF
    ctx->r10 = ctx->r6 & 0XFF;
    // 0x80030E10: mfhi        $s1
    ctx->r17 = hi;
    // 0x80030E14: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x80030E18: jal         0x80030F10
    // 0x80030E1C: nop

    func_80030F10(rdram, ctx);
        goto after_3;
    // 0x80030E1C: nop

    after_3:
L_80030E20:
    // 0x80030E20: addu        $s3, $s3, $s0
    ctx->r19 = ADD32(ctx->r19, ctx->r16);
    // 0x80030E24: sll         $t4, $s3, 16
    ctx->r12 = S32(ctx->r19 << 16);
    // 0x80030E28: b           L_80030ED0
    // 0x80030E2C: sra         $s3, $t4, 16
    ctx->r19 = S32(SIGNED(ctx->r12) >> 16);
        goto L_80030ED0;
    // 0x80030E2C: sra         $s3, $t4, 16
    ctx->r19 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80030E30: lw          $t6, 0x64($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X64);
L_80030E34:
    // 0x80030E34: lbu         $s0, 0x4B($sp)
    ctx->r16 = MEM_BU(ctx->r29, 0X4B);
    // 0x80030E38: slt         $at, $t6, $v0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80030E3C: beq         $at, $zero, L_80030E4C
    if (ctx->r1 == 0) {
        // 0x80030E40: nop
    
            goto L_80030E4C;
    }
    // 0x80030E40: nop

    // 0x80030E44: bne         $s7, $s2, L_80030EB4
    if (ctx->r23 != ctx->r18) {
        // 0x80030E48: nop
    
            goto L_80030EB4;
    }
    // 0x80030E48: nop

L_80030E4C:
    // 0x80030E4C: div         $zero, $s1, $v1
    lo = S32(S64(S32(ctx->r17)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r17)) % S64(S32(ctx->r3)));
    // 0x80030E50: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x80030E54: bne         $v1, $zero, L_80030E60
    if (ctx->r3 != 0) {
        // 0x80030E58: nop
    
            goto L_80030E60;
    }
    // 0x80030E58: nop

    // 0x80030E5C: break       7
    do_break(2147683932);
L_80030E60:
    // 0x80030E60: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80030E64: bne         $v1, $at, L_80030E78
    if (ctx->r3 != ctx->r1) {
        // 0x80030E68: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80030E78;
    }
    // 0x80030E68: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80030E6C: bne         $s1, $at, L_80030E78
    if (ctx->r17 != ctx->r1) {
        // 0x80030E70: nop
    
            goto L_80030E78;
    }
    // 0x80030E70: nop

    // 0x80030E74: break       6
    do_break(2147683956);
L_80030E78:
    // 0x80030E78: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80030E7C: lh          $a1, 0x62($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X62);
    // 0x80030E80: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80030E84: andi        $a3, $s6, 0xFF
    ctx->r7 = ctx->r22 & 0XFF;
    // 0x80030E88: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    // 0x80030E8C: mflo        $a2
    ctx->r6 = lo;
    // 0x80030E90: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x80030E94: mfhi        $s1
    ctx->r17 = hi;
    // 0x80030E98: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80030E9C: jal         0x80030F10
    // 0x80030EA0: nop

    func_80030F10(rdram, ctx);
        goto after_4;
    // 0x80030EA0: nop

    after_4:
    // 0x80030EA4: addu        $s3, $s3, $s0
    ctx->r19 = ADD32(ctx->r19, ctx->r16);
    // 0x80030EA8: sll         $t9, $s3, 16
    ctx->r25 = S32(ctx->r19 << 16);
    // 0x80030EAC: b           L_80030ED0
    // 0x80030EB0: sra         $s3, $t9, 16
    ctx->r19 = S32(SIGNED(ctx->r25) >> 16);
        goto L_80030ED0;
    // 0x80030EB0: sra         $s3, $t9, 16
    ctx->r19 = S32(SIGNED(ctx->r25) >> 16);
L_80030EB4:
    // 0x80030EB4: bgez        $s0, L_80030EC4
    if (SIGNED(ctx->r16) >= 0) {
        // 0x80030EB8: sra         $t1, $s0, 1
        ctx->r9 = S32(SIGNED(ctx->r16) >> 1);
            goto L_80030EC4;
    }
    // 0x80030EB8: sra         $t1, $s0, 1
    ctx->r9 = S32(SIGNED(ctx->r16) >> 1);
    // 0x80030EBC: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x80030EC0: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_80030EC4:
    // 0x80030EC4: addu        $s3, $s3, $t1
    ctx->r19 = ADD32(ctx->r19, ctx->r9);
    // 0x80030EC8: sll         $t2, $s3, 16
    ctx->r10 = S32(ctx->r19 << 16);
    // 0x80030ECC: sra         $s3, $t2, 16
    ctx->r19 = S32(SIGNED(ctx->r10) >> 16);
L_80030ED0:
    // 0x80030ED0: addiu       $s4, $s4, -0x1
    ctx->r20 = ADD32(ctx->r20, -0X1);
L_80030ED4:
    // 0x80030ED4: andi        $s2, $s4, 0xFF
    ctx->r18 = ctx->r20 & 0XFF;
    // 0x80030ED8: bgtz        $s2, L_80030D0C
    if (SIGNED(ctx->r18) > 0) {
        // 0x80030EDC: or          $s4, $s2, $zero
        ctx->r20 = ctx->r18 | 0;
            goto L_80030D0C;
    }
    // 0x80030EDC: or          $s4, $s2, $zero
    ctx->r20 = ctx->r18 | 0;
L_80030EE0:
    // 0x80030EE0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80030EE4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80030EE8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80030EEC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80030EF0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80030EF4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80030EF8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80030EFC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80030F00: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80030F04: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80030F08: jr          $ra
    // 0x80030F0C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80030F0C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80030F10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030F10: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x80030F14: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x80030F18: addiu       $v1, $v1, -0x2F94
    ctx->r3 = ADD32(ctx->r3, -0X2F94);
    // 0x80030F1C: sw          $a0, 0x108($sp)
    MEM_W(0X108, ctx->r29) = ctx->r4;
    // 0x80030F20: lh          $t9, 0x10A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X10A);
    // 0x80030F24: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80030F28: sw          $a1, 0x10C($sp)
    MEM_W(0X10C, ctx->r29) = ctx->r5;
    // 0x80030F2C: lh          $t6, 0x10E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X10E);
    // 0x80030F30: addiu       $t7, $zero, 0x1000
    ctx->r15 = ADD32(0, 0X1000);
    // 0x80030F34: sw          $t7, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r15;
    // 0x80030F38: sh          $t9, 0xF6($sp)
    MEM_H(0XF6, ctx->r29) = ctx->r25;
    // 0x80030F3C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80030F40: sw          $a2, 0x110($sp)
    MEM_W(0X110, ctx->r29) = ctx->r6;
    // 0x80030F44: sw          $a3, 0x114($sp)
    MEM_W(0X114, ctx->r29) = ctx->r7;
    // 0x80030F48: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80030F4C: lui         $t7, 0xBA00
    ctx->r15 = S32(0XBA00 << 16);
    // 0x80030F50: sh          $t6, 0xF4($sp)
    MEM_H(0XF4, ctx->r29) = ctx->r14;
    // 0x80030F54: ori         $t7, $t7, 0xE02
    ctx->r15 = ctx->r15 | 0XE02;
    // 0x80030F58: ori         $t9, $zero, 0x8000
    ctx->r25 = 0 | 0X8000;
    // 0x80030F5C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80030F60: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80030F64: lbu         $t6, 0x11B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X11B);
    // 0x80030F68: lh          $t4, 0x10A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X10A);
    // 0x80030F6C: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x80030F70: beq         $at, $zero, L_80031724
    if (ctx->r1 == 0) {
        // 0x80030F74: or          $t5, $zero, $zero
        ctx->r13 = 0 | 0;
            goto L_80031724;
    }
    // 0x80030F74: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x80030F78: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80030F7C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80030F80: addu        $at, $at, $t6
    gpr jr_addend_80030F8C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80030F84: lw          $t6, 0x4648($at)
    ctx->r14 = ADD32(ctx->r1, 0X4648);
    // 0x80030F88: nop

    // 0x80030F8C: jr          $t6
    // 0x80030F90: nop

    switch (jr_addend_80030F8C >> 2) {
        case 0: goto L_80030F94; break;
        case 1: goto L_8003109C; break;
        case 2: goto L_80031314; break;
        case 3: goto L_80031460; break;
        case 4: goto L_800315C8; break;
        case 5: goto L_800311A4; break;
        default: switch_error(__func__, 0x80030F8C, 0x800D4648);
    }
    // 0x80030F90: nop

L_80030F94:
    // 0x80030F94: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80030F98: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x80030F9C: addiu       $t8, $t8, 0x2980
    ctx->r24 = ADD32(ctx->r24, 0X2980);
    // 0x80030FA0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80030FA4: lh          $t4, 0x10A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X10A);
    // 0x80030FA8: sw          $t8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r24;
    // 0x80030FAC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80030FB0: lui         $t9, 0xFD10
    ctx->r25 = S32(0XFD10 << 16);
    // 0x80030FB4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80030FB8: lbu         $t8, 0x117($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X117);
    // 0x80030FBC: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80030FC0: lw          $t9, -0x3894($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3894);
    // 0x80030FC4: sll         $t7, $t8, 5
    ctx->r15 = S32(ctx->r24 << 5);
    // 0x80030FC8: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x80030FCC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80030FD0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80030FD4: lui         $t7, 0xE800
    ctx->r15 = S32(0XE800 << 16);
    // 0x80030FD8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80030FDC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80030FE0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80030FE4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80030FE8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80030FEC: lui         $t6, 0xF500
    ctx->r14 = S32(0XF500 << 16);
    // 0x80030FF0: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80030FF4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80030FF8: ori         $t6, $t6, 0x1F0
    ctx->r14 = ctx->r14 | 0X1F0;
    // 0x80030FFC: lui         $t8, 0x700
    ctx->r24 = S32(0X700 << 16);
    // 0x80031000: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80031004: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80031008: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003100C: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x80031010: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80031014: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80031018: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8003101C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80031020: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031024: lui         $t7, 0x703
    ctx->r15 = S32(0X703 << 16);
    // 0x80031028: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8003102C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80031030: ori         $t7, $t7, 0xC000
    ctx->r15 = ctx->r15 | 0XC000;
    // 0x80031034: lui         $t8, 0xF000
    ctx->r24 = S32(0XF000 << 16);
    // 0x80031038: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8003103C: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80031040: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031044: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x80031048: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8003104C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80031050: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80031054: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80031058: lbu         $t8, 0x113($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X113);
    // 0x8003105C: lh          $v0, 0x10E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10E);
    // 0x80031060: sll         $t7, $t8, 3
    ctx->r15 = S32(ctx->r24 << 3);
    // 0x80031064: sw          $t7, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r15;
    // 0x80031068: addiu       $t9, $t4, 0x7
    ctx->r25 = ADD32(ctx->r12, 0X7);
    // 0x8003106C: sh          $t9, 0xF2($sp)
    MEM_H(0XF2, ctx->r29) = ctx->r25;
    // 0x80031070: addiu       $t7, $zero, 0x50
    ctx->r15 = ADD32(0, 0X50);
    // 0x80031074: sb          $t7, 0xDB($sp)
    MEM_B(0XDB, ctx->r29) = ctx->r15;
    // 0x80031078: addiu       $t9, $zero, 0x10
    ctx->r25 = ADD32(0, 0X10);
    // 0x8003107C: addiu       $t1, $v0, 0xF
    ctx->r9 = ADD32(ctx->r2, 0XF);
    // 0x80031080: sb          $t9, 0xDA($sp)
    MEM_B(0XDA, ctx->r29) = ctx->r25;
    // 0x80031084: or          $t7, $t1, $zero
    ctx->r15 = ctx->r9 | 0;
    // 0x80031088: sh          $t1, 0xF0($sp)
    MEM_H(0XF0, ctx->r29) = ctx->r9;
    // 0x8003108C: sll         $t9, $t7, 16
    ctx->r25 = S32(ctx->r15 << 16);
    // 0x80031090: lh          $t0, 0xF2($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XF2);
    // 0x80031094: b           L_80031734
    // 0x80031098: sra         $t1, $t9, 16
    ctx->r9 = S32(SIGNED(ctx->r25) >> 16);
        goto L_80031734;
    // 0x80031098: sra         $t1, $t9, 16
    ctx->r9 = S32(SIGNED(ctx->r25) >> 16);
L_8003109C:
    // 0x8003109C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800310A0: lui         $t7, 0x8035
    ctx->r15 = S32(0X8035 << 16);
    // 0x800310A4: addiu       $t7, $t7, -0x7CC0
    ctx->r15 = ADD32(ctx->r15, -0X7CC0);
    // 0x800310A8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800310AC: lh          $t4, 0x10A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X10A);
    // 0x800310B0: sw          $t7, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r15;
    // 0x800310B4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800310B8: lui         $t8, 0xFD10
    ctx->r24 = S32(0XFD10 << 16);
    // 0x800310BC: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800310C0: lbu         $t7, 0x117($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X117);
    // 0x800310C4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800310C8: lw          $t8, -0x3890($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3890);
    // 0x800310CC: sll         $t9, $t7, 5
    ctx->r25 = S32(ctx->r15 << 5);
    // 0x800310D0: addu        $t6, $t9, $t8
    ctx->r14 = ADD32(ctx->r25, ctx->r24);
    // 0x800310D4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x800310D8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800310DC: lui         $t9, 0xE800
    ctx->r25 = S32(0XE800 << 16);
    // 0x800310E0: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800310E4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800310E8: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800310EC: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800310F0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800310F4: lui         $t6, 0xF500
    ctx->r14 = S32(0XF500 << 16);
    // 0x800310F8: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800310FC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80031100: ori         $t6, $t6, 0x1F0
    ctx->r14 = ctx->r14 | 0X1F0;
    // 0x80031104: lui         $t7, 0x700
    ctx->r15 = S32(0X700 << 16);
    // 0x80031108: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8003110C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80031110: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031114: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x80031118: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8003111C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80031120: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80031124: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80031128: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003112C: lui         $t9, 0x703
    ctx->r25 = S32(0X703 << 16);
    // 0x80031130: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80031134: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80031138: ori         $t9, $t9, 0xC000
    ctx->r25 = ctx->r25 | 0XC000;
    // 0x8003113C: lui         $t7, 0xF000
    ctx->r15 = S32(0XF000 << 16);
    // 0x80031140: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80031144: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80031148: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003114C: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x80031150: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80031154: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80031158: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8003115C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80031160: lbu         $t7, 0x113($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X113);
    // 0x80031164: lh          $v0, 0x10E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10E);
    // 0x80031168: sll         $t9, $t7, 3
    ctx->r25 = S32(ctx->r15 << 3);
    // 0x8003116C: sw          $t9, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r25;
    // 0x80031170: addiu       $t8, $t4, 0x6
    ctx->r24 = ADD32(ctx->r12, 0X6);
    // 0x80031174: sh          $t8, 0xF2($sp)
    MEM_H(0XF2, ctx->r29) = ctx->r24;
    // 0x80031178: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x8003117C: sb          $t9, 0xDB($sp)
    MEM_B(0XDB, ctx->r29) = ctx->r25;
    // 0x80031180: addiu       $t8, $zero, 0x8
    ctx->r24 = ADD32(0, 0X8);
    // 0x80031184: addiu       $t1, $v0, 0x7
    ctx->r9 = ADD32(ctx->r2, 0X7);
    // 0x80031188: sb          $t8, 0xDA($sp)
    MEM_B(0XDA, ctx->r29) = ctx->r24;
    // 0x8003118C: or          $t9, $t1, $zero
    ctx->r25 = ctx->r9 | 0;
    // 0x80031190: sh          $t1, 0xF0($sp)
    MEM_H(0XF0, ctx->r29) = ctx->r9;
    // 0x80031194: sll         $t8, $t9, 16
    ctx->r24 = S32(ctx->r25 << 16);
    // 0x80031198: lh          $t0, 0xF2($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XF2);
    // 0x8003119C: b           L_80031734
    // 0x800311A0: sra         $t1, $t8, 16
    ctx->r9 = S32(SIGNED(ctx->r24) >> 16);
        goto L_80031734;
    // 0x800311A0: sra         $t1, $t8, 16
    ctx->r9 = S32(SIGNED(ctx->r24) >> 16);
L_800311A4:
    // 0x800311A4: lbu         $a0, 0x113($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X113);
    // 0x800311A8: lui         $t8, 0x8033
    ctx->r24 = S32(0X8033 << 16);
    // 0x800311AC: slti        $at, $a0, 0x8
    ctx->r1 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x800311B0: bne         $at, $zero, L_800311C8
    if (ctx->r1 != 0) {
        // 0x800311B4: lui         $t6, 0xFD10
        ctx->r14 = S32(0XFD10 << 16);
            goto L_800311C8;
    }
    // 0x800311B4: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x800311B8: lui         $t9, 0x8033
    ctx->r25 = S32(0X8033 << 16);
    // 0x800311BC: addiu       $t9, $t9, -0x3480
    ctx->r25 = ADD32(ctx->r25, -0X3480);
    // 0x800311C0: b           L_800311D0
    // 0x800311C4: sw          $t9, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r25;
        goto L_800311D0;
    // 0x800311C4: sw          $t9, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r25;
L_800311C8:
    // 0x800311C8: addiu       $t8, $t8, -0x3C80
    ctx->r24 = ADD32(ctx->r24, -0X3C80);
    // 0x800311CC: sw          $t8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r24;
L_800311D0:
    // 0x800311D0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800311D4: lh          $t4, 0x10A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X10A);
    // 0x800311D8: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800311DC: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800311E0: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800311E4: lbu         $t8, 0x117($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X117);
    // 0x800311E8: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x800311EC: addiu       $t6, $t6, 0xB18
    ctx->r14 = ADD32(ctx->r14, 0XB18);
    // 0x800311F0: sll         $t7, $t8, 5
    ctx->r15 = S32(ctx->r24 << 5);
    // 0x800311F4: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x800311F8: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x800311FC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031200: lui         $t7, 0xE800
    ctx->r15 = S32(0XE800 << 16);
    // 0x80031204: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80031208: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8003120C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80031210: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80031214: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031218: lui         $t9, 0xF500
    ctx->r25 = S32(0XF500 << 16);
    // 0x8003121C: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80031220: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80031224: ori         $t9, $t9, 0x1F0
    ctx->r25 = ctx->r25 | 0X1F0;
    // 0x80031228: lui         $t8, 0x700
    ctx->r24 = S32(0X700 << 16);
    // 0x8003122C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80031230: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80031234: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031238: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x8003123C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80031240: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80031244: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80031248: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8003124C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031250: lui         $t7, 0x703
    ctx->r15 = S32(0X703 << 16);
    // 0x80031254: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80031258: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8003125C: ori         $t7, $t7, 0xC000
    ctx->r15 = ctx->r15 | 0XC000;
    // 0x80031260: lui         $t8, 0xF000
    ctx->r24 = S32(0XF000 << 16);
    // 0x80031264: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80031268: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8003126C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031270: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x80031274: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80031278: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x8003127C: slti        $at, $a0, 0x8
    ctx->r1 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x80031280: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80031284: beq         $at, $zero, L_800312C4
    if (ctx->r1 == 0) {
        // 0x80031288: sw          $t9, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r25;
            goto L_800312C4;
    }
    // 0x80031288: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8003128C: bgez        $a0, L_800312A0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80031290: andi        $t8, $a0, 0x3
        ctx->r24 = ctx->r4 & 0X3;
            goto L_800312A0;
    }
    // 0x80031290: andi        $t8, $a0, 0x3
    ctx->r24 = ctx->r4 & 0X3;
    // 0x80031294: beq         $t8, $zero, L_800312A0
    if (ctx->r24 == 0) {
        // 0x80031298: nop
    
            goto L_800312A0;
    }
    // 0x80031298: nop

    // 0x8003129C: addiu       $t8, $t8, -0x4
    ctx->r24 = ADD32(ctx->r24, -0X4);
L_800312A0:
    // 0x800312A0: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x800312A4: sw          $t7, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r15;
    // 0x800312A8: bgez        $a0, L_800312B8
    if (SIGNED(ctx->r4) >= 0) {
        // 0x800312AC: sra         $t5, $a0, 2
        ctx->r13 = S32(SIGNED(ctx->r4) >> 2);
            goto L_800312B8;
    }
    // 0x800312AC: sra         $t5, $a0, 2
    ctx->r13 = S32(SIGNED(ctx->r4) >> 2);
    // 0x800312B0: addiu       $at, $a0, 0x3
    ctx->r1 = ADD32(ctx->r4, 0X3);
    // 0x800312B4: sra         $t5, $at, 2
    ctx->r13 = S32(SIGNED(ctx->r1) >> 2);
L_800312B8:
    // 0x800312B8: sll         $t6, $t5, 5
    ctx->r14 = S32(ctx->r13 << 5);
    // 0x800312BC: b           L_800312E4
    // 0x800312C0: or          $t5, $t6, $zero
    ctx->r13 = ctx->r14 | 0;
        goto L_800312E4;
    // 0x800312C0: or          $t5, $t6, $zero
    ctx->r13 = ctx->r14 | 0;
L_800312C4:
    // 0x800312C4: addiu       $t9, $a0, -0x8
    ctx->r25 = ADD32(ctx->r4, -0X8);
    // 0x800312C8: bgez        $t9, L_800312DC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x800312CC: andi        $t8, $t9, 0x3
        ctx->r24 = ctx->r25 & 0X3;
            goto L_800312DC;
    }
    // 0x800312CC: andi        $t8, $t9, 0x3
    ctx->r24 = ctx->r25 & 0X3;
    // 0x800312D0: beq         $t8, $zero, L_800312DC
    if (ctx->r24 == 0) {
        // 0x800312D4: nop
    
            goto L_800312DC;
    }
    // 0x800312D4: nop

    // 0x800312D8: addiu       $t8, $t8, -0x4
    ctx->r24 = ADD32(ctx->r24, -0X4);
L_800312DC:
    // 0x800312DC: sll         $t7, $t8, 4
    ctx->r15 = S32(ctx->r24 << 4);
    // 0x800312E0: sw          $t7, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r15;
L_800312E4:
    // 0x800312E4: lh          $v0, 0x10E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10E);
    // 0x800312E8: addiu       $t0, $t4, 0xF
    ctx->r8 = ADD32(ctx->r12, 0XF);
    // 0x800312EC: sll         $t6, $t0, 16
    ctx->r14 = S32(ctx->r8 << 16);
    // 0x800312F0: sra         $t0, $t6, 16
    ctx->r8 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800312F4: addiu       $t1, $v0, 0x1F
    ctx->r9 = ADD32(ctx->r2, 0X1F);
    // 0x800312F8: sll         $t8, $t1, 16
    ctx->r24 = S32(ctx->r9 << 16);
    // 0x800312FC: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x80031300: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x80031304: sra         $t1, $t8, 16
    ctx->r9 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80031308: sb          $t6, 0xDB($sp)
    MEM_B(0XDB, ctx->r29) = ctx->r14;
    // 0x8003130C: b           L_80031734
    // 0x80031310: sb          $t9, 0xDA($sp)
    MEM_B(0XDA, ctx->r29) = ctx->r25;
        goto L_80031734;
    // 0x80031310: sb          $t9, 0xDA($sp)
    MEM_B(0XDA, ctx->r29) = ctx->r25;
L_80031314:
    // 0x80031314: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031318: lui         $t8, 0x8035
    ctx->r24 = S32(0X8035 << 16);
    // 0x8003131C: addiu       $t8, $t8, 0x2980
    ctx->r24 = ADD32(ctx->r24, 0X2980);
    // 0x80031320: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80031324: lh          $t4, 0x10A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X10A);
    // 0x80031328: sw          $t8, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r24;
    // 0x8003132C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80031330: lui         $t6, 0xFD10
    ctx->r14 = S32(0XFD10 << 16);
    // 0x80031334: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80031338: lbu         $t8, 0x117($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X117);
    // 0x8003133C: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x80031340: addiu       $t6, $t6, 0x1A48
    ctx->r14 = ADD32(ctx->r14, 0X1A48);
    // 0x80031344: sll         $t7, $t8, 5
    ctx->r15 = S32(ctx->r24 << 5);
    // 0x80031348: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x8003134C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80031350: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80031354: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031358: lui         $t7, 0xE800
    ctx->r15 = S32(0XE800 << 16);
    // 0x8003135C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80031360: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80031364: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80031368: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8003136C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80031370: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031374: lui         $t9, 0xF500
    ctx->r25 = S32(0XF500 << 16);
    // 0x80031378: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8003137C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80031380: ori         $t9, $t9, 0x1F0
    ctx->r25 = ctx->r25 | 0X1F0;
    // 0x80031384: lui         $t8, 0x700
    ctx->r24 = S32(0X700 << 16);
    // 0x80031388: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8003138C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80031390: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80031394: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031398: lui         $t6, 0xE600
    ctx->r14 = S32(0XE600 << 16);
    // 0x8003139C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800313A0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800313A4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800313A8: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x800313AC: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x800313B0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800313B4: lui         $t7, 0x703
    ctx->r15 = S32(0X703 << 16);
    // 0x800313B8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800313BC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800313C0: ori         $t7, $t7, 0xC000
    ctx->r15 = ctx->r15 | 0XC000;
    // 0x800313C4: lui         $t8, 0xF000
    ctx->r24 = S32(0XF000 << 16);
    // 0x800313C8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800313CC: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800313D0: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x800313D4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800313D8: lui         $t9, 0xE700
    ctx->r25 = S32(0XE700 << 16);
    // 0x800313DC: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800313E0: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800313E4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800313E8: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800313EC: lbu         $a0, 0x113($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X113);
    // 0x800313F0: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x800313F4: lh          $v0, 0x10E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10E);
    // 0x800313F8: addiu       $t9, $t4, 0x7
    ctx->r25 = ADD32(ctx->r12, 0X7);
    // 0x800313FC: sh          $t9, 0xF2($sp)
    MEM_H(0XF2, ctx->r29) = ctx->r25;
    // 0x80031400: addiu       $t9, $zero, 0x40
    ctx->r25 = ADD32(0, 0X40);
    // 0x80031404: addiu       $t1, $v0, 0x7
    ctx->r9 = ADD32(ctx->r2, 0X7);
    // 0x80031408: sb          $t9, 0xDA($sp)
    MEM_B(0XDA, ctx->r29) = ctx->r25;
    // 0x8003140C: bgez        $a0, L_80031420
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80031410: andi        $t8, $a0, 0x3
        ctx->r24 = ctx->r4 & 0X3;
            goto L_80031420;
    }
    // 0x80031410: andi        $t8, $a0, 0x3
    ctx->r24 = ctx->r4 & 0X3;
    // 0x80031414: beq         $t8, $zero, L_80031420
    if (ctx->r24 == 0) {
        // 0x80031418: nop
    
            goto L_80031420;
    }
    // 0x80031418: nop

    // 0x8003141C: addiu       $t8, $t8, -0x4
    ctx->r24 = ADD32(ctx->r24, -0X4);
L_80031420:
    // 0x80031420: sll         $t7, $t8, 3
    ctx->r15 = S32(ctx->r24 << 3);
    // 0x80031424: sh          $t1, 0xF0($sp)
    MEM_H(0XF0, ctx->r29) = ctx->r9;
    // 0x80031428: lh          $t0, 0xF2($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XF2);
    // 0x8003142C: sw          $t7, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r15;
    // 0x80031430: bgez        $a0, L_80031440
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80031434: sra         $t5, $a0, 2
        ctx->r13 = S32(SIGNED(ctx->r4) >> 2);
            goto L_80031440;
    }
    // 0x80031434: sra         $t5, $a0, 2
    ctx->r13 = S32(SIGNED(ctx->r4) >> 2);
    // 0x80031438: addiu       $at, $a0, 0x3
    ctx->r1 = ADD32(ctx->r4, 0X3);
    // 0x8003143C: sra         $t5, $at, 2
    ctx->r13 = S32(SIGNED(ctx->r1) >> 2);
L_80031440:
    // 0x80031440: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x80031444: or          $t5, $t6, $zero
    ctx->r13 = ctx->r14 | 0;
    // 0x80031448: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x8003144C: sb          $t6, 0xDB($sp)
    MEM_B(0XDB, ctx->r29) = ctx->r14;
    // 0x80031450: or          $t6, $t1, $zero
    ctx->r14 = ctx->r9 | 0;
    // 0x80031454: sll         $t9, $t6, 16
    ctx->r25 = S32(ctx->r14 << 16);
    // 0x80031458: b           L_80031734
    // 0x8003145C: sra         $t1, $t9, 16
    ctx->r9 = S32(SIGNED(ctx->r25) >> 16);
        goto L_80031734;
    // 0x8003145C: sra         $t1, $t9, 16
    ctx->r9 = S32(SIGNED(ctx->r25) >> 16);
L_80031460:
    // 0x80031460: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031464: lui         $t6, 0x8033
    ctx->r14 = S32(0X8033 << 16);
    // 0x80031468: addiu       $t6, $t6, -0x4780
    ctx->r14 = ADD32(ctx->r14, -0X4780);
    // 0x8003146C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80031470: lh          $t4, 0x10A($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X10A);
    // 0x80031474: sw          $t6, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r14;
    // 0x80031478: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x8003147C: lui         $t7, 0xFD10
    ctx->r15 = S32(0XFD10 << 16);
    // 0x80031480: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80031484: lbu         $t6, 0x117($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X117);
    // 0x80031488: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x8003148C: addiu       $t7, $t7, 0xF28
    ctx->r15 = ADD32(ctx->r15, 0XF28);
    // 0x80031490: sll         $t9, $t6, 5
    ctx->r25 = S32(ctx->r14 << 5);
    // 0x80031494: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x80031498: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x8003149C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x800314A0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800314A4: lui         $t9, 0xE800
    ctx->r25 = S32(0XE800 << 16);
    // 0x800314A8: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x800314AC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x800314B0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800314B4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800314B8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800314BC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800314C0: lui         $t8, 0xF500
    ctx->r24 = S32(0XF500 << 16);
    // 0x800314C4: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x800314C8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x800314CC: ori         $t8, $t8, 0x1F0
    ctx->r24 = ctx->r24 | 0X1F0;
    // 0x800314D0: lui         $t6, 0x700
    ctx->r14 = S32(0X700 << 16);
    // 0x800314D4: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x800314D8: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x800314DC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x800314E0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800314E4: lui         $t7, 0xE600
    ctx->r15 = S32(0XE600 << 16);
    // 0x800314E8: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x800314EC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800314F0: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x800314F4: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x800314F8: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x800314FC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031500: lui         $t9, 0x703
    ctx->r25 = S32(0X703 << 16);
    // 0x80031504: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80031508: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8003150C: ori         $t9, $t9, 0xC000
    ctx->r25 = ctx->r25 | 0XC000;
    // 0x80031510: lui         $t6, 0xF000
    ctx->r14 = S32(0XF000 << 16);
    // 0x80031514: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80031518: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8003151C: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x80031520: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031524: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x80031528: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x8003152C: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80031530: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80031534: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80031538: lbu         $a0, 0x113($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X113);
    // 0x8003153C: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x80031540: div         $zero, $a0, $t3
    lo = S32(S64(S32(ctx->r4)) / S64(S32(ctx->r11))); hi = S32(S64(S32(ctx->r4)) % S64(S32(ctx->r11)));
    // 0x80031544: addiu       $t8, $t4, 0x7
    ctx->r24 = ADD32(ctx->r12, 0X7);
    // 0x80031548: sh          $t8, 0xF2($sp)
    MEM_H(0XF2, ctx->r29) = ctx->r24;
    // 0x8003154C: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x80031550: sb          $t8, 0xDA($sp)
    MEM_B(0XDA, ctx->r29) = ctx->r24;
    // 0x80031554: lh          $t0, 0xF2($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XF2);
    // 0x80031558: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x8003155C: bne         $t3, $zero, L_80031568
    if (ctx->r11 != 0) {
        // 0x80031560: nop
    
            goto L_80031568;
    }
    // 0x80031560: nop

    // 0x80031564: break       7
    do_break(2147685732);
L_80031568:
    // 0x80031568: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8003156C: bne         $t3, $at, L_80031580
    if (ctx->r11 != ctx->r1) {
        // 0x80031570: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80031580;
    }
    // 0x80031570: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80031574: bne         $a0, $at, L_80031580
    if (ctx->r4 != ctx->r1) {
        // 0x80031578: nop
    
            goto L_80031580;
    }
    // 0x80031578: nop

    // 0x8003157C: break       6
    do_break(2147685756);
L_80031580:
    // 0x80031580: mfhi        $t6
    ctx->r14 = hi;
    // 0x80031584: sll         $t9, $t6, 3
    ctx->r25 = S32(ctx->r14 << 3);
    // 0x80031588: mflo        $t5
    ctx->r13 = lo;
    // 0x8003158C: lh          $t6, 0x10E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X10E);
    // 0x80031590: sll         $t7, $t5, 4
    ctx->r15 = S32(ctx->r13 << 4);
    // 0x80031594: sw          $t9, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r25;
    // 0x80031598: or          $t5, $t7, $zero
    ctx->r13 = ctx->r15 | 0;
    // 0x8003159C: addiu       $t7, $zero, 0x30
    ctx->r15 = ADD32(0, 0X30);
    // 0x800315A0: addiu       $t9, $t6, 0xF
    ctx->r25 = ADD32(ctx->r14, 0XF);
    // 0x800315A4: sb          $t7, 0xDB($sp)
    MEM_B(0XDB, ctx->r29) = ctx->r15;
    // 0x800315A8: sll         $t1, $t9, 16
    ctx->r9 = S32(ctx->r25 << 16);
    // 0x800315AC: sra         $t7, $t1, 16
    ctx->r15 = S32(SIGNED(ctx->r9) >> 16);
    // 0x800315B0: sh          $t9, 0xF0($sp)
    MEM_H(0XF0, ctx->r29) = ctx->r25;
    // 0x800315B4: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x800315B8: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800315BC: or          $t1, $t9, $zero
    ctx->r9 = ctx->r25 | 0;
    // 0x800315C0: b           L_80031734
    // 0x800315C4: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
        goto L_80031734;
    // 0x800315C4: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_800315C8:
    // 0x800315C8: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800315CC: lui         $t7, 0x8035
    ctx->r15 = S32(0X8035 << 16);
    // 0x800315D0: addiu       $t7, $t7, 0x1500
    ctx->r15 = ADD32(ctx->r15, 0X1500);
    // 0x800315D4: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800315D8: sw          $t7, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r15;
    // 0x800315DC: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800315E0: lui         $t9, 0xFD10
    ctx->r25 = S32(0XFD10 << 16);
    // 0x800315E4: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800315E8: lbu         $t7, 0x117($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X117);
    // 0x800315EC: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800315F0: lw          $t9, -0x388C($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X388C);
    // 0x800315F4: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x800315F8: addu        $t6, $t8, $t9
    ctx->r14 = ADD32(ctx->r24, ctx->r25);
    // 0x800315FC: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80031600: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80031604: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031608: lui         $t8, 0xE800
    ctx->r24 = S32(0XE800 << 16);
    // 0x8003160C: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80031610: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80031614: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80031618: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8003161C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80031620: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031624: lui         $t6, 0xF500
    ctx->r14 = S32(0XF500 << 16);
    // 0x80031628: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x8003162C: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80031630: ori         $t6, $t6, 0x1F0
    ctx->r14 = ctx->r14 | 0X1F0;
    // 0x80031634: lui         $t7, 0x700
    ctx->r15 = S32(0X700 << 16);
    // 0x80031638: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8003163C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80031640: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80031644: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031648: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x8003164C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80031650: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80031654: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80031658: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x8003165C: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x80031660: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031664: lui         $t8, 0x703
    ctx->r24 = S32(0X703 << 16);
    // 0x80031668: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x8003166C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80031670: ori         $t8, $t8, 0xC000
    ctx->r24 = ctx->r24 | 0XC000;
    // 0x80031674: lui         $t7, 0xF000
    ctx->r15 = S32(0XF000 << 16);
    // 0x80031678: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8003167C: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80031680: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x80031684: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031688: lui         $t6, 0xE700
    ctx->r14 = S32(0XE700 << 16);
    // 0x8003168C: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80031690: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80031694: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80031698: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8003169C: lh          $t6, 0x10A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X10A);
    // 0x800316A0: lbu         $a0, 0x113($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X113);
    // 0x800316A4: addiu       $t0, $t6, 0xF
    ctx->r8 = ADD32(ctx->r14, 0XF);
    // 0x800316A8: sw          $t6, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r14;
    // 0x800316AC: addiu       $t6, $zero, 0x40
    ctx->r14 = ADD32(0, 0X40);
    // 0x800316B0: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x800316B4: lh          $v0, 0x10E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10E);
    // 0x800316B8: sb          $t6, 0xDB($sp)
    MEM_B(0XDB, ctx->r29) = ctx->r14;
    // 0x800316BC: addiu       $t6, $zero, 0x30
    ctx->r14 = ADD32(0, 0X30);
    // 0x800316C0: sb          $t6, 0xDA($sp)
    MEM_B(0XDA, ctx->r29) = ctx->r14;
    // 0x800316C4: addiu       $t1, $v0, 0xF
    ctx->r9 = ADD32(ctx->r2, 0XF);
    // 0x800316C8: or          $t6, $t1, $zero
    ctx->r14 = ctx->r9 | 0;
    // 0x800316CC: sh          $t1, 0xF0($sp)
    MEM_H(0XF0, ctx->r29) = ctx->r9;
    // 0x800316D0: bgez        $a0, L_800316E4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x800316D4: andi        $t7, $a0, 0x3
        ctx->r15 = ctx->r4 & 0X3;
            goto L_800316E4;
    }
    // 0x800316D4: andi        $t7, $a0, 0x3
    ctx->r15 = ctx->r4 & 0X3;
    // 0x800316D8: beq         $t7, $zero, L_800316E4
    if (ctx->r15 == 0) {
        // 0x800316DC: nop
    
            goto L_800316E4;
    }
    // 0x800316DC: nop

    // 0x800316E0: addiu       $t7, $t7, -0x4
    ctx->r15 = ADD32(ctx->r15, -0X4);
L_800316E4:
    // 0x800316E4: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x800316E8: sh          $t0, 0xF2($sp)
    MEM_H(0XF2, ctx->r29) = ctx->r8;
    // 0x800316EC: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x800316F0: sw          $t8, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r24;
    // 0x800316F4: bgez        $a0, L_80031704
    if (SIGNED(ctx->r4) >= 0) {
        // 0x800316F8: sra         $t5, $a0, 2
        ctx->r13 = S32(SIGNED(ctx->r4) >> 2);
            goto L_80031704;
    }
    // 0x800316F8: sra         $t5, $a0, 2
    ctx->r13 = S32(SIGNED(ctx->r4) >> 2);
    // 0x800316FC: addiu       $at, $a0, 0x3
    ctx->r1 = ADD32(ctx->r4, 0X3);
    // 0x80031700: sra         $t5, $at, 2
    ctx->r13 = S32(SIGNED(ctx->r1) >> 2);
L_80031704:
    // 0x80031704: sll         $t9, $t5, 4
    ctx->r25 = S32(ctx->r13 << 4);
    // 0x80031708: or          $t5, $t9, $zero
    ctx->r13 = ctx->r25 | 0;
    // 0x8003170C: sll         $t9, $t6, 16
    ctx->r25 = S32(ctx->r14 << 16);
    // 0x80031710: sra         $t1, $t9, 16
    ctx->r9 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80031714: or          $t9, $t0, $zero
    ctx->r25 = ctx->r8 | 0;
    // 0x80031718: sll         $t6, $t9, 16
    ctx->r14 = S32(ctx->r25 << 16);
    // 0x8003171C: b           L_80031734
    // 0x80031720: sra         $t0, $t6, 16
    ctx->r8 = S32(SIGNED(ctx->r14) >> 16);
        goto L_80031734;
    // 0x80031720: sra         $t0, $t6, 16
    ctx->r8 = S32(SIGNED(ctx->r14) >> 16);
L_80031724:
    // 0x80031724: lh          $t1, 0xF0($sp)
    ctx->r9 = MEM_H(ctx->r29, 0XF0);
    // 0x80031728: lh          $t0, 0xF2($sp)
    ctx->r8 = MEM_H(ctx->r29, 0XF2);
    // 0x8003172C: lh          $v0, 0x10E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10E);
    // 0x80031730: nop

L_80031734:
    // 0x80031734: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80031738: lw          $t9, -0x3080($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3080);
    // 0x8003173C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80031740: srl         $t6, $t9, 25
    ctx->r14 = S32(U32(ctx->r25) >> 25);
    // 0x80031744: bne         $t6, $at, L_80031770
    if (ctx->r14 != ctx->r1) {
        // 0x80031748: slti        $at, $t4, 0x140
        ctx->r1 = SIGNED(ctx->r12) < 0X140 ? 1 : 0;
            goto L_80031770;
    }
    // 0x80031748: slti        $at, $t4, 0x140
    ctx->r1 = SIGNED(ctx->r12) < 0X140 ? 1 : 0;
    // 0x8003174C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80031750: sll         $t7, $t0, 16
    ctx->r15 = S32(ctx->r8 << 16);
    // 0x80031754: sra         $t0, $t7, 16
    ctx->r8 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80031758: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x8003175C: sll         $t9, $t1, 16
    ctx->r25 = S32(ctx->r9 << 16);
    // 0x80031760: addiu       $t7, $zero, 0x400
    ctx->r15 = ADD32(0, 0X400);
    // 0x80031764: sra         $t1, $t9, 16
    ctx->r9 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80031768: sw          $t7, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r15;
    // 0x8003176C: slti        $at, $t4, 0x140
    ctx->r1 = SIGNED(ctx->r12) < 0X140 ? 1 : 0;
L_80031770:
    // 0x80031770: beq         $at, $zero, L_80031A54
    if (ctx->r1 == 0) {
        // 0x80031774: nop
    
            goto L_80031A54;
    }
    // 0x80031774: nop

    // 0x80031778: blez        $t0, L_80031A54
    if (SIGNED(ctx->r8) <= 0) {
        // 0x8003177C: slti        $at, $v0, 0xF0
        ctx->r1 = SIGNED(ctx->r2) < 0XF0 ? 1 : 0;
            goto L_80031A54;
    }
    // 0x8003177C: slti        $at, $v0, 0xF0
    ctx->r1 = SIGNED(ctx->r2) < 0XF0 ? 1 : 0;
    // 0x80031780: beq         $at, $zero, L_80031A54
    if (ctx->r1 == 0) {
        // 0x80031784: nop
    
            goto L_80031A54;
    }
    // 0x80031784: nop

    // 0x80031788: blez        $t1, L_80031A54
    if (SIGNED(ctx->r9) <= 0) {
        // 0x8003178C: slti        $at, $t0, 0x140
        ctx->r1 = SIGNED(ctx->r8) < 0X140 ? 1 : 0;
            goto L_80031A54;
    }
    // 0x8003178C: slti        $at, $t0, 0x140
    ctx->r1 = SIGNED(ctx->r8) < 0X140 ? 1 : 0;
    // 0x80031790: bgez        $t4, L_800317A8
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80031794: nop
    
            goto L_800317A8;
    }
    // 0x80031794: nop

    // 0x80031798: lw          $t8, 0xEC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XEC);
    // 0x8003179C: sh          $zero, 0xF6($sp)
    MEM_H(0XF6, ctx->r29) = 0;
    // 0x800317A0: subu        $t9, $t8, $t4
    ctx->r25 = SUB32(ctx->r24, ctx->r12);
    // 0x800317A4: sw          $t9, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r25;
L_800317A8:
    // 0x800317A8: bne         $at, $zero, L_800317B4
    if (ctx->r1 != 0) {
        // 0x800317AC: addiu       $t3, $zero, 0x7FF
        ctx->r11 = ADD32(0, 0X7FF);
            goto L_800317B4;
    }
    // 0x800317AC: addiu       $t3, $zero, 0x7FF
    ctx->r11 = ADD32(0, 0X7FF);
    // 0x800317B0: addiu       $t0, $zero, 0x13F
    ctx->r8 = ADD32(0, 0X13F);
L_800317B4:
    // 0x800317B4: bgez        $v0, L_800317C4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800317B8: slti        $at, $t1, 0xF0
        ctx->r1 = SIGNED(ctx->r9) < 0XF0 ? 1 : 0;
            goto L_800317C4;
    }
    // 0x800317B8: slti        $at, $t1, 0xF0
    ctx->r1 = SIGNED(ctx->r9) < 0XF0 ? 1 : 0;
    // 0x800317BC: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
    // 0x800317C0: sh          $zero, 0xF4($sp)
    MEM_H(0XF4, ctx->r29) = 0;
L_800317C4:
    // 0x800317C4: bne         $at, $zero, L_800317D0
    if (ctx->r1 != 0) {
        // 0x800317C8: sll         $t8, $t5, 5
        ctx->r24 = S32(ctx->r13 << 5);
            goto L_800317D0;
    }
    // 0x800317C8: sll         $t8, $t5, 5
    ctx->r24 = S32(ctx->r13 << 5);
    // 0x800317CC: addiu       $t1, $zero, 0xEF
    ctx->r9 = ADD32(0, 0XEF);
L_800317D0:
    // 0x800317D0: lw          $t6, 0xEC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XEC);
    // 0x800317D4: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x800317D8: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x800317DC: addiu       $t9, $a0, 0x8
    ctx->r25 = ADD32(ctx->r4, 0X8);
    // 0x800317E0: sw          $t7, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r15;
    // 0x800317E4: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x800317E8: lui         $t6, 0xFD50
    ctx->r14 = S32(0XFD50 << 16);
    // 0x800317EC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x800317F0: lw          $t7, 0xDC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XDC);
    // 0x800317F4: or          $t5, $t8, $zero
    ctx->r13 = ctx->r24 | 0;
    // 0x800317F8: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x800317FC: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x80031800: lui         $t6, 0x706
    ctx->r14 = S32(0X706 << 16);
    // 0x80031804: addiu       $t8, $a1, 0x8
    ctx->r24 = ADD32(ctx->r5, 0X8);
    // 0x80031808: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8003180C: ori         $t6, $t6, 0x81A0
    ctx->r14 = ctx->r14 | 0X81A0;
    // 0x80031810: lui         $t9, 0xF550
    ctx->r25 = S32(0XF550 << 16);
    // 0x80031814: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    // 0x80031818: sw          $t6, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r14;
    // 0x8003181C: lw          $a2, 0x0($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X0);
    // 0x80031820: lui         $t8, 0xE600
    ctx->r24 = S32(0XE600 << 16);
    // 0x80031824: addiu       $t7, $a2, 0x8
    ctx->r15 = ADD32(ctx->r6, 0X8);
    // 0x80031828: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8003182C: sw          $zero, 0x4($a2)
    MEM_W(0X4, ctx->r6) = 0;
    // 0x80031830: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
    // 0x80031834: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80031838: lui         $t6, 0xF300
    ctx->r14 = S32(0XF300 << 16);
    // 0x8003183C: addiu       $t9, $t7, 0x8
    ctx->r25 = ADD32(ctx->r15, 0X8);
    // 0x80031840: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80031844: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x80031848: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8003184C: lbu         $t8, 0xDA($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XDA);
    // 0x80031850: lbu         $t2, 0xDB($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0XDB);
    // 0x80031854: sw          $t8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r24;
    // 0x80031858: multu       $t2, $t8
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003185C: mflo        $a3
    ctx->r7 = lo;
    // 0x80031860: addiu       $a3, $a3, 0x3
    ctx->r7 = ADD32(ctx->r7, 0X3);
    // 0x80031864: sra         $t9, $a3, 2
    ctx->r25 = S32(SIGNED(ctx->r7) >> 2);
    // 0x80031868: addiu       $a3, $t9, -0x1
    ctx->r7 = ADD32(ctx->r25, -0X1);
    // 0x8003186C: slti        $at, $a3, 0x7FF
    ctx->r1 = SIGNED(ctx->r7) < 0X7FF ? 1 : 0;
    // 0x80031870: beq         $at, $zero, L_80031880
    if (ctx->r1 == 0) {
        // 0x80031874: nop
    
            goto L_80031880;
    }
    // 0x80031874: nop

    // 0x80031878: b           L_80031880
    // 0x8003187C: or          $t3, $a3, $zero
    ctx->r11 = ctx->r7 | 0;
        goto L_80031880;
    // 0x8003187C: or          $t3, $a3, $zero
    ctx->r11 = ctx->r7 | 0;
L_80031880:
    // 0x80031880: bgez        $t2, L_80031890
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80031884: sra         $v0, $t2, 4
        ctx->r2 = S32(SIGNED(ctx->r10) >> 4);
            goto L_80031890;
    }
    // 0x80031884: sra         $v0, $t2, 4
    ctx->r2 = S32(SIGNED(ctx->r10) >> 4);
    // 0x80031888: addiu       $at, $t2, 0xF
    ctx->r1 = ADD32(ctx->r10, 0XF);
    // 0x8003188C: sra         $v0, $at, 4
    ctx->r2 = S32(SIGNED(ctx->r1) >> 4);
L_80031890:
    // 0x80031890: bgtz        $v0, L_800318A0
    if (SIGNED(ctx->r2) > 0) {
        // 0x80031894: or          $t4, $v0, $zero
        ctx->r12 = ctx->r2 | 0;
            goto L_800318A0;
    }
    // 0x80031894: or          $t4, $v0, $zero
    ctx->r12 = ctx->r2 | 0;
    // 0x80031898: b           L_800318A0
    // 0x8003189C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
        goto L_800318A0;
    // 0x8003189C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
L_800318A0:
    // 0x800318A0: sh          $t0, 0xF2($sp)
    MEM_H(0XF2, ctx->r29) = ctx->r8;
    // 0x800318A4: bgtz        $v0, L_800318B4
    if (SIGNED(ctx->r2) > 0) {
        // 0x800318A8: sh          $t1, 0xF0($sp)
        MEM_H(0XF0, ctx->r29) = ctx->r9;
            goto L_800318B4;
    }
    // 0x800318A8: sh          $t1, 0xF0($sp)
    MEM_H(0XF0, ctx->r29) = ctx->r9;
    // 0x800318AC: b           L_800318B8
    // 0x800318B0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
        goto L_800318B8;
    // 0x800318B0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_800318B4:
    // 0x800318B4: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
L_800318B8:
    // 0x800318B8: addiu       $t6, $t4, 0x7FF
    ctx->r14 = ADD32(ctx->r12, 0X7FF);
    // 0x800318BC: div         $zero, $t6, $t0
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r8))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r8)));
    // 0x800318C0: bne         $t0, $zero, L_800318CC
    if (ctx->r8 != 0) {
        // 0x800318C4: nop
    
            goto L_800318CC;
    }
    // 0x800318C4: nop

    // 0x800318C8: break       7
    do_break(2147686600);
L_800318CC:
    // 0x800318CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800318D0: bne         $t0, $at, L_800318E4
    if (ctx->r8 != ctx->r1) {
        // 0x800318D4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800318E4;
    }
    // 0x800318D4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800318D8: bne         $t6, $at, L_800318E4
    if (ctx->r14 != ctx->r1) {
        // 0x800318DC: nop
    
            goto L_800318E4;
    }
    // 0x800318DC: nop

    // 0x800318E0: break       6
    do_break(2147686624);
L_800318E4:
    // 0x800318E4: andi        $t6, $t3, 0xFFF
    ctx->r14 = ctx->r11 & 0XFFF;
    // 0x800318E8: lui         $at, 0x700
    ctx->r1 = S32(0X700 << 16);
    // 0x800318EC: mflo        $t7
    ctx->r15 = lo;
    // 0x800318F0: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x800318F4: sll         $t7, $t6, 12
    ctx->r15 = S32(ctx->r14 << 12);
    // 0x800318F8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800318FC: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x80031900: or          $t8, $t9, $t7
    ctx->r24 = ctx->r25 | ctx->r15;
    // 0x80031904: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
    // 0x80031908: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8003190C: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x80031910: addiu       $t9, $v0, 0x8
    ctx->r25 = ADD32(ctx->r2, 0X8);
    // 0x80031914: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80031918: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x8003191C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80031920: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031924: sra         $t6, $t2, 1
    ctx->r14 = S32(SIGNED(ctx->r10) >> 1);
    // 0x80031928: addiu       $t9, $t6, 0x7
    ctx->r25 = ADD32(ctx->r14, 0X7);
    // 0x8003192C: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80031930: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80031934: sra         $t7, $t9, 3
    ctx->r15 = S32(SIGNED(ctx->r25) >> 3);
    // 0x80031938: andi        $t8, $t7, 0x1FF
    ctx->r24 = ctx->r15 & 0X1FF;
    // 0x8003193C: sll         $t6, $t8, 9
    ctx->r14 = S32(ctx->r24 << 9);
    // 0x80031940: lui         $t7, 0xF6
    ctx->r15 = S32(0XF6 << 16);
    // 0x80031944: lui         $at, 0xF540
    ctx->r1 = S32(0XF540 << 16);
    // 0x80031948: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x8003194C: ori         $t7, $t7, 0x81A0
    ctx->r15 = ctx->r15 | 0X81A0;
    // 0x80031950: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80031954: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80031958: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8003195C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031960: addiu       $t9, $t2, -0x1
    ctx->r25 = ADD32(ctx->r10, -0X1);
    // 0x80031964: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80031968: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8003196C: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x80031970: lui         $t6, 0xF200
    ctx->r14 = S32(0XF200 << 16);
    // 0x80031974: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80031978: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x8003197C: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x80031980: sll         $t6, $t8, 12
    ctx->r14 = S32(ctx->r24 << 12);
    // 0x80031984: addiu       $t7, $t9, -0x1
    ctx->r15 = ADD32(ctx->r25, -0X1);
    // 0x80031988: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8003198C: andi        $t9, $t8, 0xFFF
    ctx->r25 = ctx->r24 & 0XFFF;
    // 0x80031990: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x80031994: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80031998: lh          $t6, 0xF2($sp)
    ctx->r14 = MEM_H(ctx->r29, 0XF2);
    // 0x8003199C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x800319A0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800319A4: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x800319A8: andi        $t7, $t9, 0xFFF
    ctx->r15 = ctx->r25 & 0XFFF;
    // 0x800319AC: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x800319B0: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x800319B4: lh          $t9, 0xF0($sp)
    ctx->r25 = MEM_H(ctx->r29, 0XF0);
    // 0x800319B8: sll         $t8, $t7, 12
    ctx->r24 = S32(ctx->r15 << 12);
    // 0x800319BC: lui         $at, 0xE400
    ctx->r1 = S32(0XE400 << 16);
    // 0x800319C0: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x800319C4: sll         $t7, $t9, 2
    ctx->r15 = S32(ctx->r25 << 2);
    // 0x800319C8: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x800319CC: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x800319D0: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x800319D4: lh          $t7, 0xF6($sp)
    ctx->r15 = MEM_H(ctx->r29, 0XF6);
    // 0x800319D8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x800319DC: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x800319E0: lh          $t7, 0xF4($sp)
    ctx->r15 = MEM_H(ctx->r29, 0XF4);
    // 0x800319E4: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x800319E8: sll         $t9, $t8, 12
    ctx->r25 = S32(ctx->r24 << 12);
    // 0x800319EC: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x800319F0: andi        $t8, $t6, 0xFFF
    ctx->r24 = ctx->r14 & 0XFFF;
    // 0x800319F4: or          $t7, $t9, $t8
    ctx->r15 = ctx->r25 | ctx->r24;
    // 0x800319F8: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x800319FC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031A00: lui         $t9, 0xB400
    ctx->r25 = S32(0XB400 << 16);
    // 0x80031A04: addiu       $t6, $v0, 0x8
    ctx->r14 = ADD32(ctx->r2, 0X8);
    // 0x80031A08: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
    // 0x80031A0C: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80031A10: lw          $t7, 0xEC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XEC);
    // 0x80031A14: andi        $t9, $t5, 0xFFFF
    ctx->r25 = ctx->r13 & 0XFFFF;
    // 0x80031A18: sll         $t6, $t7, 16
    ctx->r14 = S32(ctx->r15 << 16);
    // 0x80031A1C: or          $t8, $t6, $t9
    ctx->r24 = ctx->r14 | ctx->r25;
    // 0x80031A20: sw          $t8, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r24;
    // 0x80031A24: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x80031A28: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80031A2C: lui         $t6, 0xB300
    ctx->r14 = S32(0XB300 << 16);
    // 0x80031A30: addiu       $t7, $v0, 0x8
    ctx->r15 = ADD32(ctx->r2, 0X8);
    // 0x80031A34: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80031A38: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x80031A3C: lw          $t9, 0xE4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XE4);
    // 0x80031A40: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80031A44: andi        $t8, $t9, 0xFFFF
    ctx->r24 = ctx->r25 & 0XFFFF;
    // 0x80031A48: sll         $t7, $t8, 16
    ctx->r15 = S32(ctx->r24 << 16);
    // 0x80031A4C: ori         $t6, $t7, 0x400
    ctx->r14 = ctx->r15 | 0X400;
    // 0x80031A50: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
L_80031A54:
    // 0x80031A54: jr          $ra
    // 0x80031A58: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    // 0x80031A58: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void func_80031A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80031A5C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80031A60: lhu         $v0, 0x8($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8);
    // 0x80031A64: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80031A68: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80031A6C: andi        $t9, $v0, 0x100
    ctx->r25 = ctx->r2 & 0X100;
    // 0x80031A70: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80031A74: beq         $t9, $zero, L_80031AAC
    if (ctx->r25 == 0) {
        // 0x80031A78: andi        $t8, $v0, 0xF
        ctx->r24 = ctx->r2 & 0XF;
            goto L_80031AAC;
    }
    // 0x80031A78: andi        $t8, $v0, 0xF
    ctx->r24 = ctx->r2 & 0XF;
    // 0x80031A7C: sll         $t0, $t8, 3
    ctx->r8 = S32(ctx->r24 << 3);
    // 0x80031A80: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80031A84: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80031A88: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80031A8C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80031A90: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x80031A94: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80031A98: lh          $t1, 0x576C($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X576C);
    // 0x80031A9C: nop

    // 0x80031AA0: subu        $a1, $t7, $t1
    ctx->r5 = SUB32(ctx->r15, ctx->r9);
    // 0x80031AA4: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x80031AA8: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
L_80031AAC:
    // 0x80031AAC: jr          $ra
    // 0x80031AB0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x80031AB0: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
;}
RECOMP_FUNC void func_80031AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80031AB4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80031AB8: lhu         $v0, 0x8($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8);
    // 0x80031ABC: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80031AC0: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80031AC4: andi        $t9, $v0, 0x200
    ctx->r25 = ctx->r2 & 0X200;
    // 0x80031AC8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80031ACC: beq         $t9, $zero, L_80031B04
    if (ctx->r25 == 0) {
        // 0x80031AD0: andi        $t8, $v0, 0xF
        ctx->r24 = ctx->r2 & 0XF;
            goto L_80031B04;
    }
    // 0x80031AD0: andi        $t8, $v0, 0xF
    ctx->r24 = ctx->r2 & 0XF;
    // 0x80031AD4: sll         $t0, $t8, 3
    ctx->r8 = S32(ctx->r24 << 3);
    // 0x80031AD8: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80031ADC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80031AE0: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80031AE4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80031AE8: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x80031AEC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80031AF0: lh          $t1, 0x5770($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X5770);
    // 0x80031AF4: nop

    // 0x80031AF8: subu        $a1, $t7, $t1
    ctx->r5 = SUB32(ctx->r15, ctx->r9);
    // 0x80031AFC: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x80031B00: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
L_80031B04:
    // 0x80031B04: jr          $ra
    // 0x80031B08: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    return;
    // 0x80031B08: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
;}
RECOMP_FUNC void func_80031B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80031B0C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80031B10: jr          $ra
    // 0x80031B14: sb          $a1, 0x15($a0)
    MEM_B(0X15, ctx->r4) = ctx->r5;
    return;
    // 0x80031B14: sb          $a1, 0x15($a0)
    MEM_B(0X15, ctx->r4) = ctx->r5;
    // 0x80031B18: nop

    // 0x80031B1C: nop

;}
