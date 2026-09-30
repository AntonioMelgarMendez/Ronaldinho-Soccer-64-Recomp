#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8003CAF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003CAF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003CAF4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8003CAF8: lh          $t7, 0x2A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2A);
    // 0x8003CAFC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003CB00: sll         $a3, $a1, 16
    ctx->r7 = S32(ctx->r5 << 16);
    // 0x8003CB04: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8003CB08: lb          $a2, 0x23($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X23);
    // 0x8003CB0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003CB10: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8003CB14: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x8003CB18: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x8003CB1C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003CB20: jal         0x8003C9C8
    // 0x8003CB24: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_8003C9C8(rdram, ctx);
        goto after_0;
    // 0x8003CB24: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x8003CB28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003CB2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003CB30: jr          $ra
    // 0x8003CB34: nop

    return;
    // 0x8003CB34: nop

;}
RECOMP_FUNC void func_8003CB48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003CB48: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8003CB4C: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8003CB50: addiu       $t8, $t7, 0x64
    ctx->r24 = ADD32(ctx->r15, 0X64);
    // 0x8003CB54: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8003CB58: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8003CB5C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8003CB60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8003CB64: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8003CB68: jr          $ra
    // 0x8003CB6C: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    return;
    // 0x8003CB6C: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
;}
RECOMP_FUNC void func_8003CB70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003CB70: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8003CB74: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8003CB78: addiu       $t8, $t7, 0x6B
    ctx->r24 = ADD32(ctx->r15, 0X6B);
    // 0x8003CB7C: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8003CB80: lui         $at, 0x4356
    ctx->r1 = S32(0X4356 << 16);
    // 0x8003CB84: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8003CB88: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8003CB8C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8003CB90: jr          $ra
    // 0x8003CB94: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    return;
    // 0x8003CB94: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
;}
RECOMP_FUNC void func_8003CB98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003CB98: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8003CB9C: lb          $t8, -0x32A1($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X32A1);
    // 0x8003CBA0: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8003CBA4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8003CBA8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8003CBAC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8003CBB0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8003CBB4: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8003CBB8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8003CBBC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8003CBC0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8003CBC4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8003CBC8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8003CBCC: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8003CBD0: addiu       $t0, $t0, -0x2F80
    ctx->r8 = ADD32(ctx->r8, -0X2F80);
    // 0x8003CBD4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8003CBD8: addu        $v0, $t9, $t0
    ctx->r2 = ADD32(ctx->r25, ctx->r8);
    // 0x8003CBDC: lb          $a1, 0x5($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X5);
    // 0x8003CBE0: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8003CBE4: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8003CBE8: blez        $a1, L_8003CC38
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8003CBEC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8003CC38;
    }
    // 0x8003CBEC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8003CBF0: addiu       $a2, $zero, 0x47C
    ctx->r6 = ADD32(0, 0X47C);
L_8003CBF4:
    // 0x8003CBF4: multu       $v1, $a2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003CBF8: mflo        $t1
    ctx->r9 = lo;
    // 0x8003CBFC: addu        $t2, $v0, $t1
    ctx->r10 = ADD32(ctx->r2, ctx->r9);
    // 0x8003CC00: lb          $t3, 0xC($t2)
    ctx->r11 = MEM_B(ctx->r10, 0XC);
    // 0x8003CC04: nop

    // 0x8003CC08: bne         $a0, $t3, L_8003CC20
    if (ctx->r4 != ctx->r11) {
        // 0x8003CC0C: nop
    
            goto L_8003CC20;
    }
    // 0x8003CC0C: nop

    // 0x8003CC10: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
    // 0x8003CC14: sra         $t4, $v0, 24
    ctx->r12 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8003CC18: jr          $ra
    // 0x8003CC1C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    return;
    // 0x8003CC1C: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_8003CC20:
    // 0x8003CC20: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003CC24: sll         $t5, $v1, 16
    ctx->r13 = S32(ctx->r3 << 16);
    // 0x8003CC28: sra         $v1, $t5, 16
    ctx->r3 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8003CC2C: slt         $at, $v1, $a1
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8003CC30: bne         $at, $zero, L_8003CBF4
    if (ctx->r1 != 0) {
        // 0x8003CC34: nop
    
            goto L_8003CBF4;
    }
    // 0x8003CC34: nop

L_8003CC38:
    // 0x8003CC38: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8003CC3C: jr          $ra
    // 0x8003CC40: nop

    return;
    // 0x8003CC40: nop

;}
RECOMP_FUNC void func_8003CC44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003CC44: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8003CC48: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8003CC4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003CC50: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003CC54: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003CC58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003CC5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003CC60: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003CC64: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003CC68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003CC6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003CC70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003CC74: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x8003CC78: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003CC7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003CC80: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003CC84: addu        $t8, $t7, $a1
    ctx->r24 = ADD32(ctx->r15, ctx->r5);
    // 0x8003CC88: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8003CC8C: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x8003CC90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003CC94: lb          $a0, -0x2F79($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X2F79);
    // 0x8003CC98: jal         0x8003CB98
    // 0x8003CC9C: nop

    func_8003CB98(rdram, ctx);
        goto after_0;
    // 0x8003CC9C: nop

    after_0:
    // 0x8003CCA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003CCA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003CCA8: jr          $ra
    // 0x8003CCAC: nop

    return;
    // 0x8003CCAC: nop

;}
RECOMP_FUNC void func_8003CCB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003CCB0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003CCB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003CCB8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003CCBC: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8003CCC0: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8003CCC4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8003CCC8: jal         0x8003CB98
    // 0x8003CCCC: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
    func_8003CB98(rdram, ctx);
        goto after_0;
    // 0x8003CCCC: sb          $zero, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = 0;
    after_0:
    // 0x8003CCD0: lbu         $v1, 0x1F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1F);
    // 0x8003CCD4: bltz        $v0, L_8003CCE4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8003CCD8: lb          $a0, 0x27($sp)
        ctx->r4 = MEM_B(ctx->r29, 0X27);
            goto L_8003CCE4;
    }
    // 0x8003CCD8: lb          $a0, 0x27($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X27);
    // 0x8003CCDC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8003CCE0: lb          $a0, 0x27($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X27);
L_8003CCE4:
    // 0x8003CCE4: jal         0x8003CB98
    // 0x8003CCE8: sb          $v1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r3;
    func_8003CB98(rdram, ctx);
        goto after_1;
    // 0x8003CCE8: sb          $v1, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r3;
    after_1:
    // 0x8003CCEC: lbu         $v1, 0x1F($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1F);
    // 0x8003CCF0: bltz        $v0, L_8003CCFC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8003CCF4: ori         $t8, $v1, 0x10
        ctx->r24 = ctx->r3 | 0X10;
            goto L_8003CCFC;
    }
    // 0x8003CCF4: ori         $t8, $v1, 0x10
    ctx->r24 = ctx->r3 | 0X10;
    // 0x8003CCF8: andi        $v1, $t8, 0xFF
    ctx->r3 = ctx->r24 & 0XFF;
L_8003CCFC:
    // 0x8003CCFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003CD00: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
    // 0x8003CD04: sra         $t0, $v0, 24
    ctx->r8 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8003CD08: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x8003CD0C: jr          $ra
    // 0x8003CD10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8003CD10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003CD14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003CD14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003CD18: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003CD1C: sll         $s1, $a0, 24
    ctx->r17 = S32(ctx->r4 << 24);
    // 0x8003CD20: sra         $t6, $s1, 24
    ctx->r14 = S32(SIGNED(ctx->r17) >> 24);
    // 0x8003CD24: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003CD28: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x8003CD2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003CD30: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003CD34: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003CD38: sll         $a0, $s0, 24
    ctx->r4 = S32(ctx->r16 << 24);
L_8003CD3C:
    // 0x8003CD3C: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8003CD40: jal         0x8003CD88
    // 0x8003CD44: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_8003CD88(rdram, ctx);
        goto after_0;
    // 0x8003CD44: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x8003CD48: bne         $v0, $s1, L_8003CD58
    if (ctx->r2 != ctx->r17) {
        // 0x8003CD4C: nop
    
            goto L_8003CD58;
    }
    // 0x8003CD4C: nop

    // 0x8003CD50: b           L_8003CD74
    // 0x8003CD54: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_8003CD74;
    // 0x8003CD54: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_8003CD58:
    // 0x8003CD58: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003CD5C: sll         $t8, $s0, 24
    ctx->r24 = S32(ctx->r16 << 24);
    // 0x8003CD60: sra         $s0, $t8, 24
    ctx->r16 = S32(SIGNED(ctx->r24) >> 24);
    // 0x8003CD64: slti        $at, $s0, 0x24
    ctx->r1 = SIGNED(ctx->r16) < 0X24 ? 1 : 0;
    // 0x8003CD68: bne         $at, $zero, L_8003CD3C
    if (ctx->r1 != 0) {
        // 0x8003CD6C: sll         $a0, $s0, 24
        ctx->r4 = S32(ctx->r16 << 24);
            goto L_8003CD3C;
    }
    // 0x8003CD6C: sll         $a0, $s0, 24
    ctx->r4 = S32(ctx->r16 << 24);
    // 0x8003CD70: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8003CD74:
    // 0x8003CD74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003CD78: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003CD7C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003CD80: jr          $ra
    // 0x8003CD84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8003CD84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003CD88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003CD88: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8003CD8C: lb          $t8, -0x32A1($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X32A1);
    // 0x8003CD90: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8003CD94: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8003CD98: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8003CD9C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8003CDA0: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8003CDA4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8003CDA8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8003CDAC: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x8003CDB0: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x8003CDB4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8003CDB8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8003CDBC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8003CDC0: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x8003CDC4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8003CDC8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8003CDCC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8003CDD0: subu        $t0, $t0, $t7
    ctx->r8 = SUB32(ctx->r8, ctx->r15);
    // 0x8003CDD4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8003CDD8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8003CDDC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8003CDE0: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8003CDE4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8003CDE8: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x8003CDEC: lb          $v0, -0x2AD4($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2AD4);
    // 0x8003CDF0: jr          $ra
    // 0x8003CDF4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8003CDF4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_8003CE34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003CE34: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8003CE38: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8003CE3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003CE40: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003CE44: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003CE48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003CE4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003CE50: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003CE54: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003CE58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003CE5C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003CE60: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8003CE64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003CE68: lb          $t2, 0x1F($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X1F);
    // 0x8003CE6C: lb          $t5, 0x23($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X23);
    // 0x8003CE70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003CE74: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003CE78: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8003CE7C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8003CE80: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8003CE84: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8003CE88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003CE8C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8003CE90: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003CE94: lb          $v1, 0x1B($sp)
    ctx->r3 = MEM_B(ctx->r29, 0X1B);
    // 0x8003CE98: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8003CE9C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8003CEA0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8003CEA4: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8003CEA8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003CEAC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8003CEB0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003CEB4: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8003CEB8: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8003CEBC: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x8003CEC0: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x8003CEC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003CEC8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8003CECC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003CED0: subu        $t9, $t9, $v1
    ctx->r25 = SUB32(ctx->r25, ctx->r3);
    // 0x8003CED4: addu        $t4, $v0, $t3
    ctx->r12 = ADD32(ctx->r2, ctx->r11);
    // 0x8003CED8: addu        $t7, $v0, $t6
    ctx->r15 = ADD32(ctx->r2, ctx->r14);
    // 0x8003CEDC: addu        $t0, $t4, $t9
    ctx->r8 = ADD32(ctx->r12, ctx->r25);
    // 0x8003CEE0: addu        $t1, $t7, $t9
    ctx->r9 = ADD32(ctx->r15, ctx->r25);
    // 0x8003CEE4: lb          $a0, 0x50F($t0)
    ctx->r4 = MEM_B(ctx->r8, 0X50F);
    // 0x8003CEE8: lb          $a1, 0x510($t0)
    ctx->r5 = MEM_B(ctx->r8, 0X510);
    // 0x8003CEEC: lb          $a2, 0x50F($t1)
    ctx->r6 = MEM_B(ctx->r9, 0X50F);
    // 0x8003CEF0: lb          $a3, 0x510($t1)
    ctx->r7 = MEM_B(ctx->r9, 0X510);
    // 0x8003CEF4: jal         0x8003CF0C
    // 0x8003CEF8: nop

    func_8003CF0C(rdram, ctx);
        goto after_0;
    // 0x8003CEF8: nop

    after_0:
    // 0x8003CEFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003CF00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003CF04: jr          $ra
    // 0x8003CF08: nop

    return;
    // 0x8003CF08: nop

;}
RECOMP_FUNC void func_8003CF0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003CF0C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8003CF10: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8003CF14: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8003CF18: sll         $t0, $a2, 16
    ctx->r8 = S32(ctx->r6 << 16);
    // 0x8003CF1C: sra         $a2, $t0, 16
    ctx->r6 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8003CF20: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8003CF24: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8003CF28: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x8003CF2C: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8003CF30: sll         $t2, $a3, 16
    ctx->r10 = S32(ctx->r7 << 16);
    // 0x8003CF34: slt         $at, $a2, $a0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8003CF38: sra         $a3, $t2, 16
    ctx->r7 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8003CF3C: beq         $at, $zero, L_8003CF4C
    if (ctx->r1 == 0) {
        // 0x8003CF40: sra         $a1, $t8, 16
        ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
            goto L_8003CF4C;
    }
    // 0x8003CF40: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8003CF44: jr          $ra
    // 0x8003CF48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8003CF48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003CF4C:
    // 0x8003CF4C: slt         $at, $a0, $a2
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8003CF50: beq         $at, $zero, L_8003CF64
    if (ctx->r1 == 0) {
        // 0x8003CF54: slt         $at, $a3, $a1
        ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r5) ? 1 : 0;
            goto L_8003CF64;
    }
    // 0x8003CF54: slt         $at, $a3, $a1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8003CF58: jr          $ra
    // 0x8003CF5C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x8003CF5C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8003CF60: slt         $at, $a3, $a1
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r5) ? 1 : 0;
L_8003CF64:
    // 0x8003CF64: beq         $at, $zero, L_8003CF78
    if (ctx->r1 == 0) {
        // 0x8003CF68: slt         $at, $a1, $a3
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r7) ? 1 : 0;
            goto L_8003CF78;
    }
    // 0x8003CF68: slt         $at, $a1, $a3
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8003CF6C: jr          $ra
    // 0x8003CF70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8003CF70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003CF74: slt         $at, $a1, $a3
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r7) ? 1 : 0;
L_8003CF78:
    // 0x8003CF78: beq         $at, $zero, L_8003CF88
    if (ctx->r1 == 0) {
        // 0x8003CF7C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8003CF88;
    }
    // 0x8003CF7C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8003CF80: jr          $ra
    // 0x8003CF84: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x8003CF84: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8003CF88:
    // 0x8003CF88: jr          $ra
    // 0x8003CF8C: nop

    return;
    // 0x8003CF8C: nop

;}
RECOMP_FUNC void func_8003CF90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003CF90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003CF94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003CF98: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003CF9C: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8003CFA0: jal         0x8003CD88
    // 0x8003CFA4: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    func_8003CD88(rdram, ctx);
        goto after_0;
    // 0x8003CFA4: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    after_0:
    // 0x8003CFA8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003CFAC: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8003CFB0: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x8003CFB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003CFB8: bne         $v0, $t8, L_8003CFC8
    if (ctx->r2 != ctx->r24) {
        // 0x8003CFBC: nop
    
            goto L_8003CFC8;
    }
    // 0x8003CFBC: nop

    // 0x8003CFC0: b           L_8003CFE4
    // 0x8003CFC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003CFE4;
    // 0x8003CFC4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003CFC8:
    // 0x8003CFC8: lbu         $t9, 0xA94($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0XA94);
    // 0x8003CFCC: nop

    // 0x8003CFD0: bne         $v0, $t9, L_8003CFE4
    if (ctx->r2 != ctx->r25) {
        // 0x8003CFD4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8003CFE4;
    }
    // 0x8003CFD4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8003CFD8: b           L_8003CFE4
    // 0x8003CFDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003CFE4;
    // 0x8003CFDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003CFE0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8003CFE4:
    // 0x8003CFE4: jr          $ra
    // 0x8003CFE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003CFE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003CFEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003CFEC: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8003CFF0: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8003CFF4: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x8003CFF8: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x8003CFFC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8003D000: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x8003D004: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8003D008: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x8003D00C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8003D010: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x8003D014: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8003D018: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8003D01C: sll         $t8, $a1, 24
    ctx->r24 = S32(ctx->r5 << 24);
    // 0x8003D020: addiu       $t1, $t1, -0x2CF0
    ctx->r9 = ADD32(ctx->r9, -0X2CF0);
    // 0x8003D024: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8003D028: sra         $a1, $t8, 24
    ctx->r5 = S32(SIGNED(ctx->r24) >> 24);
    // 0x8003D02C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8003D030: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x8003D034: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8003D038: addu        $t2, $v0, $v1
    ctx->r10 = ADD32(ctx->r2, ctx->r3);
L_8003D03C:
    // 0x8003D03C: lbu         $t3, 0x308($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X308);
    // 0x8003D040: nop

    // 0x8003D044: bne         $a1, $t3, L_8003D05C
    if (ctx->r5 != ctx->r11) {
        // 0x8003D048: nop
    
            goto L_8003D05C;
    }
    // 0x8003D048: nop

    // 0x8003D04C: sll         $v0, $v1, 24
    ctx->r2 = S32(ctx->r3 << 24);
    // 0x8003D050: sra         $t4, $v0, 24
    ctx->r12 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8003D054: jr          $ra
    // 0x8003D058: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    return;
    // 0x8003D058: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_8003D05C:
    // 0x8003D05C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8003D060: sll         $t5, $v1, 16
    ctx->r13 = S32(ctx->r3 << 16);
    // 0x8003D064: sra         $v1, $t5, 16
    ctx->r3 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8003D068: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8003D06C: bne         $at, $zero, L_8003D03C
    if (ctx->r1 != 0) {
        // 0x8003D070: addu        $t2, $v0, $v1
        ctx->r10 = ADD32(ctx->r2, ctx->r3);
            goto L_8003D03C;
    }
    // 0x8003D070: addu        $t2, $v0, $v1
    ctx->r10 = ADD32(ctx->r2, ctx->r3);
    // 0x8003D074: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8003D078: jr          $ra
    // 0x8003D07C: nop

    return;
    // 0x8003D07C: nop

;}
RECOMP_FUNC void func_8003D080(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003D080: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003D084: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003D088: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003D08C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8003D090: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8003D094: or          $t7, $a1, $zero
    ctx->r15 = ctx->r5 | 0;
    // 0x8003D098: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x8003D09C: jal         0x8004DCB0
    // 0x8003D0A0: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    func_8004DCB0(rdram, ctx);
        goto after_0;
    // 0x8003D0A0: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    after_0:
    // 0x8003D0A4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8003D0A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003D0AC: jal         0x8004D880
    // 0x8003D0B0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004D880(rdram, ctx);
        goto after_1;
    // 0x8003D0B0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_1:
    // 0x8003D0B4: andi        $t8, $v0, 0x88
    ctx->r24 = ctx->r2 & 0X88;
    // 0x8003D0B8: bne         $t8, $zero, L_8003D0F0
    if (ctx->r24 != 0) {
        // 0x8003D0BC: nop
    
            goto L_8003D0F0;
    }
    // 0x8003D0BC: nop

    // 0x8003D0C0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8003D0C4: jal         0x8004D880
    // 0x8003D0C8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8004D880(rdram, ctx);
        goto after_2;
    // 0x8003D0C8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x8003D0CC: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8003D0D0: beq         $at, $zero, L_8003D0F0
    if (ctx->r1 == 0) {
        // 0x8003D0D4: nop
    
            goto L_8003D0F0;
    }
    // 0x8003D0D4: nop

    // 0x8003D0D8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8003D0DC: jal         0x8004D880
    // 0x8003D0E0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8004D880(rdram, ctx);
        goto after_3;
    // 0x8003D0E0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_3:
    // 0x8003D0E4: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
    // 0x8003D0E8: beq         $t9, $zero, L_8003D0F8
    if (ctx->r25 == 0) {
        // 0x8003D0EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8003D0F8;
    }
    // 0x8003D0EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003D0F0:
    // 0x8003D0F0: b           L_8003D0F8
    // 0x8003D0F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003D0F8;
    // 0x8003D0F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003D0F8:
    // 0x8003D0F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003D0FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003D100: jr          $ra
    // 0x8003D104: nop

    return;
    // 0x8003D104: nop

;}
RECOMP_FUNC void func_8003D108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003D108: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003D10C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003D110: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003D114: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8003D118: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8003D11C: or          $t7, $a1, $zero
    ctx->r15 = ctx->r5 | 0;
    // 0x8003D120: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x8003D124: jal         0x8004DCB0
    // 0x8003D128: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    func_8004DCB0(rdram, ctx);
        goto after_0;
    // 0x8003D128: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    after_0:
    // 0x8003D12C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8003D130: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003D134: jal         0x8004D880
    // 0x8003D138: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004D880(rdram, ctx);
        goto after_1;
    // 0x8003D138: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_1:
    // 0x8003D13C: andi        $t8, $v0, 0x88
    ctx->r24 = ctx->r2 & 0X88;
    // 0x8003D140: bne         $t8, $zero, L_8003D178
    if (ctx->r24 != 0) {
        // 0x8003D144: nop
    
            goto L_8003D178;
    }
    // 0x8003D144: nop

    // 0x8003D148: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8003D14C: jal         0x8004D880
    // 0x8003D150: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8004D880(rdram, ctx);
        goto after_2;
    // 0x8003D150: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_2:
    // 0x8003D154: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8003D158: beq         $at, $zero, L_8003D178
    if (ctx->r1 == 0) {
        // 0x8003D15C: nop
    
            goto L_8003D178;
    }
    // 0x8003D15C: nop

    // 0x8003D160: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8003D164: jal         0x8004D880
    // 0x8003D168: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8004D880(rdram, ctx);
        goto after_3;
    // 0x8003D168: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_3:
    // 0x8003D16C: andi        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 & 0X1;
    // 0x8003D170: beq         $t9, $zero, L_8003D180
    if (ctx->r25 == 0) {
        // 0x8003D174: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8003D180;
    }
    // 0x8003D174: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003D178:
    // 0x8003D178: b           L_8003D180
    // 0x8003D17C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003D180;
    // 0x8003D17C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003D180:
    // 0x8003D180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003D184: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003D188: jr          $ra
    // 0x8003D18C: nop

    return;
    // 0x8003D18C: nop

;}
RECOMP_FUNC void func_8003D190(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003D190: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003D194: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003D198: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003D19C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8003D1A0: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x8003D1A4: or          $t7, $a1, $zero
    ctx->r15 = ctx->r5 | 0;
    // 0x8003D1A8: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x8003D1AC: jal         0x8004DCB0
    // 0x8003D1B0: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    func_8004DCB0(rdram, ctx);
        goto after_0;
    // 0x8003D1B0: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    after_0:
    // 0x8003D1B4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8003D1B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8003D1BC: jal         0x8004D880
    // 0x8003D1C0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004D880(rdram, ctx);
        goto after_1;
    // 0x8003D1C0: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_1:
    // 0x8003D1C4: andi        $t8, $v0, 0x88
    ctx->r24 = ctx->r2 & 0X88;
    // 0x8003D1C8: bne         $t8, $zero, L_8003D1E8
    if (ctx->r24 != 0) {
        // 0x8003D1CC: nop
    
            goto L_8003D1E8;
    }
    // 0x8003D1CC: nop

    // 0x8003D1D0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8003D1D4: jal         0x8004D880
    // 0x8003D1D8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8004D880(rdram, ctx);
        goto after_2;
    // 0x8003D1D8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_2:
    // 0x8003D1DC: andi        $t9, $v0, 0x4
    ctx->r25 = ctx->r2 & 0X4;
    // 0x8003D1E0: beq         $t9, $zero, L_8003D1F0
    if (ctx->r25 == 0) {
        // 0x8003D1E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8003D1F0;
    }
    // 0x8003D1E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003D1E8:
    // 0x8003D1E8: b           L_8003D1F0
    // 0x8003D1EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003D1F0;
    // 0x8003D1EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003D1F0:
    // 0x8003D1F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003D1F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003D1F8: jr          $ra
    // 0x8003D1FC: nop

    return;
    // 0x8003D1FC: nop

;}
RECOMP_FUNC void func_8003D208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003D208: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8003D20C: lb          $v0, -0x32A1($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X32A1);
    // 0x8003D210: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003D214: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8003D218: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8003D21C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003D220: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x8003D224: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8003D228: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8003D22C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003D230: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x8003D234: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003D238: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8003D23C: lbu         $t8, -0x3078($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X3078);
    // 0x8003D240: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8003D244: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8003D248: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003D24C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8003D250: addiu       $t7, $t7, -0x2F80
    ctx->r15 = ADD32(ctx->r15, -0X2F80);
    // 0x8003D254: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003D258: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8003D25C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8003D260: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003D264: bne         $t8, $zero, L_8003D270
    if (ctx->r24 != 0) {
        // 0x8003D268: addu        $s1, $t6, $t7
        ctx->r17 = ADD32(ctx->r14, ctx->r15);
            goto L_8003D270;
    }
    // 0x8003D268: addu        $s1, $t6, $t7
    ctx->r17 = ADD32(ctx->r14, ctx->r15);
    // 0x8003D26C: beq         $v0, $zero, L_8003D2E4
    if (ctx->r2 == 0) {
        // 0x8003D270: lui         $s3, 0x801B
        ctx->r19 = S32(0X801B << 16);
            goto L_8003D2E4;
    }
L_8003D270:
    // 0x8003D270: lui         $s3, 0x801B
    ctx->r19 = S32(0X801B << 16);
    // 0x8003D274: addiu       $s3, $s3, -0x42D0
    ctx->r19 = ADD32(ctx->r19, -0X42D0);
    // 0x8003D278: lb          $a0, 0x4($s1)
    ctx->r4 = MEM_B(ctx->r17, 0X4);
    // 0x8003D27C: jal         0x8001CC34
    // 0x8003D280: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_8001CC34(rdram, ctx);
        goto after_0;
    // 0x8003D280: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_0:
    // 0x8003D284: lb          $t9, 0x4($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X4);
    // 0x8003D288: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003D28C: blez        $t9, L_8003D330
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8003D290: addiu       $s2, $zero, 0x14C
        ctx->r18 = ADD32(0, 0X14C);
            goto L_8003D330;
    }
    // 0x8003D290: addiu       $s2, $zero, 0x14C
    ctx->r18 = ADD32(0, 0X14C);
L_8003D294:
    // 0x8003D294: multu       $s0, $s2
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003D298: sll         $t0, $s0, 1
    ctx->r8 = S32(ctx->r16 << 1);
    // 0x8003D29C: addu        $t1, $s3, $t0
    ctx->r9 = ADD32(ctx->r19, ctx->r8);
    // 0x8003D2A0: lh          $t2, 0x0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X0);
    // 0x8003D2A4: sll         $a0, $s0, 24
    ctx->r4 = S32(ctx->r16 << 24);
    // 0x8003D2A8: sra         $t5, $a0, 24
    ctx->r13 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8003D2AC: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x8003D2B0: mflo        $t3
    ctx->r11 = lo;
    // 0x8003D2B4: addu        $t4, $s1, $t3
    ctx->r12 = ADD32(ctx->r17, ctx->r11);
    // 0x8003D2B8: jal         0x8003CD88
    // 0x8003D2BC: sb          $t2, 0x4AC($t4)
    MEM_B(0X4AC, ctx->r12) = ctx->r10;
    func_8003CD88(rdram, ctx);
        goto after_1;
    // 0x8003D2BC: sb          $t2, 0x4AC($t4)
    MEM_B(0X4AC, ctx->r12) = ctx->r10;
    after_1:
    // 0x8003D2C0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003D2C4: lb          $t8, 0x4($s1)
    ctx->r24 = MEM_B(ctx->r17, 0X4);
    // 0x8003D2C8: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x8003D2CC: sra         $s0, $t6, 16
    ctx->r16 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8003D2D0: slt         $at, $s0, $t8
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8003D2D4: bne         $at, $zero, L_8003D294
    if (ctx->r1 != 0) {
        // 0x8003D2D8: nop
    
            goto L_8003D294;
    }
    // 0x8003D2D8: nop

    // 0x8003D2DC: b           L_8003D334
    // 0x8003D2E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8003D334;
    // 0x8003D2E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8003D2E4:
    // 0x8003D2E4: lb          $t9, 0x4($s1)
    ctx->r25 = MEM_B(ctx->r17, 0X4);
    // 0x8003D2E8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003D2EC: blez        $t9, L_8003D330
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8003D2F0: addiu       $s2, $zero, 0x14C
        ctx->r18 = ADD32(0, 0X14C);
            goto L_8003D330;
    }
    // 0x8003D2F0: addiu       $s2, $zero, 0x14C
    ctx->r18 = ADD32(0, 0X14C);
L_8003D2F4:
    // 0x8003D2F4: multu       $s0, $s2
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003D2F8: sll         $a0, $s0, 24
    ctx->r4 = S32(ctx->r16 << 24);
    // 0x8003D2FC: sra         $t3, $a0, 24
    ctx->r11 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8003D300: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x8003D304: mflo        $t0
    ctx->r8 = lo;
    // 0x8003D308: addu        $t1, $s1, $t0
    ctx->r9 = ADD32(ctx->r17, ctx->r8);
    // 0x8003D30C: jal         0x8003CD88
    // 0x8003D310: sb          $s0, 0x4AC($t1)
    MEM_B(0X4AC, ctx->r9) = ctx->r16;
    func_8003CD88(rdram, ctx);
        goto after_2;
    // 0x8003D310: sb          $s0, 0x4AC($t1)
    MEM_B(0X4AC, ctx->r9) = ctx->r16;
    after_2:
    // 0x8003D314: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003D318: lb          $t5, 0x4($s1)
    ctx->r13 = MEM_B(ctx->r17, 0X4);
    // 0x8003D31C: sll         $t2, $s0, 16
    ctx->r10 = S32(ctx->r16 << 16);
    // 0x8003D320: sra         $s0, $t2, 16
    ctx->r16 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8003D324: slt         $at, $s0, $t5
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8003D328: bne         $at, $zero, L_8003D2F4
    if (ctx->r1 != 0) {
        // 0x8003D32C: nop
    
            goto L_8003D2F4;
    }
    // 0x8003D32C: nop

L_8003D330:
    // 0x8003D330: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8003D334:
    // 0x8003D334: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003D338: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003D33C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8003D340: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8003D344: jr          $ra
    // 0x8003D348: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8003D348: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003D34C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003D34C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8003D350: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8003D354: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003D358: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003D35C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003D360: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003D364: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003D368: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003D36C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003D370: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003D374: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003D378: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003D37C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003D380: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8003D384: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8003D388: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003D38C: addiu       $s1, $s1, -0x7A60
    ctx->r17 = ADD32(ctx->r17, -0X7A60);
    // 0x8003D390: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8003D394: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8003D398: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003D39C: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8003D3A0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8003D3A4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003D3A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003D3AC: addu        $s3, $t7, $t8
    ctx->r19 = ADD32(ctx->r15, ctx->r24);
    // 0x8003D3B0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8003D3B4: jal         0x8001CB74
    // 0x8003D3B8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8001CB74(rdram, ctx);
        goto after_0;
    // 0x8003D3B8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x8003D3BC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003D3C0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8003D3C4: addiu       $s4, $zero, 0x14C
    ctx->r20 = ADD32(0, 0X14C);
L_8003D3C8:
    // 0x8003D3C8: multu       $s2, $s4
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003D3CC: sll         $t9, $s0, 1
    ctx->r25 = S32(ctx->r16 << 1);
    // 0x8003D3D0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003D3D4: sll         $t4, $s0, 16
    ctx->r12 = S32(ctx->r16 << 16);
    // 0x8003D3D8: addu        $t0, $s1, $t9
    ctx->r8 = ADD32(ctx->r17, ctx->r25);
    // 0x8003D3DC: lh          $t1, 0x0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X0);
    // 0x8003D3E0: sra         $s0, $t4, 16
    ctx->r16 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8003D3E4: addiu       $s2, $s2, 0x3
    ctx->r18 = ADD32(ctx->r18, 0X3);
    // 0x8003D3E8: sll         $t6, $s2, 16
    ctx->r14 = S32(ctx->r18 << 16);
    // 0x8003D3EC: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x8003D3F0: sra         $s2, $t6, 16
    ctx->r18 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8003D3F4: mflo        $t2
    ctx->r10 = lo;
    // 0x8003D3F8: addu        $t3, $s3, $t2
    ctx->r11 = ADD32(ctx->r19, ctx->r10);
    // 0x8003D3FC: bne         $at, $zero, L_8003D3C8
    if (ctx->r1 != 0) {
        // 0x8003D400: sb          $t1, 0x4AC($t3)
        MEM_B(0X4AC, ctx->r11) = ctx->r9;
            goto L_8003D3C8;
    }
    // 0x8003D400: sb          $t1, 0x4AC($t3)
    MEM_B(0X4AC, ctx->r11) = ctx->r9;
    // 0x8003D404: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8003D408: addiu       $s1, $s1, -0x7A50
    ctx->r17 = ADD32(ctx->r17, -0X7A50);
    // 0x8003D40C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8003D410: jal         0x8001CB74
    // 0x8003D414: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_8001CB74(rdram, ctx);
        goto after_1;
    // 0x8003D414: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x8003D418: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003D41C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_8003D420:
    // 0x8003D420: multu       $s2, $s4
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003D424: sll         $t9, $s0, 1
    ctx->r25 = S32(ctx->r16 << 1);
    // 0x8003D428: addu        $v1, $s1, $t9
    ctx->r3 = ADD32(ctx->r17, ctx->r25);
    // 0x8003D42C: lh          $t0, 0x0($v1)
    ctx->r8 = MEM_H(ctx->r3, 0X0);
    // 0x8003D430: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8003D434: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x8003D438: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8003D43C: addiu       $s2, $s2, 0x3
    ctx->r18 = ADD32(ctx->r18, 0X3);
    // 0x8003D440: sll         $t4, $s2, 16
    ctx->r12 = S32(ctx->r18 << 16);
    // 0x8003D444: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x8003D448: sra         $s2, $t4, 16
    ctx->r18 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8003D44C: mflo        $t8
    ctx->r24 = lo;
    // 0x8003D450: addu        $v0, $s3, $t8
    ctx->r2 = ADD32(ctx->r19, ctx->r24);
    // 0x8003D454: sb          $t0, 0x4AC($v0)
    MEM_B(0X4AC, ctx->r2) = ctx->r8;
    // 0x8003D458: lh          $t2, 0x2($v1)
    ctx->r10 = MEM_H(ctx->r3, 0X2);
    // 0x8003D45C: bne         $at, $zero, L_8003D420
    if (ctx->r1 != 0) {
        // 0x8003D460: sb          $t2, 0x5F8($v0)
        MEM_B(0X5F8, ctx->r2) = ctx->r10;
            goto L_8003D420;
    }
    // 0x8003D460: sb          $t2, 0x5F8($v0)
    MEM_B(0X5F8, ctx->r2) = ctx->r10;
    // 0x8003D464: lui         $s1, 0x801B
    ctx->r17 = S32(0X801B << 16);
    // 0x8003D468: addiu       $s1, $s1, -0x42D0
    ctx->r17 = ADD32(ctx->r17, -0X42D0);
    // 0x8003D46C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8003D470: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
L_8003D474:
    // 0x8003D474: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8003D478: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8003D47C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8003D480: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8003D484: subu        $v0, $v0, $s2
    ctx->r2 = SUB32(ctx->r2, ctx->r18);
    // 0x8003D488: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8003D48C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8003D490:
    // 0x8003D490: sll         $t6, $s0, 2
    ctx->r14 = S32(ctx->r16 << 2);
    // 0x8003D494: addu        $t6, $t6, $s0
    ctx->r14 = ADD32(ctx->r14, ctx->r16);
    // 0x8003D498: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003D49C: addu        $t6, $t6, $s0
    ctx->r14 = ADD32(ctx->r14, ctx->r16);
    // 0x8003D4A0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003D4A4: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x8003D4A8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003D4AC: sll         $t0, $s0, 1
    ctx->r8 = S32(ctx->r16 << 1);
    // 0x8003D4B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003D4B4: addu        $t7, $s3, $t6
    ctx->r15 = ADD32(ctx->r19, ctx->r14);
    // 0x8003D4B8: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x8003D4BC: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x8003D4C0: lb          $t9, 0x4AC($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X4AC);
    // 0x8003D4C4: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8003D4C8: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x8003D4CC: addu        $t2, $s1, $t0
    ctx->r10 = ADD32(ctx->r17, ctx->r8);
    // 0x8003D4D0: bne         $at, $zero, L_8003D490
    if (ctx->r1 != 0) {
        // 0x8003D4D4: sh          $t9, 0x0($t2)
        MEM_H(0X0, ctx->r10) = ctx->r25;
            goto L_8003D490;
    }
    // 0x8003D4D4: sh          $t9, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r25;
    // 0x8003D4D8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8003D4DC: jal         0x8001CB74
    // 0x8003D4E0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8001CB74(rdram, ctx);
        goto after_2;
    // 0x8003D4E0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_2:
    // 0x8003D4E4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003D4E8: addu        $v0, $s0, $s2
    ctx->r2 = ADD32(ctx->r16, ctx->r18);
L_8003D4EC:
    // 0x8003D4EC: multu       $v0, $s4
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003D4F0: sll         $t4, $s0, 1
    ctx->r12 = S32(ctx->r16 << 1);
    // 0x8003D4F4: addu        $t5, $s1, $t4
    ctx->r13 = ADD32(ctx->r17, ctx->r12);
    // 0x8003D4F8: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x8003D4FC: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x8003D500: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8003D504: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x8003D508: mflo        $t7
    ctx->r15 = lo;
    // 0x8003D50C: addu        $t8, $s3, $t7
    ctx->r24 = ADD32(ctx->r19, ctx->r15);
    // 0x8003D510: jal         0x8003CD88
    // 0x8003D514: sb          $t6, 0x4AC($t8)
    MEM_B(0X4AC, ctx->r24) = ctx->r14;
    func_8003CD88(rdram, ctx);
        goto after_3;
    // 0x8003D514: sb          $t6, 0x4AC($t8)
    MEM_B(0X4AC, ctx->r24) = ctx->r14;
    after_3:
    // 0x8003D518: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003D51C: sll         $t9, $s0, 16
    ctx->r25 = S32(ctx->r16 << 16);
    // 0x8003D520: sra         $s0, $t9, 16
    ctx->r16 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8003D524: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x8003D528: bne         $at, $zero, L_8003D4EC
    if (ctx->r1 != 0) {
        // 0x8003D52C: addu        $v0, $s0, $s2
        ctx->r2 = ADD32(ctx->r16, ctx->r18);
            goto L_8003D4EC;
    }
    // 0x8003D52C: addu        $v0, $s0, $s2
    ctx->r2 = ADD32(ctx->r16, ctx->r18);
    // 0x8003D530: addiu       $s2, $s2, 0x3
    ctx->r18 = ADD32(ctx->r18, 0X3);
    // 0x8003D534: sll         $t1, $s2, 16
    ctx->r9 = S32(ctx->r18 << 16);
    // 0x8003D538: sra         $s2, $t1, 16
    ctx->r18 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8003D53C: slti        $at, $s2, 0x18
    ctx->r1 = SIGNED(ctx->r18) < 0X18 ? 1 : 0;
    // 0x8003D540: bne         $at, $zero, L_8003D474
    if (ctx->r1 != 0) {
        // 0x8003D544: sll         $v0, $s2, 2
        ctx->r2 = S32(ctx->r18 << 2);
            goto L_8003D474;
    }
    // 0x8003D544: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
    // 0x8003D548: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8003D54C: addiu       $s1, $s1, -0x7A30
    ctx->r17 = ADD32(ctx->r17, -0X7A30);
    // 0x8003D550: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8003D554: jal         0x8001CB74
    // 0x8003D558: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8001CB74(rdram, ctx);
        goto after_4;
    // 0x8003D558: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_4:
    // 0x8003D55C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8003D560:
    // 0x8003D560: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003D564: sll         $t4, $s0, 1
    ctx->r12 = S32(ctx->r16 << 1);
    // 0x8003D568: addu        $t5, $s1, $t4
    ctx->r13 = ADD32(ctx->r17, ctx->r12);
    // 0x8003D56C: lh          $t7, 0x0($t5)
    ctx->r15 = MEM_H(ctx->r13, 0X0);
    // 0x8003D570: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    // 0x8003D574: sll         $t0, $a0, 24
    ctx->r8 = S32(ctx->r4 << 24);
    // 0x8003D578: sra         $a0, $t0, 24
    ctx->r4 = S32(SIGNED(ctx->r8) >> 24);
    // 0x8003D57C: mflo        $t6
    ctx->r14 = lo;
    // 0x8003D580: addu        $t8, $s3, $t6
    ctx->r24 = ADD32(ctx->r19, ctx->r14);
    // 0x8003D584: jal         0x8003CD88
    // 0x8003D588: sb          $t7, 0x23CC($t8)
    MEM_B(0X23CC, ctx->r24) = ctx->r15;
    func_8003CD88(rdram, ctx);
        goto after_5;
    // 0x8003D588: sb          $t7, 0x23CC($t8)
    MEM_B(0X23CC, ctx->r24) = ctx->r15;
    after_5:
    // 0x8003D58C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003D590: sll         $t2, $s0, 16
    ctx->r10 = S32(ctx->r16 << 16);
    // 0x8003D594: sra         $s0, $t2, 16
    ctx->r16 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8003D598: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x8003D59C: bne         $at, $zero, L_8003D560
    if (ctx->r1 != 0) {
        // 0x8003D5A0: nop
    
            goto L_8003D560;
    }
    // 0x8003D5A0: nop

    // 0x8003D5A4: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8003D5A8: addiu       $s1, $s1, -0x7A28
    ctx->r17 = ADD32(ctx->r17, -0X7A28);
    // 0x8003D5AC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8003D5B0: jal         0x8001CB74
    // 0x8003D5B4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8001CB74(rdram, ctx);
        goto after_6;
    // 0x8003D5B4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_6:
    // 0x8003D5B8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8003D5BC:
    // 0x8003D5BC: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003D5C0: sll         $t3, $s0, 1
    ctx->r11 = S32(ctx->r16 << 1);
    // 0x8003D5C4: addu        $t4, $s1, $t3
    ctx->r12 = ADD32(ctx->r17, ctx->r11);
    // 0x8003D5C8: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x8003D5CC: addiu       $a0, $s0, 0x1B
    ctx->r4 = ADD32(ctx->r16, 0X1B);
    // 0x8003D5D0: sll         $t8, $a0, 24
    ctx->r24 = S32(ctx->r4 << 24);
    // 0x8003D5D4: sra         $a0, $t8, 24
    ctx->r4 = S32(SIGNED(ctx->r24) >> 24);
    // 0x8003D5D8: mflo        $t6
    ctx->r14 = lo;
    // 0x8003D5DC: addu        $t7, $s3, $t6
    ctx->r15 = ADD32(ctx->r19, ctx->r14);
    // 0x8003D5E0: jal         0x8003CD88
    // 0x8003D5E4: sb          $t5, 0x27B0($t7)
    MEM_B(0X27B0, ctx->r15) = ctx->r13;
    func_8003CD88(rdram, ctx);
        goto after_7;
    // 0x8003D5E4: sb          $t5, 0x27B0($t7)
    MEM_B(0X27B0, ctx->r15) = ctx->r13;
    after_7:
    // 0x8003D5E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003D5EC: sll         $t9, $s0, 16
    ctx->r25 = S32(ctx->r16 << 16);
    // 0x8003D5F0: sra         $s0, $t9, 16
    ctx->r16 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8003D5F4: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x8003D5F8: bne         $at, $zero, L_8003D5BC
    if (ctx->r1 != 0) {
        // 0x8003D5FC: nop
    
            goto L_8003D5BC;
    }
    // 0x8003D5FC: nop

    // 0x8003D600: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8003D604: addiu       $s1, $s1, -0x7A20
    ctx->r17 = ADD32(ctx->r17, -0X7A20);
    // 0x8003D608: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x8003D60C: jal         0x8001CB74
    // 0x8003D610: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8001CB74(rdram, ctx);
        goto after_8;
    // 0x8003D610: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_8:
    // 0x8003D614: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8003D618:
    // 0x8003D618: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003D61C: sll         $t1, $s0, 1
    ctx->r9 = S32(ctx->r16 << 1);
    // 0x8003D620: addu        $t3, $s1, $t1
    ctx->r11 = ADD32(ctx->r17, ctx->r9);
    // 0x8003D624: lh          $t4, 0x0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X0);
    // 0x8003D628: addiu       $a0, $s0, 0x1E
    ctx->r4 = ADD32(ctx->r16, 0X1E);
    // 0x8003D62C: sll         $t7, $a0, 24
    ctx->r15 = S32(ctx->r4 << 24);
    // 0x8003D630: sra         $a0, $t7, 24
    ctx->r4 = S32(SIGNED(ctx->r15) >> 24);
    // 0x8003D634: mflo        $t6
    ctx->r14 = lo;
    // 0x8003D638: addu        $t5, $s3, $t6
    ctx->r13 = ADD32(ctx->r19, ctx->r14);
    // 0x8003D63C: jal         0x8003CD88
    // 0x8003D640: sb          $t4, 0x2B94($t5)
    MEM_B(0X2B94, ctx->r13) = ctx->r12;
    func_8003CD88(rdram, ctx);
        goto after_9;
    // 0x8003D640: sb          $t4, 0x2B94($t5)
    MEM_B(0X2B94, ctx->r13) = ctx->r12;
    after_9:
    // 0x8003D644: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003D648: sll         $t0, $s0, 16
    ctx->r8 = S32(ctx->r16 << 16);
    // 0x8003D64C: sra         $s0, $t0, 16
    ctx->r16 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8003D650: slti        $at, $s0, 0x6
    ctx->r1 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
    // 0x8003D654: bne         $at, $zero, L_8003D618
    if (ctx->r1 != 0) {
        // 0x8003D658: nop
    
            goto L_8003D618;
    }
    // 0x8003D658: nop

    // 0x8003D65C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8003D660: lb          $a0, -0x2CF0($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X2CF0);
    // 0x8003D664: jal         0x8003CD14
    // 0x8003D668: nop

    func_8003CD14(rdram, ctx);
        goto after_10;
    // 0x8003D668: nop

    after_10:
    // 0x8003D66C: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x8003D670: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8003D674: sra         $t2, $s1, 16
    ctx->r10 = S32(SIGNED(ctx->r17) >> 16);
    // 0x8003D678: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8003D67C: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x8003D680: jal         0x80049954
    // 0x8003D684: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    func_80049954(rdram, ctx);
        goto after_11;
    // 0x8003D684: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_11:
    // 0x8003D688: beq         $v0, $zero, L_8003D6E4
    if (ctx->r2 == 0) {
        // 0x8003D68C: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_8003D6E4;
    }
    // 0x8003D68C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8003D690: multu       $s1, $s4
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003D694: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x8003D698: addu        $t6, $t6, $s1
    ctx->r14 = ADD32(ctx->r14, ctx->r17);
    // 0x8003D69C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003D6A0: addu        $t6, $t6, $s1
    ctx->r14 = ADD32(ctx->r14, ctx->r17);
    // 0x8003D6A4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003D6A8: subu        $t6, $t6, $s1
    ctx->r14 = SUB32(ctx->r14, ctx->r17);
    // 0x8003D6AC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003D6B0: addu        $t4, $s3, $t6
    ctx->r12 = ADD32(ctx->r19, ctx->r14);
    // 0x8003D6B4: mflo        $t3
    ctx->r11 = lo;
    // 0x8003D6B8: addu        $v1, $s3, $t3
    ctx->r3 = ADD32(ctx->r19, ctx->r11);
    // 0x8003D6BC: lb          $s0, 0x4AC($v1)
    ctx->r16 = MEM_B(ctx->r3, 0X4AC);
    // 0x8003D6C0: multu       $v0, $s4
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003D6C4: mflo        $t5
    ctx->r13 = lo;
    // 0x8003D6C8: negu        $t7, $t5
    ctx->r15 = SUB32(0, ctx->r13);
    // 0x8003D6CC: addu        $a0, $t4, $t7
    ctx->r4 = ADD32(ctx->r12, ctx->r15);
    // 0x8003D6D0: lb          $t8, 0x4AC($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X4AC);
    // 0x8003D6D4: nop

    // 0x8003D6D8: sb          $t8, 0x4AC($v1)
    MEM_B(0X4AC, ctx->r3) = ctx->r24;
    // 0x8003D6DC: sb          $s0, 0x4AC($a0)
    MEM_B(0X4AC, ctx->r4) = ctx->r16;
    // 0x8003D6E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_8003D6E4:
    // 0x8003D6E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003D6E8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003D6EC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003D6F0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8003D6F4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8003D6F8: jr          $ra
    // 0x8003D6FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8003D6FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8003D700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003D700: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003D704: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003D708: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003D70C: lb          $a0, 0x23($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X23);
    // 0x8003D710: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8003D714: jal         0x8003EC2C
    // 0x8003D718: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_8003EC2C(rdram, ctx);
        goto after_0;
    // 0x8003D718: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x8003D71C: lb          $a0, 0x0($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X0);
    // 0x8003D720: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003D724: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x8003D728: jal         0x8001D4C0
    // 0x8003D72C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    func_8001D4C0(rdram, ctx);
        goto after_1;
    // 0x8003D72C: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    after_1:
    // 0x8003D730: lh          $t6, 0x2A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2A);
    // 0x8003D734: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x8003D738: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003D73C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003D740: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003D744: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8003D748: addiu       $t0, $t0, 0x7914
    ctx->r8 = ADD32(ctx->r8, 0X7914);
    // 0x8003D74C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8003D750: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x8003D754: lb          $a1, 0x0($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X0);
    // 0x8003D758: lb          $t1, 0x1($v1)
    ctx->r9 = MEM_B(ctx->r3, 0X1);
    // 0x8003D75C: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x8003D760: addu        $t2, $t1, $a1
    ctx->r10 = ADD32(ctx->r9, ctx->r5);
    // 0x8003D764: sh          $t2, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r10;
    // 0x8003D768: jal         0x8001CA74
    // 0x8003D76C: sh          $a1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r5;
    func_8001CA74(rdram, ctx);
        goto after_2;
    // 0x8003D76C: sh          $a1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r5;
    after_2:
    // 0x8003D770: lh          $a1, 0x1E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1E);
    // 0x8003D774: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8003D778: sra         $t3, $v1, 16
    ctx->r11 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8003D77C: slt         $at, $t3, $a1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8003D780: beq         $at, $zero, L_8003D798
    if (ctx->r1 == 0) {
        // 0x8003D784: or          $v1, $t3, $zero
        ctx->r3 = ctx->r11 | 0;
            goto L_8003D798;
    }
    // 0x8003D784: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x8003D788: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003D78C: addiu       $v1, $v1, -0x30A0
    ctx->r3 = ADD32(ctx->r3, -0X30A0);
    // 0x8003D790: b           L_8003D7CC
    // 0x8003D794: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
        goto L_8003D7CC;
    // 0x8003D794: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
L_8003D798:
    // 0x8003D798: lh          $t4, 0x1C($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X1C);
    // 0x8003D79C: nop

    // 0x8003D7A0: slt         $at, $v1, $t4
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8003D7A4: beq         $at, $zero, L_8003D7BC
    if (ctx->r1 == 0) {
        // 0x8003D7A8: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_8003D7BC;
    }
    // 0x8003D7A8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003D7AC: addiu       $v1, $v1, -0x30A0
    ctx->r3 = ADD32(ctx->r3, -0X30A0);
    // 0x8003D7B0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8003D7B4: b           L_8003D7CC
    // 0x8003D7B8: sb          $t5, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r13;
        goto L_8003D7CC;
    // 0x8003D7B8: sb          $t5, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r13;
L_8003D7BC:
    // 0x8003D7BC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003D7C0: addiu       $v1, $v1, -0x30A0
    ctx->r3 = ADD32(ctx->r3, -0X30A0);
    // 0x8003D7C4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8003D7C8: sb          $t6, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r14;
L_8003D7CC:
    // 0x8003D7CC: jal         0x8001C994
    // 0x8003D7D0: nop

    func_8001C994(rdram, ctx);
        goto after_3;
    // 0x8003D7D0: nop

    after_3:
    // 0x8003D7D4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003D7D8: beq         $v0, $zero, L_8003D7E8
    if (ctx->r2 == 0) {
        // 0x8003D7DC: addiu       $v1, $v1, -0x30A0
        ctx->r3 = ADD32(ctx->r3, -0X30A0);
            goto L_8003D7E8;
    }
    // 0x8003D7DC: addiu       $v1, $v1, -0x30A0
    ctx->r3 = ADD32(ctx->r3, -0X30A0);
    // 0x8003D7E0: b           L_8003D7F0
    // 0x8003D7E4: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
        goto L_8003D7F0;
    // 0x8003D7E4: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
L_8003D7E8:
    // 0x8003D7E8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8003D7EC: sb          $t7, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r15;
L_8003D7F0:
    // 0x8003D7F0: lb          $a0, 0x23($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X23);
    // 0x8003D7F4: jal         0x8003EC2C
    // 0x8003D7F8: nop

    func_8003EC2C(rdram, ctx);
        goto after_4;
    // 0x8003D7F8: nop

    after_4:
    // 0x8003D7FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003D800: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003D804: jr          $ra
    // 0x8003D808: nop

    return;
    // 0x8003D808: nop

;}
RECOMP_FUNC void func_8003D80C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003D80C: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8003D810: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8003D814: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003D818: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003D81C: bne         $t7, $zero, L_8003D87C
    if (ctx->r15 != 0) {
        // 0x8003D820: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_8003D87C;
    }
    // 0x8003D820: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003D824: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003D828: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8003D82C: lhu         $t8, 0x8($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X8);
    // 0x8003D830: lbu         $a0, 0xA94($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0XA94);
    // 0x8003D834: lbu         $a1, 0x0($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X0);
    // 0x8003D838: andi        $t9, $t8, 0xFDFF
    ctx->r25 = ctx->r24 & 0XFDFF;
    // 0x8003D83C: sh          $t9, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r25;
    // 0x8003D840: jal         0x8007039C
    // 0x8003D844: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8007039C(rdram, ctx);
        goto after_0;
    // 0x8003D844: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8003D848: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003D84C: bne         $v0, $zero, L_8003D868
    if (ctx->r2 != 0) {
        // 0x8003D850: addiu       $v1, $v1, -0x2CF0
        ctx->r3 = ADD32(ctx->r3, -0X2CF0);
            goto L_8003D868;
    }
    // 0x8003D850: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8003D854: lhu         $t0, 0xA9C($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0XA9C);
    // 0x8003D858: nop

    // 0x8003D85C: andi        $t1, $t0, 0xFDFF
    ctx->r9 = ctx->r8 & 0XFDFF;
    // 0x8003D860: b           L_8003D8D0
    // 0x8003D864: sh          $t1, 0xA9C($v1)
    MEM_H(0XA9C, ctx->r3) = ctx->r9;
        goto L_8003D8D0;
    // 0x8003D864: sh          $t1, 0xA9C($v1)
    MEM_H(0XA9C, ctx->r3) = ctx->r9;
L_8003D868:
    // 0x8003D868: lhu         $t2, 0xA9C($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0XA9C);
    // 0x8003D86C: nop

    // 0x8003D870: ori         $t3, $t2, 0x200
    ctx->r11 = ctx->r10 | 0X200;
    // 0x8003D874: b           L_8003D8D0
    // 0x8003D878: sh          $t3, 0xA9C($v1)
    MEM_H(0XA9C, ctx->r3) = ctx->r11;
        goto L_8003D8D0;
    // 0x8003D878: sh          $t3, 0xA9C($v1)
    MEM_H(0XA9C, ctx->r3) = ctx->r11;
L_8003D87C:
    // 0x8003D87C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003D880: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8003D884: lhu         $t4, 0xA9C($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0XA9C);
    // 0x8003D888: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x8003D88C: lbu         $a1, 0xA94($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0XA94);
    // 0x8003D890: andi        $t5, $t4, 0xFDFF
    ctx->r13 = ctx->r12 & 0XFDFF;
    // 0x8003D894: sh          $t5, 0xA9C($v1)
    MEM_H(0XA9C, ctx->r3) = ctx->r13;
    // 0x8003D898: jal         0x8007039C
    // 0x8003D89C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8007039C(rdram, ctx);
        goto after_1;
    // 0x8003D89C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8003D8A0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003D8A4: bne         $v0, $zero, L_8003D8C0
    if (ctx->r2 != 0) {
        // 0x8003D8A8: addiu       $v1, $v1, -0x2CF0
        ctx->r3 = ADD32(ctx->r3, -0X2CF0);
            goto L_8003D8C0;
    }
    // 0x8003D8A8: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8003D8AC: lhu         $t6, 0x8($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X8);
    // 0x8003D8B0: nop

    // 0x8003D8B4: andi        $t7, $t6, 0xFDFF
    ctx->r15 = ctx->r14 & 0XFDFF;
    // 0x8003D8B8: b           L_8003D8D0
    // 0x8003D8BC: sh          $t7, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r15;
        goto L_8003D8D0;
    // 0x8003D8BC: sh          $t7, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r15;
L_8003D8C0:
    // 0x8003D8C0: lhu         $t8, 0x8($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X8);
    // 0x8003D8C4: nop

    // 0x8003D8C8: ori         $t9, $t8, 0x200
    ctx->r25 = ctx->r24 | 0X200;
    // 0x8003D8CC: sh          $t9, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r25;
L_8003D8D0:
    // 0x8003D8D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003D8D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003D8D8: jr          $ra
    // 0x8003D8DC: nop

    return;
    // 0x8003D8DC: nop

;}
RECOMP_FUNC void func_8003D8E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003D8E0: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x8003D8E4: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8003D8E8: bne         $t7, $zero, L_8003D910
    if (ctx->r15 != 0) {
        // 0x8003D8EC: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_8003D910;
    }
    // 0x8003D8EC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8003D8F0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8003D8F4: lbu         $t8, -0x2CF0($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X2CF0);
    // 0x8003D8F8: lui         $t9, 0x8040
    ctx->r25 = S32(0X8040 << 16);
    // 0x8003D8FC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8003D900: lbu         $t9, -0x58A8($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X58A8);
    // 0x8003D904: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8003D908: jr          $ra
    // 0x8003D90C: sb          $t9, -0x309B($at)
    MEM_B(-0X309B, ctx->r1) = ctx->r25;
    return;
    // 0x8003D90C: sb          $t9, -0x309B($at)
    MEM_B(-0X309B, ctx->r1) = ctx->r25;
L_8003D910:
    // 0x8003D910: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8003D914: lbu         $t0, -0x225C($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X225C);
    // 0x8003D918: lui         $t1, 0x8040
    ctx->r9 = S32(0X8040 << 16);
    // 0x8003D91C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8003D920: lbu         $t1, -0x58A8($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X58A8);
    // 0x8003D924: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8003D928: sb          $t1, -0x309B($at)
    MEM_B(-0X309B, ctx->r1) = ctx->r9;
    // 0x8003D92C: jr          $ra
    // 0x8003D930: nop

    return;
    // 0x8003D930: nop

;}
RECOMP_FUNC void func_8003D934(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003D934: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8003D938: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8003D93C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003D940: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003D944: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003D948: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003D94C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003D950: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003D954: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003D958: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003D95C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003D960: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003D964: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8003D968: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003D96C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003D970: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8003D974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003D978: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
    // 0x8003D97C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8003D980: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8003D984: jal         0x8003EAD8
    // 0x8003D988: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_8003EAD8(rdram, ctx);
        goto after_0;
    // 0x8003D988: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_0:
    // 0x8003D98C: lb          $a0, 0x2B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X2B);
    // 0x8003D990: jal         0x80049A4C
    // 0x8003D994: nop

    func_80049A4C(rdram, ctx);
        goto after_1;
    // 0x8003D994: nop

    after_1:
    // 0x8003D998: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8003D99C: beq         $v0, $zero, L_8003DA80
    if (ctx->r2 == 0) {
        // 0x8003D9A0: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_8003DA80;
    }
    // 0x8003D9A0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8003D9A4: lb          $t9, 0x2F($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X2F);
    // 0x8003D9A8: nop

    // 0x8003D9AC: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8003D9B0: addu        $v0, $a2, $t0
    ctx->r2 = ADD32(ctx->r6, ctx->r8);
    // 0x8003D9B4: lb          $a0, 0x488($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X488);
    // 0x8003D9B8: lb          $a1, 0x489($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X489);
    // 0x8003D9BC: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8003D9C0: sb          $a0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r4;
    // 0x8003D9C4: jal         0x8003CCB0
    // 0x8003D9C8: sb          $a1, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r5;
    func_8003CCB0(rdram, ctx);
        goto after_2;
    // 0x8003D9C8: sb          $a1, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r5;
    after_2:
    // 0x8003D9CC: lb          $a0, 0x27($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X27);
    // 0x8003D9D0: lb          $a1, 0x26($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X26);
    // 0x8003D9D4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8003D9D8: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x8003D9DC: bne         $v0, $at, L_8003DA18
    if (ctx->r2 != ctx->r1) {
        // 0x8003D9E0: sb          $v0, 0x25($sp)
        MEM_B(0X25, ctx->r29) = ctx->r2;
            goto L_8003DA18;
    }
    // 0x8003D9E0: sb          $v0, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r2;
    // 0x8003D9E4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003D9E8: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8003D9EC: sb          $a1, 0x7($a2)
    MEM_B(0X7, ctx->r6) = ctx->r5;
    // 0x8003D9F0: sb          $a0, 0x8($a2)
    MEM_B(0X8, ctx->r6) = ctx->r4;
    // 0x8003D9F4: lhu         $t1, 0x8($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X8);
    // 0x8003D9F8: lhu         $t3, 0xA9C($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0XA9C);
    // 0x8003D9FC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8003DA00: ori         $t2, $t1, 0x8
    ctx->r10 = ctx->r9 | 0X8;
    // 0x8003DA04: andi        $t4, $t3, 0xFFF7
    ctx->r12 = ctx->r11 & 0XFFF7;
    // 0x8003DA08: sh          $t2, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r10;
    // 0x8003DA0C: sh          $t4, 0xA9C($v1)
    MEM_H(0XA9C, ctx->r3) = ctx->r12;
    // 0x8003DA10: b           L_8003DA44
    // 0x8003DA14: sb          $t5, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r13;
        goto L_8003DA44;
    // 0x8003DA14: sb          $t5, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r13;
L_8003DA18:
    // 0x8003DA18: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003DA1C: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8003DA20: sb          $a0, 0x7($a2)
    MEM_B(0X7, ctx->r6) = ctx->r4;
    // 0x8003DA24: sb          $a1, 0x8($a2)
    MEM_B(0X8, ctx->r6) = ctx->r5;
    // 0x8003DA28: lhu         $t6, 0x8($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X8);
    // 0x8003DA2C: lhu         $t8, 0xA9C($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0XA9C);
    // 0x8003DA30: andi        $t7, $t6, 0xFFF7
    ctx->r15 = ctx->r14 & 0XFFF7;
    // 0x8003DA34: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x8003DA38: sh          $t7, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r15;
    // 0x8003DA3C: sh          $t9, 0xA9C($v1)
    MEM_H(0XA9C, ctx->r3) = ctx->r25;
    // 0x8003DA40: sb          $zero, 0x24($sp)
    MEM_B(0X24, ctx->r29) = 0;
L_8003DA44:
    // 0x8003DA44: lb          $a0, 0x7($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X7);
    // 0x8003DA48: jal         0x8003CD88
    // 0x8003DA4C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_8003CD88(rdram, ctx);
        goto after_3;
    // 0x8003DA4C: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_3:
    // 0x8003DA50: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003DA54: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8003DA58: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8003DA5C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8003DA60: lb          $a0, 0x8($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X8);
    // 0x8003DA64: jal         0x8003CD88
    // 0x8003DA68: nop

    func_8003CD88(rdram, ctx);
        goto after_4;
    // 0x8003DA68: nop

    after_4:
    // 0x8003DA6C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003DA70: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8003DA74: b           L_8003DAF8
    // 0x8003DA78: sb          $v0, 0xA94($v1)
    MEM_B(0XA94, ctx->r3) = ctx->r2;
        goto L_8003DAF8;
    // 0x8003DA78: sb          $v0, 0xA94($v1)
    MEM_B(0XA94, ctx->r3) = ctx->r2;
    // 0x8003DA7C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_8003DA80:
    // 0x8003DA80: sb          $t0, 0x25($sp)
    MEM_B(0X25, ctx->r29) = ctx->r8;
    // 0x8003DA84: lb          $v0, 0xC($a2)
    ctx->r2 = MEM_B(ctx->r6, 0XC);
    // 0x8003DA88: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x8003DA8C: sb          $v0, 0x7($a2)
    MEM_B(0X7, ctx->r6) = ctx->r2;
    // 0x8003DA90: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8003DA94: jal         0x8001D6EC
    // 0x8003DA98: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    func_8001D6EC(rdram, ctx);
        goto after_5;
    // 0x8003DA98: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    after_5:
    // 0x8003DA9C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8003DAA0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003DAA4: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8003DAA8: sb          $v0, 0x8($a2)
    MEM_B(0X8, ctx->r6) = ctx->r2;
    // 0x8003DAAC: lhu         $t1, 0x8($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X8);
    // 0x8003DAB0: lhu         $t3, 0xA9C($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0XA9C);
    // 0x8003DAB4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8003DAB8: ori         $t2, $t1, 0x8
    ctx->r10 = ctx->r9 | 0X8;
    // 0x8003DABC: andi        $t4, $t3, 0xFFF7
    ctx->r12 = ctx->r11 & 0XFFF7;
    // 0x8003DAC0: sh          $t2, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r10;
    // 0x8003DAC4: sh          $t4, 0xA9C($v1)
    MEM_H(0XA9C, ctx->r3) = ctx->r12;
    // 0x8003DAC8: sb          $t5, 0x24($sp)
    MEM_B(0X24, ctx->r29) = ctx->r13;
    // 0x8003DACC: lb          $a0, 0x7($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X7);
    // 0x8003DAD0: jal         0x8003CD88
    // 0x8003DAD4: nop

    func_8003CD88(rdram, ctx);
        goto after_6;
    // 0x8003DAD4: nop

    after_6:
    // 0x8003DAD8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003DADC: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8003DAE0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8003DAE4: jal         0x802B5420
    // 0x8003DAE8: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    LOOKUP_FUNC(0x802B5420)(rdram, ctx);
        goto after_7;
    // 0x8003DAE8: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    after_7:
    // 0x8003DAEC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003DAF0: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8003DAF4: sb          $v0, 0xA94($v1)
    MEM_B(0XA94, ctx->r3) = ctx->r2;
L_8003DAF8:
    // 0x8003DAF8: jal         0x80036278
    // 0x8003DAFC: nop

    func_80036278(rdram, ctx);
        goto after_8;
    // 0x8003DAFC: nop

    after_8:
    // 0x8003DB00: jal         0x80039258
    // 0x8003DB04: nop

    func_80039258(rdram, ctx);
        goto after_9;
    // 0x8003DB04: nop

    after_9:
    // 0x8003DB08: lb          $a0, 0x24($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X24);
    // 0x8003DB0C: jal         0x8003D80C
    // 0x8003DB10: nop

    func_8003D80C(rdram, ctx);
        goto after_10;
    // 0x8003DB10: nop

    after_10:
    // 0x8003DB14: lb          $a0, 0x24($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X24);
    // 0x8003DB18: jal         0x8003D8E0
    // 0x8003DB1C: nop

    func_8003D8E0(rdram, ctx);
        goto after_11;
    // 0x8003DB1C: nop

    after_11:
    // 0x8003DB20: jal         0x800383DC
    // 0x8003DB24: nop

    func_800383DC(rdram, ctx);
        goto after_12;
    // 0x8003DB24: nop

    after_12:
    // 0x8003DB28: jal         0x8005C930
    // 0x8003DB2C: nop

    func_8005C930(rdram, ctx);
        goto after_13;
    // 0x8003DB2C: nop

    after_13:
    // 0x8003DB30: jal         0x8005B43C
    // 0x8003DB34: nop

    func_8005B43C(rdram, ctx);
        goto after_14;
    // 0x8003DB34: nop

    after_14:
    // 0x8003DB38: jal         0x800398E8
    // 0x8003DB3C: nop

    func_800398E8(rdram, ctx);
        goto after_15;
    // 0x8003DB3C: nop

    after_15:
    // 0x8003DB40: jal         0x80039690
    // 0x8003DB44: nop

    func_80039690(rdram, ctx);
        goto after_16;
    // 0x8003DB44: nop

    after_16:
    // 0x8003DB48: lb          $t6, 0x25($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X25);
    // 0x8003DB4C: nop

    // 0x8003DB50: beq         $t6, $zero, L_8003DB68
    if (ctx->r14 == 0) {
        // 0x8003DB54: nop
    
            goto L_8003DB68;
    }
    // 0x8003DB54: nop

    // 0x8003DB58: jal         0x800399EC
    // 0x8003DB5C: nop

    func_800399EC(rdram, ctx);
        goto after_17;
    // 0x8003DB5C: nop

    after_17:
    // 0x8003DB60: jal         0x8005B004
    // 0x8003DB64: nop

    func_8005B004(rdram, ctx);
        goto after_18;
    // 0x8003DB64: nop

    after_18:
L_8003DB68:
    // 0x8003DB68: jal         0x8003C448
    // 0x8003DB6C: nop

    func_8003C448(rdram, ctx);
        goto after_19;
    // 0x8003DB6C: nop

    after_19:
    // 0x8003DB70: jal         0x8027F87C
    // 0x8003DB74: nop

    LOOKUP_FUNC(0x8027F87C)(rdram, ctx);
        goto after_20;
    // 0x8003DB74: nop

    after_20:
    // 0x8003DB78: jal         0x8027FC58
    // 0x8003DB7C: nop

    LOOKUP_FUNC(0x8027FC58)(rdram, ctx);
        goto after_21;
    // 0x8003DB7C: nop

    after_21:
    // 0x8003DB80: jal         0x80280044
    // 0x8003DB84: nop

    LOOKUP_FUNC(0x80280044)(rdram, ctx);
        goto after_22;
    // 0x8003DB84: nop

    after_22:
    // 0x8003DB88: jal         0x80280398
    // 0x8003DB8C: nop

    LOOKUP_FUNC(0x80280398)(rdram, ctx);
        goto after_23;
    // 0x8003DB8C: nop

    after_23:
    // 0x8003DB90: jal         0x80038B90
    // 0x8003DB94: nop

    func_80038B90(rdram, ctx);
        goto after_24;
    // 0x8003DB94: nop

    after_24:
    // 0x8003DB98: jal         0x80045248
    // 0x8003DB9C: nop

    func_80045248(rdram, ctx);
        goto after_25;
    // 0x8003DB9C: nop

    after_25:
    // 0x8003DBA0: jal         0x8006DFEC
    // 0x8003DBA4: nop

    func_8006DFEC(rdram, ctx);
        goto after_26;
    // 0x8003DBA4: nop

    after_26:
    // 0x8003DBA8: jal         0x8006F4C0
    // 0x8003DBAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8006F4C0(rdram, ctx);
        goto after_27;
    // 0x8003DBAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_27:
    // 0x8003DBB0: jal         0x8006F4C0
    // 0x8003DBB4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006F4C0(rdram, ctx);
        goto after_28;
    // 0x8003DBB4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_28:
    // 0x8003DBB8: jal         0x800372F4
    // 0x8003DBBC: nop

    func_800372F4(rdram, ctx);
        goto after_29;
    // 0x8003DBBC: nop

    after_29:
    // 0x8003DBC0: jal         0x80038CAC
    // 0x8003DBC4: nop

    func_80038CAC(rdram, ctx);
        goto after_30;
    // 0x8003DBC4: nop

    after_30:
    // 0x8003DBC8: jal         0x80038EF8
    // 0x8003DBCC: nop

    func_80038EF8(rdram, ctx);
        goto after_31;
    // 0x8003DBCC: nop

    after_31:
    // 0x8003DBD0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8003DBD4: lbu         $t7, -0x32B0($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X32B0);
    // 0x8003DBD8: nop

    // 0x8003DBDC: bne         $t7, $zero, L_8003DC04
    if (ctx->r15 != 0) {
        // 0x8003DBE0: nop
    
            goto L_8003DC04;
    }
    // 0x8003DBE0: nop

    // 0x8003DBE4: jal         0x8003609C
    // 0x8003DBE8: nop

    func_8003609C(rdram, ctx);
        goto after_32;
    // 0x8003DBE8: nop

    after_32:
    // 0x8003DBEC: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8003DBF0: lb          $a2, -0x309B($a2)
    ctx->r6 = MEM_B(ctx->r6, -0X309B);
    // 0x8003DBF4: lb          $a0, 0x2B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X2B);
    // 0x8003DBF8: lb          $a1, 0x2F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X2F);
    // 0x8003DBFC: jal         0x8003D700
    // 0x8003DC00: nop

    func_8003D700(rdram, ctx);
        goto after_33;
    // 0x8003DC00: nop

    after_33:
L_8003DC04:
    // 0x8003DC04: jal         0x8004974C
    // 0x8003DC08: nop

    func_8004974C(rdram, ctx);
        goto after_34;
    // 0x8003DC08: nop

    after_34:
    // 0x8003DC0C: lb          $t8, 0x25($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X25);
    // 0x8003DC10: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8003DC14: beq         $t8, $zero, L_8003DC6C
    if (ctx->r24 == 0) {
        // 0x8003DC18: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003DC6C;
    }
    // 0x8003DC18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003DC1C: lb          $t9, -0x32A1($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X32A1);
    // 0x8003DC20: sll         $v1, $v0, 24
    ctx->r3 = S32(ctx->r2 << 24);
    // 0x8003DC24: beq         $t9, $zero, L_8003DC5C
    if (ctx->r25 == 0) {
        // 0x8003DC28: sra         $t0, $v1, 24
        ctx->r8 = S32(SIGNED(ctx->r3) >> 24);
            goto L_8003DC5C;
    }
    // 0x8003DC28: sra         $t0, $v1, 24
    ctx->r8 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8003DC2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003DC30: beq         $t0, $at, L_8003DC5C
    if (ctx->r8 == ctx->r1) {
        // 0x8003DC34: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8003DC5C;
    }
    // 0x8003DC34: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003DC38: beq         $t0, $at, L_8003DC5C
    if (ctx->r8 == ctx->r1) {
        // 0x8003DC3C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8003DC5C;
    }
    // 0x8003DC3C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003DC40: bne         $t0, $at, L_8003DC68
    if (ctx->r8 != ctx->r1) {
        // 0x8003DC44: lui         $t1, 0x8011
        ctx->r9 = S32(0X8011 << 16);
            goto L_8003DC68;
    }
    // 0x8003DC44: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8003DC48: lb          $t1, 0x418($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X418);
    // 0x8003DC4C: nop

    // 0x8003DC50: slti        $at, $t1, 0xE
    ctx->r1 = SIGNED(ctx->r9) < 0XE ? 1 : 0;
    // 0x8003DC54: beq         $at, $zero, L_8003DC6C
    if (ctx->r1 == 0) {
        // 0x8003DC58: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003DC6C;
    }
    // 0x8003DC58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003DC5C:
    // 0x8003DC5C: lb          $a0, 0x24($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X24);
    // 0x8003DC60: jal         0x8003DC78
    // 0x8003DC64: nop

    func_8003DC78(rdram, ctx);
        goto after_35;
    // 0x8003DC64: nop

    after_35:
L_8003DC68:
    // 0x8003DC68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003DC6C:
    // 0x8003DC6C: lb          $v0, 0x25($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X25);
    // 0x8003DC70: jr          $ra
    // 0x8003DC74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8003DC74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003DC78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003DC78: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8003DC7C: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x8003DC80: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003DC84: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8003DC88: addiu       $a1, $a1, -0x30A0
    ctx->r5 = ADD32(ctx->r5, -0X30A0);
    // 0x8003DC8C: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8003DC90: lbu         $t8, 0x0($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X0);
    // 0x8003DC94: lbu         $t9, 0xA94($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0XA94);
    // 0x8003DC98: lhu         $t0, 0x8($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X8);
    // 0x8003DC9C: lhu         $t1, 0xA9C($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0XA9C);
    // 0x8003DCA0: lb          $t2, 0x1($a1)
    ctx->r10 = MEM_B(ctx->r5, 0X1);
    // 0x8003DCA4: lb          $t3, 0x4($a1)
    ctx->r11 = MEM_B(ctx->r5, 0X4);
    // 0x8003DCA8: lb          $t4, 0x5($a1)
    ctx->r12 = MEM_B(ctx->r5, 0X5);
    // 0x8003DCAC: lb          $t5, 0x7($a1)
    ctx->r13 = MEM_B(ctx->r5, 0X7);
    // 0x8003DCB0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8003DCB4: sb          $a0, 0x10A($v0)
    MEM_B(0X10A, ctx->r2) = ctx->r4;
    // 0x8003DCB8: sb          $t8, 0x104($v0)
    MEM_B(0X104, ctx->r2) = ctx->r24;
    // 0x8003DCBC: sb          $t9, 0x105($v0)
    MEM_B(0X105, ctx->r2) = ctx->r25;
    // 0x8003DCC0: sh          $t0, 0x106($v0)
    MEM_H(0X106, ctx->r2) = ctx->r8;
    // 0x8003DCC4: sh          $t1, 0x108($v0)
    MEM_H(0X108, ctx->r2) = ctx->r9;
    // 0x8003DCC8: sb          $t2, 0x10B($v0)
    MEM_B(0X10B, ctx->r2) = ctx->r10;
    // 0x8003DCCC: sb          $t3, 0x10C($v0)
    MEM_B(0X10C, ctx->r2) = ctx->r11;
    // 0x8003DCD0: sb          $t4, 0x10D($v0)
    MEM_B(0X10D, ctx->r2) = ctx->r12;
    // 0x8003DCD4: jr          $ra
    // 0x8003DCD8: sb          $t5, 0x10E($v0)
    MEM_B(0X10E, ctx->r2) = ctx->r13;
    return;
    // 0x8003DCD8: sb          $t5, 0x10E($v0)
    MEM_B(0X10E, ctx->r2) = ctx->r13;
;}
RECOMP_FUNC void func_8003DCDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003DCDC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8003DCE0: addiu       $a0, $a0, -0x32B0
    ctx->r4 = ADD32(ctx->r4, -0X32B0);
    // 0x8003DCE4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003DCE8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8003DCEC: addiu       $a1, $a1, -0x30A0
    ctx->r5 = ADD32(ctx->r5, -0X30A0);
    // 0x8003DCF0: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8003DCF4: lb          $t6, 0x104($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X104);
    // 0x8003DCF8: lb          $t7, 0x105($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X105);
    // 0x8003DCFC: lhu         $t8, 0x106($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X106);
    // 0x8003DD00: lhu         $t9, 0x108($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X108);
    // 0x8003DD04: lb          $t0, 0x10B($a0)
    ctx->r8 = MEM_B(ctx->r4, 0X10B);
    // 0x8003DD08: lb          $t1, 0x10C($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X10C);
    // 0x8003DD0C: lb          $t2, 0x10D($a0)
    ctx->r10 = MEM_B(ctx->r4, 0X10D);
    // 0x8003DD10: lb          $t3, 0x10E($a0)
    ctx->r11 = MEM_B(ctx->r4, 0X10E);
    // 0x8003DD14: lb          $v0, 0x10A($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X10A);
    // 0x8003DD18: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
    // 0x8003DD1C: sb          $t7, 0xA94($v1)
    MEM_B(0XA94, ctx->r3) = ctx->r15;
    // 0x8003DD20: sh          $t8, 0x8($v1)
    MEM_H(0X8, ctx->r3) = ctx->r24;
    // 0x8003DD24: sh          $t9, 0xA9C($v1)
    MEM_H(0XA9C, ctx->r3) = ctx->r25;
    // 0x8003DD28: sb          $t0, 0x1($a1)
    MEM_B(0X1, ctx->r5) = ctx->r8;
    // 0x8003DD2C: sb          $t1, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r9;
    // 0x8003DD30: sb          $t2, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r10;
    // 0x8003DD34: jr          $ra
    // 0x8003DD38: sb          $t3, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r11;
    return;
    // 0x8003DD38: sb          $t3, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r11;
;}
RECOMP_FUNC void func_8003DD3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003DD3C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8003DD40: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8003DD44: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8003DD48: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003DD4C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003DD50: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003DD54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003DD58: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003DD5C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003DD60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003DD64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003DD68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003DD6C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003DD70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003DD74: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003DD78: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8003DD7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003DD80: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8003DD84: jal         0x8003DCDC
    // 0x8003DD88: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    func_8003DCDC(rdram, ctx);
        goto after_0;
    // 0x8003DD88: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_0:
    // 0x8003DD8C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8003DD90: lb          $a0, -0x2CF0($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X2CF0);
    // 0x8003DD94: jal         0x8003CD14
    // 0x8003DD98: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    func_8003CD14(rdram, ctx);
        goto after_1;
    // 0x8003DD98: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    after_1:
    // 0x8003DD9C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003DDA0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8003DDA4: sb          $v0, 0x7($t0)
    MEM_B(0X7, ctx->r8) = ctx->r2;
    // 0x8003DDA8: lb          $a0, -0x225C($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X225C);
    // 0x8003DDAC: jal         0x8003CD14
    // 0x8003DDB0: nop

    func_8003CD14(rdram, ctx);
        goto after_2;
    // 0x8003DDB0: nop

    after_2:
    // 0x8003DDB4: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8003DDB8: jal         0x800598D0
    // 0x8003DDBC: sb          $v0, 0x8($t1)
    MEM_B(0X8, ctx->r9) = ctx->r2;
    func_800598D0(rdram, ctx);
        goto after_3;
    // 0x8003DDBC: sb          $v0, 0x8($t1)
    MEM_B(0X8, ctx->r9) = ctx->r2;
    after_3:
    // 0x8003DDC0: jal         0x8005AC60
    // 0x8003DDC4: nop

    func_8005AC60(rdram, ctx);
        goto after_4;
    // 0x8003DDC4: nop

    after_4:
    // 0x8003DDC8: jal         0x8005ACAC
    // 0x8003DDCC: nop

    func_8005ACAC(rdram, ctx);
        goto after_5;
    // 0x8003DDCC: nop

    after_5:
    // 0x8003DDD0: jal         0x8005A8BC
    // 0x8003DDD4: nop

    func_8005A8BC(rdram, ctx);
        goto after_6;
    // 0x8003DDD4: nop

    after_6:
    // 0x8003DDD8: lb          $a0, 0x1F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1F);
    // 0x8003DDDC: jal         0x8003D80C
    // 0x8003DDE0: nop

    func_8003D80C(rdram, ctx);
        goto after_7;
    // 0x8003DDE0: nop

    after_7:
    // 0x8003DDE4: jal         0x800383DC
    // 0x8003DDE8: nop

    func_800383DC(rdram, ctx);
        goto after_8;
    // 0x8003DDE8: nop

    after_8:
    // 0x8003DDEC: jal         0x8005C930
    // 0x8003DDF0: nop

    func_8005C930(rdram, ctx);
        goto after_9;
    // 0x8003DDF0: nop

    after_9:
    // 0x8003DDF4: jal         0x8005B43C
    // 0x8003DDF8: nop

    func_8005B43C(rdram, ctx);
        goto after_10;
    // 0x8003DDF8: nop

    after_10:
    // 0x8003DDFC: jal         0x800398E8
    // 0x8003DE00: nop

    func_800398E8(rdram, ctx);
        goto after_11;
    // 0x8003DE00: nop

    after_11:
    // 0x8003DE04: jal         0x80039690
    // 0x8003DE08: nop

    func_80039690(rdram, ctx);
        goto after_12;
    // 0x8003DE08: nop

    after_12:
    // 0x8003DE0C: jal         0x800399EC
    // 0x8003DE10: nop

    func_800399EC(rdram, ctx);
        goto after_13;
    // 0x8003DE10: nop

    after_13:
    // 0x8003DE14: jal         0x8005B004
    // 0x8003DE18: nop

    func_8005B004(rdram, ctx);
        goto after_14;
    // 0x8003DE18: nop

    after_14:
    // 0x8003DE1C: jal         0x80038B90
    // 0x8003DE20: nop

    func_80038B90(rdram, ctx);
        goto after_15;
    // 0x8003DE20: nop

    after_15:
    // 0x8003DE24: jal         0x8027F80C
    // 0x8003DE28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(0x8027F80C)(rdram, ctx);
        goto after_16;
    // 0x8003DE28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_16:
    // 0x8003DE2C: jal         0x8027F80C
    // 0x8003DE30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    LOOKUP_FUNC(0x8027F80C)(rdram, ctx);
        goto after_17;
    // 0x8003DE30: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_17:
    // 0x8003DE34: jal         0x8006DFEC
    // 0x8003DE38: nop

    func_8006DFEC(rdram, ctx);
        goto after_18;
    // 0x8003DE38: nop

    after_18:
    // 0x8003DE3C: jal         0x8006F4C0
    // 0x8003DE40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8006F4C0(rdram, ctx);
        goto after_19;
    // 0x8003DE40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_19:
    // 0x8003DE44: jal         0x8006F4C0
    // 0x8003DE48: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006F4C0(rdram, ctx);
        goto after_20;
    // 0x8003DE48: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_20:
    // 0x8003DE4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003DE50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003DE54: jr          $ra
    // 0x8003DE58: nop

    return;
    // 0x8003DE58: nop

;}
RECOMP_FUNC void func_8003DE5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003DE5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003DE60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003DE64: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8003DE68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003DE6C: lb          $a1, 0x1F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1F);
    // 0x8003DE70: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x8003DE74: jal         0x8003E09C
    // 0x8003DE78: nop

    func_8003E09C(rdram, ctx);
        goto after_0;
    // 0x8003DE78: nop

    after_0:
    // 0x8003DE7C: jal         0x8003EAD8
    // 0x8003DE80: nop

    func_8003EAD8(rdram, ctx);
        goto after_1;
    // 0x8003DE80: nop

    after_1:
    // 0x8003DE84: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x8003DE88: jal         0x8003EEC0
    // 0x8003DE8C: nop

    func_8003EEC0(rdram, ctx);
        goto after_2;
    // 0x8003DE8C: nop

    after_2:
    // 0x8003DE90: lb          $a0, 0x1B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X1B);
    // 0x8003DE94: lb          $a1, 0x1F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1F);
    // 0x8003DE98: jal         0x8003DEB0
    // 0x8003DE9C: nop

    func_8003DEB0(rdram, ctx);
        goto after_3;
    // 0x8003DE9C: nop

    after_3:
    // 0x8003DEA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003DEA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003DEA8: jr          $ra
    // 0x8003DEAC: nop

    return;
    // 0x8003DEAC: nop

;}
RECOMP_FUNC void func_8003DEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003DEB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003DEB4: sll         $t7, $a1, 24
    ctx->r15 = S32(ctx->r5 << 24);
    // 0x8003DEB8: sra         $t8, $t7, 24
    ctx->r24 = S32(SIGNED(ctx->r15) >> 24);
    // 0x8003DEBC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8003DEC0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003DEC4: sll         $s2, $a0, 24
    ctx->r18 = S32(ctx->r4 << 24);
    // 0x8003DEC8: sll         $s0, $t8, 16
    ctx->r16 = S32(ctx->r24 << 16);
    // 0x8003DECC: sra         $t6, $s2, 24
    ctx->r14 = S32(SIGNED(ctx->r18) >> 24);
    // 0x8003DED0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003DED4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8003DED8: sra         $t9, $s0, 16
    ctx->r25 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8003DEDC: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x8003DEE0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003DEE4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8003DEE8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8003DEEC: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x8003DEF0: jal         0x8003EAD8
    // 0x8003DEF4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    func_8003EAD8(rdram, ctx);
        goto after_0;
    // 0x8003DEF4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_0:
    // 0x8003DEF8: blez        $v0, L_8003E080
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8003DEFC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8003E080;
    }
    // 0x8003DEFC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003DF00:
    // 0x8003DF00: jal         0x8004974C
    // 0x8003DF04: nop

    func_8004974C(rdram, ctx);
        goto after_1;
    // 0x8003DF04: nop

    after_1:
    // 0x8003DF08: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8003DF0C: beq         $at, $zero, L_8003DF7C
    if (ctx->r1 == 0) {
        // 0x8003DF10: nop
    
            goto L_8003DF7C;
    }
    // 0x8003DF10: nop

    // 0x8003DF14: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003DF18: sll         $t0, $s0, 16
    ctx->r8 = S32(ctx->r16 << 16);
    // 0x8003DF1C: jal         0x8003EAD8
    // 0x8003DF20: sra         $s0, $t0, 16
    ctx->r16 = S32(SIGNED(ctx->r8) >> 16);
    func_8003EAD8(rdram, ctx);
        goto after_2;
    // 0x8003DF20: sra         $s0, $t0, 16
    ctx->r16 = S32(SIGNED(ctx->r8) >> 16);
    after_2:
    // 0x8003DF24: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003DF28: bne         $at, $zero, L_8003DF40
    if (ctx->r1 != 0) {
        // 0x8003DF2C: sll         $a0, $s2, 24
        ctx->r4 = S32(ctx->r18 << 24);
            goto L_8003DF40;
    }
    // 0x8003DF2C: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x8003DF30: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
    // 0x8003DF34: sra         $t2, $v0, 24
    ctx->r10 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8003DF38: b           L_8003E080
    // 0x8003DF3C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_8003E080;
    // 0x8003DF3C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_8003DF40:
    // 0x8003DF40: sll         $s1, $s0, 24
    ctx->r17 = S32(ctx->r16 << 24);
    // 0x8003DF44: sra         $t4, $s1, 24
    ctx->r12 = S32(SIGNED(ctx->r17) >> 24);
    // 0x8003DF48: sll         $a1, $t4, 24
    ctx->r5 = S32(ctx->r12 << 24);
    // 0x8003DF4C: sra         $t5, $a1, 24
    ctx->r13 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8003DF50: sra         $t3, $a0, 24
    ctx->r11 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8003DF54: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x8003DF58: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x8003DF5C: jal         0x8003D934
    // 0x8003DF60: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    func_8003D934(rdram, ctx);
        goto after_3;
    // 0x8003DF60: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    after_3:
    // 0x8003DF64: jal         0x8003E2D8
    // 0x8003DF68: nop

    func_8003E2D8(rdram, ctx);
        goto after_4;
    // 0x8003DF68: nop

    after_4:
    // 0x8003DF6C: beq         $v0, $zero, L_8003E030
    if (ctx->r2 == 0) {
        // 0x8003DF70: sll         $a0, $s2, 24
        ctx->r4 = S32(ctx->r18 << 24);
            goto L_8003E030;
    }
    // 0x8003DF70: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x8003DF74: b           L_8003E080
    // 0x8003DF78: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_8003E080;
    // 0x8003DF78: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_8003DF7C:
    // 0x8003DF7C: bne         $s3, $zero, L_8003DF8C
    if (ctx->r19 != 0) {
        // 0x8003DF80: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8003DF8C;
    }
    // 0x8003DF80: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003DF84: b           L_8003DF94
    // 0x8003DF88: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_8003DF94;
    // 0x8003DF88: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8003DF8C:
    // 0x8003DF8C: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x8003DF90: sra         $s0, $t6, 16
    ctx->r16 = S32(SIGNED(ctx->r14) >> 16);
L_8003DF94:
    // 0x8003DF94: jal         0x8003EAD8
    // 0x8003DF98: nop

    func_8003EAD8(rdram, ctx);
        goto after_5;
    // 0x8003DF98: nop

    after_5:
    // 0x8003DF9C: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003DFA0: bne         $at, $zero, L_8003DFB8
    if (ctx->r1 != 0) {
        // 0x8003DFA4: sll         $a0, $s2, 24
        ctx->r4 = S32(ctx->r18 << 24);
            goto L_8003DFB8;
    }
    // 0x8003DFA4: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x8003DFA8: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
    // 0x8003DFAC: sra         $t8, $v0, 24
    ctx->r24 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8003DFB0: b           L_8003E080
    // 0x8003DFB4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_8003E080;
    // 0x8003DFB4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8003DFB8:
    // 0x8003DFB8: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x8003DFBC: sra         $t0, $a1, 24
    ctx->r8 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8003DFC0: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8003DFC4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8003DFC8: jal         0x8003D934
    // 0x8003DFCC: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    func_8003D934(rdram, ctx);
        goto after_6;
    // 0x8003DFCC: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_6:
    // 0x8003DFD0: jal         0x8003E2D8
    // 0x8003DFD4: nop

    func_8003E2D8(rdram, ctx);
        goto after_7;
    // 0x8003DFD4: nop

    after_7:
    // 0x8003DFD8: beq         $v0, $zero, L_8003E030
    if (ctx->r2 == 0) {
        // 0x8003DFDC: sll         $a0, $s2, 24
        ctx->r4 = S32(ctx->r18 << 24);
            goto L_8003E030;
    }
    // 0x8003DFDC: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x8003DFE0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003DFE4: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x8003DFE8: jal         0x8003EAD8
    // 0x8003DFEC: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    func_8003EAD8(rdram, ctx);
        goto after_8;
    // 0x8003DFEC: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    after_8:
    // 0x8003DFF0: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003DFF4: bne         $at, $zero, L_8003E00C
    if (ctx->r1 != 0) {
        // 0x8003DFF8: sll         $a0, $s2, 24
        ctx->r4 = S32(ctx->r18 << 24);
            goto L_8003E00C;
    }
    // 0x8003DFF8: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x8003DFFC: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
    // 0x8003E000: sra         $t3, $v0, 24
    ctx->r11 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8003E004: b           L_8003E080
    // 0x8003E008: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
        goto L_8003E080;
    // 0x8003E008: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
L_8003E00C:
    // 0x8003E00C: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x8003E010: sra         $t5, $a1, 24
    ctx->r13 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8003E014: sra         $t4, $a0, 24
    ctx->r12 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8003E018: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x8003E01C: jal         0x8003D934
    // 0x8003E020: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    func_8003D934(rdram, ctx);
        goto after_9;
    // 0x8003E020: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    after_9:
    // 0x8003E024: jal         0x8003E2D8
    // 0x8003E028: nop

    func_8003E2D8(rdram, ctx);
        goto after_10;
    // 0x8003E028: nop

    after_10:
    // 0x8003E02C: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
L_8003E030:
    // 0x8003E030: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x8003E034: sra         $t7, $a1, 16
    ctx->r15 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8003E038: sra         $t6, $a0, 24
    ctx->r14 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8003E03C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8003E040: jal         0x8003E09C
    // 0x8003E044: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_8003E09C(rdram, ctx);
        goto after_11;
    // 0x8003E044: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_11:
    // 0x8003E048: jal         0x8003EAD8
    // 0x8003E04C: nop

    func_8003EAD8(rdram, ctx);
        goto after_12;
    // 0x8003E04C: nop

    after_12:
    // 0x8003E050: sll         $a0, $s2, 16
    ctx->r4 = S32(ctx->r18 << 16);
    // 0x8003E054: sra         $t8, $a0, 16
    ctx->r24 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8003E058: jal         0x8003EEC0
    // 0x8003E05C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_8003EEC0(rdram, ctx);
        goto after_13;
    // 0x8003E05C: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_13:
    // 0x8003E060: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8003E064: sll         $t9, $s3, 16
    ctx->r25 = S32(ctx->r19 << 16);
    // 0x8003E068: jal         0x8003EAD8
    // 0x8003E06C: sra         $s3, $t9, 16
    ctx->r19 = S32(SIGNED(ctx->r25) >> 16);
    func_8003EAD8(rdram, ctx);
        goto after_14;
    // 0x8003E06C: sra         $s3, $t9, 16
    ctx->r19 = S32(SIGNED(ctx->r25) >> 16);
    after_14:
    // 0x8003E070: slt         $at, $s3, $v0
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003E074: bne         $at, $zero, L_8003DF00
    if (ctx->r1 != 0) {
        // 0x8003E078: nop
    
            goto L_8003DF00;
    }
    // 0x8003E078: nop

    // 0x8003E07C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003E080:
    // 0x8003E080: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003E084: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003E088: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003E08C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8003E090: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8003E094: jr          $ra
    // 0x8003E098: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8003E098: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003E09C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E09C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8003E0A0: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x8003E0A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003E0A8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8003E0AC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8003E0B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003E0B4: lh          $a1, 0xC($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XC);
    // 0x8003E0B8: lh          $a0, 0xA($v0)
    ctx->r4 = MEM_H(ctx->r2, 0XA);
    // 0x8003E0BC: lh          $a2, 0xA9E($v0)
    ctx->r6 = MEM_H(ctx->r2, 0XA9E);
    // 0x8003E0C0: lh          $a3, 0xAA0($v0)
    ctx->r7 = MEM_H(ctx->r2, 0XAA0);
    // 0x8003E0C4: jal         0x8003CF0C
    // 0x8003E0C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8003CF0C(rdram, ctx);
        goto after_0;
    // 0x8003E0C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x8003E0CC: sll         $s0, $v0, 24
    ctx->r16 = S32(ctx->r2 << 24);
    // 0x8003E0D0: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x8003E0D4: sra         $t6, $s0, 24
    ctx->r14 = S32(SIGNED(ctx->r16) >> 24);
    // 0x8003E0D8: sra         $t7, $a1, 24
    ctx->r15 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8003E0DC: lb          $a0, 0x33($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X33);
    // 0x8003E0E0: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x8003E0E4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x8003E0E8: jal         0x8003F030
    // 0x8003E0EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8003F030(rdram, ctx);
        goto after_1;
    // 0x8003E0EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8003E0F0: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x8003E0F4: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8003E0F8: lb          $a0, 0x33($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X33);
    // 0x8003E0FC: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x8003E100: jal         0x8003F030
    // 0x8003E104: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8003F030(rdram, ctx);
        goto after_2;
    // 0x8003E104: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x8003E108: jal         0x8004974C
    // 0x8003E10C: nop

    func_8004974C(rdram, ctx);
        goto after_3;
    // 0x8003E10C: nop

    after_3:
    // 0x8003E110: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003E114: bne         $v0, $at, L_8003E2C8
    if (ctx->r2 != ctx->r1) {
        // 0x8003E118: lui         $t6, 0x800A
        ctx->r14 = S32(0X800A << 16);
            goto L_8003E2C8;
    }
    // 0x8003E118: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x8003E11C: lh          $a2, 0x36($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X36);
    // 0x8003E120: lb          $t9, 0x33($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X33);
    // 0x8003E124: addiu       $t6, $t6, 0x7988
    ctx->r14 = ADD32(ctx->r14, 0X7988);
    // 0x8003E128: sll         $t5, $t9, 4
    ctx->r13 = S32(ctx->r25 << 4);
    // 0x8003E12C: addu        $v0, $t5, $t6
    ctx->r2 = ADD32(ctx->r13, ctx->r14);
    // 0x8003E130: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
    // 0x8003E134: addu        $v1, $v0, $t7
    ctx->r3 = ADD32(ctx->r2, ctx->r15);
    // 0x8003E138: lb          $t0, 0x0($v1)
    ctx->r8 = MEM_B(ctx->r3, 0X0);
    // 0x8003E13C: lb          $t1, 0x1($v1)
    ctx->r9 = MEM_B(ctx->r3, 0X1);
    // 0x8003E140: bgez        $a2, L_8003E150
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8003E144: sra         $t8, $a2, 1
        ctx->r24 = S32(SIGNED(ctx->r6) >> 1);
            goto L_8003E150;
    }
    // 0x8003E144: sra         $t8, $a2, 1
    ctx->r24 = S32(SIGNED(ctx->r6) >> 1);
    // 0x8003E148: addiu       $at, $a2, 0x1
    ctx->r1 = ADD32(ctx->r6, 0X1);
    // 0x8003E14C: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_8003E150:
    // 0x8003E150: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8003E154: addu        $a0, $v0, $t9
    ctx->r4 = ADD32(ctx->r2, ctx->r25);
    // 0x8003E158: lb          $a1, 0x10($a0)
    ctx->r5 = MEM_B(ctx->r4, 0X10);
    // 0x8003E15C: lb          $a3, 0x11($a0)
    ctx->r7 = MEM_B(ctx->r4, 0X11);
    // 0x8003E160: sh          $t0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r8;
    // 0x8003E164: sh          $t1, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r9;
    // 0x8003E168: sh          $a1, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r5;
    // 0x8003E16C: jal         0x80038AC4
    // 0x8003E170: sh          $a3, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r7;
    func_80038AC4(rdram, ctx);
        goto after_4;
    // 0x8003E170: sh          $a3, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r7;
    after_4:
    // 0x8003E174: lh          $a1, 0x28($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X28);
    // 0x8003E178: lh          $a3, 0x26($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X26);
    // 0x8003E17C: lh          $t0, 0x2C($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2C);
    // 0x8003E180: lh          $t1, 0x2A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2A);
    // 0x8003E184: bne         $v0, $zero, L_8003E1C8
    if (ctx->r2 != 0) {
        // 0x8003E188: or          $t2, $zero, $zero
        ctx->r10 = 0 | 0;
            goto L_8003E1C8;
    }
    // 0x8003E188: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x8003E18C: andi        $t5, $s0, 0xFF
    ctx->r13 = ctx->r16 & 0XFF;
    // 0x8003E190: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x8003E194: beq         $at, $zero, L_8003E1B4
    if (ctx->r1 == 0) {
        // 0x8003E198: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_8003E1B4;
    }
    // 0x8003E198: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8003E19C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8003E1A0: sll         $t6, $s0, 24
    ctx->r14 = S32(ctx->r16 << 24);
    // 0x8003E1A4: sra         $s0, $t6, 24
    ctx->r16 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8003E1A8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8003E1AC: b           L_8003E1CC
    // 0x8003E1B0: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
        goto L_8003E1CC;
    // 0x8003E1B0: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
L_8003E1B4:
    // 0x8003E1B4: addiu       $s0, $s0, -0x2
    ctx->r16 = ADD32(ctx->r16, -0X2);
    // 0x8003E1B8: sll         $t8, $s0, 24
    ctx->r24 = S32(ctx->r16 << 24);
    // 0x8003E1BC: sra         $s0, $t8, 24
    ctx->r16 = S32(SIGNED(ctx->r24) >> 24);
    // 0x8003E1C0: b           L_8003E1CC
    // 0x8003E1C4: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
        goto L_8003E1CC;
    // 0x8003E1C4: or          $t3, $zero, $zero
    ctx->r11 = 0 | 0;
L_8003E1C8:
    // 0x8003E1C8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
L_8003E1CC:
    // 0x8003E1CC: andi        $t5, $s0, 0xFF
    ctx->r13 = ctx->r16 & 0XFF;
    // 0x8003E1D0: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x8003E1D4: beq         $at, $zero, L_8003E22C
    if (ctx->r1 == 0) {
        // 0x8003E1D8: lh          $t8, 0x36($sp)
        ctx->r24 = MEM_H(ctx->r29, 0X36);
            goto L_8003E22C;
    }
    // 0x8003E1D8: lh          $t8, 0x36($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X36);
    // 0x8003E1DC: lh          $t6, 0x36($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X36);
    // 0x8003E1E0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8003E1E4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x8003E1E8: beq         $t7, $zero, L_8003E20C
    if (ctx->r15 == 0) {
        // 0x8003E1EC: addiu       $a2, $a2, -0x3110
        ctx->r6 = ADD32(ctx->r6, -0X3110);
            goto L_8003E20C;
    }
    // 0x8003E1EC: addiu       $a2, $a2, -0x3110
    ctx->r6 = ADD32(ctx->r6, -0X3110);
    // 0x8003E1F0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8003E1F4: addiu       $a2, $a2, -0x3110
    ctx->r6 = ADD32(ctx->r6, -0X3110);
    // 0x8003E1F8: addu        $v0, $a2, $t0
    ctx->r2 = ADD32(ctx->r6, ctx->r8);
    // 0x8003E1FC: lb          $t8, 0x11($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X11);
    // 0x8003E200: addu        $t9, $a2, $a3
    ctx->r25 = ADD32(ctx->r6, ctx->r7);
    // 0x8003E204: b           L_8003E21C
    // 0x8003E208: sb          $t8, 0x11($t9)
    MEM_B(0X11, ctx->r25) = ctx->r24;
        goto L_8003E21C;
    // 0x8003E208: sb          $t8, 0x11($t9)
    MEM_B(0X11, ctx->r25) = ctx->r24;
L_8003E20C:
    // 0x8003E20C: addu        $v0, $a2, $t0
    ctx->r2 = ADD32(ctx->r6, ctx->r8);
    // 0x8003E210: lb          $t5, 0x11($v0)
    ctx->r13 = MEM_B(ctx->r2, 0X11);
    // 0x8003E214: addu        $t6, $a2, $a1
    ctx->r14 = ADD32(ctx->r6, ctx->r5);
    // 0x8003E218: sb          $t5, 0x11($t6)
    MEM_B(0X11, ctx->r14) = ctx->r13;
L_8003E21C:
    // 0x8003E21C: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8003E220: b           L_8003E274
    // 0x8003E224: sb          $t7, 0x11($v0)
    MEM_B(0X11, ctx->r2) = ctx->r15;
        goto L_8003E274;
    // 0x8003E224: sb          $t7, 0x11($v0)
    MEM_B(0X11, ctx->r2) = ctx->r15;
    // 0x8003E228: lh          $t8, 0x36($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X36);
L_8003E22C:
    // 0x8003E22C: nop

    // 0x8003E230: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x8003E234: beq         $t9, $zero, L_8003E254
    if (ctx->r25 == 0) {
        // 0x8003E238: lui         $a2, 0x8012
        ctx->r6 = S32(0X8012 << 16);
            goto L_8003E254;
    }
    // 0x8003E238: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8003E23C: addiu       $a2, $a2, -0x3110
    ctx->r6 = ADD32(ctx->r6, -0X3110);
    // 0x8003E240: addu        $v0, $a2, $t1
    ctx->r2 = ADD32(ctx->r6, ctx->r9);
    // 0x8003E244: lb          $t5, 0x11($v0)
    ctx->r13 = MEM_B(ctx->r2, 0X11);
    // 0x8003E248: addu        $t6, $a2, $a3
    ctx->r14 = ADD32(ctx->r6, ctx->r7);
    // 0x8003E24C: b           L_8003E26C
    // 0x8003E250: sb          $t5, 0x11($t6)
    MEM_B(0X11, ctx->r14) = ctx->r13;
        goto L_8003E26C;
    // 0x8003E250: sb          $t5, 0x11($t6)
    MEM_B(0X11, ctx->r14) = ctx->r13;
L_8003E254:
    // 0x8003E254: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8003E258: addiu       $a2, $a2, -0x3110
    ctx->r6 = ADD32(ctx->r6, -0X3110);
    // 0x8003E25C: addu        $v0, $a2, $t1
    ctx->r2 = ADD32(ctx->r6, ctx->r9);
    // 0x8003E260: lb          $t7, 0x11($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X11);
    // 0x8003E264: addu        $t8, $a2, $a1
    ctx->r24 = ADD32(ctx->r6, ctx->r5);
    // 0x8003E268: sb          $t7, 0x11($t8)
    MEM_B(0X11, ctx->r24) = ctx->r15;
L_8003E26C:
    // 0x8003E26C: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8003E270: sb          $t9, 0x11($v0)
    MEM_B(0X11, ctx->r2) = ctx->r25;
L_8003E274:
    // 0x8003E274: addiu       $a3, $zero, 0xA94
    ctx->r7 = ADD32(0, 0XA94);
    // 0x8003E278: multu       $t2, $a3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003E27C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8003E280: addiu       $t4, $t4, -0x2CF0
    ctx->r12 = ADD32(ctx->r12, -0X2CF0);
    // 0x8003E284: sll         $t5, $t0, 1
    ctx->r13 = S32(ctx->r8 << 1);
    // 0x8003E288: addu        $v0, $a2, $t5
    ctx->r2 = ADD32(ctx->r6, ctx->r13);
    // 0x8003E28C: sll         $t9, $t1, 1
    ctx->r25 = S32(ctx->r9 << 1);
    // 0x8003E290: addu        $a0, $a2, $t9
    ctx->r4 = ADD32(ctx->r6, ctx->r25);
    // 0x8003E294: mflo        $t6
    ctx->r14 = lo;
    // 0x8003E298: addu        $v1, $t4, $t6
    ctx->r3 = ADD32(ctx->r12, ctx->r14);
    // 0x8003E29C: lhu         $t7, 0xA($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0XA);
    // 0x8003E2A0: multu       $t3, $a3
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003E2A4: lhu         $t8, 0xC($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0XC);
    // 0x8003E2A8: sb          $t7, 0x30($v0)
    MEM_B(0X30, ctx->r2) = ctx->r15;
    // 0x8003E2AC: sb          $t8, 0x31($v0)
    MEM_B(0X31, ctx->r2) = ctx->r24;
    // 0x8003E2B0: mflo        $t5
    ctx->r13 = lo;
    // 0x8003E2B4: addu        $a1, $t4, $t5
    ctx->r5 = ADD32(ctx->r12, ctx->r13);
    // 0x8003E2B8: lhu         $t6, 0xA($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0XA);
    // 0x8003E2BC: lhu         $t7, 0xC($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0XC);
    // 0x8003E2C0: sb          $t6, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r14;
    // 0x8003E2C4: sb          $t7, 0x31($a0)
    MEM_B(0X31, ctx->r4) = ctx->r15;
L_8003E2C8:
    // 0x8003E2C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003E2CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003E2D0: jr          $ra
    // 0x8003E2D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8003E2D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8003E2D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E2D8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8003E2DC: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8003E2E0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8003E2E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003E2E8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003E2EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003E2F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003E2F4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003E2F8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003E2FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003E300: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003E304: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003E308: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003E30C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003E310: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003E314: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8003E318: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E31C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8003E320: lb          $a0, 0x7($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X7);
    // 0x8003E324: lb          $a1, 0x8($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X8);
    // 0x8003E328: jal         0x8003CCB0
    // 0x8003E32C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8003CCB0(rdram, ctx);
        goto after_0;
    // 0x8003E32C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8003E330: bne         $v0, $zero, L_8003E380
    if (ctx->r2 != 0) {
        // 0x8003E334: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8003E380;
    }
    // 0x8003E334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003E338: jal         0x80044ED8
    // 0x8003E33C: nop

    func_80044ED8(rdram, ctx);
        goto after_1;
    // 0x8003E33C: nop

    after_1:
    // 0x8003E340: jal         0x80043B30
    // 0x8003E344: nop

    func_80043B30(rdram, ctx);
        goto after_2;
    // 0x8003E344: nop

    after_2:
    // 0x8003E348: jal         0x800443F4
    // 0x8003E34C: nop

    func_800443F4(rdram, ctx);
        goto after_3;
    // 0x8003E34C: nop

    after_3:
    // 0x8003E350: jal         0x8003F6D8
    // 0x8003E354: nop

    func_8003F6D8(rdram, ctx);
        goto after_4;
    // 0x8003E354: nop

    after_4:
    // 0x8003E358: jal         0x8003E390
    // 0x8003E35C: nop

    func_8003E390(rdram, ctx);
        goto after_5;
    // 0x8003E35C: nop

    after_5:
    // 0x8003E360: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8003E364: nop

    // 0x8003E368: lb          $a0, 0x1($t9)
    ctx->r4 = MEM_B(ctx->r25, 0X1);
    // 0x8003E36C: jal         0x800407A4
    // 0x8003E370: nop

    func_800407A4(rdram, ctx);
        goto after_6;
    // 0x8003E370: nop

    after_6:
    // 0x8003E374: b           L_8003E380
    // 0x8003E378: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003E380;
    // 0x8003E378: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003E37C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003E380:
    // 0x8003E380: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E384: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003E388: jr          $ra
    // 0x8003E38C: nop

    return;
    // 0x8003E38C: nop

;}
RECOMP_FUNC void func_8003E390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E390: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8003E394: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8003E398: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003E39C: bne         $t6, $zero, L_8003E3D4
    if (ctx->r14 != 0) {
        // 0x8003E3A0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8003E3D4;
    }
    // 0x8003E3A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E3A4: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8003E3A8: lb          $t7, -0x2F80($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X2F80);
    // 0x8003E3AC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8003E3B0: bne         $t7, $at, L_8003E3D4
    if (ctx->r15 != ctx->r1) {
        // 0x8003E3B4: lui         $t8, 0x8011
        ctx->r24 = S32(0X8011 << 16);
            goto L_8003E3D4;
    }
    // 0x8003E3B4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8003E3B8: lb          $t8, -0x2F7F($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X2F7F);
    // 0x8003E3BC: lui         $t9, 0x8004
    ctx->r25 = S32(0X8004 << 16);
    // 0x8003E3C0: slti        $at, $t8, 0x44
    ctx->r1 = SIGNED(ctx->r24) < 0X44 ? 1 : 0;
    // 0x8003E3C4: bne         $at, $zero, L_8003E3D4
    if (ctx->r1 != 0) {
        // 0x8003E3C8: addiu       $t9, $t9, -0x1900
        ctx->r25 = ADD32(ctx->r25, -0X1900);
            goto L_8003E3D4;
    }
    // 0x8003E3C8: addiu       $t9, $t9, -0x1900
    ctx->r25 = ADD32(ctx->r25, -0X1900);
    // 0x8003E3CC: b           L_8003E444
    // 0x8003E3D0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
        goto L_8003E444;
    // 0x8003E3D0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
L_8003E3D4:
    // 0x8003E3D4: jal         0x8004974C
    // 0x8003E3D8: nop

    func_8004974C(rdram, ctx);
        goto after_0;
    // 0x8003E3D8: nop

    after_0:
    // 0x8003E3DC: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8003E3E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003E3E4: bne         $v0, $at, L_8003E408
    if (ctx->r2 != ctx->r1) {
        // 0x8003E3E8: addiu       $v1, $v1, -0x2F80
        ctx->r3 = ADD32(ctx->r3, -0X2F80);
            goto L_8003E408;
    }
    // 0x8003E3E8: addiu       $v1, $v1, -0x2F80
    ctx->r3 = ADD32(ctx->r3, -0X2F80);
    // 0x8003E3EC: lb          $t0, 0x3399($v1)
    ctx->r8 = MEM_B(ctx->r3, 0X3399);
    // 0x8003E3F0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8003E3F4: bne         $t0, $at, L_8003E408
    if (ctx->r8 != ctx->r1) {
        // 0x8003E3F8: lui         $t1, 0x8004
        ctx->r9 = S32(0X8004 << 16);
            goto L_8003E408;
    }
    // 0x8003E3F8: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x8003E3FC: addiu       $t1, $t1, -0x1804
    ctx->r9 = ADD32(ctx->r9, -0X1804);
    // 0x8003E400: b           L_8003E444
    // 0x8003E404: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
        goto L_8003E444;
    // 0x8003E404: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
L_8003E408:
    // 0x8003E408: jal         0x8004974C
    // 0x8003E40C: nop

    func_8004974C(rdram, ctx);
        goto after_1;
    // 0x8003E40C: nop

    after_1:
    // 0x8003E410: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8003E414: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8003E418: bne         $v0, $a0, L_8003E594
    if (ctx->r2 != ctx->r4) {
        // 0x8003E41C: addiu       $v1, $v1, -0x2F80
        ctx->r3 = ADD32(ctx->r3, -0X2F80);
            goto L_8003E594;
    }
    // 0x8003E41C: addiu       $v1, $v1, -0x2F80
    ctx->r3 = ADD32(ctx->r3, -0X2F80);
    // 0x8003E420: lb          $t2, 0x3399($v1)
    ctx->r10 = MEM_B(ctx->r3, 0X3399);
    // 0x8003E424: nop

    // 0x8003E428: bne         $a0, $t2, L_8003E598
    if (ctx->r4 != ctx->r10) {
        // 0x8003E42C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003E598;
    }
    // 0x8003E42C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E430: lb          $t3, 0x339B($v1)
    ctx->r11 = MEM_B(ctx->r3, 0X339B);
    // 0x8003E434: lui         $t4, 0x8004
    ctx->r12 = S32(0X8004 << 16);
    // 0x8003E438: beq         $t3, $zero, L_8003E594
    if (ctx->r11 == 0) {
        // 0x8003E43C: addiu       $t4, $t4, -0x174C
        ctx->r12 = ADD32(ctx->r12, -0X174C);
            goto L_8003E594;
    }
    // 0x8003E43C: addiu       $t4, $t4, -0x174C
    ctx->r12 = ADD32(ctx->r12, -0X174C);
    // 0x8003E440: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
L_8003E444:
    // 0x8003E444: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8003E448: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8003E44C: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8003E450: addiu       $a1, $a1, 0x3578
    ctx->r5 = ADD32(ctx->r5, 0X3578);
    // 0x8003E454: jalr        $t9
    // 0x8003E458: addiu       $a0, $a0, 0x3550
    ctx->r4 = ADD32(ctx->r4, 0X3550);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8003E458: addiu       $a0, $a0, 0x3550
    ctx->r4 = ADD32(ctx->r4, 0X3550);
    after_2:
    // 0x8003E45C: bne         $v0, $zero, L_8003E594
    if (ctx->r2 != 0) {
        // 0x8003E460: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_8003E594;
    }
    // 0x8003E460: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003E464: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8003E468: lh          $a0, 0xA($v1)
    ctx->r4 = MEM_H(ctx->r3, 0XA);
    // 0x8003E46C: lh          $a1, 0xC($v1)
    ctx->r5 = MEM_H(ctx->r3, 0XC);
    // 0x8003E470: lh          $a2, 0xA9E($v1)
    ctx->r6 = MEM_H(ctx->r3, 0XA9E);
    // 0x8003E474: lh          $a3, 0xAA0($v1)
    ctx->r7 = MEM_H(ctx->r3, 0XAA0);
    // 0x8003E478: jal         0x8003CF0C
    // 0x8003E47C: nop

    func_8003CF0C(rdram, ctx);
        goto after_3;
    // 0x8003E47C: nop

    after_3:
    // 0x8003E480: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8003E484: beq         $v0, $at, L_8003E51C
    if (ctx->r2 == ctx->r1) {
        // 0x8003E488: sh          $v0, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r2;
            goto L_8003E51C;
    }
    // 0x8003E488: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x8003E48C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003E490: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8003E494: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8003E498: addiu       $a2, $a2, 0x3578
    ctx->r6 = ADD32(ctx->r6, 0X3578);
    // 0x8003E49C: jal         0x8003E5A4
    // 0x8003E4A0: addiu       $a1, $a1, 0x3550
    ctx->r5 = ADD32(ctx->r5, 0X3550);
    func_8003E5A4(rdram, ctx);
        goto after_4;
    // 0x8003E4A0: addiu       $a1, $a1, 0x3550
    ctx->r5 = ADD32(ctx->r5, 0X3550);
    after_4:
    // 0x8003E4A4: beq         $v0, $zero, L_8003E594
    if (ctx->r2 == 0) {
        // 0x8003E4A8: lui         $a1, 0x801B
        ctx->r5 = S32(0X801B << 16);
            goto L_8003E594;
    }
    // 0x8003E4A8: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8003E4AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003E4B0: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8003E4B4: addiu       $a2, $a2, 0x3578
    ctx->r6 = ADD32(ctx->r6, 0X3578);
    // 0x8003E4B8: jal         0x8003E640
    // 0x8003E4BC: addiu       $a1, $a1, 0x3550
    ctx->r5 = ADD32(ctx->r5, 0X3550);
    func_8003E640(rdram, ctx);
        goto after_5;
    // 0x8003E4BC: addiu       $a1, $a1, 0x3550
    ctx->r5 = ADD32(ctx->r5, 0X3550);
    after_5:
    // 0x8003E4C0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003E4C4: beq         $v0, $zero, L_8003E594
    if (ctx->r2 == 0) {
        // 0x8003E4C8: addiu       $v1, $v1, -0x2CF0
        ctx->r3 = ADD32(ctx->r3, -0X2CF0);
            goto L_8003E594;
    }
    // 0x8003E4C8: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8003E4CC: lh          $t5, 0x1E($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X1E);
    // 0x8003E4D0: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8003E4D4: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x8003E4D8: beq         $at, $zero, L_8003E4F0
    if (ctx->r1 == 0) {
        // 0x8003E4DC: addiu       $a1, $a1, 0x3550
        ctx->r5 = ADD32(ctx->r5, 0X3550);
            goto L_8003E4F0;
    }
    // 0x8003E4DC: addiu       $a1, $a1, 0x3550
    ctx->r5 = ADD32(ctx->r5, 0X3550);
    // 0x8003E4E0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8003E4E4: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
    // 0x8003E4E8: b           L_8003E4FC
    // 0x8003E4EC: sh          $t6, 0xA9E($v1)
    MEM_H(0XA9E, ctx->r3) = ctx->r14;
        goto L_8003E4FC;
    // 0x8003E4EC: sh          $t6, 0xA9E($v1)
    MEM_H(0XA9E, ctx->r3) = ctx->r14;
L_8003E4F0:
    // 0x8003E4F0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8003E4F4: sh          $t7, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r15;
    // 0x8003E4F8: sh          $zero, 0xA9E($v1)
    MEM_H(0XA9E, ctx->r3) = 0;
L_8003E4FC:
    // 0x8003E4FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003E500: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8003E504: jal         0x8003E5A4
    // 0x8003E508: addiu       $a2, $a2, 0x3578
    ctx->r6 = ADD32(ctx->r6, 0X3578);
    func_8003E5A4(rdram, ctx);
        goto after_6;
    // 0x8003E508: addiu       $a2, $a2, 0x3578
    ctx->r6 = ADD32(ctx->r6, 0X3578);
    after_6:
    // 0x8003E50C: bne         $v0, $zero, L_8003E598
    if (ctx->r2 != 0) {
        // 0x8003E510: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003E598;
    }
    // 0x8003E510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E514: b           L_8003E598
    // 0x8003E518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003E598;
    // 0x8003E518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003E51C:
    // 0x8003E51C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003E520: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8003E524: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8003E528: addiu       $a2, $a2, 0x3578
    ctx->r6 = ADD32(ctx->r6, 0X3578);
    // 0x8003E52C: jal         0x8003E640
    // 0x8003E530: addiu       $a1, $a1, 0x3550
    ctx->r5 = ADD32(ctx->r5, 0X3550);
    func_8003E640(rdram, ctx);
        goto after_7;
    // 0x8003E530: addiu       $a1, $a1, 0x3550
    ctx->r5 = ADD32(ctx->r5, 0X3550);
    after_7:
    // 0x8003E534: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003E538: beq         $v0, $zero, L_8003E594
    if (ctx->r2 == 0) {
        // 0x8003E53C: addiu       $v1, $v1, -0x2CF0
        ctx->r3 = ADD32(ctx->r3, -0X2CF0);
            goto L_8003E594;
    }
    // 0x8003E53C: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8003E540: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8003E544: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003E548: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8003E54C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8003E550: sh          $t8, 0xA($v1)
    MEM_H(0XA, ctx->r3) = ctx->r24;
    // 0x8003E554: sh          $zero, 0xA9E($v1)
    MEM_H(0XA9E, ctx->r3) = 0;
    // 0x8003E558: addiu       $a2, $a2, 0x3578
    ctx->r6 = ADD32(ctx->r6, 0X3578);
    // 0x8003E55C: jal         0x8003E5A4
    // 0x8003E560: addiu       $a1, $a1, 0x3550
    ctx->r5 = ADD32(ctx->r5, 0X3550);
    func_8003E5A4(rdram, ctx);
        goto after_8;
    // 0x8003E560: addiu       $a1, $a1, 0x3550
    ctx->r5 = ADD32(ctx->r5, 0X3550);
    after_8:
    // 0x8003E564: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003E568: beq         $v0, $zero, L_8003E594
    if (ctx->r2 == 0) {
        // 0x8003E56C: addiu       $v1, $v1, -0x2CF0
        ctx->r3 = ADD32(ctx->r3, -0X2CF0);
            goto L_8003E594;
    }
    // 0x8003E56C: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8003E570: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8003E574: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8003E578: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8003E57C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8003E580: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
    // 0x8003E584: sh          $t0, 0xA9E($v1)
    MEM_H(0XA9E, ctx->r3) = ctx->r8;
    // 0x8003E588: addiu       $a2, $a2, 0x3578
    ctx->r6 = ADD32(ctx->r6, 0X3578);
    // 0x8003E58C: jal         0x8003E5A4
    // 0x8003E590: addiu       $a1, $a1, 0x3550
    ctx->r5 = ADD32(ctx->r5, 0X3550);
    func_8003E5A4(rdram, ctx);
        goto after_9;
    // 0x8003E590: addiu       $a1, $a1, 0x3550
    ctx->r5 = ADD32(ctx->r5, 0X3550);
    after_9:
L_8003E594:
    // 0x8003E594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003E598:
    // 0x8003E598: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003E59C: jr          $ra
    // 0x8003E5A0: nop

    return;
    // 0x8003E5A0: nop

;}
RECOMP_FUNC void func_8003E5A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E5A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003E5A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003E5AC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8003E5B0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8003E5B4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003E5B8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8003E5BC: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x8003E5C0: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8003E5C4: jal         0x8003E974
    // 0x8003E5C8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8003E974(rdram, ctx);
        goto after_0;
    // 0x8003E5C8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8003E5CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8003E5D0: jalr        $s3
    // 0x8003E5D4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_1;
    // 0x8003E5D4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x8003E5D8: beq         $v0, $zero, L_8003E5E8
    if (ctx->r2 == 0) {
        // 0x8003E5DC: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8003E5E8;
    }
    // 0x8003E5DC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003E5E0: b           L_8003E624
    // 0x8003E5E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003E624;
    // 0x8003E5E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003E5E8:
    // 0x8003E5E8: jal         0x8003E9E4
    // 0x8003E5EC: nop

    func_8003E9E4(rdram, ctx);
        goto after_2;
    // 0x8003E5EC: nop

    after_2:
    // 0x8003E5F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8003E5F4: jalr        $s3
    // 0x8003E5F8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_3;
    // 0x8003E5F8: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_3:
    // 0x8003E5FC: beq         $v0, $zero, L_8003E60C
    if (ctx->r2 == 0) {
        // 0x8003E600: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8003E60C;
    }
    // 0x8003E600: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003E604: b           L_8003E624
    // 0x8003E608: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003E624;
    // 0x8003E608: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003E60C:
    // 0x8003E60C: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x8003E610: sra         $s0, $t6, 16
    ctx->r16 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8003E614: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x8003E618: bne         $at, $zero, L_8003E5E8
    if (ctx->r1 != 0) {
        // 0x8003E61C: nop
    
            goto L_8003E5E8;
    }
    // 0x8003E61C: nop

    // 0x8003E620: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003E624:
    // 0x8003E624: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003E628: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003E62C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003E630: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8003E634: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8003E638: jr          $ra
    // 0x8003E63C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8003E63C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003E640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E640: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003E644: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8003E648: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003E64C: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x8003E650: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8003E654: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003E658: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x8003E65C: addiu       $s1, $s1, -0x2CF0
    ctx->r17 = ADD32(ctx->r17, -0X2CF0);
    // 0x8003E660: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8003E664: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8003E668: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8003E66C: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x8003E670: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003E674: sh          $zero, 0xA9E($s1)
    MEM_H(0XA9E, ctx->r17) = 0;
    // 0x8003E678: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8003E67C: jalr        $s4
    // 0x8003E680: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_0;
    // 0x8003E680: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x8003E684: beq         $v0, $zero, L_8003E694
    if (ctx->r2 == 0) {
        // 0x8003E688: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8003E694;
    }
    // 0x8003E688: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003E68C: b           L_8003E6E0
    // 0x8003E690: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003E6E0;
    // 0x8003E690: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003E694:
    // 0x8003E694: lhu         $t7, 0xA($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0XA);
    // 0x8003E698: lhu         $t9, 0xA9E($s1)
    ctx->r25 = MEM_HU(ctx->r17, 0XA9E);
    // 0x8003E69C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8003E6A0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8003E6A4: sh          $t8, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r24;
    // 0x8003E6A8: sh          $t0, 0xA9E($s1)
    MEM_H(0XA9E, ctx->r17) = ctx->r8;
    // 0x8003E6AC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8003E6B0: jalr        $s4
    // 0x8003E6B4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    LOOKUP_FUNC(ctx->r20)(rdram, ctx);
        goto after_1;
    // 0x8003E6B4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_1:
    // 0x8003E6B8: beq         $v0, $zero, L_8003E6C8
    if (ctx->r2 == 0) {
        // 0x8003E6BC: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_8003E6C8;
    }
    // 0x8003E6BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003E6C0: b           L_8003E6E0
    // 0x8003E6C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003E6E0;
    // 0x8003E6C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003E6C8:
    // 0x8003E6C8: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x8003E6CC: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8003E6D0: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x8003E6D4: bne         $at, $zero, L_8003E694
    if (ctx->r1 != 0) {
        // 0x8003E6D8: nop
    
            goto L_8003E694;
    }
    // 0x8003E6D8: nop

    // 0x8003E6DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003E6E0:
    // 0x8003E6E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8003E6E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003E6E8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003E6EC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003E6F0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8003E6F4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8003E6F8: jr          $ra
    // 0x8003E6FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8003E6FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8003E700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E700: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8003E704: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8003E708: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8003E70C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003E710: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003E714: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003E718: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003E71C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003E720: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003E724: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003E728: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003E72C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003E730: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003E734: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003E738: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003E73C: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8003E740: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E744: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8003E748: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8003E74C: jal         0x80041458
    // 0x8003E750: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80041458(rdram, ctx);
        goto after_0;
    // 0x8003E750: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003E754: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8003E758: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8003E75C: lb          $t9, 0xC($v0)
    ctx->r25 = MEM_B(ctx->r2, 0XC);
    // 0x8003E760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E764: addu        $t0, $t9, $a1
    ctx->r8 = ADD32(ctx->r25, ctx->r5);
    // 0x8003E768: lb          $v1, 0x0($t0)
    ctx->r3 = MEM_B(ctx->r8, 0X0);
    // 0x8003E76C: nop

    // 0x8003E770: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8003E774: beq         $at, $zero, L_8003E7E8
    if (ctx->r1 == 0) {
        // 0x8003E778: nop
    
            goto L_8003E7E8;
    }
    // 0x8003E778: nop

    // 0x8003E77C: lb          $t1, 0x7($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X7);
    // 0x8003E780: nop

    // 0x8003E784: addu        $t2, $t1, $a1
    ctx->r10 = ADD32(ctx->r9, ctx->r5);
    // 0x8003E788: lb          $a0, 0x0($t2)
    ctx->r4 = MEM_B(ctx->r10, 0X0);
    // 0x8003E78C: nop

    // 0x8003E790: slti        $at, $a0, 0x2
    ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8003E794: bne         $at, $zero, L_8003E7BC
    if (ctx->r1 != 0) {
        // 0x8003E798: slti        $at, $v1, 0x2
        ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8003E7BC;
    }
    // 0x8003E798: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8003E79C: lb          $t3, 0x8($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X8);
    // 0x8003E7A0: nop

    // 0x8003E7A4: addu        $t4, $t3, $a1
    ctx->r12 = ADD32(ctx->r11, ctx->r5);
    // 0x8003E7A8: lb          $t5, 0x0($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X0);
    // 0x8003E7AC: nop

    // 0x8003E7B0: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x8003E7B4: beq         $at, $zero, L_8003E7E8
    if (ctx->r1 == 0) {
        // 0x8003E7B8: slti        $at, $v1, 0x2
        ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8003E7E8;
    }
    // 0x8003E7B8: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
L_8003E7BC:
    // 0x8003E7BC: beq         $at, $zero, L_8003E7F0
    if (ctx->r1 == 0) {
        // 0x8003E7C0: nop
    
            goto L_8003E7F0;
    }
    // 0x8003E7C0: nop

    // 0x8003E7C4: beq         $v1, $a0, L_8003E7F0
    if (ctx->r3 == ctx->r4) {
        // 0x8003E7C8: nop
    
            goto L_8003E7F0;
    }
    // 0x8003E7C8: nop

    // 0x8003E7CC: lb          $t6, 0x8($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X8);
    // 0x8003E7D0: nop

    // 0x8003E7D4: addu        $t7, $t6, $a1
    ctx->r15 = ADD32(ctx->r14, ctx->r5);
    // 0x8003E7D8: lb          $t8, 0x0($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X0);
    // 0x8003E7DC: nop

    // 0x8003E7E0: beq         $v1, $t8, L_8003E7F4
    if (ctx->r3 == ctx->r24) {
        // 0x8003E7E4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8003E7F4;
    }
    // 0x8003E7E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003E7E8:
    // 0x8003E7E8: b           L_8003E7F4
    // 0x8003E7EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003E7F4;
    // 0x8003E7EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003E7F0:
    // 0x8003E7F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003E7F4:
    // 0x8003E7F4: jr          $ra
    // 0x8003E7F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8003E7F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003E7FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E7FC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8003E800: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8003E804: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8003E808: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003E80C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003E810: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003E814: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003E818: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003E81C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003E820: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003E824: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003E828: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003E82C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003E830: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003E834: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003E838: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8003E83C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E840: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8003E844: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8003E848: jal         0x80041458
    // 0x8003E84C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    func_80041458(rdram, ctx);
        goto after_0;
    // 0x8003E84C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    after_0:
    // 0x8003E850: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8003E854: nop

    // 0x8003E858: lb          $a0, 0x7($t0)
    ctx->r4 = MEM_B(ctx->r8, 0X7);
    // 0x8003E85C: jal         0x800498B8
    // 0x8003E860: nop

    func_800498B8(rdram, ctx);
        goto after_1;
    // 0x8003E860: nop

    after_1:
    // 0x8003E864: sll         $t1, $v0, 2
    ctx->r9 = S32(ctx->r2 << 2);
    // 0x8003E868: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8003E86C: subu        $t1, $t1, $v0
    ctx->r9 = SUB32(ctx->r9, ctx->r2);
    // 0x8003E870: sh          $t1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r9;
    // 0x8003E874: lb          $a0, 0x7($t2)
    ctx->r4 = MEM_B(ctx->r10, 0X7);
    // 0x8003E878: jal         0x800498B8
    // 0x8003E87C: nop

    func_800498B8(rdram, ctx);
        goto after_2;
    // 0x8003E87C: nop

    after_2:
    // 0x8003E880: lh          $t3, 0x1E($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1E);
    // 0x8003E884: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8003E888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E88C: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x8003E890: lb          $t5, 0x1($v1)
    ctx->r13 = MEM_B(ctx->r3, 0X1);
    // 0x8003E894: lb          $t6, 0x2($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X2);
    // 0x8003E898: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003E89C: beq         $t5, $t6, L_8003E8AC
    if (ctx->r13 == ctx->r14) {
        // 0x8003E8A0: nop
    
            goto L_8003E8AC;
    }
    // 0x8003E8A0: nop

    // 0x8003E8A4: b           L_8003E8AC
    // 0x8003E8A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003E8AC;
    // 0x8003E8A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003E8AC:
    // 0x8003E8AC: jr          $ra
    // 0x8003E8B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8003E8B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003E8B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E8B4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8003E8B8: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8003E8BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003E8C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003E8C4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003E8C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003E8CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003E8D0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003E8D4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003E8D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003E8DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003E8E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003E8E4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8003E8E8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003E8EC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003E8F0: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8003E8F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003E8F8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003E8FC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8003E900: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8003E904: lb          $a0, 0x7($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X7);
    // 0x8003E908: jal         0x800498B8
    // 0x8003E90C: nop

    func_800498B8(rdram, ctx);
        goto after_0;
    // 0x8003E90C: nop

    after_0:
    // 0x8003E910: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x8003E914: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8003E918: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8003E91C: jal         0x80041458
    // 0x8003E920: sh          $t9, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r25;
    func_80041458(rdram, ctx);
        goto after_1;
    // 0x8003E920: sh          $t9, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r25;
    after_1:
    // 0x8003E924: lh          $t0, 0x1A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1A);
    // 0x8003E928: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8003E92C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003E930: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x8003E934: lb          $v1, 0x2($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X2);
    // 0x8003E938: lb          $t2, 0x1($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X1);
    // 0x8003E93C: nop

    // 0x8003E940: beq         $t2, $v1, L_8003E960
    if (ctx->r10 == ctx->r3) {
        // 0x8003E944: nop
    
            goto L_8003E960;
    }
    // 0x8003E944: nop

    // 0x8003E948: lb          $t3, 0x3($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X3);
    // 0x8003E94C: nop

    // 0x8003E950: beq         $v1, $t3, L_8003E964
    if (ctx->r3 == ctx->r11) {
        // 0x8003E954: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8003E964;
    }
    // 0x8003E954: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003E958: b           L_8003E964
    // 0x8003E95C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003E964;
    // 0x8003E95C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003E960:
    // 0x8003E960: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003E964:
    // 0x8003E964: jr          $ra
    // 0x8003E968: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8003E968: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003E974(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E974: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8003E978: addiu       $a0, $a0, -0x2CF0
    ctx->r4 = ADD32(ctx->r4, -0X2CF0);
    // 0x8003E97C: lhu         $v0, 0xA($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XA);
    // 0x8003E980: lhu         $v1, 0xA9E($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0XA9E);
    // 0x8003E984: addiu       $a1, $zero, 0xA94
    ctx->r5 = ADD32(0, 0XA94);
    // 0x8003E988: bne         $v0, $v1, L_8003E998
    if (ctx->r2 != ctx->r3) {
        // 0x8003E98C: slt         $at, $v0, $v1
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8003E998;
    }
    // 0x8003E98C: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003E990: jr          $ra
    // 0x8003E994: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8003E994: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003E998:
    // 0x8003E998: beq         $at, $zero, L_8003E9A8
    if (ctx->r1 == 0) {
        // 0x8003E99C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8003E9A8;
    }
    // 0x8003E99C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8003E9A0: b           L_8003E9A8
    // 0x8003E9A4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_8003E9A8;
    // 0x8003E9A4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8003E9A8:
    // 0x8003E9A8: multu       $v1, $a1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003E9AC: xori        $t0, $v1, 0x1
    ctx->r8 = ctx->r3 ^ 0X1;
    // 0x8003E9B0: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x8003E9B4: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8003E9B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003E9BC: mflo        $t6
    ctx->r14 = lo;
    // 0x8003E9C0: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x8003E9C4: lhu         $t8, 0xA($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0XA);
    // 0x8003E9C8: multu       $t2, $a1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003E9CC: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8003E9D0: mflo        $t3
    ctx->r11 = lo;
    // 0x8003E9D4: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x8003E9D8: sh          $t9, 0xA($t4)
    MEM_H(0XA, ctx->r12) = ctx->r25;
    // 0x8003E9DC: jr          $ra
    // 0x8003E9E0: nop

    return;
    // 0x8003E9E0: nop

;}
RECOMP_FUNC void func_8003E9E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E9E4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8003E9E8: addiu       $a1, $a1, -0x2CF0
    ctx->r5 = ADD32(ctx->r5, -0X2CF0);
    // 0x8003E9EC: lhu         $v0, 0xA($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0XA);
    // 0x8003E9F0: lhu         $v1, 0xA9E($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0XA9E);
    // 0x8003E9F4: nop

    // 0x8003E9F8: bne         $v0, $v1, L_8003EA08
    if (ctx->r2 != ctx->r3) {
        // 0x8003E9FC: slt         $at, $v1, $v0
        ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_8003EA08;
    }
    // 0x8003E9FC: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003EA00: jr          $ra
    // 0x8003EA04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8003EA04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003EA08:
    // 0x8003EA08: beq         $at, $zero, L_8003EA18
    if (ctx->r1 == 0) {
        // 0x8003EA0C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8003EA18;
    }
    // 0x8003EA0C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8003EA10: b           L_8003EA18
    // 0x8003EA14: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_8003EA18;
    // 0x8003EA14: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8003EA18:
    // 0x8003EA18: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8003EA1C: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x8003EA20: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003EA24: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x8003EA28: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8003EA2C: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x8003EA30: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003EA34: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x8003EA38: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003EA3C: addu        $a0, $a1, $t6
    ctx->r4 = ADD32(ctx->r5, ctx->r14);
    // 0x8003EA40: lhu         $t7, 0xA($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0XA);
    // 0x8003EA44: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003EA48: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8003EA4C: sh          $t8, 0xA($a0)
    MEM_H(0XA, ctx->r4) = ctx->r24;
    // 0x8003EA50: jr          $ra
    // 0x8003EA54: nop

    return;
    // 0x8003EA54: nop

;}
RECOMP_FUNC void func_8003EA58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003EA58: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003EA5C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003EA60: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003EA64: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003EA68: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8003EA6C: jal         0x8003EAD8
    // 0x8003EA70: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_8003EAD8(rdram, ctx);
        goto after_0;
    // 0x8003EA70: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_0:
    // 0x8003EA74: blez        $v0, L_8003EAC0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8003EA78: sll         $t6, $s0, 1
        ctx->r14 = S32(ctx->r16 << 1);
            goto L_8003EAC0;
    }
    // 0x8003EA78: sll         $t6, $s0, 1
    ctx->r14 = S32(ctx->r16 << 1);
L_8003EA7C:
    // 0x8003EA7C: addu        $v0, $s1, $t6
    ctx->r2 = ADD32(ctx->r17, ctx->r14);
    // 0x8003EA80: lb          $a0, 0x0($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X0);
    // 0x8003EA84: lb          $a1, 0x1($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X1);
    // 0x8003EA88: jal         0x8003CCB0
    // 0x8003EA8C: nop

    func_8003CCB0(rdram, ctx);
        goto after_1;
    // 0x8003EA8C: nop

    after_1:
    // 0x8003EA90: beq         $v0, $zero, L_8003EAA4
    if (ctx->r2 == 0) {
        // 0x8003EA94: sll         $v0, $s0, 24
        ctx->r2 = S32(ctx->r16 << 24);
            goto L_8003EAA4;
    }
    // 0x8003EA94: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
    // 0x8003EA98: sra         $t7, $v0, 24
    ctx->r15 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8003EA9C: b           L_8003EAC4
    // 0x8003EAA0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_8003EAC4;
    // 0x8003EAA0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8003EAA4:
    // 0x8003EAA4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003EAA8: sll         $t8, $s0, 16
    ctx->r24 = S32(ctx->r16 << 16);
    // 0x8003EAAC: jal         0x8003EAD8
    // 0x8003EAB0: sra         $s0, $t8, 16
    ctx->r16 = S32(SIGNED(ctx->r24) >> 16);
    func_8003EAD8(rdram, ctx);
        goto after_2;
    // 0x8003EAB0: sra         $s0, $t8, 16
    ctx->r16 = S32(SIGNED(ctx->r24) >> 16);
    after_2:
    // 0x8003EAB4: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003EAB8: bne         $at, $zero, L_8003EA7C
    if (ctx->r1 != 0) {
        // 0x8003EABC: sll         $t6, $s0, 1
        ctx->r14 = S32(ctx->r16 << 1);
            goto L_8003EA7C;
    }
    // 0x8003EABC: sll         $t6, $s0, 1
    ctx->r14 = S32(ctx->r16 << 1);
L_8003EAC0:
    // 0x8003EAC0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8003EAC4:
    // 0x8003EAC4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003EAC8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003EACC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003EAD0: jr          $ra
    // 0x8003EAD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8003EAD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003EAD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003EAD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003EADC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003EAE0: jal         0x8004974C
    // 0x8003EAE4: nop

    func_8004974C(rdram, ctx);
        goto after_0;
    // 0x8003EAE4: nop

    after_0:
    // 0x8003EAE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003EAEC: beq         $v0, $zero, L_8003EB0C
    if (ctx->r2 == 0) {
        // 0x8003EAF0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8003EB0C;
    }
    // 0x8003EAF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003EAF4: beq         $v0, $at, L_8003EB14
    if (ctx->r2 == ctx->r1) {
        // 0x8003EAF8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8003EB14;
    }
    // 0x8003EAF8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003EAFC: beq         $v0, $at, L_8003EB1C
    if (ctx->r2 == ctx->r1) {
        // 0x8003EB00: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8003EB1C;
    }
    // 0x8003EB00: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003EB04: beq         $v0, $at, L_8003EB24
    if (ctx->r2 == ctx->r1) {
        // 0x8003EB08: lui         $t6, 0x8012
        ctx->r14 = S32(0X8012 << 16);
            goto L_8003EB24;
    }
    // 0x8003EB08: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
L_8003EB0C:
    // 0x8003EB0C: b           L_8003EB70
    // 0x8003EB10: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
        goto L_8003EB70;
    // 0x8003EB10: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
L_8003EB14:
    // 0x8003EB14: b           L_8003EB70
    // 0x8003EB18: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_8003EB70;
    // 0x8003EB18: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_8003EB1C:
    // 0x8003EB1C: b           L_8003EB70
    // 0x8003EB20: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_8003EB70;
    // 0x8003EB20: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_8003EB24:
    // 0x8003EB24: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8003EB28: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8003EB2C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003EB30: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003EB34: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003EB38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003EB3C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003EB40: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003EB44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003EB48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003EB4C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003EB50: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003EB54: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003EB58: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8003EB5C: lb          $t8, -0x2F7F($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X2F7F);
    // 0x8003EB60: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8003EB64: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x8003EB68: lb          $v0, 0x5D20($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X5D20);
    // 0x8003EB6C: nop

L_8003EB70:
    // 0x8003EB70: jr          $ra
    // 0x8003EB74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003EB74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003EB78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003EB78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003EB7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003EB80: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8003EB84: jal         0x8004974C
    // 0x8003EB88: sh          $a0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r4;
    func_8004974C(rdram, ctx);
        goto after_0;
    // 0x8003EB88: sh          $a0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r4;
    after_0:
    // 0x8003EB8C: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x8003EB90: beq         $v0, $zero, L_8003EBB4
    if (ctx->r2 == 0) {
        // 0x8003EB94: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8003EBB4;
    }
    // 0x8003EB94: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003EB98: beq         $v0, $at, L_8003EBC4
    if (ctx->r2 == ctx->r1) {
        // 0x8003EB9C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8003EBC4;
    }
    // 0x8003EB9C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003EBA0: beq         $v0, $at, L_8003EC08
    if (ctx->r2 == ctx->r1) {
        // 0x8003EBA4: sll         $v1, $a0, 16
        ctx->r3 = S32(ctx->r4 << 16);
            goto L_8003EC08;
    }
    // 0x8003EBA4: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x8003EBA8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003EBAC: beq         $v0, $at, L_8003EC14
    if (ctx->r2 == ctx->r1) {
        // 0x8003EBB0: addiu       $v1, $a0, 0x3
        ctx->r3 = ADD32(ctx->r4, 0X3);
            goto L_8003EC14;
    }
    // 0x8003EBB0: addiu       $v1, $a0, 0x3
    ctx->r3 = ADD32(ctx->r4, 0X3);
L_8003EBB4:
    // 0x8003EBB4: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x8003EBB8: sra         $t8, $v1, 16
    ctx->r24 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8003EBBC: b           L_8003EC1C
    // 0x8003EBC0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
        goto L_8003EC1C;
    // 0x8003EBC0: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
L_8003EBC4:
    // 0x8003EBC4: slti        $at, $a0, 0x3
    ctx->r1 = SIGNED(ctx->r4) < 0X3 ? 1 : 0;
    // 0x8003EBC8: beq         $at, $zero, L_8003EBDC
    if (ctx->r1 == 0) {
        // 0x8003EBCC: slti        $at, $a0, 0x5
        ctx->r1 = SIGNED(ctx->r4) < 0X5 ? 1 : 0;
            goto L_8003EBDC;
    }
    // 0x8003EBCC: slti        $at, $a0, 0x5
    ctx->r1 = SIGNED(ctx->r4) < 0X5 ? 1 : 0;
    // 0x8003EBD0: b           L_8003EBFC
    // 0x8003EBD4: sh          $a0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r4;
        goto L_8003EBFC;
    // 0x8003EBD4: sh          $a0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r4;
    // 0x8003EBD8: slti        $at, $a0, 0x5
    ctx->r1 = SIGNED(ctx->r4) < 0X5 ? 1 : 0;
L_8003EBDC:
    // 0x8003EBDC: beq         $at, $zero, L_8003EBEC
    if (ctx->r1 == 0) {
        // 0x8003EBE0: addiu       $t1, $a0, -0x1
        ctx->r9 = ADD32(ctx->r4, -0X1);
            goto L_8003EBEC;
    }
    // 0x8003EBE0: addiu       $t1, $a0, -0x1
    ctx->r9 = ADD32(ctx->r4, -0X1);
    // 0x8003EBE4: b           L_8003EBFC
    // 0x8003EBE8: sh          $t1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r9;
        goto L_8003EBFC;
    // 0x8003EBE8: sh          $t1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r9;
L_8003EBEC:
    // 0x8003EBEC: slti        $at, $a0, 0x7
    ctx->r1 = SIGNED(ctx->r4) < 0X7 ? 1 : 0;
    // 0x8003EBF0: beq         $at, $zero, L_8003EBFC
    if (ctx->r1 == 0) {
        // 0x8003EBF4: addiu       $t3, $a0, -0x2
        ctx->r11 = ADD32(ctx->r4, -0X2);
            goto L_8003EBFC;
    }
    // 0x8003EBF4: addiu       $t3, $a0, -0x2
    ctx->r11 = ADD32(ctx->r4, -0X2);
    // 0x8003EBF8: sh          $t3, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r11;
L_8003EBFC:
    // 0x8003EBFC: lh          $v1, 0x1E($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1E);
    // 0x8003EC00: b           L_8003EC20
    // 0x8003EC04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003EC20;
    // 0x8003EC04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003EC08:
    // 0x8003EC08: sra         $t4, $v1, 16
    ctx->r12 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8003EC0C: b           L_8003EC1C
    // 0x8003EC10: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
        goto L_8003EC1C;
    // 0x8003EC10: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
L_8003EC14:
    // 0x8003EC14: sll         $t5, $v1, 16
    ctx->r13 = S32(ctx->r3 << 16);
    // 0x8003EC18: sra         $v1, $t5, 16
    ctx->r3 = S32(SIGNED(ctx->r13) >> 16);
L_8003EC1C:
    // 0x8003EC1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003EC20:
    // 0x8003EC20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003EC24: jr          $ra
    // 0x8003EC28: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8003EC28: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8003EC2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003EC2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003EC30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003EC34: jal         0x8004974C
    // 0x8003EC38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8004974C(rdram, ctx);
        goto after_0;
    // 0x8003EC38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8003EC3C: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8003EC40: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8003EC44: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
    // 0x8003EC48: jal         0x8003EC60
    // 0x8003EC4C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8003EC60(rdram, ctx);
        goto after_1;
    // 0x8003EC4C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_1:
    // 0x8003EC50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003EC54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003EC58: jr          $ra
    // 0x8003EC5C: nop

    return;
    // 0x8003EC5C: nop

;}
RECOMP_FUNC void func_8003EC60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003EC60: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8003EC64: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x8003EC68: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8003EC6C: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8003EC70: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8003EC74: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x8003EC78: beq         $t7, $zero, L_8003ECB8
    if (ctx->r15 == 0) {
        // 0x8003EC7C: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_8003ECB8;
    }
    // 0x8003EC7C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8003EC80: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003EC84: beq         $t7, $at, L_8003ECCC
    if (ctx->r15 == ctx->r1) {
        // 0x8003EC88: sll         $t4, $a1, 2
        ctx->r12 = S32(ctx->r5 << 2);
            goto L_8003ECCC;
    }
    // 0x8003EC88: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x8003EC8C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003EC90: beq         $t7, $at, L_8003ECDC
    if (ctx->r15 == ctx->r1) {
        // 0x8003EC94: sll         $t6, $a1, 2
        ctx->r14 = S32(ctx->r5 << 2);
            goto L_8003ECDC;
    }
    // 0x8003EC94: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8003EC98: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003EC9C: beq         $t7, $at, L_8003ECEC
    if (ctx->r15 == ctx->r1) {
        // 0x8003ECA0: sll         $t8, $a1, 2
        ctx->r24 = S32(ctx->r5 << 2);
            goto L_8003ECEC;
    }
    // 0x8003ECA0: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x8003ECA4: lui         $t1, 0x800A
    ctx->r9 = S32(0X800A << 16);
    // 0x8003ECA8: addiu       $t1, $t1, 0x781C
    ctx->r9 = ADD32(ctx->r9, 0X781C);
    // 0x8003ECAC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8003ECB0: jr          $ra
    // 0x8003ECB4: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    return;
    // 0x8003ECB4: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
L_8003ECB8:
    // 0x8003ECB8: lui         $t3, 0x800A
    ctx->r11 = S32(0X800A << 16);
    // 0x8003ECBC: addiu       $t3, $t3, 0x781C
    ctx->r11 = ADD32(ctx->r11, 0X781C);
    // 0x8003ECC0: sll         $t2, $a1, 2
    ctx->r10 = S32(ctx->r5 << 2);
    // 0x8003ECC4: jr          $ra
    // 0x8003ECC8: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
    return;
    // 0x8003ECC8: addu        $v0, $t2, $t3
    ctx->r2 = ADD32(ctx->r10, ctx->r11);
L_8003ECCC:
    // 0x8003ECCC: lui         $t5, 0x800A
    ctx->r13 = S32(0X800A << 16);
    // 0x8003ECD0: addiu       $t5, $t5, 0x7944
    ctx->r13 = ADD32(ctx->r13, 0X7944);
    // 0x8003ECD4: jr          $ra
    // 0x8003ECD8: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
    return;
    // 0x8003ECD8: addu        $v0, $t4, $t5
    ctx->r2 = ADD32(ctx->r12, ctx->r13);
L_8003ECDC:
    // 0x8003ECDC: lui         $t7, 0x800A
    ctx->r15 = S32(0X800A << 16);
    // 0x8003ECE0: addiu       $t7, $t7, 0x7978
    ctx->r15 = ADD32(ctx->r15, 0X7978);
    // 0x8003ECE4: jr          $ra
    // 0x8003ECE8: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    return;
    // 0x8003ECE8: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
L_8003ECEC:
    // 0x8003ECEC: lui         $t9, 0x800A
    ctx->r25 = S32(0X800A << 16);
    // 0x8003ECF0: addiu       $t9, $t9, 0x79D8
    ctx->r25 = ADD32(ctx->r25, 0X79D8);
    // 0x8003ECF4: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8003ECF8: jr          $ra
    // 0x8003ECFC: nop

    return;
    // 0x8003ECFC: nop

;}
RECOMP_FUNC void func_8003ED00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003ED00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003ED04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003ED08: jal         0x80039028
    // 0x8003ED0C: nop

    func_80039028(rdram, ctx);
        goto after_0;
    // 0x8003ED0C: nop

    after_0:
    // 0x8003ED10: bne         $v0, $zero, L_8003ED6C
    if (ctx->r2 != 0) {
        // 0x8003ED14: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8003ED6C;
    }
    // 0x8003ED14: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8003ED18: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8003ED1C: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8003ED20: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8003ED24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003ED28: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003ED2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003ED30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003ED34: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003ED38: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003ED3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003ED40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003ED44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003ED48: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003ED4C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003ED50: addu        $a0, $a0, $t7
    ctx->r4 = ADD32(ctx->r4, ctx->r15);
    // 0x8003ED54: lb          $a0, -0x2F7F($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X2F7F);
    // 0x8003ED58: jal         0x8003EC2C
    // 0x8003ED5C: nop

    func_8003EC2C(rdram, ctx);
        goto after_1;
    // 0x8003ED5C: nop

    after_1:
    // 0x8003ED60: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x8003ED64: b           L_8003ED70
    // 0x8003ED68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003ED70;
    // 0x8003ED68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003ED6C:
    // 0x8003ED6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003ED70:
    // 0x8003ED70: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8003ED74: sra         $t8, $v0, 16
    ctx->r24 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8003ED78: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x8003ED7C: jr          $ra
    // 0x8003ED80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003ED80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003ED84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003ED84: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8003ED88: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8003ED8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003ED90: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003ED94: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003ED98: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003ED9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003EDA0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003EDA4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003EDA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003EDAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003EDB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003EDB4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8003EDB8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003EDBC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003EDC0: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8003EDC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003EDC8: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8003EDCC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8003EDD0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8003EDD4: jal         0x8004974C
    // 0x8003EDD8: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    func_8004974C(rdram, ctx);
        goto after_0;
    // 0x8003EDD8: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    after_0:
    // 0x8003EDDC: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8003EDE0: lb          $a2, 0x2B($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X2B);
    // 0x8003EDE4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003EDE8: bne         $v0, $at, L_8003EE4C
    if (ctx->r2 != ctx->r1) {
        // 0x8003EDEC: lh          $a0, 0x2E($sp)
        ctx->r4 = MEM_H(ctx->r29, 0X2E);
            goto L_8003EE4C;
    }
    // 0x8003EDEC: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x8003EDF0: lb          $a0, 0x7($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X7);
    // 0x8003EDF4: lb          $a1, 0x8($v1)
    ctx->r5 = MEM_B(ctx->r3, 0X8);
    // 0x8003EDF8: jal         0x8003CCB0
    // 0x8003EDFC: sb          $a2, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r6;
    func_8003CCB0(rdram, ctx);
        goto after_1;
    // 0x8003EDFC: sb          $a2, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r6;
    after_1:
    // 0x8003EE00: lb          $a2, 0x2B($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X2B);
    // 0x8003EE04: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003EE08: bne         $v0, $at, L_8003EE2C
    if (ctx->r2 != ctx->r1) {
        // 0x8003EE0C: lh          $t4, 0x2E($sp)
        ctx->r12 = MEM_H(ctx->r29, 0X2E);
            goto L_8003EE2C;
    }
    // 0x8003EE0C: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x8003EE10: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x8003EE14: xori        $t1, $a2, 0x1
    ctx->r9 = ctx->r6 ^ 0X1;
    // 0x8003EE18: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8003EE1C: beq         $t0, $zero, L_8003EE28
    if (ctx->r8 == 0) {
        // 0x8003EE20: sll         $t2, $t1, 24
        ctx->r10 = S32(ctx->r9 << 24);
            goto L_8003EE28;
    }
    // 0x8003EE20: sll         $t2, $t1, 24
    ctx->r10 = S32(ctx->r9 << 24);
    // 0x8003EE24: sra         $a2, $t2, 24
    ctx->r6 = S32(SIGNED(ctx->r10) >> 24);
L_8003EE28:
    // 0x8003EE28: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
L_8003EE2C:
    // 0x8003EE2C: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x8003EE30: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8003EE34: addu        $t6, $t5, $a2
    ctx->r14 = ADD32(ctx->r13, ctx->r6);
    // 0x8003EE38: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x8003EE3C: lbu         $v1, 0x7960($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X7960);
    // 0x8003EE40: b           L_8003EE8C
    // 0x8003EE44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003EE8C;
    // 0x8003EE44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003EE48: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
L_8003EE4C:
    // 0x8003EE4C: nop

    // 0x8003EE50: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8003EE54: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x8003EE58: jal         0x8003EC2C
    // 0x8003EE5C: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    func_8003EC2C(rdram, ctx);
        goto after_2;
    // 0x8003EE5C: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    after_2:
    // 0x8003EE60: lh          $a0, 0x2E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2E);
    // 0x8003EE64: jal         0x8003EC2C
    // 0x8003EE68: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8003EC2C(rdram, ctx);
        goto after_3;
    // 0x8003EE68: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_3:
    // 0x8003EE6C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8003EE70: lh          $t1, 0x2($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X2);
    // 0x8003EE74: lh          $t0, 0x2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X2);
    // 0x8003EE78: nop

    // 0x8003EE7C: subu        $v1, $t0, $t1
    ctx->r3 = SUB32(ctx->r8, ctx->r9);
    // 0x8003EE80: sll         $t2, $v1, 16
    ctx->r10 = S32(ctx->r3 << 16);
    // 0x8003EE84: sra         $v1, $t2, 16
    ctx->r3 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8003EE88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003EE8C:
    // 0x8003EE8C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8003EE90: jr          $ra
    // 0x8003EE94: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8003EE94: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8003EE98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003EE98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003EE9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003EEA0: jal         0x8004974C
    // 0x8003EEA4: nop

    func_8004974C(rdram, ctx);
        goto after_0;
    // 0x8003EEA4: nop

    after_0:
    // 0x8003EEA8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8003EEAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003EEB0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8003EEB4: lb          $v0, 0x5D40($at)
    ctx->r2 = MEM_B(ctx->r1, 0X5D40);
    // 0x8003EEB8: jr          $ra
    // 0x8003EEBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8003EEBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003EEC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003EEC0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003EEC4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8003EEC8: sll         $s4, $a0, 16
    ctx->r20 = S32(ctx->r4 << 16);
    // 0x8003EECC: sra         $t6, $s4, 16
    ctx->r14 = S32(SIGNED(ctx->r20) >> 16);
    // 0x8003EED0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8003EED4: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x8003EED8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8003EEDC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8003EEE0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8003EEE4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003EEE8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003EEEC: jal         0x8027F9EC
    // 0x8003EEF0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    LOOKUP_FUNC(0x8027F9EC)(rdram, ctx);
        goto after_0;
    // 0x8003EEF0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x8003EEF4: jal         0x8027FDE0
    // 0x8003EEF8: nop

    LOOKUP_FUNC(0x8027FDE0)(rdram, ctx);
        goto after_1;
    // 0x8003EEF8: nop

    after_1:
    // 0x8003EEFC: jal         0x80280150
    // 0x8003EF00: nop

    LOOKUP_FUNC(0x80280150)(rdram, ctx);
        goto after_2;
    // 0x8003EF00: nop

    after_2:
    // 0x8003EF04: jal         0x802804C4
    // 0x8003EF08: nop

    LOOKUP_FUNC(0x802804C4)(rdram, ctx);
        goto after_3;
    // 0x8003EF08: nop

    after_3:
    // 0x8003EF0C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8003EF10: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
L_8003EF14:
    // 0x8003EF14: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8003EF18: jal         0x8027F874
    // 0x8003EF1C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    LOOKUP_FUNC(0x8027F874)(rdram, ctx);
        goto after_4;
    // 0x8003EF1C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_4:
    // 0x8003EF20: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003EF24: andi        $s5, $s3, 0xFF
    ctx->r21 = ctx->r19 & 0XFF;
    // 0x8003EF28: andi        $a0, $s5, 0xFF
    ctx->r4 = ctx->r21 & 0XFF;
L_8003EF2C:
    // 0x8003EF2C: jal         0x8004DCB0
    // 0x8003EF30: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_8004DCB0(rdram, ctx);
        goto after_5;
    // 0x8003EF30: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_5:
    // 0x8003EF34: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x8003EF38: sll         $a1, $s4, 16
    ctx->r5 = S32(ctx->r20 << 16);
    // 0x8003EF3C: sra         $t9, $a1, 16
    ctx->r25 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8003EF40: sra         $t8, $a0, 24
    ctx->r24 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8003EF44: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8003EF48: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8003EF4C: jal         0x8003ED84
    // 0x8003EF50: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8003ED84(rdram, ctx);
        goto after_6;
    // 0x8003EF50: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_6:
    // 0x8003EF54: sll         $s2, $v0, 16
    ctx->r18 = S32(ctx->r2 << 16);
    // 0x8003EF58: sra         $t0, $s2, 16
    ctx->r8 = S32(SIGNED(ctx->r18) >> 16);
    // 0x8003EF5C: jal         0x8004974C
    // 0x8003EF60: or          $s2, $t0, $zero
    ctx->r18 = ctx->r8 | 0;
    func_8004974C(rdram, ctx);
        goto after_7;
    // 0x8003EF60: or          $s2, $t0, $zero
    ctx->r18 = ctx->r8 | 0;
    after_7:
    // 0x8003EF64: jal         0x800434B8
    // 0x8003EF68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800434B8(rdram, ctx);
        goto after_8;
    // 0x8003EF68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x8003EF6C: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x8003EF70: sll         $a2, $s2, 16
    ctx->r6 = S32(ctx->r18 << 16);
    // 0x8003EF74: sra         $t2, $a2, 16
    ctx->r10 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8003EF78: sra         $t1, $a1, 24
    ctx->r9 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8003EF7C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8003EF80: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x8003EF84: jal         0x80044364
    // 0x8003EF88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80044364(rdram, ctx);
        goto after_9;
    // 0x8003EF88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x8003EF8C: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x8003EF90: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x8003EF94: sll         $a2, $s2, 16
    ctx->r6 = S32(ctx->r18 << 16);
    // 0x8003EF98: sll         $a3, $s4, 16
    ctx->r7 = S32(ctx->r20 << 16);
    // 0x8003EF9C: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8003EFA0: sra         $t5, $a2, 16
    ctx->r13 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8003EFA4: sra         $t4, $a1, 24
    ctx->r12 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8003EFA8: sra         $t3, $a0, 24
    ctx->r11 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8003EFAC: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x8003EFB0: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x8003EFB4: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x8003EFB8: jal         0x80044AEC
    // 0x8003EFBC: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    func_80044AEC(rdram, ctx);
        goto after_10;
    // 0x8003EFBC: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    after_10:
    // 0x8003EFC0: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x8003EFC4: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x8003EFC8: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8003EFCC: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8003EFD0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8003EFD4: jal         0x800435A8
    // 0x8003EFD8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    func_800435A8(rdram, ctx);
        goto after_11;
    // 0x8003EFD8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_11:
    // 0x8003EFDC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003EFE0: sll         $t9, $s0, 24
    ctx->r25 = S32(ctx->r16 << 24);
    // 0x8003EFE4: sra         $s0, $t9, 24
    ctx->r16 = S32(SIGNED(ctx->r25) >> 24);
    // 0x8003EFE8: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x8003EFEC: bne         $at, $zero, L_8003EF2C
    if (ctx->r1 != 0) {
        // 0x8003EFF0: andi        $a0, $s5, 0xFF
        ctx->r4 = ctx->r21 & 0XFF;
            goto L_8003EF2C;
    }
    // 0x8003EFF0: andi        $a0, $s5, 0xFF
    ctx->r4 = ctx->r21 & 0XFF;
    // 0x8003EFF4: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8003EFF8: sll         $t1, $s3, 24
    ctx->r9 = S32(ctx->r19 << 24);
    // 0x8003EFFC: sra         $s3, $t1, 24
    ctx->r19 = S32(SIGNED(ctx->r9) >> 24);
    // 0x8003F000: slti        $at, $s3, 0x2
    ctx->r1 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
    // 0x8003F004: bne         $at, $zero, L_8003EF14
    if (ctx->r1 != 0) {
        // 0x8003F008: sll         $a0, $s3, 24
        ctx->r4 = S32(ctx->r19 << 24);
            goto L_8003EF14;
    }
    // 0x8003F008: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x8003F00C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8003F010: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003F014: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003F018: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8003F01C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8003F020: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8003F024: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8003F028: jr          $ra
    // 0x8003F02C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8003F02C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8003F030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F030: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8003F034: lb          $t7, -0x32A1($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X32A1);
    // 0x8003F038: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8003F03C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8003F040: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8003F044: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8003F048: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8003F04C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8003F050: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8003F054: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8003F058: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8003F05C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003F060: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8003F064: sll         $s0, $a2, 24
    ctx->r16 = S32(ctx->r6 << 24);
    // 0x8003F068: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8003F06C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8003F070: sra         $t6, $s0, 24
    ctx->r14 = S32(SIGNED(ctx->r16) >> 24);
    // 0x8003F074: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8003F078: addiu       $t9, $t9, -0x2F80
    ctx->r25 = ADD32(ctx->r25, -0X2F80);
    // 0x8003F07C: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x8003F080: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x8003F084: addu        $t2, $v1, $t6
    ctx->r10 = ADD32(ctx->r3, ctx->r14);
    // 0x8003F088: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003F08C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8003F090: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8003F094: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8003F098: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003F09C: lb          $t1, 0x7($t2)
    ctx->r9 = MEM_B(ctx->r10, 0X7);
    // 0x8003F0A0: addu        $t6, $t6, $s0
    ctx->r14 = ADD32(ctx->r14, ctx->r16);
    // 0x8003F0A4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003F0A8: addu        $t6, $t6, $s0
    ctx->r14 = ADD32(ctx->r14, ctx->r16);
    // 0x8003F0AC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x8003F0B0: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x8003F0B4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8003F0B8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8003F0BC: addu        $t6, $t6, $s0
    ctx->r14 = ADD32(ctx->r14, ctx->r16);
    // 0x8003F0C0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003F0C4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x8003F0C8: lb          $t4, 0x3B($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X3B);
    // 0x8003F0CC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8003F0D0: addu        $t6, $t6, $s0
    ctx->r14 = ADD32(ctx->r14, ctx->r16);
    // 0x8003F0D4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8003F0D8: addiu       $t7, $t7, -0x2CF0
    ctx->r15 = ADD32(ctx->r15, -0X2CF0);
    // 0x8003F0DC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8003F0E0: subu        $t3, $t3, $t1
    ctx->r11 = SUB32(ctx->r11, ctx->r9);
    // 0x8003F0E4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8003F0E8: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8003F0EC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8003F0F0: lhu         $t8, 0xA($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0XA);
    // 0x8003F0F4: addu        $t0, $v1, $t3
    ctx->r8 = ADD32(ctx->r3, ctx->r11);
    // 0x8003F0F8: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x8003F0FC: addu        $a3, $t0, $t5
    ctx->r7 = ADD32(ctx->r8, ctx->r13);
    // 0x8003F100: sb          $t8, 0x50F($a3)
    MEM_B(0X50F, ctx->r7) = ctx->r24;
    // 0x8003F104: lhu         $t9, 0xC($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0XC);
    // 0x8003F108: addiu       $a0, $t0, 0x5E4
    ctx->r4 = ADD32(ctx->r8, 0X5E4);
    // 0x8003F10C: sb          $t9, 0x510($a3)
    MEM_B(0X510, ctx->r7) = ctx->r25;
    // 0x8003F110: lhu         $a1, 0xA($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0XA);
    // 0x8003F114: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8003F118: jal         0x8001D938
    // 0x8003F11C: sh          $t1, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r9;
    func_8001D938(rdram, ctx);
        goto after_0;
    // 0x8003F11C: sh          $t1, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r9;
    after_0:
    // 0x8003F120: xori        $t2, $s0, 0x1
    ctx->r10 = ctx->r16 ^ 0X1;
    // 0x8003F124: sll         $t3, $t2, 16
    ctx->r11 = S32(ctx->r10 << 16);
    // 0x8003F128: sra         $t4, $t3, 16
    ctx->r12 = S32(SIGNED(ctx->r11) >> 16);
    // 0x8003F12C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8003F130: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8003F134: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8003F138: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8003F13C: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x8003F140: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8003F144: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8003F148: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8003F14C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8003F150: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8003F154: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8003F158: addu        $a1, $a1, $t5
    ctx->r5 = ADD32(ctx->r5, ctx->r13);
    // 0x8003F15C: lhu         $a1, -0x2CE6($a1)
    ctx->r5 = MEM_HU(ctx->r5, -0X2CE6);
    // 0x8003F160: addiu       $v1, $t0, 0x4AC
    ctx->r3 = ADD32(ctx->r8, 0X4AC);
    // 0x8003F164: addiu       $a0, $v1, 0x13A
    ctx->r4 = ADD32(ctx->r3, 0X13A);
    // 0x8003F168: jal         0x8001D938
    // 0x8003F16C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8001D938(rdram, ctx);
        goto after_1;
    // 0x8003F16C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x8003F170: lb          $a1, 0x3F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X3F);
    // 0x8003F174: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x8003F178: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8003F17C: bne         $a1, $at, L_8003F198
    if (ctx->r5 != ctx->r1) {
        // 0x8003F180: nop
    
            goto L_8003F198;
    }
    // 0x8003F180: nop

    // 0x8003F184: lbu         $t6, 0x136($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X136);
    // 0x8003F188: nop

    // 0x8003F18C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8003F190: b           L_8003F1DC
    // 0x8003F194: sb          $t7, 0x136($v1)
    MEM_B(0X136, ctx->r3) = ctx->r15;
        goto L_8003F1DC;
    // 0x8003F194: sb          $t7, 0x136($v1)
    MEM_B(0X136, ctx->r3) = ctx->r15;
L_8003F198:
    // 0x8003F198: bne         $s0, $zero, L_8003F1A4
    if (ctx->r16 != 0) {
        // 0x8003F19C: slti        $at, $a1, 0x2
        ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
            goto L_8003F1A4;
    }
    // 0x8003F19C: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x8003F1A0: bne         $at, $zero, L_8003F1B8
    if (ctx->r1 != 0) {
        // 0x8003F1A4: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8003F1B8;
    }
L_8003F1A4:
    // 0x8003F1A4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003F1A8: bne         $s0, $at, L_8003F1CC
    if (ctx->r16 != ctx->r1) {
        // 0x8003F1AC: slti        $at, $a1, 0x2
        ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
            goto L_8003F1CC;
    }
    // 0x8003F1AC: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x8003F1B0: bne         $at, $zero, L_8003F1CC
    if (ctx->r1 != 0) {
        // 0x8003F1B4: nop
    
            goto L_8003F1CC;
    }
    // 0x8003F1B4: nop

L_8003F1B8:
    // 0x8003F1B8: lbu         $t8, 0x134($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X134);
    // 0x8003F1BC: nop

    // 0x8003F1C0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8003F1C4: b           L_8003F1DC
    // 0x8003F1C8: sb          $t9, 0x134($v1)
    MEM_B(0X134, ctx->r3) = ctx->r25;
        goto L_8003F1DC;
    // 0x8003F1C8: sb          $t9, 0x134($v1)
    MEM_B(0X134, ctx->r3) = ctx->r25;
L_8003F1CC:
    // 0x8003F1CC: lbu         $t2, 0x135($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X135);
    // 0x8003F1D0: nop

    // 0x8003F1D4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8003F1D8: sb          $t3, 0x135($v1)
    MEM_B(0X135, ctx->r3) = ctx->r11;
L_8003F1DC:
    // 0x8003F1DC: lb          $a0, 0x35($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X35);
    // 0x8003F1E0: jal         0x8003CB98
    // 0x8003F1E4: nop

    func_8003CB98(rdram, ctx);
        goto after_2;
    // 0x8003F1E4: nop

    after_2:
    // 0x8003F1E8: bltz        $v0, L_8003F204
    if (SIGNED(ctx->r2) < 0) {
        // 0x8003F1EC: sll         $a2, $s0, 24
        ctx->r6 = S32(ctx->r16 << 24);
            goto L_8003F204;
    }
    // 0x8003F1EC: sll         $a2, $s0, 24
    ctx->r6 = S32(ctx->r16 << 24);
    // 0x8003F1F0: lb          $a0, 0x3B($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X3B);
    // 0x8003F1F4: lb          $a1, 0x3F($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X3F);
    // 0x8003F1F8: sra         $t4, $a2, 24
    ctx->r12 = S32(SIGNED(ctx->r6) >> 24);
    // 0x8003F1FC: jal         0x8003F214
    // 0x8003F200: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    func_8003F214(rdram, ctx);
        goto after_3;
    // 0x8003F200: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    after_3:
L_8003F204:
    // 0x8003F204: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003F208: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003F20C: jr          $ra
    // 0x8003F210: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8003F210: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8003F214(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F214: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8003F218: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8003F21C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8003F220: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003F224: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003F228: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003F22C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003F230: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003F234: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003F238: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003F23C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003F240: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003F244: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x8003F248: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x8003F24C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8003F250: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003F254: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003F258: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003F25C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003F260: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8003F264: lbu         $a0, 0x63($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X63);
    // 0x8003F268: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003F26C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x8003F270: jal         0x8003CC44
    // 0x8003F274: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
    func_8003CC44(rdram, ctx);
        goto after_0;
    // 0x8003F274: addu        $s1, $t7, $t8
    ctx->r17 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x8003F278: sll         $t9, $v0, 3
    ctx->r25 = S32(ctx->r2 << 3);
    // 0x8003F27C: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x8003F280: sll         $t9, $t9, 5
    ctx->r25 = S32(ctx->r25 << 5);
    // 0x8003F284: subu        $t9, $t9, $v0
    ctx->r25 = SUB32(ctx->r25, ctx->r2);
    // 0x8003F288: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8003F28C: lb          $a2, 0x5F($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X5F);
    // 0x8003F290: addu        $v1, $s1, $t9
    ctx->r3 = ADD32(ctx->r17, ctx->r25);
    // 0x8003F294: addiu       $v1, $v1, 0x2C
    ctx->r3 = ADD32(ctx->r3, 0X2C);
    // 0x8003F298: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8003F29C: beq         $a2, $at, L_8003F314
    if (ctx->r6 == ctx->r1) {
        // 0x8003F2A0: or          $s0, $v1, $zero
        ctx->r16 = ctx->r3 | 0;
            goto L_8003F314;
    }
    // 0x8003F2A0: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x8003F2A4: lb          $t0, 0x63($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X63);
    // 0x8003F2A8: lb          $t1, 0x63($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X63);
    // 0x8003F2AC: bne         $t0, $zero, L_8003F2B8
    if (ctx->r8 != 0) {
        // 0x8003F2B0: slti        $at, $a2, 0x2
        ctx->r1 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
            goto L_8003F2B8;
    }
    // 0x8003F2B0: slti        $at, $a2, 0x2
    ctx->r1 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
    // 0x8003F2B4: bne         $at, $zero, L_8003F2CC
    if (ctx->r1 != 0) {
        // 0x8003F2B8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8003F2CC;
    }
L_8003F2B8:
    // 0x8003F2B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003F2BC: bne         $t1, $v0, L_8003F2F4
    if (ctx->r9 != ctx->r2) {
        // 0x8003F2C0: slti        $at, $a2, 0x2
        ctx->r1 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
            goto L_8003F2F4;
    }
    // 0x8003F2C0: slti        $at, $a2, 0x2
    ctx->r1 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
    // 0x8003F2C4: bne         $at, $zero, L_8003F2F4
    if (ctx->r1 != 0) {
        // 0x8003F2C8: nop
    
            goto L_8003F2F4;
    }
    // 0x8003F2C8: nop

L_8003F2CC:
    // 0x8003F2CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8003F2D0: beq         $a2, $v0, L_8003F2E0
    if (ctx->r6 == ctx->r2) {
        // 0x8003F2D4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8003F2E0;
    }
    // 0x8003F2D4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003F2D8: bne         $a2, $at, L_8003F318
    if (ctx->r6 != ctx->r1) {
        // 0x8003F2DC: lb          $t6, 0x63($sp)
        ctx->r14 = MEM_B(ctx->r29, 0X63);
            goto L_8003F318;
    }
    // 0x8003F2DC: lb          $t6, 0x63($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X63);
L_8003F2E0:
    // 0x8003F2E0: lbu         $t2, 0x0($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X0);
    // 0x8003F2E4: nop

    // 0x8003F2E8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8003F2EC: b           L_8003F314
    // 0x8003F2F0: sb          $t3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r11;
        goto L_8003F314;
    // 0x8003F2F0: sb          $t3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r11;
L_8003F2F4:
    // 0x8003F2F4: beq         $a2, $v0, L_8003F304
    if (ctx->r6 == ctx->r2) {
        // 0x8003F2F8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8003F304;
    }
    // 0x8003F2F8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003F2FC: bne         $a2, $at, L_8003F318
    if (ctx->r6 != ctx->r1) {
        // 0x8003F300: lb          $t6, 0x63($sp)
        ctx->r14 = MEM_B(ctx->r29, 0X63);
            goto L_8003F318;
    }
    // 0x8003F300: lb          $t6, 0x63($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X63);
L_8003F304:
    // 0x8003F304: lbu         $t4, 0x1($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X1);
    // 0x8003F308: nop

    // 0x8003F30C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8003F310: sb          $t5, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r13;
L_8003F314:
    // 0x8003F314: lb          $t6, 0x63($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X63);
L_8003F318:
    // 0x8003F318: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8003F31C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003F320: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003F324: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003F328: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003F32C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003F330: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003F334: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003F338: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003F33C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003F340: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x8003F344: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8003F348: addiu       $s1, $v0, 0x838
    ctx->r17 = ADD32(ctx->r2, 0X838);
    // 0x8003F34C: lbu         $a1, 0x0($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X0);
    // 0x8003F350: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8003F354: jal         0x8001D8A8
    // 0x8003F358: addiu       $a0, $s0, 0x2
    ctx->r4 = ADD32(ctx->r16, 0X2);
    func_8001D8A8(rdram, ctx);
        goto after_1;
    // 0x8003F358: addiu       $a0, $s0, 0x2
    ctx->r4 = ADD32(ctx->r16, 0X2);
    after_1:
    // 0x8003F35C: lbu         $a1, 0x1($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X1);
    // 0x8003F360: jal         0x8001D8A8
    // 0x8003F364: addiu       $a0, $s0, 0x3
    ctx->r4 = ADD32(ctx->r16, 0X3);
    func_8001D8A8(rdram, ctx);
        goto after_2;
    // 0x8003F364: addiu       $a0, $s0, 0x3
    ctx->r4 = ADD32(ctx->r16, 0X3);
    after_2:
    // 0x8003F368: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8003F36C: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
    // 0x8003F370: nop

    // 0x8003F374: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8003F378: beq         $at, $zero, L_8003F388
    if (ctx->r1 == 0) {
        // 0x8003F37C: nop
    
            goto L_8003F388;
    }
    // 0x8003F37C: nop

    // 0x8003F380: b           L_8003F38C
    // 0x8003F384: sb          $a0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r4;
        goto L_8003F38C;
    // 0x8003F384: sb          $a0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r4;
L_8003F388:
    // 0x8003F388: sb          $v1, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r3;
L_8003F38C:
    // 0x8003F38C: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8003F390: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8003F394: nop

    // 0x8003F398: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003F39C: beq         $at, $zero, L_8003F3AC
    if (ctx->r1 == 0) {
        // 0x8003F3A0: nop
    
            goto L_8003F3AC;
    }
    // 0x8003F3A0: nop

    // 0x8003F3A4: b           L_8003F3B0
    // 0x8003F3A8: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
        goto L_8003F3B0;
    // 0x8003F3A8: sb          $v1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r3;
L_8003F3AC:
    // 0x8003F3AC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_8003F3B0:
    // 0x8003F3B0: lbu         $a1, 0x2($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X2);
    // 0x8003F3B4: jal         0x8001D8A8
    // 0x8003F3B8: addiu       $a0, $s0, 0x6
    ctx->r4 = ADD32(ctx->r16, 0X6);
    func_8001D8A8(rdram, ctx);
        goto after_3;
    // 0x8003F3B8: addiu       $a0, $s0, 0x6
    ctx->r4 = ADD32(ctx->r16, 0X6);
    after_3:
    // 0x8003F3BC: lbu         $a1, 0x5($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X5);
    // 0x8003F3C0: jal         0x8001D8A8
    // 0x8003F3C4: addiu       $a0, $s0, 0x12
    ctx->r4 = ADD32(ctx->r16, 0X12);
    func_8001D8A8(rdram, ctx);
        goto after_4;
    // 0x8003F3C4: addiu       $a0, $s0, 0x12
    ctx->r4 = ADD32(ctx->r16, 0X12);
    after_4:
    // 0x8003F3C8: lb          $t9, 0x63($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X63);
    // 0x8003F3CC: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8003F3D0: xori        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 ^ 0X1;
    // 0x8003F3D4: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x8003F3D8: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8003F3DC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8003F3E0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8003F3E4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8003F3E8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8003F3EC: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x8003F3F0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8003F3F4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8003F3F8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8003F3FC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8003F400: addiu       $t4, $t4, -0x2CF0
    ctx->r12 = ADD32(ctx->r12, -0X2CF0);
    // 0x8003F404: addu        $a2, $t3, $t4
    ctx->r6 = ADD32(ctx->r11, ctx->r12);
    // 0x8003F408: addiu       $v1, $a2, 0x838
    ctx->r3 = ADD32(ctx->r6, 0X838);
    // 0x8003F40C: lbu         $a1, 0x5($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X5);
    // 0x8003F410: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x8003F414: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x8003F418: jal         0x8001D8A8
    // 0x8003F41C: addiu       $a0, $s0, 0x13
    ctx->r4 = ADD32(ctx->r16, 0X13);
    func_8001D8A8(rdram, ctx);
        goto after_5;
    // 0x8003F41C: addiu       $a0, $s0, 0x13
    ctx->r4 = ADD32(ctx->r16, 0X13);
    after_5:
    // 0x8003F420: lbu         $a1, 0x3($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X3);
    // 0x8003F424: jal         0x8001D938
    // 0x8003F428: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    func_8001D938(rdram, ctx);
        goto after_6;
    // 0x8003F428: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    after_6:
    // 0x8003F42C: lbu         $a1, 0x4($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X4);
    // 0x8003F430: jal         0x8001D938
    // 0x8003F434: addiu       $a0, $s0, 0xA
    ctx->r4 = ADD32(ctx->r16, 0XA);
    func_8001D938(rdram, ctx);
        goto after_7;
    // 0x8003F434: addiu       $a0, $s0, 0xA
    ctx->r4 = ADD32(ctx->r16, 0XA);
    after_7:
    // 0x8003F438: lhu         $a1, 0xA($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0XA);
    // 0x8003F43C: jal         0x8001D938
    // 0x8003F440: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8001D938(rdram, ctx);
        goto after_8;
    // 0x8003F440: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_8:
    // 0x8003F444: lhu         $a1, 0xC($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0XC);
    // 0x8003F448: jal         0x8001D938
    // 0x8003F44C: addiu       $a0, $s0, 0x16
    ctx->r4 = ADD32(ctx->r16, 0X16);
    func_8001D938(rdram, ctx);
        goto after_9;
    // 0x8003F44C: addiu       $a0, $s0, 0x16
    ctx->r4 = ADD32(ctx->r16, 0X16);
    after_9:
    // 0x8003F450: lhu         $a1, 0x8($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X8);
    // 0x8003F454: jal         0x8001D938
    // 0x8003F458: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    func_8001D938(rdram, ctx);
        goto after_10;
    // 0x8003F458: addiu       $a0, $s0, 0xC
    ctx->r4 = ADD32(ctx->r16, 0XC);
    after_10:
    // 0x8003F45C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8003F460: addiu       $a0, $s0, 0xE
    ctx->r4 = ADD32(ctx->r16, 0XE);
    // 0x8003F464: lhu         $a1, 0x8($t5)
    ctx->r5 = MEM_HU(ctx->r13, 0X8);
    // 0x8003F468: jal         0x8001D938
    // 0x8003F46C: nop

    func_8001D938(rdram, ctx);
        goto after_11;
    // 0x8003F46C: nop

    after_11:
    // 0x8003F470: lhu         $a1, 0xE($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0XE);
    // 0x8003F474: jal         0x8001D938
    // 0x8003F478: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    func_8001D938(rdram, ctx);
        goto after_12;
    // 0x8003F478: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    after_12:
    // 0x8003F47C: lhu         $a1, 0x6($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X6);
    // 0x8003F480: jal         0x8001D938
    // 0x8003F484: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    func_8001D938(rdram, ctx);
        goto after_13;
    // 0x8003F484: addiu       $a0, $s0, 0x10
    ctx->r4 = ADD32(ctx->r16, 0X10);
    after_13:
    // 0x8003F488: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8003F48C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8003F490: lhu         $v1, 0x8($t6)
    ctx->r3 = MEM_HU(ctx->r14, 0X8);
    // 0x8003F494: nop

    // 0x8003F498: bgtz        $v1, L_8003F4A8
    if (SIGNED(ctx->r3) > 0) {
        // 0x8003F49C: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8003F4A8;
    }
    // 0x8003F49C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8003F4A0: b           L_8003F4A8
    // 0x8003F4A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003F4A8;
    // 0x8003F4A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003F4A8:
    // 0x8003F4A8: lhu         $t8, 0xA($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0XA);
    // 0x8003F4AC: lbu         $t9, 0x5($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X5);
    // 0x8003F4B0: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8003F4B4: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x8003F4B8: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8003F4BC: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x8003F4C0: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8003F4C4: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x8003F4C8: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8003F4CC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8003F4D0: div.d       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = DIV_D(ctx->f6.d, ctx->f10.d);
    // 0x8003F4D4: sub.d       $f0, $f2, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f16.d); 
    ctx->f0.d = ctx->f2.d - ctx->f16.d;
    // 0x8003F4D8: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x8003F4DC: nop

    // 0x8003F4E0: bc1f        L_8003F4EC
    if (!c1cs) {
        // 0x8003F4E4: nop
    
            goto L_8003F4EC;
    }
    // 0x8003F4E4: nop

    // 0x8003F4E8: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
L_8003F4EC:
    // 0x8003F4EC: lwc1        $f18, 0x34($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X34);
    // 0x8003F4F0: nop

    // 0x8003F4F4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x8003F4F8: add.d       $f8, $f4, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f8.d = ctx->f4.d + ctx->f0.d;
    // 0x8003F4FC: cvt.s.d     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f6.fl = CVT_S_D(ctx->f8.d);
    // 0x8003F500: swc1        $f6, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->f6.u32l;
    // 0x8003F504: lhu         $v1, 0x8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8);
    // 0x8003F508: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8003F50C: bgtz        $v1, L_8003F51C
    if (SIGNED(ctx->r3) > 0) {
        // 0x8003F510: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8003F51C;
    }
    // 0x8003F510: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8003F514: b           L_8003F51C
    // 0x8003F518: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8003F51C;
    // 0x8003F518: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003F51C:
    // 0x8003F51C: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x8003F520: lbu         $t3, 0x5($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X5);
    // 0x8003F524: lhu         $t1, 0xA($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0XA);
    // 0x8003F528: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x8003F52C: subu        $t4, $t1, $t3
    ctx->r12 = SUB32(ctx->r9, ctx->r11);
    // 0x8003F530: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x8003F534: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x8003F538: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x8003F53C: nop

    // 0x8003F540: div.d       $f0, $f16, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = DIV_D(ctx->f16.d, ctx->f4.d);
    // 0x8003F544: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x8003F548: nop

    // 0x8003F54C: bc1f        L_8003F558
    if (!c1cs) {
        // 0x8003F550: nop
    
            goto L_8003F558;
    }
    // 0x8003F550: nop

    // 0x8003F554: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
L_8003F558:
    // 0x8003F558: lwc1        $f8, 0x38($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X38);
    // 0x8003F55C: lbu         $t5, 0x2C($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X2C);
    // 0x8003F560: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x8003F564: add.d       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f6.d + ctx->f0.d;
    // 0x8003F568: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x8003F56C: swc1        $f18, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->f18.u32l;
    // 0x8003F570: lhu         $v0, 0xA($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0XA);
    // 0x8003F574: nop

    // 0x8003F578: slt         $at, $t5, $v0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003F57C: beq         $at, $zero, L_8003F594
    if (ctx->r1 == 0) {
        // 0x8003F580: sll         $a0, $v0, 16
        ctx->r4 = S32(ctx->r2 << 16);
            goto L_8003F594;
    }
    // 0x8003F580: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8003F584: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8003F588: jal         0x8001D9C0
    // 0x8003F58C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8001D9C0(rdram, ctx);
        goto after_14;
    // 0x8003F58C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_14:
    // 0x8003F590: sb          $v0, 0x2C($s0)
    MEM_B(0X2C, ctx->r16) = ctx->r2;
L_8003F594:
    // 0x8003F594: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8003F598: lbu         $t8, 0x2D($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X2D);
    // 0x8003F59C: lhu         $v0, 0xA($t7)
    ctx->r2 = MEM_HU(ctx->r15, 0XA);
    // 0x8003F5A0: nop

    // 0x8003F5A4: slt         $at, $t8, $v0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8003F5A8: beq         $at, $zero, L_8003F5C0
    if (ctx->r1 == 0) {
        // 0x8003F5AC: sll         $a0, $v0, 16
        ctx->r4 = S32(ctx->r2 << 16);
            goto L_8003F5C0;
    }
    // 0x8003F5AC: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8003F5B0: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8003F5B4: jal         0x8001D9C0
    // 0x8003F5B8: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_8001D9C0(rdram, ctx);
        goto after_15;
    // 0x8003F5B8: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_15:
    // 0x8003F5BC: sb          $v0, 0x2D($s0)
    MEM_B(0X2D, ctx->r16) = ctx->r2;
L_8003F5C0:
    // 0x8003F5C0: lb          $v0, 0x5F($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X5F);
    // 0x8003F5C4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8003F5C8: bne         $v0, $at, L_8003F5DC
    if (ctx->r2 != ctx->r1) {
        // 0x8003F5CC: lui         $t0, 0x8012
        ctx->r8 = S32(0X8012 << 16);
            goto L_8003F5DC;
    }
    // 0x8003F5CC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8003F5D0: sb          $zero, 0x26($s0)
    MEM_B(0X26, ctx->r16) = 0;
    // 0x8003F5D4: b           L_8003F660
    // 0x8003F5D8: sb          $zero, 0x28($s0)
    MEM_B(0X28, ctx->r16) = 0;
        goto L_8003F660;
    // 0x8003F5D8: sb          $zero, 0x28($s0)
    MEM_B(0X28, ctx->r16) = 0;
L_8003F5DC:
    // 0x8003F5DC: addiu       $t0, $t0, -0x24B8
    ctx->r8 = ADD32(ctx->r8, -0X24B8);
    // 0x8003F5E0: bne         $s1, $t0, L_8003F5EC
    if (ctx->r17 != ctx->r8) {
        // 0x8003F5E4: slti        $at, $v0, 0x2
        ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_8003F5EC;
    }
    // 0x8003F5E4: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8003F5E8: bne         $at, $zero, L_8003F604
    if (ctx->r1 != 0) {
        // 0x8003F5EC: lui         $t2, 0x8012
        ctx->r10 = S32(0X8012 << 16);
            goto L_8003F604;
    }
L_8003F5EC:
    // 0x8003F5EC: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8003F5F0: addiu       $t2, $t2, -0x1A24
    ctx->r10 = ADD32(ctx->r10, -0X1A24);
    // 0x8003F5F4: bne         $s1, $t2, L_8003F634
    if (ctx->r17 != ctx->r10) {
        // 0x8003F5F8: slti        $at, $v0, 0x2
        ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_8003F634;
    }
    // 0x8003F5F8: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8003F5FC: bne         $at, $zero, L_8003F634
    if (ctx->r1 != 0) {
        // 0x8003F600: nop
    
            goto L_8003F634;
    }
    // 0x8003F600: nop

L_8003F604:
    // 0x8003F604: lbu         $t1, 0x26($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X26);
    // 0x8003F608: lbu         $v0, 0x25($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X25);
    // 0x8003F60C: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x8003F610: andi        $v1, $t3, 0xFF
    ctx->r3 = ctx->r11 & 0XFF;
    // 0x8003F614: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003F618: sb          $t3, 0x26($s0)
    MEM_B(0X26, ctx->r16) = ctx->r11;
    // 0x8003F61C: beq         $at, $zero, L_8003F62C
    if (ctx->r1 == 0) {
        // 0x8003F620: sb          $zero, 0x28($s0)
        MEM_B(0X28, ctx->r16) = 0;
            goto L_8003F62C;
    }
    // 0x8003F620: sb          $zero, 0x28($s0)
    MEM_B(0X28, ctx->r16) = 0;
    // 0x8003F624: b           L_8003F660
    // 0x8003F628: sb          $v1, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r3;
        goto L_8003F660;
    // 0x8003F628: sb          $v1, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r3;
L_8003F62C:
    // 0x8003F62C: b           L_8003F660
    // 0x8003F630: sb          $v0, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r2;
        goto L_8003F660;
    // 0x8003F630: sb          $v0, 0x25($s0)
    MEM_B(0X25, ctx->r16) = ctx->r2;
L_8003F634:
    // 0x8003F634: lbu         $t4, 0x28($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X28);
    // 0x8003F638: lbu         $v0, 0x27($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X27);
    // 0x8003F63C: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8003F640: andi        $v1, $t5, 0xFF
    ctx->r3 = ctx->r13 & 0XFF;
    // 0x8003F644: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003F648: sb          $t5, 0x28($s0)
    MEM_B(0X28, ctx->r16) = ctx->r13;
    // 0x8003F64C: beq         $at, $zero, L_8003F65C
    if (ctx->r1 == 0) {
        // 0x8003F650: sb          $zero, 0x26($s0)
        MEM_B(0X26, ctx->r16) = 0;
            goto L_8003F65C;
    }
    // 0x8003F650: sb          $zero, 0x26($s0)
    MEM_B(0X26, ctx->r16) = 0;
    // 0x8003F654: b           L_8003F660
    // 0x8003F658: sb          $v1, 0x27($s0)
    MEM_B(0X27, ctx->r16) = ctx->r3;
        goto L_8003F660;
    // 0x8003F658: sb          $v1, 0x27($s0)
    MEM_B(0X27, ctx->r16) = ctx->r3;
L_8003F65C:
    // 0x8003F65C: sb          $v0, 0x27($s0)
    MEM_B(0X27, ctx->r16) = ctx->r2;
L_8003F660:
    // 0x8003F660: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003F664: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
L_8003F668:
    // 0x8003F668: addu        $v1, $s1, $t6
    ctx->r3 = ADD32(ctx->r17, ctx->r14);
    // 0x8003F66C: lbu         $a0, 0x10($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X10);
    // 0x8003F670: lbu         $t7, 0x2B($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X2B);
    // 0x8003F674: nop

    // 0x8003F678: slt         $at, $t7, $a0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8003F67C: beq         $at, $zero, L_8003F68C
    if (ctx->r1 == 0) {
        // 0x8003F680: nop
    
            goto L_8003F68C;
    }
    // 0x8003F680: nop

    // 0x8003F684: sb          $a0, 0x2B($s0)
    MEM_B(0X2B, ctx->r16) = ctx->r4;
    // 0x8003F688: sb          $v0, 0x2A($s0)
    MEM_B(0X2A, ctx->r16) = ctx->r2;
L_8003F68C:
    // 0x8003F68C: lbu         $a0, 0x11($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X11);
    // 0x8003F690: lbu         $t8, 0x30($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X30);
    // 0x8003F694: nop

    // 0x8003F698: slt         $at, $t8, $a0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8003F69C: beq         $at, $zero, L_8003F6AC
    if (ctx->r1 == 0) {
        // 0x8003F6A0: nop
    
            goto L_8003F6AC;
    }
    // 0x8003F6A0: nop

    // 0x8003F6A4: sb          $a0, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r4;
    // 0x8003F6A8: sb          $v0, 0x2F($s0)
    MEM_B(0X2F, ctx->r16) = ctx->r2;
L_8003F6AC:
    // 0x8003F6AC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003F6B0: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x8003F6B4: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8003F6B8: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8003F6BC: bne         $at, $zero, L_8003F668
    if (ctx->r1 != 0) {
        // 0x8003F6C0: sll         $t6, $v0, 1
        ctx->r14 = S32(ctx->r2 << 1);
            goto L_8003F668;
    }
    // 0x8003F6C0: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x8003F6C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003F6C8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003F6CC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003F6D0: jr          $ra
    // 0x8003F6D4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8003F6D4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8003F6D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F6D8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8003F6DC: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8003F6E0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8003F6E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8003F6E8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003F6EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003F6F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003F6F4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003F6F8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003F6FC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003F700: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8003F704: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003F708: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8003F70C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8003F710: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003F714: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8003F718: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F71C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8003F720: lb          $a0, 0x1($v0)
    ctx->r4 = MEM_B(ctx->r2, 0X1);
    // 0x8003F724: jal         0x8003EC2C
    // 0x8003F728: nop

    func_8003EC2C(rdram, ctx);
        goto after_0;
    // 0x8003F728: nop

    after_0:
    // 0x8003F72C: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    // 0x8003F730: jal         0x8003FBC0
    // 0x8003F734: sh          $a0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r4;
    func_8003FBC0(rdram, ctx);
        goto after_1;
    // 0x8003F734: sh          $a0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r4;
    after_1:
    // 0x8003F738: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x8003F73C: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8003F740: bgez        $v0, L_8003F764
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8003F744: or          $a0, $t9, $zero
        ctx->r4 = ctx->r25 | 0;
            goto L_8003F764;
    }
    // 0x8003F744: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8003F748: jal         0x8004974C
    // 0x8003F74C: sh          $t9, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r25;
    func_8004974C(rdram, ctx);
        goto after_2;
    // 0x8003F74C: sh          $t9, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r25;
    after_2:
    // 0x8003F750: lh          $a0, 0x18($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X18);
    // 0x8003F754: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003F758: beq         $v0, $at, L_8003F764
    if (ctx->r2 == ctx->r1) {
        // 0x8003F75C: nop
    
            goto L_8003F764;
    }
    // 0x8003F75C: nop

    // 0x8003F760: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_8003F764:
    // 0x8003F764: jal         0x8001C9B8
    // 0x8003F768: sh          $a0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r4;
    func_8001C9B8(rdram, ctx);
        goto after_3;
    // 0x8003F768: sh          $a0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r4;
    after_3:
    // 0x8003F76C: lh          $a0, 0x18($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X18);
    // 0x8003F770: bne         $v0, $zero, L_8003F858
    if (ctx->r2 != 0) {
        // 0x8003F774: lh          $a1, 0x1A($sp)
        ctx->r5 = MEM_H(ctx->r29, 0X1A);
            goto L_8003F858;
    }
    // 0x8003F774: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
    // 0x8003F778: jal         0x8004974C
    // 0x8003F77C: sh          $a0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r4;
    func_8004974C(rdram, ctx);
        goto after_4;
    // 0x8003F77C: sh          $a0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r4;
    after_4:
    // 0x8003F780: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8003F784: lh          $a0, 0x18($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X18);
    // 0x8003F788: beq         $v0, $v1, L_8003F858
    if (ctx->r2 == ctx->r3) {
        // 0x8003F78C: lh          $a1, 0x1A($sp)
        ctx->r5 = MEM_H(ctx->r29, 0X1A);
            goto L_8003F858;
    }
    // 0x8003F78C: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
    // 0x8003F790: beq         $a0, $zero, L_8003F7B8
    if (ctx->r4 == 0) {
        // 0x8003F794: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8003F7B8;
    }
    // 0x8003F794: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8003F798: beq         $a0, $at, L_8003F7EC
    if (ctx->r4 == ctx->r1) {
        // 0x8003F79C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8003F7EC;
    }
    // 0x8003F79C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003F7A0: beq         $a0, $at, L_8003F808
    if (ctx->r4 == ctx->r1) {
        // 0x8003F7A4: nop
    
            goto L_8003F808;
    }
    // 0x8003F7A4: nop

    // 0x8003F7A8: beq         $a0, $v1, L_8003F83C
    if (ctx->r4 == ctx->r3) {
        // 0x8003F7AC: nop
    
            goto L_8003F83C;
    }
    // 0x8003F7AC: nop

    // 0x8003F7B0: b           L_8003F858
    // 0x8003F7B4: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
        goto L_8003F858;
    // 0x8003F7B4: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
L_8003F7B8:
    // 0x8003F7B8: jal         0x80038AC4
    // 0x8003F7BC: sh          $a0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r4;
    func_80038AC4(rdram, ctx);
        goto after_5;
    // 0x8003F7BC: sh          $a0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r4;
    after_5:
    // 0x8003F7C0: lh          $a0, 0x18($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X18);
    // 0x8003F7C4: bne         $v0, $zero, L_8003F858
    if (ctx->r2 != 0) {
        // 0x8003F7C8: lh          $a1, 0x1A($sp)
        ctx->r5 = MEM_H(ctx->r29, 0X1A);
            goto L_8003F858;
    }
    // 0x8003F7C8: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
    // 0x8003F7CC: jal         0x8001C994
    // 0x8003F7D0: nop

    func_8001C994(rdram, ctx);
        goto after_6;
    // 0x8003F7D0: nop

    after_6:
    // 0x8003F7D4: bne         $v0, $zero, L_8003F7E4
    if (ctx->r2 != 0) {
        // 0x8003F7D8: nop
    
            goto L_8003F7E4;
    }
    // 0x8003F7D8: nop

    // 0x8003F7DC: b           L_8003F854
    // 0x8003F7E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_8003F854;
    // 0x8003F7E0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_8003F7E4:
    // 0x8003F7E4: b           L_8003F854
    // 0x8003F7E8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_8003F854;
    // 0x8003F7E8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_8003F7EC:
    // 0x8003F7EC: jal         0x80038AC4
    // 0x8003F7F0: sh          $a0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r4;
    func_80038AC4(rdram, ctx);
        goto after_7;
    // 0x8003F7F0: sh          $a0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r4;
    after_7:
    // 0x8003F7F4: lh          $a0, 0x18($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X18);
    // 0x8003F7F8: bne         $v0, $zero, L_8003F858
    if (ctx->r2 != 0) {
        // 0x8003F7FC: lh          $a1, 0x1A($sp)
        ctx->r5 = MEM_H(ctx->r29, 0X1A);
            goto L_8003F858;
    }
    // 0x8003F7FC: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
    // 0x8003F800: b           L_8003F854
    // 0x8003F804: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_8003F854;
    // 0x8003F804: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_8003F808:
    // 0x8003F808: jal         0x80038AC4
    // 0x8003F80C: sh          $a0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r4;
    func_80038AC4(rdram, ctx);
        goto after_8;
    // 0x8003F80C: sh          $a0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r4;
    after_8:
    // 0x8003F810: lh          $a0, 0x18($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X18);
    // 0x8003F814: beq         $v0, $zero, L_8003F858
    if (ctx->r2 == 0) {
        // 0x8003F818: lh          $a1, 0x1A($sp)
        ctx->r5 = MEM_H(ctx->r29, 0X1A);
            goto L_8003F858;
    }
    // 0x8003F818: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
    // 0x8003F81C: jal         0x8001C994
    // 0x8003F820: nop

    func_8001C994(rdram, ctx);
        goto after_9;
    // 0x8003F820: nop

    after_9:
    // 0x8003F824: bne         $v0, $zero, L_8003F834
    if (ctx->r2 != 0) {
        // 0x8003F828: nop
    
            goto L_8003F834;
    }
    // 0x8003F828: nop

    // 0x8003F82C: b           L_8003F854
    // 0x8003F830: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
        goto L_8003F854;
    // 0x8003F830: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_8003F834:
    // 0x8003F834: b           L_8003F854
    // 0x8003F838: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
        goto L_8003F854;
    // 0x8003F838: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_8003F83C:
    // 0x8003F83C: jal         0x80038AC4
    // 0x8003F840: sh          $a0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r4;
    func_80038AC4(rdram, ctx);
        goto after_10;
    // 0x8003F840: sh          $a0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r4;
    after_10:
    // 0x8003F844: lh          $a0, 0x18($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X18);
    // 0x8003F848: beq         $v0, $zero, L_8003F858
    if (ctx->r2 == 0) {
        // 0x8003F84C: lh          $a1, 0x1A($sp)
        ctx->r5 = MEM_H(ctx->r29, 0X1A);
            goto L_8003F858;
    }
    // 0x8003F84C: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
    // 0x8003F850: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_8003F854:
    // 0x8003F854: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
L_8003F858:
    // 0x8003F858: jal         0x8003F870
    // 0x8003F85C: nop

    func_8003F870(rdram, ctx);
        goto after_11;
    // 0x8003F85C: nop

    after_11:
    // 0x8003F860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003F864: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003F868: jr          $ra
    // 0x8003F86C: nop

    return;
    // 0x8003F86C: nop

;}
RECOMP_FUNC void func_8003F870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F870: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003F874: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003F878: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003F87C: sll         $s0, $a0, 16
    ctx->r16 = S32(ctx->r4 << 16);
    // 0x8003F880: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x8003F884: sll         $a2, $a1, 16
    ctx->r6 = S32(ctx->r5 << 16);
    // 0x8003F888: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8003F88C: addiu       $s2, $s2, -0x2CF0
    ctx->r18 = ADD32(ctx->r18, -0X2CF0);
    // 0x8003F890: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8003F894: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x8003F898: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8003F89C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003F8A0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003F8A4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8003F8A8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8003F8AC: sh          $zero, 0xAA0($s2)
    MEM_H(0XAA0, ctx->r18) = 0;
    // 0x8003F8B0: bltz        $t6, L_8003F8C4
    if (SIGNED(ctx->r14) < 0) {
        // 0x8003F8B4: sh          $zero, 0xC($s2)
        MEM_H(0XC, ctx->r18) = 0;
            goto L_8003F8C4;
    }
    // 0x8003F8B4: sh          $zero, 0xC($s2)
    MEM_H(0XC, ctx->r18) = 0;
    // 0x8003F8B8: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x8003F8BC: bne         $at, $zero, L_8003F9C0
    if (ctx->r1 != 0) {
        // 0x8003F8C0: slti        $at, $s0, 0x2
        ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
            goto L_8003F9C0;
    }
    // 0x8003F8C0: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
L_8003F8C4:
    // 0x8003F8C4: jal         0x8001C970
    // 0x8003F8C8: sh          $a2, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r6;
    func_8001C970(rdram, ctx);
        goto after_0;
    // 0x8003F8C8: sh          $a2, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r6;
    after_0:
    // 0x8003F8CC: sll         $a0, $v0, 24
    ctx->r4 = S32(ctx->r2 << 24);
    // 0x8003F8D0: sll         $t0, $v0, 24
    ctx->r8 = S32(ctx->r2 << 24);
    // 0x8003F8D4: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8003F8D8: lh          $a2, 0x36($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X36);
    // 0x8003F8DC: sra         $t1, $t0, 24
    ctx->r9 = S32(SIGNED(ctx->r8) >> 24);
    // 0x8003F8E0: bne         $t1, $zero, L_8003F8F0
    if (ctx->r9 != 0) {
        // 0x8003F8E4: or          $a0, $t9, $zero
        ctx->r4 = ctx->r25 | 0;
            goto L_8003F8F0;
    }
    // 0x8003F8E4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8003F8E8: b           L_8003F8F4
    // 0x8003F8EC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_8003F8F4;
    // 0x8003F8EC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8003F8F0:
    // 0x8003F8F0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_8003F8F4:
    // 0x8003F8F4: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x8003F8F8: sra         $t2, $a1, 24
    ctx->r10 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8003F8FC: jal         0x800404D8
    // 0x8003F900: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    func_800404D8(rdram, ctx);
        goto after_1;
    // 0x8003F900: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    after_1:
    // 0x8003F904: bne         $v0, $zero, L_8003F928
    if (ctx->r2 != 0) {
        // 0x8003F908: nop
    
            goto L_8003F928;
    }
    // 0x8003F908: nop

    // 0x8003F90C: jal         0x8001C9DC
    // 0x8003F910: nop

    func_8001C9DC(rdram, ctx);
        goto after_2;
    // 0x8003F910: nop

    after_2:
    // 0x8003F914: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8003F918: addu        $t3, $t3, $v0
    ctx->r11 = ADD32(ctx->r11, ctx->r2);
    // 0x8003F91C: lbu         $t3, 0x7620($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X7620);
    // 0x8003F920: b           L_8003F934
    // 0x8003F924: sh          $t3, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r11;
        goto L_8003F934;
    // 0x8003F924: sh          $t3, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r11;
L_8003F928:
    // 0x8003F928: jal         0x8001C970
    // 0x8003F92C: nop

    func_8001C970(rdram, ctx);
        goto after_3;
    // 0x8003F92C: nop

    after_3:
    // 0x8003F930: sh          $v0, 0xA($s2)
    MEM_H(0XA, ctx->r18) = ctx->r2;
L_8003F934:
    // 0x8003F934: lhu         $t4, 0xA($s2)
    ctx->r12 = MEM_HU(ctx->r18, 0XA);
    // 0x8003F938: jal         0x8004974C
    // 0x8003F93C: sh          $t4, 0xA9E($s2)
    MEM_H(0XA9E, ctx->r18) = ctx->r12;
    func_8004974C(rdram, ctx);
        goto after_4;
    // 0x8003F93C: sh          $t4, 0xA9E($s2)
    MEM_H(0XA9E, ctx->r18) = ctx->r12;
    after_4:
    // 0x8003F940: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8003F944: bne         $v0, $at, L_8003FBA8
    if (ctx->r2 != ctx->r1) {
        // 0x8003F948: lui         $s1, 0x800D
        ctx->r17 = S32(0X800D << 16);
            goto L_8003FBA8;
    }
    // 0x8003F948: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x8003F94C: addiu       $s1, $s1, 0x5E60
    ctx->r17 = ADD32(ctx->r17, 0X5E60);
L_8003F950:
    // 0x8003F950: jal         0x8001C9B8
    // 0x8003F954: nop

    func_8001C9B8(rdram, ctx);
        goto after_5;
    // 0x8003F954: nop

    after_5:
    // 0x8003F958: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x8003F95C: sra         $t5, $s0, 16
    ctx->r13 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8003F960: jal         0x8001C970
    // 0x8003F964: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    func_8001C970(rdram, ctx);
        goto after_6;
    // 0x8003F964: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    after_6:
    // 0x8003F968: beq         $v0, $zero, L_8003F98C
    if (ctx->r2 == 0) {
        // 0x8003F96C: sll         $t9, $s0, 1
        ctx->r25 = S32(ctx->r16 << 1);
            goto L_8003F98C;
    }
    // 0x8003F96C: sll         $t9, $s0, 1
    ctx->r25 = S32(ctx->r16 << 1);
    // 0x8003F970: sll         $t6, $s0, 1
    ctx->r14 = S32(ctx->r16 << 1);
    // 0x8003F974: addu        $v0, $s1, $t6
    ctx->r2 = ADD32(ctx->r17, ctx->r14);
    // 0x8003F978: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x8003F97C: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    // 0x8003F980: sh          $t7, 0xC($s2)
    MEM_H(0XC, ctx->r18) = ctx->r15;
    // 0x8003F984: b           L_8003F9A0
    // 0x8003F988: sh          $t8, 0xAA0($s2)
    MEM_H(0XAA0, ctx->r18) = ctx->r24;
        goto L_8003F9A0;
    // 0x8003F988: sh          $t8, 0xAA0($s2)
    MEM_H(0XAA0, ctx->r18) = ctx->r24;
L_8003F98C:
    // 0x8003F98C: addu        $v0, $s1, $t9
    ctx->r2 = ADD32(ctx->r17, ctx->r25);
    // 0x8003F990: lbu         $t0, 0x1($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X1);
    // 0x8003F994: lbu         $t1, 0x0($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X0);
    // 0x8003F998: sh          $t0, 0xC($s2)
    MEM_H(0XC, ctx->r18) = ctx->r8;
    // 0x8003F99C: sh          $t1, 0xAA0($s2)
    MEM_H(0XAA0, ctx->r18) = ctx->r9;
L_8003F9A0:
    // 0x8003F9A0: lhu         $t2, 0xC($s2)
    ctx->r10 = MEM_HU(ctx->r18, 0XC);
    // 0x8003F9A4: lhu         $t3, 0xAA0($s2)
    ctx->r11 = MEM_HU(ctx->r18, 0XAA0);
    // 0x8003F9A8: nop

    // 0x8003F9AC: beq         $t2, $t3, L_8003F950
    if (ctx->r10 == ctx->r11) {
        // 0x8003F9B0: nop
    
            goto L_8003F950;
    }
    // 0x8003F9B0: nop

    // 0x8003F9B4: b           L_8003FBAC
    // 0x8003F9B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8003FBAC;
    // 0x8003F9B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003F9BC: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
L_8003F9C0:
    // 0x8003F9C0: beq         $at, $zero, L_8003F9D0
    if (ctx->r1 == 0) {
        // 0x8003F9C4: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_8003F9D0;
    }
    // 0x8003F9C4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8003F9C8: b           L_8003F9D4
    // 0x8003F9CC: sb          $zero, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = 0;
        goto L_8003F9D4;
    // 0x8003F9CC: sb          $zero, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = 0;
L_8003F9D0:
    // 0x8003F9D0: sb          $t4, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r12;
L_8003F9D4:
    // 0x8003F9D4: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x8003F9D8: beq         $at, $zero, L_8003F9E8
    if (ctx->r1 == 0) {
        // 0x8003F9DC: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_8003F9E8;
    }
    // 0x8003F9DC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8003F9E0: b           L_8003F9E8
    // 0x8003F9E4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_8003F9E8;
    // 0x8003F9E4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8003F9E8:
    // 0x8003F9E8: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x8003F9EC: sra         $t5, $a1, 24
    ctx->r13 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8003F9F0: lb          $a0, 0x2F($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X2F);
    // 0x8003F9F4: jal         0x800404D8
    // 0x8003F9F8: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    func_800404D8(rdram, ctx);
        goto after_7;
    // 0x8003F9F8: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    after_7:
    // 0x8003F9FC: beq         $s0, $zero, L_8003FA0C
    if (ctx->r16 == 0) {
        // 0x8003FA00: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8003FA0C;
    }
    // 0x8003FA00: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8003FA04: bne         $s0, $at, L_8003FB1C
    if (ctx->r16 != ctx->r1) {
        // 0x8003FA08: sll         $t3, $v0, 24
        ctx->r11 = S32(ctx->r2 << 24);
            goto L_8003FB1C;
    }
    // 0x8003FA08: sll         $t3, $v0, 24
    ctx->r11 = S32(ctx->r2 << 24);
L_8003FA0C:
    // 0x8003FA0C: sll         $t6, $v0, 24
    ctx->r14 = S32(ctx->r2 << 24);
    // 0x8003FA10: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8003FA14: bne         $t7, $zero, L_8003FAAC
    if (ctx->r15 != 0) {
        // 0x8003FA18: nop
    
            goto L_8003FAAC;
    }
    // 0x8003FA18: nop

    // 0x8003FA1C: jal         0x8001C9DC
    // 0x8003FA20: nop

    func_8001C9DC(rdram, ctx);
        goto after_8;
    // 0x8003FA20: nop

    after_8:
    // 0x8003FA24: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x8003FA28: addu        $t8, $t8, $s1
    ctx->r24 = ADD32(ctx->r24, ctx->r17);
    // 0x8003FA2C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8003FA30: addu        $t8, $t8, $s1
    ctx->r24 = ADD32(ctx->r24, ctx->r17);
    // 0x8003FA34: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8003FA38: addu        $t8, $t8, $s1
    ctx->r24 = ADD32(ctx->r24, ctx->r17);
    // 0x8003FA3C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8003FA40: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8003FA44: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x8003FA48: addu        $t8, $t8, $s1
    ctx->r24 = ADD32(ctx->r24, ctx->r17);
    // 0x8003FA4C: lbu         $t9, 0x75F0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X75F0);
    // 0x8003FA50: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8003FA54: addu        $s0, $s2, $t8
    ctx->r16 = ADD32(ctx->r18, ctx->r24);
    // 0x8003FA58: jal         0x8001C9DC
    // 0x8003FA5C: sh          $t9, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r25;
    func_8001C9DC(rdram, ctx);
        goto after_9;
    // 0x8003FA5C: sh          $t9, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r25;
    after_9:
    // 0x8003FA60: lb          $t4, 0x2F($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X2F);
    // 0x8003FA64: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8003FA68: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8003FA6C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8003FA70: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8003FA74: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8003FA78: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x8003FA7C: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x8003FA80: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8003FA84: lbu         $t0, 0x7600($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X7600);
    // 0x8003FA88: lhu         $t1, 0xA($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0XA);
    // 0x8003FA8C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8003FA90: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8003FA94: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8003FA98: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8003FA9C: addiu       $t3, $t2, 0x2
    ctx->r11 = ADD32(ctx->r10, 0X2);
    // 0x8003FAA0: addu        $t6, $s2, $t5
    ctx->r14 = ADD32(ctx->r18, ctx->r13);
    // 0x8003FAA4: b           L_8003FBA8
    // 0x8003FAA8: sh          $t3, 0xA($t6)
    MEM_H(0XA, ctx->r14) = ctx->r11;
        goto L_8003FBA8;
    // 0x8003FAA8: sh          $t3, 0xA($t6)
    MEM_H(0XA, ctx->r14) = ctx->r11;
L_8003FAAC:
    // 0x8003FAAC: jal         0x8001C970
    // 0x8003FAB0: nop

    func_8001C970(rdram, ctx);
        goto after_10;
    // 0x8003FAB0: nop

    after_10:
    // 0x8003FAB4: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x8003FAB8: addu        $t7, $t7, $s1
    ctx->r15 = ADD32(ctx->r15, ctx->r17);
    // 0x8003FABC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003FAC0: addu        $t7, $t7, $s1
    ctx->r15 = ADD32(ctx->r15, ctx->r17);
    // 0x8003FAC4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8003FAC8: addu        $t7, $t7, $s1
    ctx->r15 = ADD32(ctx->r15, ctx->r17);
    // 0x8003FACC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003FAD0: addu        $t7, $t7, $s1
    ctx->r15 = ADD32(ctx->r15, ctx->r17);
    // 0x8003FAD4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003FAD8: addu        $s0, $s2, $t7
    ctx->r16 = ADD32(ctx->r18, ctx->r15);
    // 0x8003FADC: jal         0x8001C9DC
    // 0x8003FAE0: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    func_8001C9DC(rdram, ctx);
        goto after_11;
    // 0x8003FAE0: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
    after_11:
    // 0x8003FAE4: lb          $t2, 0x2F($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X2F);
    // 0x8003FAE8: addiu       $v1, $zero, 0xA94
    ctx->r3 = ADD32(0, 0XA94);
    // 0x8003FAEC: multu       $t2, $v1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003FAF0: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8003FAF4: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x8003FAF8: lbu         $t8, 0x7610($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X7610);
    // 0x8003FAFC: lhu         $t9, 0xA($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XA);
    // 0x8003FB00: nop

    // 0x8003FB04: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8003FB08: addiu       $t1, $t0, 0x2
    ctx->r9 = ADD32(ctx->r8, 0X2);
    // 0x8003FB0C: mflo        $t4
    ctx->r12 = lo;
    // 0x8003FB10: addu        $t5, $s2, $t4
    ctx->r13 = ADD32(ctx->r18, ctx->r12);
    // 0x8003FB14: b           L_8003FBA8
    // 0x8003FB18: sh          $t1, 0xA($t5)
    MEM_H(0XA, ctx->r13) = ctx->r9;
        goto L_8003FBA8;
    // 0x8003FB18: sh          $t1, 0xA($t5)
    MEM_H(0XA, ctx->r13) = ctx->r9;
L_8003FB1C:
    // 0x8003FB1C: sra         $t6, $t3, 24
    ctx->r14 = S32(SIGNED(ctx->r11) >> 24);
    // 0x8003FB20: bne         $t6, $zero, L_8003FB54
    if (ctx->r14 != 0) {
        // 0x8003FB24: nop
    
            goto L_8003FB54;
    }
    // 0x8003FB24: nop

    // 0x8003FB28: jal         0x8001C9DC
    // 0x8003FB2C: nop

    func_8001C9DC(rdram, ctx);
        goto after_12;
    // 0x8003FB2C: nop

    after_12:
    // 0x8003FB30: addiu       $v1, $zero, 0xA94
    ctx->r3 = ADD32(0, 0XA94);
    // 0x8003FB34: multu       $s1, $v1
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003FB38: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8003FB3C: addu        $t8, $t8, $v0
    ctx->r24 = ADD32(ctx->r24, ctx->r2);
    // 0x8003FB40: lbu         $t8, 0x7630($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X7630);
    // 0x8003FB44: mflo        $t7
    ctx->r15 = lo;
    // 0x8003FB48: addu        $s0, $s2, $t7
    ctx->r16 = ADD32(ctx->r18, ctx->r15);
    // 0x8003FB4C: b           L_8003FB70
    // 0x8003FB50: sh          $t8, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r24;
        goto L_8003FB70;
    // 0x8003FB50: sh          $t8, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r24;
L_8003FB54:
    // 0x8003FB54: jal         0x8001C970
    // 0x8003FB58: nop

    func_8001C970(rdram, ctx);
        goto after_13;
    // 0x8003FB58: nop

    after_13:
    // 0x8003FB5C: addiu       $v1, $zero, 0xA94
    ctx->r3 = ADD32(0, 0XA94);
    // 0x8003FB60: multu       $s1, $v1
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003FB64: mflo        $t9
    ctx->r25 = lo;
    // 0x8003FB68: addu        $s0, $s2, $t9
    ctx->r16 = ADD32(ctx->r18, ctx->r25);
    // 0x8003FB6C: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_8003FB70:
    // 0x8003FB70: lb          $t0, 0x2F($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X2F);
    // 0x8003FB74: lhu         $t4, 0xA($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0XA);
    // 0x8003FB78: multu       $t0, $v1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003FB7C: addiu       $t1, $t4, 0x1
    ctx->r9 = ADD32(ctx->r12, 0X1);
    // 0x8003FB80: mflo        $t2
    ctx->r10 = lo;
    // 0x8003FB84: addu        $s1, $s2, $t2
    ctx->r17 = ADD32(ctx->r18, ctx->r10);
    // 0x8003FB88: jal         0x8001C994
    // 0x8003FB8C: sh          $t1, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r9;
    func_8001C994(rdram, ctx);
        goto after_14;
    // 0x8003FB8C: sh          $t1, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r9;
    after_14:
    // 0x8003FB90: bne         $v0, $zero, L_8003FBAC
    if (ctx->r2 != 0) {
        // 0x8003FB94: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8003FBAC;
    }
    // 0x8003FB94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003FB98: lhu         $t5, 0xA($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0XA);
    // 0x8003FB9C: nop

    // 0x8003FBA0: addiu       $t3, $t5, 0x1
    ctx->r11 = ADD32(ctx->r13, 0X1);
    // 0x8003FBA4: sh          $t3, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r11;
L_8003FBA8:
    // 0x8003FBA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8003FBAC:
    // 0x8003FBAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003FBB0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003FBB4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003FBB8: jr          $ra
    // 0x8003FBBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8003FBBC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8003FBC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003FBC0: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8003FBC4: lb          $t7, -0x32A1($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X32A1);
    // 0x8003FBC8: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8003FBCC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8003FBD0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8003FBD4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8003FBD8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8003FBDC: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8003FBE0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8003FBE4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8003FBE8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8003FBEC: swc1        $f24, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f24.u32l;
    // 0x8003FBF0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8003FBF4: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x8003FBF8: sw          $s3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r19;
    // 0x8003FBFC: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8003FC00: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8003FC04: sll         $s3, $a0, 16
    ctx->r19 = S32(ctx->r4 << 16);
    // 0x8003FC08: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8003FC0C: addiu       $t9, $t9, -0x2F80
    ctx->r25 = ADD32(ctx->r25, -0X2F80);
    // 0x8003FC10: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x8003FC14: sw          $s0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r16;
    // 0x8003FC18: swc1        $f23, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x8003FC1C: swc1        $f22, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f22.u32l;
    // 0x8003FC20: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8003FC24: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8003FC28: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8003FC2C: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x8003FC30: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8003FC34: sw          $s2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r18;
    // 0x8003FC38: sw          $s1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r17;
    // 0x8003FC3C: swc1        $f25, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(25 - 1) * 2];
    // 0x8003FC40: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x8003FC44: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
    // 0x8003FC48: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003FC4C: mov.s       $f20, $f24
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    ctx->f20.fl = ctx->f24.fl;
    // 0x8003FC50: mov.s       $f22, $f24
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 24);
    ctx->f22.fl = ctx->f24.fl;
L_8003FC54:
    // 0x8003FC54: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8003FC58: addiu       $t1, $t1, 0x7564
    ctx->r9 = ADD32(ctx->r9, 0X7564);
    // 0x8003FC5C: addu        $s1, $s0, $t1
    ctx->r17 = ADD32(ctx->r16, ctx->r9);
    // 0x8003FC60: sll         $a2, $s3, 16
    ctx->r6 = S32(ctx->r19 << 16);
    // 0x8003FC64: sra         $t2, $a2, 16
    ctx->r10 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8003FC68: lb          $a1, 0x0($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X0);
    // 0x8003FC6C: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x8003FC70: jal         0x800429F4
    // 0x8003FC74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800429F4(rdram, ctx);
        goto after_0;
    // 0x8003FC74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8003FC78: lui         $t3, 0x800D
    ctx->r11 = S32(0X800D << 16);
    // 0x8003FC7C: addiu       $t3, $t3, 0x7574
    ctx->r11 = ADD32(ctx->r11, 0X7574);
    // 0x8003FC80: addu        $s2, $s0, $t3
    ctx->r18 = ADD32(ctx->r16, ctx->r11);
    // 0x8003FC84: lb          $t4, 0x0($s2)
    ctx->r12 = MEM_B(ctx->r18, 0X0);
    // 0x8003FC88: sll         $a2, $s3, 16
    ctx->r6 = S32(ctx->r19 << 16);
    // 0x8003FC8C: multu       $v0, $t4
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003FC90: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8003FC94: lb          $a1, 0x0($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X0);
    // 0x8003FC98: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x8003FC9C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8003FCA0: mflo        $t5
    ctx->r13 = lo;
    // 0x8003FCA4: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x8003FCA8: nop

    // 0x8003FCAC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8003FCB0: jal         0x800429F4
    // 0x8003FCB4: add.s       $f24, $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f6.fl;
    func_800429F4(rdram, ctx);
        goto after_1;
    // 0x8003FCB4: add.s       $f24, $f24, $f6
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f6.fl;
    after_1:
    // 0x8003FCB8: lb          $v1, 0x0($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X0);
    // 0x8003FCBC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003FCC0: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003FCC4: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x8003FCC8: sll         $t8, $s0, 16
    ctx->r24 = S32(ctx->r16 << 16);
    // 0x8003FCCC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8003FCD0: sra         $s0, $t8, 16
    ctx->r16 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8003FCD4: slti        $at, $s0, 0xD
    ctx->r1 = SIGNED(ctx->r16) < 0XD ? 1 : 0;
    // 0x8003FCD8: add.s       $f20, $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f6.fl;
    // 0x8003FCDC: mflo        $t7
    ctx->r15 = lo;
    // 0x8003FCE0: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8003FCE4: nop

    // 0x8003FCE8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8003FCEC: bne         $at, $zero, L_8003FC54
    if (ctx->r1 != 0) {
        // 0x8003FCF0: add.s       $f22, $f22, $f10
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f10.fl;
            goto L_8003FC54;
    }
    // 0x8003FCF0: add.s       $f22, $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f10.fl;
    // 0x8003FCF4: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x8003FCF8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8003FCFC: sll         $a1, $s3, 16
    ctx->r5 = S32(ctx->r19 << 16);
    // 0x8003FD00: mul.s       $f0, $f8, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f0.fl = MUL_S(ctx->f8.fl, ctx->f20.fl);
    // 0x8003FD04: sra         $t0, $a1, 16
    ctx->r8 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8003FD08: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8003FD0C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8003FD10: div.s       $f24, $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f24.fl = DIV_S(ctx->f24.fl, ctx->f0.fl);
    // 0x8003FD14: jal         0x8003C684
    // 0x8003FD18: div.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = DIV_S(ctx->f22.fl, ctx->f0.fl);
    func_8003C684(rdram, ctx);
        goto after_2;
    // 0x8003FD18: div.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = DIV_S(ctx->f22.fl, ctx->f0.fl);
    after_2:
    // 0x8003FD1C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x8003FD20: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8003FD24: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8003FD28: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8003FD2C: sll         $a1, $s3, 16
    ctx->r5 = S32(ctx->r19 << 16);
    // 0x8003FD30: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8003FD34: sra         $t1, $a1, 16
    ctx->r9 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8003FD38: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x8003FD3C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8003FD40: jal         0x8003C684
    // 0x8003FD44: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    func_8003C684(rdram, ctx);
        goto after_3;
    // 0x8003FD44: swc1        $f8, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x8003FD48: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x8003FD4C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8003FD50: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8003FD54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8003FD58: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8003FD5C: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8003FD60: addiu       $s0, $s0, -0x2CF0
    ctx->r16 = ADD32(ctx->r16, -0X2CF0);
    // 0x8003FD64: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8003FD68: lbu         $a1, 0xA94($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XA94);
    // 0x8003FD6C: jal         0x80038AE0
    // 0x8003FD70: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    func_80038AE0(rdram, ctx);
        goto after_4;
    // 0x8003FD70: swc1        $f8, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x8003FD74: lui         $at, 0x41CC
    ctx->r1 = S32(0X41CC << 16);
    // 0x8003FD78: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8003FD7C: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x8003FD80: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8003FD84: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8003FD88: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8003FD8C: addiu       $v1, $v1, 0x7650
    ctx->r3 = ADD32(ctx->r3, 0X7650);
    // 0x8003FD90: bgez        $v0, L_8003FDA8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8003FD94: cvt.s.w     $f0, $f10
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8003FDA8;
    }
    // 0x8003FD94: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8003FD98: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8003FD9C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8003FDA0: nop

    // 0x8003FDA4: add.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f4.fl;
L_8003FDA8:
    // 0x8003FDA8: nop

    // 0x8003FDAC: div.s       $f2, $f0, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x8003FDB0: lwc1        $f6, 0x74($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8003FDB4: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x8003FDB8: lbu         $t2, 0x0($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X0);
    // 0x8003FDBC: nop

    // 0x8003FDC0: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x8003FDC4: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x8003FDC8: mul.s       $f8, $f2, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x8003FDCC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8003FDD0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8003FDD4: div.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8003FDD8: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x8003FDDC: nop

    // 0x8003FDE0: div.s       $f12, $f8, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = DIV_S(ctx->f8.fl, ctx->f16.fl);
    // 0x8003FDE4: add.s       $f4, $f2, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f2.fl + ctx->f10.fl;
    // 0x8003FDE8: lwc1        $f10, 0x70($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8003FDEC: swc1        $f4, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f4.u32l;
    // 0x8003FDF0: mul.s       $f4, $f12, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x8003FDF4: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x8003FDF8: div.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8003FDFC: cvt.s.w     $f20, $f10
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    ctx->f20.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8003FE00: add.s       $f8, $f12, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f12.fl + ctx->f6.fl;
    // 0x8003FE04: bgez        $t4, L_8003FE18
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8003FE08: swc1        $f8, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
            goto L_8003FE18;
    }
    // 0x8003FE08: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x8003FE0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8003FE10: nop

    // 0x8003FE14: add.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f4.fl;
L_8003FE18:
    // 0x8003FE18: lbu         $t5, 0xA94($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XA94);
    // 0x8003FE1C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8003FE20: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x8003FE24: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8003FE28: nop

    // 0x8003FE2C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8003FE30: bgez        $t7, L_8003FE44
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8003FE34: cvt.s.w     $f14, $f6
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8003FE44;
    }
    // 0x8003FE34: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8003FE38: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8003FE3C: nop

    // 0x8003FE40: add.s       $f14, $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f8.fl;
L_8003FE44:
    // 0x8003FE44: jal         0x80038AC4
    // 0x8003FE48: swc1        $f14, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f14.u32l;
    func_80038AC4(rdram, ctx);
        goto after_5;
    // 0x8003FE48: swc1        $f14, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f14.u32l;
    after_5:
    // 0x8003FE4C: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x8003FE50: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8003FE54: lui         $at, 0x41CC
    ctx->r1 = S32(0X41CC << 16);
    // 0x8003FE58: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8003FE5C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8003FE60: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8003FE64: lwc1        $f14, 0x78($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8003FE68: beq         $v0, $zero, L_8003FE78
    if (ctx->r2 == 0) {
        // 0x8003FE6C: nop
    
            goto L_8003FE78;
    }
    // 0x8003FE6C: nop

    // 0x8003FE70: b           L_8003FE7C
    // 0x8003FE74: sub.s       $f14, $f0, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f14.fl;
        goto L_8003FE7C;
    // 0x8003FE74: sub.s       $f14, $f0, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f14.fl;
L_8003FE78:
    // 0x8003FE78: sub.s       $f20, $f0, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = ctx->f0.fl - ctx->f20.fl;
L_8003FE7C:
    // 0x8003FE7C: nop

    // 0x8003FE80: div.s       $f20, $f20, $f16
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f16.fl);
    // 0x8003FE84: lwc1        $f10, 0x74($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X74);
    // 0x8003FE88: lwc1        $f8, 0x70($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X70);
    // 0x8003FE8C: lw          $t8, 0x4C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4C);
    // 0x8003FE90: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8003FE94: lbu         $t9, 0x9($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X9);
    // 0x8003FE98: lbu         $t2, 0x0($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X0);
    // 0x8003FE9C: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8003FEA0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8003FEA4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8003FEA8: addiu       $t1, $t1, 0x7674
    ctx->r9 = ADD32(ctx->r9, 0X7674);
    // 0x8003FEAC: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x8003FEB0: mul.s       $f4, $f20, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f10.fl);
    // 0x8003FEB4: nop

    // 0x8003FEB8: div.s       $f14, $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = DIV_S(ctx->f14.fl, ctx->f16.fl);
    // 0x8003FEBC: addu        $t3, $v0, $t2
    ctx->r11 = ADD32(ctx->r2, ctx->r10);
    // 0x8003FEC0: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x8003FEC4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8003FEC8: lwc1        $f13, 0x73B0($at)
    ctx->f_odd[(13 - 1) * 2] = MEM_W(ctx->r1, 0X73B0);
    // 0x8003FECC: lwc1        $f12, 0x73B4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X73B4);
    // 0x8003FED0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8003FED4: div.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8003FED8: mul.s       $f4, $f14, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f8.fl);
    // 0x8003FEDC: add.s       $f20, $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f6.fl;
    // 0x8003FEE0: nop

    // 0x8003FEE4: div.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8003FEE8: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x8003FEEC: add.s       $f14, $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x8003FEF0: bgez        $t4, L_8003FF04
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8003FEF4: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8003FF04;
    }
    // 0x8003FEF4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8003FEF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8003FEFC: nop

    // 0x8003FF00: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_8003FF04:
    // 0x8003FF04: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x8003FF08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8003FF0C: lbu         $t5, 0xA94($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0XA94);
    // 0x8003FF10: div.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8003FF14: addu        $t6, $v0, $t5
    ctx->r14 = ADD32(ctx->r2, ctx->r13);
    // 0x8003FF18: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8003FF1C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8003FF20: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x8003FF24: mul.d       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f12.d);
    // 0x8003FF28: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8003FF2C: cvt.s.d     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f0.fl = CVT_S_D(ctx->f6.d);
    // 0x8003FF30: bgez        $t7, L_8003FF44
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8003FF34: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8003FF44;
    }
    // 0x8003FF34: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8003FF38: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8003FF3C: nop

    // 0x8003FF40: add.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f4.fl;
L_8003FF44:
    // 0x8003FF44: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x8003FF48: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8003FF4C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8003FF50: div.s       $f6, $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8003FF54: lb          $t8, -0x309F($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X309F);
    // 0x8003FF58: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8003FF5C: cvt.d.s     $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.d = CVT_D_S(ctx->f6.fl);
    // 0x8003FF60: mul.d       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f12.d); 
    ctx->f6.d = MUL_D(ctx->f4.d, ctx->f12.d);
    // 0x8003FF64: add.s       $f4, $f24, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f24.fl + ctx->f10.fl;
    // 0x8003FF68: cvt.s.d     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f2.fl = CVT_S_D(ctx->f6.d);
    // 0x8003FF6C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x8003FF70: nop

    // 0x8003FF74: add.s       $f10, $f4, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8003FF78: mul.s       $f4, $f20, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8003FF7C: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8003FF80: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x8003FF84: add.s       $f10, $f22, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f22.fl + ctx->f8.fl;
    // 0x8003FF88: add.s       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x8003FF8C: mul.s       $f10, $f14, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f14.fl, ctx->f2.fl);
    // 0x8003FF90: add.s       $f4, $f8, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x8003FF94: sub.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8003FF98: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x8003FF9C: beq         $t8, $zero, L_8003FFBC
    if (ctx->r24 == 0) {
        // 0x8003FFA0: mov.s       $f12, $f8
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = ctx->f8.fl;
            goto L_8003FFBC;
    }
    // 0x8003FFA0: mov.s       $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = ctx->f8.fl;
    // 0x8003FFA4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8003FFA8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8003FFAC: mul.s       $f6, $f8, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8003FFB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8003FFB4: nop

    // 0x8003FFB8: div.s       $f12, $f6, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f4.fl);
L_8003FFBC:
    // 0x8003FFBC: swc1        $f12, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f12.u32l;
    // 0x8003FFC0: jal         0x8001DAB4
    // 0x8003FFC4: swc1        $f14, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f14.u32l;
    func_8001DAB4(rdram, ctx);
        goto after_6;
    // 0x8003FFC4: swc1        $f14, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f14.u32l;
    after_6:
    // 0x8003FFC8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8003FFCC: lwc1        $f9, 0x73B8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X73B8);
    // 0x8003FFD0: lwc1        $f8, 0x73BC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X73BC);
    // 0x8003FFD4: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x8003FFD8: c.lt.d      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.d < ctx->f10.d;
    // 0x8003FFDC: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    // 0x8003FFE0: lwc1        $f14, 0x78($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X78);
    // 0x8003FFE4: bc1f        L_80040014
    if (!c1cs) {
        // 0x8003FFE8: nop
    
            goto L_80040014;
    }
    // 0x8003FFE8: nop

    // 0x8003FFEC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8003FFF0: nop

    // 0x8003FFF4: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x8003FFF8: nop

    // 0x8003FFFC: bc1f        L_8004000C
    if (!c1cs) {
        // 0x80040000: nop
    
            goto L_8004000C;
    }
    // 0x80040000: nop

    // 0x80040004: b           L_800404A4
    // 0x80040008: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800404A4;
    // 0x80040008: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004000C:
    // 0x8004000C: b           L_800404A4
    // 0x80040010: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_800404A4;
    // 0x80040010: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80040014:
    // 0x80040014: jal         0x8001C994
    // 0x80040018: swc1        $f14, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f14.u32l;
    func_8001C994(rdram, ctx);
        goto after_7;
    // 0x80040018: swc1        $f14, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f14.u32l;
    after_7:
    // 0x8004001C: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80040020: lwc1        $f14, 0x78($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X78);
    // 0x80040024: sra         $t9, $v1, 16
    ctx->r25 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80040028: beq         $t9, $zero, L_80040048
    if (ctx->r25 == 0) {
        // 0x8004002C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80040048;
    }
    // 0x8004002C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80040030: beq         $t9, $at, L_80040188
    if (ctx->r25 == ctx->r1) {
        // 0x80040034: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80040188;
    }
    // 0x80040034: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80040038: beq         $t9, $at, L_800402BC
    if (ctx->r25 == ctx->r1) {
        // 0x8004003C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_800402BC;
    }
    // 0x8004003C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80040040: b           L_80040370
    // 0x80040044: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
        goto L_80040370;
    // 0x80040044: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_80040048:
    // 0x80040048: jal         0x8001C9B8
    // 0x8004004C: nop

    func_8001C9B8(rdram, ctx);
        goto after_8;
    // 0x8004004C: nop

    after_8:
    // 0x80040050: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80040054: bgez        $v0, L_8004006C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80040058: cvt.s.w     $f8, $f4
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8004006C;
    }
    // 0x80040058: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8004005C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80040060: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80040064: nop

    // 0x80040068: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_8004006C:
    // 0x8004006C: lwc1        $f6, 0x54($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80040070: nop

    // 0x80040074: add.s       $f4, $f24, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f24.fl + ctx->f6.fl;
    // 0x80040078: jal         0x8001C9B8
    // 0x8004007C: add.s       $f24, $f8, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f24.fl = ctx->f8.fl + ctx->f4.fl;
    func_8001C9B8(rdram, ctx);
        goto after_9;
    // 0x8004007C: add.s       $f24, $f8, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f24.fl = ctx->f8.fl + ctx->f4.fl;
    after_9:
    // 0x80040080: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80040084: bgez        $v0, L_8004009C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80040088: cvt.s.w     $f6, $f10
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
            goto L_8004009C;
    }
    // 0x80040088: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8004008C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80040090: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80040094: nop

    // 0x80040098: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8004009C:
    // 0x8004009C: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x800400A0: nop

    // 0x800400A4: add.s       $f10, $f22, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f22.fl + ctx->f4.fl;
    // 0x800400A8: add.s       $f22, $f6, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x800400AC: sub.s       $f20, $f24, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f24.fl - ctx->f22.fl;
    // 0x800400B0: jal         0x8001DAB4
    // 0x800400B4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_8001DAB4(rdram, ctx);
        goto after_10;
    // 0x800400B4: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_10:
    // 0x800400B8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800400BC: lwc1        $f8, 0x73C0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X73C0);
    // 0x800400C0: nop

    // 0x800400C4: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x800400C8: nop

    // 0x800400CC: bc1f        L_800404A4
    if (!c1cs) {
        // 0x800400D0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800404A4;
    }
    // 0x800400D0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800400D4: jal         0x8001DAB4
    // 0x800400D8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_8001DAB4(rdram, ctx);
        goto after_11;
    // 0x800400D8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_11:
    // 0x800400DC: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800400E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800400E4: nop

    // 0x800400E8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x800400EC: nop

    // 0x800400F0: bc1f        L_80040120
    if (!c1cs) {
        // 0x800400F4: nop
    
            goto L_80040120;
    }
    // 0x800400F4: nop

    // 0x800400F8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800400FC: nop

    // 0x80040100: c.lt.s      $f6, $f20
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f6.fl < ctx->f20.fl;
    // 0x80040104: nop

    // 0x80040108: bc1f        L_80040118
    if (!c1cs) {
        // 0x8004010C: nop
    
            goto L_80040118;
    }
    // 0x8004010C: nop

    // 0x80040110: b           L_800404A4
    // 0x80040114: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800404A4;
    // 0x80040114: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80040118:
    // 0x80040118: b           L_800404A4
    // 0x8004011C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_800404A4;
    // 0x8004011C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80040120:
    // 0x80040120: jal         0x8001DAB4
    // 0x80040124: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_8001DAB4(rdram, ctx);
        goto after_12;
    // 0x80040124: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_12:
    // 0x80040128: lui         $at, 0x4090
    ctx->r1 = S32(0X4090 << 16);
    // 0x8004012C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80040130: nop

    // 0x80040134: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80040138: nop

    // 0x8004013C: bc1t        L_80040158
    if (c1cs) {
        // 0x80040140: nop
    
            goto L_80040158;
    }
    // 0x80040140: nop

    // 0x80040144: jal         0x8004974C
    // 0x80040148: nop

    func_8004974C(rdram, ctx);
        goto after_13;
    // 0x80040148: nop

    after_13:
    // 0x8004014C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80040150: bne         $v0, $at, L_80040180
    if (ctx->r2 != ctx->r1) {
        // 0x80040154: nop
    
            goto L_80040180;
    }
    // 0x80040154: nop

L_80040158:
    // 0x80040158: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8004015C: nop

    // 0x80040160: c.lt.s      $f8, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f8.fl < ctx->f20.fl;
    // 0x80040164: nop

    // 0x80040168: bc1f        L_80040178
    if (!c1cs) {
        // 0x8004016C: nop
    
            goto L_80040178;
    }
    // 0x8004016C: nop

    // 0x80040170: b           L_800404A4
    // 0x80040174: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800404A4;
    // 0x80040174: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80040178:
    // 0x80040178: b           L_800404A4
    // 0x8004017C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_800404A4;
    // 0x8004017C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80040180:
    // 0x80040180: b           L_800404A4
    // 0x80040184: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_800404A4;
    // 0x80040184: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80040188:
    // 0x80040188: jal         0x8001C9B8
    // 0x8004018C: swc1        $f14, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f14.u32l;
    func_8001C9B8(rdram, ctx);
        goto after_14;
    // 0x8004018C: swc1        $f14, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f14.u32l;
    after_14:
    // 0x80040190: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80040194: bgez        $v0, L_800401AC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80040198: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800401AC;
    }
    // 0x80040198: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8004019C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800401A0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800401A4: nop

    // 0x800401A8: add.s       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f10.fl;
L_800401AC:
    // 0x800401AC: add.s       $f8, $f24, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = ctx->f24.fl + ctx->f20.fl;
    // 0x800401B0: jal         0x8001C9B8
    // 0x800401B4: add.s       $f24, $f6, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = ctx->f6.fl + ctx->f8.fl;
    func_8001C9B8(rdram, ctx);
        goto after_15;
    // 0x800401B4: add.s       $f24, $f6, $f8
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f24.fl = ctx->f6.fl + ctx->f8.fl;
    after_15:
    // 0x800401B8: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x800401BC: lwc1        $f14, 0x78($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X78);
    // 0x800401C0: bgez        $v0, L_800401D8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800401C4: cvt.s.w     $f10, $f4
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
            goto L_800401D8;
    }
    // 0x800401C4: cvt.s.w     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800401C8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x800401CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800401D0: nop

    // 0x800401D4: add.s       $f10, $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f6.fl;
L_800401D8:
    // 0x800401D8: add.s       $f8, $f22, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f22.fl + ctx->f14.fl;
    // 0x800401DC: add.s       $f22, $f10, $f8
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f22.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x800401E0: sub.s       $f20, $f24, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f20.fl = ctx->f24.fl - ctx->f22.fl;
    // 0x800401E4: jal         0x8001DAB4
    // 0x800401E8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_8001DAB4(rdram, ctx);
        goto after_16;
    // 0x800401E8: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_16:
    // 0x800401EC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800401F0: lwc1        $f4, 0x73C4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X73C4);
    // 0x800401F4: nop

    // 0x800401F8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x800401FC: nop

    // 0x80040200: bc1f        L_800404A4
    if (!c1cs) {
        // 0x80040204: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800404A4;
    }
    // 0x80040204: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80040208: jal         0x8001DAB4
    // 0x8004020C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_8001DAB4(rdram, ctx);
        goto after_17;
    // 0x8004020C: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_17:
    // 0x80040210: lui         $at, 0x4108
    ctx->r1 = S32(0X4108 << 16);
    // 0x80040214: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80040218: nop

    // 0x8004021C: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80040220: nop

    // 0x80040224: bc1f        L_80040254
    if (!c1cs) {
        // 0x80040228: nop
    
            goto L_80040254;
    }
    // 0x80040228: nop

    // 0x8004022C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80040230: nop

    // 0x80040234: c.lt.s      $f10, $f20
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f10.fl < ctx->f20.fl;
    // 0x80040238: nop

    // 0x8004023C: bc1f        L_8004024C
    if (!c1cs) {
        // 0x80040240: nop
    
            goto L_8004024C;
    }
    // 0x80040240: nop

    // 0x80040244: b           L_800404A4
    // 0x80040248: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800404A4;
    // 0x80040248: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8004024C:
    // 0x8004024C: b           L_800404A4
    // 0x80040250: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_800404A4;
    // 0x80040250: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80040254:
    // 0x80040254: jal         0x8001DAB4
    // 0x80040258: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    func_8001DAB4(rdram, ctx);
        goto after_18;
    // 0x80040258: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_18:
    // 0x8004025C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80040260: lwc1        $f8, 0x73C8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X73C8);
    // 0x80040264: nop

    // 0x80040268: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x8004026C: nop

    // 0x80040270: bc1t        L_8004028C
    if (c1cs) {
        // 0x80040274: nop
    
            goto L_8004028C;
    }
    // 0x80040274: nop

    // 0x80040278: jal         0x8004974C
    // 0x8004027C: nop

    func_8004974C(rdram, ctx);
        goto after_19;
    // 0x8004027C: nop

    after_19:
    // 0x80040280: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80040284: bne         $v0, $at, L_800402B4
    if (ctx->r2 != ctx->r1) {
        // 0x80040288: nop
    
            goto L_800402B4;
    }
    // 0x80040288: nop

L_8004028C:
    // 0x8004028C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80040290: nop

    // 0x80040294: c.lt.s      $f4, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f4.fl < ctx->f20.fl;
    // 0x80040298: nop

    // 0x8004029C: bc1f        L_800402AC
    if (!c1cs) {
        // 0x800402A0: nop
    
            goto L_800402AC;
    }
    // 0x800402A0: nop

    // 0x800402A4: b           L_800404A4
    // 0x800402A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800404A4;
    // 0x800402A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800402AC:
    // 0x800402AC: b           L_800404A4
    // 0x800402B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_800404A4;
    // 0x800402B0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_800402B4:
    // 0x800402B4: b           L_800404A4
    // 0x800402B8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_800404A4;
    // 0x800402B8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_800402BC:
    // 0x800402BC: sll         $a2, $s3, 16
    ctx->r6 = S32(ctx->r19 << 16);
    // 0x800402C0: sra         $t0, $a2, 16
    ctx->r8 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800402C4: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x800402C8: jal         0x8003CAF0
    // 0x800402CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8003CAF0(rdram, ctx);
        goto after_20;
    // 0x800402CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_20:
    // 0x800402D0: addiu       $s0, $v0, 0x64
    ctx->r16 = ADD32(ctx->r2, 0X64);
    // 0x800402D4: sll         $a2, $s3, 16
    ctx->r6 = S32(ctx->r19 << 16);
    // 0x800402D8: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x800402DC: sra         $t3, $a2, 16
    ctx->r11 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800402E0: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    // 0x800402E4: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x800402E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800402EC: jal         0x8003CAF0
    // 0x800402F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8003CAF0(rdram, ctx);
        goto after_21;
    // 0x800402F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_21:
    // 0x800402F4: addiu       $v1, $v0, 0x64
    ctx->r3 = ADD32(ctx->r2, 0X64);
    // 0x800402F8: sll         $t5, $v1, 16
    ctx->r13 = S32(ctx->r3 << 16);
    // 0x800402FC: sra         $t6, $t5, 16
    ctx->r14 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80040300: subu        $t7, $s0, $t6
    ctx->r15 = SUB32(ctx->r16, ctx->r14);
    // 0x80040304: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80040308: sll         $s1, $v1, 16
    ctx->r17 = S32(ctx->r3 << 16);
    // 0x8004030C: sra         $t4, $s1, 16
    ctx->r12 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80040310: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x80040314: jal         0x8001DAB4
    // 0x80040318: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    func_8001DAB4(rdram, ctx);
        goto after_22;
    // 0x80040318: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_22:
    // 0x8004031C: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x80040320: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80040324: nop

    // 0x80040328: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x8004032C: nop

    // 0x80040330: bc1t        L_8004034C
    if (c1cs) {
        // 0x80040334: slt         $at, $s1, $s0
        ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_8004034C;
    }
    // 0x80040334: slt         $at, $s1, $s0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80040338: jal         0x8004974C
    // 0x8004033C: nop

    func_8004974C(rdram, ctx);
        goto after_23;
    // 0x8004033C: nop

    after_23:
    // 0x80040340: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80040344: bne         $v0, $at, L_80040364
    if (ctx->r2 != ctx->r1) {
        // 0x80040348: slt         $at, $s1, $s0
        ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_80040364;
    }
    // 0x80040348: slt         $at, $s1, $s0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
L_8004034C:
    // 0x8004034C: beq         $at, $zero, L_8004035C
    if (ctx->r1 == 0) {
        // 0x80040350: nop
    
            goto L_8004035C;
    }
    // 0x80040350: nop

    // 0x80040354: b           L_800404A4
    // 0x80040358: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800404A4;
    // 0x80040358: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004035C:
    // 0x8004035C: b           L_800404A4
    // 0x80040360: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_800404A4;
    // 0x80040360: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80040364:
    // 0x80040364: b           L_800404A4
    // 0x80040368: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_800404A4;
    // 0x80040368: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8004036C: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
L_80040370:
    // 0x80040370: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x80040374: mtc1        $zero, $f24
    ctx->f24.u32l = 0;
    // 0x80040378: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8004037C:
    // 0x8004037C: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80040380: addiu       $t8, $t8, 0x7564
    ctx->r24 = ADD32(ctx->r24, 0X7564);
    // 0x80040384: addu        $s1, $s0, $t8
    ctx->r17 = ADD32(ctx->r16, ctx->r24);
    // 0x80040388: sll         $a2, $s3, 16
    ctx->r6 = S32(ctx->r19 << 16);
    // 0x8004038C: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80040390: lb          $a1, 0x0($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X0);
    // 0x80040394: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80040398: jal         0x80042A3C
    // 0x8004039C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80042A3C(rdram, ctx);
        goto after_24;
    // 0x8004039C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_24:
    // 0x800403A0: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x800403A4: addiu       $t0, $t0, 0x7574
    ctx->r8 = ADD32(ctx->r8, 0X7574);
    // 0x800403A8: addu        $s2, $s0, $t0
    ctx->r18 = ADD32(ctx->r16, ctx->r8);
    // 0x800403AC: lb          $t1, 0x0($s2)
    ctx->r9 = MEM_B(ctx->r18, 0X0);
    // 0x800403B0: sll         $a2, $s3, 16
    ctx->r6 = S32(ctx->r19 << 16);
    // 0x800403B4: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800403B8: sra         $t3, $a2, 16
    ctx->r11 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800403BC: lb          $a1, 0x0($s1)
    ctx->r5 = MEM_B(ctx->r17, 0X0);
    // 0x800403C0: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x800403C4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800403C8: mflo        $t2
    ctx->r10 = lo;
    // 0x800403CC: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x800403D0: nop

    // 0x800403D4: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800403D8: jal         0x80042A3C
    // 0x800403DC: add.s       $f24, $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f4.fl;
    func_80042A3C(rdram, ctx);
        goto after_25;
    // 0x800403DC: add.s       $f24, $f24, $f4
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f24.fl = ctx->f24.fl + ctx->f4.fl;
    after_25:
    // 0x800403E0: lb          $v1, 0x0($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X0);
    // 0x800403E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800403E8: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800403EC: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x800403F0: sll         $t5, $s0, 16
    ctx->r13 = S32(ctx->r16 << 16);
    // 0x800403F4: cvt.s.w     $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    ctx->f4.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800403F8: sra         $s0, $t5, 16
    ctx->r16 = S32(SIGNED(ctx->r13) >> 16);
    // 0x800403FC: slti        $at, $s0, 0xD
    ctx->r1 = SIGNED(ctx->r16) < 0XD ? 1 : 0;
    // 0x80040400: add.s       $f20, $f20, $f4
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f4.fl;
    // 0x80040404: mflo        $t4
    ctx->r12 = lo;
    // 0x80040408: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x8004040C: nop

    // 0x80040410: cvt.s.w     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80040414: bne         $at, $zero, L_8004037C
    if (ctx->r1 != 0) {
        // 0x80040418: add.s       $f22, $f22, $f10
        CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f10.fl;
            goto L_8004037C;
    }
    // 0x80040418: add.s       $f22, $f22, $f10
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f22.fl = ctx->f22.fl + ctx->f10.fl;
    // 0x8004041C: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x80040420: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80040424: sub.s       $f6, $f24, $f22
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f6.fl = ctx->f24.fl - ctx->f22.fl;
    // 0x80040428: mul.s       $f8, $f10, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f20.fl);
    // 0x8004042C: nop

    // 0x80040430: div.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80040434: jal         0x8001DAB4
    // 0x80040438: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    func_8001DAB4(rdram, ctx);
        goto after_26;
    // 0x80040438: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    after_26:
    // 0x8004043C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80040440: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80040444: nop

    // 0x80040448: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x8004044C: nop

    // 0x80040450: bc1t        L_8004046C
    if (c1cs) {
        // 0x80040454: nop
    
            goto L_8004046C;
    }
    // 0x80040454: nop

    // 0x80040458: jal         0x8004974C
    // 0x8004045C: nop

    func_8004974C(rdram, ctx);
        goto after_27;
    // 0x8004045C: nop

    after_27:
    // 0x80040460: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80040464: bne         $v0, $at, L_80040498
    if (ctx->r2 != ctx->r1) {
        // 0x80040468: nop
    
            goto L_80040498;
    }
    // 0x80040468: nop

L_8004046C:
    // 0x8004046C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80040470: lwc1        $f6, 0x40($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80040474: nop

    // 0x80040478: c.lt.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl < ctx->f6.fl;
    // 0x8004047C: nop

    // 0x80040480: bc1f        L_80040490
    if (!c1cs) {
        // 0x80040484: nop
    
            goto L_80040490;
    }
    // 0x80040484: nop

    // 0x80040488: b           L_800404A4
    // 0x8004048C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800404A4;
    // 0x8004048C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80040490:
    // 0x80040490: b           L_800404A4
    // 0x80040494: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_800404A4;
    // 0x80040494: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80040498:
    // 0x80040498: b           L_800404A4
    // 0x8004049C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_800404A4;
    // 0x8004049C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x800404A0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800404A4:
    // 0x800404A4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800404A8: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x800404AC: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x800404B0: lwc1        $f23, 0x18($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800404B4: lwc1        $f22, 0x1C($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800404B8: lwc1        $f25, 0x20($sp)
    ctx->f_odd[(25 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800404BC: lwc1        $f24, 0x24($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800404C0: lw          $s0, 0x2C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X2C);
    // 0x800404C4: lw          $s1, 0x30($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X30);
    // 0x800404C8: lw          $s2, 0x34($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X34);
    // 0x800404CC: lw          $s3, 0x38($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X38);
    // 0x800404D0: jr          $ra
    // 0x800404D4: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x800404D4: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_800404D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800404D8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800404DC: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x800404E0: sll         $s4, $a0, 24
    ctx->r20 = S32(ctx->r4 << 24);
    // 0x800404E4: sra         $t6, $s4, 24
    ctx->r14 = S32(SIGNED(ctx->r20) >> 24);
    // 0x800404E8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800404EC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800404F0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800404F4: sll         $s1, $a2, 16
    ctx->r17 = S32(ctx->r6 << 16);
    // 0x800404F8: sll         $s5, $a1, 24
    ctx->r21 = S32(ctx->r5 << 24);
    // 0x800404FC: sll         $a0, $t6, 24
    ctx->r4 = S32(ctx->r14 << 24);
    // 0x80040500: sra         $t7, $s5, 24
    ctx->r15 = S32(SIGNED(ctx->r21) >> 24);
    // 0x80040504: sra         $t8, $s1, 16
    ctx->r24 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80040508: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8004050C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80040510: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80040514: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x80040518: or          $s5, $t7, $zero
    ctx->r21 = ctx->r15 | 0;
    // 0x8004051C: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x80040520: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80040524: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80040528: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8004052C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80040530: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80040534: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80040538: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8004053C: jal         0x80042BE0
    // 0x80040540: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80042BE0(rdram, ctx);
        goto after_0;
    // 0x80040540: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80040544: addiu       $s2, $zero, 0x5
    ctx->r18 = ADD32(0, 0X5);
    // 0x80040548: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004054C: sll         $a0, $s5, 24
    ctx->r4 = S32(ctx->r21 << 24);
    // 0x80040550: sra         $t2, $a0, 24
    ctx->r10 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80040554: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80040558: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004055C: mflo        $s7
    ctx->r23 = lo;
    // 0x80040560: sll         $t0, $s7, 16
    ctx->r8 = S32(ctx->r23 << 16);
    // 0x80040564: jal         0x80042BE0
    // 0x80040568: sra         $s7, $t0, 16
    ctx->r23 = S32(SIGNED(ctx->r8) >> 16);
    func_80042BE0(rdram, ctx);
        goto after_1;
    // 0x80040568: sra         $s7, $t0, 16
    ctx->r23 = S32(SIGNED(ctx->r8) >> 16);
    after_1:
    // 0x8004056C: multu       $v0, $s2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r18)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80040570: addiu       $s0, $zero, 0x6
    ctx->r16 = ADD32(0, 0X6);
    // 0x80040574: mflo        $s6
    ctx->r22 = lo;
    // 0x80040578: sll         $t3, $s6, 16
    ctx->r11 = S32(ctx->r22 << 16);
    // 0x8004057C: sra         $s6, $t3, 16
    ctx->r22 = S32(SIGNED(ctx->r11) >> 16);
L_80040580:
    // 0x80040580: sll         $a0, $s4, 24
    ctx->r4 = S32(ctx->r20 << 24);
    // 0x80040584: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x80040588: sll         $a3, $s1, 16
    ctx->r7 = S32(ctx->r17 << 16);
    // 0x8004058C: sra         $t7, $a3, 16
    ctx->r15 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80040590: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80040594: sra         $t5, $a0, 24
    ctx->r13 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80040598: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x8004059C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800405A0: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x800405A4: jal         0x80042320
    // 0x800405A8: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    func_80042320(rdram, ctx);
        goto after_2;
    // 0x800405A8: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    after_2:
    // 0x800405AC: addu        $s7, $s7, $v0
    ctx->r23 = ADD32(ctx->r23, ctx->r2);
    // 0x800405B0: sll         $a0, $s5, 24
    ctx->r4 = S32(ctx->r21 << 24);
    // 0x800405B4: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x800405B8: sll         $a3, $s1, 16
    ctx->r7 = S32(ctx->r17 << 16);
    // 0x800405BC: sll         $t8, $s7, 16
    ctx->r24 = S32(ctx->r23 << 16);
    // 0x800405C0: sra         $t2, $a3, 16
    ctx->r10 = S32(SIGNED(ctx->r7) >> 16);
    // 0x800405C4: sra         $t1, $a1, 24
    ctx->r9 = S32(SIGNED(ctx->r5) >> 24);
    // 0x800405C8: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800405CC: sra         $s7, $t8, 16
    ctx->r23 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800405D0: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x800405D4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x800405D8: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x800405DC: jal         0x80042320
    // 0x800405E0: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    func_80042320(rdram, ctx);
        goto after_3;
    // 0x800405E0: addiu       $a2, $zero, 0x81
    ctx->r6 = ADD32(0, 0X81);
    after_3:
    // 0x800405E4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800405E8: sll         $t5, $s0, 24
    ctx->r13 = S32(ctx->r16 << 24);
    // 0x800405EC: sra         $s0, $t5, 24
    ctx->r16 = S32(SIGNED(ctx->r13) >> 24);
    // 0x800405F0: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x800405F4: slti        $at, $s0, 0xB
    ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
    // 0x800405F8: sll         $t3, $s6, 16
    ctx->r11 = S32(ctx->r22 << 16);
    // 0x800405FC: bne         $at, $zero, L_80040580
    if (ctx->r1 != 0) {
        // 0x80040600: sra         $s6, $t3, 16
        ctx->r22 = S32(SIGNED(ctx->r11) >> 16);
            goto L_80040580;
    }
    // 0x80040600: sra         $s6, $t3, 16
    ctx->r22 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80040604: sll         $a0, $s4, 24
    ctx->r4 = S32(ctx->r20 << 24);
    // 0x80040608: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8004060C: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80040610: jal         0x80042BE0
    // 0x80040614: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80042BE0(rdram, ctx);
        goto after_4;
    // 0x80040614: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80040618: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x8004061C: sll         $a0, $s5, 24
    ctx->r4 = S32(ctx->r21 << 24);
    // 0x80040620: sll         $t8, $s3, 18
    ctx->r24 = S32(ctx->r19 << 18);
    // 0x80040624: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80040628: sra         $s3, $t8, 16
    ctx->r19 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8004062C: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80040630: jal         0x80042BE0
    // 0x80040634: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80042BE0(rdram, ctx);
        goto after_5;
    // 0x80040634: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80040638: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8004063C: sll         $t1, $s2, 18
    ctx->r9 = S32(ctx->r18 << 18);
    // 0x80040640: sra         $s2, $t1, 16
    ctx->r18 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80040644: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80040648:
    // 0x80040648: sll         $a0, $s4, 24
    ctx->r4 = S32(ctx->r20 << 24);
    // 0x8004064C: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x80040650: sll         $a3, $s1, 16
    ctx->r7 = S32(ctx->r17 << 16);
    // 0x80040654: sra         $t5, $a3, 16
    ctx->r13 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80040658: sra         $t4, $a1, 24
    ctx->r12 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8004065C: sra         $t3, $a0, 24
    ctx->r11 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80040660: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80040664: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x80040668: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x8004066C: jal         0x80042320
    // 0x80040670: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    func_80042320(rdram, ctx);
        goto after_6;
    // 0x80040670: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    after_6:
    // 0x80040674: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
    // 0x80040678: sll         $a0, $s5, 24
    ctx->r4 = S32(ctx->r21 << 24);
    // 0x8004067C: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x80040680: sll         $a3, $s1, 16
    ctx->r7 = S32(ctx->r17 << 16);
    // 0x80040684: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x80040688: sra         $t0, $a3, 16
    ctx->r8 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8004068C: sra         $t9, $a1, 24
    ctx->r25 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80040690: sra         $t8, $a0, 24
    ctx->r24 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80040694: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80040698: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8004069C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x800406A0: or          $a3, $t0, $zero
    ctx->r7 = ctx->r8 | 0;
    // 0x800406A4: jal         0x80042320
    // 0x800406A8: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    func_80042320(rdram, ctx);
        goto after_7;
    // 0x800406A8: addiu       $a2, $zero, 0x82
    ctx->r6 = ADD32(0, 0X82);
    after_7:
    // 0x800406AC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800406B0: sll         $t3, $s0, 24
    ctx->r11 = S32(ctx->r16 << 24);
    // 0x800406B4: sra         $s0, $t3, 24
    ctx->r16 = S32(SIGNED(ctx->r11) >> 24);
    // 0x800406B8: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x800406BC: slti        $at, $s0, 0x6
    ctx->r1 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
    // 0x800406C0: sll         $t1, $s2, 16
    ctx->r9 = S32(ctx->r18 << 16);
    // 0x800406C4: bne         $at, $zero, L_80040648
    if (ctx->r1 != 0) {
        // 0x800406C8: sra         $s2, $t1, 16
        ctx->r18 = S32(SIGNED(ctx->r9) >> 16);
            goto L_80040648;
    }
    // 0x800406C8: sra         $s2, $t1, 16
    ctx->r18 = S32(SIGNED(ctx->r9) >> 16);
    // 0x800406CC: jal         0x8001C994
    // 0x800406D0: nop

    func_8001C994(rdram, ctx);
        goto after_8;
    // 0x800406D0: nop

    after_8:
    // 0x800406D4: beq         $v0, $zero, L_80040708
    if (ctx->r2 == 0) {
        // 0x800406D8: subu        $t6, $s7, $s2
        ctx->r14 = SUB32(ctx->r23, ctx->r18);
            goto L_80040708;
    }
    // 0x800406D8: subu        $t6, $s7, $s2
    ctx->r14 = SUB32(ctx->r23, ctx->r18);
    // 0x800406DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800406E0: beq         $v0, $at, L_80040728
    if (ctx->r2 == ctx->r1) {
        // 0x800406E4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80040728;
    }
    // 0x800406E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800406E8: beq         $v0, $at, L_80040754
    if (ctx->r2 == ctx->r1) {
        // 0x800406EC: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_80040754;
    }
    // 0x800406EC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x800406F0: jal         0x8001C970
    // 0x800406F4: nop

    func_8001C970(rdram, ctx);
        goto after_9;
    // 0x800406F4: nop

    after_9:
    // 0x800406F8: sll         $v1, $v0, 24
    ctx->r3 = S32(ctx->r2 << 24);
    // 0x800406FC: sra         $t5, $v1, 24
    ctx->r13 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80040700: b           L_80040774
    // 0x80040704: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
        goto L_80040774;
    // 0x80040704: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_80040708:
    // 0x80040708: blez        $t6, L_80040720
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8004070C: subu        $t7, $s6, $s3
        ctx->r15 = SUB32(ctx->r22, ctx->r19);
            goto L_80040720;
    }
    // 0x8004070C: subu        $t7, $s6, $s3
    ctx->r15 = SUB32(ctx->r22, ctx->r19);
    // 0x80040710: bgez        $t7, L_80040720
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80040714: nop
    
            goto L_80040720;
    }
    // 0x80040714: nop

    // 0x80040718: b           L_80040774
    // 0x8004071C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_80040774;
    // 0x8004071C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80040720:
    // 0x80040720: b           L_80040774
    // 0x80040724: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80040774;
    // 0x80040724: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80040728:
    // 0x80040728: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8004072C: div         $zero, $s7, $at
    lo = S32(S64(S32(ctx->r23)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r23)) % S64(S32(ctx->r1)));
    // 0x80040730: mflo        $t8
    ctx->r24 = lo;
    // 0x80040734: slti        $at, $t8, 0x33
    ctx->r1 = SIGNED(ctx->r24) < 0X33 ? 1 : 0;
    // 0x80040738: bne         $at, $zero, L_80040748
    if (ctx->r1 != 0) {
        // 0x8004073C: nop
    
            goto L_80040748;
    }
    // 0x8004073C: nop

    // 0x80040740: b           L_80040774
    // 0x80040744: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_80040774;
    // 0x80040744: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80040748:
    // 0x80040748: b           L_80040774
    // 0x8004074C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80040774;
    // 0x8004074C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80040750: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
L_80040754:
    // 0x80040754: div         $zero, $s3, $at
    lo = S32(S64(S32(ctx->r19)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r19)) % S64(S32(ctx->r1)));
    // 0x80040758: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8004075C: mflo        $t9
    ctx->r25 = lo;
    // 0x80040760: slti        $at, $t9, 0x32
    ctx->r1 = SIGNED(ctx->r25) < 0X32 ? 1 : 0;
    // 0x80040764: beq         $at, $zero, L_80040774
    if (ctx->r1 == 0) {
        // 0x80040768: nop
    
            goto L_80040774;
    }
    // 0x80040768: nop

    // 0x8004076C: b           L_80040774
    // 0x80040770: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_80040774;
    // 0x80040770: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80040774:
    // 0x80040774: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80040778: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8004077C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80040780: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80040784: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80040788: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8004078C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80040790: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80040794: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80040798: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8004079C: jr          $ra
    // 0x800407A0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x800407A0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_800407A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800407A4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x800407A8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x800407AC: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x800407B0: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x800407B4: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800407B8: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x800407BC: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x800407C0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x800407C4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x800407C8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800407CC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800407D0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800407D4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800407D8: jal         0x8003EC2C
    // 0x800407DC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    func_8003EC2C(rdram, ctx);
        goto after_0;
    // 0x800407DC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x800407E0: lh          $a1, 0x2($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X2);
    // 0x800407E4: lui         $s7, 0x802C
    ctx->r23 = S32(0X802C << 16);
    // 0x800407E8: lui         $s6, 0x801B
    ctx->r22 = S32(0X801B << 16);
    // 0x800407EC: addiu       $s6, $s6, 0x3600
    ctx->r22 = ADD32(ctx->r22, 0X3600);
    // 0x800407F0: addiu       $s7, $s7, 0x3944
    ctx->r23 = ADD32(ctx->r23, 0X3944);
    // 0x800407F4: sh          $zero, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = 0;
    // 0x800407F8: sh          $a1, 0x64($sp)
    MEM_H(0X64, ctx->r29) = ctx->r5;
L_800407FC:
    // 0x800407FC: lh          $v1, 0x5E($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X5E);
    // 0x80040800: lh          $a1, 0x64($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X64);
    // 0x80040804: sll         $s4, $v1, 24
    ctx->r20 = S32(ctx->r3 << 24);
    // 0x80040808: sra         $t8, $s4, 24
    ctx->r24 = S32(SIGNED(ctx->r20) >> 24);
    // 0x8004080C: sll         $a0, $t8, 24
    ctx->r4 = S32(ctx->r24 << 24);
    // 0x80040810: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80040814: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80040818: or          $s4, $t8, $zero
    ctx->r20 = ctx->r24 | 0;
    // 0x8004081C: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80040820: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80040824: jal         0x80040E94
    // 0x80040828: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    func_80040E94(rdram, ctx);
        goto after_1;
    // 0x80040828: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    after_1:
    // 0x8004082C: lh          $t0, 0x5E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X5E);
    // 0x80040830: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80040834: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80040838: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8004083C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80040840: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80040844: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80040848: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8004084C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80040850: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80040854: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80040858: addiu       $t2, $t2, -0x2CF0
    ctx->r10 = ADD32(ctx->r10, -0X2CF0);
    // 0x8004085C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80040860: sw          $t3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r11;
    // 0x80040864: lhu         $v0, 0xA($t3)
    ctx->r2 = MEM_HU(ctx->r11, 0XA);
    // 0x80040868: nop

    // 0x8004086C: slti        $at, $v0, 0x3
    ctx->r1 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80040870: beq         $at, $zero, L_80040898
    if (ctx->r1 == 0) {
        // 0x80040874: slti        $at, $v0, 0x5
        ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
            goto L_80040898;
    }
    // 0x80040874: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x80040878: jal         0x8001C9DC
    // 0x8004087C: nop

    func_8001C9DC(rdram, ctx);
        goto after_2;
    // 0x8004087C: nop

    after_2:
    // 0x80040880: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x80040884: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80040888: lb          $s0, 0x75B0($s0)
    ctx->r16 = MEM_B(ctx->r16, 0X75B0);
    // 0x8004088C: b           L_800408D8
    // 0x80040890: lh          $t4, 0x5E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X5E);
        goto L_800408D8;
    // 0x80040890: lh          $t4, 0x5E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X5E);
    // 0x80040894: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
L_80040898:
    // 0x80040898: beq         $at, $zero, L_800408BC
    if (ctx->r1 == 0) {
        // 0x8004089C: nop
    
            goto L_800408BC;
    }
    // 0x8004089C: nop

    // 0x800408A0: jal         0x8001CA74
    // 0x800408A4: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_8001CA74(rdram, ctx);
        goto after_3;
    // 0x800408A4: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_3:
    // 0x800408A8: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x800408AC: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x800408B0: lb          $s0, 0x75B0($s0)
    ctx->r16 = MEM_B(ctx->r16, 0X75B0);
    // 0x800408B4: b           L_800408D8
    // 0x800408B8: lh          $t4, 0x5E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X5E);
        goto L_800408D8;
    // 0x800408B8: lh          $t4, 0x5E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X5E);
L_800408BC:
    // 0x800408BC: jal         0x8001CA74
    // 0x800408C0: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_8001CA74(rdram, ctx);
        goto after_4;
    // 0x800408C0: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_4:
    // 0x800408C4: lui         $s0, 0x800D
    ctx->r16 = S32(0X800D << 16);
    // 0x800408C8: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x800408CC: lb          $s0, 0x75B0($s0)
    ctx->r16 = MEM_B(ctx->r16, 0X75B0);
    // 0x800408D0: nop

    // 0x800408D4: lh          $t4, 0x5E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X5E);
L_800408D8:
    // 0x800408D8: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800408DC: bne         $t4, $zero, L_800408EC
    if (ctx->r12 != 0) {
        // 0x800408E0: nop
    
            goto L_800408EC;
    }
    // 0x800408E0: nop

    // 0x800408E4: b           L_800408F8
    // 0x800408E8: sh          $zero, 0x58($sp)
    MEM_H(0X58, ctx->r29) = 0;
        goto L_800408F8;
    // 0x800408E8: sh          $zero, 0x58($sp)
    MEM_H(0X58, ctx->r29) = 0;
L_800408EC:
    // 0x800408EC: lhu         $t5, -0x2CE6($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X2CE6);
    // 0x800408F0: nop

    // 0x800408F4: sh          $t5, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r13;
L_800408F8:
    // 0x800408F8: jal         0x8001CA74
    // 0x800408FC: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    func_8001CA74(rdram, ctx);
        goto after_5;
    // 0x800408FC: addiu       $a0, $zero, 0x12C
    ctx->r4 = ADD32(0, 0X12C);
    after_5:
    // 0x80040900: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x80040904: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x80040908: sh          $t6, 0x0($s7)
    MEM_H(0X0, ctx->r23) = ctx->r14;
    // 0x8004090C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80040910: sh          $zero, 0xB74($at)
    MEM_H(0XB74, ctx->r1) = 0;
    // 0x80040914: lhu         $t8, 0xA($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0XA);
    // 0x80040918: addiu       $s3, $s0, 0x1
    ctx->r19 = ADD32(ctx->r16, 0X1);
    // 0x8004091C: blez        $t8, L_80040ACC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80040920: andi        $t9, $s3, 0xFFFF
        ctx->r25 = ctx->r19 & 0XFFFF;
            goto L_80040ACC;
    }
    // 0x80040920: andi        $t9, $s3, 0xFFFF
    ctx->r25 = ctx->r19 & 0XFFFF;
    // 0x80040924: or          $s3, $t9, $zero
    ctx->r19 = ctx->r25 | 0;
L_80040928:
    // 0x80040928: jal         0x8001CA74
    // 0x8004092C: andi        $a0, $s3, 0xFFFF
    ctx->r4 = ctx->r19 & 0XFFFF;
    func_8001CA74(rdram, ctx);
        goto after_6;
    // 0x8004092C: andi        $a0, $s3, 0xFFFF
    ctx->r4 = ctx->r19 & 0XFFFF;
    after_6:
    // 0x80040930: addu        $t0, $s6, $v0
    ctx->r8 = ADD32(ctx->r22, ctx->r2);
    // 0x80040934: lbu         $s0, 0x0($t0)
    ctx->r16 = MEM_BU(ctx->r8, 0X0);
    // 0x80040938: nop

    // 0x8004093C: bne         $s2, $s0, L_80040954
    if (ctx->r18 != ctx->r16) {
        // 0x80040940: nop
    
            goto L_80040954;
    }
    // 0x80040940: nop

    // 0x80040944: jal         0x8001C994
    // 0x80040948: nop

    func_8001C994(rdram, ctx);
        goto after_7;
    // 0x80040948: nop

    after_7:
    // 0x8004094C: beq         $v0, $zero, L_80040964
    if (ctx->r2 == 0) {
        // 0x80040950: slti        $at, $s0, 0xB
        ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
            goto L_80040964;
    }
    // 0x80040950: slti        $at, $s0, 0xB
    ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
L_80040954:
    // 0x80040954: sll         $s2, $s0, 16
    ctx->r18 = S32(ctx->r16 << 16);
    // 0x80040958: sra         $t1, $s2, 16
    ctx->r9 = S32(SIGNED(ctx->r18) >> 16);
    // 0x8004095C: or          $s2, $t1, $zero
    ctx->r18 = ctx->r9 | 0;
    // 0x80040960: slti        $at, $s0, 0xB
    ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
L_80040964:
    // 0x80040964: beq         $at, $zero, L_80040928
    if (ctx->r1 == 0) {
        // 0x80040968: nop
    
            goto L_80040928;
    }
    // 0x80040968: nop

    // 0x8004096C: sll         $s1, $s0, 24
    ctx->r17 = S32(ctx->r16 << 24);
    // 0x80040970: sra         $t3, $s1, 24
    ctx->r11 = S32(SIGNED(ctx->r17) >> 24);
    // 0x80040974: sll         $a1, $t3, 24
    ctx->r5 = S32(ctx->r11 << 24);
    // 0x80040978: sll         $a0, $s4, 24
    ctx->r4 = S32(ctx->r20 << 24);
    // 0x8004097C: sra         $t2, $a0, 24
    ctx->r10 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80040980: sra         $t4, $a1, 24
    ctx->r12 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80040984: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x80040988: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004098C: jal         0x8003D080
    // 0x80040990: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    func_8003D080(rdram, ctx);
        goto after_8;
    // 0x80040990: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
    after_8:
    // 0x80040994: beq         $v0, $zero, L_80040928
    if (ctx->r2 == 0) {
        // 0x80040998: nop
    
            goto L_80040928;
    }
    // 0x80040998: nop

    // 0x8004099C: jal         0x8001C9DC
    // 0x800409A0: nop

    func_8001C9DC(rdram, ctx);
        goto after_9;
    // 0x800409A0: nop

    after_9:
    // 0x800409A4: jal         0x8001C994
    // 0x800409A8: andi        $s0, $v0, 0xFFFF
    ctx->r16 = ctx->r2 & 0XFFFF;
    func_8001C994(rdram, ctx);
        goto after_10;
    // 0x800409A8: andi        $s0, $v0, 0xFFFF
    ctx->r16 = ctx->r2 & 0XFFFF;
    after_10:
    // 0x800409AC: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x800409B0: subu        $t5, $t5, $s0
    ctx->r13 = SUB32(ctx->r13, ctx->r16);
    // 0x800409B4: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
    // 0x800409B8: div         $zero, $t5, $t6
    lo = S32(S64(S32(ctx->r13)) / S64(S32(ctx->r14))); hi = S32(S64(S32(ctx->r13)) % S64(S32(ctx->r14)));
    // 0x800409BC: bne         $t6, $zero, L_800409C8
    if (ctx->r14 != 0) {
        // 0x800409C0: nop
    
            goto L_800409C8;
    }
    // 0x800409C0: nop

    // 0x800409C4: break       7
    do_break(2147748292);
L_800409C8:
    // 0x800409C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800409CC: bne         $t6, $at, L_800409E0
    if (ctx->r14 != ctx->r1) {
        // 0x800409D0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800409E0;
    }
    // 0x800409D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800409D4: bne         $t5, $at, L_800409E0
    if (ctx->r13 != ctx->r1) {
        // 0x800409D8: nop
    
            goto L_800409E0;
    }
    // 0x800409D8: nop

    // 0x800409DC: break       6
    do_break(2147748316);
L_800409E0:
    // 0x800409E0: mflo        $s5
    ctx->r21 = lo;
    // 0x800409E4: sll         $t7, $s5, 16
    ctx->r15 = S32(ctx->r21 << 16);
    // 0x800409E8: jal         0x8001C9DC
    // 0x800409EC: sra         $s5, $t7, 16
    ctx->r21 = S32(SIGNED(ctx->r15) >> 16);
    func_8001C9DC(rdram, ctx);
        goto after_11;
    // 0x800409EC: sra         $s5, $t7, 16
    ctx->r21 = S32(SIGNED(ctx->r15) >> 16);
    after_11:
    // 0x800409F0: bne         $v0, $zero, L_80040A00
    if (ctx->r2 != 0) {
        // 0x800409F4: sll         $a0, $s4, 24
        ctx->r4 = S32(ctx->r20 << 24);
            goto L_80040A00;
    }
    // 0x800409F4: sll         $a0, $s4, 24
    ctx->r4 = S32(ctx->r20 << 24);
    // 0x800409F8: b           L_80040A04
    // 0x800409FC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_80040A04;
    // 0x800409FC: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80040A00:
    // 0x80040A00: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80040A04:
    // 0x80040A04: lh          $t3, 0x58($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X58);
    // 0x80040A08: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x80040A0C: sll         $a2, $s0, 24
    ctx->r6 = S32(ctx->r16 << 24);
    // 0x80040A10: sll         $a3, $s5, 16
    ctx->r7 = S32(ctx->r21 << 16);
    // 0x80040A14: sra         $t2, $a3, 16
    ctx->r10 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80040A18: sra         $t1, $a2, 24
    ctx->r9 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80040A1C: sra         $t0, $a1, 24
    ctx->r8 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80040A20: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80040A24: addu        $t4, $t3, $fp
    ctx->r12 = ADD32(ctx->r11, ctx->r30);
    // 0x80040A28: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80040A2C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80040A30: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80040A34: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x80040A38: jal         0x80040BC0
    // 0x80040A3C: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    func_80040BC0(rdram, ctx);
        goto after_12;
    // 0x80040A3C: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    after_12:
    // 0x80040A40: bne         $s0, $zero, L_80040A54
    if (ctx->r16 != 0) {
        // 0x80040A44: nop
    
            goto L_80040A54;
    }
    // 0x80040A44: nop

    // 0x80040A48: lbu         $a0, 0x5F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X5F);
    // 0x80040A4C: jal         0x80049268
    // 0x80040A50: nop

    func_80049268(rdram, ctx);
        goto after_13;
    // 0x80040A50: nop

    after_13:
L_80040A54:
    // 0x80040A54: jal         0x8001CA74
    // 0x80040A58: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    func_8001CA74(rdram, ctx);
        goto after_14;
    // 0x80040A58: addiu       $a0, $zero, 0x3C
    ctx->r4 = ADD32(0, 0X3C);
    after_14:
    // 0x80040A5C: lhu         $t5, 0x0($s7)
    ctx->r13 = MEM_HU(ctx->r23, 0X0);
    // 0x80040A60: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x80040A64: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x80040A68: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80040A6C: andi        $v1, $t7, 0xFFFF
    ctx->r3 = ctx->r15 & 0XFFFF;
    // 0x80040A70: slti        $at, $v1, 0x12C
    ctx->r1 = SIGNED(ctx->r3) < 0X12C ? 1 : 0;
    // 0x80040A74: bne         $at, $zero, L_80040AB0
    if (ctx->r1 != 0) {
        // 0x80040A78: sh          $t7, 0x0($s7)
        MEM_H(0X0, ctx->r23) = ctx->r15;
            goto L_80040AB0;
    }
    // 0x80040A78: sh          $t7, 0x0($s7)
    MEM_H(0X0, ctx->r23) = ctx->r15;
    // 0x80040A7C: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80040A80: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80040A84: addiu       $t9, $v1, -0x12C
    ctx->r25 = ADD32(ctx->r3, -0X12C);
    // 0x80040A88: sh          $t8, 0xB74($at)
    MEM_H(0XB74, ctx->r1) = ctx->r24;
    // 0x80040A8C: andi        $v1, $t9, 0xFFFF
    ctx->r3 = ctx->r25 & 0XFFFF;
    // 0x80040A90: slti        $at, $v1, 0x12C
    ctx->r1 = SIGNED(ctx->r3) < 0X12C ? 1 : 0;
    // 0x80040A94: bne         $at, $zero, L_80040AB0
    if (ctx->r1 != 0) {
        // 0x80040A98: sh          $t9, 0x0($s7)
        MEM_H(0X0, ctx->r23) = ctx->r25;
            goto L_80040AB0;
    }
    // 0x80040A98: sh          $t9, 0x0($s7)
    MEM_H(0X0, ctx->r23) = ctx->r25;
    // 0x80040A9C: addiu       $t0, $v1, -0x12C
    ctx->r8 = ADD32(ctx->r3, -0X12C);
    // 0x80040AA0: sh          $t0, 0x0($s7)
    MEM_H(0X0, ctx->r23) = ctx->r8;
    // 0x80040AA4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80040AA8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80040AAC: sh          $t1, 0xB74($at)
    MEM_H(0XB74, ctx->r1) = ctx->r9;
L_80040AB0:
    // 0x80040AB0: lw          $t4, 0x4C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4C);
    // 0x80040AB4: sll         $t2, $fp, 16
    ctx->r10 = S32(ctx->r30 << 16);
    // 0x80040AB8: lhu         $t5, 0xA($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0XA);
    // 0x80040ABC: sra         $fp, $t2, 16
    ctx->r30 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80040AC0: slt         $at, $fp, $t5
    ctx->r1 = SIGNED(ctx->r30) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x80040AC4: bne         $at, $zero, L_80040928
    if (ctx->r1 != 0) {
        // 0x80040AC8: nop
    
            goto L_80040928;
    }
    // 0x80040AC8: nop

L_80040ACC:
    // 0x80040ACC: lh          $t6, 0x5E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X5E);
    // 0x80040AD0: nop

    // 0x80040AD4: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80040AD8: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x80040ADC: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80040AE0: slti        $at, $t9, 0x2
    ctx->r1 = SIGNED(ctx->r25) < 0X2 ? 1 : 0;
    // 0x80040AE4: bne         $at, $zero, L_800407FC
    if (ctx->r1 != 0) {
        // 0x80040AE8: sh          $t7, 0x5E($sp)
        MEM_H(0X5E, ctx->r29) = ctx->r15;
            goto L_800407FC;
    }
    // 0x80040AE8: sh          $t7, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r15;
    // 0x80040AEC: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80040AF0: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80040AF4: lhu         $t1, -0x2252($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X2252);
    // 0x80040AF8: lhu         $t0, -0x2CE6($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X2CE6);
    // 0x80040AFC: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80040B00: bne         $t0, $t1, L_80040B14
    if (ctx->r8 != ctx->r9) {
        // 0x80040B04: lui         $t3, 0x8012
        ctx->r11 = S32(0X8012 << 16);
            goto L_80040B14;
    }
    // 0x80040B04: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80040B08: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80040B0C: b           L_80040B28
    // 0x80040B10: sh          $t2, 0xB74($at)
    MEM_H(0XB74, ctx->r1) = ctx->r10;
        goto L_80040B28;
    // 0x80040B10: sh          $t2, 0xB74($at)
    MEM_H(0XB74, ctx->r1) = ctx->r10;
L_80040B14:
    // 0x80040B14: lhu         $t3, 0xB74($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB74);
    // 0x80040B18: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80040B1C: bgtz        $t3, L_80040B28
    if (SIGNED(ctx->r11) > 0) {
        // 0x80040B20: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_80040B28;
    }
    // 0x80040B20: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80040B24: sh          $t4, 0xB74($at)
    MEM_H(0XB74, ctx->r1) = ctx->r12;
L_80040B28:
    // 0x80040B28: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80040B2C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80040B30: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80040B34: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80040B38: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80040B3C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80040B40: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80040B44: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80040B48: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80040B4C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80040B50: jr          $ra
    // 0x80040B54: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x80040B54: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80040B58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040B58: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80040B5C: addiu       $v0, $v0, -0x2CF0
    ctx->r2 = ADD32(ctx->r2, -0X2CF0);
    // 0x80040B60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80040B64: lhu         $t4, 0xA9E($v0)
    ctx->r12 = MEM_HU(ctx->r2, 0XA9E);
    // 0x80040B68: lhu         $t5, 0xA($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0XA);
    // 0x80040B6C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80040B70: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x80040B74: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x80040B78: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80040B7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80040B80: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80040B84: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80040B88: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80040B8C: sll         $t8, $a1, 24
    ctx->r24 = S32(ctx->r5 << 24);
    // 0x80040B90: sll         $t0, $a2, 24
    ctx->r8 = S32(ctx->r6 << 24);
    // 0x80040B94: sll         $t2, $a3, 16
    ctx->r10 = S32(ctx->r7 << 16);
    // 0x80040B98: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80040B9C: sra         $a3, $t2, 16
    ctx->r7 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80040BA0: sra         $a2, $t0, 24
    ctx->r6 = S32(SIGNED(ctx->r8) >> 24);
    // 0x80040BA4: sra         $a1, $t8, 24
    ctx->r5 = S32(SIGNED(ctx->r24) >> 24);
    // 0x80040BA8: jal         0x80040BC0
    // 0x80040BAC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_80040BC0(rdram, ctx);
        goto after_0;
    // 0x80040BAC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x80040BB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80040BB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80040BB8: jr          $ra
    // 0x80040BBC: nop

    return;
    // 0x80040BBC: nop

;}
RECOMP_FUNC void func_80040BC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040BC0: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80040BC4: lb          $t1, -0x32A1($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X32A1);
    // 0x80040BC8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80040BCC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80040BD0: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80040BD4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80040BD8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80040BDC: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x80040BE0: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80040BE4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80040BE8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80040BEC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80040BF0: lh          $t5, 0x5A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X5A);
    // 0x80040BF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80040BF8: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x80040BFC: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x80040C00: sll         $s0, $a0, 24
    ctx->r16 = S32(ctx->r4 << 24);
    // 0x80040C04: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x80040C08: addiu       $t3, $t3, -0x2F80
    ctx->r11 = ADD32(ctx->r11, -0X2F80);
    // 0x80040C0C: sra         $t6, $s0, 24
    ctx->r14 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80040C10: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80040C14: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80040C18: sll         $t7, $a1, 24
    ctx->r15 = S32(ctx->r5 << 24);
    // 0x80040C1C: sll         $t9, $a2, 24
    ctx->r25 = S32(ctx->r6 << 24);
    // 0x80040C20: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x80040C24: slti        $at, $t5, 0x40
    ctx->r1 = SIGNED(ctx->r13) < 0X40 ? 1 : 0;
    // 0x80040C28: sra         $a2, $t9, 24
    ctx->r6 = S32(SIGNED(ctx->r25) >> 24);
    // 0x80040C2C: sra         $a1, $t7, 24
    ctx->r5 = S32(SIGNED(ctx->r15) >> 24);
    // 0x80040C30: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80040C34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80040C38: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80040C3C: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x80040C40: bne         $at, $zero, L_80040C50
    if (ctx->r1 != 0) {
        // 0x80040C44: sw          $t4, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r12;
            goto L_80040C50;
    }
    // 0x80040C44: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x80040C48: addiu       $t6, $zero, 0x3F
    ctx->r14 = ADD32(0, 0X3F);
    // 0x80040C4C: sh          $t6, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r14;
L_80040C50:
    // 0x80040C50: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x80040C54: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x80040C58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80040C5C: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x80040C60: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80040C64: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x80040C68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80040C6C: addu        $t7, $t7, $s0
    ctx->r15 = ADD32(ctx->r15, ctx->r16);
    // 0x80040C70: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80040C74: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80040C78: lhu         $t3, 0xB74($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0XB74);
    // 0x80040C7C: lh          $t0, 0x5A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X5A);
    // 0x80040C80: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x80040C84: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80040C88: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80040C8C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80040C90: addu        $t9, $v0, $a1
    ctx->r25 = ADD32(ctx->r2, ctx->r5);
    // 0x80040C94: addiu       $t2, $t2, 0xB88
    ctx->r10 = ADD32(ctx->r10, 0XB88);
    // 0x80040C98: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x80040C9C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80040CA0: lbu         $a3, 0x308($t9)
    ctx->r7 = MEM_BU(ctx->r25, 0X308);
    // 0x80040CA4: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x80040CA8: or          $t5, $s0, $t4
    ctx->r13 = ctx->r16 | ctx->r12;
    // 0x80040CAC: sb          $t5, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r13;
    // 0x80040CB0: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x80040CB4: lhu         $t6, 0x3944($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X3944);
    // 0x80040CB8: beq         $a2, $zero, L_80040CD8
    if (ctx->r6 == 0) {
        // 0x80040CBC: sh          $t6, 0x2($v1)
        MEM_H(0X2, ctx->r3) = ctx->r14;
            goto L_80040CD8;
    }
    // 0x80040CBC: sh          $t6, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r14;
    // 0x80040CC0: lbu         $t7, 0x83D($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X83D);
    // 0x80040CC4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x80040CC8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80040CCC: sb          $t8, 0x83D($v0)
    MEM_B(0X83D, ctx->r2) = ctx->r24;
    // 0x80040CD0: b           L_80040E84
    // 0x80040CD4: sb          $t9, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r25;
        goto L_80040E84;
    // 0x80040CD4: sb          $t9, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r25;
L_80040CD8:
    // 0x80040CD8: addiu       $a2, $v0, 0x838
    ctx->r6 = ADD32(ctx->r2, 0X838);
    // 0x80040CDC: sll         $t0, $a3, 1
    ctx->r8 = S32(ctx->r7 << 1);
    // 0x80040CE0: addu        $a0, $a2, $t0
    ctx->r4 = ADD32(ctx->r6, ctx->r8);
    // 0x80040CE4: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x80040CE8: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    // 0x80040CEC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80040CF0: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x80040CF4: jal         0x8001D8A8
    // 0x80040CF8: sh          $a3, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r7;
    func_8001D8A8(rdram, ctx);
        goto after_0;
    // 0x80040CF8: sh          $a3, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r7;
    after_0:
    // 0x80040CFC: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80040D00: lh          $a1, 0x56($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X56);
    // 0x80040D04: jal         0x8001D938
    // 0x80040D08: addiu       $a0, $a2, 0xA
    ctx->r4 = ADD32(ctx->r6, 0XA);
    func_8001D938(rdram, ctx);
        goto after_1;
    // 0x80040D08: addiu       $a0, $a2, 0xA
    ctx->r4 = ADD32(ctx->r6, 0XA);
    after_1:
    // 0x80040D0C: lh          $a0, 0x44($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X44);
    // 0x80040D10: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80040D14: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80040D18: jal         0x80039028
    // 0x80040D1C: sb          $a0, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r4;
    func_80039028(rdram, ctx);
        goto after_2;
    // 0x80040D1C: sb          $a0, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r4;
    after_2:
    // 0x80040D20: bne         $v0, $zero, L_80040E84
    if (ctx->r2 != 0) {
        // 0x80040D24: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80040E84;
    }
    // 0x80040D24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80040D28: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80040D2C: lh          $t4, 0x44($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X44);
    // 0x80040D30: addu        $t1, $v1, $s0
    ctx->r9 = ADD32(ctx->r3, ctx->r16);
    // 0x80040D34: lb          $t2, 0x7($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X7);
    // 0x80040D38: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80040D3C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80040D40: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80040D44: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80040D48: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80040D4C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80040D50: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80040D54: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80040D58: addu        $v0, $v1, $t3
    ctx->r2 = ADD32(ctx->r3, ctx->r11);
    // 0x80040D5C: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x80040D60: addiu       $v0, $v0, 0x4AC
    ctx->r2 = ADD32(ctx->r2, 0X4AC);
    // 0x80040D64: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x80040D68: addu        $a0, $v0, $t5
    ctx->r4 = ADD32(ctx->r2, ctx->r13);
    // 0x80040D6C: jal         0x8001D938
    // 0x80040D70: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8001D938(rdram, ctx);
        goto after_3;
    // 0x80040D70: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_3:
    // 0x80040D74: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x80040D78: jal         0x8003CC44
    // 0x80040D7C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    func_8003CC44(rdram, ctx);
        goto after_4;
    // 0x80040D7C: sw          $a0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r4;
    after_4:
    // 0x80040D80: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80040D84: bltz        $v0, L_80040E88
    if (SIGNED(ctx->r2) < 0) {
        // 0x80040D88: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80040E88;
    }
    // 0x80040D88: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80040D8C: jal         0x8003CC44
    // 0x80040D90: nop

    func_8003CC44(rdram, ctx);
        goto after_5;
    // 0x80040D90: nop

    after_5:
    // 0x80040D94: sll         $t7, $v0, 3
    ctx->r15 = S32(ctx->r2 << 3);
    // 0x80040D98: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x80040D9C: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x80040DA0: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80040DA4: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x80040DA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80040DAC: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x80040DB0: addiu       $v1, $v1, 0x2C
    ctx->r3 = ADD32(ctx->r3, 0X2C);
    // 0x80040DB4: jal         0x80048920
    // 0x80040DB8: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    func_80048920(rdram, ctx);
        goto after_6;
    // 0x80040DB8: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    after_6:
    // 0x80040DBC: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80040DC0: xori        $t9, $s0, 0x1
    ctx->r25 = ctx->r16 ^ 0X1;
    // 0x80040DC4: lhu         $t8, 0x1C($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X1C);
    // 0x80040DC8: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x80040DCC: slt         $at, $v0, $t8
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80040DD0: beq         $at, $zero, L_80040E20
    if (ctx->r1 == 0) {
        // 0x80040DD4: sra         $t1, $t0, 16
        ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
            goto L_80040E20;
    }
    // 0x80040DD4: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80040DD8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80040DDC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80040DE0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80040DE4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80040DE8: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x80040DEC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80040DF0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80040DF4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80040DF8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80040DFC: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80040E00: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80040E04: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80040E08: lbu         $t3, -0x2CF0($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X2CF0);
    // 0x80040E0C: nop

    // 0x80040E10: sb          $t3, 0x1E($v1)
    MEM_B(0X1E, ctx->r3) = ctx->r11;
    // 0x80040E14: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80040E18: nop

    // 0x80040E1C: sb          $t4, 0x1B($v1)
    MEM_B(0X1B, ctx->r3) = ctx->r12;
L_80040E20:
    // 0x80040E20: lh          $v0, 0x56($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X56);
    // 0x80040E24: lhu         $t5, 0x22($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X22);
    // 0x80040E28: xori        $t6, $s0, 0x1
    ctx->r14 = ctx->r16 ^ 0X1;
    // 0x80040E2C: slt         $at, $t5, $v0
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80040E30: beq         $at, $zero, L_80040E84
    if (ctx->r1 == 0) {
        // 0x80040E34: sll         $t7, $t6, 16
        ctx->r15 = S32(ctx->r14 << 16);
            goto L_80040E84;
    }
    // 0x80040E34: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x80040E38: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80040E3C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80040E40: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80040E44: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80040E48: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80040E4C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80040E50: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80040E54: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80040E58: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80040E5C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80040E60: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80040E64: sh          $v0, 0x22($v1)
    MEM_H(0X22, ctx->r3) = ctx->r2;
    // 0x80040E68: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80040E6C: lbu         $t0, -0x2CF0($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X2CF0);
    // 0x80040E70: nop

    // 0x80040E74: sb          $t0, 0x24($v1)
    MEM_B(0X24, ctx->r3) = ctx->r8;
    // 0x80040E78: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80040E7C: nop

    // 0x80040E80: sb          $t1, 0x20($v1)
    MEM_B(0X20, ctx->r3) = ctx->r9;
L_80040E84:
    // 0x80040E84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80040E88:
    // 0x80040E88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80040E8C: jr          $ra
    // 0x80040E90: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80040E90: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80040E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040E94: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80040E98: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80040E9C: sll         $s2, $a0, 24
    ctx->r18 = S32(ctx->r4 << 24);
    // 0x80040EA0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80040EA4: sll         $s3, $a1, 16
    ctx->r19 = S32(ctx->r5 << 16);
    // 0x80040EA8: sra         $t6, $s2, 24
    ctx->r14 = S32(SIGNED(ctx->r18) >> 24);
    // 0x80040EAC: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80040EB0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80040EB4: sra         $t7, $s3, 16
    ctx->r15 = S32(SIGNED(ctx->r19) >> 16);
    // 0x80040EB8: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80040EBC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80040EC0: lui         $s4, 0x800D
    ctx->r20 = S32(0X800D << 16);
    // 0x80040EC4: lui         $s5, 0x800D
    ctx->r21 = S32(0X800D << 16);
    // 0x80040EC8: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
    // 0x80040ECC: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x80040ED0: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80040ED4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80040ED8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80040EDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80040EE0: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80040EE4: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x80040EE8: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80040EEC: addiu       $s5, $s5, 0x7590
    ctx->r21 = ADD32(ctx->r21, 0X7590);
    // 0x80040EF0: addiu       $s4, $s4, 0x7584
    ctx->r20 = ADD32(ctx->r20, 0X7584);
    // 0x80040EF4: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x80040EF8: andi        $s7, $t6, 0xFF
    ctx->r23 = ctx->r14 & 0XFF;
L_80040EFC:
    // 0x80040EFC: sll         $s1, $s6, 24
    ctx->r17 = S32(ctx->r22 << 24);
    // 0x80040F00: sra         $t9, $s1, 24
    ctx->r25 = S32(SIGNED(ctx->r17) >> 24);
    // 0x80040F04: sll         $a1, $t9, 24
    ctx->r5 = S32(ctx->r25 << 24);
    // 0x80040F08: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x80040F0C: sra         $t8, $a0, 24
    ctx->r24 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80040F10: sra         $t1, $a1, 24
    ctx->r9 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80040F14: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x80040F18: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80040F1C: jal         0x8003D080
    // 0x80040F20: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    func_8003D080(rdram, ctx);
        goto after_0;
    // 0x80040F20: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    after_0:
    // 0x80040F24: bne         $v0, $zero, L_80040F50
    if (ctx->r2 != 0) {
        // 0x80040F28: lui         $t3, 0x801B
        ctx->r11 = S32(0X801B << 16);
            goto L_80040F50;
    }
    // 0x80040F28: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x80040F2C: addiu       $t3, $t3, -0x4280
    ctx->r11 = ADD32(ctx->r11, -0X4280);
    // 0x80040F30: sll         $t2, $s6, 3
    ctx->r10 = S32(ctx->r22 << 3);
    // 0x80040F34: addu        $s0, $t2, $t3
    ctx->r16 = ADD32(ctx->r10, ctx->r11);
    // 0x80040F38: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
    // 0x80040F3C: addiu       $t5, $zero, 0x0
    ctx->r13 = ADD32(0, 0X0);
    // 0x80040F40: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x80040F44: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x80040F48: b           L_8004109C
    // 0x80040F4C: andi        $s1, $s6, 0xFF
    ctx->r17 = ctx->r22 & 0XFF;
        goto L_8004109C;
    // 0x80040F4C: andi        $s1, $s6, 0xFF
    ctx->r17 = ctx->r22 & 0XFF;
L_80040F50:
    // 0x80040F50: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x80040F54: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x80040F58: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    // 0x80040F5C: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x80040F60: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80040F64:
    // 0x80040F64: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x80040F68: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x80040F6C: addu        $t1, $s4, $s0
    ctx->r9 = ADD32(ctx->r20, ctx->r16);
    // 0x80040F70: sll         $a3, $s3, 16
    ctx->r7 = S32(ctx->r19 << 16);
    // 0x80040F74: sra         $t2, $a3, 16
    ctx->r10 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80040F78: lbu         $a2, 0x0($t1)
    ctx->r6 = MEM_BU(ctx->r9, 0X0);
    // 0x80040F7C: sra         $t9, $a1, 24
    ctx->r25 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80040F80: sra         $t8, $a0, 24
    ctx->r24 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80040F84: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80040F88: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x80040F8C: jal         0x80042610
    // 0x80040F90: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    func_80042610(rdram, ctx);
        goto after_1;
    // 0x80040F90: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    after_1:
    // 0x80040F94: addu        $t3, $s5, $s0
    ctx->r11 = ADD32(ctx->r21, ctx->r16);
    // 0x80040F98: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x80040F9C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80040FA0: multu       $t4, $v0
    result = U64(U32(ctx->r12)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80040FA4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80040FA8: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80040FAC: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x80040FB0: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80040FB4: mflo        $t5
    ctx->r13 = lo;
    // 0x80040FB8: addu        $t3, $t5, $t9
    ctx->r11 = ADD32(ctx->r13, ctx->r25);
    // 0x80040FBC: sra         $t6, $t5, 31
    ctx->r14 = S32(SIGNED(ctx->r13) >> 31);
    // 0x80040FC0: sltu        $at, $t3, $t9
    ctx->r1 = ctx->r11 < ctx->r25 ? 1 : 0;
    // 0x80040FC4: addu        $t2, $at, $t6
    ctx->r10 = ADD32(ctx->r1, ctx->r14);
    // 0x80040FC8: slti        $at, $s0, 0x9
    ctx->r1 = SIGNED(ctx->r16) < 0X9 ? 1 : 0;
    // 0x80040FCC: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x80040FD0: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x80040FD4: bne         $at, $zero, L_80040F64
    if (ctx->r1 != 0) {
        // 0x80040FD8: sw          $t3, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r11;
            goto L_80040F64;
    }
    // 0x80040FD8: sw          $t3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r11;
    // 0x80040FDC: andi        $s1, $s6, 0xFF
    ctx->r17 = ctx->r22 & 0XFF;
    // 0x80040FE0: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x80040FE4: jal         0x8004D540
    // 0x80040FE8: andi        $a0, $s7, 0xFF
    ctx->r4 = ctx->r23 & 0XFF;
    func_8004D540(rdram, ctx);
        goto after_2;
    // 0x80040FE8: andi        $a0, $s7, 0xFF
    ctx->r4 = ctx->r23 & 0XFF;
    after_2:
    // 0x80040FEC: andi        $s0, $v0, 0xFF
    ctx->r16 = ctx->r2 & 0XFF;
    // 0x80040FF0: andi        $a0, $s7, 0xFF
    ctx->r4 = ctx->r23 & 0XFF;
    // 0x80040FF4: jal         0x80042AEC
    // 0x80040FF8: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    func_80042AEC(rdram, ctx);
        goto after_3;
    // 0x80040FF8: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    after_3:
    // 0x80040FFC: andi        $fp, $v0, 0xFF
    ctx->r30 = ctx->r2 & 0XFF;
    // 0x80041000: andi        $a0, $s7, 0xFF
    ctx->r4 = ctx->r23 & 0XFF;
    // 0x80041004: jal         0x8004D5B0
    // 0x80041008: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    func_8004D5B0(rdram, ctx);
        goto after_4;
    // 0x80041008: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    after_4:
    // 0x8004100C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x80041010: addu        $t6, $t6, $fp
    ctx->r14 = ADD32(ctx->r14, ctx->r30);
    // 0x80041014: lb          $t6, 0x759C($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X759C);
    // 0x80041018: addiu       $t0, $zero, 0x32
    ctx->r8 = ADD32(0, 0X32);
    // 0x8004101C: multu       $t6, $t0
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80041020: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80041024: addu        $t9, $t9, $s0
    ctx->r25 = ADD32(ctx->r25, ctx->r16);
    // 0x80041028: lb          $t9, 0x75A4($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X75A4);
    // 0x8004102C: sll         $t5, $v0, 2
    ctx->r13 = S32(ctx->r2 << 2);
    // 0x80041030: subu        $t5, $t5, $v0
    ctx->r13 = SUB32(ctx->r13, ctx->r2);
    // 0x80041034: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x80041038: addu        $t5, $t5, $v0
    ctx->r13 = ADD32(ctx->r13, ctx->r2);
    // 0x8004103C: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x80041040: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80041044: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80041048: addiu       $a3, $zero, 0x1F
    ctx->r7 = ADD32(0, 0X1F);
    // 0x8004104C: mflo        $t7
    ctx->r15 = lo;
    // 0x80041050: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80041054: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80041058: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004105C: mflo        $t2
    ctx->r10 = lo;
    // 0x80041060: addu        $t3, $t8, $t2
    ctx->r11 = ADD32(ctx->r24, ctx->r10);
    // 0x80041064: addu        $a1, $t3, $t7
    ctx->r5 = ADD32(ctx->r11, ctx->r15);
    // 0x80041068: sra         $t4, $t3, 31
    ctx->r12 = S32(SIGNED(ctx->r11) >> 31);
    // 0x8004106C: sltu        $at, $a1, $t7
    ctx->r1 = ctx->r5 < ctx->r15 ? 1 : 0;
    // 0x80041070: addu        $t8, $at, $t4
    ctx->r24 = ADD32(ctx->r1, ctx->r12);
    // 0x80041074: addu        $a0, $t8, $t6
    ctx->r4 = ADD32(ctx->r24, ctx->r14);
    // 0x80041078: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8004107C: jal         0x80080A54
    // 0x80041080: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    func_80080A54(rdram, ctx);
        goto after_5;
    // 0x80041080: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    after_5:
    // 0x80041084: lui         $t2, 0x801B
    ctx->r10 = S32(0X801B << 16);
    // 0x80041088: addiu       $t2, $t2, -0x4280
    ctx->r10 = ADD32(ctx->r10, -0X4280);
    // 0x8004108C: sll         $t1, $s6, 3
    ctx->r9 = S32(ctx->r22 << 3);
    // 0x80041090: addu        $s0, $t1, $t2
    ctx->r16 = ADD32(ctx->r9, ctx->r10);
    // 0x80041094: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80041098: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
L_8004109C:
    // 0x8004109C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x800410A0: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x800410A4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800410A8: jal         0x80080C44
    // 0x800410AC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_80080C44(rdram, ctx);
        goto after_6;
    // 0x800410AC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_6:
    // 0x800410B0: andi        $a0, $s7, 0xFF
    ctx->r4 = ctx->r23 & 0XFF;
    // 0x800410B4: jal         0x80042AEC
    // 0x800410B8: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    func_80042AEC(rdram, ctx);
        goto after_7;
    // 0x800410B8: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    after_7:
    // 0x800410BC: andi        $a0, $s7, 0xFF
    ctx->r4 = ctx->r23 & 0XFF;
    // 0x800410C0: jal         0x8004D540
    // 0x800410C4: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    func_8004D540(rdram, ctx);
        goto after_8;
    // 0x800410C4: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    after_8:
    // 0x800410C8: andi        $a0, $s7, 0xFF
    ctx->r4 = ctx->r23 & 0XFF;
    // 0x800410CC: jal         0x8004D5B0
    // 0x800410D0: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    func_8004D5B0(rdram, ctx);
        goto after_9;
    // 0x800410D0: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    after_9:
    // 0x800410D4: sra         $a0, $s6, 31
    ctx->r4 = S32(SIGNED(ctx->r22) >> 31);
    // 0x800410D8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800410DC: sw          $s6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r22;
    // 0x800410E0: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x800410E4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800410E8: jal         0x80080A54
    // 0x800410EC: addiu       $a3, $zero, 0x17
    ctx->r7 = ADD32(0, 0X17);
    func_80080A54(rdram, ctx);
        goto after_10;
    // 0x800410EC: addiu       $a3, $zero, 0x17
    ctx->r7 = ADD32(0, 0X17);
    after_10:
    // 0x800410F0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x800410F4: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x800410F8: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x800410FC: or          $t8, $t6, $v0
    ctx->r24 = ctx->r14 | ctx->r2;
    // 0x80041100: or          $t9, $t7, $v1
    ctx->r25 = ctx->r15 | ctx->r3;
    // 0x80041104: sll         $t1, $s6, 16
    ctx->r9 = S32(ctx->r22 << 16);
    // 0x80041108: sltiu       $at, $t9, 0x1
    ctx->r1 = ctx->r25 < 0X1 ? 1 : 0;
    // 0x8004110C: nor         $t4, $t8, $zero
    ctx->r12 = ~(ctx->r24 | 0);
    // 0x80041110: sra         $s6, $t1, 16
    ctx->r22 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80041114: addu        $t4, $t4, $at
    ctx->r12 = ADD32(ctx->r12, ctx->r1);
    // 0x80041118: slti        $at, $s6, 0xB
    ctx->r1 = SIGNED(ctx->r22) < 0XB ? 1 : 0;
    // 0x8004111C: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x80041120: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80041124: negu        $t5, $t9
    ctx->r13 = SUB32(0, ctx->r25);
    // 0x80041128: sw          $t5, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r13;
    // 0x8004112C: bne         $at, $zero, L_80040EFC
    if (ctx->r1 != 0) {
        // 0x80041130: sw          $t4, 0x0($s0)
        MEM_W(0X0, ctx->r16) = ctx->r12;
            goto L_80040EFC;
    }
    // 0x80041130: sw          $t4, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r12;
    // 0x80041134: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80041138: jal         0x8001CDFC
    // 0x8004113C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8001CDFC(rdram, ctx);
        goto after_11;
    // 0x8004113C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_11:
    // 0x80041140: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80041144:
    // 0x80041144: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x80041148: addiu       $t8, $t8, -0x4280
    ctx->r24 = ADD32(ctx->r24, -0X4280);
    // 0x8004114C: sll         $t7, $s0, 3
    ctx->r15 = S32(ctx->r16 << 3);
    // 0x80041150: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x80041154: lw          $t2, 0x8($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X8);
    // 0x80041158: lw          $t3, 0xC($v0)
    ctx->r11 = MEM_W(ctx->r2, 0XC);
    // 0x8004115C: nor         $t4, $t2, $zero
    ctx->r12 = ~(ctx->r10 | 0);
    // 0x80041160: sltiu       $at, $t3, 0x1
    ctx->r1 = ctx->r11 < 0X1 ? 1 : 0;
    // 0x80041164: addu        $a0, $t4, $at
    ctx->r4 = ADD32(ctx->r12, ctx->r1);
    // 0x80041168: negu        $a1, $t3
    ctx->r5 = SUB32(0, ctx->r11);
    // 0x8004116C: sw          $a1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r5;
    // 0x80041170: sw          $a0, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r4;
    // 0x80041174: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80041178: jal         0x80080C44
    // 0x8004117C: addiu       $a3, $zero, 0x17
    ctx->r7 = ADD32(0, 0X17);
    func_80080C44(rdram, ctx);
        goto after_12;
    // 0x8004117C: addiu       $a3, $zero, 0x17
    ctx->r7 = ADD32(0, 0X17);
    after_12:
    // 0x80041180: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80041184: andi        $t7, $v1, 0x7F
    ctx->r15 = ctx->r3 & 0X7F;
    // 0x80041188: addu        $t8, $t1, $s0
    ctx->r24 = ADD32(ctx->r9, ctx->r16);
    // 0x8004118C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80041190: sll         $t2, $s0, 16
    ctx->r10 = S32(ctx->r16 << 16);
    // 0x80041194: sra         $s0, $t2, 16
    ctx->r16 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80041198: slti        $at, $s0, 0xA
    ctx->r1 = SIGNED(ctx->r16) < 0XA ? 1 : 0;
    // 0x8004119C: bne         $at, $zero, L_80041144
    if (ctx->r1 != 0) {
        // 0x800411A0: sb          $t7, 0x0($t8)
        MEM_B(0X0, ctx->r24) = ctx->r15;
            goto L_80041144;
    }
    // 0x800411A0: sb          $t7, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r15;
    // 0x800411A4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x800411A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800411AC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800411B0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800411B4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800411B8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800411BC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x800411C0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x800411C4: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x800411C8: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x800411CC: jr          $ra
    // 0x800411D0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800411D0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800411D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800411D4: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800411D8: lb          $t7, -0x32A1($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X32A1);
    // 0x800411DC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800411E0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800411E4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800411E8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800411EC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800411F0: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x800411F4: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800411F8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800411FC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80041200: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80041204: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80041208: sll         $fp, $a0, 24
    ctx->r30 = S32(ctx->r4 << 24);
    // 0x8004120C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80041210: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80041214: sra         $t6, $fp, 24
    ctx->r14 = S32(SIGNED(ctx->r30) >> 24);
    // 0x80041218: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8004121C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80041220: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80041224: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80041228: addiu       $t9, $t9, -0x2F80
    ctx->r25 = ADD32(ctx->r25, -0X2F80);
    // 0x8004122C: or          $fp, $t6, $zero
    ctx->r30 = ctx->r14 | 0;
    // 0x80041230: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80041234: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80041238: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8004123C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80041240: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80041244: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80041248: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8004124C: addu        $s6, $t8, $t9
    ctx->r22 = ADD32(ctx->r24, ctx->r25);
    // 0x80041250: jal         0x80049810
    // 0x80041254: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    func_80049810(rdram, ctx);
        goto after_0;
    // 0x80041254: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    after_0:
    // 0x80041258: blez        $v0, L_80041428
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004125C: lui         $s5, 0x8012
        ctx->r21 = S32(0X8012 << 16);
            goto L_80041428;
    }
    // 0x8004125C: lui         $s5, 0x8012
    ctx->r21 = S32(0X8012 << 16);
    // 0x80041260: lui         $s4, 0x801B
    ctx->r20 = S32(0X801B << 16);
    // 0x80041264: addiu       $s4, $s4, -0x4280
    ctx->r20 = ADD32(ctx->r20, -0X4280);
    // 0x80041268: addiu       $s5, $s5, -0x3138
    ctx->r21 = ADD32(ctx->r21, -0X3138);
L_8004126C:
    // 0x8004126C: jal         0x800497E8
    // 0x80041270: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_800497E8(rdram, ctx);
        goto after_1;
    // 0x80041270: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_1:
    // 0x80041274: multu       $v0, $s7
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80041278: mflo        $s3
    ctx->r19 = lo;
    // 0x8004127C: sll         $t0, $s3, 16
    ctx->r8 = S32(ctx->r19 << 16);
    // 0x80041280: jal         0x800497E8
    // 0x80041284: sra         $s3, $t0, 16
    ctx->r19 = S32(SIGNED(ctx->r8) >> 16);
    func_800497E8(rdram, ctx);
        goto after_2;
    // 0x80041284: sra         $s3, $t0, 16
    ctx->r19 = S32(SIGNED(ctx->r8) >> 16);
    after_2:
    // 0x80041288: blez        $v0, L_800412D4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004128C: sll         $a0, $s1, 16
        ctx->r4 = S32(ctx->r17 << 16);
            goto L_800412D4;
    }
    // 0x8004128C: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
L_80041290:
    // 0x80041290: addu        $a1, $s1, $s3
    ctx->r5 = ADD32(ctx->r17, ctx->r19);
    // 0x80041294: sll         $t3, $a1, 16
    ctx->r11 = S32(ctx->r5 << 16);
    // 0x80041298: sra         $t2, $a0, 16
    ctx->r10 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8004129C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x800412A0: sra         $a1, $t3, 16
    ctx->r5 = S32(SIGNED(ctx->r11) >> 16);
    // 0x800412A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800412A8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800412AC: jal         0x80041814
    // 0x800412B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80041814(rdram, ctx);
        goto after_3;
    // 0x800412B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x800412B4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800412B8: sll         $t5, $s1, 16
    ctx->r13 = S32(ctx->r17 << 16);
    // 0x800412BC: jal         0x800497E8
    // 0x800412C0: sra         $s1, $t5, 16
    ctx->r17 = S32(SIGNED(ctx->r13) >> 16);
    func_800497E8(rdram, ctx);
        goto after_4;
    // 0x800412C0: sra         $s1, $t5, 16
    ctx->r17 = S32(SIGNED(ctx->r13) >> 16);
    after_4:
    // 0x800412C4: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800412C8: bne         $at, $zero, L_80041290
    if (ctx->r1 != 0) {
        // 0x800412CC: sll         $a0, $s1, 16
        ctx->r4 = S32(ctx->r17 << 16);
            goto L_80041290;
    }
    // 0x800412CC: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x800412D0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_800412D4:
    // 0x800412D4: jal         0x800497E8
    // 0x800412D8: nop

    func_800497E8(rdram, ctx);
        goto after_5;
    // 0x800412D8: nop

    after_5:
    // 0x800412DC: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    // 0x800412E0: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x800412E4: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800412E8: jal         0x8001CDFC
    // 0x800412EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001CDFC(rdram, ctx);
        goto after_6;
    // 0x800412EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x800412F0: jal         0x800497E8
    // 0x800412F4: nop

    func_800497E8(rdram, ctx);
        goto after_7;
    // 0x800412F4: nop

    after_7:
    // 0x800412F8: blez        $v0, L_80041380
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800412FC: sll         $t9, $s1, 3
        ctx->r25 = S32(ctx->r17 << 3);
            goto L_80041380;
    }
    // 0x800412FC: sll         $t9, $s1, 3
    ctx->r25 = S32(ctx->r17 << 3);
L_80041300:
    // 0x80041300: addu        $s0, $s4, $t9
    ctx->r16 = ADD32(ctx->r20, ctx->r25);
    // 0x80041304: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80041308: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x8004130C: nor         $t2, $t0, $zero
    ctx->r10 = ~(ctx->r8 | 0);
    // 0x80041310: sltiu       $at, $t1, 0x1
    ctx->r1 = ctx->r9 < 0X1 ? 1 : 0;
    // 0x80041314: addu        $a0, $t2, $at
    ctx->r4 = ADD32(ctx->r10, ctx->r1);
    // 0x80041318: negu        $a1, $t1
    ctx->r5 = SUB32(0, ctx->r9);
    // 0x8004131C: sw          $a1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r5;
    // 0x80041320: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x80041324: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80041328: jal         0x80080C44
    // 0x8004132C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_80080C44(rdram, ctx);
        goto after_8;
    // 0x8004132C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_8:
    // 0x80041330: addu        $t7, $s5, $s1
    ctx->r15 = ADD32(ctx->r21, ctx->r17);
    // 0x80041334: addu        $t8, $t7, $s3
    ctx->r24 = ADD32(ctx->r15, ctx->r19);
    // 0x80041338: andi        $t5, $v1, 0x7F
    ctx->r13 = ctx->r3 & 0X7F;
    // 0x8004133C: sb          $t5, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r13;
    // 0x80041340: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x80041344: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80041348: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
    // 0x8004134C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80041350: jal         0x80080C44
    // 0x80041354: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    func_80080C44(rdram, ctx);
        goto after_9;
    // 0x80041354: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    after_9:
    // 0x80041358: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8004135C: sll         $t9, $s1, 16
    ctx->r25 = S32(ctx->r17 << 16);
    // 0x80041360: sra         $s1, $t9, 16
    ctx->r17 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80041364: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x80041368: jal         0x800497E8
    // 0x8004136C: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    func_800497E8(rdram, ctx);
        goto after_10;
    // 0x8004136C: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    after_10:
    // 0x80041370: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80041374: bne         $at, $zero, L_80041300
    if (ctx->r1 != 0) {
        // 0x80041378: sll         $t9, $s1, 3
        ctx->r25 = S32(ctx->r17 << 3);
            goto L_80041300;
    }
    // 0x80041378: sll         $t9, $s1, 3
    ctx->r25 = S32(ctx->r17 << 3);
    // 0x8004137C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80041380:
    // 0x80041380: jal         0x800497E8
    // 0x80041384: nop

    func_800497E8(rdram, ctx);
        goto after_11;
    // 0x80041384: nop

    after_11:
    // 0x80041388: blez        $v0, L_8004140C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004138C: sll         $s0, $fp, 2
        ctx->r16 = S32(ctx->r30 << 2);
            goto L_8004140C;
    }
    // 0x8004138C: sll         $s0, $fp, 2
    ctx->r16 = S32(ctx->r30 << 2);
    // 0x80041390: subu        $s0, $s0, $fp
    ctx->r16 = SUB32(ctx->r16, ctx->r30);
L_80041394:
    // 0x80041394: jal         0x800497E8
    // 0x80041398: nop

    func_800497E8(rdram, ctx);
        goto after_12;
    // 0x80041398: nop

    after_12:
    // 0x8004139C: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x800413A0: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x800413A4: sra         $t2, $a1, 16
    ctx->r10 = S32(SIGNED(ctx->r5) >> 16);
    // 0x800413A8: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800413AC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x800413B0: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x800413B4: jal         0x8001CD30
    // 0x800413B8: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8001CD30(rdram, ctx);
        goto after_13;
    // 0x800413B8: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_13:
    // 0x800413BC: addu        $t3, $s5, $s1
    ctx->r11 = ADD32(ctx->r21, ctx->r17);
    // 0x800413C0: addu        $t4, $t3, $s3
    ctx->r12 = ADD32(ctx->r11, ctx->r19);
    // 0x800413C4: lb          $t5, 0x0($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X0);
    // 0x800413C8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800413CC: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800413D0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800413D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800413D8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800413DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800413E0: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x800413E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800413E8: addu        $t6, $s6, $t7
    ctx->r14 = ADD32(ctx->r22, ctx->r15);
    // 0x800413EC: sll         $t9, $s1, 16
    ctx->r25 = S32(ctx->r17 << 16);
    // 0x800413F0: addu        $t8, $t6, $s0
    ctx->r24 = ADD32(ctx->r14, ctx->r16);
    // 0x800413F4: sra         $s1, $t9, 16
    ctx->r17 = S32(SIGNED(ctx->r25) >> 16);
    // 0x800413F8: jal         0x800497E8
    // 0x800413FC: sb          $v0, 0x50E($t8)
    MEM_B(0X50E, ctx->r24) = ctx->r2;
    func_800497E8(rdram, ctx);
        goto after_14;
    // 0x800413FC: sb          $v0, 0x50E($t8)
    MEM_B(0X50E, ctx->r24) = ctx->r2;
    after_14:
    // 0x80041400: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80041404: bne         $at, $zero, L_80041394
    if (ctx->r1 != 0) {
        // 0x80041408: nop
    
            goto L_80041394;
    }
    // 0x80041408: nop

L_8004140C:
    // 0x8004140C: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80041410: sll         $t1, $s7, 16
    ctx->r9 = S32(ctx->r23 << 16);
    // 0x80041414: jal         0x80049810
    // 0x80041418: sra         $s7, $t1, 16
    ctx->r23 = S32(SIGNED(ctx->r9) >> 16);
    func_80049810(rdram, ctx);
        goto after_15;
    // 0x80041418: sra         $s7, $t1, 16
    ctx->r23 = S32(SIGNED(ctx->r9) >> 16);
    after_15:
    // 0x8004141C: slt         $at, $s7, $v0
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80041420: bne         $at, $zero, L_8004126C
    if (ctx->r1 != 0) {
        // 0x80041424: nop
    
            goto L_8004126C;
    }
    // 0x80041424: nop

L_80041428:
    // 0x80041428: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8004142C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80041430: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80041434: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80041438: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8004143C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80041440: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80041444: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80041448: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8004144C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80041450: jr          $ra
    // 0x80041454: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80041454: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80041458(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041458: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8004145C: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x80041460: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80041464: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80041468: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8004146C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80041470: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80041474: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80041478: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8004147C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80041480: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80041484: addiu       $s0, $s0, -0x2CF0
    ctx->r16 = ADD32(ctx->r16, -0X2CF0);
    // 0x80041488: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8004148C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80041490: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80041494: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80041498: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x8004149C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800414A0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800414A4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800414A8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x800414AC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800414B0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800414B4: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x800414B8: lh          $a1, 0xC($s0)
    ctx->r5 = MEM_H(ctx->r16, 0XC);
    // 0x800414BC: lh          $a0, 0xA($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XA);
    // 0x800414C0: lh          $a2, 0xA9E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0XA9E);
    // 0x800414C4: lh          $a3, 0xAA0($s0)
    ctx->r7 = MEM_H(ctx->r16, 0XAA0);
    // 0x800414C8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x800414CC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800414D0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800414D4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800414D8: jal         0x8003CF0C
    // 0x800414DC: addu        $s4, $t7, $t8
    ctx->r20 = ADD32(ctx->r15, ctx->r24);
    func_8003CF0C(rdram, ctx);
        goto after_0;
    // 0x800414DC: addu        $s4, $t7, $t8
    ctx->r20 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x800414E0: sll         $s2, $v0, 16
    ctx->r18 = S32(ctx->r2 << 16);
    // 0x800414E4: sra         $t9, $s2, 16
    ctx->r25 = S32(SIGNED(ctx->r18) >> 16);
    // 0x800414E8: lb          $a0, 0x7($s4)
    ctx->r4 = MEM_B(ctx->r20, 0X7);
    // 0x800414EC: jal         0x800498B8
    // 0x800414F0: or          $s2, $t9, $zero
    ctx->r18 = ctx->r25 | 0;
    func_800498B8(rdram, ctx);
        goto after_1;
    // 0x800414F0: or          $s2, $t9, $zero
    ctx->r18 = ctx->r25 | 0;
    after_1:
    // 0x800414F4: sll         $s3, $v0, 16
    ctx->r19 = S32(ctx->r2 << 16);
    // 0x800414F8: sra         $t0, $s3, 16
    ctx->r8 = S32(SIGNED(ctx->r19) >> 16);
    // 0x800414FC: jal         0x800497E8
    // 0x80041500: or          $s3, $t0, $zero
    ctx->r19 = ctx->r8 | 0;
    func_800497E8(rdram, ctx);
        goto after_2;
    // 0x80041500: or          $s3, $t0, $zero
    ctx->r19 = ctx->r8 | 0;
    after_2:
    // 0x80041504: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80041508: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8004150C: mflo        $s5
    ctx->r21 = lo;
    // 0x80041510: sll         $t1, $s5, 16
    ctx->r9 = S32(ctx->r21 << 16);
    // 0x80041514: jal         0x800497E8
    // 0x80041518: sra         $s5, $t1, 16
    ctx->r21 = S32(SIGNED(ctx->r9) >> 16);
    func_800497E8(rdram, ctx);
        goto after_3;
    // 0x80041518: sra         $s5, $t1, 16
    ctx->r21 = S32(SIGNED(ctx->r9) >> 16);
    after_3:
    // 0x8004151C: blez        $v0, L_800415E4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80041520: addiu       $s3, $zero, 0x4
        ctx->r19 = ADD32(0, 0X4);
            goto L_800415E4;
    }
    // 0x80041520: addiu       $s3, $zero, 0x4
    ctx->r19 = ADD32(0, 0X4);
L_80041524:
    // 0x80041524: lb          $t3, 0x7($s4)
    ctx->r11 = MEM_B(ctx->r20, 0X7);
    // 0x80041528: addu        $v1, $s1, $s5
    ctx->r3 = ADD32(ctx->r17, ctx->r21);
    // 0x8004152C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80041530: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80041534: bne         $v1, $t3, L_8004156C
    if (ctx->r3 != ctx->r11) {
        // 0x80041538: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8004156C;
    }
    // 0x80041538: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8004153C: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x80041540: beq         $at, $zero, L_80041550
    if (ctx->r1 == 0) {
        // 0x80041544: nop
    
            goto L_80041550;
    }
    // 0x80041544: nop

    // 0x80041548: b           L_8004155C
    // 0x8004154C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
        goto L_8004155C;
    // 0x8004154C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
L_80041550:
    // 0x80041550: bne         $s2, $s3, L_8004155C
    if (ctx->r18 != ctx->r19) {
        // 0x80041554: nop
    
            goto L_8004155C;
    }
    // 0x80041554: nop

    // 0x80041558: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8004155C:
    // 0x8004155C: lh          $a3, 0xA($s0)
    ctx->r7 = MEM_H(ctx->r16, 0XA);
    // 0x80041560: lh          $v0, 0xA9E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA9E);
    // 0x80041564: b           L_800415A8
    // 0x80041568: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
        goto L_800415A8;
    // 0x80041568: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
L_8004156C:
    // 0x8004156C: lb          $t4, 0x8($s4)
    ctx->r12 = MEM_B(ctx->r20, 0X8);
    // 0x80041570: nop

    // 0x80041574: bne         $v1, $t4, L_800415A8
    if (ctx->r3 != ctx->r12) {
        // 0x80041578: sll         $a0, $s1, 16
        ctx->r4 = S32(ctx->r17 << 16);
            goto L_800415A8;
    }
    // 0x80041578: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x8004157C: bne         $s2, $s3, L_8004158C
    if (ctx->r18 != ctx->r19) {
        // 0x80041580: slti        $at, $s2, 0x2
        ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
            goto L_8004158C;
    }
    // 0x80041580: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x80041584: b           L_80041598
    // 0x80041588: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
        goto L_80041598;
    // 0x80041588: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8004158C:
    // 0x8004158C: bne         $at, $zero, L_80041598
    if (ctx->r1 != 0) {
        // 0x80041590: nop
    
            goto L_80041598;
    }
    // 0x80041590: nop

    // 0x80041594: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
L_80041598:
    // 0x80041598: lh          $a3, 0xA9E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0XA9E);
    // 0x8004159C: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x800415A0: nop

    // 0x800415A4: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
L_800415A8:
    // 0x800415A8: sll         $a1, $v1, 16
    ctx->r5 = S32(ctx->r3 << 16);
    // 0x800415AC: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x800415B0: sra         $t5, $a0, 16
    ctx->r13 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800415B4: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x800415B8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x800415BC: jal         0x80041814
    // 0x800415C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80041814(rdram, ctx);
        goto after_4;
    // 0x800415C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x800415C4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800415C8: sll         $t7, $s1, 16
    ctx->r15 = S32(ctx->r17 << 16);
    // 0x800415CC: jal         0x800497E8
    // 0x800415D0: sra         $s1, $t7, 16
    ctx->r17 = S32(SIGNED(ctx->r15) >> 16);
    func_800497E8(rdram, ctx);
        goto after_5;
    // 0x800415D0: sra         $s1, $t7, 16
    ctx->r17 = S32(SIGNED(ctx->r15) >> 16);
    after_5:
    // 0x800415D4: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800415D8: bne         $at, $zero, L_80041524
    if (ctx->r1 != 0) {
        // 0x800415DC: nop
    
            goto L_80041524;
    }
    // 0x800415DC: nop

    // 0x800415E0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_800415E4:
    // 0x800415E4: jal         0x800497E8
    // 0x800415E8: nop

    func_800497E8(rdram, ctx);
        goto after_6;
    // 0x800415E8: nop

    after_6:
    // 0x800415EC: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    // 0x800415F0: sll         $t9, $a1, 16
    ctx->r25 = S32(ctx->r5 << 16);
    // 0x800415F4: sra         $a1, $t9, 16
    ctx->r5 = S32(SIGNED(ctx->r25) >> 16);
    // 0x800415F8: jal         0x8001CDFC
    // 0x800415FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001CDFC(rdram, ctx);
        goto after_7;
    // 0x800415FC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x80041600: jal         0x800497E8
    // 0x80041604: nop

    func_800497E8(rdram, ctx);
        goto after_8;
    // 0x80041604: nop

    after_8:
    // 0x80041608: blez        $v0, L_80041694
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8004160C: lui         $s3, 0x801B
        ctx->r19 = S32(0X801B << 16);
            goto L_80041694;
    }
    // 0x8004160C: lui         $s3, 0x801B
    ctx->r19 = S32(0X801B << 16);
    // 0x80041610: addiu       $s3, $s3, -0x4280
    ctx->r19 = ADD32(ctx->r19, -0X4280);
    // 0x80041614: sll         $t1, $s1, 3
    ctx->r9 = S32(ctx->r17 << 3);
L_80041618:
    // 0x80041618: addu        $s0, $s3, $t1
    ctx->r16 = ADD32(ctx->r19, ctx->r9);
    // 0x8004161C: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x80041620: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x80041624: nor         $t4, $t2, $zero
    ctx->r12 = ~(ctx->r10 | 0);
    // 0x80041628: sltiu       $at, $t3, 0x1
    ctx->r1 = ctx->r11 < 0X1 ? 1 : 0;
    // 0x8004162C: addu        $a0, $t4, $at
    ctx->r4 = ADD32(ctx->r12, ctx->r1);
    // 0x80041630: negu        $a1, $t3
    ctx->r5 = SUB32(0, ctx->r11);
    // 0x80041634: sw          $a1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r5;
    // 0x80041638: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x8004163C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80041640: jal         0x80080C44
    // 0x80041644: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_80080C44(rdram, ctx);
        goto after_9;
    // 0x80041644: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_9:
    // 0x80041648: andi        $t7, $v1, 0x7F
    ctx->r15 = ctx->r3 & 0X7F;
    // 0x8004164C: addu        $t9, $s6, $s1
    ctx->r25 = ADD32(ctx->r22, ctx->r17);
    // 0x80041650: sb          $t7, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r15;
    // 0x80041654: lw          $a1, 0x4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X4);
    // 0x80041658: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8004165C: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
    // 0x80041660: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80041664: jal         0x80080C44
    // 0x80041668: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    func_80080C44(rdram, ctx);
        goto after_10;
    // 0x80041668: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    after_10:
    // 0x8004166C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80041670: sll         $t0, $s1, 16
    ctx->r8 = S32(ctx->r17 << 16);
    // 0x80041674: sra         $s1, $t0, 16
    ctx->r17 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80041678: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x8004167C: jal         0x800497E8
    // 0x80041680: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    func_800497E8(rdram, ctx);
        goto after_11;
    // 0x80041680: sw          $v1, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r3;
    after_11:
    // 0x80041684: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80041688: bne         $at, $zero, L_80041618
    if (ctx->r1 != 0) {
        // 0x8004168C: sll         $t1, $s1, 3
        ctx->r9 = S32(ctx->r17 << 3);
            goto L_80041618;
    }
    // 0x8004168C: sll         $t1, $s1, 3
    ctx->r9 = S32(ctx->r17 << 3);
    // 0x80041690: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80041694:
    // 0x80041694: lui         $s3, 0x801B
    ctx->r19 = S32(0X801B << 16);
    // 0x80041698: jal         0x800497E8
    // 0x8004169C: addiu       $s3, $s3, -0x4280
    ctx->r19 = ADD32(ctx->r19, -0X4280);
    func_800497E8(rdram, ctx);
        goto after_12;
    // 0x8004169C: addiu       $s3, $s3, -0x4280
    ctx->r19 = ADD32(ctx->r19, -0X4280);
    after_12:
    // 0x800416A0: blez        $v0, L_80041704
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800416A4: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_80041704;
    }
    // 0x800416A4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_800416A8:
    // 0x800416A8: jal         0x800497E8
    // 0x800416AC: nop

    func_800497E8(rdram, ctx);
        goto after_13;
    // 0x800416AC: nop

    after_13:
    // 0x800416B0: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x800416B4: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x800416B8: sra         $t3, $a1, 16
    ctx->r11 = S32(SIGNED(ctx->r5) >> 16);
    // 0x800416BC: sra         $t2, $a0, 16
    ctx->r10 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800416C0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x800416C4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x800416C8: jal         0x8001CD30
    // 0x800416CC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    func_8001CD30(rdram, ctx);
        goto after_14;
    // 0x800416CC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_14:
    // 0x800416D0: addu        $t5, $s6, $s1
    ctx->r13 = ADD32(ctx->r22, ctx->r17);
    // 0x800416D4: lb          $t6, 0x0($t5)
    ctx->r14 = MEM_B(ctx->r13, 0X0);
    // 0x800416D8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800416DC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800416E0: sll         $t8, $s1, 16
    ctx->r24 = S32(ctx->r17 << 16);
    // 0x800416E4: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x800416E8: sra         $s1, $t8, 16
    ctx->r17 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800416EC: jal         0x800497E8
    // 0x800416F0: sb          $v0, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r2;
    func_800497E8(rdram, ctx);
        goto after_15;
    // 0x800416F0: sb          $v0, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r2;
    after_15:
    // 0x800416F4: slt         $at, $s1, $v0
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800416F8: bne         $at, $zero, L_800416A8
    if (ctx->r1 != 0) {
        // 0x800416FC: nop
    
            goto L_800416A8;
    }
    // 0x800416FC: nop

    // 0x80041700: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80041704:
    // 0x80041704: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80041708: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8004170C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80041710: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80041714: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80041718: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8004171C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80041720: jr          $ra
    // 0x80041724: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80041724: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80041728(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041728: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8004172C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80041730: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80041734: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80041738: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x8004173C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80041740: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80041744: addiu       $s1, $s1, -0x3138
    ctx->r17 = ADD32(ctx->r17, -0X3138);
    // 0x80041748: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8004174C: sll         $t8, $s0, 18
    ctx->r24 = S32(ctx->r16 << 18);
L_80041750:
    // 0x80041750: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80041754: addu        $t0, $s1, $t9
    ctx->r8 = ADD32(ctx->r17, ctx->r25);
    // 0x80041758: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    // 0x8004175C: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80041760: lb          $a1, 0x2($t0)
    ctx->r5 = MEM_B(ctx->r8, 0X2);
    // 0x80041764: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80041768: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8004176C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80041770: jal         0x80041814
    // 0x80041774: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80041814(rdram, ctx);
        goto after_0;
    // 0x80041774: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80041778: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8004177C: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x80041780: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80041784: slti        $at, $s0, 0x6
    ctx->r1 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
    // 0x80041788: bne         $at, $zero, L_80041750
    if (ctx->r1 != 0) {
        // 0x8004178C: sll         $t8, $s0, 18
        ctx->r24 = S32(ctx->r16 << 18);
            goto L_80041750;
    }
    // 0x8004178C: sll         $t8, $s0, 18
    ctx->r24 = S32(ctx->r16 << 18);
    // 0x80041790: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80041794: jal         0x8001CDFC
    // 0x80041798: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8001CDFC(rdram, ctx);
        goto after_1;
    // 0x80041798: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x8004179C: lui         $s1, 0x801B
    ctx->r17 = S32(0X801B << 16);
    // 0x800417A0: addiu       $s1, $s1, -0x4280
    ctx->r17 = ADD32(ctx->r17, -0X4280);
    // 0x800417A4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800417A8:
    // 0x800417A8: sll         $t3, $s0, 3
    ctx->r11 = S32(ctx->r16 << 3);
    // 0x800417AC: addu        $v0, $s1, $t3
    ctx->r2 = ADD32(ctx->r17, ctx->r11);
    // 0x800417B0: lw          $t4, 0x0($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X0);
    // 0x800417B4: lw          $t5, 0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4);
    // 0x800417B8: nor         $t6, $t4, $zero
    ctx->r14 = ~(ctx->r12 | 0);
    // 0x800417BC: sltiu       $at, $t5, 0x1
    ctx->r1 = ctx->r13 < 0X1 ? 1 : 0;
    // 0x800417C0: addu        $a0, $t6, $at
    ctx->r4 = ADD32(ctx->r14, ctx->r1);
    // 0x800417C4: negu        $a1, $t5
    ctx->r5 = SUB32(0, ctx->r13);
    // 0x800417C8: sw          $a1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r5;
    // 0x800417CC: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x800417D0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800417D4: jal         0x80080C44
    // 0x800417D8: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_80080C44(rdram, ctx);
        goto after_2;
    // 0x800417D8: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_2:
    // 0x800417DC: addu        $t1, $s2, $s0
    ctx->r9 = ADD32(ctx->r18, ctx->r16);
    // 0x800417E0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800417E4: sll         $t2, $s0, 16
    ctx->r10 = S32(ctx->r16 << 16);
    // 0x800417E8: sra         $s0, $t2, 16
    ctx->r16 = S32(SIGNED(ctx->r10) >> 16);
    // 0x800417EC: slti        $at, $s0, 0x6
    ctx->r1 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
    // 0x800417F0: andi        $t9, $v1, 0x7F
    ctx->r25 = ctx->r3 & 0X7F;
    // 0x800417F4: bne         $at, $zero, L_800417A8
    if (ctx->r1 != 0) {
        // 0x800417F8: sb          $t9, 0x0($t1)
        MEM_B(0X0, ctx->r9) = ctx->r25;
            goto L_800417A8;
    }
    // 0x800417F8: sb          $t9, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r25;
    // 0x800417FC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80041800: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80041804: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80041808: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8004180C: jr          $ra
    // 0x80041810: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80041810: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80041814(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041814: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80041818: lb          $t7, -0x32A1($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X32A1);
    // 0x8004181C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80041820: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80041824: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80041828: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8004182C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80041830: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80041834: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80041838: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8004183C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80041840: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80041844: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80041848: sll         $s1, $a1, 16
    ctx->r17 = S32(ctx->r5 << 16);
    // 0x8004184C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80041850: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80041854: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80041858: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004185C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80041860: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80041864: addiu       $t9, $t9, -0x2F80
    ctx->r25 = ADD32(ctx->r25, -0X2F80);
    // 0x80041868: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x8004186C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80041870: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x80041874: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80041878: sw          $a3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r7;
    // 0x8004187C: jal         0x8004974C
    // 0x80041880: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    func_8004974C(rdram, ctx);
        goto after_0;
    // 0x80041880: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    after_0:
    // 0x80041884: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80041888: bne         $v0, $at, L_800418B8
    if (ctx->r2 != ctx->r1) {
        // 0x8004188C: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_800418B8;
    }
    // 0x8004188C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80041890: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x80041894: lb          $s1, -0x30FF($at)
    ctx->r17 = MEM_B(ctx->r1, -0X30FF);
    // 0x80041898: nop

    // 0x8004189C: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x800418A0: sra         $t2, $a0, 16
    ctx->r10 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800418A4: jal         0x800498B8
    // 0x800418A8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    func_800498B8(rdram, ctx);
        goto after_1;
    // 0x800418A8: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    after_1:
    // 0x800418AC: sll         $t3, $v0, 6
    ctx->r11 = S32(ctx->r2 << 6);
    // 0x800418B0: b           L_800418BC
    // 0x800418B4: sh          $t3, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r11;
        goto L_800418BC;
    // 0x800418B4: sh          $t3, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r11;
L_800418B8:
    // 0x800418B8: sh          $zero, 0x46($sp)
    MEM_H(0X46, ctx->r29) = 0;
L_800418BC:
    // 0x800418BC: sll         $t4, $s1, 2
    ctx->r12 = S32(ctx->r17 << 2);
    // 0x800418C0: addu        $t4, $t4, $s1
    ctx->r12 = ADD32(ctx->r12, ctx->r17);
    // 0x800418C4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800418C8: addu        $t4, $t4, $s1
    ctx->r12 = ADD32(ctx->r12, ctx->r17);
    // 0x800418CC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800418D0: subu        $t4, $t4, $s1
    ctx->r12 = SUB32(ctx->r12, ctx->r17);
    // 0x800418D4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800418D8: addu        $t0, $s0, $t4
    ctx->r8 = ADD32(ctx->r16, ctx->r12);
    // 0x800418DC: lbu         $t5, 0x5E0($t0)
    ctx->r13 = MEM_BU(ctx->r8, 0X5E0);
    // 0x800418E0: lbu         $t7, 0x5E2($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X5E2);
    // 0x800418E4: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800418E8: lh          $t9, 0x52($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X52);
    // 0x800418EC: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x800418F0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800418F4: addu        $a1, $t8, $t9
    ctx->r5 = ADD32(ctx->r24, ctx->r25);
    // 0x800418F8: sra         $a0, $a1, 31
    ctx->r4 = S32(SIGNED(ctx->r5) >> 31);
    // 0x800418FC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80041900: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80041904: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x80041908: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8004190C: jal         0x80080A54
    // 0x80041910: addiu       $a3, $zero, 0x37
    ctx->r7 = ADD32(0, 0X37);
    func_80080A54(rdram, ctx);
        goto after_2;
    // 0x80041910: addiu       $a3, $zero, 0x37
    ctx->r7 = ADD32(0, 0X37);
    after_2:
    // 0x80041914: lh          $t3, 0x4A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X4A);
    // 0x80041918: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x8004191C: addiu       $t7, $t7, -0x4280
    ctx->r15 = ADD32(ctx->r15, -0X4280);
    // 0x80041920: sll         $t6, $t3, 3
    ctx->r14 = S32(ctx->r11 << 3);
    // 0x80041924: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x80041928: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8004192C: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x80041930: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80041934: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x80041938: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8004193C: jal         0x80080C44
    // 0x80041940: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_80080C44(rdram, ctx);
        goto after_3;
    // 0x80041940: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_3:
    // 0x80041944: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80041948: lh          $t4, 0x56($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X56);
    // 0x8004194C: addiu       $t1, $t0, 0x4AC
    ctx->r9 = ADD32(ctx->r8, 0X4AC);
    // 0x80041950: lhu         $t8, 0x138($t1)
    ctx->r24 = MEM_HU(ctx->r9, 0X138);
    // 0x80041954: lhu         $t9, 0x13A($t1)
    ctx->r25 = MEM_HU(ctx->r9, 0X13A);
    // 0x80041958: lh          $t3, 0x5A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X5A);
    // 0x8004195C: subu        $t2, $t8, $t9
    ctx->r10 = SUB32(ctx->r24, ctx->r25);
    // 0x80041960: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x80041964: subu        $t6, $t5, $t3
    ctx->r14 = SUB32(ctx->r13, ctx->r11);
    // 0x80041968: addiu       $a1, $t6, 0x7FFF
    ctx->r5 = ADD32(ctx->r14, 0X7FFF);
    // 0x8004196C: sra         $a0, $a1, 31
    ctx->r4 = S32(SIGNED(ctx->r5) >> 31);
    // 0x80041970: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80041974: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80041978: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x8004197C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80041980: jal         0x80080A54
    // 0x80041984: addiu       $a3, $zero, 0x27
    ctx->r7 = ADD32(0, 0X27);
    func_80080A54(rdram, ctx);
        goto after_4;
    // 0x80041984: addiu       $a3, $zero, 0x27
    ctx->r7 = ADD32(0, 0X27);
    after_4:
    // 0x80041988: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x8004198C: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x80041990: or          $a0, $t2, $v0
    ctx->r4 = ctx->r10 | ctx->r2;
    // 0x80041994: or          $a1, $t3, $v1
    ctx->r5 = ctx->r11 | ctx->r3;
    // 0x80041998: sw          $a1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r5;
    // 0x8004199C: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x800419A0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800419A4: jal         0x80080C44
    // 0x800419A8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_80080C44(rdram, ctx);
        goto after_5;
    // 0x800419A8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
    // 0x800419AC: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800419B0: lh          $t7, 0x56($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X56);
    // 0x800419B4: lhu         $t6, 0x138($t1)
    ctx->r14 = MEM_HU(ctx->r9, 0X138);
    // 0x800419B8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800419BC: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x800419C0: sra         $a0, $a1, 31
    ctx->r4 = S32(SIGNED(ctx->r5) >> 31);
    // 0x800419C4: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x800419C8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x800419CC: jal         0x80080A54
    // 0x800419D0: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    func_80080A54(rdram, ctx);
        goto after_6;
    // 0x800419D0: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    after_6:
    // 0x800419D4: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x800419D8: lw          $t5, 0x4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4);
    // 0x800419DC: or          $a0, $t4, $v0
    ctx->r4 = ctx->r12 | ctx->r2;
    // 0x800419E0: or          $a1, $t5, $v1
    ctx->r5 = ctx->r13 | ctx->r3;
    // 0x800419E4: sw          $a1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r5;
    // 0x800419E8: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x800419EC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800419F0: jal         0x80080C44
    // 0x800419F4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_80080C44(rdram, ctx);
        goto after_7;
    // 0x800419F4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_7:
    // 0x800419F8: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
    // 0x800419FC: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80041A00: jal         0x8003CB98
    // 0x80041A04: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_8003CB98(rdram, ctx);
        goto after_8;
    // 0x80041A04: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_8:
    // 0x80041A08: lh          $t3, 0x46($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X46);
    // 0x80041A0C: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x80041A10: andi        $t2, $t8, 0xFF
    ctx->r10 = ctx->r24 & 0XFF;
    // 0x80041A14: addu        $a1, $t2, $t3
    ctx->r5 = ADD32(ctx->r10, ctx->r11);
    // 0x80041A18: sra         $a0, $a1, 31
    ctx->r4 = S32(SIGNED(ctx->r5) >> 31);
    // 0x80041A1C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80041A20: jal         0x80080A54
    // 0x80041A24: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_80080A54(rdram, ctx);
        goto after_9;
    // 0x80041A24: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_9:
    // 0x80041A28: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80041A2C: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x80041A30: or          $a0, $t6, $v0
    ctx->r4 = ctx->r14 | ctx->r2;
    // 0x80041A34: or          $a1, $t7, $v1
    ctx->r5 = ctx->r15 | ctx->r3;
    // 0x80041A38: sw          $a1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r5;
    // 0x80041A3C: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x80041A40: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80041A44: jal         0x80080C44
    // 0x80041A48: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_80080C44(rdram, ctx);
        goto after_10;
    // 0x80041A48: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_10:
    // 0x80041A4C: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x80041A50: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x80041A54: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80041A58: jal         0x80080A54
    // 0x80041A5C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_80080A54(rdram, ctx);
        goto after_11;
    // 0x80041A5C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_11:
    // 0x80041A60: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x80041A64: lw          $t3, 0x4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X4);
    // 0x80041A68: or          $a0, $t2, $v0
    ctx->r4 = ctx->r10 | ctx->r2;
    // 0x80041A6C: or          $a1, $t3, $v1
    ctx->r5 = ctx->r11 | ctx->r3;
    // 0x80041A70: sw          $a1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r5;
    // 0x80041A74: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x80041A78: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80041A7C: jal         0x80080C44
    // 0x80041A80: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_80080C44(rdram, ctx);
        goto after_12;
    // 0x80041A80: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_12:
    // 0x80041A84: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80041A88: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x80041A8C: nor         $t8, $t6, $zero
    ctx->r24 = ~(ctx->r14 | 0);
    // 0x80041A90: sltiu       $at, $t7, 0x1
    ctx->r1 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x80041A94: addu        $t8, $t8, $at
    ctx->r24 = ADD32(ctx->r24, ctx->r1);
    // 0x80041A98: negu        $t9, $t7
    ctx->r25 = SUB32(0, ctx->r15);
    // 0x80041A9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80041AA0: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x80041AA4: sw          $t8, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r24;
    // 0x80041AA8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80041AAC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80041AB0: jr          $ra
    // 0x80041AB4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80041AB4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80041AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041AB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80041ABC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80041AC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80041AC4: jal         0x80041B68
    // 0x80041AC8: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    func_80041B68(rdram, ctx);
        goto after_0;
    // 0x80041AC8: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    after_0:
    // 0x80041ACC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80041AD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80041AD4: jr          $ra
    // 0x80041AD8: nop

    return;
    // 0x80041AD8: nop

;}
RECOMP_FUNC void func_80041ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041ADC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80041AE0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80041AE4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80041AE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80041AEC: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x80041AF0: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x80041AF4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80041AF8: addiu       $s2, $s2, 0x6204
    ctx->r18 = ADD32(ctx->r18, 0X6204);
    // 0x80041AFC: addiu       $s1, $s1, 0x6200
    ctx->r17 = ADD32(ctx->r17, 0X6200);
    // 0x80041B00: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80041B04:
    // 0x80041B04: jal         0x80049A90
    // 0x80041B08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80049A90(rdram, ctx);
        goto after_0;
    // 0x80041B08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80041B0C: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x80041B10: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80041B14: jal         0x80049838
    // 0x80041B18: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_80049838(rdram, ctx);
        goto after_1;
    // 0x80041B18: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_1:
    // 0x80041B1C: bne         $v0, $s0, L_80041B38
    if (ctx->r2 != ctx->r16) {
        // 0x80041B20: addu        $t7, $s1, $s0
        ctx->r15 = ADD32(ctx->r17, ctx->r16);
            goto L_80041B38;
    }
    // 0x80041B20: addu        $t7, $s1, $s0
    ctx->r15 = ADD32(ctx->r17, ctx->r16);
    // 0x80041B24: addu        $t8, $s2, $s0
    ctx->r24 = ADD32(ctx->r18, ctx->r16);
    // 0x80041B28: lb          $a1, 0x0($t8)
    ctx->r5 = MEM_B(ctx->r24, 0X0);
    // 0x80041B2C: lb          $a0, 0x0($t7)
    ctx->r4 = MEM_B(ctx->r15, 0X0);
    // 0x80041B30: jal         0x80041B68
    // 0x80041B34: nop

    func_80041B68(rdram, ctx);
        goto after_2;
    // 0x80041B34: nop

    after_2:
L_80041B38:
    // 0x80041B38: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80041B3C: sll         $t9, $s0, 16
    ctx->r25 = S32(ctx->r16 << 16);
    // 0x80041B40: sra         $s0, $t9, 16
    ctx->r16 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80041B44: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x80041B48: bne         $at, $zero, L_80041B04
    if (ctx->r1 != 0) {
        // 0x80041B4C: nop
    
            goto L_80041B04;
    }
    // 0x80041B4C: nop

    // 0x80041B50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80041B54: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80041B58: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80041B5C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80041B60: jr          $ra
    // 0x80041B64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80041B64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80041B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041B68: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80041B6C: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80041B70: lui         $s7, 0x8012
    ctx->r23 = S32(0X8012 << 16);
    // 0x80041B74: addiu       $s7, $s7, -0x32B0
    ctx->r23 = ADD32(ctx->r23, -0X32B0);
    // 0x80041B78: lb          $t8, 0xF($s7)
    ctx->r24 = MEM_B(ctx->r23, 0XF);
    // 0x80041B7C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80041B80: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80041B84: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80041B88: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80041B8C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80041B90: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80041B94: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80041B98: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80041B9C: sll         $s1, $a0, 16
    ctx->r17 = S32(ctx->r4 << 16);
    // 0x80041BA0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80041BA4: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80041BA8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80041BAC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80041BB0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80041BB4: sll         $s2, $a1, 16
    ctx->r18 = S32(ctx->r5 << 16);
    // 0x80041BB8: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80041BBC: sll         $a0, $t6, 24
    ctx->r4 = S32(ctx->r14 << 24);
    // 0x80041BC0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80041BC4: sra         $t7, $s2, 16
    ctx->r15 = S32(SIGNED(ctx->r18) >> 16);
    // 0x80041BC8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80041BCC: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80041BD0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80041BD4: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80041BD8: addiu       $t0, $t0, -0x2F80
    ctx->r8 = ADD32(ctx->r8, -0X2F80);
    // 0x80041BDC: sra         $t1, $a0, 24
    ctx->r9 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80041BE0: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    // 0x80041BE4: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x80041BE8: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80041BEC: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80041BF0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80041BF4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80041BF8: addu        $s5, $t9, $t0
    ctx->r21 = ADD32(ctx->r25, ctx->r8);
    // 0x80041BFC: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80041C00: jal         0x80041DA0
    // 0x80041C04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80041DA0(rdram, ctx);
        goto after_0;
    // 0x80041C04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80041C08: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x80041C0C: bne         $at, $zero, L_80041C4C
    if (ctx->r1 != 0) {
        // 0x80041C10: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_80041C4C;
    }
    // 0x80041C10: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80041C14: addu        $a0, $s0, $s1
    ctx->r4 = ADD32(ctx->r16, ctx->r17);
L_80041C18:
    // 0x80041C18: sll         $t2, $a0, 24
    ctx->r10 = S32(ctx->r4 << 24);
    // 0x80041C1C: sra         $a0, $t2, 24
    ctx->r4 = S32(SIGNED(ctx->r10) >> 24);
    // 0x80041C20: jal         0x80041DA0
    // 0x80041C24: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80041DA0(rdram, ctx);
        goto after_1;
    // 0x80041C24: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x80041C28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80041C2C: jal         0x8001CDFC
    // 0x80041C30: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    func_8001CDFC(rdram, ctx);
        goto after_2;
    // 0x80041C30: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_2:
    // 0x80041C34: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80041C38: sll         $t4, $s0, 16
    ctx->r12 = S32(ctx->r16 << 16);
    // 0x80041C3C: sra         $s0, $t4, 16
    ctx->r16 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80041C40: slt         $at, $s0, $s2
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80041C44: bne         $at, $zero, L_80041C18
    if (ctx->r1 != 0) {
        // 0x80041C48: addu        $a0, $s0, $s1
        ctx->r4 = ADD32(ctx->r16, ctx->r17);
            goto L_80041C18;
    }
    // 0x80041C48: addu        $a0, $s0, $s1
    ctx->r4 = ADD32(ctx->r16, ctx->r17);
L_80041C4C:
    // 0x80041C4C: lui         $s6, 0x801B
    ctx->r22 = S32(0X801B << 16);
    // 0x80041C50: addiu       $s6, $s6, -0x4280
    ctx->r22 = ADD32(ctx->r22, -0X4280);
    // 0x80041C54: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80041C58: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
L_80041C5C:
    // 0x80041C5C: sll         $t6, $s2, 3
    ctx->r14 = S32(ctx->r18 << 3);
    // 0x80041C60: addu        $s1, $s6, $t6
    ctx->r17 = ADD32(ctx->r22, ctx->r14);
    // 0x80041C64: lw          $t8, 0x0($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X0);
    // 0x80041C68: lw          $t9, 0x4($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X4);
    // 0x80041C6C: lbu         $t7, 0x0($s7)
    ctx->r15 = MEM_BU(ctx->r23, 0X0);
    // 0x80041C70: nor         $t0, $t8, $zero
    ctx->r8 = ~(ctx->r24 | 0);
    // 0x80041C74: sltiu       $at, $t9, 0x1
    ctx->r1 = ctx->r25 < 0X1 ? 1 : 0;
    // 0x80041C78: addu        $t0, $t0, $at
    ctx->r8 = ADD32(ctx->r8, ctx->r1);
    // 0x80041C7C: negu        $t1, $t9
    ctx->r9 = SUB32(0, ctx->r25);
    // 0x80041C80: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x80041C84: bne         $t7, $zero, L_80041CA8
    if (ctx->r15 != 0) {
        // 0x80041C88: sw          $t0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r8;
            goto L_80041CA8;
    }
    // 0x80041C88: sw          $t0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r8;
    // 0x80041C8C: multu       $s2, $s4
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80041C90: mflo        $t2
    ctx->r10 = lo;
    // 0x80041C94: addu        $s0, $s5, $t2
    ctx->r16 = ADD32(ctx->r21, ctx->r10);
    // 0x80041C98: lb          $t3, 0x335C($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X335C);
    // 0x80041C9C: lb          $t4, 0x335D($s0)
    ctx->r12 = MEM_B(ctx->r16, 0X335D);
    // 0x80041CA0: sb          $t3, 0x337A($s0)
    MEM_B(0X337A, ctx->r16) = ctx->r11;
    // 0x80041CA4: sb          $t4, 0x337B($s0)
    MEM_B(0X337B, ctx->r16) = ctx->r12;
L_80041CA8:
    // 0x80041CA8: multu       $s2, $s4
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80041CAC: lw          $t7, 0x4($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X4);
    // 0x80041CB0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80041CB4: andi        $t9, $t7, 0x7F
    ctx->r25 = ctx->r15 & 0X7F;
    // 0x80041CB8: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x80041CBC: mflo        $t5
    ctx->r13 = lo;
    // 0x80041CC0: addu        $s0, $s5, $t5
    ctx->r16 = ADD32(ctx->r21, ctx->r13);
    // 0x80041CC4: sb          $t9, 0x335C($s0)
    MEM_B(0X335C, ctx->r16) = ctx->r25;
    // 0x80041CC8: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x80041CCC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80041CD0: jal         0x80080C44
    // 0x80041CD4: nop

    func_80080C44(rdram, ctx);
        goto after_3;
    // 0x80041CD4: nop

    after_3:
    // 0x80041CD8: andi        $t3, $v1, 0x7F
    ctx->r11 = ctx->r3 & 0X7F;
    // 0x80041CDC: sb          $t3, 0x335D($s0)
    MEM_B(0X335D, ctx->r16) = ctx->r11;
    // 0x80041CE0: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x80041CE4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x80041CE8: or          $s3, $s1, $zero
    ctx->r19 = ctx->r17 | 0;
    // 0x80041CEC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80041CF0: jal         0x80080C44
    // 0x80041CF4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_80080C44(rdram, ctx);
        goto after_4;
    // 0x80041CF4: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_4:
    // 0x80041CF8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80041CFC: sll         $t4, $s2, 16
    ctx->r12 = S32(ctx->r18 << 16);
    // 0x80041D00: sra         $s2, $t4, 16
    ctx->r18 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80041D04: slti        $at, $s2, 0xA
    ctx->r1 = SIGNED(ctx->r18) < 0XA ? 1 : 0;
    // 0x80041D08: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x80041D0C: bne         $at, $zero, L_80041C5C
    if (ctx->r1 != 0) {
        // 0x80041D10: sw          $v1, 0x4($s3)
        MEM_W(0X4, ctx->r19) = ctx->r3;
            goto L_80041C5C;
    }
    // 0x80041D10: sw          $v1, 0x4($s3)
    MEM_W(0X4, ctx->r19) = ctx->r3;
    // 0x80041D14: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_80041D18:
    // 0x80041D18: lbu         $t6, 0x0($s7)
    ctx->r14 = MEM_BU(ctx->r23, 0X0);
    // 0x80041D1C: sll         $a0, $s2, 16
    ctx->r4 = S32(ctx->r18 << 16);
    // 0x80041D20: bne         $t6, $zero, L_80041D40
    if (ctx->r14 != 0) {
        // 0x80041D24: sra         $t9, $a0, 16
        ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
            goto L_80041D40;
    }
    // 0x80041D24: sra         $t9, $a0, 16
    ctx->r25 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80041D28: multu       $s2, $s4
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80041D2C: mflo        $t7
    ctx->r15 = lo;
    // 0x80041D30: addu        $s0, $s5, $t7
    ctx->r16 = ADD32(ctx->r21, ctx->r15);
    // 0x80041D34: lb          $t8, 0x335E($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X335E);
    // 0x80041D38: nop

    // 0x80041D3C: sb          $t8, 0x337C($s0)
    MEM_B(0X337C, ctx->r16) = ctx->r24;
L_80041D40:
    // 0x80041D40: sll         $t0, $s2, 2
    ctx->r8 = S32(ctx->r18 << 2);
    // 0x80041D44: subu        $t0, $t0, $s2
    ctx->r8 = SUB32(ctx->r8, ctx->r18);
    // 0x80041D48: addu        $s0, $s5, $t0
    ctx->r16 = ADD32(ctx->r21, ctx->r8);
    // 0x80041D4C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80041D50: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80041D54: jal         0x8001CD30
    // 0x80041D58: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    func_8001CD30(rdram, ctx);
        goto after_5;
    // 0x80041D58: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_5:
    // 0x80041D5C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80041D60: sll         $t2, $s2, 16
    ctx->r10 = S32(ctx->r18 << 16);
    // 0x80041D64: sra         $s2, $t2, 16
    ctx->r18 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80041D68: slti        $at, $s2, 0xA
    ctx->r1 = SIGNED(ctx->r18) < 0XA ? 1 : 0;
    // 0x80041D6C: bne         $at, $zero, L_80041D18
    if (ctx->r1 != 0) {
        // 0x80041D70: sb          $v0, 0x335E($s0)
        MEM_B(0X335E, ctx->r16) = ctx->r2;
            goto L_80041D18;
    }
    // 0x80041D70: sb          $v0, 0x335E($s0)
    MEM_B(0X335E, ctx->r16) = ctx->r2;
    // 0x80041D74: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80041D78: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80041D7C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80041D80: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80041D84: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80041D88: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80041D8C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80041D90: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80041D94: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80041D98: jr          $ra
    // 0x80041D9C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80041D9C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80041DA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80041DA0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80041DA4: lb          $t8, -0x32A1($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X32A1);
    // 0x80041DA8: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80041DAC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80041DB0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80041DB4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80041DB8: sll         $s0, $a0, 24
    ctx->r16 = S32(ctx->r4 << 24);
    // 0x80041DBC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80041DC0: sra         $t6, $s0, 24
    ctx->r14 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80041DC4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80041DC8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80041DCC: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80041DD0: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80041DD4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80041DD8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80041DDC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80041DE0: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80041DE4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80041DE8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80041DEC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80041DF0: subu        $t0, $t0, $t6
    ctx->r8 = SUB32(ctx->r8, ctx->r14);
    // 0x80041DF4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80041DF8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80041DFC: sw          $a0, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r4;
    // 0x80041E00: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80041E04: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80041E08: sll         $s2, $a1, 24
    ctx->r18 = S32(ctx->r5 << 24);
    // 0x80041E0C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80041E10: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x80041E14: sll         $a0, $t6, 24
    ctx->r4 = S32(ctx->r14 << 24);
    // 0x80041E18: sra         $t7, $s2, 24
    ctx->r15 = S32(SIGNED(ctx->r18) >> 24);
    // 0x80041E1C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80041E20: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80041E24: addiu       $t3, $t3, -0x2F80
    ctx->r11 = ADD32(ctx->r11, -0X2F80);
    // 0x80041E28: addiu       $t2, $t1, 0x4AC
    ctx->r10 = ADD32(ctx->r9, 0X4AC);
    // 0x80041E2C: sra         $t4, $a0, 24
    ctx->r12 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80041E30: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    // 0x80041E34: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80041E38: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80041E3C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80041E40: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80041E44: sw          $a1, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r5;
    // 0x80041E48: addu        $s4, $t2, $t3
    ctx->r20 = ADD32(ctx->r10, ctx->r11);
    // 0x80041E4C: jal         0x8003CB98
    // 0x80041E50: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    func_8003CB98(rdram, ctx);
        goto after_0;
    // 0x80041E50: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    after_0:
    // 0x80041E54: addiu       $a0, $v0, 0x1
    ctx->r4 = ADD32(ctx->r2, 0X1);
    // 0x80041E58: sll         $t5, $a0, 24
    ctx->r13 = S32(ctx->r4 << 24);
    // 0x80041E5C: sra         $t6, $t5, 24
    ctx->r14 = S32(SIGNED(ctx->r13) >> 24);
    // 0x80041E60: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x80041E64: addiu       $t8, $t8, -0x4280
    ctx->r24 = ADD32(ctx->r24, -0X4280);
    // 0x80041E68: sra         $t0, $t6, 31
    ctx->r8 = S32(SIGNED(ctx->r14) >> 31);
    // 0x80041E6C: sll         $t7, $s2, 3
    ctx->r15 = S32(ctx->r18 << 3);
    // 0x80041E70: andi        $t9, $s0, 0xFF
    ctx->r25 = ctx->r16 & 0XFF;
    // 0x80041E74: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x80041E78: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x80041E7C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80041E80: addu        $s5, $t7, $t8
    ctx->r21 = ADD32(ctx->r15, ctx->r24);
    // 0x80041E84: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x80041E88: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x80041E8C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80041E90: addiu       $s3, $zero, 0x6
    ctx->r19 = ADD32(0, 0X6);
L_80041E94:
    // 0x80041E94: multu       $s1, $s3
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80041E98: sll         $t4, $s1, 3
    ctx->r12 = S32(ctx->r17 << 3);
    // 0x80041E9C: addu        $s0, $s5, $t4
    ctx->r16 = ADD32(ctx->r21, ctx->r12);
    // 0x80041EA0: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x80041EA4: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
    // 0x80041EA8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80041EAC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    // 0x80041EB0: mflo        $t5
    ctx->r13 = lo;
    // 0x80041EB4: addu        $t6, $s4, $t5
    ctx->r14 = ADD32(ctx->r20, ctx->r13);
    // 0x80041EB8: lhu         $a1, 0x2($t6)
    ctx->r5 = MEM_HU(ctx->r14, 0X2);
    // 0x80041EBC: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80041EC0: jal         0x80080A54
    // 0x80041EC4: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    func_80080A54(rdram, ctx);
        goto after_1;
    // 0x80041EC4: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    after_1:
    // 0x80041EC8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80041ECC: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x80041ED0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80041ED4: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    // 0x80041ED8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80041EDC: jal         0x80080C44
    // 0x80041EE0: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_80080C44(rdram, ctx);
        goto after_2;
    // 0x80041EE0: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_2:
    // 0x80041EE4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80041EE8: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x80041EEC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80041EF0: jal         0x80080A54
    // 0x80041EF4: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    func_80080A54(rdram, ctx);
        goto after_3;
    // 0x80041EF4: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    after_3:
    // 0x80041EF8: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80041EFC: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x80041F00: or          $a0, $t0, $v0
    ctx->r4 = ctx->r8 | ctx->r2;
    // 0x80041F04: or          $a1, $t1, $v1
    ctx->r5 = ctx->r9 | ctx->r3;
    // 0x80041F08: sw          $a1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r5;
    // 0x80041F0C: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x80041F10: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80041F14: jal         0x80080C44
    // 0x80041F18: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_80080C44(rdram, ctx);
        goto after_4;
    // 0x80041F18: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_4:
    // 0x80041F1C: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
    // 0x80041F20: beq         $at, $zero, L_80041F30
    if (ctx->r1 == 0) {
        // 0x80041F24: addiu       $a0, $zero, 0x0
        ctx->r4 = ADD32(0, 0X0);
            goto L_80041F30;
    }
    // 0x80041F24: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x80041F28: b           L_80041F34
    // 0x80041F2C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
        goto L_80041F34;
    // 0x80041F2C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_80041F30:
    // 0x80041F30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80041F34:
    // 0x80041F34: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    // 0x80041F38: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80041F3C: jal         0x80080A54
    // 0x80041F40: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_80080A54(rdram, ctx);
        goto after_5;
    // 0x80041F40: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_5:
    // 0x80041F44: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80041F48: lw          $t7, 0x4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X4);
    // 0x80041F4C: or          $a0, $t6, $v0
    ctx->r4 = ctx->r14 | ctx->r2;
    // 0x80041F50: or          $a1, $t7, $v1
    ctx->r5 = ctx->r15 | ctx->r3;
    // 0x80041F54: sw          $a1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r5;
    // 0x80041F58: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x80041F5C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80041F60: jal         0x80080C44
    // 0x80041F64: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_80080C44(rdram, ctx);
        goto after_6;
    // 0x80041F64: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_6:
    // 0x80041F68: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x80041F6C: addiu       $a0, $zero, 0x0
    ctx->r4 = ADD32(0, 0X0);
    // 0x80041F70: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80041F74: jal         0x80080A54
    // 0x80041F78: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_80080A54(rdram, ctx);
        goto after_7;
    // 0x80041F78: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_7:
    // 0x80041F7C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80041F80: lw          $t1, 0x4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X4);
    // 0x80041F84: or          $a0, $t0, $v0
    ctx->r4 = ctx->r8 | ctx->r2;
    // 0x80041F88: or          $a1, $t1, $v1
    ctx->r5 = ctx->r9 | ctx->r3;
    // 0x80041F8C: sw          $a1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r5;
    // 0x80041F90: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x80041F94: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80041F98: jal         0x80080C44
    // 0x80041F9C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_80080C44(rdram, ctx);
        goto after_8;
    // 0x80041F9C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_8:
    // 0x80041FA0: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x80041FA4: lw          $t5, 0x4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X4);
    // 0x80041FA8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80041FAC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80041FB0: or          $a0, $t4, $t6
    ctx->r4 = ctx->r12 | ctx->r14;
    // 0x80041FB4: or          $a1, $t5, $t7
    ctx->r5 = ctx->r13 | ctx->r15;
    // 0x80041FB8: sw          $a1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r5;
    // 0x80041FBC: sw          $a0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r4;
    // 0x80041FC0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80041FC4: jal         0x80080C44
    // 0x80041FC8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_80080C44(rdram, ctx);
        goto after_9;
    // 0x80041FC8: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_9:
    // 0x80041FCC: lw          $t0, 0x0($s2)
    ctx->r8 = MEM_W(ctx->r18, 0X0);
    // 0x80041FD0: lw          $t1, 0x4($s2)
    ctx->r9 = MEM_W(ctx->r18, 0X4);
    // 0x80041FD4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80041FD8: sll         $t4, $s1, 16
    ctx->r12 = S32(ctx->r17 << 16);
    // 0x80041FDC: nor         $t2, $t0, $zero
    ctx->r10 = ~(ctx->r8 | 0);
    // 0x80041FE0: sltiu       $at, $t1, 0x1
    ctx->r1 = ctx->r9 < 0X1 ? 1 : 0;
    // 0x80041FE4: sra         $s1, $t4, 16
    ctx->r17 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80041FE8: addu        $t2, $t2, $at
    ctx->r10 = ADD32(ctx->r10, ctx->r1);
    // 0x80041FEC: slti        $at, $s1, 0x10
    ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
    // 0x80041FF0: negu        $t3, $t1
    ctx->r11 = SUB32(0, ctx->r9);
    // 0x80041FF4: sw          $t3, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r11;
    // 0x80041FF8: bne         $at, $zero, L_80041E94
    if (ctx->r1 != 0) {
        // 0x80041FFC: sw          $t2, 0x0($s2)
        MEM_W(0X0, ctx->r18) = ctx->r10;
            goto L_80041E94;
    }
    // 0x80041FFC: sw          $t2, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r10;
    // 0x80042000: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80042004: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80042008: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8004200C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80042010: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80042014: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80042018: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8004201C: jr          $ra
    // 0x80042020: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x80042020: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80042024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80042024: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80042028: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004202C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80042030: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x80042034: sra         $a0, $t6, 24
    ctx->r4 = S32(SIGNED(ctx->r14) >> 24);
    // 0x80042038: jal         0x8003CD88
    // 0x8004203C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8003CD88(rdram, ctx);
        goto after_0;
    // 0x8004203C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80042040: lb          $t9, 0x1F($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X1F);
    // 0x80042044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80042048: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x8004204C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x80042050: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80042054: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80042058: addiu       $t2, $t2, 0x37B0
    ctx->r10 = ADD32(ctx->r10, 0X37B0);
    // 0x8004205C: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x80042060: jr          $ra
    // 0x80042064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80042064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
