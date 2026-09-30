#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8039DDC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039DDC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039DDCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039DDD0: jal         0x8039D90C
    // 0x8039DDD4: nop

    func_8039D90C(rdram, ctx);
        goto after_0;
    // 0x8039DDD4: nop

    after_0:
    // 0x8039DDD8: lui         $t7, 0x803A
    ctx->r15 = S32(0X803A << 16);
    // 0x8039DDDC: lw          $t7, 0x1EA8($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1EA8);
    // 0x8039DDE0: addiu       $t6, $v0, 0x2
    ctx->r14 = ADD32(ctx->r2, 0X2);
    // 0x8039DDE4: lh          $t8, 0x4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X4);
    // 0x8039DDE8: nop

    // 0x8039DDEC: bne         $t6, $t8, L_8039DE08
    if (ctx->r14 != ctx->r24) {
        // 0x8039DDF0: nop
    
            goto L_8039DE08;
    }
    // 0x8039DDF0: nop

    // 0x8039DDF4: jal         0x8039D9A4
    // 0x8039DDF8: nop

    func_8039D9A4(rdram, ctx);
        goto after_1;
    // 0x8039DDF8: nop

    after_1:
    // 0x8039DDFC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8039DE00: beq         $v0, $at, L_8039DE2C
    if (ctx->r2 == ctx->r1) {
        // 0x8039DE04: nop
    
            goto L_8039DE2C;
    }
    // 0x8039DE04: nop

L_8039DE08:
    // 0x8039DE08: jal         0x8039D90C
    // 0x8039DE0C: nop

    func_8039D90C(rdram, ctx);
        goto after_2;
    // 0x8039DE0C: nop

    after_2:
    // 0x8039DE10: lui         $t0, 0x803A
    ctx->r8 = S32(0X803A << 16);
    // 0x8039DE14: lw          $t0, 0x1EA8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1EA8);
    // 0x8039DE18: addiu       $t9, $v0, 0x1
    ctx->r25 = ADD32(ctx->r2, 0X1);
    // 0x8039DE1C: lh          $t1, 0x4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X4);
    // 0x8039DE20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8039DE24: bne         $t9, $t1, L_8039DE34
    if (ctx->r25 != ctx->r9) {
        // 0x8039DE28: nop
    
            goto L_8039DE34;
    }
    // 0x8039DE28: nop

L_8039DE2C:
    // 0x8039DE2C: b           L_8039DE34
    // 0x8039DE30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8039DE34;
    // 0x8039DE30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8039DE34:
    // 0x8039DE34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039DE38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039DE3C: jr          $ra
    // 0x8039DE40: nop

    return;
    // 0x8039DE40: nop

;}
RECOMP_FUNC void func_8039DE44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039DE44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039DE48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039DE4C: jal         0x8039D90C
    // 0x8039DE50: nop

    func_8039D90C(rdram, ctx);
        goto after_0;
    // 0x8039DE50: nop

    after_0:
    // 0x8039DE54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039DE58: bne         $v0, $zero, L_8039DE6C
    if (ctx->r2 != 0) {
        // 0x8039DE5C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8039DE6C;
    }
    // 0x8039DE5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8039DE60: b           L_8039DE6C
    // 0x8039DE64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8039DE6C;
    // 0x8039DE64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8039DE68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8039DE6C:
    // 0x8039DE6C: jr          $ra
    // 0x8039DE70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8039DE70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8039DE74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039DE74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039DE78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039DE7C: jal         0x80035734
    // 0x8039DE80: nop

    func_80035734(rdram, ctx);
        goto after_0;
    // 0x8039DE80: nop

    after_0:
    // 0x8039DE84: jal         0x8039DDC8
    // 0x8039DE88: nop

    func_8039DDC8(rdram, ctx);
        goto after_1;
    // 0x8039DE88: nop

    after_1:
    // 0x8039DE8C: beq         $v0, $zero, L_8039DEB4
    if (ctx->r2 == 0) {
        // 0x8039DE90: nop
    
            goto L_8039DEB4;
    }
    // 0x8039DE90: nop

    // 0x8039DE94: jal         0x8039DD00
    // 0x8039DE98: nop

    func_8039DD00(rdram, ctx);
        goto after_2;
    // 0x8039DE98: nop

    after_2:
    // 0x8039DE9C: jal         0x8039DD30
    // 0x8039DEA0: nop

    func_8039DD30(rdram, ctx);
        goto after_3;
    // 0x8039DEA0: nop

    after_3:
    // 0x8039DEA4: jal         0x8039DF00
    // 0x8039DEA8: nop

    func_8039DF00(rdram, ctx);
        goto after_4;
    // 0x8039DEA8: nop

    after_4:
    // 0x8039DEAC: b           L_8039DEF4
    // 0x8039DEB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039DEF4;
    // 0x8039DEB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039DEB4:
    // 0x8039DEB4: jal         0x8039D9A4
    // 0x8039DEB8: nop

    func_8039D9A4(rdram, ctx);
        goto after_5;
    // 0x8039DEB8: nop

    after_5:
    // 0x8039DEBC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8039DEC0: bne         $v0, $at, L_8039DECC
    if (ctx->r2 != ctx->r1) {
        // 0x8039DEC4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8039DECC;
    }
    // 0x8039DEC4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8039DEC8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8039DECC:
    // 0x8039DECC: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x8039DED0: addiu       $v0, $v0, 0x1EA0
    ctx->r2 = ADD32(ctx->r2, 0X1EA0);
    // 0x8039DED4: lh          $t6, 0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2);
    // 0x8039DED8: nop

    // 0x8039DEDC: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x8039DEE0: jal         0x8039DD30
    // 0x8039DEE4: sh          $t7, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r15;
    func_8039DD30(rdram, ctx);
        goto after_6;
    // 0x8039DEE4: sh          $t7, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r15;
    after_6:
    // 0x8039DEE8: jal         0x8039DF00
    // 0x8039DEEC: nop

    func_8039DF00(rdram, ctx);
        goto after_7;
    // 0x8039DEEC: nop

    after_7:
    // 0x8039DEF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039DEF4:
    // 0x8039DEF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039DEF8: jr          $ra
    // 0x8039DEFC: nop

    return;
    // 0x8039DEFC: nop

;}
RECOMP_FUNC void func_8039DF00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039DF00: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8039DF04: addiu       $a1, $a1, 0x1EA0
    ctx->r5 = ADD32(ctx->r5, 0X1EA0);
    // 0x8039DF08: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x8039DF0C: lh          $t8, 0x2($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X2);
    // 0x8039DF10: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x8039DF14: nop

    // 0x8039DF18: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8039DF1C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8039DF20: nop

    // 0x8039DF24: slti        $at, $v1, 0xF6
    ctx->r1 = SIGNED(ctx->r3) < 0XF6 ? 1 : 0;
    // 0x8039DF28: bne         $at, $zero, L_8039DF44
    if (ctx->r1 != 0) {
        // 0x8039DF2C: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_8039DF44;
    }
    // 0x8039DF2C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x8039DF30: lbu         $t9, 0x1($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X1);
    // 0x8039DF34: sll         $t0, $a0, 8
    ctx->r8 = S32(ctx->r4 << 8);
    // 0x8039DF38: or          $t1, $t9, $t0
    ctx->r9 = ctx->r25 | ctx->r8;
    // 0x8039DF3C: jr          $ra
    // 0x8039DF40: sh          $t1, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r9;
    return;
    // 0x8039DF40: sh          $t1, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r9;
L_8039DF44:
    // 0x8039DF44: sh          $v1, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r3;
    // 0x8039DF48: jr          $ra
    // 0x8039DF4C: nop

    return;
    // 0x8039DF4C: nop

;}
RECOMP_FUNC void func_8039DF50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039DF50: jr          $ra
    // 0x8039DF54: nop

    return;
    // 0x8039DF54: nop

;}
RECOMP_FUNC void func_8039DF58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039DF58: lui         $t8, 0x803A
    ctx->r24 = S32(0X803A << 16);
    // 0x8039DF5C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8039DF60: lui         $v1, 0x803A
    ctx->r3 = S32(0X803A << 16);
    // 0x8039DF64: addiu       $t8, $t8, 0x187C
    ctx->r24 = ADD32(ctx->r24, 0X187C);
    // 0x8039DF68: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x8039DF6C: addiu       $v1, $v1, 0x1EA0
    ctx->r3 = ADD32(ctx->r3, 0X1EA0);
    // 0x8039DF70: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8039DF74: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8039DF78: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8039DF7C: sw          $t9, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r25;
    // 0x8039DF80: jal         0x8039DF00
    // 0x8039DF84: sh          $zero, 0x2($v1)
    MEM_H(0X2, ctx->r3) = 0;
    func_8039DF00(rdram, ctx);
        goto after_0;
    // 0x8039DF84: sh          $zero, 0x2($v1)
    MEM_H(0X2, ctx->r3) = 0;
    after_0:
    // 0x8039DF88: lui         $v1, 0x803A
    ctx->r3 = S32(0X803A << 16);
    // 0x8039DF8C: addiu       $v1, $v1, 0x1EA0
    ctx->r3 = ADD32(ctx->r3, 0X1EA0);
    // 0x8039DF90: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x8039DF94: addiu       $t1, $zero, 0x14
    ctx->r9 = ADD32(0, 0X14);
    // 0x8039DF98: lh          $t0, 0x4($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X4);
    // 0x8039DF9C: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x8039DFA0: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x8039DFA4: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    // 0x8039DFA8: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8039DFAC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8039DFB0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8039DFB4: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x8039DFB8: lh          $t2, 0x6($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X6);
    // 0x8039DFBC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8039DFC0: ori         $at, $at, 0xFFA8
    ctx->r1 = ctx->r1 | 0XFFA8;
    // 0x8039DFC4: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x8039DFC8: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8039DFCC: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    // 0x8039DFD0: jal         0x8002F528
    // 0x8039DFD4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    func_8002F528(rdram, ctx);
        goto after_1;
    // 0x8039DFD4: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    after_1:
    // 0x8039DFD8: lui         $v1, 0x803A
    ctx->r3 = S32(0X803A << 16);
    // 0x8039DFDC: addiu       $v1, $v1, 0x1EA0
    ctx->r3 = ADD32(ctx->r3, 0X1EA0);
    // 0x8039DFE0: lw          $t4, 0x8($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X8);
    // 0x8039DFE4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8039DFE8: lbu         $t5, 0xC($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0XC);
    // 0x8039DFEC: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
    // 0x8039DFF0: jal         0x8039DD30
    // 0x8039DFF4: sb          $t5, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r13;
    func_8039DD30(rdram, ctx);
        goto after_2;
    // 0x8039DFF4: sb          $t5, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r13;
    after_2:
    // 0x8039DFF8: jal         0x8039DF00
    // 0x8039DFFC: nop

    func_8039DF00(rdram, ctx);
        goto after_3;
    // 0x8039DFFC: nop

    after_3:
    // 0x8039E000: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8039E004: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8039E008: jr          $ra
    // 0x8039E00C: nop

    return;
    // 0x8039E00C: nop

;}
RECOMP_FUNC void func_8039E010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039E010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039E014: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039E018: jal         0x8039D90C
    // 0x8039E01C: nop

    func_8039D90C(rdram, ctx);
        goto after_0;
    // 0x8039E01C: nop

    after_0:
    // 0x8039E020: lui         $t6, 0x803A
    ctx->r14 = S32(0X803A << 16);
    // 0x8039E024: lw          $t6, 0x1EA8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1EA8);
    // 0x8039E028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039E02C: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8039E030: sll         $t8, $v0, 4
    ctx->r24 = S32(ctx->r2 << 4);
    // 0x8039E034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039E038: jr          $ra
    // 0x8039E03C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    return;
    // 0x8039E03C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
;}
RECOMP_FUNC void func_8039E040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039E040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039E044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039E048: jal         0x8039D958
    // 0x8039E04C: nop

    func_8039D958(rdram, ctx);
        goto after_0;
    // 0x8039E04C: nop

    after_0:
    // 0x8039E050: lui         $t6, 0x803A
    ctx->r14 = S32(0X803A << 16);
    // 0x8039E054: lw          $t6, 0x1EA8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1EA8);
    // 0x8039E058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039E05C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8039E060: sll         $t8, $v0, 4
    ctx->r24 = S32(ctx->r2 << 4);
    // 0x8039E064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039E068: jr          $ra
    // 0x8039E06C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    return;
    // 0x8039E06C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
;}
RECOMP_FUNC void func_8039E070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039E070: lui         $v1, 0x803A
    ctx->r3 = S32(0X803A << 16);
    // 0x8039E074: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x8039E078: addiu       $v0, $v0, 0x1EC0
    ctx->r2 = ADD32(ctx->r2, 0X1EC0);
    // 0x8039E07C: addiu       $v1, $v1, 0x1EB8
    ctx->r3 = ADD32(ctx->r3, 0X1EB8);
L_8039E080:
    // 0x8039E080: lbu         $t6, 0x2($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X2);
    // 0x8039E084: nop

    // 0x8039E088: beq         $t6, $zero, L_8039E098
    if (ctx->r14 == 0) {
        // 0x8039E08C: nop
    
            goto L_8039E098;
    }
    // 0x8039E08C: nop

    // 0x8039E090: jr          $ra
    // 0x8039E094: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8039E094: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8039E098:
    // 0x8039E098: lbu         $t7, 0x3($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X3);
    // 0x8039E09C: nop

    // 0x8039E0A0: beq         $t7, $zero, L_8039E0B0
    if (ctx->r15 == 0) {
        // 0x8039E0A4: nop
    
            goto L_8039E0B0;
    }
    // 0x8039E0A4: nop

    // 0x8039E0A8: jr          $ra
    // 0x8039E0AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8039E0AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8039E0B0:
    // 0x8039E0B0: lbu         $t8, 0x4($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X4);
    // 0x8039E0B4: nop

    // 0x8039E0B8: beq         $t8, $zero, L_8039E0C8
    if (ctx->r24 == 0) {
        // 0x8039E0BC: nop
    
            goto L_8039E0C8;
    }
    // 0x8039E0BC: nop

    // 0x8039E0C0: jr          $ra
    // 0x8039E0C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8039E0C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8039E0C8:
    // 0x8039E0C8: lbu         $t9, 0x5($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X5);
    // 0x8039E0CC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8039E0D0: beq         $t9, $zero, L_8039E0E0
    if (ctx->r25 == 0) {
        // 0x8039E0D4: nop
    
            goto L_8039E0E0;
    }
    // 0x8039E0D4: nop

    // 0x8039E0D8: jr          $ra
    // 0x8039E0DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8039E0DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8039E0E0:
    // 0x8039E0E0: bne         $v1, $v0, L_8039E080
    if (ctx->r3 != ctx->r2) {
        // 0x8039E0E4: nop
    
            goto L_8039E080;
    }
    // 0x8039E0E4: nop

    // 0x8039E0E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8039E0EC: jr          $ra
    // 0x8039E0F0: nop

    return;
    // 0x8039E0F0: nop

;}
RECOMP_FUNC void func_8039E0F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039E0F4: lui         $t6, 0x803A
    ctx->r14 = S32(0X803A << 16);
    // 0x8039E0F8: lh          $t6, 0x1EB8($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X1EB8);
    // 0x8039E0FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039E100: bne         $t6, $zero, L_8039E120
    if (ctx->r14 != 0) {
        // 0x8039E104: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8039E120;
    }
    // 0x8039E104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039E108: jal         0x8039E070
    // 0x8039E10C: nop

    func_8039E070(rdram, ctx);
        goto after_0;
    // 0x8039E10C: nop

    after_0:
    // 0x8039E110: beq         $v0, $zero, L_8039E124
    if (ctx->r2 == 0) {
        // 0x8039E114: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8039E124;
    }
    // 0x8039E114: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8039E118: b           L_8039E124
    // 0x8039E11C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8039E124;
    // 0x8039E11C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8039E120:
    // 0x8039E120: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8039E124:
    // 0x8039E124: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039E128: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039E12C: jr          $ra
    // 0x8039E130: nop

    return;
    // 0x8039E130: nop

;}
RECOMP_FUNC void func_8039E134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039E134: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8039E138: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039E13C: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x8039E140: addiu       $v0, $v0, 0x1EC0
    ctx->r2 = ADD32(ctx->r2, 0X1EC0);
    // 0x8039E144: addiu       $a0, $a0, 0x1EB8
    ctx->r4 = ADD32(ctx->r4, 0X1EB8);
    // 0x8039E148: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
L_8039E14C:
    // 0x8039E14C: lbu         $t7, 0x3($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X3);
    // 0x8039E150: lbu         $t8, 0x4($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X4);
    // 0x8039E154: lbu         $t9, 0x5($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X5);
    // 0x8039E158: lbu         $t6, 0x2($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X2);
    // 0x8039E15C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8039E160: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8039E164: sb          $t7, 0x14D($v1)
    MEM_B(0X14D, ctx->r3) = ctx->r15;
    // 0x8039E168: sb          $t8, 0x14E($v1)
    MEM_B(0X14E, ctx->r3) = ctx->r24;
    // 0x8039E16C: sb          $t9, 0x14F($v1)
    MEM_B(0X14F, ctx->r3) = ctx->r25;
    // 0x8039E170: bne         $a0, $v0, L_8039E14C
    if (ctx->r4 != ctx->r2) {
        // 0x8039E174: sb          $t6, 0x14C($v1)
        MEM_B(0X14C, ctx->r3) = ctx->r14;
            goto L_8039E14C;
    }
    // 0x8039E174: sb          $t6, 0x14C($v1)
    MEM_B(0X14C, ctx->r3) = ctx->r14;
    // 0x8039E178: jr          $ra
    // 0x8039E17C: nop

    return;
    // 0x8039E17C: nop

;}
RECOMP_FUNC void func_8039E180(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039E180: jr          $ra
    // 0x8039E184: nop

    return;
    // 0x8039E184: nop

;}
RECOMP_FUNC void func_8039E188(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039E188: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x8039E18C: addiu       $v0, $v0, 0x1EB8
    ctx->r2 = ADD32(ctx->r2, 0X1EB8);
    // 0x8039E190: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x8039E194: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039E198: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039E19C: addu        $a0, $v0, $a1
    ctx->r4 = ADD32(ctx->r2, ctx->r5);
    // 0x8039E1A0: jal         0x8039D7F4
    // 0x8039E1A4: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8039D7F4(rdram, ctx);
        goto after_0;
    // 0x8039E1A4: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_0:
    // 0x8039E1A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039E1AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039E1B0: jr          $ra
    // 0x8039E1B4: nop

    return;
    // 0x8039E1B4: nop

;}
RECOMP_FUNC void func_8039E1B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039E1B8: lui         $v1, 0x803A
    ctx->r3 = S32(0X803A << 16);
    // 0x8039E1BC: addiu       $v1, $v1, 0x1EB8
    ctx->r3 = ADD32(ctx->r3, 0X1EB8);
    // 0x8039E1C0: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x8039E1C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039E1C8: blez        $v0, L_8039E1FC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8039E1CC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8039E1FC;
    }
    // 0x8039E1CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039E1D0: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x8039E1D4: jal         0x8039E188
    // 0x8039E1D8: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
    func_8039E188(rdram, ctx);
        goto after_0;
    // 0x8039E1D8: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
    after_0:
    // 0x8039E1DC: lui         $v1, 0x803A
    ctx->r3 = S32(0X803A << 16);
    // 0x8039E1E0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8039E1E4: bne         $v0, $at, L_8039E1FC
    if (ctx->r2 != ctx->r1) {
        // 0x8039E1E8: addiu       $v1, $v1, 0x1EB8
        ctx->r3 = ADD32(ctx->r3, 0X1EB8);
            goto L_8039E1FC;
    }
    // 0x8039E1E8: addiu       $v1, $v1, 0x1EB8
    ctx->r3 = ADD32(ctx->r3, 0X1EB8);
    // 0x8039E1EC: lh          $t7, 0x0($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X0);
    // 0x8039E1F0: nop

    // 0x8039E1F4: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x8039E1F8: sh          $t8, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r24;
L_8039E1FC:
    // 0x8039E1FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039E200: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039E204: jr          $ra
    // 0x8039E208: nop

    return;
    // 0x8039E208: nop

;}
RECOMP_FUNC void func_8039E20C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039E20C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8039E210: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039E214: jal         0x8039E188
    // 0x8039E218: nop

    func_8039E188(rdram, ctx);
        goto after_0;
    // 0x8039E218: nop

    after_0:
    // 0x8039E21C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8039E220: bne         $v0, $at, L_8039E22C
    if (ctx->r2 != ctx->r1) {
        // 0x8039E224: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8039E22C;
    }
    // 0x8039E224: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8039E228: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8039E22C:
    // 0x8039E22C: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039E230: addiu       $a0, $a0, 0x1EB8
    ctx->r4 = ADD32(ctx->r4, 0X1EB8);
    // 0x8039E234: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8039E238: addiu       $t7, $zero, 0x8
    ctx->r15 = ADD32(0, 0X8);
    // 0x8039E23C: subu        $t8, $t7, $v1
    ctx->r24 = SUB32(ctx->r15, ctx->r3);
    // 0x8039E240: slt         $at, $t6, $t8
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8039E244: bne         $at, $zero, L_8039E254
    if (ctx->r1 != 0) {
        // 0x8039E248: nop
    
            goto L_8039E254;
    }
    // 0x8039E248: nop

    // 0x8039E24C: b           L_8039E278
    // 0x8039E250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8039E278;
    // 0x8039E250: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8039E254:
    // 0x8039E254: jal         0x80035734
    // 0x8039E258: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80035734(rdram, ctx);
        goto after_1;
    // 0x8039E258: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x8039E25C: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039E260: addiu       $a0, $a0, 0x1EB8
    ctx->r4 = ADD32(ctx->r4, 0X1EB8);
    // 0x8039E264: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8039E268: lh          $t9, 0x0($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X0);
    // 0x8039E26C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8039E270: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x8039E274: sh          $t0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r8;
L_8039E278:
    // 0x8039E278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039E27C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8039E280: jr          $ra
    // 0x8039E284: nop

    return;
    // 0x8039E284: nop

;}
RECOMP_FUNC void func_8039E288(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039E288: slti        $at, $a0, 0x8
    ctx->r1 = SIGNED(ctx->r4) < 0X8 ? 1 : 0;
    // 0x8039E28C: beq         $at, $zero, L_8039E31C
    if (ctx->r1 == 0) {
        // 0x8039E290: addiu       $v1, $a0, 0x1
        ctx->r3 = ADD32(ctx->r4, 0X1);
            goto L_8039E31C;
    }
    // 0x8039E290: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x8039E294: slti        $at, $v1, 0x8
    ctx->r1 = SIGNED(ctx->r3) < 0X8 ? 1 : 0;
    // 0x8039E298: beq         $at, $zero, L_8039E314
    if (ctx->r1 == 0) {
        // 0x8039E29C: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_8039E314;
    }
    // 0x8039E29C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8039E2A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8039E2A4: subu        $a1, $a2, $v1
    ctx->r5 = SUB32(ctx->r6, ctx->r3);
    // 0x8039E2A8: andi        $t6, $a1, 0x3
    ctx->r14 = ctx->r5 & 0X3;
    // 0x8039E2AC: beq         $t6, $zero, L_8039E2D8
    if (ctx->r14 == 0) {
        // 0x8039E2B0: addu        $a0, $t6, $v1
        ctx->r4 = ADD32(ctx->r14, ctx->r3);
            goto L_8039E2D8;
    }
    // 0x8039E2B0: addu        $a0, $t6, $v1
    ctx->r4 = ADD32(ctx->r14, ctx->r3);
    // 0x8039E2B4: lui         $t7, 0x803A
    ctx->r15 = S32(0X803A << 16);
    // 0x8039E2B8: addiu       $t7, $t7, 0x1EB8
    ctx->r15 = ADD32(ctx->r15, 0X1EB8);
    // 0x8039E2BC: addu        $v1, $v1, $t7
    ctx->r3 = ADD32(ctx->r3, ctx->r15);
L_8039E2C0:
    // 0x8039E2C0: lbu         $t8, 0x2($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X2);
    // 0x8039E2C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8039E2C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8039E2CC: bne         $a0, $v0, L_8039E2C0
    if (ctx->r4 != ctx->r2) {
        // 0x8039E2D0: sb          $t8, 0x0($v1)
        MEM_B(0X0, ctx->r3) = ctx->r24;
            goto L_8039E2C0;
    }
    // 0x8039E2D0: sb          $t8, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r24;
    // 0x8039E2D4: beq         $v0, $a2, L_8039E314
    if (ctx->r2 == ctx->r6) {
        // 0x8039E2D8: lui         $t9, 0x803A
        ctx->r25 = S32(0X803A << 16);
            goto L_8039E314;
    }
L_8039E2D8:
    // 0x8039E2D8: lui         $t9, 0x803A
    ctx->r25 = S32(0X803A << 16);
    // 0x8039E2DC: addiu       $t9, $t9, 0x1EB8
    ctx->r25 = ADD32(ctx->r25, 0X1EB8);
    // 0x8039E2E0: addu        $v1, $v0, $t9
    ctx->r3 = ADD32(ctx->r2, ctx->r25);
    // 0x8039E2E4: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x8039E2E8: addiu       $v0, $v0, 0x1EC0
    ctx->r2 = ADD32(ctx->r2, 0X1EC0);
L_8039E2EC:
    // 0x8039E2EC: lbu         $t1, 0x3($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X3);
    // 0x8039E2F0: lbu         $t2, 0x4($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X4);
    // 0x8039E2F4: lbu         $t3, 0x5($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X5);
    // 0x8039E2F8: lbu         $t0, 0x2($v1)
    ctx->r8 = MEM_BU(ctx->r3, 0X2);
    // 0x8039E2FC: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8039E300: sb          $t1, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = ctx->r9;
    // 0x8039E304: sb          $t2, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r10;
    // 0x8039E308: sb          $t3, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r11;
    // 0x8039E30C: bne         $v1, $v0, L_8039E2EC
    if (ctx->r3 != ctx->r2) {
        // 0x8039E310: sb          $t0, -0x3($v1)
        MEM_B(-0X3, ctx->r3) = ctx->r8;
            goto L_8039E2EC;
    }
    // 0x8039E310: sb          $t0, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = ctx->r8;
L_8039E314:
    // 0x8039E314: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039E318: sb          $zero, 0x1EC1($at)
    MEM_B(0X1EC1, ctx->r1) = 0;
L_8039E31C:
    // 0x8039E31C: jr          $ra
    // 0x8039E320: nop

    return;
    // 0x8039E320: nop

;}
RECOMP_FUNC void func_8039E324(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039E324: lui         $t6, 0x803A
    ctx->r14 = S32(0X803A << 16);
    // 0x8039E328: lhu         $t6, 0x1EA4($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X1EA4);
    // 0x8039E32C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8039E330: slti        $at, $t6, 0x100
    ctx->r1 = SIGNED(ctx->r14) < 0X100 ? 1 : 0;
    // 0x8039E334: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8039E338: bne         $at, $zero, L_8039E3D0
    if (ctx->r1 != 0) {
        // 0x8039E33C: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_8039E3D0;
    }
    // 0x8039E33C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8039E340: lui         $s0, 0x803A
    ctx->r16 = S32(0X803A << 16);
    // 0x8039E344: addiu       $s0, $s0, 0x1EB8
    ctx->r16 = ADD32(ctx->r16, 0X1EB8);
    // 0x8039E348: lh          $t7, 0x0($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X0);
    // 0x8039E34C: nop

    // 0x8039E350: slti        $at, $t7, 0x7
    ctx->r1 = SIGNED(ctx->r15) < 0X7 ? 1 : 0;
    // 0x8039E354: beq         $at, $zero, L_8039E450
    if (ctx->r1 == 0) {
        // 0x8039E358: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8039E450;
    }
    // 0x8039E358: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8039E35C: jal         0x8039E188
    // 0x8039E360: nop

    func_8039E188(rdram, ctx);
        goto after_0;
    // 0x8039E360: nop

    after_0:
    // 0x8039E364: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8039E368: bne         $v0, $at, L_8039E3A0
    if (ctx->r2 != ctx->r1) {
        // 0x8039E36C: nop
    
            goto L_8039E3A0;
    }
    // 0x8039E36C: nop

    // 0x8039E370: lh          $a2, 0x0($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X0);
    // 0x8039E374: nop

    // 0x8039E378: addu        $a0, $s0, $a2
    ctx->r4 = ADD32(ctx->r16, ctx->r6);
    // 0x8039E37C: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x8039E380: jal         0x8039D7F4
    // 0x8039E384: addiu       $a1, $a2, 0x1
    ctx->r5 = ADD32(ctx->r6, 0X1);
    func_8039D7F4(rdram, ctx);
        goto after_1;
    // 0x8039E384: addiu       $a1, $a2, 0x1
    ctx->r5 = ADD32(ctx->r6, 0X1);
    after_1:
    // 0x8039E388: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8039E38C: bne         $v0, $at, L_8039E3A0
    if (ctx->r2 != ctx->r1) {
        // 0x8039E390: nop
    
            goto L_8039E3A0;
    }
    // 0x8039E390: nop

    // 0x8039E394: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    // 0x8039E398: jal         0x8039E288
    // 0x8039E39C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8039E288(rdram, ctx);
        goto after_2;
    // 0x8039E39C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_2:
L_8039E3A0:
    // 0x8039E3A0: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x8039E3A4: lhu         $t2, 0x1EA4($v0)
    ctx->r10 = MEM_HU(ctx->r2, 0X1EA4);
    // 0x8039E3A8: lh          $t0, 0x0($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X0);
    // 0x8039E3AC: andi        $t8, $t2, 0xFF00
    ctx->r24 = ctx->r10 & 0XFF00;
    // 0x8039E3B0: sra         $t9, $t8, 8
    ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
    // 0x8039E3B4: addu        $t1, $s0, $t0
    ctx->r9 = ADD32(ctx->r16, ctx->r8);
    // 0x8039E3B8: sb          $t9, 0x2($t1)
    MEM_B(0X2, ctx->r9) = ctx->r25;
    // 0x8039E3BC: lh          $t3, 0x0($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X0);
    // 0x8039E3C0: nop

    // 0x8039E3C4: addu        $t4, $s0, $t3
    ctx->r12 = ADD32(ctx->r16, ctx->r11);
    // 0x8039E3C8: b           L_8039E44C
    // 0x8039E3CC: sb          $t2, 0x3($t4)
    MEM_B(0X3, ctx->r12) = ctx->r10;
        goto L_8039E44C;
    // 0x8039E3CC: sb          $t2, 0x3($t4)
    MEM_B(0X3, ctx->r12) = ctx->r10;
L_8039E3D0:
    // 0x8039E3D0: lui         $s0, 0x803A
    ctx->r16 = S32(0X803A << 16);
    // 0x8039E3D4: addiu       $s0, $s0, 0x1EB8
    ctx->r16 = ADD32(ctx->r16, 0X1EB8);
    // 0x8039E3D8: lh          $a2, 0x0($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X0);
    // 0x8039E3DC: nop

    // 0x8039E3E0: addu        $a0, $s0, $a2
    ctx->r4 = ADD32(ctx->r16, ctx->r6);
    // 0x8039E3E4: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8039E3E8: jal         0x8039D7F4
    // 0x8039E3EC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_8039D7F4(rdram, ctx);
        goto after_3;
    // 0x8039E3EC: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_3:
    // 0x8039E3F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8039E3F4: bne         $v0, $at, L_8039E414
    if (ctx->r2 != ctx->r1) {
        // 0x8039E3F8: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8039E414;
    }
    // 0x8039E3F8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8039E3FC: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    // 0x8039E400: jal         0x8039E288
    // 0x8039E404: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    func_8039E288(rdram, ctx);
        goto after_4;
    // 0x8039E404: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    after_4:
    // 0x8039E408: b           L_8039E43C
    // 0x8039E40C: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
        goto L_8039E43C;
    // 0x8039E40C: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x8039E410: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
L_8039E414:
    // 0x8039E414: bne         $v0, $at, L_8039E438
    if (ctx->r2 != ctx->r1) {
        // 0x8039E418: nop
    
            goto L_8039E438;
    }
    // 0x8039E418: nop

    // 0x8039E41C: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    // 0x8039E420: jal         0x8039E288
    // 0x8039E424: nop

    func_8039E288(rdram, ctx);
        goto after_5;
    // 0x8039E424: nop

    after_5:
    // 0x8039E428: lh          $t5, 0x0($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X0);
    // 0x8039E42C: nop

    // 0x8039E430: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x8039E434: sh          $t6, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r14;
L_8039E438:
    // 0x8039E438: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
L_8039E43C:
    // 0x8039E43C: lui         $t7, 0x803A
    ctx->r15 = S32(0X803A << 16);
    // 0x8039E440: lhu         $t7, 0x1EA4($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X1EA4);
    // 0x8039E444: addu        $t0, $s0, $t8
    ctx->r8 = ADD32(ctx->r16, ctx->r24);
    // 0x8039E448: sb          $t7, 0x2($t0)
    MEM_B(0X2, ctx->r8) = ctx->r15;
L_8039E44C:
    // 0x8039E44C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8039E450:
    // 0x8039E450: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8039E454: jr          $ra
    // 0x8039E458: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8039E458: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8039E45C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039E45C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8039E460: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8039E464: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8039E468: jal         0x8039E188
    // 0x8039E46C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8039E188(rdram, ctx);
        goto after_0;
    // 0x8039E46C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8039E470: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8039E474: bne         $v0, $at, L_8039E494
    if (ctx->r2 != ctx->r1) {
        // 0x8039E478: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8039E494;
    }
    // 0x8039E478: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8039E47C: lui         $s1, 0x803A
    ctx->r17 = S32(0X803A << 16);
    // 0x8039E480: addiu       $s1, $s1, 0x1EB8
    ctx->r17 = ADD32(ctx->r17, 0X1EB8);
    // 0x8039E484: lh          $t6, 0x0($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X0);
    // 0x8039E488: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x8039E48C: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8039E490: sh          $t7, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r15;
L_8039E494:
    // 0x8039E494: lui         $s1, 0x803A
    ctx->r17 = S32(0X803A << 16);
    // 0x8039E498: blez        $s0, L_8039E4B8
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8039E49C: addiu       $s1, $s1, 0x1EB8
        ctx->r17 = ADD32(ctx->r17, 0X1EB8);
            goto L_8039E4B8;
    }
    // 0x8039E49C: addiu       $s1, $s1, 0x1EB8
    ctx->r17 = ADD32(ctx->r17, 0X1EB8);
L_8039E4A0:
    // 0x8039E4A0: lh          $a0, 0x0($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X0);
    // 0x8039E4A4: jal         0x8039E288
    // 0x8039E4A8: nop

    func_8039E288(rdram, ctx);
        goto after_1;
    // 0x8039E4A8: nop

    after_1:
    // 0x8039E4AC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x8039E4B0: bgtz        $s0, L_8039E4A0
    if (SIGNED(ctx->r16) > 0) {
        // 0x8039E4B4: nop
    
            goto L_8039E4A0;
    }
    // 0x8039E4B4: nop

L_8039E4B8:
    // 0x8039E4B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8039E4BC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8039E4C0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8039E4C4: jr          $ra
    // 0x8039E4C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8039E4C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8039E4CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039E4CC: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x8039E4D0: lui         $v1, 0x803A
    ctx->r3 = S32(0X803A << 16);
    // 0x8039E4D4: addiu       $v0, $v0, 0x1ED0
    ctx->r2 = ADD32(ctx->r2, 0X1ED0);
    // 0x8039E4D8: addiu       $v1, $v1, 0x1EBA
    ctx->r3 = ADD32(ctx->r3, 0X1EBA);
    // 0x8039E4DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8039E4E0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_8039E4E4:
    // 0x8039E4E4: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8039E4E8: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8039E4EC: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
    // 0x8039E4F0: lbu         $t7, 0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1);
    // 0x8039E4F4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8039E4F8: sb          $t7, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = ctx->r15;
    // 0x8039E4FC: lbu         $t8, 0x2($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2);
    // 0x8039E500: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8039E504: sb          $t8, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = ctx->r24;
    // 0x8039E508: lbu         $t9, -0x1($v0)
    ctx->r25 = MEM_BU(ctx->r2, -0X1);
    // 0x8039E50C: bne         $a0, $a1, L_8039E4E4
    if (ctx->r4 != ctx->r5) {
        // 0x8039E510: sb          $t9, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r25;
            goto L_8039E4E4;
    }
    // 0x8039E510: sb          $t9, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r25;
    // 0x8039E514: jr          $ra
    // 0x8039E518: nop

    return;
    // 0x8039E518: nop

;}
RECOMP_FUNC void func_8039E51C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039E51C: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x8039E520: lui         $v1, 0x803A
    ctx->r3 = S32(0X803A << 16);
    // 0x8039E524: addiu       $v0, $v0, 0x1EE0
    ctx->r2 = ADD32(ctx->r2, 0X1EE0);
    // 0x8039E528: addiu       $v1, $v1, 0x1EBA
    ctx->r3 = ADD32(ctx->r3, 0X1EBA);
    // 0x8039E52C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8039E530: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_8039E534:
    // 0x8039E534: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x8039E538: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8039E53C: sb          $t6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r14;
    // 0x8039E540: lbu         $t7, 0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1);
    // 0x8039E544: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8039E548: sb          $t7, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = ctx->r15;
    // 0x8039E54C: lbu         $t8, 0x2($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2);
    // 0x8039E550: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8039E554: sb          $t8, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = ctx->r24;
    // 0x8039E558: lbu         $t9, -0x1($v0)
    ctx->r25 = MEM_BU(ctx->r2, -0X1);
    // 0x8039E55C: bne         $a0, $a1, L_8039E534
    if (ctx->r4 != ctx->r5) {
        // 0x8039E560: sb          $t9, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r25;
            goto L_8039E534;
    }
    // 0x8039E560: sb          $t9, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r25;
    // 0x8039E564: jr          $ra
    // 0x8039E568: nop

    return;
    // 0x8039E568: nop

;}
RECOMP_FUNC void func_8039E56C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039E56C: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x8039E570: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039E574: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8039E578: lui         $a2, 0x803A
    ctx->r6 = S32(0X803A << 16);
    // 0x8039E57C: addiu       $v0, $v0, 0x1ED8
    ctx->r2 = ADD32(ctx->r2, 0X1ED8);
    // 0x8039E580: addiu       $a2, $a2, 0x1ED8
    ctx->r6 = ADD32(ctx->r6, 0X1ED8);
    // 0x8039E584: addiu       $a1, $a1, 0x1ED0
    ctx->r5 = ADD32(ctx->r5, 0X1ED0);
    // 0x8039E588: addiu       $a0, $a0, 0x1EB8
    ctx->r4 = ADD32(ctx->r4, 0X1EB8);
L_8039E58C:
    // 0x8039E58C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8039E590: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x8039E594: sb          $v1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r3;
    // 0x8039E598: sb          $v1, -0x4($a1)
    MEM_B(-0X4, ctx->r5) = ctx->r3;
    // 0x8039E59C: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x8039E5A0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8039E5A4: sb          $v1, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r3;
    // 0x8039E5A8: sb          $v1, -0x3($a1)
    MEM_B(-0X3, ctx->r5) = ctx->r3;
    // 0x8039E5AC: lbu         $v1, -0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, -0X2);
    // 0x8039E5B0: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8039E5B4: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x8039E5B8: sb          $v1, -0x2($a1)
    MEM_B(-0X2, ctx->r5) = ctx->r3;
    // 0x8039E5BC: lbu         $v1, -0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, -0X1);
    // 0x8039E5C0: nop

    // 0x8039E5C4: sb          $v1, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r3;
    // 0x8039E5C8: bne         $a1, $a2, L_8039E58C
    if (ctx->r5 != ctx->r6) {
        // 0x8039E5CC: sb          $v1, -0x1($a1)
        MEM_B(-0X1, ctx->r5) = ctx->r3;
            goto L_8039E58C;
    }
    // 0x8039E5CC: sb          $v1, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r3;
    // 0x8039E5D0: jr          $ra
    // 0x8039E5D4: nop

    return;
    // 0x8039E5D4: nop

;}
RECOMP_FUNC void func_8039E5D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039E5D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039E5DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039E5E0: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039E5E4: jal         0x803F8BD0
    // 0x8039E5E8: addiu       $a0, $a0, 0x1EBA
    ctx->r4 = ADD32(ctx->r4, 0X1EBA);
    LOOKUP_FUNC(0x803F8BD0)(rdram, ctx);
        goto after_0;
    // 0x8039E5E8: addiu       $a0, $a0, 0x1EBA
    ctx->r4 = ADD32(ctx->r4, 0X1EBA);
    after_0:
    // 0x8039E5EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039E5F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039E5F4: jr          $ra
    // 0x8039E5F8: nop

    return;
    // 0x8039E5F8: nop

;}
RECOMP_FUNC void func_8039E5FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039E5FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8039E600: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8039E604: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x8039E608: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8039E60C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x8039E610: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8039E614: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8039E618: jal         0x8039D734
    // 0x8039E61C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8039D734(rdram, ctx);
        goto after_0;
    // 0x8039E61C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8039E620: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x8039E624: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8039E628: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x8039E62C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8039E630: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8039E634: jal         0x8039D734
    // 0x8039E638: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8039D734(rdram, ctx);
        goto after_1;
    // 0x8039E638: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x8039E63C: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x8039E640: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8039E644: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x8039E648: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8039E64C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8039E650: jal         0x8039D734
    // 0x8039E654: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8039D734(rdram, ctx);
        goto after_2;
    // 0x8039E654: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x8039E658: jal         0x8039D5E0
    // 0x8039E65C: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    func_8039D5E0(rdram, ctx);
        goto after_3;
    // 0x8039E65C: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_3:
    // 0x8039E660: addiu       $t9, $zero, 0xF0
    ctx->r25 = ADD32(0, 0XF0);
    // 0x8039E664: addiu       $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
    // 0x8039E668: addiu       $t1, $zero, 0x30
    ctx->r9 = ADD32(0, 0X30);
    // 0x8039E66C: addiu       $t2, $zero, 0xB3
    ctx->r10 = ADD32(0, 0XB3);
    // 0x8039E670: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x8039E674: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8039E678: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8039E67C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8039E680: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8039E684: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x8039E688: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x8039E68C: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    // 0x8039E690: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8039E694: jal         0x8004A5E4
    // 0x8039E698: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_8004A5E4(rdram, ctx);
        goto after_4;
    // 0x8039E698: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_4:
    // 0x8039E69C: jal         0x8039D5E0
    // 0x8039E6A0: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    func_8039D5E0(rdram, ctx);
        goto after_5;
    // 0x8039E6A0: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_5:
    // 0x8039E6A4: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x8039E6A8: sb          $t3, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r11;
    // 0x8039E6AC: jal         0x8039D5E0
    // 0x8039E6B0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_8039D5E0(rdram, ctx);
        goto after_6;
    // 0x8039E6B0: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_6:
    // 0x8039E6B4: addiu       $t4, $zero, 0xF0
    ctx->r12 = ADD32(0, 0XF0);
    // 0x8039E6B8: addiu       $t5, $zero, 0x68
    ctx->r13 = ADD32(0, 0X68);
    // 0x8039E6BC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8039E6C0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8039E6C4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8039E6C8: addiu       $t9, $zero, 0xB3
    ctx->r25 = ADD32(0, 0XB3);
    // 0x8039E6CC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8039E6D0: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8039E6D4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8039E6D8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8039E6DC: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8039E6E0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8039E6E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8039E6E8: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x8039E6EC: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x8039E6F0: jal         0x8004A5E4
    // 0x8039E6F4: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    func_8004A5E4(rdram, ctx);
        goto after_7;
    // 0x8039E6F4: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    after_7:
    // 0x8039E6F8: jal         0x8039D5E0
    // 0x8039E6FC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_8039D5E0(rdram, ctx);
        goto after_8;
    // 0x8039E6FC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_8:
    // 0x8039E700: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x8039E704: sb          $t0, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r8;
    // 0x8039E708: jal         0x8039D5E0
    // 0x8039E70C: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_8039D5E0(rdram, ctx);
        goto after_9;
    // 0x8039E70C: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_9:
    // 0x8039E710: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x8039E714: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x8039E718: addiu       $t3, $zero, 0x2C
    ctx->r11 = ADD32(0, 0X2C);
    // 0x8039E71C: addiu       $t4, $zero, 0xB3
    ctx->r12 = ADD32(0, 0XB3);
    // 0x8039E720: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x8039E724: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8039E728: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8039E72C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8039E730: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8039E734: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x8039E738: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x8039E73C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x8039E740: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8039E744: jal         0x8004A5E4
    // 0x8039E748: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8004A5E4(rdram, ctx);
        goto after_10;
    // 0x8039E748: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_10:
    // 0x8039E74C: jal         0x8039D5E0
    // 0x8039E750: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_8039D5E0(rdram, ctx);
        goto after_11;
    // 0x8039E750: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_11:
    // 0x8039E754: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x8039E758: sb          $t5, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r13;
    // 0x8039E75C: jal         0x8039D5E0
    // 0x8039E760: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_8039D5E0(rdram, ctx);
        goto after_12;
    // 0x8039E760: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_12:
    // 0x8039E764: addiu       $t6, $zero, 0xB8
    ctx->r14 = ADD32(0, 0XB8);
    // 0x8039E768: addiu       $t7, $zero, 0x18
    ctx->r15 = ADD32(0, 0X18);
    // 0x8039E76C: addiu       $t8, $zero, 0x2C
    ctx->r24 = ADD32(0, 0X2C);
    // 0x8039E770: addiu       $t9, $zero, 0xB3
    ctx->r25 = ADD32(0, 0XB3);
    // 0x8039E774: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8039E778: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8039E77C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8039E780: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8039E784: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8039E788: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x8039E78C: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x8039E790: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    // 0x8039E794: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8039E798: jal         0x8004A5E4
    // 0x8039E79C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8004A5E4(rdram, ctx);
        goto after_13;
    // 0x8039E79C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_13:
    // 0x8039E7A0: jal         0x8039D5E0
    // 0x8039E7A4: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_8039D5E0(rdram, ctx);
        goto after_14;
    // 0x8039E7A4: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_14:
    // 0x8039E7A8: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x8039E7AC: sb          $t0, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r8;
    // 0x8039E7B0: jal         0x8039D5E0
    // 0x8039E7B4: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_8039D5E0(rdram, ctx);
        goto after_15;
    // 0x8039E7B4: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_15:
    // 0x8039E7B8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8039E7BC: lbu         $a1, -0x3165($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X3165);
    // 0x8039E7C0: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x8039E7C4: addiu       $a2, $a2, 0x52E0
    ctx->r6 = ADD32(ctx->r6, 0X52E0);
    // 0x8039E7C8: jal         0x8004C578
    // 0x8039E7CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8004C578(rdram, ctx);
        goto after_16;
    // 0x8039E7CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_16:
    // 0x8039E7D0: jal         0x8039D5E0
    // 0x8039E7D4: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_8039D5E0(rdram, ctx);
        goto after_17;
    // 0x8039E7D4: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_17:
    // 0x8039E7D8: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x8039E7DC: sb          $t1, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r9;
    // 0x8039E7E0: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8039E7E4: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x8039E7E8: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8039E7EC: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x8039E7F0: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x8039E7F4: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x8039E7F8: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8039E7FC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8039E800: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8039E804: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8039E808: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8039E80C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8039E810: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8039E814: addiu       $a3, $a3, 0x6084
    ctx->r7 = ADD32(ctx->r7, 0X6084);
    // 0x8039E818: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    // 0x8039E81C: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    // 0x8039E820: jal         0x8002F528
    // 0x8039E824: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_8002F528(rdram, ctx);
        goto after_18;
    // 0x8039E824: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_18:
    // 0x8039E828: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8039E82C: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x8039E830: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8039E834: ori         $at, $at, 0x28
    ctx->r1 = ctx->r1 | 0X28;
    // 0x8039E838: lui         $a3, 0x803A
    ctx->r7 = S32(0X803A << 16);
    // 0x8039E83C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8039E840: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8039E844: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8039E848: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8039E84C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8039E850: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8039E854: addiu       $a3, $a3, 0x1EBA
    ctx->r7 = ADD32(ctx->r7, 0X1EBA);
    // 0x8039E858: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x8039E85C: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x8039E860: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8039E864: jal         0x8002F528
    // 0x8039E868: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_8002F528(rdram, ctx);
        goto after_19;
    // 0x8039E868: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_19:
    // 0x8039E86C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8039E870: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8039E874: jr          $ra
    // 0x8039E878: nop

    return;
    // 0x8039E878: nop

;}
RECOMP_FUNC void func_8039E87C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039E87C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8039E880: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8039E884: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x8039E888: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8039E88C: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x8039E890: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8039E894: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8039E898: jal         0x8039D734
    // 0x8039E89C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8039D734(rdram, ctx);
        goto after_0;
    // 0x8039E89C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8039E8A0: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x8039E8A4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8039E8A8: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    // 0x8039E8AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8039E8B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8039E8B4: jal         0x8039D734
    // 0x8039E8B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8039D734(rdram, ctx);
        goto after_1;
    // 0x8039E8B8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x8039E8BC: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x8039E8C0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8039E8C4: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x8039E8C8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8039E8CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8039E8D0: jal         0x8039D734
    // 0x8039E8D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8039D734(rdram, ctx);
        goto after_2;
    // 0x8039E8D4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x8039E8D8: jal         0x8039D5E0
    // 0x8039E8DC: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    func_8039D5E0(rdram, ctx);
        goto after_3;
    // 0x8039E8DC: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_3:
    // 0x8039E8E0: addiu       $t9, $zero, 0xF0
    ctx->r25 = ADD32(0, 0XF0);
    // 0x8039E8E4: addiu       $t0, $zero, 0x18
    ctx->r8 = ADD32(0, 0X18);
    // 0x8039E8E8: addiu       $t1, $zero, 0x30
    ctx->r9 = ADD32(0, 0X30);
    // 0x8039E8EC: addiu       $t2, $zero, 0xB3
    ctx->r10 = ADD32(0, 0XB3);
    // 0x8039E8F0: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x8039E8F4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8039E8F8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x8039E8FC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8039E900: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8039E904: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x8039E908: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x8039E90C: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    // 0x8039E910: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8039E914: jal         0x8004A5E4
    // 0x8039E918: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_8004A5E4(rdram, ctx);
        goto after_4;
    // 0x8039E918: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_4:
    // 0x8039E91C: jal         0x8039D5E0
    // 0x8039E920: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    func_8039D5E0(rdram, ctx);
        goto after_5;
    // 0x8039E920: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_5:
    // 0x8039E924: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x8039E928: sb          $t3, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r11;
    // 0x8039E92C: jal         0x8039D5E0
    // 0x8039E930: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_8039D5E0(rdram, ctx);
        goto after_6;
    // 0x8039E930: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_6:
    // 0x8039E934: addiu       $t4, $zero, 0xF0
    ctx->r12 = ADD32(0, 0XF0);
    // 0x8039E938: addiu       $t5, $zero, 0x68
    ctx->r13 = ADD32(0, 0X68);
    // 0x8039E93C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8039E940: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8039E944: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8039E948: addiu       $t9, $zero, 0xB3
    ctx->r25 = ADD32(0, 0XB3);
    // 0x8039E94C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8039E950: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8039E954: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8039E958: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8039E95C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8039E960: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8039E964: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8039E968: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x8039E96C: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x8039E970: jal         0x8004A5E4
    // 0x8039E974: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    func_8004A5E4(rdram, ctx);
        goto after_7;
    // 0x8039E974: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    after_7:
    // 0x8039E978: jal         0x8039D5E0
    // 0x8039E97C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_8039D5E0(rdram, ctx);
        goto after_8;
    // 0x8039E97C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_8:
    // 0x8039E980: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x8039E984: sb          $t0, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r8;
    // 0x8039E988: jal         0x8039D5E0
    // 0x8039E98C: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_8039D5E0(rdram, ctx);
        goto after_9;
    // 0x8039E98C: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_9:
    // 0x8039E990: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x8039E994: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x8039E998: addiu       $t3, $zero, 0x2C
    ctx->r11 = ADD32(0, 0X2C);
    // 0x8039E99C: addiu       $t4, $zero, 0xB3
    ctx->r12 = ADD32(0, 0XB3);
    // 0x8039E9A0: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x8039E9A4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8039E9A8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8039E9AC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8039E9B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8039E9B4: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x8039E9B8: addiu       $a2, $zero, 0x60
    ctx->r6 = ADD32(0, 0X60);
    // 0x8039E9BC: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x8039E9C0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8039E9C4: jal         0x8004A5E4
    // 0x8039E9C8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8004A5E4(rdram, ctx);
        goto after_10;
    // 0x8039E9C8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_10:
    // 0x8039E9CC: jal         0x8039D5E0
    // 0x8039E9D0: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_8039D5E0(rdram, ctx);
        goto after_11;
    // 0x8039E9D0: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_11:
    // 0x8039E9D4: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x8039E9D8: sb          $t5, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r13;
    // 0x8039E9DC: jal         0x8039D5E0
    // 0x8039E9E0: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_8039D5E0(rdram, ctx);
        goto after_12;
    // 0x8039E9E0: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_12:
    // 0x8039E9E4: addiu       $t6, $zero, 0xB8
    ctx->r14 = ADD32(0, 0XB8);
    // 0x8039E9E8: addiu       $t7, $zero, 0x18
    ctx->r15 = ADD32(0, 0X18);
    // 0x8039E9EC: addiu       $t8, $zero, 0x2C
    ctx->r24 = ADD32(0, 0X2C);
    // 0x8039E9F0: addiu       $t9, $zero, 0xB3
    ctx->r25 = ADD32(0, 0XB3);
    // 0x8039E9F4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8039E9F8: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x8039E9FC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8039EA00: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8039EA04: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8039EA08: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x8039EA0C: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x8039EA10: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    // 0x8039EA14: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8039EA18: jal         0x8004A5E4
    // 0x8039EA1C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8004A5E4(rdram, ctx);
        goto after_13;
    // 0x8039EA1C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_13:
    // 0x8039EA20: jal         0x8039D5E0
    // 0x8039EA24: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_8039D5E0(rdram, ctx);
        goto after_14;
    // 0x8039EA24: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_14:
    // 0x8039EA28: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x8039EA2C: sb          $t0, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r8;
    // 0x8039EA30: jal         0x8039D5E0
    // 0x8039EA34: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_8039D5E0(rdram, ctx);
        goto after_15;
    // 0x8039EA34: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_15:
    // 0x8039EA38: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8039EA3C: lbu         $a1, 0x1EE8($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X1EE8);
    // 0x8039EA40: lui         $a2, 0x800C
    ctx->r6 = S32(0X800C << 16);
    // 0x8039EA44: addiu       $a2, $a2, 0x52E0
    ctx->r6 = ADD32(ctx->r6, 0X52E0);
    // 0x8039EA48: jal         0x8004C578
    // 0x8039EA4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8004C578(rdram, ctx);
        goto after_16;
    // 0x8039EA4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_16:
    // 0x8039EA50: jal         0x8039D5E0
    // 0x8039EA54: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_8039D5E0(rdram, ctx);
        goto after_17;
    // 0x8039EA54: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_17:
    // 0x8039EA58: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x8039EA5C: sb          $t1, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r9;
    // 0x8039EA60: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8039EA64: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x8039EA68: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8039EA6C: ori         $at, $at, 0xFEE8
    ctx->r1 = ctx->r1 | 0XFEE8;
    // 0x8039EA70: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x8039EA74: addiu       $t2, $zero, 0x10
    ctx->r10 = ADD32(0, 0X10);
    // 0x8039EA78: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8039EA7C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8039EA80: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8039EA84: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
    // 0x8039EA88: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8039EA8C: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8039EA90: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8039EA94: addiu       $a3, $a3, 0x6084
    ctx->r7 = ADD32(ctx->r7, 0X6084);
    // 0x8039EA98: addiu       $a1, $zero, 0x68
    ctx->r5 = ADD32(0, 0X68);
    // 0x8039EA9C: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    // 0x8039EAA0: jal         0x8002F528
    // 0x8039EAA4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_8002F528(rdram, ctx);
        goto after_18;
    // 0x8039EAA4: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_18:
    // 0x8039EAA8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8039EAAC: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x8039EAB0: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8039EAB4: ori         $at, $at, 0x28
    ctx->r1 = ctx->r1 | 0X28;
    // 0x8039EAB8: lui         $a3, 0x803A
    ctx->r7 = S32(0X803A << 16);
    // 0x8039EABC: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8039EAC0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8039EAC4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8039EAC8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8039EACC: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8039EAD0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8039EAD4: addiu       $a3, $a3, 0x1EBA
    ctx->r7 = ADD32(ctx->r7, 0X1EBA);
    // 0x8039EAD8: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    // 0x8039EADC: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x8039EAE0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x8039EAE4: jal         0x8002F528
    // 0x8039EAE8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_8002F528(rdram, ctx);
        goto after_19;
    // 0x8039EAE8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_19:
    // 0x8039EAEC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8039EAF0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8039EAF4: jr          $ra
    // 0x8039EAF8: nop

    return;
    // 0x8039EAF8: nop

;}
RECOMP_FUNC void func_8039EAFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039EAFC: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x8039EB00: lw          $v0, 0x1EB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1EB0);
    // 0x8039EB04: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8039EB08: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8039EB0C: beq         $v0, $at, L_8039EB34
    if (ctx->r2 == ctx->r1) {
        // 0x8039EB10: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8039EB34;
    }
    // 0x8039EB10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039EB14: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8039EB18: beq         $v0, $at, L_8039EB34
    if (ctx->r2 == ctx->r1) {
        // 0x8039EB1C: addiu       $a0, $zero, 0x30
        ctx->r4 = ADD32(0, 0X30);
            goto L_8039EB34;
    }
    // 0x8039EB1C: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x8039EB20: addiu       $a1, $zero, -0x100
    ctx->r5 = ADD32(0, -0X100);
    // 0x8039EB24: jal         0x8039D60C
    // 0x8039EB28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8039D60C(rdram, ctx);
        goto after_0;
    // 0x8039EB28: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8039EB2C: b           L_8039EB70
    // 0x8039EB30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039EB70;
    // 0x8039EB30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039EB34:
    // 0x8039EB34: jal         0x8039E010
    // 0x8039EB38: nop

    func_8039E010(rdram, ctx);
        goto after_1;
    // 0x8039EB38: nop

    after_1:
    // 0x8039EB3C: jal         0x8039E040
    // 0x8039EB40: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8039E040(rdram, ctx);
        goto after_2;
    // 0x8039EB40: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x8039EB44: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8039EB48: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    // 0x8039EB4C: addiu       $a2, $v0, -0x1
    ctx->r6 = ADD32(ctx->r2, -0X1);
    // 0x8039EB50: jal         0x8039D60C
    // 0x8039EB54: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    func_8039D60C(rdram, ctx);
        goto after_3;
    // 0x8039EB54: addiu       $a1, $a1, -0x4
    ctx->r5 = ADD32(ctx->r5, -0X4);
    after_3:
    // 0x8039EB58: jal         0x8039D5E0
    // 0x8039EB5C: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    func_8039D5E0(rdram, ctx);
        goto after_4;
    // 0x8039EB5C: addiu       $a0, $zero, 0x30
    ctx->r4 = ADD32(0, 0X30);
    after_4:
    // 0x8039EB60: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x8039EB64: addiu       $t6, $t6, 0x5394
    ctx->r14 = ADD32(ctx->r14, 0X5394);
    // 0x8039EB68: sw          $t6, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r14;
    // 0x8039EB6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039EB70:
    // 0x8039EB70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8039EB74: jr          $ra
    // 0x8039EB78: nop

    return;
    // 0x8039EB78: nop

;}
RECOMP_FUNC void func_8039EB7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039EB7C: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x8039EB80: lw          $v0, 0x1EB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1EB0);
    // 0x8039EB84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039EB88: beq         $v0, $zero, L_8039EBD0
    if (ctx->r2 == 0) {
        // 0x8039EB8C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8039EBD0;
    }
    // 0x8039EB8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039EB90: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8039EB94: beq         $v0, $at, L_8039EBD0
    if (ctx->r2 == ctx->r1) {
        // 0x8039EB98: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8039EBD0;
    }
    // 0x8039EB98: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8039EB9C: beq         $v0, $at, L_8039EBD0
    if (ctx->r2 == ctx->r1) {
        // 0x8039EBA0: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8039EBD0;
    }
    // 0x8039EBA0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8039EBA4: beq         $v0, $at, L_8039EBD0
    if (ctx->r2 == ctx->r1) {
        // 0x8039EBA8: nop
    
            goto L_8039EBD0;
    }
    // 0x8039EBA8: nop

    // 0x8039EBAC: jal         0x8039D5E0
    // 0x8039EBB0: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    func_8039D5E0(rdram, ctx);
        goto after_0;
    // 0x8039EBB0: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_0:
    // 0x8039EBB4: addiu       $t6, $zero, 0x414
    ctx->r14 = ADD32(0, 0X414);
    // 0x8039EBB8: sh          $t6, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r14;
    // 0x8039EBBC: jal         0x8039D5E0
    // 0x8039EBC0: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    func_8039D5E0(rdram, ctx);
        goto after_1;
    // 0x8039EBC0: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_1:
    // 0x8039EBC4: addiu       $t7, $zero, 0x190
    ctx->r15 = ADD32(0, 0X190);
    // 0x8039EBC8: b           L_8039EC04
    // 0x8039EBCC: sh          $t7, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r15;
        goto L_8039EC04;
    // 0x8039EBCC: sh          $t7, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r15;
L_8039EBD0:
    // 0x8039EBD0: jal         0x8039D5E0
    // 0x8039EBD4: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    func_8039D5E0(rdram, ctx);
        goto after_2;
    // 0x8039EBD4: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_2:
    // 0x8039EBD8: addiu       $t8, $zero, 0x210
    ctx->r24 = ADD32(0, 0X210);
    // 0x8039EBDC: sh          $t8, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r24;
    // 0x8039EBE0: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    // 0x8039EBE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8039EBE8: jal         0x8039D60C
    // 0x8039EBEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8039D60C(rdram, ctx);
        goto after_3;
    // 0x8039EBEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8039EBF0: jal         0x8039D5E0
    // 0x8039EBF4: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    func_8039D5E0(rdram, ctx);
        goto after_4;
    // 0x8039EBF4: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_4:
    // 0x8039EBF8: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x8039EBFC: addiu       $t9, $t9, 0x52EC
    ctx->r25 = ADD32(ctx->r25, 0X52EC);
    // 0x8039EC00: sw          $t9, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r25;
L_8039EC04:
    // 0x8039EC04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039EC08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039EC0C: jr          $ra
    // 0x8039EC10: nop

    return;
    // 0x8039EC10: nop

;}
RECOMP_FUNC void func_8039EC14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039EC14: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x8039EC18: lw          $v0, 0x1EB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1EB0);
    // 0x8039EC1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039EC20: beq         $v0, $zero, L_8039EC68
    if (ctx->r2 == 0) {
        // 0x8039EC24: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8039EC68;
    }
    // 0x8039EC24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039EC28: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8039EC2C: beq         $v0, $at, L_8039EC68
    if (ctx->r2 == ctx->r1) {
        // 0x8039EC30: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8039EC68;
    }
    // 0x8039EC30: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8039EC34: beq         $v0, $at, L_8039EC68
    if (ctx->r2 == ctx->r1) {
        // 0x8039EC38: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8039EC68;
    }
    // 0x8039EC38: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8039EC3C: beq         $v0, $at, L_8039EC68
    if (ctx->r2 == ctx->r1) {
        // 0x8039EC40: nop
    
            goto L_8039EC68;
    }
    // 0x8039EC40: nop

    // 0x8039EC44: jal         0x8039D5E0
    // 0x8039EC48: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    func_8039D5E0(rdram, ctx);
        goto after_0;
    // 0x8039EC48: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_0:
    // 0x8039EC4C: addiu       $t6, $zero, 0x414
    ctx->r14 = ADD32(0, 0X414);
    // 0x8039EC50: sh          $t6, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r14;
    // 0x8039EC54: jal         0x8039D5E0
    // 0x8039EC58: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    func_8039D5E0(rdram, ctx);
        goto after_1;
    // 0x8039EC58: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_1:
    // 0x8039EC5C: addiu       $t7, $zero, 0x190
    ctx->r15 = ADD32(0, 0X190);
    // 0x8039EC60: b           L_8039ECF8
    // 0x8039EC64: sh          $t7, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r15;
        goto L_8039ECF8;
    // 0x8039EC64: sh          $t7, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r15;
L_8039EC68:
    // 0x8039EC68: jal         0x8039D5E0
    // 0x8039EC6C: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    func_8039D5E0(rdram, ctx);
        goto after_2;
    // 0x8039EC6C: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_2:
    // 0x8039EC70: addiu       $t8, $zero, 0x210
    ctx->r24 = ADD32(0, 0X210);
    // 0x8039EC74: sh          $t8, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r24;
    // 0x8039EC78: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    // 0x8039EC7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8039EC80: jal         0x8039D60C
    // 0x8039EC84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8039D60C(rdram, ctx);
        goto after_3;
    // 0x8039EC84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x8039EC88: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x8039EC8C: lw          $v0, 0x1EB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1EB0);
    // 0x8039EC90: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8039EC94: bne         $v0, $at, L_8039ECB8
    if (ctx->r2 != ctx->r1) {
        // 0x8039EC98: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8039ECB8;
    }
    // 0x8039EC98: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8039EC9C: jal         0x8039D5E0
    // 0x8039ECA0: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    func_8039D5E0(rdram, ctx);
        goto after_4;
    // 0x8039ECA0: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_4:
    // 0x8039ECA4: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x8039ECA8: addiu       $t9, $t9, 0x56DC
    ctx->r25 = ADD32(ctx->r25, 0X56DC);
    // 0x8039ECAC: b           L_8039ECF8
    // 0x8039ECB0: sw          $t9, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r25;
        goto L_8039ECF8;
    // 0x8039ECB0: sw          $t9, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r25;
    // 0x8039ECB4: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
L_8039ECB8:
    // 0x8039ECB8: bne         $v0, $at, L_8039ECDC
    if (ctx->r2 != ctx->r1) {
        // 0x8039ECBC: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8039ECDC;
    }
    // 0x8039ECBC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8039ECC0: jal         0x8039D5E0
    // 0x8039ECC4: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    func_8039D5E0(rdram, ctx);
        goto after_5;
    // 0x8039ECC4: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_5:
    // 0x8039ECC8: lui         $t0, 0x800C
    ctx->r8 = S32(0X800C << 16);
    // 0x8039ECCC: addiu       $t0, $t0, 0x5778
    ctx->r8 = ADD32(ctx->r8, 0X5778);
    // 0x8039ECD0: b           L_8039ECF8
    // 0x8039ECD4: sw          $t0, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r8;
        goto L_8039ECF8;
    // 0x8039ECD4: sw          $t0, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r8;
    // 0x8039ECD8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
L_8039ECDC:
    // 0x8039ECDC: bne         $v0, $at, L_8039ECFC
    if (ctx->r2 != ctx->r1) {
        // 0x8039ECE0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8039ECFC;
    }
    // 0x8039ECE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039ECE4: jal         0x8039D5E0
    // 0x8039ECE8: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    func_8039D5E0(rdram, ctx);
        goto after_6;
    // 0x8039ECE8: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    after_6:
    // 0x8039ECEC: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x8039ECF0: addiu       $t1, $t1, 0x5814
    ctx->r9 = ADD32(ctx->r9, 0X5814);
    // 0x8039ECF4: sw          $t1, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r9;
L_8039ECF8:
    // 0x8039ECF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039ECFC:
    // 0x8039ECFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039ED00: jr          $ra
    // 0x8039ED04: nop

    return;
    // 0x8039ED04: nop

;}
RECOMP_FUNC void func_8039ED08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039ED08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8039ED0C: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x8039ED10: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8039ED14: addiu       $t7, $t7, 0x52D4
    ctx->r15 = ADD32(ctx->r15, 0X52D4);
    // 0x8039ED18: addiu       $t6, $zero, 0x50D
    ctx->r14 = ADD32(0, 0X50D);
    // 0x8039ED1C: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x8039ED20: addiu       $t9, $zero, 0x36
    ctx->r25 = ADD32(0, 0X36);
    // 0x8039ED24: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8039ED28: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8039ED2C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8039ED30: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8039ED34: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x8039ED38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8039ED3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8039ED40: jal         0x8039D69C
    // 0x8039ED44: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_8039D69C(rdram, ctx);
        goto after_0;
    // 0x8039ED44: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_0:
    // 0x8039ED48: lui         $t0, 0x803A
    ctx->r8 = S32(0X803A << 16);
    // 0x8039ED4C: lw          $t0, 0x1EB0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1EB0);
    // 0x8039ED50: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x8039ED54: bne         $t0, $zero, L_8039ED64
    if (ctx->r8 != 0) {
        // 0x8039ED58: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_8039ED64;
    }
    // 0x8039ED58: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8039ED5C: jal         0x8039D658
    // 0x8039ED60: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    func_8039D658(rdram, ctx);
        goto after_1;
    // 0x8039ED60: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    after_1:
L_8039ED64:
    // 0x8039ED64: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8039ED68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8039ED6C: jr          $ra
    // 0x8039ED70: nop

    return;
    // 0x8039ED70: nop

;}
RECOMP_FUNC void func_8039ED74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039ED74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8039ED78: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x8039ED7C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8039ED80: addiu       $t7, $t7, 0x56B8
    ctx->r15 = ADD32(ctx->r15, 0X56B8);
    // 0x8039ED84: addiu       $t6, $zero, 0x50D
    ctx->r14 = ADD32(0, 0X50D);
    // 0x8039ED88: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x8039ED8C: addiu       $t9, $zero, 0x36
    ctx->r25 = ADD32(0, 0X36);
    // 0x8039ED90: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8039ED94: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8039ED98: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8039ED9C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8039EDA0: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x8039EDA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8039EDA8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8039EDAC: jal         0x8039D69C
    // 0x8039EDB0: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_8039D69C(rdram, ctx);
        goto after_0;
    // 0x8039EDB0: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_0:
    // 0x8039EDB4: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x8039EDB8: addiu       $t1, $t1, 0x56C4
    ctx->r9 = ADD32(ctx->r9, 0X56C4);
    // 0x8039EDBC: addiu       $t0, $zero, 0x50D
    ctx->r8 = ADD32(0, 0X50D);
    // 0x8039EDC0: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x8039EDC4: addiu       $t3, $zero, 0x36
    ctx->r11 = ADD32(0, 0X36);
    // 0x8039EDC8: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8039EDCC: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8039EDD0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8039EDD4: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x8039EDD8: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x8039EDDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8039EDE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8039EDE4: jal         0x8039D69C
    // 0x8039EDE8: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_8039D69C(rdram, ctx);
        goto after_1;
    // 0x8039EDE8: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_1:
    // 0x8039EDEC: lui         $t5, 0x800C
    ctx->r13 = S32(0X800C << 16);
    // 0x8039EDF0: addiu       $t5, $t5, 0x56D0
    ctx->r13 = ADD32(ctx->r13, 0X56D0);
    // 0x8039EDF4: addiu       $t4, $zero, 0x50D
    ctx->r12 = ADD32(0, 0X50D);
    // 0x8039EDF8: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x8039EDFC: addiu       $t7, $zero, 0x36
    ctx->r15 = ADD32(0, 0X36);
    // 0x8039EE00: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8039EE04: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8039EE08: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8039EE0C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8039EE10: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x8039EE14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8039EE18: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8039EE1C: jal         0x8039D69C
    // 0x8039EE20: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_8039D69C(rdram, ctx);
        goto after_2;
    // 0x8039EE20: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_2:
    // 0x8039EE24: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x8039EE28: lw          $v0, 0x1EB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1EB0);
    // 0x8039EE2C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8039EE30: beq         $v0, $at, L_8039EE48
    if (ctx->r2 == ctx->r1) {
        // 0x8039EE34: addiu       $a0, $v0, 0x21
        ctx->r4 = ADD32(ctx->r2, 0X21);
            goto L_8039EE48;
    }
    // 0x8039EE34: addiu       $a0, $v0, 0x21
    ctx->r4 = ADD32(ctx->r2, 0X21);
    // 0x8039EE38: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8039EE3C: beq         $v0, $at, L_8039EE48
    if (ctx->r2 == ctx->r1) {
        // 0x8039EE40: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8039EE48;
    }
    // 0x8039EE40: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8039EE44: bne         $v0, $at, L_8039EE54
    if (ctx->r2 != ctx->r1) {
        // 0x8039EE48: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_8039EE54;
    }
L_8039EE48:
    // 0x8039EE48: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8039EE4C: jal         0x8039D658
    // 0x8039EE50: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    func_8039D658(rdram, ctx);
        goto after_3;
    // 0x8039EE50: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    after_3:
L_8039EE54:
    // 0x8039EE54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8039EE58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8039EE5C: jr          $ra
    // 0x8039EE60: nop

    return;
    // 0x8039EE60: nop

;}
RECOMP_FUNC void func_8039EE64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039EE64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039EE68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039EE6C: jal         0x8039E188
    // 0x8039EE70: nop

    func_8039E188(rdram, ctx);
        goto after_0;
    // 0x8039EE70: nop

    after_0:
    // 0x8039EE74: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8039EE78: lh          $a1, 0x1EB8($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X1EB8);
    // 0x8039EE7C: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    // 0x8039EE80: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x8039EE84: subu        $t6, $t6, $a1
    ctx->r14 = SUB32(ctx->r14, ctx->r5);
    // 0x8039EE88: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x8039EE8C: addiu       $a1, $t6, 0x31
    ctx->r5 = ADD32(ctx->r14, 0X31);
    // 0x8039EE90: jal         0x8039D60C
    // 0x8039EE94: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    func_8039D60C(rdram, ctx);
        goto after_1;
    // 0x8039EE94: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    after_1:
    // 0x8039EE98: jal         0x8039D5E0
    // 0x8039EE9C: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    func_8039D5E0(rdram, ctx);
        goto after_2;
    // 0x8039EE9C: addiu       $a0, $zero, 0x2F
    ctx->r4 = ADD32(0, 0X2F);
    after_2:
    // 0x8039EEA0: lui         $t7, 0x800C
    ctx->r15 = S32(0X800C << 16);
    // 0x8039EEA4: addiu       $t7, $t7, 0x5388
    ctx->r15 = ADD32(ctx->r15, 0X5388);
    // 0x8039EEA8: sw          $t7, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r15;
    // 0x8039EEAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039EEB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039EEB4: jr          $ra
    // 0x8039EEB8: nop

    return;
    // 0x8039EEB8: nop

;}
RECOMP_FUNC void func_8039EEBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039EEBC: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x8039EEC0: lw          $v0, 0x1EB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1EB0);
    // 0x8039EEC4: lui         $t6, 0x800C
    ctx->r14 = S32(0X800C << 16);
    // 0x8039EEC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8039EECC: addiu       $t6, $t6, 0x53A0
    ctx->r14 = ADD32(ctx->r14, 0X53A0);
    // 0x8039EED0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8039EED4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039EED8: beq         $v0, $at, L_8039EF10
    if (ctx->r2 == ctx->r1) {
        // 0x8039EEDC: sw          $t6, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r14;
            goto L_8039EF10;
    }
    // 0x8039EEDC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8039EEE0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8039EEE4: beq         $v0, $at, L_8039EF10
    if (ctx->r2 == ctx->r1) {
        // 0x8039EEE8: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8039EF10;
    }
    // 0x8039EEE8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8039EEEC: beq         $v0, $at, L_8039EF10
    if (ctx->r2 == ctx->r1) {
        // 0x8039EEF0: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_8039EF10;
    }
    // 0x8039EEF0: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8039EEF4: beq         $v0, $at, L_8039EF10
    if (ctx->r2 == ctx->r1) {
        // 0x8039EEF8: addiu       $a0, $zero, 0x31
        ctx->r4 = ADD32(0, 0X31);
            goto L_8039EF10;
    }
    // 0x8039EEF8: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    // 0x8039EEFC: addiu       $a1, $zero, -0x100
    ctx->r5 = ADD32(0, -0X100);
    // 0x8039EF00: jal         0x8039D60C
    // 0x8039EF04: addiu       $a2, $zero, -0x100
    ctx->r6 = ADD32(0, -0X100);
    func_8039D60C(rdram, ctx);
        goto after_0;
    // 0x8039EF04: addiu       $a2, $zero, -0x100
    ctx->r6 = ADD32(0, -0X100);
    after_0:
    // 0x8039EF08: b           L_8039EF64
    // 0x8039EF0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039EF64;
    // 0x8039EF0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039EF10:
    // 0x8039EF10: jal         0x8039D5E0
    // 0x8039EF14: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    func_8039D5E0(rdram, ctx);
        goto after_1;
    // 0x8039EF14: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_1:
    // 0x8039EF18: addiu       $t7, $zero, 0x210
    ctx->r15 = ADD32(0, 0X210);
    // 0x8039EF1C: sh          $t7, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r15;
    // 0x8039EF20: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    // 0x8039EF24: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8039EF28: jal         0x8039D60C
    // 0x8039EF2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8039D60C(rdram, ctx);
        goto after_2;
    // 0x8039EF2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8039EF30: lui         $t8, 0x803A
    ctx->r24 = S32(0X803A << 16);
    // 0x8039EF34: lbu         $t8, 0x1EC2($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X1EC2);
    // 0x8039EF38: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8039EF3C: bne         $t8, $at, L_8039EF4C
    if (ctx->r24 != ctx->r1) {
        // 0x8039EF40: lui         $t9, 0x800C
        ctx->r25 = S32(0X800C << 16);
            goto L_8039EF4C;
    }
    // 0x8039EF40: lui         $t9, 0x800C
    ctx->r25 = S32(0X800C << 16);
    // 0x8039EF44: addiu       $t9, $t9, 0x53D0
    ctx->r25 = ADD32(ctx->r25, 0X53D0);
    // 0x8039EF48: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_8039EF4C:
    // 0x8039EF4C: jal         0x8039D5E0
    // 0x8039EF50: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    func_8039D5E0(rdram, ctx);
        goto after_3;
    // 0x8039EF50: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_3:
    // 0x8039EF54: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8039EF58: nop

    // 0x8039EF5C: sw          $t0, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r8;
    // 0x8039EF60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039EF64:
    // 0x8039EF64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8039EF68: jr          $ra
    // 0x8039EF6C: nop

    return;
    // 0x8039EF6C: nop

;}
RECOMP_FUNC void func_8039EF70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039EF70: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8039EF74: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8039EF78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039EF7C: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x8039EF80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039EF84: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8039EF88: lhu         $t7, 0x6F8($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X6F8);
    // 0x8039EF8C: nop

    // 0x8039EF90: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x8039EF94: beq         $t8, $zero, L_8039EFD0
    if (ctx->r24 == 0) {
        // 0x8039EF98: nop
    
            goto L_8039EFD0;
    }
    // 0x8039EF98: nop

    // 0x8039EF9C: jal         0x8039D958
    // 0x8039EFA0: nop

    func_8039D958(rdram, ctx);
        goto after_0;
    // 0x8039EFA0: nop

    after_0:
    // 0x8039EFA4: bne         $v0, $zero, L_8039EFD0
    if (ctx->r2 != 0) {
        // 0x8039EFA8: nop
    
            goto L_8039EFD0;
    }
    // 0x8039EFA8: nop

    // 0x8039EFAC: jal         0x80035734
    // 0x8039EFB0: nop

    func_80035734(rdram, ctx);
        goto after_1;
    // 0x8039EFB0: nop

    after_1:
    // 0x8039EFB4: lui         $t9, 0x803A
    ctx->r25 = S32(0X803A << 16);
    // 0x8039EFB8: lh          $t9, 0x1EA0($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X1EA0);
    // 0x8039EFBC: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039EFC0: sw          $t9, 0x1EC8($at)
    MEM_W(0X1EC8, ctx->r1) = ctx->r25;
    // 0x8039EFC4: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039EFC8: b           L_8039F044
    // 0x8039EFCC: sw          $zero, 0x1EB0($at)
    MEM_W(0X1EB0, ctx->r1) = 0;
        goto L_8039F044;
    // 0x8039EFCC: sw          $zero, 0x1EB0($at)
    MEM_W(0X1EB0, ctx->r1) = 0;
L_8039EFD0:
    // 0x8039EFD0: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8039EFD4: lw          $t0, -0x2F98($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X2F98);
    // 0x8039EFD8: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8039EFDC: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8039EFE0: lhu         $v0, 0x6F8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6F8);
    // 0x8039EFE4: nop

    // 0x8039EFE8: andi        $t1, $v0, 0x800
    ctx->r9 = ctx->r2 & 0X800;
    // 0x8039EFEC: beq         $t1, $zero, L_8039F004
    if (ctx->r9 == 0) {
        // 0x8039EFF0: andi        $t2, $v0, 0x400
        ctx->r10 = ctx->r2 & 0X400;
            goto L_8039F004;
    }
    // 0x8039EFF0: andi        $t2, $v0, 0x400
    ctx->r10 = ctx->r2 & 0X400;
    // 0x8039EFF4: jal         0x8039D9D8
    // 0x8039EFF8: nop

    func_8039D9D8(rdram, ctx);
        goto after_2;
    // 0x8039EFF8: nop

    after_2:
    // 0x8039EFFC: b           L_8039F048
    // 0x8039F000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039F048;
    // 0x8039F000: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039F004:
    // 0x8039F004: beq         $t2, $zero, L_8039F01C
    if (ctx->r10 == 0) {
        // 0x8039F008: andi        $t3, $v0, 0x200
        ctx->r11 = ctx->r2 & 0X200;
            goto L_8039F01C;
    }
    // 0x8039F008: andi        $t3, $v0, 0x200
    ctx->r11 = ctx->r2 & 0X200;
    // 0x8039F00C: jal         0x8039DA34
    // 0x8039F010: nop

    func_8039DA34(rdram, ctx);
        goto after_3;
    // 0x8039F010: nop

    after_3:
    // 0x8039F014: b           L_8039F048
    // 0x8039F018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039F048;
    // 0x8039F018: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039F01C:
    // 0x8039F01C: beq         $t3, $zero, L_8039F034
    if (ctx->r11 == 0) {
        // 0x8039F020: andi        $t4, $v0, 0x100
        ctx->r12 = ctx->r2 & 0X100;
            goto L_8039F034;
    }
    // 0x8039F020: andi        $t4, $v0, 0x100
    ctx->r12 = ctx->r2 & 0X100;
    // 0x8039F024: jal         0x8039DC74
    // 0x8039F028: nop

    func_8039DC74(rdram, ctx);
        goto after_4;
    // 0x8039F028: nop

    after_4:
    // 0x8039F02C: b           L_8039F048
    // 0x8039F030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039F048;
    // 0x8039F030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039F034:
    // 0x8039F034: beq         $t4, $zero, L_8039F048
    if (ctx->r12 == 0) {
        // 0x8039F038: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8039F048;
    }
    // 0x8039F038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039F03C: jal         0x8039DE74
    // 0x8039F040: nop

    func_8039DE74(rdram, ctx);
        goto after_5;
    // 0x8039F040: nop

    after_5:
L_8039F044:
    // 0x8039F044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039F048:
    // 0x8039F048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039F04C: jr          $ra
    // 0x8039F050: nop

    return;
    // 0x8039F050: nop

;}
RECOMP_FUNC void func_8039F054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039F054: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8039F058: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8039F05C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039F060: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x8039F064: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039F068: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8039F06C: lhu         $t7, 0x6F8($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X6F8);
    // 0x8039F070: nop

    // 0x8039F074: andi        $t8, $t7, 0x800
    ctx->r24 = ctx->r15 & 0X800;
    // 0x8039F078: beq         $t8, $zero, L_8039F0B8
    if (ctx->r24 == 0) {
        // 0x8039F07C: nop
    
            goto L_8039F0B8;
    }
    // 0x8039F07C: nop

    // 0x8039F080: jal         0x8039D958
    // 0x8039F084: nop

    func_8039D958(rdram, ctx);
        goto after_0;
    // 0x8039F084: nop

    after_0:
    // 0x8039F088: bne         $v0, $zero, L_8039F0B8
    if (ctx->r2 != 0) {
        // 0x8039F08C: nop
    
            goto L_8039F0B8;
    }
    // 0x8039F08C: nop

    // 0x8039F090: jal         0x80035734
    // 0x8039F094: nop

    func_80035734(rdram, ctx);
        goto after_1;
    // 0x8039F094: nop

    after_1:
    // 0x8039F098: lui         $t9, 0x803A
    ctx->r25 = S32(0X803A << 16);
    // 0x8039F09C: lh          $t9, 0x1EA0($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X1EA0);
    // 0x8039F0A0: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039F0A4: sw          $t9, 0x1EC8($at)
    MEM_W(0X1EC8, ctx->r1) = ctx->r25;
    // 0x8039F0A8: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039F0AC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8039F0B0: b           L_8039F12C
    // 0x8039F0B4: sw          $t0, 0x1EB0($at)
    MEM_W(0X1EB0, ctx->r1) = ctx->r8;
        goto L_8039F12C;
    // 0x8039F0B4: sw          $t0, 0x1EB0($at)
    MEM_W(0X1EB0, ctx->r1) = ctx->r8;
L_8039F0B8:
    // 0x8039F0B8: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8039F0BC: lw          $t1, -0x2F98($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X2F98);
    // 0x8039F0C0: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8039F0C4: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x8039F0C8: lhu         $v0, 0x6F8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6F8);
    // 0x8039F0CC: nop

    // 0x8039F0D0: andi        $t2, $v0, 0x800
    ctx->r10 = ctx->r2 & 0X800;
    // 0x8039F0D4: beq         $t2, $zero, L_8039F0EC
    if (ctx->r10 == 0) {
        // 0x8039F0D8: andi        $t3, $v0, 0x400
        ctx->r11 = ctx->r2 & 0X400;
            goto L_8039F0EC;
    }
    // 0x8039F0D8: andi        $t3, $v0, 0x400
    ctx->r11 = ctx->r2 & 0X400;
    // 0x8039F0DC: jal         0x8039D9D8
    // 0x8039F0E0: nop

    func_8039D9D8(rdram, ctx);
        goto after_2;
    // 0x8039F0E0: nop

    after_2:
    // 0x8039F0E4: b           L_8039F130
    // 0x8039F0E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039F130;
    // 0x8039F0E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039F0EC:
    // 0x8039F0EC: beq         $t3, $zero, L_8039F104
    if (ctx->r11 == 0) {
        // 0x8039F0F0: andi        $t4, $v0, 0x200
        ctx->r12 = ctx->r2 & 0X200;
            goto L_8039F104;
    }
    // 0x8039F0F0: andi        $t4, $v0, 0x200
    ctx->r12 = ctx->r2 & 0X200;
    // 0x8039F0F4: jal         0x8039DA34
    // 0x8039F0F8: nop

    func_8039DA34(rdram, ctx);
        goto after_3;
    // 0x8039F0F8: nop

    after_3:
    // 0x8039F0FC: b           L_8039F130
    // 0x8039F100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039F130;
    // 0x8039F100: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039F104:
    // 0x8039F104: beq         $t4, $zero, L_8039F11C
    if (ctx->r12 == 0) {
        // 0x8039F108: andi        $t5, $v0, 0x100
        ctx->r13 = ctx->r2 & 0X100;
            goto L_8039F11C;
    }
    // 0x8039F108: andi        $t5, $v0, 0x100
    ctx->r13 = ctx->r2 & 0X100;
    // 0x8039F10C: jal         0x8039DC74
    // 0x8039F110: nop

    func_8039DC74(rdram, ctx);
        goto after_4;
    // 0x8039F110: nop

    after_4:
    // 0x8039F114: b           L_8039F130
    // 0x8039F118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039F130;
    // 0x8039F118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039F11C:
    // 0x8039F11C: beq         $t5, $zero, L_8039F130
    if (ctx->r13 == 0) {
        // 0x8039F120: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8039F130;
    }
    // 0x8039F120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039F124: jal         0x8039DE74
    // 0x8039F128: nop

    func_8039DE74(rdram, ctx);
        goto after_5;
    // 0x8039F128: nop

    after_5:
L_8039F12C:
    // 0x8039F12C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039F130:
    // 0x8039F130: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039F134: jr          $ra
    // 0x8039F138: nop

    return;
    // 0x8039F138: nop

;}
RECOMP_FUNC void func_8039F13C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039F13C: lui         $v0, 0x803A
    ctx->r2 = S32(0X803A << 16);
    // 0x8039F140: lw          $v0, 0x1EB0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1EB0);
    // 0x8039F144: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039F148: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8039F14C: beq         $v0, $at, L_8039F2D0
    if (ctx->r2 == ctx->r1) {
        // 0x8039F150: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8039F2D0;
    }
    // 0x8039F150: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039F154: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8039F158: beq         $v0, $at, L_8039F2D0
    if (ctx->r2 == ctx->r1) {
        // 0x8039F15C: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8039F2D0;
    }
    // 0x8039F15C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8039F160: beq         $v0, $at, L_8039F2D0
    if (ctx->r2 == ctx->r1) {
        // 0x8039F164: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_8039F2D0;
    }
    // 0x8039F164: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8039F168: beq         $v0, $at, L_8039F2D0
    if (ctx->r2 == ctx->r1) {
        // 0x8039F16C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8039F2D0;
    }
    // 0x8039F16C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8039F170: beq         $v0, $at, L_8039F184
    if (ctx->r2 == ctx->r1) {
        // 0x8039F174: lui         $t6, 0x8011
        ctx->r14 = S32(0X8011 << 16);
            goto L_8039F184;
    }
    // 0x8039F174: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8039F178: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8039F17C: bne         $v0, $at, L_8039F1C0
    if (ctx->r2 != ctx->r1) {
        // 0x8039F180: nop
    
            goto L_8039F1C0;
    }
    // 0x8039F180: nop

L_8039F184:
    // 0x8039F184: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8039F188: lui         $t7, 0x3
    ctx->r15 = S32(0X3 << 16);
    // 0x8039F18C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8039F190: lhu         $t7, 0x6F8($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X6F8);
    // 0x8039F194: nop

    // 0x8039F198: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x8039F19C: beq         $t8, $zero, L_8039F1C0
    if (ctx->r24 == 0) {
        // 0x8039F1A0: nop
    
            goto L_8039F1C0;
    }
    // 0x8039F1A0: nop

    // 0x8039F1A4: jal         0x80035770
    // 0x8039F1A8: nop

    func_80035770(rdram, ctx);
        goto after_0;
    // 0x8039F1A8: nop

    after_0:
    // 0x8039F1AC: jal         0x8039E324
    // 0x8039F1B0: nop

    func_8039E324(rdram, ctx);
        goto after_1;
    // 0x8039F1B0: nop

    after_1:
    // 0x8039F1B4: jal         0x8039E20C
    // 0x8039F1B8: nop

    func_8039E20C(rdram, ctx);
        goto after_2;
    // 0x8039F1B8: nop

    after_2:
    // 0x8039F1BC: bne         $v0, $zero, L_8039F2D0
    if (ctx->r2 != 0) {
        // 0x8039F1C0: lui         $t9, 0x8011
        ctx->r25 = S32(0X8011 << 16);
            goto L_8039F2D0;
    }
L_8039F1C0:
    // 0x8039F1C0: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8039F1C4: lw          $t9, -0x2F98($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2F98);
    // 0x8039F1C8: lui         $t0, 0x3
    ctx->r8 = S32(0X3 << 16);
    // 0x8039F1CC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8039F1D0: lhu         $t0, 0x6F8($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X6F8);
    // 0x8039F1D4: nop

    // 0x8039F1D8: andi        $t1, $t0, 0x4000
    ctx->r9 = ctx->r8 & 0X4000;
    // 0x8039F1DC: beq         $t1, $zero, L_8039F20C
    if (ctx->r9 == 0) {
        // 0x8039F1E0: nop
    
            goto L_8039F20C;
    }
    // 0x8039F1E0: nop

    // 0x8039F1E4: jal         0x8039E0F4
    // 0x8039F1E8: nop

    func_8039E0F4(rdram, ctx);
        goto after_3;
    // 0x8039F1E8: nop

    after_3:
    // 0x8039F1EC: bne         $v0, $zero, L_8039F20C
    if (ctx->r2 != 0) {
        // 0x8039F1F0: nop
    
            goto L_8039F20C;
    }
    // 0x8039F1F0: nop

    // 0x8039F1F4: jal         0x80035770
    // 0x8039F1F8: nop

    func_80035770(rdram, ctx);
        goto after_4;
    // 0x8039F1F8: nop

    after_4:
    // 0x8039F1FC: jal         0x8039E1B8
    // 0x8039F200: nop

    func_8039E1B8(rdram, ctx);
        goto after_5;
    // 0x8039F200: nop

    after_5:
    // 0x8039F204: jal         0x8039E45C
    // 0x8039F208: nop

    func_8039E45C(rdram, ctx);
        goto after_6;
    // 0x8039F208: nop

    after_6:
L_8039F20C:
    // 0x8039F20C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8039F210: lw          $t2, -0x2F98($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X2F98);
    // 0x8039F214: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8039F218: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x8039F21C: lhu         $v0, 0x6F8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6F8);
    // 0x8039F220: nop

    // 0x8039F224: andi        $t3, $v0, 0x8
    ctx->r11 = ctx->r2 & 0X8;
    // 0x8039F228: andi        $t4, $v0, 0x4
    ctx->r12 = ctx->r2 & 0X4;
    // 0x8039F22C: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x8039F230: beq         $t5, $zero, L_8039F260
    if (ctx->r13 == 0) {
        // 0x8039F234: nop
    
            goto L_8039F260;
    }
    // 0x8039F234: nop

    // 0x8039F238: jal         0x80035770
    // 0x8039F23C: nop

    func_80035770(rdram, ctx);
        goto after_7;
    // 0x8039F23C: nop

    after_7:
    // 0x8039F240: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039F244: jal         0x8039E324
    // 0x8039F248: sh          $zero, 0x1EA4($at)
    MEM_H(0X1EA4, ctx->r1) = 0;
    func_8039E324(rdram, ctx);
        goto after_8;
    // 0x8039F248: sh          $zero, 0x1EA4($at)
    MEM_H(0X1EA4, ctx->r1) = 0;
    after_8:
    // 0x8039F24C: jal         0x8039DF00
    // 0x8039F250: nop

    func_8039DF00(rdram, ctx);
        goto after_9;
    // 0x8039F250: nop

    after_9:
    // 0x8039F254: jal         0x8039E20C
    // 0x8039F258: nop

    func_8039E20C(rdram, ctx);
        goto after_10;
    // 0x8039F258: nop

    after_10:
    // 0x8039F25C: bne         $v0, $zero, L_8039F2D0
    if (ctx->r2 != 0) {
        // 0x8039F260: lui         $t6, 0x8011
        ctx->r14 = S32(0X8011 << 16);
            goto L_8039F2D0;
    }
L_8039F260:
    // 0x8039F260: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8039F264: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x8039F268: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8039F26C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8039F270: lhu         $v0, 0x6F8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6F8);
    // 0x8039F274: lui         $t8, 0x803A
    ctx->r24 = S32(0X803A << 16);
    // 0x8039F278: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x8039F27C: beq         $t7, $zero, L_8039F2C0
    if (ctx->r15 == 0) {
        // 0x8039F280: andi        $t0, $v0, 0x1
        ctx->r8 = ctx->r2 & 0X1;
            goto L_8039F2C0;
    }
    // 0x8039F280: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
    // 0x8039F284: lh          $t8, 0x1EB8($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X1EB8);
    // 0x8039F288: nop

    // 0x8039F28C: blez        $t8, L_8039F2D4
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8039F290: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8039F2D4;
    }
    // 0x8039F290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039F294: jal         0x80035734
    // 0x8039F298: nop

    func_80035734(rdram, ctx);
        goto after_11;
    // 0x8039F298: nop

    after_11:
    // 0x8039F29C: jal         0x8039E1B8
    // 0x8039F2A0: nop

    func_8039E1B8(rdram, ctx);
        goto after_12;
    // 0x8039F2A0: nop

    after_12:
    // 0x8039F2A4: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8039F2A8: lw          $t9, -0x2F98($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X2F98);
    // 0x8039F2AC: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8039F2B0: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x8039F2B4: lhu         $v0, 0x6F8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6F8);
    // 0x8039F2B8: nop

    // 0x8039F2BC: andi        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 & 0X1;
L_8039F2C0:
    // 0x8039F2C0: beq         $t0, $zero, L_8039F2D4
    if (ctx->r8 == 0) {
        // 0x8039F2C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8039F2D4;
    }
    // 0x8039F2C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039F2C8: jal         0x8039E20C
    // 0x8039F2CC: nop

    func_8039E20C(rdram, ctx);
        goto after_13;
    // 0x8039F2CC: nop

    after_13:
L_8039F2D0:
    // 0x8039F2D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039F2D4:
    // 0x8039F2D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039F2D8: jr          $ra
    // 0x8039F2DC: nop

    return;
    // 0x8039F2DC: nop

;}
RECOMP_FUNC void func_8039F2E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039F2E0: lui         $t6, 0x803A
    ctx->r14 = S32(0X803A << 16);
    // 0x8039F2E4: lw          $t6, 0x1EB0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1EB0);
    // 0x8039F2E8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8039F2EC: sltiu       $at, $t6, 0xA
    ctx->r1 = ctx->r14 < 0XA ? 1 : 0;
    // 0x8039F2F0: beq         $at, $zero, L_8039F4CC
    if (ctx->r1 == 0) {
        // 0x8039F2F4: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_8039F4CC;
    }
    // 0x8039F2F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8039F2F8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8039F2FC: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039F300: addu        $at, $at, $t6
    gpr jr_addend_8039F30C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8039F304: lw          $t6, 0x18C0($at)
    ctx->r14 = ADD32(ctx->r1, 0X18C0);
    // 0x8039F308: nop

    // 0x8039F30C: jr          $t6
    // 0x8039F310: nop

    switch (jr_addend_8039F30C >> 2) {
        case 0: goto L_8039F4C4; break;
        case 1: goto L_8039F4C4; break;
        case 2: goto L_8039F314; break;
        case 3: goto L_8039F4C4; break;
        case 4: goto L_8039F4C4; break;
        case 5: goto L_8039F4C4; break;
        case 6: goto L_8039F4C4; break;
        case 7: goto L_8039F380; break;
        case 8: goto L_8039F3EC; break;
        case 9: goto L_8039F458; break;
        default: switch_error(__func__, 0x8039F30C, 0x803A18C0);
    }
    // 0x8039F310: nop

L_8039F314:
    // 0x8039F314: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x8039F318: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8039F31C: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    // 0x8039F320: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8039F324: addiu       $a2, $zero, 0x190
    ctx->r6 = ADD32(0, 0X190);
    // 0x8039F328: jal         0x8039D734
    // 0x8039F32C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8039D734(rdram, ctx);
        goto after_0;
    // 0x8039F32C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8039F330: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8039F334: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x8039F338: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8039F33C: ori         $at, $at, 0xFFA8
    ctx->r1 = ctx->r1 | 0XFFA8;
    // 0x8039F340: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x8039F344: addiu       $t8, $zero, 0xF
    ctx->r24 = ADD32(0, 0XF);
    // 0x8039F348: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8039F34C: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8039F350: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x8039F354: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8039F358: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8039F35C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8039F360: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8039F364: addiu       $a3, $a3, 0x60E4
    ctx->r7 = ADD32(ctx->r7, 0X60E4);
    // 0x8039F368: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    // 0x8039F36C: addiu       $a2, $zero, 0x88
    ctx->r6 = ADD32(0, 0X88);
    // 0x8039F370: jal         0x8002F528
    // 0x8039F374: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_8002F528(rdram, ctx);
        goto after_1;
    // 0x8039F374: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_1:
    // 0x8039F378: b           L_8039F4F8
    // 0x8039F37C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8039F4F8;
    // 0x8039F37C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8039F380:
    // 0x8039F380: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x8039F384: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8039F388: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    // 0x8039F38C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8039F390: addiu       $a2, $zero, 0x190
    ctx->r6 = ADD32(0, 0X190);
    // 0x8039F394: jal         0x8039D734
    // 0x8039F398: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8039D734(rdram, ctx);
        goto after_2;
    // 0x8039F398: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x8039F39C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8039F3A0: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x8039F3A4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8039F3A8: ori         $at, $at, 0xFFA8
    ctx->r1 = ctx->r1 | 0XFFA8;
    // 0x8039F3AC: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x8039F3B0: addiu       $t3, $zero, 0xF
    ctx->r11 = ADD32(0, 0XF);
    // 0x8039F3B4: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8039F3B8: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8039F3BC: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x8039F3C0: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8039F3C4: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8039F3C8: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8039F3CC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8039F3D0: addiu       $a3, $a3, 0x60E4
    ctx->r7 = ADD32(ctx->r7, 0X60E4);
    // 0x8039F3D4: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    // 0x8039F3D8: addiu       $a2, $zero, 0x88
    ctx->r6 = ADD32(0, 0X88);
    // 0x8039F3DC: jal         0x8002F528
    // 0x8039F3E0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_8002F528(rdram, ctx);
        goto after_3;
    // 0x8039F3E0: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_3:
    // 0x8039F3E4: b           L_8039F4F8
    // 0x8039F3E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8039F4F8;
    // 0x8039F3E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8039F3EC:
    // 0x8039F3EC: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x8039F3F0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8039F3F4: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    // 0x8039F3F8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8039F3FC: addiu       $a2, $zero, 0x190
    ctx->r6 = ADD32(0, 0X190);
    // 0x8039F400: jal         0x8039D734
    // 0x8039F404: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8039D734(rdram, ctx);
        goto after_4;
    // 0x8039F404: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x8039F408: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8039F40C: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x8039F410: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8039F414: ori         $at, $at, 0xFFA8
    ctx->r1 = ctx->r1 | 0XFFA8;
    // 0x8039F418: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x8039F41C: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x8039F420: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8039F424: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8039F428: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x8039F42C: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8039F430: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8039F434: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8039F438: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8039F43C: addiu       $a3, $a3, 0x6104
    ctx->r7 = ADD32(ctx->r7, 0X6104);
    // 0x8039F440: addiu       $a1, $zero, 0x54
    ctx->r5 = ADD32(0, 0X54);
    // 0x8039F444: addiu       $a2, $zero, 0x88
    ctx->r6 = ADD32(0, 0X88);
    // 0x8039F448: jal         0x8002F528
    // 0x8039F44C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_8002F528(rdram, ctx);
        goto after_5;
    // 0x8039F44C: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_5:
    // 0x8039F450: b           L_8039F4F8
    // 0x8039F454: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8039F4F8;
    // 0x8039F454: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8039F458:
    // 0x8039F458: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x8039F45C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8039F460: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    // 0x8039F464: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8039F468: addiu       $a2, $zero, 0x190
    ctx->r6 = ADD32(0, 0X190);
    // 0x8039F46C: jal         0x8039D734
    // 0x8039F470: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8039D734(rdram, ctx);
        goto after_6;
    // 0x8039F470: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_6:
    // 0x8039F474: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8039F478: lw          $a0, -0x2F98($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2F98);
    // 0x8039F47C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8039F480: ori         $at, $at, 0xFFA8
    ctx->r1 = ctx->r1 | 0XFFA8;
    // 0x8039F484: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x8039F488: addiu       $t3, $zero, 0x16
    ctx->r11 = ADD32(0, 0X16);
    // 0x8039F48C: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8039F490: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8039F494: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x8039F498: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8039F49C: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8039F4A0: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8039F4A4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8039F4A8: addiu       $a3, $a3, 0x612C
    ctx->r7 = ADD32(ctx->r7, 0X612C);
    // 0x8039F4AC: addiu       $a1, $zero, 0x54
    ctx->r5 = ADD32(0, 0X54);
    // 0x8039F4B0: addiu       $a2, $zero, 0x88
    ctx->r6 = ADD32(0, 0X88);
    // 0x8039F4B4: jal         0x8002F528
    // 0x8039F4B8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    func_8002F528(rdram, ctx);
        goto after_7;
    // 0x8039F4B8: addu        $a0, $a0, $at
    ctx->r4 = ADD32(ctx->r4, ctx->r1);
    after_7:
    // 0x8039F4BC: b           L_8039F4F8
    // 0x8039F4C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8039F4F8;
    // 0x8039F4C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8039F4C4:
    // 0x8039F4C4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8039F4C8: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
L_8039F4CC:
    // 0x8039F4CC: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8039F4D0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8039F4D4: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    // 0x8039F4D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8039F4DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8039F4E0: jal         0x8039D734
    // 0x8039F4E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8039D734(rdram, ctx);
        goto after_8;
    // 0x8039F4E4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_8:
    // 0x8039F4E8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8039F4EC: jal         0x8039DF58
    // 0x8039F4F0: nop

    func_8039DF58(rdram, ctx);
        goto after_9;
    // 0x8039F4F0: nop

    after_9:
    // 0x8039F4F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8039F4F8:
    // 0x8039F4F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8039F4FC: jr          $ra
    // 0x8039F500: nop

    return;
    // 0x8039F500: nop

;}
RECOMP_FUNC void func_8039F504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039F504: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8039F508: addiu       $a1, $a1, 0x1EB0
    ctx->r5 = ADD32(ctx->r5, 0X1EB0);
    // 0x8039F50C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8039F510: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8039F514: sltiu       $at, $t6, 0xA
    ctx->r1 = ctx->r14 < 0XA ? 1 : 0;
    // 0x8039F518: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039F51C: beq         $at, $zero, L_8039FAF0
    if (ctx->r1 == 0) {
        // 0x8039F520: sh          $zero, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = 0;
            goto L_8039FAF0;
    }
    // 0x8039F520: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    // 0x8039F524: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8039F528: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039F52C: addu        $at, $at, $t6
    gpr jr_addend_8039F538 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8039F530: lw          $t6, 0x18E8($at)
    ctx->r14 = ADD32(ctx->r1, 0X18E8);
    // 0x8039F534: nop

    // 0x8039F538: jr          $t6
    // 0x8039F53C: nop

    switch (jr_addend_8039F538 >> 2) {
        case 0: goto L_8039F540; break;
        case 1: goto L_8039F67C; break;
        case 2: goto L_8039F5C0; break;
        case 3: goto L_8039F69C; break;
        case 4: goto L_8039F98C; break;
        case 5: goto L_8039F7FC; break;
        case 6: goto L_8039F68C; break;
        case 7: goto L_8039F740; break;
        case 8: goto L_8039FA30; break;
        case 9: goto L_8039F8C4; break;
        default: switch_error(__func__, 0x8039F538, 0x803A18E8);
    }
    // 0x8039F53C: nop

L_8039F540:
    // 0x8039F540: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8039F544: lw          $t7, -0x2F98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2F98);
    // 0x8039F548: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8039F54C: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x8039F550: lhu         $v0, 0x6F8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6F8);
    // 0x8039F554: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039F558: andi        $t8, $v0, 0x8000
    ctx->r24 = ctx->r2 & 0X8000;
    // 0x8039F55C: beq         $t8, $zero, L_8039F59C
    if (ctx->r24 == 0) {
        // 0x8039F560: addiu       $a0, $a0, 0x1EC2
        ctx->r4 = ADD32(ctx->r4, 0X1EC2);
            goto L_8039F59C;
    }
    // 0x8039F560: addiu       $a0, $a0, 0x1EC2
    ctx->r4 = ADD32(ctx->r4, 0X1EC2);
    // 0x8039F564: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8039F568: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8039F56C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8039F570: sh          $t9, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r25;
    // 0x8039F574: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x8039F578: jal         0x8039F2E0
    // 0x8039F57C: sb          $t1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r9;
    func_8039F2E0(rdram, ctx);
        goto after_0;
    // 0x8039F57C: sb          $t1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r9;
    after_0:
    // 0x8039F580: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8039F584: lw          $t2, -0x2F98($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X2F98);
    // 0x8039F588: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8039F58C: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x8039F590: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8039F594: lhu         $v0, 0x6F8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6F8);
    // 0x8039F598: addiu       $a1, $a1, 0x1EB0
    ctx->r5 = ADD32(ctx->r5, 0X1EB0);
L_8039F59C:
    // 0x8039F59C: andi        $t3, $v0, 0x400
    ctx->r11 = ctx->r2 & 0X400;
    // 0x8039F5A0: beq         $t3, $zero, L_8039FAF0
    if (ctx->r11 == 0) {
        // 0x8039F5A4: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_8039FAF0;
    }
    // 0x8039F5A4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8039F5A8: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8039F5AC: sh          $t4, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r12;
    // 0x8039F5B0: jal         0x8039F2E0
    // 0x8039F5B4: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    func_8039F2E0(rdram, ctx);
        goto after_1;
    // 0x8039F5B4: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    after_1:
    // 0x8039F5B8: b           L_8039FAF4
    // 0x8039F5BC: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
        goto L_8039FAF4;
    // 0x8039F5BC: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
L_8039F5C0:
    // 0x8039F5C0: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8039F5C4: lw          $v1, -0x2F98($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2F98);
    // 0x8039F5C8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8039F5CC: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x8039F5D0: lhu         $v0, 0x6F8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6F8);
    // 0x8039F5D4: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039F5D8: andi        $t6, $v0, 0x200
    ctx->r14 = ctx->r2 & 0X200;
    // 0x8039F5DC: beq         $t6, $zero, L_8039F604
    if (ctx->r14 == 0) {
        // 0x8039F5E0: addiu       $a0, $a0, 0x1EC2
        ctx->r4 = ADD32(ctx->r4, 0X1EC2);
            goto L_8039F604;
    }
    // 0x8039F5E0: addiu       $a0, $a0, 0x1EC2
    ctx->r4 = ADD32(ctx->r4, 0X1EC2);
    // 0x8039F5E4: lbu         $t7, 0x0($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X0);
    // 0x8039F5E8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8039F5EC: beq         $t7, $zero, L_8039F604
    if (ctx->r15 == 0) {
        // 0x8039F5F0: nop
    
            goto L_8039F604;
    }
    // 0x8039F5F0: nop

    // 0x8039F5F4: sh          $t8, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r24;
    // 0x8039F5F8: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x8039F5FC: lhu         $v0, 0x6F8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6F8);
    // 0x8039F600: nop

L_8039F604:
    // 0x8039F604: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039F608: andi        $t9, $v0, 0x100
    ctx->r25 = ctx->r2 & 0X100;
    // 0x8039F60C: beq         $t9, $zero, L_8039F634
    if (ctx->r25 == 0) {
        // 0x8039F610: addiu       $a0, $a0, 0x1EC2
        ctx->r4 = ADD32(ctx->r4, 0X1EC2);
            goto L_8039F634;
    }
    // 0x8039F610: addiu       $a0, $a0, 0x1EC2
    ctx->r4 = ADD32(ctx->r4, 0X1EC2);
    // 0x8039F614: lbu         $t0, 0x0($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X0);
    // 0x8039F618: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8039F61C: bne         $t0, $zero, L_8039F634
    if (ctx->r8 != 0) {
        // 0x8039F620: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_8039F634;
    }
    // 0x8039F620: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8039F624: sh          $t1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r9;
    // 0x8039F628: sb          $t2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r10;
    // 0x8039F62C: lhu         $v0, 0x6F8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6F8);
    // 0x8039F630: nop

L_8039F634:
    // 0x8039F634: andi        $t3, $v0, 0x8000
    ctx->r11 = ctx->r2 & 0X8000;
    // 0x8039F638: beq         $t3, $zero, L_8039FAF4
    if (ctx->r11 == 0) {
        // 0x8039F63C: lh          $t1, 0x1E($sp)
        ctx->r9 = MEM_H(ctx->r29, 0X1E);
            goto L_8039FAF4;
    }
    // 0x8039F63C: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
    // 0x8039F640: lbu         $t5, 0x0($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X0);
    // 0x8039F644: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8039F648: beq         $t5, $zero, L_8039F664
    if (ctx->r13 == 0) {
        // 0x8039F64C: sh          $t4, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r12;
            goto L_8039F664;
    }
    // 0x8039F64C: sh          $t4, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r12;
    // 0x8039F650: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8039F654: jal         0x8039F2E0
    // 0x8039F658: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    func_8039F2E0(rdram, ctx);
        goto after_2;
    // 0x8039F658: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    after_2:
    // 0x8039F65C: b           L_8039FAF4
    // 0x8039F660: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
        goto L_8039FAF4;
    // 0x8039F660: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
L_8039F664:
    // 0x8039F664: jal         0x8039E134
    // 0x8039F668: nop

    func_8039E134(rdram, ctx);
        goto after_3;
    // 0x8039F668: nop

    after_3:
    // 0x8039F66C: jal         0x80037908
    // 0x8039F670: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_4;
    // 0x8039F670: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x8039F674: b           L_8039FAF4
    // 0x8039F678: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
        goto L_8039FAF4;
    // 0x8039F678: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
L_8039F67C:
    // 0x8039F67C: jal         0x8039EF70
    // 0x8039F680: nop

    func_8039EF70(rdram, ctx);
        goto after_5;
    // 0x8039F680: nop

    after_5:
    // 0x8039F684: b           L_8039FAF4
    // 0x8039F688: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
        goto L_8039FAF4;
    // 0x8039F688: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
L_8039F68C:
    // 0x8039F68C: jal         0x8039F054
    // 0x8039F690: nop

    func_8039F054(rdram, ctx);
        goto after_6;
    // 0x8039F690: nop

    after_6:
    // 0x8039F694: b           L_8039FAF4
    // 0x8039F698: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
        goto L_8039FAF4;
    // 0x8039F698: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
L_8039F69C:
    // 0x8039F69C: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8039F6A0: lw          $t7, -0x2F98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2F98);
    // 0x8039F6A4: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8039F6A8: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x8039F6AC: lhu         $v0, 0x6F8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6F8);
    // 0x8039F6B0: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039F6B4: andi        $t8, $v0, 0x8000
    ctx->r24 = ctx->r2 & 0X8000;
    // 0x8039F6B8: beq         $t8, $zero, L_8039F6F8
    if (ctx->r24 == 0) {
        // 0x8039F6BC: addiu       $a0, $a0, 0x1EC2
        ctx->r4 = ADD32(ctx->r4, 0X1EC2);
            goto L_8039F6F8;
    }
    // 0x8039F6BC: addiu       $a0, $a0, 0x1EC2
    ctx->r4 = ADD32(ctx->r4, 0X1EC2);
    // 0x8039F6C0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8039F6C4: addiu       $t0, $zero, 0x7
    ctx->r8 = ADD32(0, 0X7);
    // 0x8039F6C8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8039F6CC: sh          $t9, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r25;
    // 0x8039F6D0: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x8039F6D4: jal         0x8039F2E0
    // 0x8039F6D8: sb          $t1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r9;
    func_8039F2E0(rdram, ctx);
        goto after_7;
    // 0x8039F6D8: sb          $t1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r9;
    after_7:
    // 0x8039F6DC: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8039F6E0: lw          $t2, -0x2F98($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X2F98);
    // 0x8039F6E4: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8039F6E8: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x8039F6EC: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8039F6F0: lhu         $v0, 0x6F8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6F8);
    // 0x8039F6F4: addiu       $a1, $a1, 0x1EB0
    ctx->r5 = ADD32(ctx->r5, 0X1EB0);
L_8039F6F8:
    // 0x8039F6F8: andi        $t3, $v0, 0x400
    ctx->r11 = ctx->r2 & 0X400;
    // 0x8039F6FC: beq         $t3, $zero, L_8039F720
    if (ctx->r11 == 0) {
        // 0x8039F700: andi        $t6, $v0, 0x200
        ctx->r14 = ctx->r2 & 0X200;
            goto L_8039F720;
    }
    // 0x8039F700: andi        $t6, $v0, 0x200
    ctx->r14 = ctx->r2 & 0X200;
    // 0x8039F704: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8039F708: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x8039F70C: sh          $t4, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r12;
    // 0x8039F710: jal         0x8039F2E0
    // 0x8039F714: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    func_8039F2E0(rdram, ctx);
        goto after_8;
    // 0x8039F714: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    after_8:
    // 0x8039F718: b           L_8039FAF4
    // 0x8039F71C: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
        goto L_8039FAF4;
    // 0x8039F71C: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
L_8039F720:
    // 0x8039F720: beq         $t6, $zero, L_8039FAF0
    if (ctx->r14 == 0) {
        // 0x8039F724: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_8039FAF0;
    }
    // 0x8039F724: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8039F728: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x8039F72C: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
    // 0x8039F730: jal         0x8039F2E0
    // 0x8039F734: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    func_8039F2E0(rdram, ctx);
        goto after_9;
    // 0x8039F734: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    after_9:
    // 0x8039F738: b           L_8039FAF4
    // 0x8039F73C: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
        goto L_8039FAF4;
    // 0x8039F73C: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
L_8039F740:
    // 0x8039F740: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8039F744: lw          $v1, -0x2F98($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2F98);
    // 0x8039F748: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8039F74C: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x8039F750: lhu         $v0, 0x6F8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6F8);
    // 0x8039F754: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039F758: andi        $t9, $v0, 0x200
    ctx->r25 = ctx->r2 & 0X200;
    // 0x8039F75C: beq         $t9, $zero, L_8039F784
    if (ctx->r25 == 0) {
        // 0x8039F760: addiu       $a0, $a0, 0x1EC2
        ctx->r4 = ADD32(ctx->r4, 0X1EC2);
            goto L_8039F784;
    }
    // 0x8039F760: addiu       $a0, $a0, 0x1EC2
    ctx->r4 = ADD32(ctx->r4, 0X1EC2);
    // 0x8039F764: lbu         $t0, 0x0($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X0);
    // 0x8039F768: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8039F76C: beq         $t0, $zero, L_8039F784
    if (ctx->r8 == 0) {
        // 0x8039F770: nop
    
            goto L_8039F784;
    }
    // 0x8039F770: nop

    // 0x8039F774: sh          $t1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r9;
    // 0x8039F778: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x8039F77C: lhu         $v0, 0x6F8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6F8);
    // 0x8039F780: nop

L_8039F784:
    // 0x8039F784: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039F788: andi        $t2, $v0, 0x100
    ctx->r10 = ctx->r2 & 0X100;
    // 0x8039F78C: beq         $t2, $zero, L_8039F7B4
    if (ctx->r10 == 0) {
        // 0x8039F790: addiu       $a0, $a0, 0x1EC2
        ctx->r4 = ADD32(ctx->r4, 0X1EC2);
            goto L_8039F7B4;
    }
    // 0x8039F790: addiu       $a0, $a0, 0x1EC2
    ctx->r4 = ADD32(ctx->r4, 0X1EC2);
    // 0x8039F794: lbu         $t3, 0x0($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X0);
    // 0x8039F798: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8039F79C: bne         $t3, $zero, L_8039F7B4
    if (ctx->r11 != 0) {
        // 0x8039F7A0: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_8039F7B4;
    }
    // 0x8039F7A0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8039F7A4: sh          $t4, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r12;
    // 0x8039F7A8: sb          $t5, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r13;
    // 0x8039F7AC: lhu         $v0, 0x6F8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6F8);
    // 0x8039F7B0: nop

L_8039F7B4:
    // 0x8039F7B4: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
    // 0x8039F7B8: beq         $t6, $zero, L_8039FAF4
    if (ctx->r14 == 0) {
        // 0x8039F7BC: lh          $t1, 0x1E($sp)
        ctx->r9 = MEM_H(ctx->r29, 0X1E);
            goto L_8039FAF4;
    }
    // 0x8039F7BC: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
    // 0x8039F7C0: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x8039F7C4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8039F7C8: beq         $t8, $zero, L_8039F7E4
    if (ctx->r24 == 0) {
        // 0x8039F7CC: sh          $t7, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r15;
            goto L_8039F7E4;
    }
    // 0x8039F7CC: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
    // 0x8039F7D0: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x8039F7D4: jal         0x8039F2E0
    // 0x8039F7D8: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    func_8039F2E0(rdram, ctx);
        goto after_10;
    // 0x8039F7D8: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    after_10:
    // 0x8039F7DC: b           L_8039FAF4
    // 0x8039F7E0: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
        goto L_8039FAF4;
    // 0x8039F7E0: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
L_8039F7E4:
    // 0x8039F7E4: jal         0x8039E5D8
    // 0x8039F7E8: nop

    func_8039E5D8(rdram, ctx);
        goto after_11;
    // 0x8039F7E8: nop

    after_11:
    // 0x8039F7EC: jal         0x80037908
    // 0x8039F7F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_12;
    // 0x8039F7F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_12:
    // 0x8039F7F4: b           L_8039FAF4
    // 0x8039F7F8: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
        goto L_8039FAF4;
    // 0x8039F7F8: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
L_8039F7FC:
    // 0x8039F7FC: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x8039F800: lw          $t0, -0x2F98($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X2F98);
    // 0x8039F804: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8039F808: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8039F80C: lhu         $v0, 0x6F8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6F8);
    // 0x8039F810: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039F814: andi        $t1, $v0, 0x8000
    ctx->r9 = ctx->r2 & 0X8000;
    // 0x8039F818: beq         $t1, $zero, L_8039F858
    if (ctx->r9 == 0) {
        // 0x8039F81C: addiu       $a0, $a0, 0x1EC2
        ctx->r4 = ADD32(ctx->r4, 0X1EC2);
            goto L_8039F858;
    }
    // 0x8039F81C: addiu       $a0, $a0, 0x1EC2
    ctx->r4 = ADD32(ctx->r4, 0X1EC2);
    // 0x8039F820: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8039F824: addiu       $t3, $zero, 0x9
    ctx->r11 = ADD32(0, 0X9);
    // 0x8039F828: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8039F82C: sh          $t2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r10;
    // 0x8039F830: sw          $t3, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r11;
    // 0x8039F834: jal         0x8039F2E0
    // 0x8039F838: sb          $t4, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r12;
    func_8039F2E0(rdram, ctx);
        goto after_13;
    // 0x8039F838: sb          $t4, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r12;
    after_13:
    // 0x8039F83C: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x8039F840: lw          $t5, -0x2F98($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X2F98);
    // 0x8039F844: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8039F848: addu        $v0, $v0, $t5
    ctx->r2 = ADD32(ctx->r2, ctx->r13);
    // 0x8039F84C: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8039F850: lhu         $v0, 0x6F8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6F8);
    // 0x8039F854: addiu       $a1, $a1, 0x1EB0
    ctx->r5 = ADD32(ctx->r5, 0X1EB0);
L_8039F858:
    // 0x8039F858: andi        $t6, $v0, 0x400
    ctx->r14 = ctx->r2 & 0X400;
    // 0x8039F85C: beq         $t6, $zero, L_8039F880
    if (ctx->r14 == 0) {
        // 0x8039F860: andi        $t9, $v0, 0x200
        ctx->r25 = ctx->r2 & 0X200;
            goto L_8039F880;
    }
    // 0x8039F860: andi        $t9, $v0, 0x200
    ctx->r25 = ctx->r2 & 0X200;
    // 0x8039F864: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8039F868: addiu       $t8, $zero, 0x6
    ctx->r24 = ADD32(0, 0X6);
    // 0x8039F86C: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
    // 0x8039F870: jal         0x8039F2E0
    // 0x8039F874: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    func_8039F2E0(rdram, ctx);
        goto after_14;
    // 0x8039F874: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    after_14:
    // 0x8039F878: b           L_8039FAF4
    // 0x8039F87C: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
        goto L_8039FAF4;
    // 0x8039F87C: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
L_8039F880:
    // 0x8039F880: beq         $t9, $zero, L_8039F8A4
    if (ctx->r25 == 0) {
        // 0x8039F884: andi        $t2, $v0, 0x100
        ctx->r10 = ctx->r2 & 0X100;
            goto L_8039F8A4;
    }
    // 0x8039F884: andi        $t2, $v0, 0x100
    ctx->r10 = ctx->r2 & 0X100;
    // 0x8039F888: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8039F88C: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
    // 0x8039F890: sh          $t0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r8;
    // 0x8039F894: jal         0x8039F2E0
    // 0x8039F898: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    func_8039F2E0(rdram, ctx);
        goto after_15;
    // 0x8039F898: sw          $t1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r9;
    after_15:
    // 0x8039F89C: b           L_8039FAF4
    // 0x8039F8A0: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
        goto L_8039FAF4;
    // 0x8039F8A0: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
L_8039F8A4:
    // 0x8039F8A4: beq         $t2, $zero, L_8039FAF0
    if (ctx->r10 == 0) {
        // 0x8039F8A8: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_8039FAF0;
    }
    // 0x8039F8A8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8039F8AC: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x8039F8B0: sh          $t3, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r11;
    // 0x8039F8B4: jal         0x8039F2E0
    // 0x8039F8B8: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    func_8039F2E0(rdram, ctx);
        goto after_16;
    // 0x8039F8B8: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    after_16:
    // 0x8039F8BC: b           L_8039FAF4
    // 0x8039F8C0: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
        goto L_8039FAF4;
    // 0x8039F8C0: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
L_8039F8C4:
    // 0x8039F8C4: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8039F8C8: lw          $v1, -0x2F98($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2F98);
    // 0x8039F8CC: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8039F8D0: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x8039F8D4: lhu         $v0, 0x6F8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6F8);
    // 0x8039F8D8: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039F8DC: andi        $t5, $v0, 0x200
    ctx->r13 = ctx->r2 & 0X200;
    // 0x8039F8E0: beq         $t5, $zero, L_8039F908
    if (ctx->r13 == 0) {
        // 0x8039F8E4: addiu       $a0, $a0, 0x1EC2
        ctx->r4 = ADD32(ctx->r4, 0X1EC2);
            goto L_8039F908;
    }
    // 0x8039F8E4: addiu       $a0, $a0, 0x1EC2
    ctx->r4 = ADD32(ctx->r4, 0X1EC2);
    // 0x8039F8E8: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x8039F8EC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8039F8F0: beq         $t6, $zero, L_8039F908
    if (ctx->r14 == 0) {
        // 0x8039F8F4: nop
    
            goto L_8039F908;
    }
    // 0x8039F8F4: nop

    // 0x8039F8F8: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
    // 0x8039F8FC: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x8039F900: lhu         $v0, 0x6F8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6F8);
    // 0x8039F904: nop

L_8039F908:
    // 0x8039F908: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039F90C: andi        $t8, $v0, 0x100
    ctx->r24 = ctx->r2 & 0X100;
    // 0x8039F910: beq         $t8, $zero, L_8039F938
    if (ctx->r24 == 0) {
        // 0x8039F914: addiu       $a0, $a0, 0x1EC2
        ctx->r4 = ADD32(ctx->r4, 0X1EC2);
            goto L_8039F938;
    }
    // 0x8039F914: addiu       $a0, $a0, 0x1EC2
    ctx->r4 = ADD32(ctx->r4, 0X1EC2);
    // 0x8039F918: lbu         $t9, 0x0($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X0);
    // 0x8039F91C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8039F920: bne         $t9, $zero, L_8039F938
    if (ctx->r25 != 0) {
        // 0x8039F924: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_8039F938;
    }
    // 0x8039F924: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8039F928: sh          $t0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r8;
    // 0x8039F92C: sb          $t1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r9;
    // 0x8039F930: lhu         $v0, 0x6F8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6F8);
    // 0x8039F934: nop

L_8039F938:
    // 0x8039F938: andi        $t2, $v0, 0x8000
    ctx->r10 = ctx->r2 & 0X8000;
    // 0x8039F93C: beq         $t2, $zero, L_8039FAF4
    if (ctx->r10 == 0) {
        // 0x8039F940: lh          $t1, 0x1E($sp)
        ctx->r9 = MEM_H(ctx->r29, 0X1E);
            goto L_8039FAF4;
    }
    // 0x8039F940: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
    // 0x8039F944: lbu         $t4, 0x0($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X0);
    // 0x8039F948: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8039F94C: beq         $t4, $zero, L_8039F968
    if (ctx->r12 == 0) {
        // 0x8039F950: sh          $t3, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r11;
            goto L_8039F968;
    }
    // 0x8039F950: sh          $t3, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r11;
    // 0x8039F954: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x8039F958: jal         0x8039F2E0
    // 0x8039F95C: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    func_8039F2E0(rdram, ctx);
        goto after_17;
    // 0x8039F95C: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    after_17:
    // 0x8039F960: b           L_8039FAF4
    // 0x8039F964: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
        goto L_8039FAF4;
    // 0x8039F964: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
L_8039F968:
    // 0x8039F968: jal         0x8039E4CC
    // 0x8039F96C: nop

    func_8039E4CC(rdram, ctx);
        goto after_18;
    // 0x8039F96C: nop

    after_18:
    // 0x8039F970: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8039F974: addiu       $a1, $a1, 0x1EB0
    ctx->r5 = ADD32(ctx->r5, 0X1EB0);
    // 0x8039F978: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8039F97C: jal         0x8039F2E0
    // 0x8039F980: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    func_8039F2E0(rdram, ctx);
        goto after_19;
    // 0x8039F980: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    after_19:
    // 0x8039F984: b           L_8039FAF4
    // 0x8039F988: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
        goto L_8039FAF4;
    // 0x8039F988: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
L_8039F98C:
    // 0x8039F98C: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8039F990: lw          $t7, -0x2F98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X2F98);
    // 0x8039F994: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8039F998: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x8039F99C: lhu         $v0, 0x6F8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6F8);
    // 0x8039F9A0: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039F9A4: andi        $t8, $v0, 0x8000
    ctx->r24 = ctx->r2 & 0X8000;
    // 0x8039F9A8: beq         $t8, $zero, L_8039F9E8
    if (ctx->r24 == 0) {
        // 0x8039F9AC: addiu       $a0, $a0, 0x1EC2
        ctx->r4 = ADD32(ctx->r4, 0X1EC2);
            goto L_8039F9E8;
    }
    // 0x8039F9AC: addiu       $a0, $a0, 0x1EC2
    ctx->r4 = ADD32(ctx->r4, 0X1EC2);
    // 0x8039F9B0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8039F9B4: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x8039F9B8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8039F9BC: sh          $t9, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r25;
    // 0x8039F9C0: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x8039F9C4: jal         0x8039F2E0
    // 0x8039F9C8: sb          $t1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r9;
    func_8039F2E0(rdram, ctx);
        goto after_20;
    // 0x8039F9C8: sb          $t1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r9;
    after_20:
    // 0x8039F9CC: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8039F9D0: lw          $t2, -0x2F98($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X2F98);
    // 0x8039F9D4: lui         $v0, 0x3
    ctx->r2 = S32(0X3 << 16);
    // 0x8039F9D8: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x8039F9DC: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8039F9E0: lhu         $v0, 0x6F8($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6F8);
    // 0x8039F9E4: addiu       $a1, $a1, 0x1EB0
    ctx->r5 = ADD32(ctx->r5, 0X1EB0);
L_8039F9E8:
    // 0x8039F9E8: andi        $t3, $v0, 0x400
    ctx->r11 = ctx->r2 & 0X400;
    // 0x8039F9EC: beq         $t3, $zero, L_8039FA10
    if (ctx->r11 == 0) {
        // 0x8039F9F0: andi        $t6, $v0, 0x100
        ctx->r14 = ctx->r2 & 0X100;
            goto L_8039FA10;
    }
    // 0x8039F9F0: andi        $t6, $v0, 0x100
    ctx->r14 = ctx->r2 & 0X100;
    // 0x8039F9F4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8039F9F8: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x8039F9FC: sh          $t4, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r12;
    // 0x8039FA00: jal         0x8039F2E0
    // 0x8039FA04: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    func_8039F2E0(rdram, ctx);
        goto after_21;
    // 0x8039FA04: sw          $t5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r13;
    after_21:
    // 0x8039FA08: b           L_8039FAF4
    // 0x8039FA0C: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
        goto L_8039FAF4;
    // 0x8039FA0C: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
L_8039FA10:
    // 0x8039FA10: beq         $t6, $zero, L_8039FAF0
    if (ctx->r14 == 0) {
        // 0x8039FA14: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_8039FAF0;
    }
    // 0x8039FA14: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8039FA18: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x8039FA1C: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
    // 0x8039FA20: jal         0x8039F2E0
    // 0x8039FA24: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    func_8039F2E0(rdram, ctx);
        goto after_22;
    // 0x8039FA24: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    after_22:
    // 0x8039FA28: b           L_8039FAF4
    // 0x8039FA2C: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
        goto L_8039FAF4;
    // 0x8039FA2C: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
L_8039FA30:
    // 0x8039FA30: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8039FA34: lw          $v1, -0x2F98($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2F98);
    // 0x8039FA38: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8039FA3C: addu        $v1, $v1, $at
    ctx->r3 = ADD32(ctx->r3, ctx->r1);
    // 0x8039FA40: lhu         $v0, 0x6F8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6F8);
    // 0x8039FA44: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039FA48: andi        $t9, $v0, 0x200
    ctx->r25 = ctx->r2 & 0X200;
    // 0x8039FA4C: beq         $t9, $zero, L_8039FA74
    if (ctx->r25 == 0) {
        // 0x8039FA50: addiu       $a0, $a0, 0x1EC2
        ctx->r4 = ADD32(ctx->r4, 0X1EC2);
            goto L_8039FA74;
    }
    // 0x8039FA50: addiu       $a0, $a0, 0x1EC2
    ctx->r4 = ADD32(ctx->r4, 0X1EC2);
    // 0x8039FA54: lbu         $t0, 0x0($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X0);
    // 0x8039FA58: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8039FA5C: beq         $t0, $zero, L_8039FA74
    if (ctx->r8 == 0) {
        // 0x8039FA60: nop
    
            goto L_8039FA74;
    }
    // 0x8039FA60: nop

    // 0x8039FA64: sh          $t1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r9;
    // 0x8039FA68: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x8039FA6C: lhu         $v0, 0x6F8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6F8);
    // 0x8039FA70: nop

L_8039FA74:
    // 0x8039FA74: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039FA78: andi        $t2, $v0, 0x100
    ctx->r10 = ctx->r2 & 0X100;
    // 0x8039FA7C: beq         $t2, $zero, L_8039FAA4
    if (ctx->r10 == 0) {
        // 0x8039FA80: addiu       $a0, $a0, 0x1EC2
        ctx->r4 = ADD32(ctx->r4, 0X1EC2);
            goto L_8039FAA4;
    }
    // 0x8039FA80: addiu       $a0, $a0, 0x1EC2
    ctx->r4 = ADD32(ctx->r4, 0X1EC2);
    // 0x8039FA84: lbu         $t3, 0x0($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X0);
    // 0x8039FA88: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8039FA8C: bne         $t3, $zero, L_8039FAA4
    if (ctx->r11 != 0) {
        // 0x8039FA90: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_8039FAA4;
    }
    // 0x8039FA90: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8039FA94: sh          $t4, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r12;
    // 0x8039FA98: sb          $t5, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r13;
    // 0x8039FA9C: lhu         $v0, 0x6F8($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X6F8);
    // 0x8039FAA0: nop

L_8039FAA4:
    // 0x8039FAA4: andi        $t6, $v0, 0x8000
    ctx->r14 = ctx->r2 & 0X8000;
    // 0x8039FAA8: beq         $t6, $zero, L_8039FAF4
    if (ctx->r14 == 0) {
        // 0x8039FAAC: lh          $t1, 0x1E($sp)
        ctx->r9 = MEM_H(ctx->r29, 0X1E);
            goto L_8039FAF4;
    }
    // 0x8039FAAC: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
    // 0x8039FAB0: lbu         $t8, 0x0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X0);
    // 0x8039FAB4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8039FAB8: beq         $t8, $zero, L_8039FAD4
    if (ctx->r24 == 0) {
        // 0x8039FABC: sh          $t7, 0x1E($sp)
        MEM_H(0X1E, ctx->r29) = ctx->r15;
            goto L_8039FAD4;
    }
    // 0x8039FABC: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
    // 0x8039FAC0: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x8039FAC4: jal         0x8039F2E0
    // 0x8039FAC8: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    func_8039F2E0(rdram, ctx);
        goto after_23;
    // 0x8039FAC8: sw          $t9, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r25;
    after_23:
    // 0x8039FACC: b           L_8039FAF4
    // 0x8039FAD0: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
        goto L_8039FAF4;
    // 0x8039FAD0: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
L_8039FAD4:
    // 0x8039FAD4: jal         0x8039E51C
    // 0x8039FAD8: nop

    func_8039E51C(rdram, ctx);
        goto after_24;
    // 0x8039FAD8: nop

    after_24:
    // 0x8039FADC: lui         $a1, 0x803A
    ctx->r5 = S32(0X803A << 16);
    // 0x8039FAE0: addiu       $a1, $a1, 0x1EB0
    ctx->r5 = ADD32(ctx->r5, 0X1EB0);
    // 0x8039FAE4: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x8039FAE8: jal         0x8039F2E0
    // 0x8039FAEC: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    func_8039F2E0(rdram, ctx);
        goto after_25;
    // 0x8039FAEC: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    after_25:
L_8039FAF0:
    // 0x8039FAF0: lh          $t1, 0x1E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1E);
L_8039FAF4:
    // 0x8039FAF4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8039FAF8: bne         $t1, $at, L_8039FB14
    if (ctx->r9 != ctx->r1) {
        // 0x8039FAFC: lh          $t2, 0x1E($sp)
        ctx->r10 = MEM_H(ctx->r29, 0X1E);
            goto L_8039FB14;
    }
    // 0x8039FAFC: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x8039FB00: jal         0x80035734
    // 0x8039FB04: nop

    func_80035734(rdram, ctx);
        goto after_26;
    // 0x8039FB04: nop

    after_26:
    // 0x8039FB08: b           L_8039FB2C
    // 0x8039FB0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039FB2C;
    // 0x8039FB0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039FB10: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
L_8039FB14:
    // 0x8039FB14: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8039FB18: bne         $t2, $at, L_8039FB2C
    if (ctx->r10 != ctx->r1) {
        // 0x8039FB1C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8039FB2C;
    }
    // 0x8039FB1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039FB20: jal         0x80035770
    // 0x8039FB24: nop

    func_80035770(rdram, ctx);
        goto after_27;
    // 0x8039FB24: nop

    after_27:
    // 0x8039FB28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039FB2C:
    // 0x8039FB2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8039FB30: jr          $ra
    // 0x8039FB34: nop

    return;
    // 0x8039FB34: nop

;}
RECOMP_FUNC void func_8039FB38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039FB38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039FB3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039FB40: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039FB44: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039FB48: jal         0x8039D180
    // 0x8039FB4C: sw          $a0, 0x1EC4($at)
    MEM_W(0X1EC4, ctx->r1) = ctx->r4;
    func_8039D180(rdram, ctx);
        goto after_0;
    // 0x8039FB4C: sw          $a0, 0x1EC4($at)
    MEM_W(0X1EC4, ctx->r1) = ctx->r4;
    after_0:
    // 0x8039FB50: jal         0x8039E5FC
    // 0x8039FB54: nop

    func_8039E5FC(rdram, ctx);
        goto after_1;
    // 0x8039FB54: nop

    after_1:
    // 0x8039FB58: jal         0x8039ED08
    // 0x8039FB5C: nop

    func_8039ED08(rdram, ctx);
        goto after_2;
    // 0x8039FB5C: nop

    after_2:
    // 0x8039FB60: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039FB64: addiu       $a0, $a0, -0x430
    ctx->r4 = ADD32(ctx->r4, -0X430);
    // 0x8039FB68: jal         0x8004A9B4
    // 0x8039FB6C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_3;
    // 0x8039FB6C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_3:
    // 0x8039FB70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039FB74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039FB78: jr          $ra
    // 0x8039FB7C: nop

    return;
    // 0x8039FB7C: nop

;}
RECOMP_FUNC void func_8039FB80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039FB80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039FB84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039FB88: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039FB8C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039FB90: jal         0x8039D3B0
    // 0x8039FB94: sw          $a0, 0x1EC4($at)
    MEM_W(0X1EC4, ctx->r1) = ctx->r4;
    func_8039D3B0(rdram, ctx);
        goto after_0;
    // 0x8039FB94: sw          $a0, 0x1EC4($at)
    MEM_W(0X1EC4, ctx->r1) = ctx->r4;
    after_0:
    // 0x8039FB98: jal         0x8039E56C
    // 0x8039FB9C: nop

    func_8039E56C(rdram, ctx);
        goto after_1;
    // 0x8039FB9C: nop

    after_1:
    // 0x8039FBA0: jal         0x8039E87C
    // 0x8039FBA4: nop

    func_8039E87C(rdram, ctx);
        goto after_2;
    // 0x8039FBA4: nop

    after_2:
    // 0x8039FBA8: jal         0x8039ED74
    // 0x8039FBAC: nop

    func_8039ED74(rdram, ctx);
        goto after_3;
    // 0x8039FBAC: nop

    after_3:
    // 0x8039FBB0: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x8039FBB4: addiu       $a0, $a0, -0x3DC
    ctx->r4 = ADD32(ctx->r4, -0X3DC);
    // 0x8039FBB8: jal         0x8004A9B4
    // 0x8039FBBC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_4;
    // 0x8039FBBC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_4:
    // 0x8039FBC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039FBC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039FBC8: jr          $ra
    // 0x8039FBCC: nop

    return;
    // 0x8039FBCC: nop

;}
RECOMP_FUNC void func_8039FBD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039FBD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039FBD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039FBD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8039FBDC: jal         0x8039ED08
    // 0x8039FBE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8039ED08(rdram, ctx);
        goto after_0;
    // 0x8039FBE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8039FBE4: jal         0x8039EE64
    // 0x8039FBE8: nop

    func_8039EE64(rdram, ctx);
        goto after_1;
    // 0x8039FBE8: nop

    after_1:
    // 0x8039FBEC: jal         0x8039EAFC
    // 0x8039FBF0: nop

    func_8039EAFC(rdram, ctx);
        goto after_2;
    // 0x8039FBF0: nop

    after_2:
    // 0x8039FBF4: jal         0x8039EB7C
    // 0x8039FBF8: nop

    func_8039EB7C(rdram, ctx);
        goto after_3;
    // 0x8039FBF8: nop

    after_3:
    // 0x8039FBFC: jal         0x8039EEBC
    // 0x8039FC00: nop

    func_8039EEBC(rdram, ctx);
        goto after_4;
    // 0x8039FC00: nop

    after_4:
    // 0x8039FC04: jal         0x8039F13C
    // 0x8039FC08: nop

    func_8039F13C(rdram, ctx);
        goto after_5;
    // 0x8039FC08: nop

    after_5:
    // 0x8039FC0C: jal         0x8039F504
    // 0x8039FC10: nop

    func_8039F504(rdram, ctx);
        goto after_6;
    // 0x8039FC10: nop

    after_6:
    // 0x8039FC14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039FC18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039FC1C: jr          $ra
    // 0x8039FC20: nop

    return;
    // 0x8039FC20: nop

;}
RECOMP_FUNC void func_8039FC24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039FC24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039FC28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039FC2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8039FC30: jal         0x8039ED74
    // 0x8039FC34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8039ED74(rdram, ctx);
        goto after_0;
    // 0x8039FC34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8039FC38: jal         0x8039EE64
    // 0x8039FC3C: nop

    func_8039EE64(rdram, ctx);
        goto after_1;
    // 0x8039FC3C: nop

    after_1:
    // 0x8039FC40: jal         0x8039EAFC
    // 0x8039FC44: nop

    func_8039EAFC(rdram, ctx);
        goto after_2;
    // 0x8039FC44: nop

    after_2:
    // 0x8039FC48: jal         0x8039EC14
    // 0x8039FC4C: nop

    func_8039EC14(rdram, ctx);
        goto after_3;
    // 0x8039FC4C: nop

    after_3:
    // 0x8039FC50: jal         0x8039EEBC
    // 0x8039FC54: nop

    func_8039EEBC(rdram, ctx);
        goto after_4;
    // 0x8039FC54: nop

    after_4:
    // 0x8039FC58: jal         0x8039F13C
    // 0x8039FC5C: nop

    func_8039F13C(rdram, ctx);
        goto after_5;
    // 0x8039FC5C: nop

    after_5:
    // 0x8039FC60: jal         0x8039F504
    // 0x8039FC64: nop

    func_8039F504(rdram, ctx);
        goto after_6;
    // 0x8039FC64: nop

    after_6:
    // 0x8039FC68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039FC6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039FC70: jr          $ra
    // 0x8039FC74: nop

    return;
    // 0x8039FC74: nop

    // 0x8039FC78: nop

    // 0x8039FC7C: nop

;}
RECOMP_FUNC void func_8039FC80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039FC80: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8039FC84: lh          $t6, -0x6B6($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6B6);
    // 0x8039FC88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039FC8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039FC90: bgtz        $t6, L_8039FCA8
    if (SIGNED(ctx->r14) > 0) {
        // 0x8039FC94: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8039FCA8;
    }
    // 0x8039FC94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039FC98: jal         0x8002BB50
    // 0x8039FC9C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x8039FC9C: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    after_0:
    // 0x8039FCA0: b           L_8039FCE8
    // 0x8039FCA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039FCE8;
    // 0x8039FCA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039FCA8:
    // 0x8039FCA8: jal         0x8003EAD8
    // 0x8039FCAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8003EAD8(rdram, ctx);
        goto after_1;
    // 0x8039FCAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x8039FCB0: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x8039FCB4: lh          $t7, -0x6B6($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X6B6);
    // 0x8039FCB8: addiu       $t8, $v0, -0x4
    ctx->r24 = ADD32(ctx->r2, -0X4);
    // 0x8039FCBC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8039FCC0: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8039FCC4: bne         $at, $zero, L_8039FCDC
    if (ctx->r1 != 0) {
        // 0x8039FCC8: nop
    
            goto L_8039FCDC;
    }
    // 0x8039FCC8: nop

    // 0x8039FCCC: jal         0x8002BB50
    // 0x8039FCD0: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x8039FCD0: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_2:
    // 0x8039FCD4: b           L_8039FCE8
    // 0x8039FCD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039FCE8;
    // 0x8039FCD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039FCDC:
    // 0x8039FCDC: jal         0x8002BB50
    // 0x8039FCE0: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    func_8002BB50(rdram, ctx);
        goto after_3;
    // 0x8039FCE0: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_3:
    // 0x8039FCE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039FCE8:
    // 0x8039FCE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039FCEC: jr          $ra
    // 0x8039FCF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8039FCF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8039FCF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039FCF4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8039FCF8: addiu       $v0, $v0, -0x750
    ctx->r2 = ADD32(ctx->r2, -0X750);
    // 0x8039FCFC: lh          $t6, 0x9C($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X9C);
    // 0x8039FD00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039FD04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039FD08: bne         $t6, $zero, L_8039FD80
    if (ctx->r14 != 0) {
        // 0x8039FD0C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8039FD80;
    }
    // 0x8039FD0C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8039FD10: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8039FD14: lb          $t9, -0x32A1($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X32A1);
    // 0x8039FD18: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x8039FD1C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8039FD20: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8039FD24: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8039FD28: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8039FD2C: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8039FD30: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8039FD34: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8039FD38: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8039FD3C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8039FD40: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8039FD44: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8039FD48: lh          $t7, 0x98($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X98);
    // 0x8039FD4C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8039FD50: lb          $t1, -0x2F7F($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X2F7F);
    // 0x8039FD54: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8039FD58: bne         $t8, $t1, L_8039FD70
    if (ctx->r24 != ctx->r9) {
        // 0x8039FD5C: nop
    
            goto L_8039FD70;
    }
    // 0x8039FD5C: nop

    // 0x8039FD60: jal         0x8002BB50
    // 0x8039FD64: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x8039FD64: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x8039FD68: b           L_8039FD8C
    // 0x8039FD6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039FD8C;
    // 0x8039FD6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039FD70:
    // 0x8039FD70: jal         0x8002BB50
    // 0x8039FD74: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8002BB50(rdram, ctx);
        goto after_1;
    // 0x8039FD74: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_1:
    // 0x8039FD78: b           L_8039FD8C
    // 0x8039FD7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8039FD8C;
    // 0x8039FD7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039FD80:
    // 0x8039FD80: jal         0x8002BB50
    // 0x8039FD84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x8039FD84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8039FD88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8039FD8C:
    // 0x8039FD8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039FD90: jr          $ra
    // 0x8039FD94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8039FD94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8039FD98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039FD98: lui         $t1, 0x801B
    ctx->r9 = S32(0X801B << 16);
    // 0x8039FD9C: addiu       $t1, $t1, -0x750
    ctx->r9 = ADD32(ctx->r9, -0X750);
    // 0x8039FDA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8039FDA4: lh          $t6, 0x9A($t1)
    ctx->r14 = MEM_H(ctx->r9, 0X9A);
    // 0x8039FDA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8039FDAC: lhu         $t8, 0x1E($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X1E);
    // 0x8039FDB0: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8039FDB4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8039FDB8: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8039FDBC: addiu       $a2, $a2, -0x32B0
    ctx->r6 = ADD32(ctx->r6, -0X32B0);
    // 0x8039FDC0: andi        $t9, $v0, 0xFFFF
    ctx->r25 = ctx->r2 & 0XFFFF;
    // 0x8039FDC4: addu        $t2, $a2, $t9
    ctx->r10 = ADD32(ctx->r6, ctx->r25);
    // 0x8039FDC8: lb          $t0, 0xE0($t2)
    ctx->r8 = MEM_B(ctx->r10, 0XE0);
    // 0x8039FDCC: andi        $t3, $t9, 0x1
    ctx->r11 = ctx->r25 & 0X1;
    // 0x8039FDD0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8039FDD4: beq         $t3, $zero, L_8039FDEC
    if (ctx->r11 == 0) {
        // 0x8039FDD8: or          $v1, $t9, $zero
        ctx->r3 = ctx->r25 | 0;
            goto L_8039FDEC;
    }
    // 0x8039FDD8: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x8039FDDC: addu        $t4, $a2, $t9
    ctx->r12 = ADD32(ctx->r6, ctx->r25);
    // 0x8039FDE0: lb          $v0, 0xDF($t4)
    ctx->r2 = MEM_B(ctx->r12, 0XDF);
    // 0x8039FDE4: b           L_8039FDFC
    // 0x8039FDE8: sll         $a1, $t0, 24
    ctx->r5 = S32(ctx->r8 << 24);
        goto L_8039FDFC;
    // 0x8039FDE8: sll         $a1, $t0, 24
    ctx->r5 = S32(ctx->r8 << 24);
L_8039FDEC:
    // 0x8039FDEC: addu        $t5, $a2, $v1
    ctx->r13 = ADD32(ctx->r6, ctx->r3);
    // 0x8039FDF0: lb          $v0, 0xE1($t5)
    ctx->r2 = MEM_B(ctx->r13, 0XE1);
    // 0x8039FDF4: nop

    // 0x8039FDF8: sll         $a1, $t0, 24
    ctx->r5 = S32(ctx->r8 << 24);
L_8039FDFC:
    // 0x8039FDFC: sll         $a2, $v0, 24
    ctx->r6 = S32(ctx->r2 << 24);
    // 0x8039FE00: sra         $t7, $a2, 24
    ctx->r15 = S32(SIGNED(ctx->r6) >> 24);
    // 0x8039FE04: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8039FE08: lb          $a0, 0x99($t1)
    ctx->r4 = MEM_B(ctx->r9, 0X99);
    // 0x8039FE0C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8039FE10: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8039FE14: jal         0x8003CE34
    // 0x8039FE18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_8003CE34(rdram, ctx);
        goto after_0;
    // 0x8039FE18: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x8039FE1C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8039FE20: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x8039FE24: beq         $at, $zero, L_8039FE44
    if (ctx->r1 == 0) {
        // 0x8039FE28: sll         $t8, $v0, 2
        ctx->r24 = S32(ctx->r2 << 2);
            goto L_8039FE44;
    }
    // 0x8039FE28: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x8039FE2C: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x8039FE30: addu        $at, $at, $t8
    gpr jr_addend_8039FE3C = ctx->r24;
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8039FE34: lw          $t8, 0x1E78($at)
    ctx->r24 = ADD32(ctx->r1, 0X1E78);
    // 0x8039FE38: nop

    // 0x8039FE3C: jr          $t8
    // 0x8039FE40: nop

    switch (jr_addend_8039FE3C >> 2) {
        case 0: goto L_8039FE44; break;
        case 1: goto L_8039FE44; break;
        case 2: goto L_8039FE64; break;
        case 3: goto L_8039FE64; break;
        case 4: goto L_8039FE44; break;
        default: switch_error(__func__, 0x8039FE3C, 0x803A1E78);
    }
    // 0x8039FE40: nop

L_8039FE44:
    // 0x8039FE44: lbu         $t9, 0x8($a3)
    ctx->r25 = MEM_BU(ctx->r7, 0X8);
    // 0x8039FE48: addiu       $t5, $zero, 0xFF
    ctx->r13 = ADD32(0, 0XFF);
    // 0x8039FE4C: andi        $t3, $t9, 0xFF01
    ctx->r11 = ctx->r25 & 0XFF01;
    // 0x8039FE50: sb          $t3, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r11;
    // 0x8039FE54: andi        $t4, $t3, 0xFE
    ctx->r12 = ctx->r11 & 0XFE;
    // 0x8039FE58: sb          $t4, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r12;
    // 0x8039FE5C: b           L_8039FE84
    // 0x8039FE60: sb          $t5, 0x11($a3)
    MEM_B(0X11, ctx->r7) = ctx->r13;
        goto L_8039FE84;
    // 0x8039FE60: sb          $t5, 0x11($a3)
    MEM_B(0X11, ctx->r7) = ctx->r13;
L_8039FE64:
    // 0x8039FE64: lbu         $t6, 0x8($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X8);
    // 0x8039FE68: addiu       $t3, $zero, 0x60
    ctx->r11 = ADD32(0, 0X60);
    // 0x8039FE6C: andi        $t7, $t6, 0xFF01
    ctx->r15 = ctx->r14 & 0XFF01;
    // 0x8039FE70: ori         $t9, $t7, 0xC
    ctx->r25 = ctx->r15 | 0XC;
    // 0x8039FE74: sb          $t9, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r25;
    // 0x8039FE78: andi        $t2, $t9, 0xFE
    ctx->r10 = ctx->r25 & 0XFE;
    // 0x8039FE7C: sb          $t2, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r10;
    // 0x8039FE80: sb          $t3, 0x11($a3)
    MEM_B(0X11, ctx->r7) = ctx->r11;
L_8039FE84:
    // 0x8039FE84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8039FE88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8039FE8C: jr          $ra
    // 0x8039FE90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8039FE90: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8039FE94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039FE94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8039FE98: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8039FE9C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8039FEA0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8039FEA4: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x8039FEA8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8039FEAC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8039FEB0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8039FEB4: jal         0x8003C16C
    // 0x8039FEB8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_8003C16C(rdram, ctx);
        goto after_0;
    // 0x8039FEB8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_0:
    // 0x8039FEBC: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x8039FEC0: blez        $t6, L_8039FF6C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8039FEC4: lui         $s2, 0x801B
        ctx->r18 = S32(0X801B << 16);
            goto L_8039FF6C;
    }
    // 0x8039FEC4: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x8039FEC8: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x8039FECC: addiu       $s1, $s1, -0x32B0
    ctx->r17 = ADD32(ctx->r17, -0X32B0);
    // 0x8039FED0: addiu       $s2, $s2, -0x750
    ctx->r18 = ADD32(ctx->r18, -0X750);
L_8039FED4:
    // 0x8039FED4: lh          $t7, 0x9A($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X9A);
    // 0x8039FED8: nop

    // 0x8039FEDC: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8039FEE0: addu        $t9, $s1, $t8
    ctx->r25 = ADD32(ctx->r17, ctx->r24);
    // 0x8039FEE4: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x8039FEE8: lb          $a0, 0xE0($t0)
    ctx->r4 = MEM_B(ctx->r8, 0XE0);
    // 0x8039FEEC: jal         0x8003CB98
    // 0x8039FEF0: nop

    func_8003CB98(rdram, ctx);
        goto after_1;
    // 0x8039FEF0: nop

    after_1:
    // 0x8039FEF4: bltz        $v0, L_8039FF4C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8039FEF8: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_8039FF4C;
    }
    // 0x8039FEF8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8039FEFC: sb          $t1, 0x4($s3)
    MEM_B(0X4, ctx->r19) = ctx->r9;
    // 0x8039FF00: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8039FF04: jal         0x8002BB50
    // 0x8039FF08: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x8039FF08: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_2:
    // 0x8039FF0C: lh          $v0, 0xAA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XAA);
    // 0x8039FF10: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x8039FF14: bne         $v0, $zero, L_8039FF34
    if (ctx->r2 != 0) {
        // 0x8039FF18: sll         $t2, $v0, 5
        ctx->r10 = S32(ctx->r2 << 5);
            goto L_8039FF34;
    }
    // 0x8039FF18: sll         $t2, $v0, 5
    ctx->r10 = S32(ctx->r2 << 5);
    // 0x8039FF1C: beq         $s0, $zero, L_8039FF7C
    if (ctx->r16 == 0) {
        // 0x8039FF20: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_8039FF7C;
    }
    // 0x8039FF20: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8039FF24: jal         0x8002BB50
    // 0x8039FF28: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8002BB50(rdram, ctx);
        goto after_3;
    // 0x8039FF28: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_3:
    // 0x8039FF2C: b           L_8039FF80
    // 0x8039FF30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8039FF80;
    // 0x8039FF30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8039FF34:
    // 0x8039FF34: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8039FF38: lui         $t5, 0x803A
    ctx->r13 = S32(0X803A << 16);
    // 0x8039FF3C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8039FF40: lw          $t5, 0x1BA8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1BA8);
    // 0x8039FF44: b           L_8039FF7C
    // 0x8039FF48: sw          $t5, 0x30($s3)
    MEM_W(0X30, ctx->r19) = ctx->r13;
        goto L_8039FF7C;
    // 0x8039FF48: sw          $t5, 0x30($s3)
    MEM_W(0X30, ctx->r19) = ctx->r13;
L_8039FF4C:
    // 0x8039FF4C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8039FF50: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x8039FF54: jal         0x8003C16C
    // 0x8039FF58: sra         $s0, $t6, 16
    ctx->r16 = S32(SIGNED(ctx->r14) >> 16);
    func_8003C16C(rdram, ctx);
        goto after_4;
    // 0x8039FF58: sra         $s0, $t6, 16
    ctx->r16 = S32(SIGNED(ctx->r14) >> 16);
    after_4:
    // 0x8039FF5C: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x8039FF60: slt         $at, $s0, $t8
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8039FF64: bne         $at, $zero, L_8039FED4
    if (ctx->r1 != 0) {
        // 0x8039FF68: nop
    
            goto L_8039FED4;
    }
    // 0x8039FF68: nop

L_8039FF6C:
    // 0x8039FF6C: sb          $zero, 0x4($s3)
    MEM_B(0X4, ctx->r19) = 0;
    // 0x8039FF70: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8039FF74: jal         0x8002BB50
    // 0x8039FF78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002BB50(rdram, ctx);
        goto after_5;
    // 0x8039FF78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
L_8039FF7C:
    // 0x8039FF7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8039FF80:
    // 0x8039FF80: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8039FF84: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8039FF88: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8039FF8C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8039FF90: jr          $ra
    // 0x8039FF94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8039FF94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8039FF98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8039FF98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8039FF9C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8039FFA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8039FFA4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8039FFA8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8039FFAC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8039FFB0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8039FFB4: jal         0x8003C16C
    // 0x8039FFB8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_8003C16C(rdram, ctx);
        goto after_0;
    // 0x8039FFB8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_0:
    // 0x8039FFBC: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x8039FFC0: blez        $t6, L_803A0080
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8039FFC4: lui         $s2, 0x801B
        ctx->r18 = S32(0X801B << 16);
            goto L_803A0080;
    }
    // 0x8039FFC4: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x8039FFC8: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x8039FFCC: addiu       $s1, $s1, -0x32B0
    ctx->r17 = ADD32(ctx->r17, -0X32B0);
    // 0x8039FFD0: addiu       $s2, $s2, -0x750
    ctx->r18 = ADD32(ctx->r18, -0X750);
L_8039FFD4:
    // 0x8039FFD4: lh          $t7, 0x9A($s2)
    ctx->r15 = MEM_H(ctx->r18, 0X9A);
    // 0x8039FFD8: nop

    // 0x8039FFDC: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8039FFE0: addu        $t9, $s1, $t8
    ctx->r25 = ADD32(ctx->r17, ctx->r24);
    // 0x8039FFE4: addu        $t0, $t9, $s0
    ctx->r8 = ADD32(ctx->r25, ctx->r16);
    // 0x8039FFE8: lb          $a0, 0xE0($t0)
    ctx->r4 = MEM_B(ctx->r8, 0XE0);
    // 0x8039FFEC: jal         0x8003CB98
    // 0x8039FFF0: nop

    func_8003CB98(rdram, ctx);
        goto after_1;
    // 0x8039FFF0: nop

    after_1:
    // 0x8039FFF4: bltz        $v0, L_803A0060
    if (SIGNED(ctx->r2) < 0) {
        // 0x8039FFF8: nop
    
            goto L_803A0060;
    }
    // 0x8039FFF8: nop

    // 0x8039FFFC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x803A0000: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x803A0004: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803A0008: jal         0x8002BB50
    // 0x803A000C: sb          $t1, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r9;
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x803A000C: sb          $t1, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r9;
    after_2:
    // 0x803A0010: lh          $v0, 0xAA($s2)
    ctx->r2 = MEM_H(ctx->r18, 0XAA);
    // 0x803A0014: sll         $t3, $s0, 2
    ctx->r11 = S32(ctx->r16 << 2);
    // 0x803A0018: bne         $v0, $zero, L_803A003C
    if (ctx->r2 != 0) {
        // 0x803A001C: sll         $t2, $v0, 5
        ctx->r10 = S32(ctx->r2 << 5);
            goto L_803A003C;
    }
    // 0x803A001C: sll         $t2, $v0, 5
    ctx->r10 = S32(ctx->r2 << 5);
    // 0x803A0020: beq         $s0, $zero, L_803A0058
    if (ctx->r16 == 0) {
        // 0x803A0024: nop
    
            goto L_803A0058;
    }
    // 0x803A0024: nop

    // 0x803A0028: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x803A002C: jal         0x8002BB50
    // 0x803A0030: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002BB50(rdram, ctx);
        goto after_3;
    // 0x803A0030: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x803A0034: b           L_803A0084
    // 0x803A0038: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803A0084;
    // 0x803A0038: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803A003C:
    // 0x803A003C: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x803A0040: lui         $t5, 0x803A
    ctx->r13 = S32(0X803A << 16);
    // 0x803A0044: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803A0048: lw          $t5, 0x1BE8($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X1BE8);
    // 0x803A004C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x803A0050: nop

    // 0x803A0054: sw          $t5, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r13;
L_803A0058:
    // 0x803A0058: b           L_803A0084
    // 0x803A005C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_803A0084;
    // 0x803A005C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803A0060:
    // 0x803A0060: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803A0064: sll         $t7, $s0, 16
    ctx->r15 = S32(ctx->r16 << 16);
    // 0x803A0068: jal         0x8003C16C
    // 0x803A006C: sra         $s0, $t7, 16
    ctx->r16 = S32(SIGNED(ctx->r15) >> 16);
    func_8003C16C(rdram, ctx);
        goto after_4;
    // 0x803A006C: sra         $s0, $t7, 16
    ctx->r16 = S32(SIGNED(ctx->r15) >> 16);
    after_4:
    // 0x803A0070: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x803A0074: slt         $at, $s0, $t9
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x803A0078: bne         $at, $zero, L_8039FFD4
    if (ctx->r1 != 0) {
        // 0x803A007C: nop
    
            goto L_8039FFD4;
    }
    // 0x803A007C: nop

L_803A0080:
    // 0x803A0080: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803A0084:
    // 0x803A0084: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803A0088: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803A008C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803A0090: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803A0094: jr          $ra
    // 0x803A0098: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803A0098: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803A009C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A009C: jr          $ra
    // 0x803A00A0: nop

    return;
    // 0x803A00A0: nop

;}
RECOMP_FUNC void func_803A00A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A00A4: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x803A00A8: lh          $t6, -0x6A6($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6A6);
    // 0x803A00AC: lhu         $t8, 0x1E($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X1E);
    // 0x803A00B0: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x803A00B4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803A00B8: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x803A00BC: lui         $t1, 0x803A
    ctx->r9 = S32(0X803A << 16);
    // 0x803A00C0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803A00C4: lw          $t1, 0x1B68($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1B68);
    // 0x803A00C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x803A00CC: jr          $ra
    // 0x803A00D0: sw          $t1, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r9;
    return;
    // 0x803A00D0: sw          $t1, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r9;
;}
RECOMP_FUNC void func_803A00D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A00D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A00D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A00DC: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x803A00E0: lh          $t6, -0x6A6($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6A6);
    // 0x803A00E4: lhu         $t8, 0x1E($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0X1E);
    // 0x803A00E8: lui         $t1, 0x803A
    ctx->r9 = S32(0X803A << 16);
    // 0x803A00EC: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x803A00F0: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x803A00F4: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x803A00F8: addiu       $t1, $t1, 0x1DB0
    ctx->r9 = ADD32(ctx->r9, 0X1DB0);
    // 0x803A00FC: addu        $v0, $t0, $t1
    ctx->r2 = ADD32(ctx->r8, ctx->r9);
    // 0x803A0100: lbu         $a1, 0x0($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X0);
    // 0x803A0104: lbu         $a2, 0x1($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X1);
    // 0x803A0108: jal         0x8002AB30
    // 0x803A010C: nop

    func_8002AB30(rdram, ctx);
        goto after_0;
    // 0x803A010C: nop

    after_0:
    // 0x803A0110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A0114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A0118: jr          $ra
    // 0x803A011C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803A011C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_803A0120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A0120: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A0124: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A0128: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A012C: jal         0x80036234
    // 0x803A0130: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x803A0130: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A0134: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x803A0138: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A013C: addiu       $a0, $a0, 0x194
    ctx->r4 = ADD32(ctx->r4, 0X194);
    // 0x803A0140: jal         0x800297B4
    // 0x803A0144: sh          $zero, 0x38($t6)
    MEM_H(0X38, ctx->r14) = 0;
    func_800297B4(rdram, ctx);
        goto after_1;
    // 0x803A0144: sh          $zero, 0x38($t6)
    MEM_H(0X38, ctx->r14) = 0;
    after_1:
    // 0x803A0148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A014C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A0150: jr          $ra
    // 0x803A0154: nop

    return;
    // 0x803A0154: nop

;}
RECOMP_FUNC void func_803A0158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A0158: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A015C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A0160: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A0164: jal         0x80036234
    // 0x803A0168: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x803A0168: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A016C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x803A0170: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803A0174: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A0178: addiu       $a0, $a0, 0x194
    ctx->r4 = ADD32(ctx->r4, 0X194);
    // 0x803A017C: jal         0x800297B4
    // 0x803A0180: sh          $t6, 0x38($t7)
    MEM_H(0X38, ctx->r15) = ctx->r14;
    func_800297B4(rdram, ctx);
        goto after_1;
    // 0x803A0180: sh          $t6, 0x38($t7)
    MEM_H(0X38, ctx->r15) = ctx->r14;
    after_1:
    // 0x803A0184: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A0188: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A018C: jr          $ra
    // 0x803A0190: nop

    return;
    // 0x803A0190: nop

;}
RECOMP_FUNC void func_803A0194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A0194: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803A0198: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803A019C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x803A01A0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x803A01A4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x803A01A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803A01AC: jal         0x8004974C
    // 0x803A01B0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_8004974C(rdram, ctx);
        goto after_0;
    // 0x803A01B0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A01B4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x803A01B8: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x803A01BC: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x803A01C0: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x803A01C4: lui         $t7, 0x803A
    ctx->r15 = S32(0X803A << 16);
    // 0x803A01C8: addiu       $t7, $t7, 0x1910
    ctx->r15 = ADD32(ctx->r15, 0X1910);
    // 0x803A01CC: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x803A01D0: jal         0x80035FF0
    // 0x803A01D4: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x803A01D4: addu        $a0, $t6, $t7
    ctx->r4 = ADD32(ctx->r14, ctx->r15);
    after_1:
    // 0x803A01D8: jal         0x803A0B24
    // 0x803A01DC: nop

    func_803A0B24(rdram, ctx);
        goto after_2;
    // 0x803A01DC: nop

    after_2:
    // 0x803A01E0: bne         $v0, $zero, L_803A0238
    if (ctx->r2 != 0) {
        // 0x803A01E4: lui         $s1, 0x8012
        ctx->r17 = S32(0X8012 << 16);
            goto L_803A0238;
    }
    // 0x803A01E4: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x803A01E8: addiu       $s1, $s1, -0x32B0
    ctx->r17 = ADD32(ctx->r17, -0X32B0);
    // 0x803A01EC: lb          $t8, 0xF($s1)
    ctx->r24 = MEM_B(ctx->r17, 0XF);
    // 0x803A01F0: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x803A01F4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803A01F8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803A01FC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803A0200: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803A0204: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x803A0208: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803A020C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803A0210: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803A0214: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803A0218: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803A021C: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x803A0220: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803A0224: lb          $t0, -0x2F7F($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X2F7F);
    // 0x803A0228: sh          $zero, 0x28($s2)
    MEM_H(0X28, ctx->r18) = 0;
    // 0x803A022C: addiu       $t1, $t0, -0x2
    ctx->r9 = ADD32(ctx->r8, -0X2);
    // 0x803A0230: b           L_803A028C
    // 0x803A0234: sh          $t1, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r9;
        goto L_803A028C;
    // 0x803A0234: sh          $t1, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r9;
L_803A0238:
    // 0x803A0238: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x803A023C: addiu       $s1, $s1, -0x32B0
    ctx->r17 = ADD32(ctx->r17, -0X32B0);
    // 0x803A0240: lb          $t2, 0xF($s1)
    ctx->r10 = MEM_B(ctx->r17, 0XF);
    // 0x803A0244: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x803A0248: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803A024C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803A0250: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803A0254: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803A0258: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x803A025C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803A0260: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803A0264: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803A0268: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803A026C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803A0270: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x803A0274: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803A0278: lb          $t4, -0x2F7F($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X2F7F);
    // 0x803A027C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x803A0280: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x803A0284: sh          $t5, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r13;
    // 0x803A0288: sh          $t6, 0x28($s2)
    MEM_H(0X28, ctx->r18) = ctx->r14;
L_803A028C:
    // 0x803A028C: lh          $a0, 0x24($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X24);
    // 0x803A0290: jal         0x8003C138
    // 0x803A0294: nop

    func_8003C138(rdram, ctx);
        goto after_3;
    // 0x803A0294: nop

    after_3:
    // 0x803A0298: jal         0x8004974C
    // 0x803A029C: nop

    func_8004974C(rdram, ctx);
        goto after_4;
    // 0x803A029C: nop

    after_4:
    // 0x803A02A0: sh          $v0, 0x36($s2)
    MEM_H(0X36, ctx->r18) = ctx->r2;
    // 0x803A02A4: jal         0x8003EAD8
    // 0x803A02A8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_8003EAD8(rdram, ctx);
        goto after_5;
    // 0x803A02A8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_5:
    // 0x803A02AC: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x803A02B0: blez        $t7, L_803A035C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x803A02B4: addu        $t8, $s1, $s0
        ctx->r24 = ADD32(ctx->r17, ctx->r16);
            goto L_803A035C;
    }
    // 0x803A02B4: addu        $t8, $s1, $s0
    ctx->r24 = ADD32(ctx->r17, ctx->r16);
L_803A02B8:
    // 0x803A02B8: lb          $a0, 0xE0($t8)
    ctx->r4 = MEM_B(ctx->r24, 0XE0);
    // 0x803A02BC: jal         0x8003CB98
    // 0x803A02C0: nop

    func_8003CB98(rdram, ctx);
        goto after_6;
    // 0x803A02C0: nop

    after_6:
    // 0x803A02C4: bltz        $v0, L_803A033C
    if (SIGNED(ctx->r2) < 0) {
        // 0x803A02C8: nop
    
            goto L_803A033C;
    }
    // 0x803A02C8: nop

    // 0x803A02CC: jal         0x8003C16C
    // 0x803A02D0: nop

    func_8003C16C(rdram, ctx);
        goto after_7;
    // 0x803A02D0: nop

    after_7:
    // 0x803A02D4: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x803A02D8: sra         $t9, $s1, 16
    ctx->r25 = S32(SIGNED(ctx->r17) >> 16);
    // 0x803A02DC: jal         0x8003C16C
    // 0x803A02E0: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    func_8003C16C(rdram, ctx);
        goto after_8;
    // 0x803A02E0: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    after_8:
    // 0x803A02E4: bgez        $s0, L_803A02F4
    if (SIGNED(ctx->r16) >= 0) {
        // 0x803A02E8: sra         $t0, $s0, 1
        ctx->r8 = S32(SIGNED(ctx->r16) >> 1);
            goto L_803A02F4;
    }
    // 0x803A02E8: sra         $t0, $s0, 1
    ctx->r8 = S32(SIGNED(ctx->r16) >> 1);
    // 0x803A02EC: addiu       $at, $s0, 0x1
    ctx->r1 = ADD32(ctx->r16, 0X1);
    // 0x803A02F0: sra         $t0, $at, 1
    ctx->r8 = S32(SIGNED(ctx->r1) >> 1);
L_803A02F4:
    // 0x803A02F4: div         $zero, $t0, $s1
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r17))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r17)));
    // 0x803A02F8: bne         $s1, $zero, L_803A0304
    if (ctx->r17 != 0) {
        // 0x803A02FC: nop
    
            goto L_803A0304;
    }
    // 0x803A02FC: nop

    // 0x803A0300: break       7
    do_break(2151285504);
L_803A0304:
    // 0x803A0304: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803A0308: bne         $s1, $at, L_803A031C
    if (ctx->r17 != ctx->r1) {
        // 0x803A030C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_803A031C;
    }
    // 0x803A030C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x803A0310: bne         $t0, $at, L_803A031C
    if (ctx->r8 != ctx->r1) {
        // 0x803A0314: nop
    
            goto L_803A031C;
    }
    // 0x803A0314: nop

    // 0x803A0318: break       6
    do_break(2151285528);
L_803A031C:
    // 0x803A031C: mflo        $t1
    ctx->r9 = lo;
    // 0x803A0320: nop

    // 0x803A0324: nop

    // 0x803A0328: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x803A032C: mflo        $t2
    ctx->r10 = lo;
    // 0x803A0330: sh          $t2, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r10;
    // 0x803A0334: b           L_803A035C
    // 0x803A0338: nop

        goto L_803A035C;
    // 0x803A0338: nop

L_803A033C:
    // 0x803A033C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803A0340: sll         $t3, $s0, 16
    ctx->r11 = S32(ctx->r16 << 16);
    // 0x803A0344: jal         0x8003EAD8
    // 0x803A0348: sra         $s0, $t3, 16
    ctx->r16 = S32(SIGNED(ctx->r11) >> 16);
    func_8003EAD8(rdram, ctx);
        goto after_9;
    // 0x803A0348: sra         $s0, $t3, 16
    ctx->r16 = S32(SIGNED(ctx->r11) >> 16);
    after_9:
    // 0x803A034C: sll         $t5, $v0, 1
    ctx->r13 = S32(ctx->r2 << 1);
    // 0x803A0350: slt         $at, $s0, $t5
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x803A0354: bne         $at, $zero, L_803A02B8
    if (ctx->r1 != 0) {
        // 0x803A0358: addu        $t8, $s1, $s0
        ctx->r24 = ADD32(ctx->r17, ctx->r16);
            goto L_803A02B8;
    }
    // 0x803A0358: addu        $t8, $s1, $s0
    ctx->r24 = ADD32(ctx->r17, ctx->r16);
L_803A035C:
    // 0x803A035C: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A0360: jal         0x8002AAC0
    // 0x803A0364: addiu       $a0, $a0, 0x1CF8
    ctx->r4 = ADD32(ctx->r4, 0X1CF8);
    func_8002AAC0(rdram, ctx);
        goto after_10;
    // 0x803A0364: addiu       $a0, $a0, 0x1CF8
    ctx->r4 = ADD32(ctx->r4, 0X1CF8);
    after_10:
    // 0x803A0368: jal         0x80039DF0
    // 0x803A036C: nop

    func_80039DF0(rdram, ctx);
        goto after_11;
    // 0x803A036C: nop

    after_11:
    // 0x803A0370: jal         0x8006FB58
    // 0x803A0374: nop

    func_8006FB58(rdram, ctx);
        goto after_12;
    // 0x803A0374: nop

    after_12:
    // 0x803A0378: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A037C: jal         0x80029354
    // 0x803A0380: addiu       $a0, $a0, 0x75C
    ctx->r4 = ADD32(ctx->r4, 0X75C);
    func_80029354(rdram, ctx);
        goto after_13;
    // 0x803A0380: addiu       $a0, $a0, 0x75C
    ctx->r4 = ADD32(ctx->r4, 0X75C);
    after_13:
    // 0x803A0384: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A0388: addiu       $a0, $a0, 0x3AC
    ctx->r4 = ADD32(ctx->r4, 0X3AC);
    // 0x803A038C: jal         0x8004A9B4
    // 0x803A0390: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_14;
    // 0x803A0390: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_14:
    // 0x803A0394: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803A0398: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803A039C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x803A03A0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x803A03A4: jr          $ra
    // 0x803A03A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803A03A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803A03AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A03AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803A03B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803A03B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803A03B8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x803A03BC: lh          $t6, 0x26($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X26);
    // 0x803A03C0: lh          $t7, 0x24($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X24);
    // 0x803A03C4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803A03C8: sb          $t6, 0x30($a0)
    MEM_B(0X30, ctx->r4) = ctx->r14;
    // 0x803A03CC: sb          $t7, 0x5A($a0)
    MEM_B(0X5A, ctx->r4) = ctx->r15;
    // 0x803A03D0: lw          $t8, -0x3250($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X3250);
    // 0x803A03D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x803A03D8: lhu         $a0, 0x0($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X0);
    // 0x803A03DC: jal         0x80035D2C
    // 0x803A03E0: nop

    func_80035D2C(rdram, ctx);
        goto after_0;
    // 0x803A03E0: nop

    after_0:
    // 0x803A03E4: slti        $at, $v0, 0x6
    ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x803A03E8: bne         $at, $zero, L_803A0404
    if (ctx->r1 != 0) {
        // 0x803A03EC: andi        $v1, $v0, 0xFF
        ctx->r3 = ctx->r2 & 0XFF;
            goto L_803A0404;
    }
    // 0x803A03EC: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x803A03F0: lh          $t9, 0x28($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X28);
    // 0x803A03F4: nop

    // 0x803A03F8: beq         $t9, $zero, L_803A0408
    if (ctx->r25 == 0) {
        // 0x803A03FC: sll         $t0, $v1, 2
        ctx->r8 = S32(ctx->r3 << 2);
            goto L_803A0408;
    }
    // 0x803A03FC: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
    // 0x803A0400: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
L_803A0404:
    // 0x803A0404: sll         $t0, $v1, 2
    ctx->r8 = S32(ctx->r3 << 2);
L_803A0408:
    // 0x803A0408: lui         $t9, 0x803A
    ctx->r25 = S32(0X803A << 16);
    // 0x803A040C: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x803A0410: lw          $t9, 0x1D84($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1D84);
    // 0x803A0414: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x803A0418: jalr        $t9
    // 0x803A041C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x803A041C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x803A0420: lh          $t1, 0x28($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X28);
    // 0x803A0424: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x803A0428: bne         $t1, $zero, L_803A04F8
    if (ctx->r9 != 0) {
        // 0x803A042C: nop
    
            goto L_803A04F8;
    }
    // 0x803A042C: nop

    // 0x803A0430: lb          $t2, -0x32A1($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X32A1);
    // 0x803A0434: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x803A0438: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803A043C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803A0440: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803A0444: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803A0448: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x803A044C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803A0450: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803A0454: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803A0458: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803A045C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x803A0460: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x803A0464: addu        $v1, $v1, $t3
    ctx->r3 = ADD32(ctx->r3, ctx->r11);
    // 0x803A0468: lb          $v1, -0x2F7F($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X2F7F);
    // 0x803A046C: lh          $v0, 0x24($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X24);
    // 0x803A0470: addiu       $a1, $v1, -0x1
    ctx->r5 = ADD32(ctx->r3, -0X1);
    // 0x803A0474: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x803A0478: beq         $at, $zero, L_803A04D8
    if (ctx->r1 == 0) {
        // 0x803A047C: nop
    
            goto L_803A04D8;
    }
    // 0x803A047C: nop

    // 0x803A0480: sh          $a1, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r5;
    // 0x803A0484: lh          $a0, 0x24($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X24);
    // 0x803A0488: jal         0x8003C138
    // 0x803A048C: nop

    func_8003C138(rdram, ctx);
        goto after_2;
    // 0x803A048C: nop

    after_2:
    // 0x803A0490: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x803A0494: lb          $t4, -0x32A1($t4)
    ctx->r12 = MEM_B(ctx->r12, -0X32A1);
    // 0x803A0498: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x803A049C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803A04A0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x803A04A4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803A04A8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803A04AC: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x803A04B0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x803A04B4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803A04B8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803A04BC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803A04C0: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x803A04C4: sll         $t5, $t5, 3
    ctx->r13 = S32(ctx->r13 << 3);
    // 0x803A04C8: addu        $v1, $v1, $t5
    ctx->r3 = ADD32(ctx->r3, ctx->r13);
    // 0x803A04CC: lb          $v1, -0x2F7F($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X2F7F);
    // 0x803A04D0: lh          $v0, 0x24($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X24);
    // 0x803A04D4: nop

L_803A04D8:
    // 0x803A04D8: addiu       $a1, $v1, -0x2
    ctx->r5 = ADD32(ctx->r3, -0X2);
    // 0x803A04DC: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x803A04E0: beq         $at, $zero, L_803A04F8
    if (ctx->r1 == 0) {
        // 0x803A04E4: nop
    
            goto L_803A04F8;
    }
    // 0x803A04E4: nop

    // 0x803A04E8: sh          $a1, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r5;
    // 0x803A04EC: lh          $a0, 0x24($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X24);
    // 0x803A04F0: jal         0x8003C138
    // 0x803A04F4: nop

    func_8003C138(rdram, ctx);
        goto after_3;
    // 0x803A04F4: nop

    after_3:
L_803A04F8:
    // 0x803A04F8: jal         0x8003EAD8
    // 0x803A04FC: nop

    func_8003EAD8(rdram, ctx);
        goto after_4;
    // 0x803A04FC: nop

    after_4:
    // 0x803A0500: lh          $a0, 0x26($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X26);
    // 0x803A0504: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803A0508: jal         0x8001D4C0
    // 0x803A050C: addiu       $a2, $v0, -0x4
    ctx->r6 = ADD32(ctx->r2, -0X4);
    func_8001D4C0(rdram, ctx);
        goto after_5;
    // 0x803A050C: addiu       $a2, $v0, -0x4
    ctx->r6 = ADD32(ctx->r2, -0X4);
    after_5:
    // 0x803A0510: sh          $v0, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r2;
    // 0x803A0514: lh          $t7, 0x26($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X26);
    // 0x803A0518: lb          $t6, 0x30($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X30);
    // 0x803A051C: nop

    // 0x803A0520: bne         $t6, $t7, L_803A053C
    if (ctx->r14 != ctx->r15) {
        // 0x803A0524: nop
    
            goto L_803A053C;
    }
    // 0x803A0524: nop

    // 0x803A0528: lb          $t8, 0x5A($s0)
    ctx->r24 = MEM_B(ctx->r16, 0X5A);
    // 0x803A052C: lh          $t0, 0x24($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X24);
    // 0x803A0530: nop

    // 0x803A0534: beq         $t8, $t0, L_803A0548
    if (ctx->r24 == ctx->r8) {
        // 0x803A0538: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_803A0548;
    }
    // 0x803A0538: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803A053C:
    // 0x803A053C: jal         0x80035734
    // 0x803A0540: nop

    func_80035734(rdram, ctx);
        goto after_6;
    // 0x803A0540: nop

    after_6:
    // 0x803A0544: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_803A0548:
    // 0x803A0548: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803A054C: jr          $ra
    // 0x803A0550: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x803A0550: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_803A0554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A0554: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803A0558: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A055C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x803A0560: jal         0x80035770
    // 0x803A0564: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x803A0564: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x803A0568: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x803A056C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x803A0570: lh          $t7, 0x38($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X38);
    // 0x803A0574: nop

    // 0x803A0578: bne         $t7, $zero, L_803A06B0
    if (ctx->r15 != 0) {
        // 0x803A057C: nop
    
            goto L_803A06B0;
    }
    // 0x803A057C: nop

    // 0x803A0580: lb          $a0, -0x32A1($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X32A1);
    // 0x803A0584: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803A0588: bne         $a0, $zero, L_803A06B0
    if (ctx->r4 != 0) {
        // 0x803A058C: nop
    
            goto L_803A06B0;
    }
    // 0x803A058C: nop

    // 0x803A0590: lbu         $t8, -0x329F($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X329F);
    // 0x803A0594: sll         $t9, $a0, 2
    ctx->r25 = S32(ctx->r4 << 2);
    // 0x803A0598: bne         $t8, $zero, L_803A06B0
    if (ctx->r24 != 0) {
        // 0x803A059C: subu        $t9, $t9, $a0
        ctx->r25 = SUB32(ctx->r25, ctx->r4);
            goto L_803A06B0;
    }
    // 0x803A059C: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x803A05A0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803A05A4: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x803A05A8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x803A05AC: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x803A05B0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803A05B4: addu        $t9, $t9, $a0
    ctx->r25 = ADD32(ctx->r25, ctx->r4);
    // 0x803A05B8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803A05BC: subu        $t9, $t9, $a0
    ctx->r25 = SUB32(ctx->r25, ctx->r4);
    // 0x803A05C0: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x803A05C4: addiu       $t0, $t0, -0x2F80
    ctx->r8 = ADD32(ctx->r8, -0X2F80);
    // 0x803A05C8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x803A05CC: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x803A05D0: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
    // 0x803A05D4: nop

    // 0x803A05D8: slti        $at, $v0, 0x46
    ctx->r1 = SIGNED(ctx->r2) < 0X46 ? 1 : 0;
    // 0x803A05DC: beq         $at, $zero, L_803A05F4
    if (ctx->r1 == 0) {
        // 0x803A05E0: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_803A05F4;
    }
    // 0x803A05E0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803A05E4: beq         $v0, $at, L_803A05F4
    if (ctx->r2 == ctx->r1) {
        // 0x803A05E8: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_803A05F4;
    }
    // 0x803A05E8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x803A05EC: bne         $v0, $at, L_803A0654
    if (ctx->r2 != ctx->r1) {
        // 0x803A05F0: nop
    
            goto L_803A0654;
    }
    // 0x803A05F0: nop

L_803A05F4:
    // 0x803A05F4: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x803A05F8: jal         0x80049A4C
    // 0x803A05FC: nop

    func_80049A4C(rdram, ctx);
        goto after_1;
    // 0x803A05FC: nop

    after_1:
    // 0x803A0600: bne         $v0, $zero, L_803A06B0
    if (ctx->r2 != 0) {
        // 0x803A0604: nop
    
            goto L_803A06B0;
    }
    // 0x803A0604: nop

    // 0x803A0608: jal         0x80280CBC
    // 0x803A060C: nop

    LOOKUP_FUNC(0x80280CBC)(rdram, ctx);
        goto after_2;
    // 0x803A060C: nop

    after_2:
    // 0x803A0610: bne         $v0, $zero, L_803A06B0
    if (ctx->r2 != 0) {
        // 0x803A0614: lui         $t1, 0x8012
        ctx->r9 = S32(0X8012 << 16);
            goto L_803A06B0;
    }
    // 0x803A0614: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x803A0618: lb          $t1, -0x32A1($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X32A1);
    // 0x803A061C: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x803A0620: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803A0624: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x803A0628: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803A062C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803A0630: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x803A0634: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x803A0638: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803A063C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803A0640: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803A0644: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x803A0648: sll         $t2, $t2, 3
    ctx->r10 = S32(ctx->r10 << 3);
    // 0x803A064C: addiu       $t3, $t3, -0x2F80
    ctx->r11 = ADD32(ctx->r11, -0X2F80);
    // 0x803A0650: addu        $v1, $t2, $t3
    ctx->r3 = ADD32(ctx->r10, ctx->r11);
L_803A0654:
    // 0x803A0654: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x803A0658: jal         0x80049A4C
    // 0x803A065C: nop

    func_80049A4C(rdram, ctx);
        goto after_3;
    // 0x803A065C: nop

    after_3:
    // 0x803A0660: bne         $v0, $zero, L_803A0684
    if (ctx->r2 != 0) {
        // 0x803A0664: addiu       $a1, $zero, 0x2D
        ctx->r5 = ADD32(0, 0X2D);
            goto L_803A0684;
    }
    // 0x803A0664: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x803A0668: jal         0x80280CBC
    // 0x803A066C: nop

    LOOKUP_FUNC(0x80280CBC)(rdram, ctx);
        goto after_4;
    // 0x803A066C: nop

    after_4:
    // 0x803A0670: bne         $v0, $zero, L_803A0684
    if (ctx->r2 != 0) {
        // 0x803A0674: addiu       $a1, $zero, 0x2D
        ctx->r5 = ADD32(0, 0X2D);
            goto L_803A0684;
    }
    // 0x803A0674: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    // 0x803A0678: b           L_803A0684
    // 0x803A067C: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
        goto L_803A0684;
    // 0x803A067C: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x803A0680: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
L_803A0684:
    // 0x803A0684: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x803A0688: jal         0x80015BC0
    // 0x803A068C: sh          $a1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r5;
    func_80015BC0(rdram, ctx);
        goto after_5;
    // 0x803A068C: sh          $a1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r5;
    after_5:
    // 0x803A0690: lh          $a1, 0x1E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1E);
    // 0x803A0694: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x803A0698: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A069C: sb          $zero, -0x3271($at)
    MEM_B(-0X3271, ctx->r1) = 0;
    // 0x803A06A0: jal         0x8002989C
    // 0x803A06A4: addiu       $a0, $a0, 0x6C8
    ctx->r4 = ADD32(ctx->r4, 0X6C8);
    func_8002989C(rdram, ctx);
        goto after_6;
    // 0x803A06A4: addiu       $a0, $a0, 0x6C8
    ctx->r4 = ADD32(ctx->r4, 0X6C8);
    after_6:
    // 0x803A06A8: b           L_803A06BC
    // 0x803A06AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_803A06BC;
    // 0x803A06AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A06B0:
    // 0x803A06B0: jal         0x80037908
    // 0x803A06B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_7;
    // 0x803A06B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_7:
    // 0x803A06B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_803A06BC:
    // 0x803A06BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803A06C0: jr          $ra
    // 0x803A06C4: nop

    return;
    // 0x803A06C4: nop

;}
RECOMP_FUNC void func_803A06C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A06C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A06CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A06D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A06D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A06D8: jal         0x80037908
    // 0x803A06DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_0;
    // 0x803A06DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x803A06E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A06E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A06E8: jr          $ra
    // 0x803A06EC: nop

    return;
    // 0x803A06EC: nop

;}
RECOMP_FUNC void func_803A06F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A06F0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x803A06F4: jr          $ra
    // 0x803A06F8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x803A06F8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_803A06FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A06FC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803A0700: lh          $t6, 0x26($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X26);
    // 0x803A0704: nop

    // 0x803A0708: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x803A070C: jr          $ra
    // 0x803A0710: sh          $t7, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r15;
    return;
    // 0x803A0710: sh          $t7, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_803A0714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A0714: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803A0718: lh          $t6, 0x26($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X26);
    // 0x803A071C: nop

    // 0x803A0720: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x803A0724: jr          $ra
    // 0x803A0728: sh          $t7, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r15;
    return;
    // 0x803A0728: sh          $t7, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_803A072C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A072C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803A0730: lh          $t6, 0x26($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X26);
    // 0x803A0734: nop

    // 0x803A0738: addiu       $t7, $t6, -0x4
    ctx->r15 = ADD32(ctx->r14, -0X4);
    // 0x803A073C: jr          $ra
    // 0x803A0740: sh          $t7, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r15;
    return;
    // 0x803A0740: sh          $t7, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_803A0744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A0744: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x803A0748: lh          $t6, 0x26($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X26);
    // 0x803A074C: nop

    // 0x803A0750: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x803A0754: jr          $ra
    // 0x803A0758: sh          $t7, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r15;
    return;
    // 0x803A0758: sh          $t7, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_803A075C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A075C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x803A0760: sw          $s3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r19;
    // 0x803A0764: sw          $s2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r18;
    // 0x803A0768: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x803A076C: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x803A0770: lui         $s1, 0x803A
    ctx->r17 = S32(0X803A << 16);
    // 0x803A0774: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x803A0778: lui         $s3, 0x8003
    ctx->r19 = S32(0X8003 << 16);
    // 0x803A077C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x803A0780: sw          $s5, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r21;
    // 0x803A0784: sw          $s4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r20;
    // 0x803A0788: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x803A078C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x803A0790: addiu       $s3, $s3, -0x6610
    ctx->r19 = ADD32(ctx->r19, -0X6610);
    // 0x803A0794: addiu       $s2, $s2, -0x750
    ctx->r18 = ADD32(ctx->r18, -0X750);
    // 0x803A0798: addiu       $s1, $s1, 0x1E60
    ctx->r17 = ADD32(ctx->r17, 0X1E60);
    // 0x803A079C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_803A07A0:
    // 0x803A07A0: jal         0x80029354
    // 0x803A07A4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x803A07A4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_0:
    // 0x803A07A8: lh          $t6, 0xAA($s2)
    ctx->r14 = MEM_H(ctx->r18, 0XAA);
    // 0x803A07AC: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x803A07B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803A07B4: addu        $t8, $s1, $t7
    ctx->r24 = ADD32(ctx->r17, ctx->r15);
    // 0x803A07B8: addu        $t9, $t8, $s0
    ctx->r25 = ADD32(ctx->r24, ctx->r16);
    // 0x803A07BC: lbu         $a2, 0x0($t9)
    ctx->r6 = MEM_BU(ctx->r25, 0X0);
    // 0x803A07C0: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x803A07C4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x803A07C8: addiu       $a1, $zero, 0x88
    ctx->r5 = ADD32(0, 0X88);
    // 0x803A07CC: jal         0x8004A55C
    // 0x803A07D0: addiu       $a3, $zero, 0x38
    ctx->r7 = ADD32(0, 0X38);
    func_8004A55C(rdram, ctx);
        goto after_1;
    // 0x803A07D0: addiu       $a3, $zero, 0x38
    ctx->r7 = ADD32(0, 0X38);
    after_1:
    // 0x803A07D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803A07D8: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x803A07DC: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    // 0x803A07E0: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x803A07E4: bne         $at, $zero, L_803A07A0
    if (ctx->r1 != 0) {
        // 0x803A07E8: nop
    
            goto L_803A07A0;
    }
    // 0x803A07E8: nop

    // 0x803A07EC: lui         $s5, 0x8028
    ctx->r21 = S32(0X8028 << 16);
    // 0x803A07F0: lui         $s4, 0x3
    ctx->r20 = S32(0X3 << 16);
    // 0x803A07F4: lui         $s3, 0x800E
    ctx->r19 = S32(0X800E << 16);
    // 0x803A07F8: addiu       $s3, $s3, -0x3770
    ctx->r19 = ADD32(ctx->r19, -0X3770);
    // 0x803A07FC: ori         $s4, $s4, 0x248
    ctx->r20 = ctx->r20 | 0X248;
    // 0x803A0800: addiu       $s5, $s5, 0x61E8
    ctx->r21 = ADD32(ctx->r21, 0X61E8);
    // 0x803A0804: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_803A0808:
    // 0x803A0808: lh          $t5, 0xAA($s2)
    ctx->r13 = MEM_H(ctx->r18, 0XAA);
    // 0x803A080C: sll         $t3, $s0, 5
    ctx->r11 = S32(ctx->r16 << 5);
    // 0x803A0810: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x803A0814: addu        $t7, $s1, $t6
    ctx->r15 = ADD32(ctx->r17, ctx->r14);
    // 0x803A0818: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x803A081C: lbu         $a2, 0x0($t8)
    ctx->r6 = MEM_BU(ctx->r24, 0X0);
    // 0x803A0820: addu        $t4, $s3, $t3
    ctx->r12 = ADD32(ctx->r19, ctx->r11);
    // 0x803A0824: addu        $a0, $t4, $s4
    ctx->r4 = ADD32(ctx->r12, ctx->r20);
    // 0x803A0828: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x803A082C: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x803A0830: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x803A0834: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803A0838: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x803A083C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803A0840: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x803A0844: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x803A0848: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x803A084C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x803A0850: sra         $a2, $t9, 16
    ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
    // 0x803A0854: addiu       $a1, $zero, 0x9A
    ctx->r5 = ADD32(0, 0X9A);
    // 0x803A0858: jal         0x8002F528
    // 0x803A085C: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    func_8002F528(rdram, ctx);
        goto after_2;
    // 0x803A085C: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    after_2:
    // 0x803A0860: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x803A0864: sll         $t5, $s0, 16
    ctx->r13 = S32(ctx->r16 << 16);
    // 0x803A0868: sra         $s0, $t5, 16
    ctx->r16 = S32(SIGNED(ctx->r13) >> 16);
    // 0x803A086C: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x803A0870: bne         $at, $zero, L_803A0808
    if (ctx->r1 != 0) {
        // 0x803A0874: nop
    
            goto L_803A0808;
    }
    // 0x803A0874: nop

    // 0x803A0878: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x803A087C: jal         0x80029F00
    // 0x803A0880: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80029F00(rdram, ctx);
        goto after_3;
    // 0x803A0880: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x803A0884: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A0888: jal         0x800297B4
    // 0x803A088C: addiu       $a0, $a0, 0x8B4
    ctx->r4 = ADD32(ctx->r4, 0X8B4);
    func_800297B4(rdram, ctx);
        goto after_4;
    // 0x803A088C: addiu       $a0, $a0, 0x8B4
    ctx->r4 = ADD32(ctx->r4, 0X8B4);
    after_4:
    // 0x803A0890: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x803A0894: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x803A0898: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x803A089C: lw          $s2, 0x2C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X2C);
    // 0x803A08A0: lw          $s3, 0x30($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X30);
    // 0x803A08A4: lw          $s4, 0x34($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X34);
    // 0x803A08A8: lw          $s5, 0x38($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X38);
    // 0x803A08AC: jr          $ra
    // 0x803A08B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x803A08B0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_803A08B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A08B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803A08B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803A08BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803A08C0: lui         $a0, 0x803A
    ctx->r4 = S32(0X803A << 16);
    // 0x803A08C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803A08C8: jal         0x8002A5D8
    // 0x803A08CC: addiu       $a0, $a0, 0x8F8
    ctx->r4 = ADD32(ctx->r4, 0X8F8);
    func_8002A5D8(rdram, ctx);
        goto after_0;
    // 0x803A08CC: addiu       $a0, $a0, 0x8F8
    ctx->r4 = ADD32(ctx->r4, 0X8F8);
    after_0:
    // 0x803A08D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x803A08D4: jal         0x8003BEC4
    // 0x803A08D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003BEC4(rdram, ctx);
        goto after_1;
    // 0x803A08D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x803A08DC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x803A08E0: jal         0x8003BFB4
    // 0x803A08E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8003BFB4(rdram, ctx);
        goto after_2;
    // 0x803A08E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803A08E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803A08EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803A08F0: jr          $ra
    // 0x803A08F4: nop

    return;
    // 0x803A08F4: nop

;}
RECOMP_FUNC void func_803A08F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A08F8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x803A08FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803A0900: lui         $ra, 0x801B
    ctx->r31 = S32(0X801B << 16);
    // 0x803A0904: addiu       $ra, $ra, -0x750
    ctx->r31 = ADD32(ctx->r31, -0X750);
    // 0x803A0908: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x803A090C: lh          $t7, 0x4E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4E);
    // 0x803A0910: lh          $t6, 0x9A($ra)
    ctx->r14 = MEM_H(ctx->r31, 0X9A);
    // 0x803A0914: lh          $t0, 0x98($ra)
    ctx->r8 = MEM_H(ctx->r31, 0X98);
    // 0x803A0918: addu        $t1, $t6, $t7
    ctx->r9 = ADD32(ctx->r14, ctx->r15);
    // 0x803A091C: sll         $t8, $t1, 16
    ctx->r24 = S32(ctx->r9 << 16);
    // 0x803A0920: sra         $t9, $t8, 16
    ctx->r25 = S32(SIGNED(ctx->r24) >> 16);
    // 0x803A0924: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803A0928: addiu       $t8, $t8, -0x32B0
    ctx->r24 = ADD32(ctx->r24, -0X32B0);
    // 0x803A092C: sll         $t6, $t9, 1
    ctx->r14 = S32(ctx->r25 << 1);
    // 0x803A0930: addu        $v0, $t6, $t8
    ctx->r2 = ADD32(ctx->r14, ctx->r24);
    // 0x803A0934: lb          $t9, 0xE0($v0)
    ctx->r25 = MEM_B(ctx->r2, 0XE0);
    // 0x803A0938: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803A093C: lb          $t8, -0x32A1($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X32A1);
    // 0x803A0940: sh          $t9, 0x44($sp)
    MEM_H(0X44, ctx->r29) = ctx->r25;
    // 0x803A0944: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803A0948: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803A094C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803A0950: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803A0954: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x803A0958: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803A095C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803A0960: lb          $t6, 0xE1($v0)
    ctx->r14 = MEM_B(ctx->r2, 0XE1);
    // 0x803A0964: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803A0968: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803A096C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803A0970: sh          $t6, 0x42($sp)
    MEM_H(0X42, ctx->r29) = ctx->r14;
    // 0x803A0974: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x803A0978: lh          $t8, 0x44($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X44);
    // 0x803A097C: addiu       $t6, $t6, -0x2F80
    ctx->r14 = ADD32(ctx->r14, -0X2F80);
    // 0x803A0980: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x803A0984: addu        $v1, $t9, $t6
    ctx->r3 = ADD32(ctx->r25, ctx->r14);
    // 0x803A0988: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803A098C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803A0990: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803A0994: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803A0998: lh          $t6, 0x42($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X42);
    // 0x803A099C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803A09A0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x803A09A4: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x803A09A8: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x803A09AC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803A09B0: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x803A09B4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803A09B8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803A09BC: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x803A09C0: addu        $t2, $v1, $t9
    ctx->r10 = ADD32(ctx->r3, ctx->r25);
    // 0x803A09C4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803A09C8: addu        $t3, $v1, $t8
    ctx->r11 = ADD32(ctx->r3, ctx->r24);
    // 0x803A09CC: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x803A09D0: addiu       $t3, $t3, 0x4AC
    ctx->r11 = ADD32(ctx->r11, 0X4AC);
    // 0x803A09D4: subu        $t9, $t9, $t0
    ctx->r25 = SUB32(ctx->r25, ctx->r8);
    // 0x803A09D8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x803A09DC: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x803A09E0: addiu       $t2, $t2, 0x4AC
    ctx->r10 = ADD32(ctx->r10, 0X4AC);
    // 0x803A09E4: addu        $t5, $t3, $t9
    ctx->r13 = ADD32(ctx->r11, ctx->r25);
    // 0x803A09E8: lb          $t6, 0x63($t5)
    ctx->r14 = MEM_B(ctx->r13, 0X63);
    // 0x803A09EC: addu        $t4, $t2, $t9
    ctx->r12 = ADD32(ctx->r10, ctx->r25);
    // 0x803A09F0: lb          $a3, 0x63($t4)
    ctx->r7 = MEM_B(ctx->r12, 0X63);
    // 0x803A09F4: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x803A09F8: sh          $t6, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r14;
    // 0x803A09FC: lh          $t6, 0xAA($ra)
    ctx->r14 = MEM_H(ctx->r31, 0XAA);
    // 0x803A0A00: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x803A0A04: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x803A0A08: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    // 0x803A0A0C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x803A0A10: lui         $a2, 0x803A
    ctx->r6 = S32(0X803A << 16);
    // 0x803A0A14: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x803A0A18: addu        $a2, $a2, $t9
    ctx->r6 = ADD32(ctx->r6, ctx->r25);
    // 0x803A0A1C: lbu         $a2, 0x1E60($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X1E60);
    // 0x803A0A20: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x803A0A24: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x803A0A28: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x803A0A2C: ori         $at, $at, 0x148
    ctx->r1 = ctx->r1 | 0X148;
    // 0x803A0A30: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x803A0A34: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x803A0A38: addiu       $t4, $t4, 0x62
    ctx->r12 = ADD32(ctx->r12, 0X62);
    // 0x803A0A3C: addiu       $t5, $t5, 0x62
    ctx->r13 = ADD32(ctx->r13, 0X62);
    // 0x803A0A40: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803A0A44: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x803A0A48: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    // 0x803A0A4C: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x803A0A50: jal         0x8002F6EC
    // 0x803A0A54: addiu       $a1, $zero, 0x8B
    ctx->r5 = ADD32(0, 0X8B);
    func_8002F6EC(rdram, ctx);
        goto after_0;
    // 0x803A0A54: addiu       $a1, $zero, 0x8B
    ctx->r5 = ADD32(0, 0X8B);
    after_0:
    // 0x803A0A58: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x803A0A5C: lh          $t6, -0x6A6($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X6A6);
    // 0x803A0A60: lh          $t7, 0x4E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X4E);
    // 0x803A0A64: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x803A0A68: lui         $a2, 0x803A
    ctx->r6 = S32(0X803A << 16);
    // 0x803A0A6C: addu        $t9, $t8, $t7
    ctx->r25 = ADD32(ctx->r24, ctx->r15);
    // 0x803A0A70: addu        $a2, $a2, $t9
    ctx->r6 = ADD32(ctx->r6, ctx->r25);
    // 0x803A0A74: lbu         $a2, 0x1E60($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X1E60);
    // 0x803A0A78: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x803A0A7C: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x803A0A80: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x803A0A84: ori         $at, $at, 0x1C8
    ctx->r1 = ctx->r1 | 0X1C8;
    // 0x803A0A88: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x803A0A8C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x803A0A90: lh          $a3, 0x2C($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2C);
    // 0x803A0A94: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x803A0A98: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x803A0A9C: addu        $a0, $s0, $at
    ctx->r4 = ADD32(ctx->r16, ctx->r1);
    // 0x803A0AA0: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x803A0AA4: jal         0x8002F6EC
    // 0x803A0AA8: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    func_8002F6EC(rdram, ctx);
        goto after_1;
    // 0x803A0AA8: addiu       $a1, $zero, 0xA7
    ctx->r5 = ADD32(0, 0XA7);
    after_1:
    // 0x803A0AAC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x803A0AB0: lb          $a0, -0x6B7($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X6B7);
    // 0x803A0AB4: lb          $a1, 0x45($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X45);
    // 0x803A0AB8: lb          $a2, 0x43($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X43);
    // 0x803A0ABC: jal         0x8003CE34
    // 0x803A0AC0: nop

    func_8003CE34(rdram, ctx);
        goto after_2;
    // 0x803A0AC0: nop

    after_2:
    // 0x803A0AC4: sltiu       $at, $v0, 0x5
    ctx->r1 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x803A0AC8: beq         $at, $zero, L_803A0B14
    if (ctx->r1 == 0) {
        // 0x803A0ACC: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_803A0B14;
    }
    // 0x803A0ACC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x803A0AD0: lui         $at, 0x803A
    ctx->r1 = S32(0X803A << 16);
    // 0x803A0AD4: addu        $at, $at, $t6
    gpr jr_addend_803A0AE0 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803A0AD8: lw          $t6, 0x1E8C($at)
    ctx->r14 = ADD32(ctx->r1, 0X1E8C);
    // 0x803A0ADC: nop

    // 0x803A0AE0: jr          $t6
    // 0x803A0AE4: nop

    switch (jr_addend_803A0AE0 >> 2) {
        case 0: goto L_803A0AE8; break;
        case 1: goto L_803A0AE8; break;
        case 2: goto L_803A0B00; break;
        case 3: goto L_803A0B00; break;
        case 4: goto L_803A0B14; break;
        default: switch_error(__func__, 0x803A0AE0, 0x803A1E8C);
    }
    // 0x803A0AE4: nop

L_803A0AE8:
    // 0x803A0AE8: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x803A0AEC: addu        $v0, $s0, $at
    ctx->r2 = ADD32(ctx->r16, ctx->r1);
    // 0x803A0AF0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x803A0AF4: sb          $t7, 0x5D($v0)
    MEM_B(0X5D, ctx->r2) = ctx->r15;
    // 0x803A0AF8: b           L_803A0B14
    // 0x803A0AFC: sb          $t7, 0x15D($v0)
    MEM_B(0X15D, ctx->r2) = ctx->r15;
        goto L_803A0B14;
    // 0x803A0AFC: sb          $t7, 0x15D($v0)
    MEM_B(0X15D, ctx->r2) = ctx->r15;
L_803A0B00:
    // 0x803A0B00: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x803A0B04: addu        $v0, $s0, $at
    ctx->r2 = ADD32(ctx->r16, ctx->r1);
    // 0x803A0B08: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x803A0B0C: sb          $t6, 0xDD($v0)
    MEM_B(0XDD, ctx->r2) = ctx->r14;
    // 0x803A0B10: sb          $t6, 0x1DD($v0)
    MEM_B(0X1DD, ctx->r2) = ctx->r14;
L_803A0B14:
    // 0x803A0B14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803A0B18: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803A0B1C: jr          $ra
    // 0x803A0B20: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x803A0B20: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_803A0B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803A0B24: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x803A0B28: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x803A0B2C: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x803A0B30: beq         $t6, $zero, L_803A0B68
    if (ctx->r14 == 0) {
        // 0x803A0B34: addiu       $v1, $v1, -0x2F80
        ctx->r3 = ADD32(ctx->r3, -0X2F80);
            goto L_803A0B68;
    }
    // 0x803A0B34: addiu       $v1, $v1, -0x2F80
    ctx->r3 = ADD32(ctx->r3, -0X2F80);
    // 0x803A0B38: lb          $v0, 0x3398($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X3398);
    // 0x803A0B3C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803A0B40: beq         $v0, $at, L_803A0B60
    if (ctx->r2 == ctx->r1) {
        // 0x803A0B44: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_803A0B60;
    }
    // 0x803A0B44: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x803A0B48: bne         $v0, $at, L_803A0B6C
    if (ctx->r2 != ctx->r1) {
        // 0x803A0B4C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_803A0B6C;
    }
    // 0x803A0B4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x803A0B50: lb          $t7, 0x3399($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X3399);
    // 0x803A0B54: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x803A0B58: bne         $t7, $at, L_803A0B6C
    if (ctx->r15 != ctx->r1) {
        // 0x803A0B5C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_803A0B6C;
    }
    // 0x803A0B5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803A0B60:
    // 0x803A0B60: jr          $ra
    // 0x803A0B64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x803A0B64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_803A0B68:
    // 0x803A0B68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_803A0B6C:
    // 0x803A0B6C: jr          $ra
    // 0x803A0B70: nop

    return;
    // 0x803A0B70: nop

    // 0x803A0B74: nop

    // 0x803A0B78: nop

    // 0x803A0B7C: nop

;}
RECOMP_FUNC void func_803BB200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803BB200: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803BB204: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803BB208: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x803BB20C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x803BB210: lw          $t7, 0x38($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X38);
    // 0x803BB214: nop

    // 0x803BB218: lh          $a0, 0x1E($t7)
    ctx->r4 = MEM_H(ctx->r15, 0X1E);
    // 0x803BB21C: jal         0x803BD368
    // 0x803BB220: nop

    func_803BD368(rdram, ctx);
        goto after_0;
    // 0x803BB220: nop

    after_0:
    // 0x803BB224: sll         $t9, $v0, 17
    ctx->r25 = S32(ctx->r2 << 17);
    // 0x803BB228: lui         $t1, 0x803C
    ctx->r9 = S32(0X803C << 16);
    // 0x803BB22C: addiu       $t1, $t1, -0x278C
    ctx->r9 = ADD32(ctx->r9, -0X278C);
    // 0x803BB230: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x803BB234: addu        $v1, $t0, $t1
    ctx->r3 = ADD32(ctx->r8, ctx->r9);
    // 0x803BB238: lbu         $a1, 0x0($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X0);
    // 0x803BB23C: lbu         $a2, 0x1($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X1);
    // 0x803BB240: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803BB244: jal         0x8002B608
    // 0x803BB248: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_8002B608(rdram, ctx);
        goto after_1;
    // 0x803BB248: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_1:
    // 0x803BB24C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803BB250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803BB254: jr          $ra
    // 0x803BB258: nop

    return;
    // 0x803BB258: nop

;}
