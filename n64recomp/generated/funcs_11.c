#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8002BC9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BC9C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002BCA0: lhu         $t6, 0x3530($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3530);
    // 0x8002BCA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002BCA8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002BCAC: bne         $t6, $at, L_8002BCC4
    if (ctx->r14 != ctx->r1) {
        // 0x8002BCB0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8002BCC4;
    }
    // 0x8002BCB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002BCB4: jal         0x8002AC58
    // 0x8002BCB8: nop

    func_8002AC58(rdram, ctx);
        goto after_0;
    // 0x8002BCB8: nop

    after_0:
    // 0x8002BCBC: b           L_8002BCCC
    // 0x8002BCC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002BCCC;
    // 0x8002BCC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002BCC4:
    // 0x8002BCC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002BCC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002BCCC:
    // 0x8002BCCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002BCD0: jr          $ra
    // 0x8002BCD4: nop

    return;
    // 0x8002BCD4: nop

;}
RECOMP_FUNC void func_8002BCD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BCD8: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002BCDC: lhu         $t6, 0x3530($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3530);
    // 0x8002BCE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002BCE4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002BCE8: bne         $t6, $at, L_8002BD00
    if (ctx->r14 != ctx->r1) {
        // 0x8002BCEC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8002BD00;
    }
    // 0x8002BCEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002BCF0: jal         0x8002AC58
    // 0x8002BCF4: nop

    func_8002AC58(rdram, ctx);
        goto after_0;
    // 0x8002BCF4: nop

    after_0:
    // 0x8002BCF8: b           L_8002BD08
    // 0x8002BCFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8002BD08;
    // 0x8002BCFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002BD00:
    // 0x8002BD00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002BD04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8002BD08:
    // 0x8002BD08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002BD0C: jr          $ra
    // 0x8002BD10: nop

    return;
    // 0x8002BD10: nop

;}
RECOMP_FUNC void func_8002BD14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BD14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002BD18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002BD1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002BD20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002BD24: jal         0x8002C2B0
    // 0x8002BD28: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C2B0(rdram, ctx);
        goto after_0;
    // 0x8002BD28: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002BD2C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002BD30: jal         0x8002C240
    // 0x8002BD34: nop

    func_8002C240(rdram, ctx);
        goto after_1;
    // 0x8002BD34: nop

    after_1:
    // 0x8002BD38: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002BD3C: jal         0x8002BDB0
    // 0x8002BD40: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8002BDB0(rdram, ctx);
        goto after_2;
    // 0x8002BD40: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x8002BD44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002BD48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002BD4C: jr          $ra
    // 0x8002BD50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002BD50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002BD54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BD54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002BD58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002BD5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002BD60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002BD64: jal         0x8002C2B0
    // 0x8002BD68: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C2B0(rdram, ctx);
        goto after_0;
    // 0x8002BD68: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002BD6C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8002BD70: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002BD74: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8002BD78: nop

    // 0x8002BD7C: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8002BD80: nop

    // 0x8002BD84: lw          $t9, 0x14($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X14);
    // 0x8002BD88: nop

    // 0x8002BD8C: lw          $t0, 0x38($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X38);
    // 0x8002BD90: nop

    // 0x8002BD94: lw          $a1, 0x10($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X10);
    // 0x8002BD98: jal         0x8002BDB0
    // 0x8002BD9C: nop

    func_8002BDB0(rdram, ctx);
        goto after_1;
    // 0x8002BD9C: nop

    after_1:
    // 0x8002BDA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002BDA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002BDA8: jr          $ra
    // 0x8002BDAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002BDAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002BDB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BDB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002BDB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002BDB8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8002BDBC: lw          $a1, 0x38($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X38);
    // 0x8002BDC0: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x8002BDC4: sh          $zero, 0x24($a1)
    MEM_H(0X24, ctx->r5) = 0;
    // 0x8002BDC8: lh          $v0, 0x24($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X24);
    // 0x8002BDCC: lhu         $t6, 0x1C($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X1C);
    // 0x8002BDD0: sw          $a2, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r6;
    // 0x8002BDD4: andi        $t7, $t6, 0xF7FF
    ctx->r15 = ctx->r14 & 0XF7FF;
    // 0x8002BDD8: sh          $t7, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r15;
    // 0x8002BDDC: sh          $v0, 0x30($a1)
    MEM_H(0X30, ctx->r5) = ctx->r2;
    // 0x8002BDE0: sh          $v0, 0x2E($a1)
    MEM_H(0X2E, ctx->r5) = ctx->r2;
    // 0x8002BDE4: lhu         $t8, 0x3530($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X3530);
    // 0x8002BDE8: jal         0x8002D348
    // 0x8002BDEC: sh          $t8, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r24;
    func_8002D348(rdram, ctx);
        goto after_0;
    // 0x8002BDEC: sh          $t8, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r24;
    after_0:
    // 0x8002BDF0: lhu         $t9, 0x1A($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X1A);
    // 0x8002BDF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002BDF8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002BDFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002BE00: jr          $ra
    // 0x8002BE04: sh          $t9, 0x3530($at)
    MEM_H(0X3530, ctx->r1) = ctx->r25;
    return;
    // 0x8002BE04: sh          $t9, 0x3530($at)
    MEM_H(0X3530, ctx->r1) = ctx->r25;
;}
RECOMP_FUNC void func_8002BE08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BE08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002BE0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002BE10: jal         0x8002BDB0
    // 0x8002BE14: nop

    func_8002BDB0(rdram, ctx);
        goto after_0;
    // 0x8002BE14: nop

    after_0:
    // 0x8002BE18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002BE1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002BE20: jr          $ra
    // 0x8002BE24: nop

    return;
    // 0x8002BE24: nop

;}
RECOMP_FUNC void func_8002BE28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BE28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002BE2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002BE30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002BE34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002BE38: jal         0x8002BE5C
    // 0x8002BE3C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002BE5C(rdram, ctx);
        goto after_0;
    // 0x8002BE3C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002BE40: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002BE44: jal         0x8002C2B0
    // 0x8002BE48: nop

    func_8002C2B0(rdram, ctx);
        goto after_1;
    // 0x8002BE48: nop

    after_1:
    // 0x8002BE4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002BE50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002BE54: jr          $ra
    // 0x8002BE58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002BE58: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002BE5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BE5C: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8002BE60: lhu         $t6, 0x1C($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X1C);
    // 0x8002BE64: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8002BE68: nop

    // 0x8002BE6C: lw          $t9, 0x14($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X14);
    // 0x8002BE70: nop

    // 0x8002BE74: lw          $t0, 0x38($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X38);
    // 0x8002BE78: nop

    // 0x8002BE7C: lhu         $t1, 0x1C($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X1C);
    // 0x8002BE80: nop

    // 0x8002BE84: andi        $t2, $t1, 0x6
    ctx->r10 = ctx->r9 & 0X6;
    // 0x8002BE88: or          $t3, $t6, $t2
    ctx->r11 = ctx->r14 | ctx->r10;
    // 0x8002BE8C: jr          $ra
    // 0x8002BE90: sh          $t3, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r11;
    return;
    // 0x8002BE90: sh          $t3, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r11;
;}
RECOMP_FUNC void func_8002BE94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BE94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002BE98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002BE9C: jal         0x8002BD14
    // 0x8002BEA0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002BD14(rdram, ctx);
        goto after_0;
    // 0x8002BEA0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002BEA4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002BEA8: jal         0x8002BC9C
    // 0x8002BEAC: nop

    func_8002BC9C(rdram, ctx);
        goto after_1;
    // 0x8002BEAC: nop

    after_1:
    // 0x8002BEB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002BEB4: sll         $t6, $v0, 24
    ctx->r14 = S32(ctx->r2 << 24);
    // 0x8002BEB8: sra         $v0, $t6, 24
    ctx->r2 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8002BEBC: jr          $ra
    // 0x8002BEC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8002BEC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002BEC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BEC4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8002BEC8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8002BECC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8002BED0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8002BED4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8002BED8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8002BEDC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8002BEE0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8002BEE4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002BEE8: sh          $t6, 0x3530($at)
    MEM_H(0X3530, ctx->r1) = ctx->r14;
    // 0x8002BEEC: lhu         $v1, 0x36($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X36);
    // 0x8002BEF0: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x8002BEF4: lui         $s4, 0x800A
    ctx->r20 = S32(0X800A << 16);
    // 0x8002BEF8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8002BEFC: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8002BF00: addiu       $s4, $s4, 0x6E10
    ctx->r20 = ADD32(ctx->r20, 0X6E10);
    // 0x8002BF04: addiu       $s3, $s3, -0x32B0
    ctx->r19 = ADD32(ctx->r19, -0X32B0);
    // 0x8002BF08: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8002BF0C:
    // 0x8002BF0C: blez        $v0, L_8002BF3C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8002BF10: addiu       $t7, $v1, -0x1
        ctx->r15 = ADD32(ctx->r3, -0X1);
            goto L_8002BF3C;
    }
    // 0x8002BF10: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x8002BF14: sh          $t7, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r15;
    // 0x8002BF18: lhu         $t8, 0x2($s3)
    ctx->r24 = MEM_HU(ctx->r19, 0X2);
    // 0x8002BF1C: nop

    // 0x8002BF20: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x8002BF24: beq         $t9, $zero, L_8002BF34
    if (ctx->r25 == 0) {
        // 0x8002BF28: nop
    
            goto L_8002BF34;
    }
    // 0x8002BF28: nop

    // 0x8002BF2C: b           L_8002BF3C
    // 0x8002BF30: sh          $zero, 0x36($s1)
    MEM_H(0X36, ctx->r17) = 0;
        goto L_8002BF3C;
    // 0x8002BF30: sh          $zero, 0x36($s1)
    MEM_H(0X36, ctx->r17) = 0;
L_8002BF34:
    // 0x8002BF34: b           L_8002BFD4
    // 0x8002BF38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8002BFD4;
    // 0x8002BF38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002BF3C:
    // 0x8002BF3C: jal         0x8002C188
    // 0x8002BF40: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002BF40: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x8002BF44: andi        $t0, $v0, 0x80
    ctx->r8 = ctx->r2 & 0X80;
    // 0x8002BF48: beq         $t0, $zero, L_8002BF7C
    if (ctx->r8 == 0) {
        // 0x8002BF4C: andi        $s0, $v0, 0xFFFF
        ctx->r16 = ctx->r2 & 0XFFFF;
            goto L_8002BF7C;
    }
    // 0x8002BF4C: andi        $s0, $v0, 0xFFFF
    ctx->r16 = ctx->r2 & 0XFFFF;
    // 0x8002BF50: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x8002BF54: addu        $t2, $s4, $t1
    ctx->r10 = ADD32(ctx->r20, ctx->r9);
    // 0x8002BF58: lw          $t9, 0x0($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X0);
    // 0x8002BF5C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8002BF60: jalr        $t9
    // 0x8002BF64: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8002BF64: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x8002BF68: bne         $v0, $zero, L_8002BFA4
    if (ctx->r2 != 0) {
        // 0x8002BF6C: nop
    
            goto L_8002BFA4;
    }
    // 0x8002BF6C: nop

    // 0x8002BF70: lhu         $v1, 0x36($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X36);
    // 0x8002BF74: b           L_8002BF0C
    // 0x8002BF78: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8002BF0C;
    // 0x8002BF78: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8002BF7C:
    // 0x8002BF7C: jal         0x8002C188
    // 0x8002BF80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8002C188(rdram, ctx);
        goto after_2;
    // 0x8002BF80: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x8002BF84: sll         $t3, $s0, 8
    ctx->r11 = S32(ctx->r16 << 8);
    // 0x8002BF88: or          $t4, $v0, $t3
    ctx->r12 = ctx->r2 | ctx->r11;
    // 0x8002BF8C: andi        $a1, $t4, 0xFFFF
    ctx->r5 = ctx->r12 & 0XFFFF;
    // 0x8002BF90: jal         0x8002BB50
    // 0x8002BF94: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8002BB50(rdram, ctx);
        goto after_3;
    // 0x8002BF94: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
    // 0x8002BF98: jal         0x8002C1B8
    // 0x8002BF9C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8002C1B8(rdram, ctx);
        goto after_4;
    // 0x8002BF9C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x8002BFA0: sh          $v0, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r2;
L_8002BFA4:
    // 0x8002BFA4: lhu         $v1, 0x36($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X36);
    // 0x8002BFA8: nop

    // 0x8002BFAC: blez        $v1, L_8002BF0C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8002BFB0: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8002BF0C;
    }
    // 0x8002BFB0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8002BFB4: lhu         $t5, 0x2($s3)
    ctx->r13 = MEM_HU(ctx->r19, 0X2);
    // 0x8002BFB8: nop

    // 0x8002BFBC: andi        $t6, $t5, 0x2
    ctx->r14 = ctx->r13 & 0X2;
    // 0x8002BFC0: bne         $t6, $zero, L_8002BF0C
    if (ctx->r14 != 0) {
        // 0x8002BFC4: nop
    
            goto L_8002BF0C;
    }
    // 0x8002BFC4: nop

    // 0x8002BFC8: addiu       $t7, $v1, -0x1
    ctx->r15 = ADD32(ctx->r3, -0X1);
    // 0x8002BFCC: sh          $t7, 0x36($s1)
    MEM_H(0X36, ctx->r17) = ctx->r15;
    // 0x8002BFD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002BFD4:
    // 0x8002BFD4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8002BFD8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002BFDC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8002BFE0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8002BFE4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8002BFE8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8002BFEC: jr          $ra
    // 0x8002BFF0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8002BFF0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8002BFF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002BFF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002BFF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002BFFC: lhu         $t6, 0x1C($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X1C);
    // 0x8002C000: nop

    // 0x8002C004: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x8002C008: beq         $t7, $zero, L_8002C074
    if (ctx->r15 == 0) {
        // 0x8002C00C: nop
    
            goto L_8002C074;
    }
    // 0x8002C00C: nop

    // 0x8002C010: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x8002C014: lh          $t1, 0x14($a1)
    ctx->r9 = MEM_H(ctx->r5, 0X14);
    // 0x8002C018: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x8002C01C: lh          $t2, 0x20($a1)
    ctx->r10 = MEM_H(ctx->r5, 0X20);
    // 0x8002C020: lw          $t0, 0x14($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X14);
    // 0x8002C024: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x8002C028: lw          $v0, 0x38($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X38);
    // 0x8002C02C: sh          $t3, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r11;
    // 0x8002C030: lh          $t4, 0x14($v0)
    ctx->r12 = MEM_H(ctx->r2, 0X14);
    // 0x8002C034: lh          $t5, 0x14($a1)
    ctx->r13 = MEM_H(ctx->r5, 0X14);
    // 0x8002C038: sh          $t4, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r12;
    // 0x8002C03C: lh          $t6, 0x20($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X20);
    // 0x8002C040: lh          $t9, 0x22($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X22);
    // 0x8002C044: lh          $t8, 0x18($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X18);
    // 0x8002C048: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8002C04C: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x8002C050: sh          $t7, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r15;
    // 0x8002C054: sh          $t0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r8;
    // 0x8002C058: lh          $t1, 0x18($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X18);
    // 0x8002C05C: lh          $t2, 0x18($a1)
    ctx->r10 = MEM_H(ctx->r5, 0X18);
    // 0x8002C060: sh          $t1, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r9;
    // 0x8002C064: lh          $t3, 0x22($a1)
    ctx->r11 = MEM_H(ctx->r5, 0X22);
    // 0x8002C068: nop

    // 0x8002C06C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8002C070: sh          $t4, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r12;
L_8002C074:
    // 0x8002C074: lw          $t5, 0x14($a1)
    ctx->r13 = MEM_W(ctx->r5, 0X14);
    // 0x8002C078: nop

    // 0x8002C07C: sw          $t5, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r13;
    // 0x8002C080: lw          $t6, 0x18($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X18);
    // 0x8002C084: nop

    // 0x8002C088: sw          $t6, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r14;
    // 0x8002C08C: lhu         $t7, 0x1C($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X1C);
    // 0x8002C090: nop

    // 0x8002C094: andi        $t8, $t7, 0x20
    ctx->r24 = ctx->r15 & 0X20;
    // 0x8002C098: beq         $t8, $zero, L_8002C0AC
    if (ctx->r24 == 0) {
        // 0x8002C09C: nop
    
            goto L_8002C0AC;
    }
    // 0x8002C09C: nop

    // 0x8002C0A0: lh          $t9, 0x1C($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X1C);
    // 0x8002C0A4: nop

    // 0x8002C0A8: sh          $t9, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r25;
L_8002C0AC:
    // 0x8002C0AC: jal         0x8002C0D4
    // 0x8002C0B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002C0D4(rdram, ctx);
        goto after_0;
    // 0x8002C0B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002C0B4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002C0B8: jal         0x8002AC58
    // 0x8002C0BC: nop

    func_8002AC58(rdram, ctx);
        goto after_1;
    // 0x8002C0BC: nop

    after_1:
    // 0x8002C0C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002C0C4: sll         $t0, $v0, 24
    ctx->r8 = S32(ctx->r2 << 24);
    // 0x8002C0C8: sra         $v0, $t0, 24
    ctx->r2 = S32(SIGNED(ctx->r8) >> 24);
    // 0x8002C0CC: jr          $ra
    // 0x8002C0D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8002C0D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002C0D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C0D4: lhu         $v0, 0x1C($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X1C);
    // 0x8002C0D8: lui         $at, 0x4500
    ctx->r1 = S32(0X4500 << 16);
    // 0x8002C0DC: andi        $t6, $v0, 0x1000
    ctx->r14 = ctx->r2 & 0X1000;
    // 0x8002C0E0: beq         $t6, $zero, L_8002C134
    if (ctx->r14 == 0) {
        // 0x8002C0E4: andi        $t9, $v0, 0x2000
        ctx->r25 = ctx->r2 & 0X2000;
            goto L_8002C134;
    }
    // 0x8002C0E4: andi        $t9, $v0, 0x2000
    ctx->r25 = ctx->r2 & 0X2000;
    // 0x8002C0E8: lh          $t7, 0x32($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X32);
    // 0x8002C0EC: lh          $t8, 0x34($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X34);
    // 0x8002C0F0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8002C0F4: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x8002C0F8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002C0FC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8002C100: lwc1        $f16, 0x28($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X28);
    // 0x8002C104: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002C108: lwc1        $f4, 0x2C($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x8002C10C: div.s       $f0, $f6, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8002C110: nop

    // 0x8002C114: div.s       $f2, $f10, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = DIV_S(ctx->f10.fl, ctx->f12.fl);
    // 0x8002C118: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x8002C11C: swc1        $f18, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f18.u32l;
    // 0x8002C120: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x8002C124: swc1        $f6, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f6.u32l;
    // 0x8002C128: lhu         $v0, 0x1C($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X1C);
    // 0x8002C12C: nop

    // 0x8002C130: andi        $t9, $v0, 0x2000
    ctx->r25 = ctx->r2 & 0X2000;
L_8002C134:
    // 0x8002C134: beq         $t9, $zero, L_8002C180
    if (ctx->r25 == 0) {
        // 0x8002C138: nop
    
            goto L_8002C180;
    }
    // 0x8002C138: nop

    // 0x8002C13C: lbu         $t0, 0x11($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X11);
    // 0x8002C140: lb          $t1, 0x3F($a1)
    ctx->r9 = MEM_B(ctx->r5, 0X3F);
    // 0x8002C144: lbu         $t3, 0xE($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0XE);
    // 0x8002C148: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8002C14C: sb          $t2, 0x11($a0)
    MEM_B(0X11, ctx->r4) = ctx->r10;
    // 0x8002C150: lb          $t4, 0x3C($a1)
    ctx->r12 = MEM_B(ctx->r5, 0X3C);
    // 0x8002C154: lbu         $t6, 0xF($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0XF);
    // 0x8002C158: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8002C15C: sb          $t5, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r13;
    // 0x8002C160: lb          $t7, 0x3D($a1)
    ctx->r15 = MEM_B(ctx->r5, 0X3D);
    // 0x8002C164: lbu         $t9, 0x10($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X10);
    // 0x8002C168: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8002C16C: sb          $t8, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r24;
    // 0x8002C170: lb          $t0, 0x3E($a1)
    ctx->r8 = MEM_B(ctx->r5, 0X3E);
    // 0x8002C174: nop

    // 0x8002C178: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8002C17C: sb          $t1, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r9;
L_8002C180:
    // 0x8002C180: jr          $ra
    // 0x8002C184: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002C184: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002C188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C188: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002C18C: lhu         $t6, 0x3530($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3530);
    // 0x8002C190: nop

    // 0x8002C194: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002C198: addu        $a1, $a0, $t7
    ctx->r5 = ADD32(ctx->r4, ctx->r15);
    // 0x8002C19C: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x8002C1A0: nop

    // 0x8002C1A4: addiu       $t8, $a2, 0x1
    ctx->r24 = ADD32(ctx->r6, 0X1);
    // 0x8002C1A8: sw          $t8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r24;
    // 0x8002C1AC: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x8002C1B0: jr          $ra
    // 0x8002C1B4: nop

    return;
    // 0x8002C1B4: nop

;}
RECOMP_FUNC void func_8002C1B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C1B8: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002C1BC: lhu         $t6, 0x3530($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3530);
    // 0x8002C1C0: nop

    // 0x8002C1C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002C1C8: addu        $a1, $a0, $t7
    ctx->r5 = ADD32(ctx->r4, ctx->r15);
    // 0x8002C1CC: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x8002C1D0: nop

    // 0x8002C1D4: addiu       $t8, $a2, 0x2
    ctx->r24 = ADD32(ctx->r6, 0X2);
    // 0x8002C1D8: sw          $t8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r24;
    // 0x8002C1DC: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x8002C1E0: jr          $ra
    // 0x8002C1E4: nop

    return;
    // 0x8002C1E4: nop

;}
RECOMP_FUNC void func_8002C1E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C1E8: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x8002C1EC: addiu       $a3, $a3, 0x3530
    ctx->r7 = ADD32(ctx->r7, 0X3530);
    // 0x8002C1F0: lhu         $t6, 0x0($a3)
    ctx->r14 = MEM_HU(ctx->r7, 0X0);
    // 0x8002C1F4: nop

    // 0x8002C1F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002C1FC: addu        $a1, $a0, $t7
    ctx->r5 = ADD32(ctx->r4, ctx->r15);
    // 0x8002C200: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x8002C204: nop

    // 0x8002C208: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x8002C20C: addiu       $t9, $a2, 0x1
    ctx->r25 = ADD32(ctx->r6, 0X1);
    // 0x8002C210: sw          $t9, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r25;
    // 0x8002C214: lhu         $t0, 0x0($a3)
    ctx->r8 = MEM_HU(ctx->r7, 0X0);
    // 0x8002C218: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x8002C21C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8002C220: addu        $a1, $a0, $t1
    ctx->r5 = ADD32(ctx->r4, ctx->r9);
    // 0x8002C224: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x8002C228: nop

    // 0x8002C22C: lhu         $t2, 0x0($a2)
    ctx->r10 = MEM_HU(ctx->r6, 0X0);
    // 0x8002C230: addiu       $t3, $a2, 0x2
    ctx->r11 = ADD32(ctx->r6, 0X2);
    // 0x8002C234: sw          $t3, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r11;
    // 0x8002C238: jr          $ra
    // 0x8002C23C: or          $v0, $t8, $t2
    ctx->r2 = ctx->r24 | ctx->r10;
    return;
    // 0x8002C23C: or          $v0, $t8, $t2
    ctx->r2 = ctx->r24 | ctx->r10;
;}
RECOMP_FUNC void func_8002C240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C240: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002C244: lhu         $t6, 0x3530($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3530);
    // 0x8002C248: nop

    // 0x8002C24C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002C250: addu        $a1, $a0, $t7
    ctx->r5 = ADD32(ctx->r4, ctx->r15);
    // 0x8002C254: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x8002C258: nop

    // 0x8002C25C: addiu       $t8, $a2, 0x4
    ctx->r24 = ADD32(ctx->r6, 0X4);
    // 0x8002C260: sw          $t8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r24;
    // 0x8002C264: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8002C268: jr          $ra
    // 0x8002C26C: nop

    return;
    // 0x8002C26C: nop

;}
RECOMP_FUNC void func_8002C270(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C270: jr          $ra
    // 0x8002C274: nop

    return;
    // 0x8002C274: nop

;}
RECOMP_FUNC void func_8002C278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C278: jr          $ra
    // 0x8002C27C: nop

    return;
    // 0x8002C27C: nop

;}
RECOMP_FUNC void func_8002C280(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C280: jr          $ra
    // 0x8002C284: nop

    return;
    // 0x8002C284: nop

;}
RECOMP_FUNC void func_8002C288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C288: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002C28C: lhu         $t6, 0x3530($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3530);
    // 0x8002C290: nop

    // 0x8002C294: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002C298: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x8002C29C: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x8002C2A0: nop

    // 0x8002C2A4: addiu       $t9, $t8, 0x4
    ctx->r25 = ADD32(ctx->r24, 0X4);
    // 0x8002C2A8: jr          $ra
    // 0x8002C2AC: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
    return;
    // 0x8002C2AC: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_8002C2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C2B0: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002C2B4: lhu         $t6, 0x3530($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3530);
    // 0x8002C2B8: nop

    // 0x8002C2BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002C2C0: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x8002C2C4: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x8002C2C8: nop

    // 0x8002C2CC: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x8002C2D0: jr          $ra
    // 0x8002C2D4: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
    return;
    // 0x8002C2D4: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_8002C2D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C2D8: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002C2DC: lhu         $t6, 0x3530($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3530);
    // 0x8002C2E0: nop

    // 0x8002C2E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002C2E8: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x8002C2EC: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x8002C2F0: nop

    // 0x8002C2F4: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x8002C2F8: jr          $ra
    // 0x8002C2FC: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
    return;
    // 0x8002C2FC: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_8002C300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C300: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002C304: lhu         $t6, 0x3530($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3530);
    // 0x8002C308: nop

    // 0x8002C30C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002C310: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x8002C314: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x8002C318: nop

    // 0x8002C31C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8002C320: jr          $ra
    // 0x8002C324: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
    return;
    // 0x8002C324: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_8002C328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C328: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002C32C: lhu         $t6, 0x3530($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3530);
    // 0x8002C330: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002C334: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002C338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002C33C: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x8002C340: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x8002C344: nop

    // 0x8002C348: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8002C34C: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
    // 0x8002C350: jal         0x8002C1B8
    // 0x8002C354: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8002C1B8(rdram, ctx);
        goto after_0;
    // 0x8002C354: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8002C358: sll         $t0, $v0, 1
    ctx->r8 = S32(ctx->r2 << 1);
    // 0x8002C35C: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x8002C360: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002C364: lhu         $t1, -0x6B8($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X6B8);
    // 0x8002C368: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002C36C: jal         0x8002C240
    // 0x8002C370: sh          $t1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r9;
    func_8002C240(rdram, ctx);
        goto after_1;
    // 0x8002C370: sh          $t1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r9;
    after_1:
    // 0x8002C374: lhu         $t2, 0x1A($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X1A);
    // 0x8002C378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002C37C: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x8002C380: lbu         $v0, 0x0($t3)
    ctx->r2 = MEM_BU(ctx->r11, 0X0);
    // 0x8002C384: jr          $ra
    // 0x8002C388: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8002C388: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8002C38C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C38C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002C390: lhu         $t6, 0x3530($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3530);
    // 0x8002C394: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002C398: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002C39C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002C3A0: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x8002C3A4: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x8002C3A8: nop

    // 0x8002C3AC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8002C3B0: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
    // 0x8002C3B4: jal         0x8002C1B8
    // 0x8002C3B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8002C1B8(rdram, ctx);
        goto after_0;
    // 0x8002C3B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8002C3BC: sll         $t0, $v0, 1
    ctx->r8 = S32(ctx->r2 << 1);
    // 0x8002C3C0: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x8002C3C4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002C3C8: lhu         $t1, -0x6B8($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X6B8);
    // 0x8002C3CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002C3D0: jal         0x8002C240
    // 0x8002C3D4: sh          $t1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r9;
    func_8002C240(rdram, ctx);
        goto after_1;
    // 0x8002C3D4: sh          $t1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r9;
    after_1:
    // 0x8002C3D8: lhu         $t2, 0x1A($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X1A);
    // 0x8002C3DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002C3E0: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8002C3E4: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x8002C3E8: lhu         $v0, 0x0($t4)
    ctx->r2 = MEM_HU(ctx->r12, 0X0);
    // 0x8002C3EC: jr          $ra
    // 0x8002C3F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8002C3F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8002C3F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C3F4: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002C3F8: lhu         $t6, 0x3530($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3530);
    // 0x8002C3FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002C400: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002C404: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002C408: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x8002C40C: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x8002C410: nop

    // 0x8002C414: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8002C418: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
    // 0x8002C41C: jal         0x8002C1B8
    // 0x8002C420: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8002C1B8(rdram, ctx);
        goto after_0;
    // 0x8002C420: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8002C424: sll         $t0, $v0, 1
    ctx->r8 = S32(ctx->r2 << 1);
    // 0x8002C428: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x8002C42C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002C430: lhu         $t1, -0x6B8($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X6B8);
    // 0x8002C434: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002C438: jal         0x8002C240
    // 0x8002C43C: sh          $t1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r9;
    func_8002C240(rdram, ctx);
        goto after_1;
    // 0x8002C43C: sh          $t1, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r9;
    after_1:
    // 0x8002C440: lhu         $t2, 0x1A($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X1A);
    // 0x8002C444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002C448: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8002C44C: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x8002C450: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x8002C454: jr          $ra
    // 0x8002C458: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8002C458: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8002C45C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C45C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002C460: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002C464: jal         0x8002C188
    // 0x8002C468: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002C468: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8002C46C: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x8002C470: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x8002C474: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002C478: lhu         $t7, -0x6B8($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X6B8);
    // 0x8002C47C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002C480: jal         0x8002C188
    // 0x8002C484: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
    func_8002C188(rdram, ctx);
        goto after_1;
    // 0x8002C484: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
    after_1:
    // 0x8002C488: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x8002C48C: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x8002C490: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x8002C494: lhu         $t0, 0x3530($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X3530);
    // 0x8002C498: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8002C49C: lhu         $t9, -0x6B8($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X6B8);
    // 0x8002C4A0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002C4A4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8002C4A8: sh          $t9, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r25;
    // 0x8002C4AC: addu        $v1, $a0, $t1
    ctx->r3 = ADD32(ctx->r4, ctx->r9);
    // 0x8002C4B0: lw          $t2, 0x8($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X8);
    // 0x8002C4B4: nop

    // 0x8002C4B8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8002C4BC: jal         0x8002C240
    // 0x8002C4C0: sw          $t3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r11;
    func_8002C240(rdram, ctx);
        goto after_2;
    // 0x8002C4C0: sw          $t3, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r11;
    after_2:
    // 0x8002C4C4: lhu         $t4, 0x1E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X1E);
    // 0x8002C4C8: lhu         $t8, 0x1C($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X1C);
    // 0x8002C4CC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8002C4D0: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x8002C4D4: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8002C4D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002C4DC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8002C4E0: lw          $v0, 0x0($t9)
    ctx->r2 = MEM_W(ctx->r25, 0X0);
    // 0x8002C4E4: jr          $ra
    // 0x8002C4E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8002C4E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8002C4EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C4EC: jr          $ra
    // 0x8002C4F0: nop

    return;
    // 0x8002C4F0: nop

;}
RECOMP_FUNC void func_8002C4F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C4F4: jr          $ra
    // 0x8002C4F8: nop

    return;
    // 0x8002C4F8: nop

;}
RECOMP_FUNC void func_8002C4FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C4FC: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002C500: lhu         $t6, 0x3530($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3530);
    // 0x8002C504: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002C508: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002C50C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002C510: addu        $v0, $a0, $t7
    ctx->r2 = ADD32(ctx->r4, ctx->r15);
    // 0x8002C514: lw          $t8, 0x8($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X8);
    // 0x8002C518: nop

    // 0x8002C51C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8002C520: jal         0x8002C240
    // 0x8002C524: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
    func_8002C240(rdram, ctx);
        goto after_0;
    // 0x8002C524: sw          $t9, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r25;
    after_0:
    // 0x8002C528: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8002C52C: lb          $t0, -0x326C($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X326C);
    // 0x8002C530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002C534: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8002C538: addu        $v1, $v0, $t1
    ctx->r3 = ADD32(ctx->r2, ctx->r9);
    // 0x8002C53C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8002C540: jr          $ra
    // 0x8002C544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8002C544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002C548(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C548: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002C54C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002C550: jal         0x8002C568
    // 0x8002C554: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    func_8002C568(rdram, ctx);
        goto after_0;
    // 0x8002C554: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    after_0:
    // 0x8002C558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002C55C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002C560: jr          $ra
    // 0x8002C564: nop

    return;
    // 0x8002C564: nop

;}
RECOMP_FUNC void func_8002C568(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C568: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8002C56C: lw          $t7, 0xC($a1)
    ctx->r15 = MEM_W(ctx->r5, 0XC);
    // 0x8002C570: lhu         $t9, 0x1C($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X1C);
    // 0x8002C574: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x8002C578: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8002C57C: ori         $t0, $t9, 0x8
    ctx->r8 = ctx->r25 | 0X8;
    // 0x8002C580: sh          $t6, 0x36($a1)
    MEM_H(0X36, ctx->r5) = ctx->r14;
    // 0x8002C584: sw          $t8, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r24;
    // 0x8002C588: sh          $t0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r8;
    // 0x8002C58C: jr          $ra
    // 0x8002C590: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8002C590: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8002C594(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C594: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8002C598: lhu         $t6, 0x1C($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X1C);
    // 0x8002C59C: lw          $t9, 0x10($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X10);
    // 0x8002C5A0: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8002C5A4: ori         $t7, $t6, 0x800
    ctx->r15 = ctx->r14 | 0X800;
    // 0x8002C5A8: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8002C5AC: sh          $t7, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r15;
    // 0x8002C5B0: sh          $t8, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r24;
    // 0x8002C5B4: sw          $t0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r8;
    // 0x8002C5B8: jr          $ra
    // 0x8002C5BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8002C5BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8002C5C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C5C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002C5C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002C5C8: jal         0x8002C5EC
    // 0x8002C5CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002C5EC(rdram, ctx);
        goto after_0;
    // 0x8002C5CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002C5D0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002C5D4: jal         0x8002C2B0
    // 0x8002C5D8: nop

    func_8002C2B0(rdram, ctx);
        goto after_1;
    // 0x8002C5D8: nop

    after_1:
    // 0x8002C5DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002C5E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002C5E4: jr          $ra
    // 0x8002C5E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002C5E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002C5EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C5EC: lw          $t6, 0x38($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X38);
    // 0x8002C5F0: lbu         $t4, 0xB($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0XB);
    // 0x8002C5F4: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8002C5F8: andi        $t5, $t4, 0xFFDF
    ctx->r13 = ctx->r12 & 0XFFDF;
    // 0x8002C5FC: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8002C600: nop

    // 0x8002C604: lw          $v0, 0x14($t8)
    ctx->r2 = MEM_W(ctx->r24, 0X14);
    // 0x8002C608: nop

    // 0x8002C60C: lw          $t9, 0x8($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X8);
    // 0x8002C610: nop

    // 0x8002C614: sll         $t0, $t9, 26
    ctx->r8 = S32(ctx->r25 << 26);
    // 0x8002C618: srl         $t1, $t0, 31
    ctx->r9 = S32(U32(ctx->r8) >> 31);
    // 0x8002C61C: sll         $t2, $t1, 5
    ctx->r10 = S32(ctx->r9 << 5);
    // 0x8002C620: andi        $t3, $t2, 0x20
    ctx->r11 = ctx->r10 & 0X20;
    // 0x8002C624: or          $t2, $t3, $t5
    ctx->r10 = ctx->r11 | ctx->r13;
    // 0x8002C628: sb          $t2, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r10;
    // 0x8002C62C: lw          $t7, 0x8($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X8);
    // 0x8002C630: andi        $t4, $t2, 0xEF
    ctx->r12 = ctx->r10 & 0XEF;
    // 0x8002C634: sll         $t8, $t7, 27
    ctx->r24 = S32(ctx->r15 << 27);
    // 0x8002C638: srl         $t9, $t8, 31
    ctx->r25 = S32(U32(ctx->r24) >> 31);
    // 0x8002C63C: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x8002C640: andi        $t1, $t0, 0x10
    ctx->r9 = ctx->r8 & 0X10;
    // 0x8002C644: or          $t3, $t1, $t4
    ctx->r11 = ctx->r9 | ctx->r12;
    // 0x8002C648: jr          $ra
    // 0x8002C64C: sb          $t3, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r11;
    return;
    // 0x8002C64C: sb          $t3, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r11;
;}
RECOMP_FUNC void func_8002C650(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C650: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002C654: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002C658: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002C65C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002C660: jal         0x8002C188
    // 0x8002C664: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002C664: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002C668: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8002C66C: nop

    // 0x8002C670: sb          $v0, 0x4($t6)
    MEM_B(0X4, ctx->r14) = ctx->r2;
    // 0x8002C674: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002C678: jal         0x8002C2D8
    // 0x8002C67C: nop

    func_8002C2D8(rdram, ctx);
        goto after_1;
    // 0x8002C67C: nop

    after_1:
    // 0x8002C680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002C684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002C688: jr          $ra
    // 0x8002C68C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002C68C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002C690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C690: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8002C694: lw          $t6, 0x38($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X38);
    // 0x8002C698: sh          $zero, 0x36($a1)
    MEM_H(0X36, ctx->r5) = 0;
    // 0x8002C69C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002C6A0: jr          $ra
    // 0x8002C6A4: sw          $t6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r14;
    return;
    // 0x8002C6A4: sw          $t6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r14;
;}
RECOMP_FUNC void func_8002C6A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C6A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002C6AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002C6B0: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8002C6B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002C6B8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x8002C6BC: jal         0x8002C188
    // 0x8002C6C0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002C6C0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002C6C4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8002C6C8: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x8002C6CC: lbu         $t6, 0xB($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XB);
    // 0x8002C6D0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002C6D4: andi        $t8, $t6, 0xFFDF
    ctx->r24 = ctx->r14 & 0XFFDF;
    // 0x8002C6D8: andi        $t9, $t8, 0xEF
    ctx->r25 = ctx->r24 & 0XEF;
    // 0x8002C6DC: sb          $t8, 0xB($a2)
    MEM_B(0XB, ctx->r6) = ctx->r24;
    // 0x8002C6E0: beq         $t0, $zero, L_8002C6F0
    if (ctx->r8 == 0) {
        // 0x8002C6E4: sb          $t9, 0xB($a2)
        MEM_B(0XB, ctx->r6) = ctx->r25;
            goto L_8002C6F0;
    }
    // 0x8002C6E4: sb          $t9, 0xB($a2)
    MEM_B(0XB, ctx->r6) = ctx->r25;
    // 0x8002C6E8: ori         $t3, $t9, 0x20
    ctx->r11 = ctx->r25 | 0X20;
    // 0x8002C6EC: sb          $t3, 0xB($a2)
    MEM_B(0XB, ctx->r6) = ctx->r11;
L_8002C6F0:
    // 0x8002C6F0: andi        $t4, $v1, 0x10
    ctx->r12 = ctx->r3 & 0X10;
    // 0x8002C6F4: beq         $t4, $zero, L_8002C710
    if (ctx->r12 == 0) {
        // 0x8002C6F8: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_8002C710;
    }
    // 0x8002C6F8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002C6FC: lbu         $t6, 0xB($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0XB);
    // 0x8002C700: nop

    // 0x8002C704: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x8002C708: sb          $t7, 0xB($a2)
    MEM_B(0XB, ctx->r6) = ctx->r15;
    // 0x8002C70C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
L_8002C710:
    // 0x8002C710: jal         0x8002C2D8
    // 0x8002C714: nop

    func_8002C2D8(rdram, ctx);
        goto after_1;
    // 0x8002C714: nop

    after_1:
    // 0x8002C718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002C71C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002C720: jr          $ra
    // 0x8002C724: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002C724: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002C728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C728: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002C72C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002C730: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002C734: lw          $t7, 0x4($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X4);
    // 0x8002C738: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8002C73C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002C740: jal         0x8002C2B0
    // 0x8002C744: sh          $t6, 0x20($t7)
    MEM_H(0X20, ctx->r15) = ctx->r14;
    func_8002C2B0(rdram, ctx);
        goto after_0;
    // 0x8002C744: sh          $t6, 0x20($t7)
    MEM_H(0X20, ctx->r15) = ctx->r14;
    after_0:
    // 0x8002C748: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002C74C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002C750: jr          $ra
    // 0x8002C754: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8002C754: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8002C758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C758: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002C75C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002C760: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002C764: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002C768: jal         0x8002C2B0
    // 0x8002C76C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002C2B0(rdram, ctx);
        goto after_0;
    // 0x8002C76C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002C770: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002C774: nop

    // 0x8002C778: lhu         $t6, 0x1E($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X1E);
    // 0x8002C77C: lw          $t7, 0x4($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X4);
    // 0x8002C780: jal         0x8002C240
    // 0x8002C784: sh          $t6, 0x70($t7)
    MEM_H(0X70, ctx->r15) = ctx->r14;
    func_8002C240(rdram, ctx);
        goto after_1;
    // 0x8002C784: sh          $t6, 0x70($t7)
    MEM_H(0X70, ctx->r15) = ctx->r14;
    after_1:
    // 0x8002C788: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8002C78C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8002C790: lw          $a0, 0x4($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X4);
    // 0x8002C794: jal         0x80029780
    // 0x8002C798: nop

    func_80029780(rdram, ctx);
        goto after_2;
    // 0x8002C798: nop

    after_2:
    // 0x8002C79C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002C7A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002C7A4: jr          $ra
    // 0x8002C7A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8002C7A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8002C7AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C7AC: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002C7B0: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x8002C7B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002C7B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002C7BC: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x8002C7C0: nop

    // 0x8002C7C4: lw          $t8, 0x38($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X38);
    // 0x8002C7C8: jal         0x8002C7E0
    // 0x8002C7CC: sw          $a0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r4;
    func_8002C7E0(rdram, ctx);
        goto after_0;
    // 0x8002C7CC: sw          $a0, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r4;
    after_0:
    // 0x8002C7D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002C7D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002C7D8: jr          $ra
    // 0x8002C7DC: nop

    return;
    // 0x8002C7DC: nop

;}
RECOMP_FUNC void func_8002C7E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C7E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002C7E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002C7E8: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x8002C7EC: jal         0x800296E0
    // 0x8002C7F0: addiu       $a0, $a0, -0x4B70
    ctx->r4 = ADD32(ctx->r4, -0X4B70);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x8002C7F0: addiu       $a0, $a0, -0x4B70
    ctx->r4 = ADD32(ctx->r4, -0X4B70);
    after_0:
    // 0x8002C7F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002C7F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002C7FC: jr          $ra
    // 0x8002C800: nop

    return;
    // 0x8002C800: nop

;}
RECOMP_FUNC void func_8002C804(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C804: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002C808: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002C80C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8002C810: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8002C814: jal         0x8002C188
    // 0x8002C818: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002C818: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002C81C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8002C820: jal         0x8002C1B8
    // 0x8002C824: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002C824: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8002C828: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8002C82C: jal         0x8002C240
    // 0x8002C830: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    func_8002C240(rdram, ctx);
        goto after_2;
    // 0x8002C830: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    after_2:
    // 0x8002C834: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8002C838: jal         0x8002C898
    // 0x8002C83C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8002C898(rdram, ctx);
        goto after_3;
    // 0x8002C83C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_3:
    // 0x8002C840: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002C844: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8002C848: addiu       $v1, $v1, 0x3538
    ctx->r3 = ADD32(ctx->r3, 0X3538);
    // 0x8002C84C: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8002C850: lhu         $t7, 0x16($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X16);
    // 0x8002C854: nop

    // 0x8002C858: andi        $t8, $t7, 0x7FFF
    ctx->r24 = ctx->r15 & 0X7FFF;
    // 0x8002C85C: sh          $t8, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r24;
    // 0x8002C860: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x8002C864: lhu         $t0, 0x1C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X1C);
    // 0x8002C868: lw          $t2, 0x38($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X38);
    // 0x8002C86C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002C870: sh          $t0, 0x1E($t2)
    MEM_H(0X1E, ctx->r10) = ctx->r8;
    // 0x8002C874: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x8002C878: lhu         $t3, 0x1E($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X1E);
    // 0x8002C87C: lw          $t5, 0x38($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X38);
    // 0x8002C880: nop

    // 0x8002C884: sh          $t3, 0x36($t5)
    MEM_H(0X36, ctx->r13) = ctx->r11;
    // 0x8002C888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002C88C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002C890: jr          $ra
    // 0x8002C894: nop

    return;
    // 0x8002C894: nop

;}
RECOMP_FUNC void func_8002C898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C898: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002C89C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002C8A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002C8A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002C8A8: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8002C8AC: lh          $a2, 0x14($t6)
    ctx->r6 = MEM_H(ctx->r14, 0X14);
    // 0x8002C8B0: lh          $a3, 0x18($t6)
    ctx->r7 = MEM_H(ctx->r14, 0X18);
    // 0x8002C8B4: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x8002C8B8: lui         $a1, 0x8003
    ctx->r5 = S32(0X8003 << 16);
    // 0x8002C8BC: jal         0x8002AA60
    // 0x8002C8C0: addiu       $a1, $a1, -0x4B70
    ctx->r5 = ADD32(ctx->r5, -0X4B70);
    func_8002AA60(rdram, ctx);
        goto after_0;
    // 0x8002C8C0: addiu       $a1, $a1, -0x4B70
    ctx->r5 = ADD32(ctx->r5, -0X4B70);
    after_0:
    // 0x8002C8C4: lw          $t8, 0x14($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X14);
    // 0x8002C8C8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8002C8CC: lw          $t9, 0x38($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X38);
    // 0x8002C8D0: nop

    // 0x8002C8D4: sw          $t7, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r15;
    // 0x8002C8D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002C8DC: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
    // 0x8002C8E0: jr          $ra
    // 0x8002C8E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8002C8E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002C8E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C8E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002C8EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002C8F0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8002C8F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8002C8F8: jal         0x8002C188
    // 0x8002C8FC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002C8FC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002C900: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8002C904: jal         0x8002C1B8
    // 0x8002C908: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002C908: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8002C90C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002C910: jal         0x8002CA48
    // 0x8002C914: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    func_8002CA48(rdram, ctx);
        goto after_2;
    // 0x8002C914: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    after_2:
    // 0x8002C918: lhu         $v0, 0x1C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X1C);
    // 0x8002C91C: lhu         $v1, 0x1E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1E);
    // 0x8002C920: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x8002C924: beq         $v0, $at, L_8002C938
    if (ctx->r2 == ctx->r1) {
        // 0x8002C928: lui         $t6, 0x801B
        ctx->r14 = S32(0X801B << 16);
            goto L_8002C938;
    }
    // 0x8002C928: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002C92C: lw          $t6, 0x353C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X353C);
    // 0x8002C930: nop

    // 0x8002C934: sh          $v0, 0x1E($t6)
    MEM_H(0X1E, ctx->r14) = ctx->r2;
L_8002C938:
    // 0x8002C938: beq         $v1, $zero, L_8002C94C
    if (ctx->r3 == 0) {
        // 0x8002C93C: lui         $t7, 0x801B
        ctx->r15 = S32(0X801B << 16);
            goto L_8002C94C;
    }
    // 0x8002C93C: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x8002C940: lw          $t7, 0x353C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X353C);
    // 0x8002C944: nop

    // 0x8002C948: sh          $v1, 0x36($t7)
    MEM_H(0X36, ctx->r15) = ctx->r3;
L_8002C94C:
    // 0x8002C94C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002C950: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002C954: jr          $ra
    // 0x8002C958: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002C958: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002C95C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C95C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002C960: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002C964: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8002C968: jal         0x8002C1E8
    // 0x8002C96C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C1E8(rdram, ctx);
        goto after_0;
    // 0x8002C96C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002C970: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002C974: jal         0x8002CA48
    // 0x8002C978: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8002CA48(rdram, ctx);
        goto after_1;
    // 0x8002C978: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8002C97C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8002C980: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002C984: lw          $t6, 0x3538($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X3538);
    // 0x8002C988: sll         $a1, $v1, 8
    ctx->r5 = S32(ctx->r3 << 8);
    // 0x8002C98C: sll         $a2, $v1, 20
    ctx->r6 = S32(ctx->r3 << 20);
    // 0x8002C990: sra         $t0, $a2, 20
    ctx->r8 = S32(SIGNED(ctx->r6) >> 20);
    // 0x8002C994: sra         $t7, $a1, 20
    ctx->r15 = S32(SIGNED(ctx->r5) >> 20);
    // 0x8002C998: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8002C99C: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x8002C9A0: lw          $a0, 0x38($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X38);
    // 0x8002C9A4: sra         $a2, $t1, 16
    ctx->r6 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8002C9A8: jal         0x8002E0F0
    // 0x8002C9AC: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    func_8002E0F0(rdram, ctx);
        goto after_2;
    // 0x8002C9AC: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    after_2:
    // 0x8002C9B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002C9B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002C9B8: jr          $ra
    // 0x8002C9BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002C9BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002C9C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002C9C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002C9C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002C9C8: jal         0x8002C95C
    // 0x8002C9CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002C95C(rdram, ctx);
        goto after_0;
    // 0x8002C9CC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002C9D0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002C9D4: jal         0x8002C240
    // 0x8002C9D8: nop

    func_8002C240(rdram, ctx);
        goto after_1;
    // 0x8002C9D8: nop

    after_1:
    // 0x8002C9DC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8002C9E0: lw          $a0, 0x3538($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3538);
    // 0x8002C9E4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8002C9E8: jal         0x8002B9AC
    // 0x8002C9EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8002B9AC(rdram, ctx);
        goto after_2;
    // 0x8002C9EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8002C9F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002C9F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002C9F8: jr          $ra
    // 0x8002C9FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002C9FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002CA00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002CA00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002CA04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002CA08: jal         0x8002C9C0
    // 0x8002CA0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002C9C0(rdram, ctx);
        goto after_0;
    // 0x8002CA0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002CA10: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002CA14: jal         0x8002C1B8
    // 0x8002CA18: nop

    func_8002C1B8(rdram, ctx);
        goto after_1;
    // 0x8002CA18: nop

    after_1:
    // 0x8002CA1C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8002CA20: lw          $t6, 0x353C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X353C);
    // 0x8002CA24: nop

    // 0x8002CA28: sh          $v0, 0x36($t6)
    MEM_H(0X36, ctx->r14) = ctx->r2;
    // 0x8002CA2C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002CA30: jal         0x8002C2D8
    // 0x8002CA34: nop

    func_8002C2D8(rdram, ctx);
        goto after_2;
    // 0x8002CA34: nop

    after_2:
    // 0x8002CA38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002CA3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002CA40: jr          $ra
    // 0x8002CA44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002CA44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002CA48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002CA48: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002CA4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002CA50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002CA54: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8002CA58: lw          $a2, 0x38($a0)
    ctx->r6 = MEM_W(ctx->r4, 0X38);
    // 0x8002CA5C: nop

    // 0x8002CA60: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8002CA64: jal         0x8002C240
    // 0x8002CA68: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    func_8002C240(rdram, ctx);
        goto after_0;
    // 0x8002CA68: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_0:
    // 0x8002CA6C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8002CA70: jal         0x8002C898
    // 0x8002CA74: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8002C898(rdram, ctx);
        goto after_1;
    // 0x8002CA74: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x8002CA78: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x8002CA7C: addiu       $s0, $s0, 0x3538
    ctx->r16 = ADD32(ctx->r16, 0X3538);
    // 0x8002CA80: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8002CA84: lw          $t8, 0x38($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X38);
    // 0x8002CA88: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002CA8C: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8002CA90: addiu       $v1, $v1, 0x353C
    ctx->r3 = ADD32(ctx->r3, 0X353C);
    // 0x8002CA94: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x8002CA98: lw          $t9, 0xC($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XC);
    // 0x8002CA9C: nop

    // 0x8002CAA0: sw          $t9, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r25;
    // 0x8002CAA4: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x8002CAA8: lw          $t1, 0x10($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X10);
    // 0x8002CAAC: nop

    // 0x8002CAB0: sw          $t1, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r9;
    // 0x8002CAB4: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x8002CAB8: lw          $t3, 0x38($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X38);
    // 0x8002CABC: nop

    // 0x8002CAC0: sw          $t3, 0x38($t4)
    MEM_W(0X38, ctx->r12) = ctx->r11;
    // 0x8002CAC4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8002CAC8: lhu         $t5, 0x36($a2)
    ctx->r13 = MEM_HU(ctx->r6, 0X36);
    // 0x8002CACC: nop

    // 0x8002CAD0: sh          $t5, 0x36($t6)
    MEM_H(0X36, ctx->r14) = ctx->r13;
    // 0x8002CAD4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8002CAD8: lhu         $t7, 0x24($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X24);
    // 0x8002CADC: nop

    // 0x8002CAE0: sh          $t7, 0x24($t8)
    MEM_H(0X24, ctx->r24) = ctx->r15;
    // 0x8002CAE4: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x8002CAE8: lhu         $t9, 0x1E($a2)
    ctx->r25 = MEM_HU(ctx->r6, 0X1E);
    // 0x8002CAEC: nop

    // 0x8002CAF0: sh          $t9, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r25;
    // 0x8002CAF4: lw          $a3, 0x0($v1)
    ctx->r7 = MEM_W(ctx->r3, 0X0);
    // 0x8002CAF8: lhu         $t2, 0x1C($a2)
    ctx->r10 = MEM_HU(ctx->r6, 0X1C);
    // 0x8002CAFC: lhu         $t1, 0x1C($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0X1C);
    // 0x8002CB00: andi        $t3, $t2, 0xF7F7
    ctx->r11 = ctx->r10 & 0XF7F7;
    // 0x8002CB04: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x8002CB08: sh          $t4, 0x1C($a3)
    MEM_H(0X1C, ctx->r7) = ctx->r12;
    // 0x8002CB0C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8002CB10: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8002CB14: jal         0x8002AB88
    // 0x8002CB18: nop

    func_8002AB88(rdram, ctx);
        goto after_2;
    // 0x8002CB18: nop

    after_2:
    // 0x8002CB1C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8002CB20: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8002CB24: jal         0x80020CE0
    // 0x8002CB28: nop

    func_80020CE0(rdram, ctx);
        goto after_3;
    // 0x8002CB28: nop

    after_3:
    // 0x8002CB2C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002CB30: addiu       $v1, $v1, 0x353C
    ctx->r3 = ADD32(ctx->r3, 0X353C);
    // 0x8002CB34: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8002CB38: jal         0x8002BE5C
    // 0x8002CB3C: nop

    func_8002BE5C(rdram, ctx);
        goto after_4;
    // 0x8002CB3C: nop

    after_4:
    // 0x8002CB40: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8002CB44: jal         0x8002C5EC
    // 0x8002CB48: nop

    func_8002C5EC(rdram, ctx);
        goto after_5;
    // 0x8002CB48: nop

    after_5:
    // 0x8002CB4C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8002CB50: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x8002CB54: lbu         $t6, 0x4($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X4);
    // 0x8002CB58: nop

    // 0x8002CB5C: sb          $t6, 0x4($t7)
    MEM_B(0X4, ctx->r15) = ctx->r14;
    // 0x8002CB60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002CB64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002CB68: jr          $ra
    // 0x8002CB6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8002CB6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8002CB70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002CB70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002CB74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002CB78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002CB7C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8002CB80: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8002CB84: jal         0x8002C2B0
    // 0x8002CB88: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C2B0(rdram, ctx);
        goto after_0;
    // 0x8002CB88: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002CB8C: jal         0x8002C240
    // 0x8002CB90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002C240(rdram, ctx);
        goto after_1;
    // 0x8002CB90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8002CB94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8002CB98: jal         0x8002C898
    // 0x8002CB9C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8002C898(rdram, ctx);
        goto after_2;
    // 0x8002CB9C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x8002CBA0: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8002CBA4: addiu       $a2, $a2, 0x3538
    ctx->r6 = ADD32(ctx->r6, 0X3538);
    // 0x8002CBA8: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x8002CBAC: lw          $t7, 0x38($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X38);
    // 0x8002CBB0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002CBB4: addiu       $v1, $v1, 0x353C
    ctx->r3 = ADD32(ctx->r3, 0X353C);
    // 0x8002CBB8: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8002CBBC: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x8002CBC0: nop

    // 0x8002CBC4: sw          $t8, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r24;
    // 0x8002CBC8: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x8002CBCC: lw          $t0, 0x18($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X18);
    // 0x8002CBD0: nop

    // 0x8002CBD4: sw          $t0, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->r8;
    // 0x8002CBD8: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x8002CBDC: lh          $t2, 0x20($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X20);
    // 0x8002CBE0: nop

    // 0x8002CBE4: sh          $t2, 0x20($t3)
    MEM_H(0X20, ctx->r11) = ctx->r10;
    // 0x8002CBE8: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x8002CBEC: lh          $t4, 0x22($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X22);
    // 0x8002CBF0: nop

    // 0x8002CBF4: sh          $t4, 0x22($t5)
    MEM_H(0X22, ctx->r13) = ctx->r12;
    // 0x8002CBF8: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x8002CBFC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002CC00: jal         0x8002AB88
    // 0x8002CC04: nop

    func_8002AB88(rdram, ctx);
        goto after_3;
    // 0x8002CC04: nop

    after_3:
    // 0x8002CC08: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x8002CC0C: addiu       $s0, $s0, 0x3538
    ctx->r16 = ADD32(ctx->r16, 0X3538);
    // 0x8002CC10: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8002CC14: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002CC18: jal         0x80020CE0
    // 0x8002CC1C: nop

    func_80020CE0(rdram, ctx);
        goto after_4;
    // 0x8002CC1C: nop

    after_4:
    // 0x8002CC20: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8002CC24: addiu       $v1, $v1, 0x353C
    ctx->r3 = ADD32(ctx->r3, 0X353C);
    // 0x8002CC28: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8002CC2C: jal         0x8002BE5C
    // 0x8002CC30: nop

    func_8002BE5C(rdram, ctx);
        goto after_5;
    // 0x8002CC30: nop

    after_5:
    // 0x8002CC34: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8002CC38: jal         0x8002C5EC
    // 0x8002CC3C: nop

    func_8002C5EC(rdram, ctx);
        goto after_6;
    // 0x8002CC3C: nop

    after_6:
    // 0x8002CC40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002CC44: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002CC48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002CC4C: jr          $ra
    // 0x8002CC50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002CC50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002CC54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002CC54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002CC58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002CC5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002CC60: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002CC64: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    // 0x8002CC68: jal         0x8002959C
    // 0x8002CC6C: nop

    func_8002959C(rdram, ctx);
        goto after_0;
    // 0x8002CC6C: nop

    after_0:
    // 0x8002CC70: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002CC74: jal         0x8002C2B0
    // 0x8002CC78: nop

    func_8002C2B0(rdram, ctx);
        goto after_1;
    // 0x8002CC78: nop

    after_1:
    // 0x8002CC7C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002CC80: jal         0x8002AC58
    // 0x8002CC84: nop

    func_8002AC58(rdram, ctx);
        goto after_2;
    // 0x8002CC84: nop

    after_2:
    // 0x8002CC88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002CC8C: sll         $t7, $v0, 24
    ctx->r15 = S32(ctx->r2 << 24);
    // 0x8002CC90: sra         $v0, $t7, 24
    ctx->r2 = S32(SIGNED(ctx->r15) >> 24);
    // 0x8002CC94: jr          $ra
    // 0x8002CC98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8002CC98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002CC9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002CC9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002CCA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002CCA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002CCA8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002CCAC: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    // 0x8002CCB0: jal         0x8002940C
    // 0x8002CCB4: nop

    func_8002940C(rdram, ctx);
        goto after_0;
    // 0x8002CCB4: nop

    after_0:
    // 0x8002CCB8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002CCBC: jal         0x8002C2B0
    // 0x8002CCC0: nop

    func_8002C2B0(rdram, ctx);
        goto after_1;
    // 0x8002CCC0: nop

    after_1:
    // 0x8002CCC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002CCC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002CCCC: jr          $ra
    // 0x8002CCD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002CCD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002CCD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002CCD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002CCD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002CCDC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002CCE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002CCE4: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    // 0x8002CCE8: jal         0x80029570
    // 0x8002CCEC: nop

    func_80029570(rdram, ctx);
        goto after_0;
    // 0x8002CCEC: nop

    after_0:
    // 0x8002CCF0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002CCF4: jal         0x8002C2B0
    // 0x8002CCF8: nop

    func_8002C2B0(rdram, ctx);
        goto after_1;
    // 0x8002CCF8: nop

    after_1:
    // 0x8002CCFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002CD00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002CD04: jr          $ra
    // 0x8002CD08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8002CD08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_8002CD0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002CD0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002CD10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002CD14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002CD18: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002CD1C: jal         0x8002C2B0
    // 0x8002CD20: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C2B0(rdram, ctx);
        goto after_0;
    // 0x8002CD20: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002CD24: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002CD28: jal         0x8002CD50
    // 0x8002CD2C: nop

    func_8002CD50(rdram, ctx);
        goto after_1;
    // 0x8002CD2C: nop

    after_1:
    // 0x8002CD30: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002CD34: jal         0x8002AC58
    // 0x8002CD38: nop

    func_8002AC58(rdram, ctx);
        goto after_2;
    // 0x8002CD38: nop

    after_2:
    // 0x8002CD3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002CD40: sll         $t6, $v0, 24
    ctx->r14 = S32(ctx->r2 << 24);
    // 0x8002CD44: sra         $v0, $t6, 24
    ctx->r2 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8002CD48: jr          $ra
    // 0x8002CD4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8002CD4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002CD50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002CD50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002CD54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002CD58: jal         0x8002C240
    // 0x8002CD5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8002C240(rdram, ctx);
        goto after_0;
    // 0x8002CD5C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8002CD60: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x8002CD64: lhu         $t7, 0x3530($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X3530);
    // 0x8002CD68: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8002CD6C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8002CD70: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8002CD74: sw          $v0, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->r2;
    // 0x8002CD78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002CD7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002CD80: jr          $ra
    // 0x8002CD84: nop

    return;
    // 0x8002CD84: nop

;}
RECOMP_FUNC void func_8002CD88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002CD88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002CD8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002CD90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002CD94: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002CD98: jal         0x8002C1E8
    // 0x8002CD9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002C1E8(rdram, ctx);
        goto after_0;
    // 0x8002CD9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002CDA0: lui         $t0, 0xFF
    ctx->r8 = S32(0XFF << 16);
    // 0x8002CDA4: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8002CDA8: and         $t6, $v0, $t0
    ctx->r14 = ctx->r2 & ctx->r8;
    // 0x8002CDAC: bne         $t6, $zero, L_8002CDEC
    if (ctx->r14 != 0) {
        // 0x8002CDB0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8002CDEC;
    }
    // 0x8002CDB0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8002CDB4: andi        $t7, $v0, 0x8000
    ctx->r15 = ctx->r2 & 0X8000;
    // 0x8002CDB8: beq         $t7, $zero, L_8002CDC8
    if (ctx->r15 == 0) {
        // 0x8002CDBC: lui         $t8, 0x801B
        ctx->r24 = S32(0X801B << 16);
            goto L_8002CDC8;
    }
    // 0x8002CDBC: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x8002CDC0: andi        $v1, $v0, 0x7FFF
    ctx->r3 = ctx->r2 & 0X7FFF;
    // 0x8002CDC4: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_8002CDC8:
    // 0x8002CDC8: lhu         $t8, 0x3530($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X3530);
    // 0x8002CDCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002CDD0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8002CDD4: addu        $a0, $a3, $t9
    ctx->r4 = ADD32(ctx->r7, ctx->r25);
    // 0x8002CDD8: lw          $t1, 0x8($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X8);
    // 0x8002CDDC: nop

    // 0x8002CDE0: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x8002CDE4: b           L_8002CE3C
    // 0x8002CDE8: sw          $t2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r10;
        goto L_8002CE3C;
    // 0x8002CDE8: sw          $t2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r10;
L_8002CDEC:
    // 0x8002CDEC: lw          $t3, 0x8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X8);
    // 0x8002CDF0: sll         $t4, $v1, 24
    ctx->r12 = S32(ctx->r3 << 24);
    // 0x8002CDF4: sra         $t5, $t4, 24
    ctx->r13 = S32(SIGNED(ctx->r12) >> 24);
    // 0x8002CDF8: andi        $a1, $v1, 0xFF00
    ctx->r5 = ctx->r3 & 0XFF00;
    // 0x8002CDFC: srl         $t7, $a1, 8
    ctx->r15 = S32(U32(ctx->r5) >> 8);
    // 0x8002CE00: and         $a2, $v1, $t0
    ctx->r6 = ctx->r3 & ctx->r8;
    // 0x8002CE04: addu        $t6, $t3, $t5
    ctx->r14 = ADD32(ctx->r11, ctx->r13);
    // 0x8002CE08: sw          $t6, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r14;
    // 0x8002CE0C: srl         $t1, $a2, 16
    ctx->r9 = S32(U32(ctx->r6) >> 16);
    // 0x8002CE10: sll         $t8, $t7, 24
    ctx->r24 = S32(ctx->r15 << 24);
    // 0x8002CE14: lw          $a0, 0x4($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X4);
    // 0x8002CE18: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x8002CE1C: sra         $a1, $t8, 24
    ctx->r5 = S32(SIGNED(ctx->r24) >> 24);
    // 0x8002CE20: jal         0x8002AC80
    // 0x8002CE24: andi        $a2, $t1, 0xFF
    ctx->r6 = ctx->r9 & 0XFF;
    func_8002AC80(rdram, ctx);
        goto after_1;
    // 0x8002CE24: andi        $a2, $t1, 0xFF
    ctx->r6 = ctx->r9 & 0XFF;
    after_1:
    // 0x8002CE28: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002CE2C: jal         0x8002AC58
    // 0x8002CE30: nop

    func_8002AC58(rdram, ctx);
        goto after_2;
    // 0x8002CE30: nop

    after_2:
    // 0x8002CE34: sll         $t4, $v0, 24
    ctx->r12 = S32(ctx->r2 << 24);
    // 0x8002CE38: sra         $v0, $t4, 24
    ctx->r2 = S32(SIGNED(ctx->r12) >> 24);
L_8002CE3C:
    // 0x8002CE3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002CE40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002CE44: jr          $ra
    // 0x8002CE48: nop

    return;
    // 0x8002CE48: nop

;}
RECOMP_FUNC void func_8002CE4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002CE4C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8002CE50: lhu         $v0, 0x3530($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3530);
    // 0x8002CE54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002CE58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002CE5C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8002CE60: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x8002CE64: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8002CE68: lw          $t0, 0x4($a1)
    ctx->r8 = MEM_W(ctx->r5, 0X4);
    // 0x8002CE6C: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x8002CE70: addiu       $t9, $t8, 0x3
    ctx->r25 = ADD32(ctx->r24, 0X3);
    // 0x8002CE74: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8002CE78: jal         0x8002CD0C
    // 0x8002CE7C: sw          $t9, 0x64($t2)
    MEM_W(0X64, ctx->r10) = ctx->r25;
    func_8002CD0C(rdram, ctx);
        goto after_0;
    // 0x8002CE7C: sw          $t9, 0x64($t2)
    MEM_W(0X64, ctx->r10) = ctx->r25;
    after_0:
    // 0x8002CE80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002CE84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002CE88: jr          $ra
    // 0x8002CE8C: nop

    return;
    // 0x8002CE8C: nop

;}
RECOMP_FUNC void func_8002CE90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002CE90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002CE94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002CE98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002CE9C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002CEA0: jal         0x8002C2B0
    // 0x8002CEA4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8002C2B0(rdram, ctx);
        goto after_0;
    // 0x8002CEA4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8002CEA8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002CEAC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8002CEB0: lhu         $v0, 0x3530($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X3530);
    // 0x8002CEB4: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x8002CEB8: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8002CEBC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8002CEC0: lw          $t9, 0x64($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X64);
    // 0x8002CEC4: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x8002CEC8: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x8002CECC: jal         0x8002AC58
    // 0x8002CED0: sw          $t9, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r25;
    func_8002AC58(rdram, ctx);
        goto after_1;
    // 0x8002CED0: sw          $t9, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r25;
    after_1:
    // 0x8002CED4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002CED8: sll         $t2, $v0, 24
    ctx->r10 = S32(ctx->r2 << 24);
    // 0x8002CEDC: sra         $v0, $t2, 24
    ctx->r2 = S32(SIGNED(ctx->r10) >> 24);
    // 0x8002CEE0: jr          $ra
    // 0x8002CEE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8002CEE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002CEE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002CEE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002CEEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002CEF0: jal         0x8002CF08
    // 0x8002CEF4: nop

    func_8002CF08(rdram, ctx);
        goto after_0;
    // 0x8002CEF4: nop

    after_0:
    // 0x8002CEF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002CEFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002CF00: jr          $ra
    // 0x8002CF04: nop

    return;
    // 0x8002CF04: nop

;}
RECOMP_FUNC void func_8002CF08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002CF08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002CF0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002CF10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002CF14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002CF18: jal         0x8002C2B0
    // 0x8002CF1C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C2B0(rdram, ctx);
        goto after_0;
    // 0x8002CF1C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002CF20: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002CF24: jal         0x8002C240
    // 0x8002CF28: nop

    func_8002C240(rdram, ctx);
        goto after_1;
    // 0x8002CF28: nop

    after_1:
    // 0x8002CF2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8002CF30: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8002CF34: jalr        $v0
    // 0x8002CF38: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8002CF38: nop

    after_2:
    // 0x8002CF3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002CF40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002CF44: jr          $ra
    // 0x8002CF48: nop

    return;
    // 0x8002CF48: nop

;}
RECOMP_FUNC void func_8002CF4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002CF4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002CF50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002CF54: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8002CF58: sb          $v0, 0x11($a0)
    MEM_B(0X11, ctx->r4) = ctx->r2;
    // 0x8002CF5C: sb          $v0, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r2;
    // 0x8002CF60: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    // 0x8002CF64: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x8002CF68: sb          $zero, 0x3F($a1)
    MEM_B(0X3F, ctx->r5) = 0;
    // 0x8002CF6C: lb          $v0, 0x3F($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X3F);
    // 0x8002CF70: lhu         $t7, 0x1C($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X1C);
    // 0x8002CF74: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8002CF78: andi        $t8, $t7, 0xDFFF
    ctx->r24 = ctx->r15 & 0XDFFF;
    // 0x8002CF7C: sh          $t8, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r24;
    // 0x8002CF80: sb          $v0, 0x3E($a1)
    MEM_B(0X3E, ctx->r5) = ctx->r2;
    // 0x8002CF84: sb          $v0, 0x3D($a1)
    MEM_B(0X3D, ctx->r5) = ctx->r2;
    // 0x8002CF88: jal         0x8002C2B0
    // 0x8002CF8C: sb          $v0, 0x3C($a1)
    MEM_B(0X3C, ctx->r5) = ctx->r2;
    func_8002C2B0(rdram, ctx);
        goto after_0;
    // 0x8002CF8C: sb          $v0, 0x3C($a1)
    MEM_B(0X3C, ctx->r5) = ctx->r2;
    after_0:
    // 0x8002CF90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002CF94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002CF98: jr          $ra
    // 0x8002CF9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002CF9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002CFA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002CFA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002CFA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002CFA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002CFAC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002CFB0: jal         0x8002C188
    // 0x8002CFB4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002CFB4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002CFB8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8002CFBC: nop

    // 0x8002CFC0: sb          $v0, 0xE($t6)
    MEM_B(0XE, ctx->r14) = ctx->r2;
    // 0x8002CFC4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002CFC8: jal         0x8002C188
    // 0x8002CFCC: nop

    func_8002C188(rdram, ctx);
        goto after_1;
    // 0x8002CFCC: nop

    after_1:
    // 0x8002CFD0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8002CFD4: nop

    // 0x8002CFD8: sb          $v0, 0xF($t7)
    MEM_B(0XF, ctx->r15) = ctx->r2;
    // 0x8002CFDC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002CFE0: jal         0x8002C188
    // 0x8002CFE4: nop

    func_8002C188(rdram, ctx);
        goto after_2;
    // 0x8002CFE4: nop

    after_2:
    // 0x8002CFE8: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8002CFEC: nop

    // 0x8002CFF0: sb          $v0, 0x10($t8)
    MEM_B(0X10, ctx->r24) = ctx->r2;
    // 0x8002CFF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002CFF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002CFFC: jr          $ra
    // 0x8002D000: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002D000: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8002D004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D004: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8002D008: addiu       $v0, $v0, 0x1CF0
    ctx->r2 = ADD32(ctx->r2, 0X1CF0);
    // 0x8002D00C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x8002D010: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8002D014: lw          $t9, 0x14($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X14);
    // 0x8002D018: and         $t6, $a0, $at
    ctx->r14 = ctx->r4 & ctx->r1;
    // 0x8002D01C: srl         $t7, $t6, 16
    ctx->r15 = S32(U32(ctx->r14) >> 16);
    // 0x8002D020: sb          $t7, 0xE($t9)
    MEM_B(0XE, ctx->r25) = ctx->r15;
    // 0x8002D024: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x8002D028: andi        $t0, $a0, 0xFF00
    ctx->r8 = ctx->r4 & 0XFF00;
    // 0x8002D02C: lw          $t3, 0x14($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X14);
    // 0x8002D030: srl         $t1, $t0, 8
    ctx->r9 = S32(U32(ctx->r8) >> 8);
    // 0x8002D034: sb          $t1, 0xF($t3)
    MEM_B(0XF, ctx->r11) = ctx->r9;
    // 0x8002D038: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x8002D03C: nop

    // 0x8002D040: lw          $t6, 0x14($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X14);
    // 0x8002D044: jr          $ra
    // 0x8002D048: sb          $a0, 0x10($t6)
    MEM_B(0X10, ctx->r14) = ctx->r4;
    return;
    // 0x8002D048: sb          $a0, 0x10($t6)
    MEM_B(0X10, ctx->r14) = ctx->r4;
;}
RECOMP_FUNC void func_8002D04C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D04C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002D050: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002D054: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8002D058: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002D05C: jal         0x8002C188
    // 0x8002D060: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8002C188(rdram, ctx);
        goto after_0;
    // 0x8002D060: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8002D064: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8002D068: nop

    // 0x8002D06C: sb          $v0, 0x11($t6)
    MEM_B(0X11, ctx->r14) = ctx->r2;
    // 0x8002D070: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002D074: jal         0x8002C2D8
    // 0x8002D078: nop

    func_8002C2D8(rdram, ctx);
        goto after_1;
    // 0x8002D078: nop

    after_1:
    // 0x8002D07C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002D080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002D084: jr          $ra
    // 0x8002D088: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8002D088: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
