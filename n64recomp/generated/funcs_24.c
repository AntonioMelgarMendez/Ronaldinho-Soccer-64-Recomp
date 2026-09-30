#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8004BDA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BDA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004BDA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BDA8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004BDAC: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x8004BDB0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8004BDB4: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x8004BDB8: addiu       $t8, $zero, 0x210
    ctx->r24 = ADD32(0, 0X210);
    // 0x8004BDBC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8004BDC0: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    // 0x8004BDC4: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x8004BDC8: sh          $t8, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r24;
    // 0x8004BDCC: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x8004BDD0: lbu         $a2, -0x6CF4($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X6CF4);
    // 0x8004BDD4: jal         0x8002135C
    // 0x8004BDD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x8004BDD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8004BDDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BDE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004BDE4: jr          $ra
    // 0x8004BDE8: nop

    return;
    // 0x8004BDE8: nop

;}
RECOMP_FUNC void func_8004BDEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BDEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004BDF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BDF4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004BDF8: lui         $t8, 0x803D
    ctx->r24 = S32(0X803D << 16);
    // 0x8004BDFC: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x8004BE00: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8004BE04: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x8004BE08: addiu       $t8, $t8, -0x7280
    ctx->r24 = ADD32(ctx->r24, -0X7280);
    // 0x8004BE0C: addiu       $t9, $zero, 0x139
    ctx->r25 = ADD32(0, 0X139);
    // 0x8004BE10: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8004BE14: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    // 0x8004BE18: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x8004BE1C: sw          $t8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r24;
    // 0x8004BE20: sh          $t9, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r25;
    // 0x8004BE24: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x8004BE28: lbu         $a2, -0x6CF4($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X6CF4);
    // 0x8004BE2C: jal         0x8002135C
    // 0x8004BE30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x8004BE30: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8004BE34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BE38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004BE3C: jr          $ra
    // 0x8004BE40: nop

    return;
    // 0x8004BE40: nop

;}
RECOMP_FUNC void func_8004BE44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BE44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004BE48: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004BE4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BE50: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8004BE54: jal         0x80029354
    // 0x8004BE58: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x8004BE58: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x8004BE5C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8004BE60: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8004BE64: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x8004BE68: jal         0x8004BE80
    // 0x8004BE6C: nop

    func_8004BE80(rdram, ctx);
        goto after_1;
    // 0x8004BE6C: nop

    after_1:
    // 0x8004BE70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BE74: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8004BE78: jr          $ra
    // 0x8004BE7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8004BE7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004BE80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BE80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004BE84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BE88: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004BE8C: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x8004BE90: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8004BE94: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x8004BE98: sll         $t8, $a3, 1
    ctx->r24 = S32(ctx->r7 << 1);
    // 0x8004BE9C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8004BEA0: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    // 0x8004BEA4: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x8004BEA8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8004BEAC: lhu         $t9, -0x6CEC($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X6CEC);
    // 0x8004BEB0: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8004BEB4: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x8004BEB8: sh          $t9, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r25;
    // 0x8004BEBC: lbu         $a2, -0x6CF4($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X6CF4);
    // 0x8004BEC0: jal         0x8002135C
    // 0x8004BEC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x8004BEC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8004BEC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BECC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004BED0: jr          $ra
    // 0x8004BED4: nop

    return;
    // 0x8004BED4: nop

;}
RECOMP_FUNC void func_8004BED8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BED8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004BEDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BEE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004BEE4: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x8004BEE8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8004BEEC: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x8004BEF0: sll         $t8, $a3, 1
    ctx->r24 = S32(ctx->r7 << 1);
    // 0x8004BEF4: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8004BEF8: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    // 0x8004BEFC: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x8004BF00: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8004BF04: lhu         $t9, -0x6CE8($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X6CE8);
    // 0x8004BF08: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8004BF0C: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x8004BF10: sh          $t9, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r25;
    // 0x8004BF14: lbu         $a2, -0x6CF4($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X6CF4);
    // 0x8004BF18: jal         0x8002135C
    // 0x8004BF1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x8004BF1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8004BF20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BF24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004BF28: jr          $ra
    // 0x8004BF2C: nop

    return;
    // 0x8004BF2C: nop

;}
RECOMP_FUNC void func_8004BF30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BF30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004BF34: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004BF38: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8004BF3C: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8004BF40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BF44: jal         0x8004BF74
    // 0x8004BF48: sb          $a0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r4;
    func_8004BF74(rdram, ctx);
        goto after_0;
    // 0x8004BF48: sb          $a0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r4;
    after_0:
    // 0x8004BF4C: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x8004BF50: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8004BF54: lb          $a0, 0x1F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1F);
    // 0x8004BF58: sb          $v0, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r2;
    // 0x8004BF5C: jal         0x8004C160
    // 0x8004BF60: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8004C160(rdram, ctx);
        goto after_1;
    // 0x8004BF60: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_1:
    // 0x8004BF64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BF68: lb          $v0, 0x23($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X23);
    // 0x8004BF6C: jr          $ra
    // 0x8004BF70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8004BF70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004BF74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BF74: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8004BF78: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8004BF7C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8004BF80: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8004BF84: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8004BF88: addu        $v0, $a1, $t8
    ctx->r2 = ADD32(ctx->r5, ctx->r24);
    // 0x8004BF8C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_8004BF90:
    // 0x8004BF90: lb          $a0, 0x1($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X1);
    // 0x8004BF94: nop

    // 0x8004BF98: multu       $a0, $v1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004BF9C: mflo        $t9
    ctx->r25 = lo;
    // 0x8004BFA0: addu        $v0, $a1, $t9
    ctx->r2 = ADD32(ctx->r5, ctx->r25);
    // 0x8004BFA4: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x8004BFA8: nop

    // 0x8004BFAC: beq         $t0, $zero, L_8004BF90
    if (ctx->r8 == 0) {
        // 0x8004BFB0: nop
    
            goto L_8004BF90;
    }
    // 0x8004BFB0: nop

    // 0x8004BFB4: jr          $ra
    // 0x8004BFB8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8004BFB8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_8004BFBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BFBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004BFC0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004BFC4: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8004BFC8: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8004BFCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BFD0: jal         0x8004C000
    // 0x8004BFD4: sb          $a0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r4;
    func_8004C000(rdram, ctx);
        goto after_0;
    // 0x8004BFD4: sb          $a0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r4;
    after_0:
    // 0x8004BFD8: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x8004BFDC: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8004BFE0: lb          $a0, 0x1F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1F);
    // 0x8004BFE4: sb          $v0, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r2;
    // 0x8004BFE8: jal         0x8004C160
    // 0x8004BFEC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8004C160(rdram, ctx);
        goto after_1;
    // 0x8004BFEC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_1:
    // 0x8004BFF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BFF4: lb          $v0, 0x23($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X23);
    // 0x8004BFF8: jr          $ra
    // 0x8004BFFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8004BFFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004C000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C000: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8004C004: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8004C008: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8004C00C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8004C010: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8004C014: addu        $v0, $a1, $t8
    ctx->r2 = ADD32(ctx->r5, ctx->r24);
    // 0x8004C018: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_8004C01C:
    // 0x8004C01C: lb          $a0, 0x2($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X2);
    // 0x8004C020: nop

    // 0x8004C024: multu       $a0, $v1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004C028: mflo        $t9
    ctx->r25 = lo;
    // 0x8004C02C: addu        $v0, $a1, $t9
    ctx->r2 = ADD32(ctx->r5, ctx->r25);
    // 0x8004C030: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x8004C034: nop

    // 0x8004C038: beq         $t0, $zero, L_8004C01C
    if (ctx->r8 == 0) {
        // 0x8004C03C: nop
    
            goto L_8004C01C;
    }
    // 0x8004C03C: nop

    // 0x8004C040: jr          $ra
    // 0x8004C044: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8004C044: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_8004C048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C048: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004C04C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004C050: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8004C054: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8004C058: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C05C: jal         0x8004C08C
    // 0x8004C060: sb          $a0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r4;
    func_8004C08C(rdram, ctx);
        goto after_0;
    // 0x8004C060: sb          $a0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r4;
    after_0:
    // 0x8004C064: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x8004C068: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8004C06C: lb          $a0, 0x1F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1F);
    // 0x8004C070: sb          $v0, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r2;
    // 0x8004C074: jal         0x8004C160
    // 0x8004C078: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8004C160(rdram, ctx);
        goto after_1;
    // 0x8004C078: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_1:
    // 0x8004C07C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C080: lb          $v0, 0x23($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X23);
    // 0x8004C084: jr          $ra
    // 0x8004C088: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8004C088: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004C08C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C08C: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8004C090: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8004C094: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8004C098: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8004C09C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8004C0A0: addu        $v0, $a1, $t8
    ctx->r2 = ADD32(ctx->r5, ctx->r24);
    // 0x8004C0A4: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_8004C0A8:
    // 0x8004C0A8: lb          $a0, 0x3($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X3);
    // 0x8004C0AC: nop

    // 0x8004C0B0: multu       $a0, $v1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004C0B4: mflo        $t9
    ctx->r25 = lo;
    // 0x8004C0B8: addu        $v0, $a1, $t9
    ctx->r2 = ADD32(ctx->r5, ctx->r25);
    // 0x8004C0BC: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x8004C0C0: nop

    // 0x8004C0C4: beq         $t0, $zero, L_8004C0A8
    if (ctx->r8 == 0) {
        // 0x8004C0C8: nop
    
            goto L_8004C0A8;
    }
    // 0x8004C0C8: nop

    // 0x8004C0CC: jr          $ra
    // 0x8004C0D0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8004C0D0: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_8004C0D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C0D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004C0D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004C0DC: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8004C0E0: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8004C0E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C0E8: jal         0x8004C118
    // 0x8004C0EC: sb          $a0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r4;
    func_8004C118(rdram, ctx);
        goto after_0;
    // 0x8004C0EC: sb          $a0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r4;
    after_0:
    // 0x8004C0F0: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x8004C0F4: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8004C0F8: lb          $a0, 0x1F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1F);
    // 0x8004C0FC: sb          $v0, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r2;
    // 0x8004C100: jal         0x8004C160
    // 0x8004C104: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8004C160(rdram, ctx);
        goto after_1;
    // 0x8004C104: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_1:
    // 0x8004C108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C10C: lb          $v0, 0x23($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X23);
    // 0x8004C110: jr          $ra
    // 0x8004C114: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8004C114: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004C118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C118: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8004C11C: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8004C120: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8004C124: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8004C128: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8004C12C: addu        $v0, $a1, $t8
    ctx->r2 = ADD32(ctx->r5, ctx->r24);
    // 0x8004C130: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_8004C134:
    // 0x8004C134: lb          $a0, 0x4($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X4);
    // 0x8004C138: nop

    // 0x8004C13C: multu       $a0, $v1
    result = U64(U32(ctx->r4)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004C140: mflo        $t9
    ctx->r25 = lo;
    // 0x8004C144: addu        $v0, $a1, $t9
    ctx->r2 = ADD32(ctx->r5, ctx->r25);
    // 0x8004C148: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x8004C14C: nop

    // 0x8004C150: beq         $t0, $zero, L_8004C134
    if (ctx->r8 == 0) {
        // 0x8004C154: nop
    
            goto L_8004C134;
    }
    // 0x8004C154: nop

    // 0x8004C158: jr          $ra
    // 0x8004C15C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x8004C15C: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_8004C160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C160: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004C164: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8004C168: sll         $t8, $a1, 24
    ctx->r24 = S32(ctx->r5 << 24);
    // 0x8004C16C: sra         $t9, $t8, 24
    ctx->r25 = S32(SIGNED(ctx->r24) >> 24);
    // 0x8004C170: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8004C174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C178: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004C17C: beq         $t7, $t9, L_8004C18C
    if (ctx->r15 == ctx->r25) {
        // 0x8004C180: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8004C18C;
    }
    // 0x8004C180: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004C184: jal         0x80035734
    // 0x8004C188: nop

    func_80035734(rdram, ctx);
        goto after_0;
    // 0x8004C188: nop

    after_0:
L_8004C18C:
    // 0x8004C18C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C190: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004C194: jr          $ra
    // 0x8004C198: nop

    return;
    // 0x8004C198: nop

;}
RECOMP_FUNC void func_8004C19C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C19C: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x8004C1A0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8004C1A4: blez        $v1, L_8004C1E8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8004C1A8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004C1E8;
    }
    // 0x8004C1A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004C1AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8004C1B0: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
L_8004C1B4:
    // 0x8004C1B4: multu       $v0, $a3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004C1B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8004C1BC: mflo        $t7
    ctx->r15 = lo;
    // 0x8004C1C0: addu        $a1, $a0, $t7
    ctx->r5 = ADD32(ctx->r4, ctx->r15);
    // 0x8004C1C4: sb          $a2, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r6;
    // 0x8004C1C8: sb          $a2, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r6;
    // 0x8004C1CC: sb          $a2, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r6;
    // 0x8004C1D0: sb          $a2, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r6;
    // 0x8004C1D4: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x8004C1D8: slt         $at, $a2, $v1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8004C1DC: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x8004C1E0: bne         $at, $zero, L_8004C1B4
    if (ctx->r1 != 0) {
        // 0x8004C1E4: sb          $zero, 0x0($a1)
        MEM_B(0X0, ctx->r5) = 0;
            goto L_8004C1B4;
    }
    // 0x8004C1E4: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_8004C1E8:
    // 0x8004C1E8: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x8004C1EC: addu        $t0, $t0, $v1
    ctx->r8 = ADD32(ctx->r8, ctx->r3);
    // 0x8004C1F0: addu        $t1, $a0, $t0
    ctx->r9 = ADD32(ctx->r4, ctx->r8);
    // 0x8004C1F4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8004C1F8: jr          $ra
    // 0x8004C1FC: sb          $t9, -0x5($t1)
    MEM_B(-0X5, ctx->r9) = ctx->r25;
    return;
    // 0x8004C1FC: sb          $t9, -0x5($t1)
    MEM_B(-0X5, ctx->r9) = ctx->r25;
;}
RECOMP_FUNC void func_8004C200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C200: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x8004C204: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8004C208: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8004C20C: blez        $v1, L_8004C270
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8004C210: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004C270;
    }
    // 0x8004C210: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004C214: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
L_8004C218:
    // 0x8004C218: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004C21C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8004C220: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x8004C224: slt         $at, $t4, $v1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8004C228: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x8004C22C: mflo        $a0
    ctx->r4 = lo;
    // 0x8004C230: addu        $t0, $a3, $a0
    ctx->r8 = ADD32(ctx->r7, ctx->r4);
    // 0x8004C234: lbu         $t7, 0x0($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X0);
    // 0x8004C238: addu        $a2, $a1, $a0
    ctx->r6 = ADD32(ctx->r5, ctx->r4);
    // 0x8004C23C: sb          $t7, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r15;
    // 0x8004C240: lb          $t8, 0x1($t0)
    ctx->r24 = MEM_B(ctx->r8, 0X1);
    // 0x8004C244: nop

    // 0x8004C248: sb          $t8, 0x1($a2)
    MEM_B(0X1, ctx->r6) = ctx->r24;
    // 0x8004C24C: lb          $t9, 0x2($t0)
    ctx->r25 = MEM_B(ctx->r8, 0X2);
    // 0x8004C250: nop

    // 0x8004C254: sb          $t9, 0x2($a2)
    MEM_B(0X2, ctx->r6) = ctx->r25;
    // 0x8004C258: lb          $t2, 0x3($t0)
    ctx->r10 = MEM_B(ctx->r8, 0X3);
    // 0x8004C25C: nop

    // 0x8004C260: sb          $t2, 0x3($a2)
    MEM_B(0X3, ctx->r6) = ctx->r10;
    // 0x8004C264: lb          $t3, 0x4($t0)
    ctx->r11 = MEM_B(ctx->r8, 0X4);
    // 0x8004C268: bne         $at, $zero, L_8004C218
    if (ctx->r1 != 0) {
        // 0x8004C26C: sb          $t3, 0x4($a2)
        MEM_B(0X4, ctx->r6) = ctx->r11;
            goto L_8004C218;
    }
    // 0x8004C26C: sb          $t3, 0x4($a2)
    MEM_B(0X4, ctx->r6) = ctx->r11;
L_8004C270:
    // 0x8004C270: jr          $ra
    // 0x8004C274: nop

    return;
    // 0x8004C274: nop

;}
RECOMP_FUNC void func_8004C278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C278: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x8004C27C: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8004C280: addiu       $v1, $t7, 0x1
    ctx->r3 = ADD32(ctx->r15, 0X1);
    // 0x8004C284: slt         $at, $t6, $v1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8004C288: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8004C28C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8004C290: beq         $at, $zero, L_8004C2C0
    if (ctx->r1 == 0) {
        // 0x8004C294: andi        $v0, $t6, 0xFF
        ctx->r2 = ctx->r14 & 0XFF;
            goto L_8004C2C0;
    }
    // 0x8004C294: andi        $v0, $t6, 0xFF
    ctx->r2 = ctx->r14 & 0XFF;
    // 0x8004C298: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
L_8004C29C:
    // 0x8004C29C: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004C2A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8004C2A4: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x8004C2A8: slt         $at, $t0, $v1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8004C2AC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x8004C2B0: mflo        $t8
    ctx->r24 = lo;
    // 0x8004C2B4: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x8004C2B8: bne         $at, $zero, L_8004C29C
    if (ctx->r1 != 0) {
        // 0x8004C2BC: sb          $zero, 0x0($t9)
        MEM_B(0X0, ctx->r25) = 0;
            goto L_8004C29C;
    }
    // 0x8004C2BC: sb          $zero, 0x0($t9)
    MEM_B(0X0, ctx->r25) = 0;
L_8004C2C0:
    // 0x8004C2C0: jr          $ra
    // 0x8004C2C4: nop

    return;
    // 0x8004C2C4: nop

;}
RECOMP_FUNC void func_8004C2C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C2C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004C2CC: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8004C2D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C2D4: beq         $t6, $zero, L_8004C2F0
    if (ctx->r14 == 0) {
        // 0x8004C2D8: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_8004C2F0;
    }
    // 0x8004C2D8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004C2DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8004C2E0: beq         $t6, $at, L_8004C300
    if (ctx->r14 == ctx->r1) {
        // 0x8004C2E4: nop
    
            goto L_8004C300;
    }
    // 0x8004C2E4: nop

    // 0x8004C2E8: b           L_8004C310
    // 0x8004C2EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8004C310;
    // 0x8004C2EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004C2F0:
    // 0x8004C2F0: jal         0x8004C31C
    // 0x8004C2F4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8004C31C(rdram, ctx);
        goto after_0;
    // 0x8004C2F4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8004C2F8: b           L_8004C30C
    // 0x8004C2FC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
        goto L_8004C30C;
    // 0x8004C2FC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
L_8004C300:
    // 0x8004C300: jal         0x8004C364
    // 0x8004C304: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_8004C364(rdram, ctx);
        goto after_1;
    // 0x8004C304: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_1:
    // 0x8004C308: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
L_8004C30C:
    // 0x8004C30C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004C310:
    // 0x8004C310: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8004C314: jr          $ra
    // 0x8004C318: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8004C318: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004C31C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C31C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8004C320: lb          $t6, -0x3088($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X3088);
    // 0x8004C324: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004C328: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8004C32C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C330: bne         $t6, $at, L_8004C348
    if (ctx->r14 != ctx->r1) {
        // 0x8004C334: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_8004C348;
    }
    // 0x8004C334: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8004C338: jal         0x8004C3C8
    // 0x8004C33C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8004C3C8(rdram, ctx);
        goto after_0;
    // 0x8004C33C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x8004C340: b           L_8004C354
    // 0x8004C344: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004C354;
    // 0x8004C344: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004C348:
    // 0x8004C348: jal         0x8004C3C8
    // 0x8004C34C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8004C3C8(rdram, ctx);
        goto after_1;
    // 0x8004C34C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8004C350: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004C354:
    // 0x8004C354: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C358: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004C35C: jr          $ra
    // 0x8004C360: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8004C360: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8004C364(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C364: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8004C368: lbu         $t6, -0x3088($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3088);
    // 0x8004C36C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004C370: sltiu       $at, $t6, 0x9
    ctx->r1 = ctx->r14 < 0X9 ? 1 : 0;
    // 0x8004C374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C378: beq         $at, $zero, L_8004C3AC
    if (ctx->r1 == 0) {
        // 0x8004C37C: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_8004C3AC;
    }
    // 0x8004C37C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x8004C380: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8004C384: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004C388: addu        $at, $at, $t6
    gpr jr_addend_8004C394 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8004C38C: lw          $t6, 0x7C50($at)
    ctx->r14 = ADD32(ctx->r1, 0X7C50);
    // 0x8004C390: nop

    // 0x8004C394: jr          $t6
    // 0x8004C398: nop

    switch (jr_addend_8004C394 >> 2) {
        case 0: goto L_8004C39C; break;
        case 1: goto L_8004C39C; break;
        case 2: goto L_8004C39C; break;
        case 3: goto L_8004C39C; break;
        case 4: goto L_8004C3AC; break;
        case 5: goto L_8004C3AC; break;
        case 6: goto L_8004C3AC; break;
        case 7: goto L_8004C3AC; break;
        case 8: goto L_8004C39C; break;
        default: switch_error(__func__, 0x8004C394, 0x800D7C50);
    }
    // 0x8004C398: nop

L_8004C39C:
    // 0x8004C39C: jal         0x8004C3C8
    // 0x8004C3A0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8004C3C8(rdram, ctx);
        goto after_0;
    // 0x8004C3A0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x8004C3A4: b           L_8004C3B8
    // 0x8004C3A8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8004C3B8;
    // 0x8004C3A8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004C3AC:
    // 0x8004C3AC: jal         0x8004C3C8
    // 0x8004C3B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8004C3C8(rdram, ctx);
        goto after_1;
    // 0x8004C3B0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8004C3B4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8004C3B8:
    // 0x8004C3B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C3BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004C3C0: jr          $ra
    // 0x8004C3C4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8004C3C4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8004C3C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C3C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004C3CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004C3D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C3D4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8004C3D8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8004C3DC: jal         0x80029354
    // 0x8004C3E0: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x8004C3E0: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x8004C3E4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8004C3E8: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8004C3EC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8004C3F0: nop

    // 0x8004C3F4: sw          $t6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r14;
    // 0x8004C3F8: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x8004C3FC: jal         0x8004C414
    // 0x8004C400: nop

    func_8004C414(rdram, ctx);
        goto after_1;
    // 0x8004C400: nop

    after_1:
    // 0x8004C404: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C408: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8004C40C: jr          $ra
    // 0x8004C410: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8004C410: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004C414(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C414: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004C418: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C41C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004C420: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x8004C424: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8004C428: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8004C42C: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x8004C430: addiu       $t9, $t9, -0x6AB8
    ctx->r25 = ADD32(ctx->r25, -0X6AB8);
    // 0x8004C434: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x8004C438: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    // 0x8004C43C: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x8004C440: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8004C444: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x8004C448: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8004C44C: sh          $t0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r8;
    // 0x8004C450: lbu         $a2, 0x2($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X2);
    // 0x8004C454: jal         0x8002135C
    // 0x8004C458: nop

    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x8004C458: nop

    after_0:
    // 0x8004C45C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C460: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004C464: jr          $ra
    // 0x8004C468: nop

    return;
    // 0x8004C468: nop

;}
RECOMP_FUNC void func_8004C46C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C46C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004C470: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004C474: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004C478: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C47C: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    // 0x8004C480: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8004C484: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8004C488: jal         0x8004D684
    // 0x8004C48C: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    func_8004D684(rdram, ctx);
        goto after_0;
    // 0x8004C48C: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    after_0:
    // 0x8004C490: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004C494: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8004C498: jal         0x8004C578
    // 0x8004C49C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    func_8004C578(rdram, ctx);
        goto after_1;
    // 0x8004C49C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_1:
    // 0x8004C4A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C4A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004C4A8: jr          $ra
    // 0x8004C4AC: nop

    return;
    // 0x8004C4AC: nop

;}
RECOMP_FUNC void func_8004C4B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C4B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004C4B4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8004C4B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004C4BC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8004C4C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C4C4: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x8004C4C8: lbu         $a0, 0x27($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X27);
    // 0x8004C4CC: jal         0x8004D684
    // 0x8004C4D0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_8004D684(rdram, ctx);
        goto after_0;
    // 0x8004C4D0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x8004C4D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8004C4D8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8004C4DC: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x8004C4E0: jal         0x8004C578
    // 0x8004C4E4: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    func_8004C578(rdram, ctx);
        goto after_1;
    // 0x8004C4E4: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_1:
    // 0x8004C4E8: lbu         $a0, 0x27($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X27);
    // 0x8004C4EC: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x8004C4F0: jal         0x8004D808
    // 0x8004C4F4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8004D808(rdram, ctx);
        goto after_2;
    // 0x8004C4F4: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_2:
    // 0x8004C4F8: bne         $v0, $zero, L_8004C538
    if (ctx->r2 != 0) {
        // 0x8004C4FC: lbu         $t6, 0x1F($sp)
        ctx->r14 = MEM_BU(ctx->r29, 0X1F);
            goto L_8004C538;
    }
    // 0x8004C4FC: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x8004C500: lbu         $a0, 0x27($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X27);
    // 0x8004C504: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x8004C508: jal         0x8004D808
    // 0x8004C50C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8004D808(rdram, ctx);
        goto after_3;
    // 0x8004C50C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_3:
    // 0x8004C510: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8004C514: beq         $at, $zero, L_8004C538
    if (ctx->r1 == 0) {
        // 0x8004C518: lbu         $t6, 0x1F($sp)
        ctx->r14 = MEM_BU(ctx->r29, 0X1F);
            goto L_8004C538;
    }
    // 0x8004C518: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x8004C51C: lbu         $a0, 0x27($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X27);
    // 0x8004C520: lbu         $a1, 0x2B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X2B);
    // 0x8004C524: jal         0x8004D808
    // 0x8004C528: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8004D808(rdram, ctx);
        goto after_4;
    // 0x8004C528: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_4:
    // 0x8004C52C: beq         $v0, $zero, L_8004C56C
    if (ctx->r2 == 0) {
        // 0x8004C530: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8004C56C;
    }
    // 0x8004C530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C534: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
L_8004C538:
    // 0x8004C538: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8004C53C: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x8004C540: bne         $at, $zero, L_8004C560
    if (ctx->r1 != 0) {
        // 0x8004C544: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8004C560;
    }
    // 0x8004C544: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8004C548: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8004C54C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8004C550: jal         0x8002135C
    // 0x8004C554: addiu       $a2, $zero, 0xCF
    ctx->r6 = ADD32(0, 0XCF);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x8004C554: addiu       $a2, $zero, 0xCF
    ctx->r6 = ADD32(0, 0XCF);
    after_5:
    // 0x8004C558: b           L_8004C56C
    // 0x8004C55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8004C56C;
    // 0x8004C55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004C560:
    // 0x8004C560: jal         0x8002135C
    // 0x8004C564: addiu       $a2, $zero, 0xCE
    ctx->r6 = ADD32(0, 0XCE);
    func_8002135C(rdram, ctx);
        goto after_6;
    // 0x8004C564: addiu       $a2, $zero, 0xCE
    ctx->r6 = ADD32(0, 0XCE);
    after_6:
    // 0x8004C568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004C56C:
    // 0x8004C56C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8004C570: jr          $ra
    // 0x8004C574: nop

    return;
    // 0x8004C574: nop

;}
RECOMP_FUNC void func_8004C578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C578: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004C57C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C580: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004C584: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8004C588: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x8004C58C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8004C590: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x8004C594: sll         $t8, $a3, 1
    ctx->r24 = S32(ctx->r7 << 1);
    // 0x8004C598: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8004C59C: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    // 0x8004C5A0: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x8004C5A4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8004C5A8: lhu         $t9, -0x6B14($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X6B14);
    // 0x8004C5AC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8004C5B0: sh          $t9, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r25;
    // 0x8004C5B4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8004C5B8: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x8004C5BC: sw          $t0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r8;
    // 0x8004C5C0: lbu         $a2, -0x6B04($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X6B04);
    // 0x8004C5C4: jal         0x8002135C
    // 0x8004C5C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x8004C5C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8004C5CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C5D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004C5D4: jr          $ra
    // 0x8004C5D8: nop

    return;
    // 0x8004C5D8: nop

;}
RECOMP_FUNC void func_8004C5DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C5DC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8004C5E0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8004C5E4: lbu         $s3, 0x57($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X57);
    // 0x8004C5E8: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8004C5EC: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8004C5F0: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8004C5F4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8004C5F8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8004C5FC: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8004C600: andi        $s6, $a0, 0xFF
    ctx->r22 = ctx->r4 & 0XFF;
    // 0x8004C604: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x8004C608: or          $fp, $a3, $zero
    ctx->r30 = ctx->r7 | 0;
    // 0x8004C60C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8004C610: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8004C614: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8004C618: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8004C61C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8004C620: blez        $s3, L_8004C684
    if (SIGNED(ctx->r19) <= 0) {
        // 0x8004C624: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8004C684;
    }
    // 0x8004C624: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8004C628: lbu         $s4, 0x53($sp)
    ctx->r20 = MEM_BU(ctx->r29, 0X53);
    // 0x8004C62C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8004C630: sll         $s5, $s4, 2
    ctx->r21 = S32(ctx->r20 << 2);
L_8004C634:
    // 0x8004C634: addu        $a2, $s0, $s4
    ctx->r6 = ADD32(ctx->r16, ctx->r20);
    // 0x8004C638: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x8004C63C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8004C640: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8004C644: andi        $a1, $s6, 0xFF
    ctx->r5 = ctx->r22 & 0XFF;
    // 0x8004C648: jal         0x8004C4B0
    // 0x8004C64C: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    func_8004C4B0(rdram, ctx);
        goto after_0;
    // 0x8004C64C: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    after_0:
    // 0x8004C650: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x8004C654: addu        $t8, $fp, $t7
    ctx->r24 = ADD32(ctx->r30, ctx->r15);
    // 0x8004C658: addu        $v0, $t8, $s5
    ctx->r2 = ADD32(ctx->r24, ctx->r21);
    // 0x8004C65C: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x8004C660: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x8004C664: jal         0x8004CD44
    // 0x8004C668: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x8004C668: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x8004C66C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8004C670: andi        $s0, $s2, 0xFF
    ctx->r16 = ctx->r18 & 0XFF;
    // 0x8004C674: slt         $at, $s0, $s3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8004C678: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x8004C67C: bne         $at, $zero, L_8004C634
    if (ctx->r1 != 0) {
        // 0x8004C680: or          $s2, $s0, $zero
        ctx->r18 = ctx->r16 | 0;
            goto L_8004C634;
    }
    // 0x8004C680: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
L_8004C684:
    // 0x8004C684: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8004C688: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8004C68C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8004C690: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8004C694: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8004C698: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8004C69C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8004C6A0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8004C6A4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8004C6A8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8004C6AC: jr          $ra
    // 0x8004C6B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8004C6B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8004C6B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C6B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004C6B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004C6BC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8004C6C0: sll         $a1, $a3, 16
    ctx->r5 = S32(ctx->r7 << 16);
    // 0x8004C6C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C6C8: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8004C6CC: lh          $a2, 0x2A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2A);
    // 0x8004C6D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004C6D4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8004C6D8: jal         0x8004CD44
    // 0x8004C6DC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x8004C6DC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_0:
    // 0x8004C6E0: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    // 0x8004C6E4: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x8004C6E8: jal         0x8004C714
    // 0x8004C6EC: nop

    func_8004C714(rdram, ctx);
        goto after_1;
    // 0x8004C6EC: nop

    after_1:
    // 0x8004C6F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004C6F4: lui         $a2, 0x803D
    ctx->r6 = S32(0X803D << 16);
    // 0x8004C6F8: addiu       $a2, $a2, 0x23D8
    ctx->r6 = ADD32(ctx->r6, 0X23D8);
    // 0x8004C6FC: jal         0x8004C578
    // 0x8004C700: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    func_8004C578(rdram, ctx);
        goto after_2;
    // 0x8004C700: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_2:
    // 0x8004C704: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C708: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004C70C: jr          $ra
    // 0x8004C710: nop

    return;
    // 0x8004C710: nop

;}
RECOMP_FUNC void func_8004C714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C714: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004C718: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8004C71C: andi        $a2, $a1, 0xFF
    ctx->r6 = ctx->r5 & 0XFF;
    // 0x8004C720: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004C724: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8004C728: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x8004C72C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8004C730: addu        $a1, $a1, $t8
    ctx->r5 = ADD32(ctx->r5, ctx->r24);
    // 0x8004C734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C738: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004C73C: lbu         $a1, -0x436C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X436C);
    // 0x8004C740: jal         0x8006F274
    // 0x8004C744: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8006F274(rdram, ctx);
        goto after_0;
    // 0x8004C744: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x8004C748: lbu         $t9, 0x18($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X18);
    // 0x8004C74C: jal         0x8004D710
    // 0x8004C750: andi        $a0, $t9, 0xF
    ctx->r4 = ctx->r25 & 0XF;
    func_8004D710(rdram, ctx);
        goto after_1;
    // 0x8004C750: andi        $a0, $t9, 0xF
    ctx->r4 = ctx->r25 & 0XF;
    after_1:
    // 0x8004C754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004C75C: jr          $ra
    // 0x8004C760: nop

    return;
    // 0x8004C760: nop

;}
RECOMP_FUNC void func_8004C764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C764: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004C768: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C76C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004C770: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8004C774: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x8004C778: addiu       $t8, $zero, 0x263
    ctx->r24 = ADD32(0, 0X263);
    // 0x8004C77C: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    // 0x8004C780: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x8004C784: sh          $t8, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r24;
    // 0x8004C788: lbu         $t9, 0x1F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1F);
    // 0x8004C78C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8004C790: addu        $a2, $a2, $t9
    ctx->r6 = ADD32(ctx->r6, ctx->r25);
    // 0x8004C794: lbu         $a2, -0x6AE8($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X6AE8);
    // 0x8004C798: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004C79C: jal         0x8002135C
    // 0x8004C7A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x8004C7A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8004C7A4: lbu         $t0, 0x1F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1F);
    // 0x8004C7A8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8004C7AC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8004C7B0: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x8004C7B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004C7B8: lw          $v0, -0x6AFC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6AFC);
    // 0x8004C7BC: nop

    // 0x8004C7C0: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
    // 0x8004C7C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C7C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004C7CC: jr          $ra
    // 0x8004C7D0: nop

    return;
    // 0x8004C7D0: nop

;}
RECOMP_FUNC void func_8004C7D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C7D4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8004C7D8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8004C7DC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8004C7E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8004C7E4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8004C7E8: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8004C7EC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8004C7F0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8004C7F4: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x8004C7F8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8004C7FC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8004C800: jal         0x8004D474
    // 0x8004C804: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8004D474(rdram, ctx);
        goto after_0;
    // 0x8004C804: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8004C808: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x8004C80C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8004C810: beq         $s1, $s3, L_8004C870
    if (ctx->r17 == ctx->r19) {
        // 0x8004C814: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8004C870;
    }
    // 0x8004C814: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8004C818: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x8004C81C: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x8004C820: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8004C824: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8004C828: addiu       $t8, $t8, -0x6AA4
    ctx->r24 = ADD32(ctx->r24, -0X6AA4);
    // 0x8004C82C: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x8004C830: addu        $s2, $t7, $t8
    ctx->r18 = ADD32(ctx->r15, ctx->r24);
L_8004C834:
    // 0x8004C834: addu        $t9, $s2, $s0
    ctx->r25 = ADD32(ctx->r18, ctx->r16);
    // 0x8004C838: lbu         $a1, 0x0($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X0);
    // 0x8004C83C: jal         0x8004C764
    // 0x8004C840: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8004C764(rdram, ctx);
        goto after_1;
    // 0x8004C840: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x8004C844: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x8004C848: addu        $v0, $s4, $t0
    ctx->r2 = ADD32(ctx->r20, ctx->r8);
    // 0x8004C84C: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x8004C850: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x8004C854: jal         0x8004CD44
    // 0x8004C858: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x8004C858: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x8004C85C: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x8004C860: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8004C864: andi        $t1, $s0, 0xFF
    ctx->r9 = ctx->r16 & 0XFF;
    // 0x8004C868: bne         $s1, $s3, L_8004C834
    if (ctx->r17 != ctx->r19) {
        // 0x8004C86C: or          $s0, $t1, $zero
        ctx->r16 = ctx->r9 | 0;
            goto L_8004C834;
    }
    // 0x8004C86C: or          $s0, $t1, $zero
    ctx->r16 = ctx->r9 | 0;
L_8004C870:
    // 0x8004C870: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8004C874: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8004C878: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8004C87C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8004C880: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8004C884: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8004C888: jr          $ra
    // 0x8004C88C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8004C88C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8004C998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C998: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004C99C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004C9A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004C9A4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8004C9A8: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x8004C9AC: addiu       $t8, $zero, 0x266
    ctx->r24 = ADD32(0, 0X266);
    // 0x8004C9B0: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    // 0x8004C9B4: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x8004C9B8: sh          $t8, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r24;
    // 0x8004C9BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004C9C0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8004C9C4: jal         0x8002135C
    // 0x8004C9C8: addiu       $a2, $zero, 0xC9
    ctx->r6 = ADD32(0, 0XC9);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x8004C9C8: addiu       $a2, $zero, 0xC9
    ctx->r6 = ADD32(0, 0XC9);
    after_0:
    // 0x8004C9CC: lbu         $t9, 0x1F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1F);
    // 0x8004C9D0: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8004C9D4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8004C9D8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8004C9DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004C9E0: lw          $v0, -0x69F4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X69F4);
    // 0x8004C9E4: nop

    // 0x8004C9E8: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
    // 0x8004C9EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004C9F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004C9F4: jr          $ra
    // 0x8004C9F8: nop

    return;
    // 0x8004C9F8: nop

;}
RECOMP_FUNC void func_8004C9FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004C9FC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8004CA00: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8004CA04: lbu         $s5, 0x4B($sp)
    ctx->r21 = MEM_BU(ctx->r29, 0X4B);
    // 0x8004CA08: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8004CA0C: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x8004CA10: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8004CA14: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8004CA18: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8004CA1C: andi        $s6, $a0, 0xFF
    ctx->r22 = ctx->r4 & 0XFF;
    // 0x8004CA20: or          $s7, $a2, $zero
    ctx->r23 = ctx->r6 | 0;
    // 0x8004CA24: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8004CA28: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8004CA2C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8004CA30: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8004CA34: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8004CA38: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8004CA3C: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x8004CA40: blez        $s5, L_8004CAAC
    if (SIGNED(ctx->r21) <= 0) {
        // 0x8004CA44: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8004CAAC;
    }
    // 0x8004CA44: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8004CA48: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8004CA4C: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x8004CA50: sll         $s4, $t6, 2
    ctx->r20 = S32(ctx->r14 << 2);
L_8004CA54:
    // 0x8004CA54: addu        $a1, $s0, $s3
    ctx->r5 = ADD32(ctx->r16, ctx->r19);
    // 0x8004CA58: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x8004CA5C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8004CA60: andi        $a0, $s6, 0xFF
    ctx->r4 = ctx->r22 & 0XFF;
    // 0x8004CA64: jal         0x8004D808
    // 0x8004CA68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8004D808(rdram, ctx);
        goto after_0;
    // 0x8004CA68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8004CA6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8004CA70: jal         0x8004C998
    // 0x8004CA74: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    func_8004C998(rdram, ctx);
        goto after_1;
    // 0x8004CA74: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_1:
    // 0x8004CA78: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x8004CA7C: addu        $t9, $s7, $t8
    ctx->r25 = ADD32(ctx->r23, ctx->r24);
    // 0x8004CA80: addu        $v0, $t9, $s4
    ctx->r2 = ADD32(ctx->r25, ctx->r20);
    // 0x8004CA84: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x8004CA88: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x8004CA8C: jal         0x8004CD44
    // 0x8004CA90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x8004CA90: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x8004CA94: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8004CA98: andi        $s0, $s2, 0xFF
    ctx->r16 = ctx->r18 & 0XFF;
    // 0x8004CA9C: slt         $at, $s0, $s5
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x8004CAA0: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x8004CAA4: bne         $at, $zero, L_8004CA54
    if (ctx->r1 != 0) {
        // 0x8004CAA8: or          $s2, $s0, $zero
        ctx->r18 = ctx->r16 | 0;
            goto L_8004CA54;
    }
    // 0x8004CAA8: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
L_8004CAAC:
    // 0x8004CAAC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8004CAB0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8004CAB4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8004CAB8: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8004CABC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8004CAC0: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8004CAC4: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8004CAC8: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x8004CACC: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8004CAD0: jr          $ra
    // 0x8004CAD4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8004CAD4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8004CAD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CAD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004CADC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004CAE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004CAE4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8004CAE8: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x8004CAEC: addiu       $t8, $zero, 0x265
    ctx->r24 = ADD32(0, 0X265);
    // 0x8004CAF0: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    // 0x8004CAF4: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x8004CAF8: sh          $t8, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r24;
    // 0x8004CAFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004CB00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8004CB04: jal         0x8002135C
    // 0x8004CB08: addiu       $a2, $zero, 0xCD
    ctx->r6 = ADD32(0, 0XCD);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x8004CB08: addiu       $a2, $zero, 0xCD
    ctx->r6 = ADD32(0, 0XCD);
    after_0:
    // 0x8004CB0C: lbu         $t9, 0x1F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1F);
    // 0x8004CB10: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8004CB14: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8004CB18: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8004CB1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004CB20: lw          $v0, -0x6AE4($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6AE4);
    // 0x8004CB24: nop

    // 0x8004CB28: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
    // 0x8004CB2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004CB30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004CB34: jr          $ra
    // 0x8004CB38: nop

    return;
    // 0x8004CB38: nop

;}
RECOMP_FUNC void func_8004CB3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CB3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004CB40: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8004CB44: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8004CB48: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8004CB4C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8004CB50: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8004CB54: andi        $s2, $a0, 0xFF
    ctx->r18 = ctx->r4 & 0XFF;
    // 0x8004CB58: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x8004CB5C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8004CB60: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8004CB64: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8004CB68:
    // 0x8004CB68: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x8004CB6C: jal         0x8004D540
    // 0x8004CB70: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_8004D540(rdram, ctx);
        goto after_0;
    // 0x8004CB70: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_0:
    // 0x8004CB74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8004CB78: jal         0x8004CAD8
    // 0x8004CB7C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    func_8004CAD8(rdram, ctx);
        goto after_1;
    // 0x8004CB7C: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_1:
    // 0x8004CB80: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x8004CB84: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x8004CB88: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x8004CB8C: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x8004CB90: jal         0x8004CD44
    // 0x8004CB94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x8004CB94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x8004CB98: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8004CB9C: andi        $t7, $s0, 0xFF
    ctx->r15 = ctx->r16 & 0XFF;
    // 0x8004CBA0: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x8004CBA4: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x8004CBA8: bne         $at, $zero, L_8004CB68
    if (ctx->r1 != 0) {
        // 0x8004CBAC: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_8004CB68;
    }
    // 0x8004CBAC: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x8004CBB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8004CBB4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8004CBB8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8004CBBC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8004CBC0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8004CBC4: jr          $ra
    // 0x8004CBC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8004CBC8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8004CBCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CBCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004CBD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004CBD4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004CBD8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8004CBDC: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x8004CBE0: addiu       $t8, $zero, 0x29F
    ctx->r24 = ADD32(0, 0X29F);
    // 0x8004CBE4: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    // 0x8004CBE8: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x8004CBEC: sh          $t8, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r24;
    // 0x8004CBF0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004CBF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8004CBF8: jal         0x8002135C
    // 0x8004CBFC: addiu       $a2, $zero, 0xDC
    ctx->r6 = ADD32(0, 0XDC);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x8004CBFC: addiu       $a2, $zero, 0xDC
    ctx->r6 = ADD32(0, 0XDC);
    after_0:
    // 0x8004CC00: lbu         $t9, 0x1F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1F);
    // 0x8004CC04: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8004CC08: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8004CC0C: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8004CC10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004CC14: lw          $v0, -0x69C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X69C0);
    // 0x8004CC18: nop

    // 0x8004CC1C: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
    // 0x8004CC20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004CC24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004CC28: jr          $ra
    // 0x8004CC2C: nop

    return;
    // 0x8004CC2C: nop

;}
RECOMP_FUNC void func_8004CD24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CD24: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8004CD28: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8004CD2C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8004CD30: sh          $a1, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r5;
    // 0x8004CD34: sb          $a2, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r6;
    // 0x8004CD38: sw          $a3, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r7;
    // 0x8004CD3C: jr          $ra
    // 0x8004CD40: sb          $t8, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r24;
    return;
    // 0x8004CD40: sb          $t8, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_8004CD44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CD44: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8004CD48: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8004CD4C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8004CD50: sb          $t0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r8;
    // 0x8004CD54: sh          $a1, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r5;
    // 0x8004CD58: jr          $ra
    // 0x8004CD5C: sh          $a2, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r6;
    return;
    // 0x8004CD5C: sh          $a2, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r6;
;}
RECOMP_FUNC void func_8004CD90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CD90: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8004CD94: lbu         $t7, 0x8($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X8);
    // 0x8004CD98: sb          $a1, 0x11($a0)
    MEM_B(0X11, ctx->r4) = ctx->r5;
    // 0x8004CD9C: andi        $t8, $t7, 0xFF01
    ctx->r24 = ctx->r15 & 0XFF01;
    // 0x8004CDA0: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x8004CDA4: jr          $ra
    // 0x8004CDA8: sb          $t9, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r25;
    return;
    // 0x8004CDA8: sb          $t9, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_8004CDD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CDD0: jr          $ra
    // 0x8004CDD4: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    return;
    // 0x8004CDD4: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8004CDD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CDD8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8004CDDC: jr          $ra
    // 0x8004CDE0: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    return;
    // 0x8004CDE0: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_8004CDEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CDEC: lhu         $t6, 0x16($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X16);
    // 0x8004CDF0: nop

    // 0x8004CDF4: ori         $t7, $t6, 0x200
    ctx->r15 = ctx->r14 | 0X200;
    // 0x8004CDF8: jr          $ra
    // 0x8004CDFC: sh          $t7, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r15;
    return;
    // 0x8004CDFC: sh          $t7, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_8004CE00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CE00: lhu         $t6, 0x16($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X16);
    // 0x8004CE04: nop

    // 0x8004CE08: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x8004CE0C: jr          $ra
    // 0x8004CE10: sh          $t7, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r15;
    return;
    // 0x8004CE10: sh          $t7, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_8004CE14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CE14: lhu         $t6, 0x16($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X16);
    // 0x8004CE18: nop

    // 0x8004CE1C: ori         $t7, $t6, 0x101
    ctx->r15 = ctx->r14 | 0X101;
    // 0x8004CE20: jr          $ra
    // 0x8004CE24: sh          $t7, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r15;
    return;
    // 0x8004CE24: sh          $t7, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_8004CE28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CE28: lhu         $t6, 0x8($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8);
    // 0x8004CE2C: nop

    // 0x8004CE30: ori         $t7, $t6, 0x200
    ctx->r15 = ctx->r14 | 0X200;
    // 0x8004CE34: jr          $ra
    // 0x8004CE38: sh          $t7, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r15;
    return;
    // 0x8004CE38: sh          $t7, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_8004CE3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CE3C: lhu         $t6, 0x8($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X8);
    // 0x8004CE40: nop

    // 0x8004CE44: ori         $t7, $t6, 0x100
    ctx->r15 = ctx->r14 | 0X100;
    // 0x8004CE48: jr          $ra
    // 0x8004CE4C: sh          $t7, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r15;
    return;
    // 0x8004CE4C: sh          $t7, 0x8($a0)
    MEM_H(0X8, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_8004CE50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CE50: lhu         $t6, 0x16($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X16);
    // 0x8004CE54: nop

    // 0x8004CE58: ori         $t7, $t6, 0x400
    ctx->r15 = ctx->r14 | 0X400;
    // 0x8004CE5C: jr          $ra
    // 0x8004CE60: sh          $t7, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r15;
    return;
    // 0x8004CE60: sh          $t7, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_8004CE64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CE64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004CE68: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8004CE6C: lbu         $t8, 0x27($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X27);
    // 0x8004CE70: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8004CE74: sll         $t2, $t8, 2
    ctx->r10 = S32(ctx->r24 << 2);
    // 0x8004CE78: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x8004CE7C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8004CE80: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x8004CE84: lbu         $t0, 0x2B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2B);
    // 0x8004CE88: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x8004CE8C: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8004CE90: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x8004CE94: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8004CE98: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8004CE9C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8004CEA0: lh          $t4, 0x32($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X32);
    // 0x8004CEA4: addu        $a2, $a2, $t1
    ctx->r6 = ADD32(ctx->r6, ctx->r9);
    // 0x8004CEA8: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x8004CEAC: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x8004CEB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004CEB4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8004CEB8: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x8004CEBC: lbu         $a2, -0x3292($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X3292);
    // 0x8004CEC0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8004CEC4: addiu       $t3, $t3, -0x2CF0
    ctx->r11 = ADD32(ctx->r11, -0X2CF0);
    // 0x8004CEC8: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8004CECC: addu        $a1, $t2, $t3
    ctx->r5 = ADD32(ctx->r10, ctx->r11);
    // 0x8004CED0: jal         0x8006ED60
    // 0x8004CED4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    func_8006ED60(rdram, ctx);
        goto after_0;
    // 0x8004CED4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    after_0:
    // 0x8004CED8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004CEDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8004CEE0: jr          $ra
    // 0x8004CEE4: nop

    return;
    // 0x8004CEE4: nop

;}
RECOMP_FUNC void func_8004CEE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CEE8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004CEEC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8004CEF0: andi        $s1, $a1, 0xFF
    ctx->r17 = ctx->r5 & 0XFF;
    // 0x8004CEF4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8004CEF8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8004CEFC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8004CF00: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8004CF04: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8004CF08: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    // 0x8004CF0C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x8004CF10: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8004CF14: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x8004CF18: jal         0x8004D808
    // 0x8004CF1C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8004D808(rdram, ctx);
        goto after_0;
    // 0x8004CF1C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_0:
    // 0x8004CF20: beq         $v0, $zero, L_8004CF2C
    if (ctx->r2 == 0) {
        // 0x8004CF24: andi        $a0, $s1, 0xFF
        ctx->r4 = ctx->r17 & 0XFF;
            goto L_8004CF2C;
    }
    // 0x8004CF24: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x8004CF28: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
L_8004CF2C:
    // 0x8004CF2C: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    // 0x8004CF30: jal         0x8004D808
    // 0x8004CF34: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8004D808(rdram, ctx);
        goto after_1;
    // 0x8004CF34: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_1:
    // 0x8004CF38: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8004CF3C: bne         $at, $zero, L_8004CF48
    if (ctx->r1 != 0) {
        // 0x8004CF40: andi        $a0, $s1, 0xFF
        ctx->r4 = ctx->r17 & 0XFF;
            goto L_8004CF48;
    }
    // 0x8004CF40: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x8004CF44: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
L_8004CF48:
    // 0x8004CF48: lbu         $a1, 0x33($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X33);
    // 0x8004CF4C: jal         0x8004D808
    // 0x8004CF50: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8004D808(rdram, ctx);
        goto after_2;
    // 0x8004CF50: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_2:
    // 0x8004CF54: beq         $v0, $zero, L_8004CF60
    if (ctx->r2 == 0) {
        // 0x8004CF58: sll         $t6, $s1, 4
        ctx->r14 = S32(ctx->r17 << 4);
            goto L_8004CF60;
    }
    // 0x8004CF58: sll         $t6, $s1, 4
    ctx->r14 = S32(ctx->r17 << 4);
    // 0x8004CF5C: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
L_8004CF60:
    // 0x8004CF60: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x8004CF64: addu        $t9, $t9, $s1
    ctx->r25 = ADD32(ctx->r25, ctx->r17);
    // 0x8004CF68: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8004CF6C: addu        $t9, $t9, $s1
    ctx->r25 = ADD32(ctx->r25, ctx->r17);
    // 0x8004CF70: lbu         $t7, 0x33($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X33);
    // 0x8004CF74: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8004CF78: addu        $t9, $t9, $s1
    ctx->r25 = ADD32(ctx->r25, ctx->r17);
    // 0x8004CF7C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8004CF80: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8004CF84: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8004CF88: lh          $t1, 0x3A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X3A);
    // 0x8004CF8C: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x8004CF90: addu        $t9, $t9, $s1
    ctx->r25 = ADD32(ctx->r25, ctx->r17);
    // 0x8004CF94: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8004CF98: lbu         $a2, -0x3292($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X3292);
    // 0x8004CF9C: addiu       $t0, $t0, -0x2CF0
    ctx->r8 = ADD32(ctx->r8, -0X2CF0);
    // 0x8004CFA0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8004CFA4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8004CFA8: lh          $a3, 0x36($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X36);
    // 0x8004CFAC: addu        $a1, $t9, $t0
    ctx->r5 = ADD32(ctx->r25, ctx->r8);
    // 0x8004CFB0: jal         0x8006ED60
    // 0x8004CFB4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_8006ED60(rdram, ctx);
        goto after_3;
    // 0x8004CFB4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_3:
    // 0x8004CFB8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8004CFBC: jal         0x80031B0C
    // 0x8004CFC0: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_80031B0C(rdram, ctx);
        goto after_4;
    // 0x8004CFC0: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_4:
    // 0x8004CFC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8004CFC8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8004CFCC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8004CFD0: jr          $ra
    // 0x8004CFD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8004CFD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8004CFD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004CFD8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8004CFDC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8004CFE0: lbu         $s2, 0x53($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0X53);
    // 0x8004CFE4: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x8004CFE8: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x8004CFEC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8004CFF0: andi        $s5, $a0, 0xFF
    ctx->r21 = ctx->r4 & 0XFF;
    // 0x8004CFF4: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x8004CFF8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8004CFFC: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x8004D000: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x8004D004: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8004D008: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8004D00C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8004D010: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8004D014: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8004D018: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x8004D01C: blez        $s2, L_8004D08C
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8004D020: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8004D08C;
    }
    // 0x8004D020: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8004D024: lbu         $t7, 0x47($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X47);
    // 0x8004D028: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8004D02C: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x8004D030: lui         $s7, 0x2
    ctx->r23 = S32(0X2 << 16);
    // 0x8004D034: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8004D038: addu        $s3, $t8, $t9
    ctx->r19 = ADD32(ctx->r24, ctx->r25);
    // 0x8004D03C: ori         $s7, $s7, 0xFEE8
    ctx->r23 = ctx->r23 | 0XFEE8;
    // 0x8004D040: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8004D044: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
L_8004D048:
    // 0x8004D048: addu        $v0, $s0, $s4
    ctx->r2 = ADD32(ctx->r16, ctx->r20);
    // 0x8004D04C: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x8004D050: addu        $v1, $s6, $t2
    ctx->r3 = ADD32(ctx->r22, ctx->r10);
    // 0x8004D054: lh          $t3, 0x2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2);
    // 0x8004D058: sll         $t0, $s0, 5
    ctx->r8 = S32(ctx->r16 << 5);
    // 0x8004D05C: addu        $t1, $s3, $t0
    ctx->r9 = ADD32(ctx->r19, ctx->r8);
    // 0x8004D060: lh          $a3, 0x0($v1)
    ctx->r7 = MEM_H(ctx->r3, 0X0);
    // 0x8004D064: addu        $a0, $t1, $s7
    ctx->r4 = ADD32(ctx->r9, ctx->r23);
    // 0x8004D068: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x8004D06C: andi        $a1, $s5, 0xFF
    ctx->r5 = ctx->r21 & 0XFF;
    // 0x8004D070: jal         0x8004CE64
    // 0x8004D074: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_8004CE64(rdram, ctx);
        goto after_0;
    // 0x8004D074: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_0:
    // 0x8004D078: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004D07C: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
    // 0x8004D080: slt         $at, $s0, $s2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x8004D084: bne         $at, $zero, L_8004D048
    if (ctx->r1 != 0) {
        // 0x8004D088: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_8004D048;
    }
    // 0x8004D088: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
L_8004D08C:
    // 0x8004D08C: lbu         $t5, 0x47($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X47);
    // 0x8004D090: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8004D094: addu        $v0, $t5, $s1
    ctx->r2 = ADD32(ctx->r13, ctx->r17);
    // 0x8004D098: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x8004D09C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8004D0A0: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8004D0A4: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8004D0A8: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8004D0AC: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x8004D0B0: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x8004D0B4: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x8004D0B8: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x8004D0BC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8004D0C0: jr          $ra
    // 0x8004D0C4: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    return;
    // 0x8004D0C4: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
;}
RECOMP_FUNC void func_8004D0C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D0C8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8004D0CC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8004D0D0: lbu         $s2, 0x53($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0X53);
    // 0x8004D0D4: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x8004D0D8: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x8004D0DC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8004D0E0: andi        $s5, $a0, 0xFF
    ctx->r21 = ctx->r4 & 0XFF;
    // 0x8004D0E4: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x8004D0E8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8004D0EC: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x8004D0F0: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x8004D0F4: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8004D0F8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8004D0FC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8004D100: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8004D104: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8004D108: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x8004D10C: blez        $s2, L_8004D17C
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8004D110: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8004D17C;
    }
    // 0x8004D110: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8004D114: lbu         $t7, 0x47($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X47);
    // 0x8004D118: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8004D11C: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x8004D120: lui         $s7, 0x2
    ctx->r23 = S32(0X2 << 16);
    // 0x8004D124: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8004D128: addu        $s3, $t8, $t9
    ctx->r19 = ADD32(ctx->r24, ctx->r25);
    // 0x8004D12C: ori         $s7, $s7, 0xFEE8
    ctx->r23 = ctx->r23 | 0XFEE8;
    // 0x8004D130: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8004D134: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
L_8004D138:
    // 0x8004D138: addu        $v0, $s0, $s4
    ctx->r2 = ADD32(ctx->r16, ctx->r20);
    // 0x8004D13C: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x8004D140: addu        $v1, $s6, $t2
    ctx->r3 = ADD32(ctx->r22, ctx->r10);
    // 0x8004D144: lh          $t3, 0x2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2);
    // 0x8004D148: sll         $t0, $s0, 5
    ctx->r8 = S32(ctx->r16 << 5);
    // 0x8004D14C: addu        $t1, $s3, $t0
    ctx->r9 = ADD32(ctx->r19, ctx->r8);
    // 0x8004D150: lh          $a3, 0x0($v1)
    ctx->r7 = MEM_H(ctx->r3, 0X0);
    // 0x8004D154: addu        $a0, $t1, $s7
    ctx->r4 = ADD32(ctx->r9, ctx->r23);
    // 0x8004D158: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x8004D15C: andi        $a1, $s5, 0xFF
    ctx->r5 = ctx->r21 & 0XFF;
    // 0x8004D160: jal         0x8004CEE8
    // 0x8004D164: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_8004CEE8(rdram, ctx);
        goto after_0;
    // 0x8004D164: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_0:
    // 0x8004D168: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004D16C: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
    // 0x8004D170: slt         $at, $s0, $s2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x8004D174: bne         $at, $zero, L_8004D138
    if (ctx->r1 != 0) {
        // 0x8004D178: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_8004D138;
    }
    // 0x8004D178: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
L_8004D17C:
    // 0x8004D17C: lbu         $t5, 0x47($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X47);
    // 0x8004D180: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8004D184: addu        $v0, $t5, $s1
    ctx->r2 = ADD32(ctx->r13, ctx->r17);
    // 0x8004D188: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x8004D18C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8004D190: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8004D194: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8004D198: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8004D19C: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x8004D1A0: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x8004D1A4: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x8004D1A8: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x8004D1AC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8004D1B0: jr          $ra
    // 0x8004D1B4: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    return;
    // 0x8004D1B4: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
;}
RECOMP_FUNC void func_8004D1B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D1B8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8004D1BC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8004D1C0: lbu         $s2, 0x5B($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0X5B);
    // 0x8004D1C4: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8004D1C8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8004D1CC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8004D1D0: andi        $s5, $a0, 0xFF
    ctx->r21 = ctx->r4 & 0XFF;
    // 0x8004D1D4: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x8004D1D8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8004D1DC: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8004D1E0: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8004D1E4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8004D1E8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8004D1EC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8004D1F0: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8004D1F4: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8004D1F8: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8004D1FC: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x8004D200: blez        $s2, L_8004D288
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8004D204: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8004D288;
    }
    // 0x8004D204: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8004D208: lbu         $t7, 0x4F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X4F);
    // 0x8004D20C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8004D210: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x8004D214: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8004D218: lb          $fp, 0x63($sp)
    ctx->r30 = MEM_B(ctx->r29, 0X63);
    // 0x8004D21C: lb          $s7, 0x5F($sp)
    ctx->r23 = MEM_B(ctx->r29, 0X5F);
    // 0x8004D220: addu        $s3, $t8, $t9
    ctx->r19 = ADD32(ctx->r24, ctx->r25);
    // 0x8004D224: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8004D228: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
L_8004D22C:
    // 0x8004D22C: addu        $v0, $s0, $s4
    ctx->r2 = ADD32(ctx->r16, ctx->r20);
    // 0x8004D230: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x8004D234: addu        $v1, $s6, $t1
    ctx->r3 = ADD32(ctx->r22, ctx->r9);
    // 0x8004D238: lh          $t2, 0x0($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X0);
    // 0x8004D23C: lh          $t5, 0x2($v1)
    ctx->r13 = MEM_H(ctx->r3, 0X2);
    // 0x8004D240: sll         $t0, $s0, 5
    ctx->r8 = S32(ctx->r16 << 5);
    // 0x8004D244: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8004D248: addu        $a3, $t2, $s7
    ctx->r7 = ADD32(ctx->r10, ctx->r23);
    // 0x8004D24C: sll         $t3, $a3, 16
    ctx->r11 = S32(ctx->r7 << 16);
    // 0x8004D250: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x8004D254: addu        $a0, $s3, $t0
    ctx->r4 = ADD32(ctx->r19, ctx->r8);
    // 0x8004D258: addu        $t6, $t5, $fp
    ctx->r14 = ADD32(ctx->r13, ctx->r30);
    // 0x8004D25C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8004D260: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x8004D264: sra         $a3, $t3, 16
    ctx->r7 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8004D268: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x8004D26C: jal         0x8004CEE8
    // 0x8004D270: andi        $a1, $s5, 0xFF
    ctx->r5 = ctx->r21 & 0XFF;
    func_8004CEE8(rdram, ctx);
        goto after_0;
    // 0x8004D270: andi        $a1, $s5, 0xFF
    ctx->r5 = ctx->r21 & 0XFF;
    after_0:
    // 0x8004D274: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004D278: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
    // 0x8004D27C: slt         $at, $s0, $s2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x8004D280: bne         $at, $zero, L_8004D22C
    if (ctx->r1 != 0) {
        // 0x8004D284: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_8004D22C;
    }
    // 0x8004D284: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
L_8004D288:
    // 0x8004D288: lbu         $t8, 0x4F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X4F);
    // 0x8004D28C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8004D290: addu        $v0, $t8, $s1
    ctx->r2 = ADD32(ctx->r24, ctx->r17);
    // 0x8004D294: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x8004D298: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8004D29C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8004D2A0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8004D2A4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8004D2A8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8004D2AC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8004D2B0: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8004D2B4: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8004D2B8: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8004D2BC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8004D2C0: jr          $ra
    // 0x8004D2C4: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    return;
    // 0x8004D2C4: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
;}
RECOMP_FUNC void func_8004D2C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D2C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004D2CC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8004D2D0: lbu         $t0, 0x2B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2B);
    // 0x8004D2D4: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8004D2D8: sll         $t9, $t6, 4
    ctx->r25 = S32(ctx->r14 << 4);
    // 0x8004D2DC: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8004D2E0: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8004D2E4: lh          $t2, 0x32($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X32);
    // 0x8004D2E8: addu        $a2, $a2, $t1
    ctx->r6 = ADD32(ctx->r6, ctx->r9);
    // 0x8004D2EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004D2F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8004D2F4: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8004D2F8: sll         $t7, $a3, 16
    ctx->r15 = S32(ctx->r7 << 16);
    // 0x8004D2FC: lbu         $a2, -0x436C($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X436C);
    // 0x8004D300: sra         $a3, $t7, 16
    ctx->r7 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8004D304: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8004D308: jal         0x80030A60
    // 0x8004D30C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_80030A60(rdram, ctx);
        goto after_0;
    // 0x8004D30C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_0:
    // 0x8004D310: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004D314: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8004D318: jr          $ra
    // 0x8004D31C: nop

    return;
    // 0x8004D31C: nop

;}
RECOMP_FUNC void func_8004D320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D320: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004D324: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004D328: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8004D32C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004D330: lbu         $a0, 0x27($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X27);
    // 0x8004D334: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8004D338: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8004D33C: jal         0x8004D78C
    // 0x8004D340: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    func_8004D78C(rdram, ctx);
        goto after_0;
    // 0x8004D340: andi        $a1, $a2, 0xFF
    ctx->r5 = ctx->r6 & 0XFF;
    after_0:
    // 0x8004D344: addiu       $a3, $v0, 0x1
    ctx->r7 = ADD32(ctx->r2, 0X1);
    // 0x8004D348: andi        $t7, $a3, 0xFF
    ctx->r15 = ctx->r7 & 0XFF;
    // 0x8004D34C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8004D350: lh          $a1, 0x2E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2E);
    // 0x8004D354: lh          $a2, 0x32($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X32);
    // 0x8004D358: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8004D35C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8004D360: jal         0x8002F914
    // 0x8004D364: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    func_8002F914(rdram, ctx);
        goto after_1;
    // 0x8004D364: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    after_1:
    // 0x8004D368: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8004D36C: jal         0x80031B0C
    // 0x8004D370: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80031B0C(rdram, ctx);
        goto after_2;
    // 0x8004D370: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8004D374: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004D378: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8004D37C: jr          $ra
    // 0x8004D380: nop

    return;
    // 0x8004D380: nop

;}
RECOMP_FUNC void func_8004D384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D384: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8004D388: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8004D38C: lbu         $s2, 0x53($sp)
    ctx->r18 = MEM_BU(ctx->r29, 0X53);
    // 0x8004D390: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x8004D394: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x8004D398: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8004D39C: andi        $s5, $a0, 0xFF
    ctx->r21 = ctx->r4 & 0XFF;
    // 0x8004D3A0: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x8004D3A4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8004D3A8: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x8004D3AC: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x8004D3B0: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8004D3B4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8004D3B8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8004D3BC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8004D3C0: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x8004D3C4: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x8004D3C8: blez        $s2, L_8004D438
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8004D3CC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8004D438;
    }
    // 0x8004D3CC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8004D3D0: lbu         $t7, 0x47($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X47);
    // 0x8004D3D4: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8004D3D8: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x8004D3DC: lui         $s7, 0x2
    ctx->r23 = S32(0X2 << 16);
    // 0x8004D3E0: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8004D3E4: addu        $s3, $t8, $t9
    ctx->r19 = ADD32(ctx->r24, ctx->r25);
    // 0x8004D3E8: ori         $s7, $s7, 0xFEE8
    ctx->r23 = ctx->r23 | 0XFEE8;
    // 0x8004D3EC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8004D3F0: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
L_8004D3F4:
    // 0x8004D3F4: addu        $v0, $s0, $s4
    ctx->r2 = ADD32(ctx->r16, ctx->r20);
    // 0x8004D3F8: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x8004D3FC: addu        $v1, $s6, $t2
    ctx->r3 = ADD32(ctx->r22, ctx->r10);
    // 0x8004D400: lh          $t3, 0x2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2);
    // 0x8004D404: sll         $t0, $s0, 5
    ctx->r8 = S32(ctx->r16 << 5);
    // 0x8004D408: addu        $t1, $s3, $t0
    ctx->r9 = ADD32(ctx->r19, ctx->r8);
    // 0x8004D40C: lh          $a3, 0x0($v1)
    ctx->r7 = MEM_H(ctx->r3, 0X0);
    // 0x8004D410: addu        $a0, $t1, $s7
    ctx->r4 = ADD32(ctx->r9, ctx->r23);
    // 0x8004D414: andi        $a2, $v0, 0xFF
    ctx->r6 = ctx->r2 & 0XFF;
    // 0x8004D418: andi        $a1, $s5, 0xFF
    ctx->r5 = ctx->r21 & 0XFF;
    // 0x8004D41C: jal         0x8004D320
    // 0x8004D420: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_8004D320(rdram, ctx);
        goto after_0;
    // 0x8004D420: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_0:
    // 0x8004D424: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004D428: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
    // 0x8004D42C: slt         $at, $s0, $s2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x8004D430: bne         $at, $zero, L_8004D3F4
    if (ctx->r1 != 0) {
        // 0x8004D434: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_8004D3F4;
    }
    // 0x8004D434: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
L_8004D438:
    // 0x8004D438: lbu         $t5, 0x47($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X47);
    // 0x8004D43C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8004D440: addu        $v0, $t5, $s1
    ctx->r2 = ADD32(ctx->r13, ctx->r17);
    // 0x8004D444: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x8004D448: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8004D44C: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8004D450: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8004D454: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8004D458: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x8004D45C: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x8004D460: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x8004D464: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x8004D468: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8004D46C: jr          $ra
    // 0x8004D470: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    return;
    // 0x8004D470: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
;}
RECOMP_FUNC void func_8004D474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D474: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8004D478: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8004D47C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8004D480: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8004D484: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8004D488: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8004D48C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8004D490: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8004D494: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8004D498: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8004D49C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8004D4A0: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
    // 0x8004D4A4: lbu         $v0, -0x2CEF($v1)
    ctx->r2 = MEM_BU(ctx->r3, -0X2CEF);
    // 0x8004D4A8: jr          $ra
    // 0x8004D4AC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8004D4AC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_8004D4B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D4B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004D4B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004D4B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004D4BC: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x8004D4C0: jal         0x8004D474
    // 0x8004D4C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8004D474(rdram, ctx);
        goto after_0;
    // 0x8004D4C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8004D4C8: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x8004D4CC: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x8004D4D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8004D4D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8004D4D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8004D4DC: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x8004D4E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8004D4E4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8004D4E8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8004D4EC: lbu         $t1, 0x1F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1F);
    // 0x8004D4F0: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x8004D4F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8004D4F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8004D4FC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8004D500: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8004D504: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8004D508: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8004D50C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8004D510: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x8004D514: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8004D518: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x8004D51C: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8004D520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004D524: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8004D528: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8004D52C: addiu       $t5, $t5, -0x2CF0
    ctx->r13 = ADD32(ctx->r13, -0X2CF0);
    // 0x8004D530: addiu       $t4, $t3, 0x418
    ctx->r12 = ADD32(ctx->r11, 0X418);
    // 0x8004D534: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    // 0x8004D538: jr          $ra
    // 0x8004D53C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8004D53C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004D540(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D540: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004D544: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004D548: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004D54C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004D550: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8004D554: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x8004D558: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8004D55C: jal         0x8004D4B0
    // 0x8004D560: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8004D4B0(rdram, ctx);
        goto after_0;
    // 0x8004D560: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x8004D564: lbu         $v1, 0x5($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X5);
    // 0x8004D568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004D56C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004D570: jr          $ra
    // 0x8004D574: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8004D574: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8004D5B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D5B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004D5B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004D5B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004D5BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004D5C0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8004D5C4: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x8004D5C8: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8004D5CC: jal         0x8004D4B0
    // 0x8004D5D0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8004D4B0(rdram, ctx);
        goto after_0;
    // 0x8004D5D0: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x8004D5D4: lbu         $v1, 0x4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4);
    // 0x8004D5D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004D5DC: sra         $t8, $v1, 7
    ctx->r24 = S32(SIGNED(ctx->r3) >> 7);
    // 0x8004D5E0: andi        $v0, $t8, 0xFF
    ctx->r2 = ctx->r24 & 0XFF;
    // 0x8004D5E4: jr          $ra
    // 0x8004D5E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8004D5E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004D684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D684: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x8004D688: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8004D68C: sll         $t7, $a2, 4
    ctx->r15 = S32(ctx->r6 << 4);
    // 0x8004D690: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x8004D694: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8004D698: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x8004D69C: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x8004D6A0: addu        $t9, $t9, $a2
    ctx->r25 = ADD32(ctx->r25, ctx->r6);
    // 0x8004D6A4: lbu         $v0, -0x3292($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3292);
    // 0x8004D6A8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8004D6AC: addu        $t9, $t9, $a2
    ctx->r25 = ADD32(ctx->r25, ctx->r6);
    // 0x8004D6B0: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8004D6B4: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x8004D6B8: addu        $t9, $t9, $a2
    ctx->r25 = ADD32(ctx->r25, ctx->r6);
    // 0x8004D6BC: subu        $t0, $t0, $v0
    ctx->r8 = SUB32(ctx->r8, ctx->r2);
    // 0x8004D6C0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8004D6C4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8004D6C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004D6CC: addu        $t9, $t9, $a2
    ctx->r25 = ADD32(ctx->r25, ctx->r6);
    // 0x8004D6D0: subu        $t0, $t0, $v0
    ctx->r8 = SUB32(ctx->r8, ctx->r2);
    // 0x8004D6D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004D6D8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8004D6DC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8004D6E0: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8004D6E4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8004D6E8: addu        $a0, $a0, $t1
    ctx->r4 = ADD32(ctx->r4, ctx->r9);
    // 0x8004D6EC: lbu         $t2, -0x2CB0($a0)
    ctx->r10 = MEM_BU(ctx->r4, -0X2CB0);
    // 0x8004D6F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004D6F4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004D6F8: jal         0x8004D710
    // 0x8004D6FC: andi        $a0, $t2, 0xF
    ctx->r4 = ctx->r10 & 0XF;
    func_8004D710(rdram, ctx);
        goto after_0;
    // 0x8004D6FC: andi        $a0, $t2, 0xF
    ctx->r4 = ctx->r10 & 0XF;
    after_0:
    // 0x8004D700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004D704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004D708: jr          $ra
    // 0x8004D70C: nop

    return;
    // 0x8004D70C: nop

;}
RECOMP_FUNC void func_8004D710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D710: andi        $t8, $a0, 0xF
    ctx->r24 = ctx->r4 & 0XF;
    // 0x8004D714: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8004D718: sltiu       $at, $t9, 0xC
    ctx->r1 = ctx->r25 < 0XC ? 1 : 0;
    // 0x8004D71C: beq         $at, $zero, L_8004D780
    if (ctx->r1 == 0) {
        // 0x8004D720: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_8004D780;
    }
    // 0x8004D720: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8004D724: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8004D728: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004D72C: addu        $at, $at, $t9
    gpr jr_addend_8004D738 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8004D730: lw          $t9, 0x7C74($at)
    ctx->r25 = ADD32(ctx->r1, 0X7C74);
    // 0x8004D734: nop

    // 0x8004D738: jr          $t9
    // 0x8004D73C: nop

    switch (jr_addend_8004D738 >> 2) {
        case 0: goto L_8004D740; break;
        case 1: goto L_8004D748; break;
        case 2: goto L_8004D780; break;
        case 3: goto L_8004D750; break;
        case 4: goto L_8004D780; break;
        case 5: goto L_8004D760; break;
        case 6: goto L_8004D780; break;
        case 7: goto L_8004D758; break;
        case 8: goto L_8004D778; break;
        case 9: goto L_8004D770; break;
        case 10: goto L_8004D780; break;
        case 11: goto L_8004D768; break;
        default: switch_error(__func__, 0x8004D738, 0x800D7C74);
    }
    // 0x8004D73C: nop

L_8004D740:
    // 0x8004D740: jr          $ra
    // 0x8004D744: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8004D744: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004D748:
    // 0x8004D748: jr          $ra
    // 0x8004D74C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8004D74C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004D750:
    // 0x8004D750: jr          $ra
    // 0x8004D754: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x8004D754: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8004D758:
    // 0x8004D758: jr          $ra
    // 0x8004D75C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x8004D75C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8004D760:
    // 0x8004D760: jr          $ra
    // 0x8004D764: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x8004D764: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8004D768:
    // 0x8004D768: jr          $ra
    // 0x8004D76C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x8004D76C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8004D770:
    // 0x8004D770: jr          $ra
    // 0x8004D774: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    return;
    // 0x8004D774: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8004D778:
    // 0x8004D778: jr          $ra
    // 0x8004D77C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    return;
    // 0x8004D77C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8004D780:
    // 0x8004D780: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8004D784: jr          $ra
    // 0x8004D788: nop

    return;
    // 0x8004D788: nop

;}
RECOMP_FUNC void func_8004D78C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D78C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8004D790: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x8004D794: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x8004D798: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x8004D79C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8004D7A0: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x8004D7A4: addu        $v1, $v1, $t9
    ctx->r3 = ADD32(ctx->r3, ctx->r25);
    // 0x8004D7A8: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8004D7AC: lbu         $v1, -0x3292($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3292);
    // 0x8004D7B0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8004D7B4: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8004D7B8: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8004D7BC: sll         $t1, $v1, 2
    ctx->r9 = S32(ctx->r3 << 2);
    // 0x8004D7C0: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8004D7C4: subu        $t1, $t1, $v1
    ctx->r9 = SUB32(ctx->r9, ctx->r3);
    // 0x8004D7C8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8004D7CC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8004D7D0: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8004D7D4: subu        $t1, $t1, $v1
    ctx->r9 = SUB32(ctx->r9, ctx->r3);
    // 0x8004D7D8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8004D7DC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8004D7E0: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8004D7E4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8004D7E8: addu        $a2, $a2, $t2
    ctx->r6 = ADD32(ctx->r6, ctx->r10);
    // 0x8004D7EC: lbu         $a2, -0x2CB0($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X2CB0);
    // 0x8004D7F0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8004D7F4: srl         $v0, $a2, 4
    ctx->r2 = S32(U32(ctx->r6) >> 4);
    // 0x8004D7F8: andi        $t5, $v0, 0xF
    ctx->r13 = ctx->r2 & 0XF;
    // 0x8004D7FC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8004D800: jr          $ra
    // 0x8004D804: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    return;
    // 0x8004D804: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
;}
RECOMP_FUNC void func_8004D808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D808: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004D80C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004D810: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004D814: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004D818: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8004D81C: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x8004D820: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8004D824: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8004D828: jal         0x8004DD18
    // 0x8004D82C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8004DD18(rdram, ctx);
        goto after_0;
    // 0x8004D82C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x8004D830: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x8004D834: jal         0x8004D880
    // 0x8004D838: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8004D880(rdram, ctx);
        goto after_1;
    // 0x8004D838: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8004D83C: lbu         $t8, 0x23($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X23);
    // 0x8004D840: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8004D844: bne         $t8, $at, L_8004D870
    if (ctx->r24 != ctx->r1) {
        // 0x8004D848: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_8004D870;
    }
    // 0x8004D848: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8004D84C: andi        $a0, $v0, 0xF0
    ctx->r4 = ctx->r2 & 0XF0;
    // 0x8004D850: andi        $t1, $a0, 0x80
    ctx->r9 = ctx->r4 & 0X80;
    // 0x8004D854: beq         $t1, $zero, L_8004D864
    if (ctx->r9 == 0) {
        // 0x8004D858: sra         $v1, $a0, 4
        ctx->r3 = S32(SIGNED(ctx->r4) >> 4);
            goto L_8004D864;
    }
    // 0x8004D858: sra         $v1, $a0, 4
    ctx->r3 = S32(SIGNED(ctx->r4) >> 4);
    // 0x8004D85C: b           L_8004D870
    // 0x8004D860: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
        goto L_8004D870;
    // 0x8004D860: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_8004D864:
    // 0x8004D864: andi        $t2, $v1, 0xFF
    ctx->r10 = ctx->r3 & 0XFF;
    // 0x8004D868: b           L_8004D870
    // 0x8004D86C: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
        goto L_8004D870;
    // 0x8004D86C: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
L_8004D870:
    // 0x8004D870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004D874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004D878: jr          $ra
    // 0x8004D87C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8004D87C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8004D880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D880: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8004D884: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004D888: sltiu       $at, $t6, 0xE
    ctx->r1 = ctx->r14 < 0XE ? 1 : 0;
    // 0x8004D88C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004D890: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8004D894: beq         $at, $zero, L_8004D9C4
    if (ctx->r1 == 0) {
        // 0x8004D898: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_8004D9C4;
    }
    // 0x8004D898: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8004D89C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8004D8A0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004D8A4: addu        $at, $at, $t7
    gpr jr_addend_8004D8B0 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8004D8A8: lw          $t7, 0x7CA4($at)
    ctx->r15 = ADD32(ctx->r1, 0X7CA4);
    // 0x8004D8AC: nop

    // 0x8004D8B0: jr          $t7
    // 0x8004D8B4: nop

    switch (jr_addend_8004D8B0 >> 2) {
        case 0: goto L_8004D8B8; break;
        case 1: goto L_8004D8C4; break;
        case 2: goto L_8004D8DC; break;
        case 3: goto L_8004D8E8; break;
        case 4: goto L_8004D8FC; break;
        case 5: goto L_8004D908; break;
        case 6: goto L_8004D92C; break;
        case 7: goto L_8004D938; break;
        case 8: goto L_8004D944; break;
        case 9: goto L_8004D97C; break;
        case 10: goto L_8004D988; break;
        case 11: goto L_8004D9A0; break;
        case 12: goto L_8004D9AC; break;
        case 13: goto L_8004D9B8; break;
        default: switch_error(__func__, 0x8004D8B0, 0x800D7CA4);
    }
    // 0x8004D8B4: nop

L_8004D8B8:
    // 0x8004D8B8: lbu         $v1, 0x19($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X19);
    // 0x8004D8BC: b           L_8004D9D0
    // 0x8004D8C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8004D9D0;
    // 0x8004D8C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004D8C4:
    // 0x8004D8C4: lbu         $a0, 0x1A($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0X1A);
    // 0x8004D8C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004D8CC: jal         0x8001D4C0
    // 0x8004D8D0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_8001D4C0(rdram, ctx);
        goto after_0;
    // 0x8004D8D0: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_0:
    // 0x8004D8D4: b           L_8004D9CC
    // 0x8004D8D8: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
        goto L_8004D9CC;
    // 0x8004D8D8: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
L_8004D8DC:
    // 0x8004D8DC: lbu         $v1, 0x1B($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X1B);
    // 0x8004D8E0: b           L_8004D9D0
    // 0x8004D8E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8004D9D0;
    // 0x8004D8E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004D8E8:
    // 0x8004D8E8: lbu         $v1, 0x1C($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X1C);
    // 0x8004D8EC: nop

    // 0x8004D8F0: sra         $t8, $v1, 4
    ctx->r24 = S32(SIGNED(ctx->r3) >> 4);
    // 0x8004D8F4: b           L_8004D9CC
    // 0x8004D8F8: andi        $v1, $t8, 0xFF
    ctx->r3 = ctx->r24 & 0XFF;
        goto L_8004D9CC;
    // 0x8004D8F8: andi        $v1, $t8, 0xFF
    ctx->r3 = ctx->r24 & 0XFF;
L_8004D8FC:
    // 0x8004D8FC: lbu         $t0, 0x1C($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X1C);
    // 0x8004D900: b           L_8004D9CC
    // 0x8004D904: andi        $v1, $t0, 0xF
    ctx->r3 = ctx->r8 & 0XF;
        goto L_8004D9CC;
    // 0x8004D904: andi        $v1, $t0, 0xF
    ctx->r3 = ctx->r8 & 0XF;
L_8004D908:
    // 0x8004D908: lbu         $v1, 0x1D($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X1D);
    // 0x8004D90C: nop

    // 0x8004D910: sra         $t2, $v1, 5
    ctx->r10 = S32(SIGNED(ctx->r3) >> 5);
    // 0x8004D914: andi        $v1, $t2, 0xFF
    ctx->r3 = ctx->r10 & 0XFF;
    // 0x8004D918: slti        $at, $v1, 0x6
    ctx->r1 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8004D91C: bne         $at, $zero, L_8004D9D0
    if (ctx->r1 != 0) {
        // 0x8004D920: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8004D9D0;
    }
    // 0x8004D920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004D924: b           L_8004D9CC
    // 0x8004D928: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_8004D9CC;
    // 0x8004D928: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8004D92C:
    // 0x8004D92C: lbu         $t4, 0x1D($a3)
    ctx->r12 = MEM_BU(ctx->r7, 0X1D);
    // 0x8004D930: b           L_8004D9CC
    // 0x8004D934: andi        $v1, $t4, 0x1F
    ctx->r3 = ctx->r12 & 0X1F;
        goto L_8004D9CC;
    // 0x8004D934: andi        $v1, $t4, 0x1F
    ctx->r3 = ctx->r12 & 0X1F;
L_8004D938:
    // 0x8004D938: lbu         $v1, 0x1E($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X1E);
    // 0x8004D93C: b           L_8004D9D0
    // 0x8004D940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8004D9D0;
    // 0x8004D940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004D944:
    // 0x8004D944: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8004D948: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8004D94C: jal         0x8004D880
    // 0x8004D950: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_8004D880(rdram, ctx);
        goto after_1;
    // 0x8004D950: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x8004D954: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8004D958: sb          $v0, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r2;
    // 0x8004D95C: jal         0x8004D880
    // 0x8004D960: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8004D880(rdram, ctx);
        goto after_2;
    // 0x8004D960: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_2:
    // 0x8004D964: lbu         $t6, 0x1E($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1E);
    // 0x8004D968: nop

    // 0x8004D96C: addu        $v1, $v0, $t6
    ctx->r3 = ADD32(ctx->r2, ctx->r14);
    // 0x8004D970: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x8004D974: b           L_8004D9CC
    // 0x8004D978: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
        goto L_8004D9CC;
    // 0x8004D978: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_8004D97C:
    // 0x8004D97C: lbu         $t8, 0x1B($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X1B);
    // 0x8004D980: b           L_8004D9CC
    // 0x8004D984: andi        $v1, $t8, 0x1
    ctx->r3 = ctx->r24 & 0X1;
        goto L_8004D9CC;
    // 0x8004D984: andi        $v1, $t8, 0x1
    ctx->r3 = ctx->r24 & 0X1;
L_8004D988:
    // 0x8004D988: lbu         $v1, 0x1B($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X1B);
    // 0x8004D98C: nop

    // 0x8004D990: andi        $t0, $v1, 0x30
    ctx->r8 = ctx->r3 & 0X30;
    // 0x8004D994: sra         $t1, $t0, 4
    ctx->r9 = S32(SIGNED(ctx->r8) >> 4);
    // 0x8004D998: b           L_8004D9CC
    // 0x8004D99C: andi        $v1, $t1, 0xFF
    ctx->r3 = ctx->r9 & 0XFF;
        goto L_8004D9CC;
    // 0x8004D99C: andi        $v1, $t1, 0xFF
    ctx->r3 = ctx->r9 & 0XFF;
L_8004D9A0:
    // 0x8004D9A0: lbu         $t3, 0x1B($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X1B);
    // 0x8004D9A4: b           L_8004D9CC
    // 0x8004D9A8: andi        $v1, $t3, 0x88
    ctx->r3 = ctx->r11 & 0X88;
        goto L_8004D9CC;
    // 0x8004D9A8: andi        $v1, $t3, 0x88
    ctx->r3 = ctx->r11 & 0X88;
L_8004D9AC:
    // 0x8004D9AC: lbu         $t5, 0x1B($a3)
    ctx->r13 = MEM_BU(ctx->r7, 0X1B);
    // 0x8004D9B0: b           L_8004D9CC
    // 0x8004D9B4: andi        $v1, $t5, 0x8
    ctx->r3 = ctx->r13 & 0X8;
        goto L_8004D9CC;
    // 0x8004D9B4: andi        $v1, $t5, 0x8
    ctx->r3 = ctx->r13 & 0X8;
L_8004D9B8:
    // 0x8004D9B8: lbu         $t7, 0x1B($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X1B);
    // 0x8004D9BC: b           L_8004D9CC
    // 0x8004D9C0: andi        $v1, $t7, 0x80
    ctx->r3 = ctx->r15 & 0X80;
        goto L_8004D9CC;
    // 0x8004D9C0: andi        $v1, $t7, 0x80
    ctx->r3 = ctx->r15 & 0X80;
L_8004D9C4:
    // 0x8004D9C4: lbu         $v1, 0x1F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1F);
    // 0x8004D9C8: nop

L_8004D9CC:
    // 0x8004D9CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004D9D0:
    // 0x8004D9D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8004D9D4: jr          $ra
    // 0x8004D9D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8004D9D8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8004D9DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004D9DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004D9E0: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8004D9E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8004D9E8: sltiu       $at, $t6, 0xE
    ctx->r1 = ctx->r14 < 0XE ? 1 : 0;
    // 0x8004D9EC: andi        $s0, $a2, 0xFF
    ctx->r16 = ctx->r6 & 0XFF;
    // 0x8004D9F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004D9F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8004D9F8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8004D9FC: beq         $at, $zero, L_8004DC9C
    if (ctx->r1 == 0) {
        // 0x8004DA00: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_8004DC9C;
    }
    // 0x8004DA00: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8004DA04: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8004DA08: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004DA0C: addu        $at, $at, $t7
    gpr jr_addend_8004DA18 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8004DA10: lw          $t7, 0x7CDC($at)
    ctx->r15 = ADD32(ctx->r1, 0X7CDC);
    // 0x8004DA14: nop

    // 0x8004DA18: jr          $t7
    // 0x8004DA1C: nop

    switch (jr_addend_8004DA18 >> 2) {
        case 0: goto L_8004DA20; break;
        case 1: goto L_8004DA28; break;
        case 2: goto L_8004DA4C; break;
        case 3: goto L_8004DA54; break;
        case 4: goto L_8004DA90; break;
        case 5: goto L_8004DACC; break;
        case 6: goto L_8004DB04; break;
        case 7: goto L_8004DB3C; break;
        case 8: goto L_8004DB44; break;
        case 9: goto L_8004DB80; break;
        case 10: goto L_8004DBB8; break;
        case 11: goto L_8004DBEC; break;
        case 12: goto L_8004DC28; break;
        case 13: goto L_8004DC64; break;
        default: switch_error(__func__, 0x8004DA18, 0x800D7CDC);
    }
    // 0x8004DA1C: nop

L_8004DA20:
    // 0x8004DA20: b           L_8004DC9C
    // 0x8004DA24: sb          $s0, 0x19($a3)
    MEM_B(0X19, ctx->r7) = ctx->r16;
        goto L_8004DC9C;
    // 0x8004DA24: sb          $s0, 0x19($a3)
    MEM_B(0X19, ctx->r7) = ctx->r16;
L_8004DA28:
    // 0x8004DA28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8004DA2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004DA30: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x8004DA34: jal         0x8001D4C0
    // 0x8004DA38: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_8001D4C0(rdram, ctx);
        goto after_0;
    // 0x8004DA38: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_0:
    // 0x8004DA3C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8004DA40: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x8004DA44: b           L_8004DC9C
    // 0x8004DA48: sb          $v0, 0x1A($a3)
    MEM_B(0X1A, ctx->r7) = ctx->r2;
        goto L_8004DC9C;
    // 0x8004DA48: sb          $v0, 0x1A($a3)
    MEM_B(0X1A, ctx->r7) = ctx->r2;
L_8004DA4C:
    // 0x8004DA4C: b           L_8004DC9C
    // 0x8004DA50: sb          $s0, 0x1B($a3)
    MEM_B(0X1B, ctx->r7) = ctx->r16;
        goto L_8004DC9C;
    // 0x8004DA50: sb          $s0, 0x1B($a3)
    MEM_B(0X1B, ctx->r7) = ctx->r16;
L_8004DA54:
    // 0x8004DA54: lbu         $t8, 0x1C($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X1C);
    // 0x8004DA58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8004DA5C: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x8004DA60: sb          $t9, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r25;
    // 0x8004DA64: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x8004DA68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004DA6C: jal         0x8001D4C0
    // 0x8004DA70: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8001D4C0(rdram, ctx);
        goto after_1;
    // 0x8004DA70: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_1:
    // 0x8004DA74: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8004DA78: sll         $t2, $v0, 4
    ctx->r10 = S32(ctx->r2 << 4);
    // 0x8004DA7C: lbu         $t0, 0x1C($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X1C);
    // 0x8004DA80: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x8004DA84: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x8004DA88: b           L_8004DC9C
    // 0x8004DA8C: sb          $t3, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r11;
        goto L_8004DC9C;
    // 0x8004DA8C: sb          $t3, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r11;
L_8004DA90:
    // 0x8004DA90: lbu         $t4, 0x1C($a3)
    ctx->r12 = MEM_BU(ctx->r7, 0X1C);
    // 0x8004DA94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8004DA98: andi        $t5, $t4, 0xF0
    ctx->r13 = ctx->r12 & 0XF0;
    // 0x8004DA9C: sb          $t5, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r13;
    // 0x8004DAA0: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x8004DAA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004DAA8: jal         0x8001D4C0
    // 0x8004DAAC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_8001D4C0(rdram, ctx);
        goto after_2;
    // 0x8004DAAC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x8004DAB0: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8004DAB4: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x8004DAB8: lbu         $t6, 0x1C($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X1C);
    // 0x8004DABC: nop

    // 0x8004DAC0: or          $t8, $t6, $v0
    ctx->r24 = ctx->r14 | ctx->r2;
    // 0x8004DAC4: b           L_8004DC9C
    // 0x8004DAC8: sb          $t8, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r24;
        goto L_8004DC9C;
    // 0x8004DAC8: sb          $t8, 0x1C($a3)
    MEM_B(0X1C, ctx->r7) = ctx->r24;
L_8004DACC:
    // 0x8004DACC: lbu         $t9, 0x1D($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0X1D);
    // 0x8004DAD0: slti        $at, $s0, 0x6
    ctx->r1 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
    // 0x8004DAD4: andi        $t1, $t9, 0x1F
    ctx->r9 = ctx->r25 & 0X1F;
    // 0x8004DAD8: sb          $t1, 0x1D($a3)
    MEM_B(0X1D, ctx->r7) = ctx->r9;
    // 0x8004DADC: bne         $at, $zero, L_8004DAF0
    if (ctx->r1 != 0) {
        // 0x8004DAE0: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_8004DAF0;
    }
    // 0x8004DAE0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8004DAE4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8004DAE8: b           L_8004DC9C
    // 0x8004DAEC: sb          $zero, 0x1D($a3)
    MEM_B(0X1D, ctx->r7) = 0;
        goto L_8004DC9C;
    // 0x8004DAEC: sb          $zero, 0x1D($a3)
    MEM_B(0X1D, ctx->r7) = 0;
L_8004DAF0:
    // 0x8004DAF0: lbu         $t0, 0x1D($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X1D);
    // 0x8004DAF4: sll         $t3, $v0, 5
    ctx->r11 = S32(ctx->r2 << 5);
    // 0x8004DAF8: or          $t4, $t0, $t3
    ctx->r12 = ctx->r8 | ctx->r11;
    // 0x8004DAFC: b           L_8004DC9C
    // 0x8004DB00: sb          $t4, 0x1D($a3)
    MEM_B(0X1D, ctx->r7) = ctx->r12;
        goto L_8004DC9C;
    // 0x8004DB00: sb          $t4, 0x1D($a3)
    MEM_B(0X1D, ctx->r7) = ctx->r12;
L_8004DB04:
    // 0x8004DB04: lbu         $t5, 0x1D($a3)
    ctx->r13 = MEM_BU(ctx->r7, 0X1D);
    // 0x8004DB08: slti        $at, $s0, 0x20
    ctx->r1 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x8004DB0C: andi        $t6, $t5, 0xE0
    ctx->r14 = ctx->r13 & 0XE0;
    // 0x8004DB10: sb          $t6, 0x1D($a3)
    MEM_B(0X1D, ctx->r7) = ctx->r14;
    // 0x8004DB14: bne         $at, $zero, L_8004DB28
    if (ctx->r1 != 0) {
        // 0x8004DB18: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_8004DB28;
    }
    // 0x8004DB18: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8004DB1C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8004DB20: b           L_8004DC9C
    // 0x8004DB24: sb          $zero, 0x1D($a3)
    MEM_B(0X1D, ctx->r7) = 0;
        goto L_8004DC9C;
    // 0x8004DB24: sb          $zero, 0x1D($a3)
    MEM_B(0X1D, ctx->r7) = 0;
L_8004DB28:
    // 0x8004DB28: lbu         $t7, 0x1D($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X1D);
    // 0x8004DB2C: nop

    // 0x8004DB30: or          $t8, $t7, $v0
    ctx->r24 = ctx->r15 | ctx->r2;
    // 0x8004DB34: b           L_8004DC9C
    // 0x8004DB38: sb          $t8, 0x1D($a3)
    MEM_B(0X1D, ctx->r7) = ctx->r24;
        goto L_8004DC9C;
    // 0x8004DB38: sb          $t8, 0x1D($a3)
    MEM_B(0X1D, ctx->r7) = ctx->r24;
L_8004DB3C:
    // 0x8004DB3C: b           L_8004DC9C
    // 0x8004DB40: sb          $s0, 0x1E($a3)
    MEM_B(0X1E, ctx->r7) = ctx->r16;
        goto L_8004DC9C;
    // 0x8004DB40: sb          $s0, 0x1E($a3)
    MEM_B(0X1E, ctx->r7) = ctx->r16;
L_8004DB44:
    // 0x8004DB44: lbu         $t9, 0x1B($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0X1B);
    // 0x8004DB48: addiu       $v1, $zero, -0x32
    ctx->r3 = ADD32(0, -0X32);
    // 0x8004DB4C: and         $t2, $s0, $v1
    ctx->r10 = ctx->r16 & ctx->r3;
    // 0x8004DB50: andi        $t1, $t9, 0xFFCE
    ctx->r9 = ctx->r25 & 0XFFCE;
    // 0x8004DB54: sb          $t1, 0x1B($a3)
    MEM_B(0X1B, ctx->r7) = ctx->r9;
    // 0x8004DB58: beq         $t2, $zero, L_8004DB6C
    if (ctx->r10 == 0) {
        // 0x8004DB5C: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_8004DB6C;
    }
    // 0x8004DB5C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8004DB60: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004DB64: andi        $v0, $s0, 0x31
    ctx->r2 = ctx->r16 & 0X31;
    // 0x8004DB68: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8004DB6C:
    // 0x8004DB6C: lbu         $t3, 0x1B($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X1B);
    // 0x8004DB70: nop

    // 0x8004DB74: or          $t4, $t3, $v0
    ctx->r12 = ctx->r11 | ctx->r2;
    // 0x8004DB78: b           L_8004DC9C
    // 0x8004DB7C: sb          $t4, 0x1B($a3)
    MEM_B(0X1B, ctx->r7) = ctx->r12;
        goto L_8004DC9C;
    // 0x8004DB7C: sb          $t4, 0x1B($a3)
    MEM_B(0X1B, ctx->r7) = ctx->r12;
L_8004DB80:
    // 0x8004DB80: lbu         $t5, 0x1B($a3)
    ctx->r13 = MEM_BU(ctx->r7, 0X1B);
    // 0x8004DB84: srl         $t7, $s0, 1
    ctx->r15 = S32(U32(ctx->r16) >> 1);
    // 0x8004DB88: andi        $t6, $t5, 0xFFFE
    ctx->r14 = ctx->r13 & 0XFFFE;
    // 0x8004DB8C: sb          $t6, 0x1B($a3)
    MEM_B(0X1B, ctx->r7) = ctx->r14;
    // 0x8004DB90: beq         $t7, $zero, L_8004DBA4
    if (ctx->r15 == 0) {
        // 0x8004DB94: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_8004DBA4;
    }
    // 0x8004DB94: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8004DB98: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004DB9C: andi        $v0, $s0, 0x1
    ctx->r2 = ctx->r16 & 0X1;
    // 0x8004DBA0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8004DBA4:
    // 0x8004DBA4: lbu         $t9, 0x1B($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0X1B);
    // 0x8004DBA8: nop

    // 0x8004DBAC: or          $t1, $t9, $v0
    ctx->r9 = ctx->r25 | ctx->r2;
    // 0x8004DBB0: b           L_8004DC9C
    // 0x8004DBB4: sb          $t1, 0x1B($a3)
    MEM_B(0X1B, ctx->r7) = ctx->r9;
        goto L_8004DC9C;
    // 0x8004DBB4: sb          $t1, 0x1B($a3)
    MEM_B(0X1B, ctx->r7) = ctx->r9;
L_8004DBB8:
    // 0x8004DBB8: lbu         $t2, 0x1B($a3)
    ctx->r10 = MEM_BU(ctx->r7, 0X1B);
    // 0x8004DBBC: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x8004DBC0: andi        $t0, $t2, 0xFFCF
    ctx->r8 = ctx->r10 & 0XFFCF;
    // 0x8004DBC4: sb          $t0, 0x1B($a3)
    MEM_B(0X1B, ctx->r7) = ctx->r8;
    // 0x8004DBC8: bne         $at, $zero, L_8004DBD8
    if (ctx->r1 != 0) {
        // 0x8004DBCC: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_8004DBD8;
    }
    // 0x8004DBCC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8004DBD0: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x8004DBD4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8004DBD8:
    // 0x8004DBD8: lbu         $t3, 0x1B($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X1B);
    // 0x8004DBDC: sll         $t4, $v0, 4
    ctx->r12 = S32(ctx->r2 << 4);
    // 0x8004DBE0: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x8004DBE4: b           L_8004DC9C
    // 0x8004DBE8: sb          $t5, 0x1B($a3)
    MEM_B(0X1B, ctx->r7) = ctx->r13;
        goto L_8004DC9C;
    // 0x8004DBE8: sb          $t5, 0x1B($a3)
    MEM_B(0X1B, ctx->r7) = ctx->r13;
L_8004DBEC:
    // 0x8004DBEC: lbu         $t6, 0x1B($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X1B);
    // 0x8004DBF0: addiu       $v1, $zero, -0x89
    ctx->r3 = ADD32(0, -0X89);
    // 0x8004DBF4: and         $t8, $s0, $v1
    ctx->r24 = ctx->r16 & ctx->r3;
    // 0x8004DBF8: andi        $t7, $t6, 0xFF77
    ctx->r15 = ctx->r14 & 0XFF77;
    // 0x8004DBFC: sb          $t7, 0x1B($a3)
    MEM_B(0X1B, ctx->r7) = ctx->r15;
    // 0x8004DC00: beq         $t8, $zero, L_8004DC14
    if (ctx->r24 == 0) {
        // 0x8004DC04: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_8004DC14;
    }
    // 0x8004DC04: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8004DC08: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004DC0C: andi        $v0, $s0, 0x88
    ctx->r2 = ctx->r16 & 0X88;
    // 0x8004DC10: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8004DC14:
    // 0x8004DC14: lbu         $t1, 0x1B($a3)
    ctx->r9 = MEM_BU(ctx->r7, 0X1B);
    // 0x8004DC18: nop

    // 0x8004DC1C: or          $t2, $t1, $v0
    ctx->r10 = ctx->r9 | ctx->r2;
    // 0x8004DC20: b           L_8004DC9C
    // 0x8004DC24: sb          $t2, 0x1B($a3)
    MEM_B(0X1B, ctx->r7) = ctx->r10;
        goto L_8004DC9C;
    // 0x8004DC24: sb          $t2, 0x1B($a3)
    MEM_B(0X1B, ctx->r7) = ctx->r10;
L_8004DC28:
    // 0x8004DC28: lbu         $t0, 0x1B($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X1B);
    // 0x8004DC2C: addiu       $v1, $zero, -0x9
    ctx->r3 = ADD32(0, -0X9);
    // 0x8004DC30: and         $t4, $s0, $v1
    ctx->r12 = ctx->r16 & ctx->r3;
    // 0x8004DC34: andi        $t3, $t0, 0xFFF7
    ctx->r11 = ctx->r8 & 0XFFF7;
    // 0x8004DC38: sb          $t3, 0x1B($a3)
    MEM_B(0X1B, ctx->r7) = ctx->r11;
    // 0x8004DC3C: beq         $t4, $zero, L_8004DC50
    if (ctx->r12 == 0) {
        // 0x8004DC40: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_8004DC50;
    }
    // 0x8004DC40: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8004DC44: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004DC48: andi        $v0, $s0, 0x8
    ctx->r2 = ctx->r16 & 0X8;
    // 0x8004DC4C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8004DC50:
    // 0x8004DC50: lbu         $t6, 0x1B($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X1B);
    // 0x8004DC54: nop

    // 0x8004DC58: or          $t7, $t6, $v0
    ctx->r15 = ctx->r14 | ctx->r2;
    // 0x8004DC5C: b           L_8004DC9C
    // 0x8004DC60: sb          $t7, 0x1B($a3)
    MEM_B(0X1B, ctx->r7) = ctx->r15;
        goto L_8004DC9C;
    // 0x8004DC60: sb          $t7, 0x1B($a3)
    MEM_B(0X1B, ctx->r7) = ctx->r15;
L_8004DC64:
    // 0x8004DC64: lbu         $t8, 0x1B($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X1B);
    // 0x8004DC68: addiu       $v1, $zero, -0x81
    ctx->r3 = ADD32(0, -0X81);
    // 0x8004DC6C: and         $t1, $s0, $v1
    ctx->r9 = ctx->r16 & ctx->r3;
    // 0x8004DC70: andi        $t9, $t8, 0xFF7F
    ctx->r25 = ctx->r24 & 0XFF7F;
    // 0x8004DC74: sb          $t9, 0x1B($a3)
    MEM_B(0X1B, ctx->r7) = ctx->r25;
    // 0x8004DC78: beq         $t1, $zero, L_8004DC8C
    if (ctx->r9 == 0) {
        // 0x8004DC7C: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_8004DC8C;
    }
    // 0x8004DC7C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8004DC80: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8004DC84: andi        $v0, $s0, 0x80
    ctx->r2 = ctx->r16 & 0X80;
    // 0x8004DC88: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8004DC8C:
    // 0x8004DC8C: lbu         $t0, 0x1B($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X1B);
    // 0x8004DC90: nop

    // 0x8004DC94: or          $t3, $t0, $v0
    ctx->r11 = ctx->r8 | ctx->r2;
    // 0x8004DC98: sb          $t3, 0x1B($a3)
    MEM_B(0X1B, ctx->r7) = ctx->r11;
L_8004DC9C:
    // 0x8004DC9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004DCA0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8004DCA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8004DCA8: jr          $ra
    // 0x8004DCAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8004DCAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
