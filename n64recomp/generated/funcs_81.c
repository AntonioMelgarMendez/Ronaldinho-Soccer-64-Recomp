#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_802A6DF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6DF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A6DF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A6DFC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802A6E00: jal         0x802A6DC4
    // 0x802A6E04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_802A6DC4(rdram, ctx);
        goto after_0;
    // 0x802A6E04: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x802A6E08: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x802A6E0C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802A6E10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802A6E14: bne         $v0, $at, L_802A6E2C
    if (ctx->r2 != ctx->r1) {
        // 0x802A6E18: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_802A6E2C;
    }
    // 0x802A6E18: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A6E1C: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x802A6E20: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x802A6E24: b           L_802A6E3C
    // 0x802A6E28: sh          $a0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r4;
        goto L_802A6E3C;
    // 0x802A6E28: sh          $a0, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r4;
L_802A6E2C:
    // 0x802A6E2C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A6E30: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x802A6E34: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    // 0x802A6E38: sh          $a0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r4;
L_802A6E3C:
    // 0x802A6E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A6E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A6E44: jr          $ra
    // 0x802A6E48: nop

    return;
    // 0x802A6E48: nop

;}
RECOMP_FUNC void func_802A6E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6E4C: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802A6E50: lh          $v1, 0x4FD0($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4FD0);
    // 0x802A6E54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A6E58: sra         $t6, $v1, 1
    ctx->r14 = S32(SIGNED(ctx->r3) >> 1);
    // 0x802A6E5C: slti        $at, $t6, 0x6
    ctx->r1 = SIGNED(ctx->r14) < 0X6 ? 1 : 0;
    // 0x802A6E60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A6E64: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802A6E68: bne         $at, $zero, L_802A6E74
    if (ctx->r1 != 0) {
        // 0x802A6E6C: or          $v1, $t6, $zero
        ctx->r3 = ctx->r14 | 0;
            goto L_802A6E74;
    }
    // 0x802A6E6C: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x802A6E70: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
L_802A6E74:
    // 0x802A6E74: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x802A6E78: addu        $v0, $t7, $a2
    ctx->r2 = ADD32(ctx->r15, ctx->r6);
    // 0x802A6E7C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802A6E80: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A6E84: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802A6E88: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802A6E8C: lbu         $a0, -0x2604($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2604);
    // 0x802A6E90: lbu         $a1, -0x25F8($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X25F8);
    // 0x802A6E94: jal         0x802A6DF4
    // 0x802A6E98: nop

    func_802A6DF4(rdram, ctx);
        goto after_0;
    // 0x802A6E98: nop

    after_0:
    // 0x802A6E9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A6EA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A6EA4: jr          $ra
    // 0x802A6EA8: nop

    return;
    // 0x802A6EA8: nop

;}
RECOMP_FUNC void func_802A6EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6EAC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A6EB0: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x802A6EB4: sh          $a0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r4;
    // 0x802A6EB8: jr          $ra
    // 0x802A6EBC: sh          $a1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r5;
    return;
    // 0x802A6EBC: sh          $a1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r5;
;}
RECOMP_FUNC void func_802A6EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6EC0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802A6EC4: bne         $a0, $v1, L_802A6F04
    if (ctx->r4 != ctx->r3) {
        // 0x802A6EC8: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_802A6F04;
    }
    // 0x802A6EC8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A6ECC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A6ED0: lw          $v0, 0x54BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X54BC);
    // 0x802A6ED4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802A6ED8: beq         $v0, $zero, L_802A6EE4
    if (ctx->r2 == 0) {
        // 0x802A6EDC: nop
    
            goto L_802A6EE4;
    }
    // 0x802A6EDC: nop

    // 0x802A6EE0: bne         $v0, $at, L_802A6EF4
    if (ctx->r2 != ctx->r1) {
        // 0x802A6EE4: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_802A6EF4;
    }
L_802A6EE4:
    // 0x802A6EE4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A6EE8: lw          $v0, 0x53F8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X53F8);
    // 0x802A6EEC: jr          $ra
    // 0x802A6EF0: nop

    return;
    // 0x802A6EF0: nop

L_802A6EF4:
    // 0x802A6EF4: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A6EF8: lw          $v0, 0x53FC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X53FC);
    // 0x802A6EFC: jr          $ra
    // 0x802A6F00: nop

    return;
    // 0x802A6F00: nop

L_802A6F04:
    // 0x802A6F04: lw          $v0, 0x54BC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X54BC);
    // 0x802A6F08: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802A6F0C: beq         $v1, $v0, L_802A6F18
    if (ctx->r3 == ctx->r2) {
        // 0x802A6F10: nop
    
            goto L_802A6F18;
    }
    // 0x802A6F10: nop

    // 0x802A6F14: bne         $v0, $at, L_802A6F28
    if (ctx->r2 != ctx->r1) {
        // 0x802A6F18: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_802A6F28;
    }
L_802A6F18:
    // 0x802A6F18: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A6F1C: lw          $v0, 0x53F8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X53F8);
    // 0x802A6F20: jr          $ra
    // 0x802A6F24: nop

    return;
    // 0x802A6F24: nop

L_802A6F28:
    // 0x802A6F28: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A6F2C: lw          $v0, 0x53FC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X53FC);
    // 0x802A6F30: nop

    // 0x802A6F34: jr          $ra
    // 0x802A6F38: nop

    return;
    // 0x802A6F38: nop

;}
RECOMP_FUNC void func_802A6F3C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6F3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A6F40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A6F44: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    // 0x802A6F48: jal         0x802A6EAC
    // 0x802A6F4C: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    func_802A6EAC(rdram, ctx);
        goto after_0;
    // 0x802A6F4C: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_0:
    // 0x802A6F50: jal         0x80015B94
    // 0x802A6F54: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    func_80015B94(rdram, ctx);
        goto after_1;
    // 0x802A6F54: addiu       $a0, $zero, 0x200
    ctx->r4 = ADD32(0, 0X200);
    after_1:
    // 0x802A6F58: jal         0x80015B94
    // 0x802A6F5C: addiu       $a0, $zero, 0x201
    ctx->r4 = ADD32(0, 0X201);
    func_80015B94(rdram, ctx);
        goto after_2;
    // 0x802A6F5C: addiu       $a0, $zero, 0x201
    ctx->r4 = ADD32(0, 0X201);
    after_2:
    // 0x802A6F60: jal         0x80015B94
    // 0x802A6F64: addiu       $a0, $zero, 0x202
    ctx->r4 = ADD32(0, 0X202);
    func_80015B94(rdram, ctx);
        goto after_3;
    // 0x802A6F64: addiu       $a0, $zero, 0x202
    ctx->r4 = ADD32(0, 0X202);
    after_3:
    // 0x802A6F68: jal         0x80015B94
    // 0x802A6F6C: addiu       $a0, $zero, 0x203
    ctx->r4 = ADD32(0, 0X203);
    func_80015B94(rdram, ctx);
        goto after_4;
    // 0x802A6F6C: addiu       $a0, $zero, 0x203
    ctx->r4 = ADD32(0, 0X203);
    after_4:
    // 0x802A6F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A6F74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A6F78: jr          $ra
    // 0x802A6F7C: nop

    return;
    // 0x802A6F7C: nop

;}
RECOMP_FUNC void func_802A6F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6F80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A6F84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A6F88: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    // 0x802A6F8C: jal         0x802A6EAC
    // 0x802A6F90: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    func_802A6EAC(rdram, ctx);
        goto after_0;
    // 0x802A6F90: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_0:
    // 0x802A6F94: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x802A6F98: lw          $t6, -0x2F98($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2F98);
    // 0x802A6F9C: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x802A6FA0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x802A6FA4: jal         0x8007A940
    // 0x802A6FA8: sb          $zero, 0x7D6($at)
    MEM_B(0X7D6, ctx->r1) = 0;
    func_8007A940(rdram, ctx);
        goto after_1;
    // 0x802A6FA8: sb          $zero, 0x7D6($at)
    MEM_B(0X7D6, ctx->r1) = 0;
    after_1:
    // 0x802A6FAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A6FB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A6FB4: jr          $ra
    // 0x802A6FB8: nop

    return;
    // 0x802A6FB8: nop

;}
RECOMP_FUNC void func_802A6FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A6FBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A6FC0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A6FC4: addiu       $v0, $v0, 0x38C8
    ctx->r2 = ADD32(ctx->r2, 0X38C8);
    // 0x802A6FC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A6FCC: addiu       $v1, $zero, 0x60
    ctx->r3 = ADD32(0, 0X60);
    // 0x802A6FD0: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x802A6FD4: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    // 0x802A6FD8: jal         0x802A6EC0
    // 0x802A6FDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802A6EC0(rdram, ctx);
        goto after_0;
    // 0x802A6FDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x802A6FE0: lbu         $t6, 0x0($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X0);
    // 0x802A6FE4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A6FE8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802A6FEC: jal         0x802A6EC0
    // 0x802A6FF0: sh          $t6, 0x38CC($at)
    MEM_H(0X38CC, ctx->r1) = ctx->r14;
    func_802A6EC0(rdram, ctx);
        goto after_1;
    // 0x802A6FF0: sh          $t6, 0x38CC($at)
    MEM_H(0X38CC, ctx->r1) = ctx->r14;
    after_1:
    // 0x802A6FF4: lbu         $t7, 0x0($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X0);
    // 0x802A6FF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A6FFC: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A7000: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A7004: jr          $ra
    // 0x802A7008: sh          $t7, 0x38CE($at)
    MEM_H(0X38CE, ctx->r1) = ctx->r15;
    return;
    // 0x802A7008: sh          $t7, 0x38CE($at)
    MEM_H(0X38CE, ctx->r1) = ctx->r15;
;}
RECOMP_FUNC void func_802A700C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A700C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A7010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A7014: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    // 0x802A7018: jal         0x802A6DF4
    // 0x802A701C: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    func_802A6DF4(rdram, ctx);
        goto after_0;
    // 0x802A701C: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    after_0:
    // 0x802A7020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A7024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A7028: jr          $ra
    // 0x802A702C: nop

    return;
    // 0x802A702C: nop

;}
RECOMP_FUNC void func_802A7030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A7030: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A7034: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A7038: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x802A703C: jal         0x802A6DF4
    // 0x802A7040: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    func_802A6DF4(rdram, ctx);
        goto after_0;
    // 0x802A7040: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    after_0:
    // 0x802A7044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A7048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A704C: jr          $ra
    // 0x802A7050: nop

    return;
    // 0x802A7050: nop

;}
RECOMP_FUNC void func_802A7054(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A7054: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A7058: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A705C: jal         0x802A6DC4
    // 0x802A7060: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_802A6DC4(rdram, ctx);
        goto after_0;
    // 0x802A7060: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802A7064: sll         $a1, $v0, 6
    ctx->r5 = S32(ctx->r2 << 6);
    // 0x802A7068: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x802A706C: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x802A7070: addiu       $a1, $a1, -0x7D
    ctx->r5 = ADD32(ctx->r5, -0X7D);
    // 0x802A7074: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x802A7078: lhu         $a0, 0x1A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1A);
    // 0x802A707C: jal         0x80015BEC
    // 0x802A7080: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80015BEC(rdram, ctx);
        goto after_1;
    // 0x802A7080: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_1:
    // 0x802A7084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A7088: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A708C: jr          $ra
    // 0x802A7090: nop

    return;
    // 0x802A7090: nop

;}
RECOMP_FUNC void func_802A7094(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A7094: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A7098: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A709C: jal         0x802A6DC4
    // 0x802A70A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_802A6DC4(rdram, ctx);
        goto after_0;
    // 0x802A70A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x802A70A4: sll         $a0, $v0, 6
    ctx->r4 = S32(ctx->r2 << 6);
    // 0x802A70A8: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x802A70AC: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x802A70B0: addiu       $a0, $a0, -0x7D
    ctx->r4 = ADD32(ctx->r4, -0X7D);
    // 0x802A70B4: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x802A70B8: bne         $a0, $at, L_802A70C8
    if (ctx->r4 != ctx->r1) {
        // 0x802A70BC: or          $v1, $a0, $zero
        ctx->r3 = ctx->r4 | 0;
            goto L_802A70C8;
    }
    // 0x802A70BC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x802A70C0: b           L_802A70D8
    // 0x802A70C4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_802A70D8;
    // 0x802A70C4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_802A70C8:
    // 0x802A70C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802A70CC: bne         $a0, $at, L_802A70DC
    if (ctx->r4 != ctx->r1) {
        // 0x802A70D0: lhu         $a0, 0x1A($sp)
        ctx->r4 = MEM_HU(ctx->r29, 0X1A);
            goto L_802A70DC;
    }
    // 0x802A70D0: lhu         $a0, 0x1A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1A);
    // 0x802A70D4: addiu       $v1, $zero, 0x7F
    ctx->r3 = ADD32(0, 0X7F);
L_802A70D8:
    // 0x802A70D8: lhu         $a0, 0x1A($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1A);
L_802A70DC:
    // 0x802A70DC: jal         0x80015BEC
    // 0x802A70E0: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
    func_80015BEC(rdram, ctx);
        goto after_1;
    // 0x802A70E0: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
    after_1:
    // 0x802A70E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A70E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A70EC: jr          $ra
    // 0x802A70F0: nop

    return;
    // 0x802A70F0: nop

;}
RECOMP_FUNC void func_802A70F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A70F4: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802A70F8: lh          $t6, 0x4FD0($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4FD0);
    // 0x802A70FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A7100: sra         $t7, $t6, 1
    ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
    // 0x802A7104: slti        $at, $t7, 0x3
    ctx->r1 = SIGNED(ctx->r15) < 0X3 ? 1 : 0;
    // 0x802A7108: bne         $at, $zero, L_802A7128
    if (ctx->r1 != 0) {
        // 0x802A710C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802A7128;
    }
    // 0x802A710C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A7110: addiu       $a0, $zero, 0x230
    ctx->r4 = ADD32(0, 0X230);
    // 0x802A7114: jal         0x80015BEC
    // 0x802A7118: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80015BEC(rdram, ctx);
        goto after_0;
    // 0x802A7118: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x802A711C: addiu       $a0, $zero, 0x231
    ctx->r4 = ADD32(0, 0X231);
    // 0x802A7120: jal         0x80015BEC
    // 0x802A7124: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
    func_80015BEC(rdram, ctx);
        goto after_1;
    // 0x802A7124: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
    after_1:
L_802A7128:
    // 0x802A7128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A712C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A7130: jr          $ra
    // 0x802A7134: nop

    return;
    // 0x802A7134: nop

;}
RECOMP_FUNC void func_802A7138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A7138: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A713C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A7140: jal         0x80087D40
    // 0x802A7144: nop

    func_80087D40(rdram, ctx);
        goto after_0;
    // 0x802A7144: nop

    after_0:
    // 0x802A7148: addiu       $at, $zero, 0x190
    ctx->r1 = ADD32(0, 0X190);
    // 0x802A714C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802A7150: addiu       $t6, $zero, 0x220
    ctx->r14 = ADD32(0, 0X220);
    // 0x802A7154: mfhi        $v1
    ctx->r3 = hi;
    // 0x802A7158: slti        $at, $v1, 0x64
    ctx->r1 = SIGNED(ctx->r3) < 0X64 ? 1 : 0;
    // 0x802A715C: beq         $at, $zero, L_802A7170
    if (ctx->r1 == 0) {
        // 0x802A7160: slti        $at, $v1, 0xC8
        ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
            goto L_802A7170;
    }
    // 0x802A7160: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
    // 0x802A7164: b           L_802A71A4
    // 0x802A7168: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
        goto L_802A71A4;
    // 0x802A7168: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802A716C: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
L_802A7170:
    // 0x802A7170: beq         $at, $zero, L_802A7180
    if (ctx->r1 == 0) {
        // 0x802A7174: addiu       $t7, $zero, 0x221
        ctx->r15 = ADD32(0, 0X221);
            goto L_802A7180;
    }
    // 0x802A7174: addiu       $t7, $zero, 0x221
    ctx->r15 = ADD32(0, 0X221);
    // 0x802A7178: b           L_802A71A4
    // 0x802A717C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
        goto L_802A71A4;
    // 0x802A717C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_802A7180:
    // 0x802A7180: slti        $at, $v1, 0x12C
    ctx->r1 = SIGNED(ctx->r3) < 0X12C ? 1 : 0;
    // 0x802A7184: beq         $at, $zero, L_802A7194
    if (ctx->r1 == 0) {
        // 0x802A7188: addiu       $t8, $zero, 0x222
        ctx->r24 = ADD32(0, 0X222);
            goto L_802A7194;
    }
    // 0x802A7188: addiu       $t8, $zero, 0x222
    ctx->r24 = ADD32(0, 0X222);
    // 0x802A718C: b           L_802A71A4
    // 0x802A7190: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
        goto L_802A71A4;
    // 0x802A7190: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_802A7194:
    // 0x802A7194: slti        $at, $v1, 0x190
    ctx->r1 = SIGNED(ctx->r3) < 0X190 ? 1 : 0;
    // 0x802A7198: beq         $at, $zero, L_802A71A4
    if (ctx->r1 == 0) {
        // 0x802A719C: addiu       $t9, $zero, 0x223
        ctx->r25 = ADD32(0, 0X223);
            goto L_802A71A4;
    }
    // 0x802A719C: addiu       $t9, $zero, 0x223
    ctx->r25 = ADD32(0, 0X223);
    // 0x802A71A0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_802A71A4:
    // 0x802A71A4: lhu         $a0, 0x1E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1E);
    // 0x802A71A8: jal         0x80015B94
    // 0x802A71AC: nop

    func_80015B94(rdram, ctx);
        goto after_1;
    // 0x802A71AC: nop

    after_1:
    // 0x802A71B0: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802A71B4: jal         0x802A7054
    // 0x802A71B8: nop

    func_802A7054(rdram, ctx);
        goto after_2;
    // 0x802A71B8: nop

    after_2:
    // 0x802A71BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A71C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802A71C4: jr          $ra
    // 0x802A71C8: nop

    return;
    // 0x802A71C8: nop

;}
RECOMP_FUNC void func_802A71CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A71CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A71D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A71D4: jal         0x80087D40
    // 0x802A71D8: nop

    func_80087D40(rdram, ctx);
        goto after_0;
    // 0x802A71D8: nop

    after_0:
    // 0x802A71DC: addiu       $at, $zero, 0x190
    ctx->r1 = ADD32(0, 0X190);
    // 0x802A71E0: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802A71E4: addiu       $t6, $zero, 0x220
    ctx->r14 = ADD32(0, 0X220);
    // 0x802A71E8: mfhi        $v1
    ctx->r3 = hi;
    // 0x802A71EC: slti        $at, $v1, 0x64
    ctx->r1 = SIGNED(ctx->r3) < 0X64 ? 1 : 0;
    // 0x802A71F0: beq         $at, $zero, L_802A7204
    if (ctx->r1 == 0) {
        // 0x802A71F4: slti        $at, $v1, 0xC8
        ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
            goto L_802A7204;
    }
    // 0x802A71F4: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
    // 0x802A71F8: b           L_802A7238
    // 0x802A71FC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
        goto L_802A7238;
    // 0x802A71FC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802A7200: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
L_802A7204:
    // 0x802A7204: beq         $at, $zero, L_802A7214
    if (ctx->r1 == 0) {
        // 0x802A7208: addiu       $t7, $zero, 0x221
        ctx->r15 = ADD32(0, 0X221);
            goto L_802A7214;
    }
    // 0x802A7208: addiu       $t7, $zero, 0x221
    ctx->r15 = ADD32(0, 0X221);
    // 0x802A720C: b           L_802A7238
    // 0x802A7210: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
        goto L_802A7238;
    // 0x802A7210: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_802A7214:
    // 0x802A7214: slti        $at, $v1, 0x12C
    ctx->r1 = SIGNED(ctx->r3) < 0X12C ? 1 : 0;
    // 0x802A7218: beq         $at, $zero, L_802A7228
    if (ctx->r1 == 0) {
        // 0x802A721C: addiu       $t8, $zero, 0x222
        ctx->r24 = ADD32(0, 0X222);
            goto L_802A7228;
    }
    // 0x802A721C: addiu       $t8, $zero, 0x222
    ctx->r24 = ADD32(0, 0X222);
    // 0x802A7220: b           L_802A7238
    // 0x802A7224: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
        goto L_802A7238;
    // 0x802A7224: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_802A7228:
    // 0x802A7228: slti        $at, $v1, 0x190
    ctx->r1 = SIGNED(ctx->r3) < 0X190 ? 1 : 0;
    // 0x802A722C: beq         $at, $zero, L_802A7238
    if (ctx->r1 == 0) {
        // 0x802A7230: addiu       $t9, $zero, 0x223
        ctx->r25 = ADD32(0, 0X223);
            goto L_802A7238;
    }
    // 0x802A7230: addiu       $t9, $zero, 0x223
    ctx->r25 = ADD32(0, 0X223);
    // 0x802A7234: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_802A7238:
    // 0x802A7238: lhu         $a0, 0x1E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1E);
    // 0x802A723C: jal         0x80015B94
    // 0x802A7240: nop

    func_80015B94(rdram, ctx);
        goto after_1;
    // 0x802A7240: nop

    after_1:
    // 0x802A7244: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802A7248: jal         0x802A7094
    // 0x802A724C: nop

    func_802A7094(rdram, ctx);
        goto after_2;
    // 0x802A724C: nop

    after_2:
    // 0x802A7250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A7254: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802A7258: jr          $ra
    // 0x802A725C: nop

    return;
    // 0x802A725C: nop

;}
RECOMP_FUNC void func_802A7260(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A7260: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A7264: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A7268: jal         0x80087D40
    // 0x802A726C: nop

    func_80087D40(rdram, ctx);
        goto after_0;
    // 0x802A726C: nop

    after_0:
    // 0x802A7270: addiu       $at, $zero, 0x320
    ctx->r1 = ADD32(0, 0X320);
    // 0x802A7274: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802A7278: addiu       $t6, $zero, 0x214
    ctx->r14 = ADD32(0, 0X214);
    // 0x802A727C: mfhi        $v1
    ctx->r3 = hi;
    // 0x802A7280: slti        $at, $v1, 0x64
    ctx->r1 = SIGNED(ctx->r3) < 0X64 ? 1 : 0;
    // 0x802A7284: beq         $at, $zero, L_802A7298
    if (ctx->r1 == 0) {
        // 0x802A7288: slti        $at, $v1, 0xC8
        ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
            goto L_802A7298;
    }
    // 0x802A7288: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
    // 0x802A728C: b           L_802A731C
    // 0x802A7290: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
        goto L_802A731C;
    // 0x802A7290: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802A7294: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
L_802A7298:
    // 0x802A7298: beq         $at, $zero, L_802A72A8
    if (ctx->r1 == 0) {
        // 0x802A729C: addiu       $t7, $zero, 0x215
        ctx->r15 = ADD32(0, 0X215);
            goto L_802A72A8;
    }
    // 0x802A729C: addiu       $t7, $zero, 0x215
    ctx->r15 = ADD32(0, 0X215);
    // 0x802A72A0: b           L_802A731C
    // 0x802A72A4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
        goto L_802A731C;
    // 0x802A72A4: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_802A72A8:
    // 0x802A72A8: slti        $at, $v1, 0x12C
    ctx->r1 = SIGNED(ctx->r3) < 0X12C ? 1 : 0;
    // 0x802A72AC: beq         $at, $zero, L_802A72BC
    if (ctx->r1 == 0) {
        // 0x802A72B0: addiu       $t8, $zero, 0x216
        ctx->r24 = ADD32(0, 0X216);
            goto L_802A72BC;
    }
    // 0x802A72B0: addiu       $t8, $zero, 0x216
    ctx->r24 = ADD32(0, 0X216);
    // 0x802A72B4: b           L_802A731C
    // 0x802A72B8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
        goto L_802A731C;
    // 0x802A72B8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_802A72BC:
    // 0x802A72BC: slti        $at, $v1, 0x190
    ctx->r1 = SIGNED(ctx->r3) < 0X190 ? 1 : 0;
    // 0x802A72C0: beq         $at, $zero, L_802A72D0
    if (ctx->r1 == 0) {
        // 0x802A72C4: addiu       $t9, $zero, 0x217
        ctx->r25 = ADD32(0, 0X217);
            goto L_802A72D0;
    }
    // 0x802A72C4: addiu       $t9, $zero, 0x217
    ctx->r25 = ADD32(0, 0X217);
    // 0x802A72C8: b           L_802A731C
    // 0x802A72CC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_802A731C;
    // 0x802A72CC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_802A72D0:
    // 0x802A72D0: slti        $at, $v1, 0x1F4
    ctx->r1 = SIGNED(ctx->r3) < 0X1F4 ? 1 : 0;
    // 0x802A72D4: beq         $at, $zero, L_802A72E4
    if (ctx->r1 == 0) {
        // 0x802A72D8: addiu       $t0, $zero, 0x21C
        ctx->r8 = ADD32(0, 0X21C);
            goto L_802A72E4;
    }
    // 0x802A72D8: addiu       $t0, $zero, 0x21C
    ctx->r8 = ADD32(0, 0X21C);
    // 0x802A72DC: b           L_802A731C
    // 0x802A72E0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
        goto L_802A731C;
    // 0x802A72E0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
L_802A72E4:
    // 0x802A72E4: slti        $at, $v1, 0x258
    ctx->r1 = SIGNED(ctx->r3) < 0X258 ? 1 : 0;
    // 0x802A72E8: beq         $at, $zero, L_802A72F8
    if (ctx->r1 == 0) {
        // 0x802A72EC: addiu       $t1, $zero, 0x21D
        ctx->r9 = ADD32(0, 0X21D);
            goto L_802A72F8;
    }
    // 0x802A72EC: addiu       $t1, $zero, 0x21D
    ctx->r9 = ADD32(0, 0X21D);
    // 0x802A72F0: b           L_802A731C
    // 0x802A72F4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
        goto L_802A731C;
    // 0x802A72F4: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_802A72F8:
    // 0x802A72F8: slti        $at, $v1, 0x2BC
    ctx->r1 = SIGNED(ctx->r3) < 0X2BC ? 1 : 0;
    // 0x802A72FC: beq         $at, $zero, L_802A730C
    if (ctx->r1 == 0) {
        // 0x802A7300: addiu       $t2, $zero, 0x21E
        ctx->r10 = ADD32(0, 0X21E);
            goto L_802A730C;
    }
    // 0x802A7300: addiu       $t2, $zero, 0x21E
    ctx->r10 = ADD32(0, 0X21E);
    // 0x802A7304: b           L_802A731C
    // 0x802A7308: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
        goto L_802A731C;
    // 0x802A7308: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
L_802A730C:
    // 0x802A730C: slti        $at, $v1, 0x320
    ctx->r1 = SIGNED(ctx->r3) < 0X320 ? 1 : 0;
    // 0x802A7310: beq         $at, $zero, L_802A731C
    if (ctx->r1 == 0) {
        // 0x802A7314: addiu       $t3, $zero, 0x21F
        ctx->r11 = ADD32(0, 0X21F);
            goto L_802A731C;
    }
    // 0x802A7314: addiu       $t3, $zero, 0x21F
    ctx->r11 = ADD32(0, 0X21F);
    // 0x802A7318: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
L_802A731C:
    // 0x802A731C: lhu         $a0, 0x1E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1E);
    // 0x802A7320: jal         0x80015B94
    // 0x802A7324: nop

    func_80015B94(rdram, ctx);
        goto after_1;
    // 0x802A7324: nop

    after_1:
    // 0x802A7328: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802A732C: jal         0x802A7054
    // 0x802A7330: nop

    func_802A7054(rdram, ctx);
        goto after_2;
    // 0x802A7330: nop

    after_2:
    // 0x802A7334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A7338: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802A733C: jr          $ra
    // 0x802A7340: nop

    return;
    // 0x802A7340: nop

;}
RECOMP_FUNC void func_802A7344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A7344: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A7348: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A734C: jal         0x80087D40
    // 0x802A7350: nop

    func_80087D40(rdram, ctx);
        goto after_0;
    // 0x802A7350: nop

    after_0:
    // 0x802A7354: addiu       $at, $zero, 0x320
    ctx->r1 = ADD32(0, 0X320);
    // 0x802A7358: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802A735C: addiu       $t6, $zero, 0x214
    ctx->r14 = ADD32(0, 0X214);
    // 0x802A7360: mfhi        $v1
    ctx->r3 = hi;
    // 0x802A7364: slti        $at, $v1, 0x64
    ctx->r1 = SIGNED(ctx->r3) < 0X64 ? 1 : 0;
    // 0x802A7368: beq         $at, $zero, L_802A737C
    if (ctx->r1 == 0) {
        // 0x802A736C: slti        $at, $v1, 0xC8
        ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
            goto L_802A737C;
    }
    // 0x802A736C: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
    // 0x802A7370: b           L_802A7400
    // 0x802A7374: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
        goto L_802A7400;
    // 0x802A7374: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802A7378: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
L_802A737C:
    // 0x802A737C: beq         $at, $zero, L_802A738C
    if (ctx->r1 == 0) {
        // 0x802A7380: addiu       $t7, $zero, 0x215
        ctx->r15 = ADD32(0, 0X215);
            goto L_802A738C;
    }
    // 0x802A7380: addiu       $t7, $zero, 0x215
    ctx->r15 = ADD32(0, 0X215);
    // 0x802A7384: b           L_802A7400
    // 0x802A7388: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
        goto L_802A7400;
    // 0x802A7388: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_802A738C:
    // 0x802A738C: slti        $at, $v1, 0x12C
    ctx->r1 = SIGNED(ctx->r3) < 0X12C ? 1 : 0;
    // 0x802A7390: beq         $at, $zero, L_802A73A0
    if (ctx->r1 == 0) {
        // 0x802A7394: addiu       $t8, $zero, 0x216
        ctx->r24 = ADD32(0, 0X216);
            goto L_802A73A0;
    }
    // 0x802A7394: addiu       $t8, $zero, 0x216
    ctx->r24 = ADD32(0, 0X216);
    // 0x802A7398: b           L_802A7400
    // 0x802A739C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
        goto L_802A7400;
    // 0x802A739C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_802A73A0:
    // 0x802A73A0: slti        $at, $v1, 0x190
    ctx->r1 = SIGNED(ctx->r3) < 0X190 ? 1 : 0;
    // 0x802A73A4: beq         $at, $zero, L_802A73B4
    if (ctx->r1 == 0) {
        // 0x802A73A8: addiu       $t9, $zero, 0x217
        ctx->r25 = ADD32(0, 0X217);
            goto L_802A73B4;
    }
    // 0x802A73A8: addiu       $t9, $zero, 0x217
    ctx->r25 = ADD32(0, 0X217);
    // 0x802A73AC: b           L_802A7400
    // 0x802A73B0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_802A7400;
    // 0x802A73B0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_802A73B4:
    // 0x802A73B4: slti        $at, $v1, 0x1F4
    ctx->r1 = SIGNED(ctx->r3) < 0X1F4 ? 1 : 0;
    // 0x802A73B8: beq         $at, $zero, L_802A73C8
    if (ctx->r1 == 0) {
        // 0x802A73BC: addiu       $t0, $zero, 0x21C
        ctx->r8 = ADD32(0, 0X21C);
            goto L_802A73C8;
    }
    // 0x802A73BC: addiu       $t0, $zero, 0x21C
    ctx->r8 = ADD32(0, 0X21C);
    // 0x802A73C0: b           L_802A7400
    // 0x802A73C4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
        goto L_802A7400;
    // 0x802A73C4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
L_802A73C8:
    // 0x802A73C8: slti        $at, $v1, 0x258
    ctx->r1 = SIGNED(ctx->r3) < 0X258 ? 1 : 0;
    // 0x802A73CC: beq         $at, $zero, L_802A73DC
    if (ctx->r1 == 0) {
        // 0x802A73D0: addiu       $t1, $zero, 0x21D
        ctx->r9 = ADD32(0, 0X21D);
            goto L_802A73DC;
    }
    // 0x802A73D0: addiu       $t1, $zero, 0x21D
    ctx->r9 = ADD32(0, 0X21D);
    // 0x802A73D4: b           L_802A7400
    // 0x802A73D8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
        goto L_802A7400;
    // 0x802A73D8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_802A73DC:
    // 0x802A73DC: slti        $at, $v1, 0x2BC
    ctx->r1 = SIGNED(ctx->r3) < 0X2BC ? 1 : 0;
    // 0x802A73E0: beq         $at, $zero, L_802A73F0
    if (ctx->r1 == 0) {
        // 0x802A73E4: addiu       $t2, $zero, 0x21E
        ctx->r10 = ADD32(0, 0X21E);
            goto L_802A73F0;
    }
    // 0x802A73E4: addiu       $t2, $zero, 0x21E
    ctx->r10 = ADD32(0, 0X21E);
    // 0x802A73E8: b           L_802A7400
    // 0x802A73EC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
        goto L_802A7400;
    // 0x802A73EC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
L_802A73F0:
    // 0x802A73F0: slti        $at, $v1, 0x320
    ctx->r1 = SIGNED(ctx->r3) < 0X320 ? 1 : 0;
    // 0x802A73F4: beq         $at, $zero, L_802A7400
    if (ctx->r1 == 0) {
        // 0x802A73F8: addiu       $t3, $zero, 0x21F
        ctx->r11 = ADD32(0, 0X21F);
            goto L_802A7400;
    }
    // 0x802A73F8: addiu       $t3, $zero, 0x21F
    ctx->r11 = ADD32(0, 0X21F);
    // 0x802A73FC: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
L_802A7400:
    // 0x802A7400: lhu         $a0, 0x1E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1E);
    // 0x802A7404: jal         0x80015B94
    // 0x802A7408: nop

    func_80015B94(rdram, ctx);
        goto after_1;
    // 0x802A7408: nop

    after_1:
    // 0x802A740C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802A7410: jal         0x802A7094
    // 0x802A7414: nop

    func_802A7094(rdram, ctx);
        goto after_2;
    // 0x802A7414: nop

    after_2:
    // 0x802A7418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A741C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802A7420: jr          $ra
    // 0x802A7424: nop

    return;
    // 0x802A7424: nop

;}
RECOMP_FUNC void func_802A7428(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A7428: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A742C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A7430: jal         0x80087D40
    // 0x802A7434: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80087D40(rdram, ctx);
        goto after_0;
    // 0x802A7434: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x802A7438: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802A743C: nop

    // 0x802A7440: bltz        $a0, L_802A744C
    if (SIGNED(ctx->r4) < 0) {
        // 0x802A7444: slti        $at, $a0, 0x18
        ctx->r1 = SIGNED(ctx->r4) < 0X18 ? 1 : 0;
            goto L_802A744C;
    }
    // 0x802A7444: slti        $at, $a0, 0x18
    ctx->r1 = SIGNED(ctx->r4) < 0X18 ? 1 : 0;
    // 0x802A7448: bne         $at, $zero, L_802A7464
    if (ctx->r1 != 0) {
        // 0x802A744C: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_802A7464;
    }
L_802A744C:
    // 0x802A744C: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x802A7450: beq         $a0, $at, L_802A7464
    if (ctx->r4 == ctx->r1) {
        // 0x802A7454: addiu       $at, $zero, 0x25
        ctx->r1 = ADD32(0, 0X25);
            goto L_802A7464;
    }
    // 0x802A7454: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x802A7458: beq         $a0, $at, L_802A7464
    if (ctx->r4 == ctx->r1) {
        // 0x802A745C: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_802A7464;
    }
    // 0x802A745C: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x802A7460: bne         $a0, $at, L_802A7514
    if (ctx->r4 != ctx->r1) {
        // 0x802A7464: addiu       $at, $zero, 0x320
        ctx->r1 = ADD32(0, 0X320);
            goto L_802A7514;
    }
L_802A7464:
    // 0x802A7464: addiu       $at, $zero, 0x320
    ctx->r1 = ADD32(0, 0X320);
    // 0x802A7468: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802A746C: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x802A7470: mfhi        $v1
    ctx->r3 = hi;
    // 0x802A7474: slti        $at, $v1, 0x64
    ctx->r1 = SIGNED(ctx->r3) < 0X64 ? 1 : 0;
    // 0x802A7478: beq         $at, $zero, L_802A748C
    if (ctx->r1 == 0) {
        // 0x802A747C: slti        $at, $v1, 0xC8
        ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
            goto L_802A748C;
    }
    // 0x802A747C: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
    // 0x802A7480: b           L_802A7750
    // 0x802A7484: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
        goto L_802A7750;
    // 0x802A7484: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x802A7488: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
L_802A748C:
    // 0x802A748C: beq         $at, $zero, L_802A749C
    if (ctx->r1 == 0) {
        // 0x802A7490: addiu       $t7, $zero, 0x101
        ctx->r15 = ADD32(0, 0X101);
            goto L_802A749C;
    }
    // 0x802A7490: addiu       $t7, $zero, 0x101
    ctx->r15 = ADD32(0, 0X101);
    // 0x802A7494: b           L_802A7750
    // 0x802A7498: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
        goto L_802A7750;
    // 0x802A7498: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_802A749C:
    // 0x802A749C: slti        $at, $v1, 0x12C
    ctx->r1 = SIGNED(ctx->r3) < 0X12C ? 1 : 0;
    // 0x802A74A0: beq         $at, $zero, L_802A74B0
    if (ctx->r1 == 0) {
        // 0x802A74A4: addiu       $t8, $zero, 0x102
        ctx->r24 = ADD32(0, 0X102);
            goto L_802A74B0;
    }
    // 0x802A74A4: addiu       $t8, $zero, 0x102
    ctx->r24 = ADD32(0, 0X102);
    // 0x802A74A8: b           L_802A7750
    // 0x802A74AC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
        goto L_802A7750;
    // 0x802A74AC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_802A74B0:
    // 0x802A74B0: slti        $at, $v1, 0x190
    ctx->r1 = SIGNED(ctx->r3) < 0X190 ? 1 : 0;
    // 0x802A74B4: beq         $at, $zero, L_802A74C4
    if (ctx->r1 == 0) {
        // 0x802A74B8: addiu       $t9, $zero, 0x103
        ctx->r25 = ADD32(0, 0X103);
            goto L_802A74C4;
    }
    // 0x802A74B8: addiu       $t9, $zero, 0x103
    ctx->r25 = ADD32(0, 0X103);
    // 0x802A74BC: b           L_802A7750
    // 0x802A74C0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_802A7750;
    // 0x802A74C0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_802A74C4:
    // 0x802A74C4: slti        $at, $v1, 0x1F4
    ctx->r1 = SIGNED(ctx->r3) < 0X1F4 ? 1 : 0;
    // 0x802A74C8: beq         $at, $zero, L_802A74D8
    if (ctx->r1 == 0) {
        // 0x802A74CC: addiu       $t0, $zero, 0x104
        ctx->r8 = ADD32(0, 0X104);
            goto L_802A74D8;
    }
    // 0x802A74CC: addiu       $t0, $zero, 0x104
    ctx->r8 = ADD32(0, 0X104);
    // 0x802A74D0: b           L_802A7750
    // 0x802A74D4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
        goto L_802A7750;
    // 0x802A74D4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
L_802A74D8:
    // 0x802A74D8: slti        $at, $v1, 0x258
    ctx->r1 = SIGNED(ctx->r3) < 0X258 ? 1 : 0;
    // 0x802A74DC: beq         $at, $zero, L_802A74EC
    if (ctx->r1 == 0) {
        // 0x802A74E0: addiu       $t1, $zero, 0x105
        ctx->r9 = ADD32(0, 0X105);
            goto L_802A74EC;
    }
    // 0x802A74E0: addiu       $t1, $zero, 0x105
    ctx->r9 = ADD32(0, 0X105);
    // 0x802A74E4: b           L_802A7750
    // 0x802A74E8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
        goto L_802A7750;
    // 0x802A74E8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_802A74EC:
    // 0x802A74EC: slti        $at, $v1, 0x2BC
    ctx->r1 = SIGNED(ctx->r3) < 0X2BC ? 1 : 0;
    // 0x802A74F0: beq         $at, $zero, L_802A7500
    if (ctx->r1 == 0) {
        // 0x802A74F4: addiu       $t2, $zero, 0x106
        ctx->r10 = ADD32(0, 0X106);
            goto L_802A7500;
    }
    // 0x802A74F4: addiu       $t2, $zero, 0x106
    ctx->r10 = ADD32(0, 0X106);
    // 0x802A74F8: b           L_802A7750
    // 0x802A74FC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
        goto L_802A7750;
    // 0x802A74FC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
L_802A7500:
    // 0x802A7500: slti        $at, $v1, 0x320
    ctx->r1 = SIGNED(ctx->r3) < 0X320 ? 1 : 0;
    // 0x802A7504: beq         $at, $zero, L_802A7750
    if (ctx->r1 == 0) {
        // 0x802A7508: addiu       $t3, $zero, 0x107
        ctx->r11 = ADD32(0, 0X107);
            goto L_802A7750;
    }
    // 0x802A7508: addiu       $t3, $zero, 0x107
    ctx->r11 = ADD32(0, 0X107);
    // 0x802A750C: b           L_802A7750
    // 0x802A7510: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
        goto L_802A7750;
    // 0x802A7510: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
L_802A7514:
    // 0x802A7514: slti        $at, $a0, 0x1E
    ctx->r1 = SIGNED(ctx->r4) < 0X1E ? 1 : 0;
    // 0x802A7518: bne         $at, $zero, L_802A7524
    if (ctx->r1 != 0) {
        // 0x802A751C: slti        $at, $a0, 0x23
        ctx->r1 = SIGNED(ctx->r4) < 0X23 ? 1 : 0;
            goto L_802A7524;
    }
    // 0x802A751C: slti        $at, $a0, 0x23
    ctx->r1 = SIGNED(ctx->r4) < 0X23 ? 1 : 0;
    // 0x802A7520: bne         $at, $zero, L_802A752C
    if (ctx->r1 != 0) {
        // 0x802A7524: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_802A752C;
    }
L_802A7524:
    // 0x802A7524: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x802A7528: bne         $a0, $at, L_802A75DC
    if (ctx->r4 != ctx->r1) {
        // 0x802A752C: addiu       $at, $zero, 0x320
        ctx->r1 = ADD32(0, 0X320);
            goto L_802A75DC;
    }
L_802A752C:
    // 0x802A752C: addiu       $at, $zero, 0x320
    ctx->r1 = ADD32(0, 0X320);
    // 0x802A7530: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802A7534: addiu       $t4, $zero, 0x108
    ctx->r12 = ADD32(0, 0X108);
    // 0x802A7538: mfhi        $v1
    ctx->r3 = hi;
    // 0x802A753C: slti        $at, $v1, 0x64
    ctx->r1 = SIGNED(ctx->r3) < 0X64 ? 1 : 0;
    // 0x802A7540: beq         $at, $zero, L_802A7554
    if (ctx->r1 == 0) {
        // 0x802A7544: slti        $at, $v1, 0xC8
        ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
            goto L_802A7554;
    }
    // 0x802A7544: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
    // 0x802A7548: b           L_802A7750
    // 0x802A754C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
        goto L_802A7750;
    // 0x802A754C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x802A7550: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
L_802A7554:
    // 0x802A7554: beq         $at, $zero, L_802A7564
    if (ctx->r1 == 0) {
        // 0x802A7558: addiu       $t5, $zero, 0x109
        ctx->r13 = ADD32(0, 0X109);
            goto L_802A7564;
    }
    // 0x802A7558: addiu       $t5, $zero, 0x109
    ctx->r13 = ADD32(0, 0X109);
    // 0x802A755C: b           L_802A7750
    // 0x802A7560: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
        goto L_802A7750;
    // 0x802A7560: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
L_802A7564:
    // 0x802A7564: slti        $at, $v1, 0x12C
    ctx->r1 = SIGNED(ctx->r3) < 0X12C ? 1 : 0;
    // 0x802A7568: beq         $at, $zero, L_802A7578
    if (ctx->r1 == 0) {
        // 0x802A756C: addiu       $t6, $zero, 0x10A
        ctx->r14 = ADD32(0, 0X10A);
            goto L_802A7578;
    }
    // 0x802A756C: addiu       $t6, $zero, 0x10A
    ctx->r14 = ADD32(0, 0X10A);
    // 0x802A7570: b           L_802A7750
    // 0x802A7574: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
        goto L_802A7750;
    // 0x802A7574: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_802A7578:
    // 0x802A7578: slti        $at, $v1, 0x190
    ctx->r1 = SIGNED(ctx->r3) < 0X190 ? 1 : 0;
    // 0x802A757C: beq         $at, $zero, L_802A758C
    if (ctx->r1 == 0) {
        // 0x802A7580: addiu       $t7, $zero, 0x10B
        ctx->r15 = ADD32(0, 0X10B);
            goto L_802A758C;
    }
    // 0x802A7580: addiu       $t7, $zero, 0x10B
    ctx->r15 = ADD32(0, 0X10B);
    // 0x802A7584: b           L_802A7750
    // 0x802A7588: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
        goto L_802A7750;
    // 0x802A7588: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_802A758C:
    // 0x802A758C: slti        $at, $v1, 0x1F4
    ctx->r1 = SIGNED(ctx->r3) < 0X1F4 ? 1 : 0;
    // 0x802A7590: beq         $at, $zero, L_802A75A0
    if (ctx->r1 == 0) {
        // 0x802A7594: addiu       $t8, $zero, 0x10C
        ctx->r24 = ADD32(0, 0X10C);
            goto L_802A75A0;
    }
    // 0x802A7594: addiu       $t8, $zero, 0x10C
    ctx->r24 = ADD32(0, 0X10C);
    // 0x802A7598: b           L_802A7750
    // 0x802A759C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
        goto L_802A7750;
    // 0x802A759C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_802A75A0:
    // 0x802A75A0: slti        $at, $v1, 0x258
    ctx->r1 = SIGNED(ctx->r3) < 0X258 ? 1 : 0;
    // 0x802A75A4: beq         $at, $zero, L_802A75B4
    if (ctx->r1 == 0) {
        // 0x802A75A8: addiu       $t9, $zero, 0x10D
        ctx->r25 = ADD32(0, 0X10D);
            goto L_802A75B4;
    }
    // 0x802A75A8: addiu       $t9, $zero, 0x10D
    ctx->r25 = ADD32(0, 0X10D);
    // 0x802A75AC: b           L_802A7750
    // 0x802A75B0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_802A7750;
    // 0x802A75B0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_802A75B4:
    // 0x802A75B4: slti        $at, $v1, 0x2BC
    ctx->r1 = SIGNED(ctx->r3) < 0X2BC ? 1 : 0;
    // 0x802A75B8: beq         $at, $zero, L_802A75C8
    if (ctx->r1 == 0) {
        // 0x802A75BC: addiu       $t0, $zero, 0x10E
        ctx->r8 = ADD32(0, 0X10E);
            goto L_802A75C8;
    }
    // 0x802A75BC: addiu       $t0, $zero, 0x10E
    ctx->r8 = ADD32(0, 0X10E);
    // 0x802A75C0: b           L_802A7750
    // 0x802A75C4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
        goto L_802A7750;
    // 0x802A75C4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
L_802A75C8:
    // 0x802A75C8: slti        $at, $v1, 0x320
    ctx->r1 = SIGNED(ctx->r3) < 0X320 ? 1 : 0;
    // 0x802A75CC: beq         $at, $zero, L_802A7750
    if (ctx->r1 == 0) {
        // 0x802A75D0: addiu       $t1, $zero, 0x10F
        ctx->r9 = ADD32(0, 0X10F);
            goto L_802A7750;
    }
    // 0x802A75D0: addiu       $t1, $zero, 0x10F
    ctx->r9 = ADD32(0, 0X10F);
    // 0x802A75D4: b           L_802A7750
    // 0x802A75D8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
        goto L_802A7750;
    // 0x802A75D8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_802A75DC:
    // 0x802A75DC: slti        $at, $a0, 0x1B
    ctx->r1 = SIGNED(ctx->r4) < 0X1B ? 1 : 0;
    // 0x802A75E0: bne         $at, $zero, L_802A75EC
    if (ctx->r1 != 0) {
        // 0x802A75E4: slti        $at, $a0, 0x1E
        ctx->r1 = SIGNED(ctx->r4) < 0X1E ? 1 : 0;
            goto L_802A75EC;
    }
    // 0x802A75E4: slti        $at, $a0, 0x1E
    ctx->r1 = SIGNED(ctx->r4) < 0X1E ? 1 : 0;
    // 0x802A75E8: bne         $at, $zero, L_802A75F4
    if (ctx->r1 != 0) {
        // 0x802A75EC: addiu       $at, $zero, 0x27
        ctx->r1 = ADD32(0, 0X27);
            goto L_802A75F4;
    }
L_802A75EC:
    // 0x802A75EC: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x802A75F0: bne         $a0, $at, L_802A76A4
    if (ctx->r4 != ctx->r1) {
        // 0x802A75F4: addiu       $at, $zero, 0x320
        ctx->r1 = ADD32(0, 0X320);
            goto L_802A76A4;
    }
L_802A75F4:
    // 0x802A75F4: addiu       $at, $zero, 0x320
    ctx->r1 = ADD32(0, 0X320);
    // 0x802A75F8: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802A75FC: addiu       $t2, $zero, 0x110
    ctx->r10 = ADD32(0, 0X110);
    // 0x802A7600: mfhi        $v1
    ctx->r3 = hi;
    // 0x802A7604: slti        $at, $v1, 0x64
    ctx->r1 = SIGNED(ctx->r3) < 0X64 ? 1 : 0;
    // 0x802A7608: beq         $at, $zero, L_802A761C
    if (ctx->r1 == 0) {
        // 0x802A760C: slti        $at, $v1, 0xC8
        ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
            goto L_802A761C;
    }
    // 0x802A760C: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
    // 0x802A7610: b           L_802A7750
    // 0x802A7614: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
        goto L_802A7750;
    // 0x802A7614: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x802A7618: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
L_802A761C:
    // 0x802A761C: beq         $at, $zero, L_802A762C
    if (ctx->r1 == 0) {
        // 0x802A7620: addiu       $t3, $zero, 0x111
        ctx->r11 = ADD32(0, 0X111);
            goto L_802A762C;
    }
    // 0x802A7620: addiu       $t3, $zero, 0x111
    ctx->r11 = ADD32(0, 0X111);
    // 0x802A7624: b           L_802A7750
    // 0x802A7628: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
        goto L_802A7750;
    // 0x802A7628: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
L_802A762C:
    // 0x802A762C: slti        $at, $v1, 0x12C
    ctx->r1 = SIGNED(ctx->r3) < 0X12C ? 1 : 0;
    // 0x802A7630: beq         $at, $zero, L_802A7640
    if (ctx->r1 == 0) {
        // 0x802A7634: addiu       $t4, $zero, 0x112
        ctx->r12 = ADD32(0, 0X112);
            goto L_802A7640;
    }
    // 0x802A7634: addiu       $t4, $zero, 0x112
    ctx->r12 = ADD32(0, 0X112);
    // 0x802A7638: b           L_802A7750
    // 0x802A763C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
        goto L_802A7750;
    // 0x802A763C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
L_802A7640:
    // 0x802A7640: slti        $at, $v1, 0x190
    ctx->r1 = SIGNED(ctx->r3) < 0X190 ? 1 : 0;
    // 0x802A7644: beq         $at, $zero, L_802A7654
    if (ctx->r1 == 0) {
        // 0x802A7648: addiu       $t5, $zero, 0x113
        ctx->r13 = ADD32(0, 0X113);
            goto L_802A7654;
    }
    // 0x802A7648: addiu       $t5, $zero, 0x113
    ctx->r13 = ADD32(0, 0X113);
    // 0x802A764C: b           L_802A7750
    // 0x802A7650: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
        goto L_802A7750;
    // 0x802A7650: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
L_802A7654:
    // 0x802A7654: slti        $at, $v1, 0x1F4
    ctx->r1 = SIGNED(ctx->r3) < 0X1F4 ? 1 : 0;
    // 0x802A7658: beq         $at, $zero, L_802A7668
    if (ctx->r1 == 0) {
        // 0x802A765C: addiu       $t6, $zero, 0x114
        ctx->r14 = ADD32(0, 0X114);
            goto L_802A7668;
    }
    // 0x802A765C: addiu       $t6, $zero, 0x114
    ctx->r14 = ADD32(0, 0X114);
    // 0x802A7660: b           L_802A7750
    // 0x802A7664: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
        goto L_802A7750;
    // 0x802A7664: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_802A7668:
    // 0x802A7668: slti        $at, $v1, 0x258
    ctx->r1 = SIGNED(ctx->r3) < 0X258 ? 1 : 0;
    // 0x802A766C: beq         $at, $zero, L_802A767C
    if (ctx->r1 == 0) {
        // 0x802A7670: addiu       $t7, $zero, 0x115
        ctx->r15 = ADD32(0, 0X115);
            goto L_802A767C;
    }
    // 0x802A7670: addiu       $t7, $zero, 0x115
    ctx->r15 = ADD32(0, 0X115);
    // 0x802A7674: b           L_802A7750
    // 0x802A7678: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
        goto L_802A7750;
    // 0x802A7678: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_802A767C:
    // 0x802A767C: slti        $at, $v1, 0x2BC
    ctx->r1 = SIGNED(ctx->r3) < 0X2BC ? 1 : 0;
    // 0x802A7680: beq         $at, $zero, L_802A7690
    if (ctx->r1 == 0) {
        // 0x802A7684: addiu       $t8, $zero, 0x116
        ctx->r24 = ADD32(0, 0X116);
            goto L_802A7690;
    }
    // 0x802A7684: addiu       $t8, $zero, 0x116
    ctx->r24 = ADD32(0, 0X116);
    // 0x802A7688: b           L_802A7750
    // 0x802A768C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
        goto L_802A7750;
    // 0x802A768C: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_802A7690:
    // 0x802A7690: slti        $at, $v1, 0x320
    ctx->r1 = SIGNED(ctx->r3) < 0X320 ? 1 : 0;
    // 0x802A7694: beq         $at, $zero, L_802A7750
    if (ctx->r1 == 0) {
        // 0x802A7698: addiu       $t9, $zero, 0x117
        ctx->r25 = ADD32(0, 0X117);
            goto L_802A7750;
    }
    // 0x802A7698: addiu       $t9, $zero, 0x117
    ctx->r25 = ADD32(0, 0X117);
    // 0x802A769C: b           L_802A7750
    // 0x802A76A0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
        goto L_802A7750;
    // 0x802A76A0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
L_802A76A4:
    // 0x802A76A4: addiu       $at, $zero, 0x320
    ctx->r1 = ADD32(0, 0X320);
    // 0x802A76A8: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802A76AC: addiu       $t0, $zero, 0x118
    ctx->r8 = ADD32(0, 0X118);
    // 0x802A76B0: mfhi        $v1
    ctx->r3 = hi;
    // 0x802A76B4: slti        $at, $v1, 0x64
    ctx->r1 = SIGNED(ctx->r3) < 0X64 ? 1 : 0;
    // 0x802A76B8: beq         $at, $zero, L_802A76CC
    if (ctx->r1 == 0) {
        // 0x802A76BC: slti        $at, $v1, 0xC8
        ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
            goto L_802A76CC;
    }
    // 0x802A76BC: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
    // 0x802A76C0: b           L_802A7750
    // 0x802A76C4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
        goto L_802A7750;
    // 0x802A76C4: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x802A76C8: slti        $at, $v1, 0xC8
    ctx->r1 = SIGNED(ctx->r3) < 0XC8 ? 1 : 0;
L_802A76CC:
    // 0x802A76CC: beq         $at, $zero, L_802A76DC
    if (ctx->r1 == 0) {
        // 0x802A76D0: addiu       $t1, $zero, 0x119
        ctx->r9 = ADD32(0, 0X119);
            goto L_802A76DC;
    }
    // 0x802A76D0: addiu       $t1, $zero, 0x119
    ctx->r9 = ADD32(0, 0X119);
    // 0x802A76D4: b           L_802A7750
    // 0x802A76D8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
        goto L_802A7750;
    // 0x802A76D8: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
L_802A76DC:
    // 0x802A76DC: slti        $at, $v1, 0x12C
    ctx->r1 = SIGNED(ctx->r3) < 0X12C ? 1 : 0;
    // 0x802A76E0: beq         $at, $zero, L_802A76F0
    if (ctx->r1 == 0) {
        // 0x802A76E4: addiu       $t2, $zero, 0x11A
        ctx->r10 = ADD32(0, 0X11A);
            goto L_802A76F0;
    }
    // 0x802A76E4: addiu       $t2, $zero, 0x11A
    ctx->r10 = ADD32(0, 0X11A);
    // 0x802A76E8: b           L_802A7750
    // 0x802A76EC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
        goto L_802A7750;
    // 0x802A76EC: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
L_802A76F0:
    // 0x802A76F0: slti        $at, $v1, 0x190
    ctx->r1 = SIGNED(ctx->r3) < 0X190 ? 1 : 0;
    // 0x802A76F4: beq         $at, $zero, L_802A7704
    if (ctx->r1 == 0) {
        // 0x802A76F8: addiu       $t3, $zero, 0x11B
        ctx->r11 = ADD32(0, 0X11B);
            goto L_802A7704;
    }
    // 0x802A76F8: addiu       $t3, $zero, 0x11B
    ctx->r11 = ADD32(0, 0X11B);
    // 0x802A76FC: b           L_802A7750
    // 0x802A7700: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
        goto L_802A7750;
    // 0x802A7700: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
L_802A7704:
    // 0x802A7704: slti        $at, $v1, 0x1F4
    ctx->r1 = SIGNED(ctx->r3) < 0X1F4 ? 1 : 0;
    // 0x802A7708: beq         $at, $zero, L_802A7718
    if (ctx->r1 == 0) {
        // 0x802A770C: addiu       $t4, $zero, 0x11C
        ctx->r12 = ADD32(0, 0X11C);
            goto L_802A7718;
    }
    // 0x802A770C: addiu       $t4, $zero, 0x11C
    ctx->r12 = ADD32(0, 0X11C);
    // 0x802A7710: b           L_802A7750
    // 0x802A7714: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
        goto L_802A7750;
    // 0x802A7714: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
L_802A7718:
    // 0x802A7718: slti        $at, $v1, 0x258
    ctx->r1 = SIGNED(ctx->r3) < 0X258 ? 1 : 0;
    // 0x802A771C: beq         $at, $zero, L_802A772C
    if (ctx->r1 == 0) {
        // 0x802A7720: addiu       $t5, $zero, 0x11D
        ctx->r13 = ADD32(0, 0X11D);
            goto L_802A772C;
    }
    // 0x802A7720: addiu       $t5, $zero, 0x11D
    ctx->r13 = ADD32(0, 0X11D);
    // 0x802A7724: b           L_802A7750
    // 0x802A7728: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
        goto L_802A7750;
    // 0x802A7728: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
L_802A772C:
    // 0x802A772C: slti        $at, $v1, 0x2BC
    ctx->r1 = SIGNED(ctx->r3) < 0X2BC ? 1 : 0;
    // 0x802A7730: beq         $at, $zero, L_802A7740
    if (ctx->r1 == 0) {
        // 0x802A7734: addiu       $t6, $zero, 0x11E
        ctx->r14 = ADD32(0, 0X11E);
            goto L_802A7740;
    }
    // 0x802A7734: addiu       $t6, $zero, 0x11E
    ctx->r14 = ADD32(0, 0X11E);
    // 0x802A7738: b           L_802A7750
    // 0x802A773C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
        goto L_802A7750;
    // 0x802A773C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_802A7740:
    // 0x802A7740: slti        $at, $v1, 0x320
    ctx->r1 = SIGNED(ctx->r3) < 0X320 ? 1 : 0;
    // 0x802A7744: beq         $at, $zero, L_802A7750
    if (ctx->r1 == 0) {
        // 0x802A7748: addiu       $t7, $zero, 0x11F
        ctx->r15 = ADD32(0, 0X11F);
            goto L_802A7750;
    }
    // 0x802A7748: addiu       $t7, $zero, 0x11F
    ctx->r15 = ADD32(0, 0X11F);
    // 0x802A774C: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
L_802A7750:
    // 0x802A7750: lhu         $a0, 0x1E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X1E);
    // 0x802A7754: jal         0x80015B94
    // 0x802A7758: nop

    func_80015B94(rdram, ctx);
        goto after_1;
    // 0x802A7758: nop

    after_1:
    // 0x802A775C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A7760: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x802A7764: jr          $ra
    // 0x802A7768: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802A7768: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802A776C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A776C: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802A7770: lw          $t6, 0x53FC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X53FC);
    // 0x802A7774: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A7778: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A777C: lbu         $a0, 0x0($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X0);
    // 0x802A7780: jal         0x802A7428
    // 0x802A7784: nop

    func_802A7428(rdram, ctx);
        goto after_0;
    // 0x802A7784: nop

    after_0:
    // 0x802A7788: jal         0x802A7054
    // 0x802A778C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_802A7054(rdram, ctx);
        goto after_1;
    // 0x802A778C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x802A7790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A7794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A7798: jr          $ra
    // 0x802A779C: nop

    return;
    // 0x802A779C: nop

;}
RECOMP_FUNC void func_802A77A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A77A0: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802A77A4: lw          $t6, 0x53F8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X53F8);
    // 0x802A77A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A77AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A77B0: lbu         $a0, 0x0($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X0);
    // 0x802A77B4: jal         0x802A7428
    // 0x802A77B8: nop

    func_802A7428(rdram, ctx);
        goto after_0;
    // 0x802A77B8: nop

    after_0:
    // 0x802A77BC: jal         0x802A7094
    // 0x802A77C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_802A7094(rdram, ctx);
        goto after_1;
    // 0x802A77C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x802A77C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A77C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A77CC: jr          $ra
    // 0x802A77D0: nop

    return;
    // 0x802A77D0: nop

;}
RECOMP_FUNC void func_802A77D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A77D4: jr          $ra
    // 0x802A77D8: nop

    return;
    // 0x802A77D8: nop

;}
RECOMP_FUNC void func_802A77DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A77DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A77E0: bltz        $a0, L_802A77F0
    if (SIGNED(ctx->r4) < 0) {
        // 0x802A77E4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802A77F0;
    }
    // 0x802A77E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A77E8: slti        $at, $a0, 0x18
    ctx->r1 = SIGNED(ctx->r4) < 0X18 ? 1 : 0;
    // 0x802A77EC: bne         $at, $zero, L_802A780C
    if (ctx->r1 != 0) {
        // 0x802A77F0: addiu       $at, $zero, 0x24
        ctx->r1 = ADD32(0, 0X24);
            goto L_802A780C;
    }
L_802A77F0:
    // 0x802A77F0: addiu       $at, $zero, 0x24
    ctx->r1 = ADD32(0, 0X24);
    // 0x802A77F4: beq         $a0, $at, L_802A780C
    if (ctx->r4 == ctx->r1) {
        // 0x802A77F8: addiu       $at, $zero, 0x25
        ctx->r1 = ADD32(0, 0X25);
            goto L_802A780C;
    }
    // 0x802A77F8: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x802A77FC: beq         $a0, $at, L_802A780C
    if (ctx->r4 == ctx->r1) {
        // 0x802A7800: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_802A780C;
    }
    // 0x802A7800: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x802A7804: bne         $a0, $at, L_802A7818
    if (ctx->r4 != ctx->r1) {
        // 0x802A7808: slti        $at, $a0, 0x1E
        ctx->r1 = SIGNED(ctx->r4) < 0X1E ? 1 : 0;
            goto L_802A7818;
    }
    // 0x802A7808: slti        $at, $a0, 0x1E
    ctx->r1 = SIGNED(ctx->r4) < 0X1E ? 1 : 0;
L_802A780C:
    // 0x802A780C: b           L_802A785C
    // 0x802A7810: addiu       $v1, $zero, 0x120
    ctx->r3 = ADD32(0, 0X120);
        goto L_802A785C;
    // 0x802A7810: addiu       $v1, $zero, 0x120
    ctx->r3 = ADD32(0, 0X120);
    // 0x802A7814: slti        $at, $a0, 0x1E
    ctx->r1 = SIGNED(ctx->r4) < 0X1E ? 1 : 0;
L_802A7818:
    // 0x802A7818: bne         $at, $zero, L_802A7824
    if (ctx->r1 != 0) {
        // 0x802A781C: slti        $at, $a0, 0x23
        ctx->r1 = SIGNED(ctx->r4) < 0X23 ? 1 : 0;
            goto L_802A7824;
    }
    // 0x802A781C: slti        $at, $a0, 0x23
    ctx->r1 = SIGNED(ctx->r4) < 0X23 ? 1 : 0;
    // 0x802A7820: bne         $at, $zero, L_802A7830
    if (ctx->r1 != 0) {
        // 0x802A7824: addiu       $at, $zero, 0x28
        ctx->r1 = ADD32(0, 0X28);
            goto L_802A7830;
    }
L_802A7824:
    // 0x802A7824: addiu       $at, $zero, 0x28
    ctx->r1 = ADD32(0, 0X28);
    // 0x802A7828: bne         $a0, $at, L_802A783C
    if (ctx->r4 != ctx->r1) {
        // 0x802A782C: slti        $at, $a0, 0x1B
        ctx->r1 = SIGNED(ctx->r4) < 0X1B ? 1 : 0;
            goto L_802A783C;
    }
    // 0x802A782C: slti        $at, $a0, 0x1B
    ctx->r1 = SIGNED(ctx->r4) < 0X1B ? 1 : 0;
L_802A7830:
    // 0x802A7830: b           L_802A785C
    // 0x802A7834: addiu       $v1, $zero, 0x121
    ctx->r3 = ADD32(0, 0X121);
        goto L_802A785C;
    // 0x802A7834: addiu       $v1, $zero, 0x121
    ctx->r3 = ADD32(0, 0X121);
    // 0x802A7838: slti        $at, $a0, 0x1B
    ctx->r1 = SIGNED(ctx->r4) < 0X1B ? 1 : 0;
L_802A783C:
    // 0x802A783C: bne         $at, $zero, L_802A7848
    if (ctx->r1 != 0) {
        // 0x802A7840: slti        $at, $a0, 0x1E
        ctx->r1 = SIGNED(ctx->r4) < 0X1E ? 1 : 0;
            goto L_802A7848;
    }
    // 0x802A7840: slti        $at, $a0, 0x1E
    ctx->r1 = SIGNED(ctx->r4) < 0X1E ? 1 : 0;
    // 0x802A7844: bne         $at, $zero, L_802A7854
    if (ctx->r1 != 0) {
        // 0x802A7848: addiu       $at, $zero, 0x27
        ctx->r1 = ADD32(0, 0X27);
            goto L_802A7854;
    }
L_802A7848:
    // 0x802A7848: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x802A784C: bne         $a0, $at, L_802A785C
    if (ctx->r4 != ctx->r1) {
        // 0x802A7850: addiu       $v1, $zero, 0x123
        ctx->r3 = ADD32(0, 0X123);
            goto L_802A785C;
    }
    // 0x802A7850: addiu       $v1, $zero, 0x123
    ctx->r3 = ADD32(0, 0X123);
L_802A7854:
    // 0x802A7854: b           L_802A785C
    // 0x802A7858: addiu       $v1, $zero, 0x122
    ctx->r3 = ADD32(0, 0X122);
        goto L_802A785C;
    // 0x802A7858: addiu       $v1, $zero, 0x122
    ctx->r3 = ADD32(0, 0X122);
L_802A785C:
    // 0x802A785C: andi        $a0, $v1, 0xFFFF
    ctx->r4 = ctx->r3 & 0XFFFF;
    // 0x802A7860: jal         0x80015B94
    // 0x802A7864: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80015B94(rdram, ctx);
        goto after_0;
    // 0x802A7864: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x802A7868: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A786C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x802A7870: jr          $ra
    // 0x802A7874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802A7874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802A7878(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A7878: jr          $ra
    // 0x802A787C: nop

    return;
    // 0x802A787C: nop

;}
RECOMP_FUNC void func_802A7880(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A7880: jr          $ra
    // 0x802A7884: nop

    return;
    // 0x802A7884: nop

;}
RECOMP_FUNC void func_802A7888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A7888: jr          $ra
    // 0x802A788C: nop

    return;
    // 0x802A788C: nop

;}
RECOMP_FUNC void func_802A7890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A7890: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802A7894: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x802A7898: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802A789C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A78A0: lui         $s0, 0x802C
    ctx->r16 = S32(0X802C << 16);
    // 0x802A78A4: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x802A78A8: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x802A78AC: lw          $s0, -0x23C8($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X23C8);
    // 0x802A78B0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x802A78B4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802A78B8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802A78BC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x802A78C0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x802A78C4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802A78C8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802A78CC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x802A78D0: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x802A78D4: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x802A78D8: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x802A78DC: sll         $s3, $a1, 16
    ctx->r19 = S32(ctx->r5 << 16);
    // 0x802A78E0: sll         $s4, $a2, 16
    ctx->r20 = S32(ctx->r6 << 16);
    // 0x802A78E4: sra         $t9, $s4, 16
    ctx->r25 = S32(SIGNED(ctx->r20) >> 16);
    // 0x802A78E8: sra         $t8, $s3, 16
    ctx->r24 = S32(SIGNED(ctx->r19) >> 16);
    // 0x802A78EC: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x802A78F0: or          $s3, $t8, $zero
    ctx->r19 = ctx->r24 | 0;
    // 0x802A78F4: or          $s4, $t9, $zero
    ctx->r20 = ctx->r25 | 0;
    // 0x802A78F8: beq         $s5, $v0, L_802A798C
    if (ctx->r21 == ctx->r2) {
        // 0x802A78FC: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_802A798C;
    }
    // 0x802A78FC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x802A7900: addiu       $s6, $zero, 0x7FFE
    ctx->r22 = ADD32(0, 0X7FFE);
    // 0x802A7904: addiu       $s1, $zero, 0x7FFF
    ctx->r17 = ADD32(0, 0X7FFF);
L_802A7908:
    // 0x802A7908: beq         $s1, $v0, L_802A7918
    if (ctx->r17 == ctx->r2) {
        // 0x802A790C: nop
    
            goto L_802A7918;
    }
    // 0x802A790C: nop

    // 0x802A7910: bne         $s6, $v0, L_802A7970
    if (ctx->r22 != ctx->r2) {
        // 0x802A7914: andi        $a0, $v0, 0xFFFF
        ctx->r4 = ctx->r2 & 0XFFFF;
            goto L_802A7970;
    }
    // 0x802A7914: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
L_802A7918:
    // 0x802A7918: bne         $s2, $zero, L_802A7948
    if (ctx->r18 != 0) {
        // 0x802A791C: andi        $a0, $s3, 0xFF
        ctx->r4 = ctx->r19 & 0XFF;
            goto L_802A7948;
    }
    // 0x802A791C: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    // 0x802A7920: bne         $s1, $v0, L_802A7938
    if (ctx->r17 != ctx->r2) {
        // 0x802A7924: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_802A7938;
    }
    // 0x802A7924: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x802A7928: jal         0x80079F98
    // 0x802A792C: nop

    func_80079F98(rdram, ctx);
        goto after_0;
    // 0x802A792C: nop

    after_0:
    // 0x802A7930: b           L_802A797C
    // 0x802A7934: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_802A797C;
    // 0x802A7934: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_802A7938:
    // 0x802A7938: jal         0x80079FFC
    // 0x802A793C: nop

    func_80079FFC(rdram, ctx);
        goto after_1;
    // 0x802A793C: nop

    after_1:
    // 0x802A7940: b           L_802A797C
    // 0x802A7944: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_802A797C;
    // 0x802A7944: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_802A7948:
    // 0x802A7948: bne         $s1, $v0, L_802A7960
    if (ctx->r17 != ctx->r2) {
        // 0x802A794C: andi        $a0, $s4, 0xFF
        ctx->r4 = ctx->r20 & 0XFF;
            goto L_802A7960;
    }
    // 0x802A794C: andi        $a0, $s4, 0xFF
    ctx->r4 = ctx->r20 & 0XFF;
    // 0x802A7950: jal         0x80079F98
    // 0x802A7954: nop

    func_80079F98(rdram, ctx);
        goto after_2;
    // 0x802A7954: nop

    after_2:
    // 0x802A7958: b           L_802A797C
    // 0x802A795C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_802A797C;
    // 0x802A795C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_802A7960:
    // 0x802A7960: jal         0x80079FFC
    // 0x802A7964: nop

    func_80079FFC(rdram, ctx);
        goto after_3;
    // 0x802A7964: nop

    after_3:
    // 0x802A7968: b           L_802A797C
    // 0x802A796C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_802A797C;
    // 0x802A796C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_802A7970:
    // 0x802A7970: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A7974: jal         0x802A14C0
    // 0x802A7978: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    func_802A14C0(rdram, ctx);
        goto after_4;
    // 0x802A7978: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    after_4:
L_802A797C:
    // 0x802A797C: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x802A7980: nop

    // 0x802A7984: bne         $s5, $v0, L_802A7908
    if (ctx->r21 != ctx->r2) {
        // 0x802A7988: nop
    
            goto L_802A7908;
    }
    // 0x802A7988: nop

L_802A798C:
    // 0x802A798C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802A7990: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A7994: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802A7998: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802A799C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x802A79A0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x802A79A4: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x802A79A8: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x802A79AC: jr          $ra
    // 0x802A79B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802A79B0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802A79B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A79B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A79B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A79BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802A79C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802A79C4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802A79C8: jal         0x80087D40
    // 0x802A79CC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_80087D40(rdram, ctx);
        goto after_0;
    // 0x802A79CC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x802A79D0: lh          $t0, 0x1A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1A);
    // 0x802A79D4: lh          $t6, 0x1E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1E);
    // 0x802A79D8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802A79DC: subu        $a3, $t6, $t0
    ctx->r7 = SUB32(ctx->r14, ctx->r8);
    // 0x802A79E0: addiu       $a1, $a3, 0x1
    ctx->r5 = ADD32(ctx->r7, 0X1);
    // 0x802A79E4: blez        $a1, L_802A7A70
    if (SIGNED(ctx->r5) <= 0) {
        // 0x802A79E8: sll         $t7, $a3, 2
        ctx->r15 = S32(ctx->r7 << 2);
            goto L_802A7A70;
    }
    // 0x802A79E8: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x802A79EC: subu        $t7, $t7, $a3
    ctx->r15 = SUB32(ctx->r15, ctx->r7);
    // 0x802A79F0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802A79F4: addu        $t7, $t7, $a3
    ctx->r15 = ADD32(ctx->r15, ctx->r7);
    // 0x802A79F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802A79FC: addiu       $t8, $t7, 0x64
    ctx->r24 = ADD32(ctx->r15, 0X64);
    // 0x802A7A00: div         $zero, $v0, $t8
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r24))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r24)));
    // 0x802A7A04: addiu       $a0, $zero, 0x64
    ctx->r4 = ADD32(0, 0X64);
    // 0x802A7A08: bne         $t8, $zero, L_802A7A14
    if (ctx->r24 != 0) {
        // 0x802A7A0C: nop
    
            goto L_802A7A14;
    }
    // 0x802A7A0C: nop

    // 0x802A7A10: break       7
    do_break(2150267408);
L_802A7A14:
    // 0x802A7A14: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802A7A18: bne         $t8, $at, L_802A7A2C
    if (ctx->r24 != ctx->r1) {
        // 0x802A7A1C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802A7A2C;
    }
    // 0x802A7A1C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802A7A20: bne         $v0, $at, L_802A7A2C
    if (ctx->r2 != ctx->r1) {
        // 0x802A7A24: nop
    
            goto L_802A7A2C;
    }
    // 0x802A7A24: nop

    // 0x802A7A28: break       6
    do_break(2150267432);
L_802A7A2C:
    // 0x802A7A2C: mfhi        $a2
    ctx->r6 = hi;
    // 0x802A7A30: nop

    // 0x802A7A34: nop

L_802A7A38:
    // 0x802A7A38: slt         $at, $a2, $a0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x802A7A3C: beq         $at, $zero, L_802A7A64
    if (ctx->r1 == 0) {
        // 0x802A7A40: nop
    
            goto L_802A7A64;
    }
    // 0x802A7A40: nop

    // 0x802A7A44: addu        $a0, $t0, $v1
    ctx->r4 = ADD32(ctx->r8, ctx->r3);
    // 0x802A7A48: sll         $t9, $a0, 16
    ctx->r25 = S32(ctx->r4 << 16);
    // 0x802A7A4C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x802A7A50: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x802A7A54: jal         0x802A7890
    // 0x802A7A58: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
    func_802A7890(rdram, ctx);
        goto after_1;
    // 0x802A7A58: sra         $a0, $t9, 16
    ctx->r4 = S32(SIGNED(ctx->r25) >> 16);
    after_1:
    // 0x802A7A5C: b           L_802A7A74
    // 0x802A7A60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A7A74;
    // 0x802A7A60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A7A64:
    // 0x802A7A64: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802A7A68: bne         $v1, $a1, L_802A7A38
    if (ctx->r3 != ctx->r5) {
        // 0x802A7A6C: addiu       $a0, $a0, 0x64
        ctx->r4 = ADD32(ctx->r4, 0X64);
            goto L_802A7A38;
    }
    // 0x802A7A6C: addiu       $a0, $a0, 0x64
    ctx->r4 = ADD32(ctx->r4, 0X64);
L_802A7A70:
    // 0x802A7A70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A7A74:
    // 0x802A7A74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A7A78: jr          $ra
    // 0x802A7A7C: nop

    return;
    // 0x802A7A7C: nop

;}
RECOMP_FUNC void func_802A7A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A7A80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A7A84: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802A7A88: lh          $t6, 0x55F2($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X55F2);
    // 0x802A7A8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A7A90: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802A7A94: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802A7A98: jal         0x802AB334
    // 0x802A7A9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802AB334(rdram, ctx);
        goto after_0;
    // 0x802A7A9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802A7AA0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802A7AA4: nop

    // 0x802A7AA8: sh          $v0, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r2;
    // 0x802A7AAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A7AB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A7AB4: jr          $ra
    // 0x802A7AB8: nop

    return;
    // 0x802A7AB8: nop

;}
RECOMP_FUNC void func_802A7ABC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A7ABC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A7AC0: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802A7AC4: lh          $t6, 0x552E($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X552E);
    // 0x802A7AC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A7ACC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802A7AD0: sh          $t6, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r14;
    // 0x802A7AD4: jal         0x802AB2EC
    // 0x802A7AD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802AB2EC(rdram, ctx);
        goto after_0;
    // 0x802A7AD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802A7ADC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802A7AE0: nop

    // 0x802A7AE4: sh          $v0, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r2;
    // 0x802A7AE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A7AEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A7AF0: jr          $ra
    // 0x802A7AF4: nop

    return;
    // 0x802A7AF4: nop

;}
RECOMP_FUNC void func_802A7AF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A7AF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A7AFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A7B00: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802A7B04: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802A7B08: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x802A7B0C: jal         0x802A7A80
    // 0x802A7B10: addiu       $a0, $sp, 0x1E
    ctx->r4 = ADD32(ctx->r29, 0X1E);
    func_802A7A80(rdram, ctx);
        goto after_0;
    // 0x802A7B10: addiu       $a0, $sp, 0x1E
    ctx->r4 = ADD32(ctx->r29, 0X1E);
    after_0:
    // 0x802A7B14: addiu       $a0, $sp, 0x1A
    ctx->r4 = ADD32(ctx->r29, 0X1A);
    // 0x802A7B18: jal         0x802A7ABC
    // 0x802A7B1C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_802A7ABC(rdram, ctx);
        goto after_1;
    // 0x802A7B1C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x802A7B20: lh          $t6, 0x18($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X18);
    // 0x802A7B24: lh          $t7, 0x1C($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1C);
    // 0x802A7B28: lh          $t1, 0x1A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1A);
    // 0x802A7B2C: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x802A7B30: beq         $at, $zero, L_802A7B58
    if (ctx->r1 == 0) {
        // 0x802A7B34: lw          $t2, 0x20($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X20);
            goto L_802A7B58;
    }
    // 0x802A7B34: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x802A7B38: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x802A7B3C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x802A7B40: nop

    // 0x802A7B44: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x802A7B48: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x802A7B4C: b           L_802A7B70
    // 0x802A7B50: sh          $t7, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r15;
        goto L_802A7B70;
    // 0x802A7B50: sh          $t7, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r15;
    // 0x802A7B54: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
L_802A7B58:
    // 0x802A7B58: nop

    // 0x802A7B5C: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x802A7B60: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x802A7B64: lh          $t3, 0x18($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X18);
    // 0x802A7B68: nop

    // 0x802A7B6C: sh          $t3, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r11;
L_802A7B70:
    // 0x802A7B70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A7B74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802A7B78: jr          $ra
    // 0x802A7B7C: nop

    return;
    // 0x802A7B7C: nop

;}
RECOMP_FUNC void func_802A7B80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A7B80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A7B84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A7B88: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802A7B8C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802A7B90: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x802A7B94: jal         0x802A7A80
    // 0x802A7B98: addiu       $a0, $sp, 0x1E
    ctx->r4 = ADD32(ctx->r29, 0X1E);
    func_802A7A80(rdram, ctx);
        goto after_0;
    // 0x802A7B98: addiu       $a0, $sp, 0x1E
    ctx->r4 = ADD32(ctx->r29, 0X1E);
    after_0:
    // 0x802A7B9C: addiu       $a0, $sp, 0x1A
    ctx->r4 = ADD32(ctx->r29, 0X1A);
    // 0x802A7BA0: jal         0x802A7ABC
    // 0x802A7BA4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_802A7ABC(rdram, ctx);
        goto after_1;
    // 0x802A7BA4: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x802A7BA8: lh          $t6, 0x1C($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1C);
    // 0x802A7BAC: lh          $t7, 0x18($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X18);
    // 0x802A7BB0: lh          $t1, 0x1A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1A);
    // 0x802A7BB4: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x802A7BB8: beq         $at, $zero, L_802A7BE0
    if (ctx->r1 == 0) {
        // 0x802A7BBC: lw          $t2, 0x20($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X20);
            goto L_802A7BE0;
    }
    // 0x802A7BBC: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x802A7BC0: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x802A7BC4: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x802A7BC8: nop

    // 0x802A7BCC: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x802A7BD0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x802A7BD4: b           L_802A7BF8
    // 0x802A7BD8: sh          $t6, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r14;
        goto L_802A7BF8;
    // 0x802A7BD8: sh          $t6, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r14;
    // 0x802A7BDC: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
L_802A7BE0:
    // 0x802A7BE0: nop

    // 0x802A7BE4: sh          $t1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r9;
    // 0x802A7BE8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x802A7BEC: lh          $t3, 0x18($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X18);
    // 0x802A7BF0: nop

    // 0x802A7BF4: sh          $t3, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r11;
L_802A7BF8:
    // 0x802A7BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A7BFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802A7C00: jr          $ra
    // 0x802A7C04: nop

    return;
    // 0x802A7C04: nop

;}
RECOMP_FUNC void func_802A7C08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A7C08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A7C0C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802A7C10: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x802A7C14: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802A7C18: sll         $s0, $a1, 16
    ctx->r16 = S32(ctx->r5 << 16);
    // 0x802A7C1C: sll         $a3, $a2, 16
    ctx->r7 = S32(ctx->r6 << 16);
    // 0x802A7C20: sra         $t9, $a3, 16
    ctx->r25 = S32(SIGNED(ctx->r7) >> 16);
    // 0x802A7C24: sra         $t8, $s0, 16
    ctx->r24 = S32(SIGNED(ctx->r16) >> 16);
    // 0x802A7C28: sltiu       $at, $t7, 0x26
    ctx->r1 = ctx->r15 < 0X26 ? 1 : 0;
    // 0x802A7C2C: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x802A7C30: or          $a3, $t9, $zero
    ctx->r7 = ctx->r25 | 0;
    // 0x802A7C34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A7C38: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802A7C3C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802A7C40: beq         $at, $zero, L_802A810C
    if (ctx->r1 == 0) {
        // 0x802A7C44: sw          $a2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r6;
            goto L_802A810C;
    }
    // 0x802A7C44: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802A7C48: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x802A7C4C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A7C50: addu        $at, $at, $t0
    gpr jr_addend_802A7C5C = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x802A7C54: lw          $t0, 0x1464($at)
    ctx->r8 = ADD32(ctx->r1, 0X1464);
    // 0x802A7C58: nop

    // 0x802A7C5C: jr          $t0
    // 0x802A7C60: nop

    switch (jr_addend_802A7C5C >> 2) {
        case 0: goto L_802A7C64; break;
        case 1: goto L_802A7C84; break;
        case 2: goto L_802A7CAC; break;
        case 3: goto L_802A7CD4; break;
        case 4: goto L_802A7CF4; break;
        case 5: goto L_802A7D14; break;
        case 6: goto L_802A810C; break;
        case 7: goto L_802A7D34; break;
        case 8: goto L_802A7D54; break;
        case 9: goto L_802A7D74; break;
        case 10: goto L_802A7D9C; break;
        case 11: goto L_802A7DC4; break;
        case 12: goto L_802A7DE4; break;
        case 13: goto L_802A810C; break;
        case 14: goto L_802A7E04; break;
        case 15: goto L_802A7E24; break;
        case 16: goto L_802A810C; break;
        case 17: goto L_802A810C; break;
        case 18: goto L_802A7E44; break;
        case 19: goto L_802A7EE4; break;
        case 20: goto L_802A7F0C; break;
        case 21: goto L_802A7F34; break;
        case 22: goto L_802A810C; break;
        case 23: goto L_802A7F54; break;
        case 24: goto L_802A7F7C; break;
        case 25: goto L_802A810C; break;
        case 26: goto L_802A7F9C; break;
        case 27: goto L_802A810C; break;
        case 28: goto L_802A7FBC; break;
        case 29: goto L_802A7FDC; break;
        case 30: goto L_802A7FFC; break;
        case 31: goto L_802A801C; break;
        case 32: goto L_802A803C; break;
        case 33: goto L_802A8064; break;
        case 34: goto L_802A8084; break;
        case 35: goto L_802A80A4; break;
        case 36: goto L_802A80C4; break;
        case 37: goto L_802A80EC; break;
        default: switch_error(__func__, 0x802A7C5C, 0x802C1464);
    }
    // 0x802A7C60: nop

L_802A7C64:
    // 0x802A7C64: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802A7C68: sra         $t1, $a2, 16
    ctx->r9 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7C6C: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x802A7C70: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802A7C74: jal         0x802A79B4
    // 0x802A7C78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_802A79B4(rdram, ctx);
        goto after_0;
    // 0x802A7C78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x802A7C7C: b           L_802A8110
    // 0x802A7C80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7C80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7C84:
    // 0x802A7C84: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x802A7C88: sll         $a2, $a3, 16
    ctx->r6 = S32(ctx->r7 << 16);
    // 0x802A7C8C: sra         $t3, $a2, 16
    ctx->r11 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7C90: sra         $t2, $a1, 16
    ctx->r10 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802A7C94: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x802A7C98: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x802A7C9C: jal         0x802A7890
    // 0x802A7CA0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_802A7890(rdram, ctx);
        goto after_1;
    // 0x802A7CA0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_1:
    // 0x802A7CA4: b           L_802A8110
    // 0x802A7CA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7CA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7CAC:
    // 0x802A7CAC: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x802A7CB0: sll         $a2, $a3, 16
    ctx->r6 = S32(ctx->r7 << 16);
    // 0x802A7CB4: sra         $t5, $a2, 16
    ctx->r13 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7CB8: sra         $t4, $a1, 16
    ctx->r12 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802A7CBC: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x802A7CC0: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x802A7CC4: jal         0x802A7890
    // 0x802A7CC8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_802A7890(rdram, ctx);
        goto after_2;
    // 0x802A7CC8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_2:
    // 0x802A7CCC: b           L_802A8110
    // 0x802A7CD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7CD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7CD4:
    // 0x802A7CD4: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802A7CD8: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7CDC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x802A7CE0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x802A7CE4: jal         0x802A79B4
    // 0x802A7CE8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_802A79B4(rdram, ctx);
        goto after_3;
    // 0x802A7CE8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_3:
    // 0x802A7CEC: b           L_802A8110
    // 0x802A7CF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7CF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7CF4:
    // 0x802A7CF4: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802A7CF8: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7CFC: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802A7D00: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x802A7D04: jal         0x802A79B4
    // 0x802A7D08: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_802A79B4(rdram, ctx);
        goto after_4;
    // 0x802A7D08: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_4:
    // 0x802A7D0C: b           L_802A8110
    // 0x802A7D10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7D10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7D14:
    // 0x802A7D14: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802A7D18: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7D1C: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x802A7D20: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x802A7D24: jal         0x802A79B4
    // 0x802A7D28: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_802A79B4(rdram, ctx);
        goto after_5;
    // 0x802A7D28: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_5:
    // 0x802A7D2C: b           L_802A8110
    // 0x802A7D30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7D30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7D34:
    // 0x802A7D34: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802A7D38: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7D3C: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x802A7D40: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x802A7D44: jal         0x802A79B4
    // 0x802A7D48: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_802A79B4(rdram, ctx);
        goto after_6;
    // 0x802A7D48: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_6:
    // 0x802A7D4C: b           L_802A8110
    // 0x802A7D50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7D50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7D54:
    // 0x802A7D54: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802A7D58: sra         $t0, $a2, 16
    ctx->r8 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7D5C: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x802A7D60: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    // 0x802A7D64: jal         0x802A79B4
    // 0x802A7D68: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    func_802A79B4(rdram, ctx);
        goto after_7;
    // 0x802A7D68: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_7:
    // 0x802A7D6C: b           L_802A8110
    // 0x802A7D70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7D70: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7D74:
    // 0x802A7D74: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x802A7D78: sll         $a2, $a3, 16
    ctx->r6 = S32(ctx->r7 << 16);
    // 0x802A7D7C: sra         $t2, $a2, 16
    ctx->r10 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7D80: sra         $t1, $a1, 16
    ctx->r9 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802A7D84: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x802A7D88: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x802A7D8C: jal         0x802A7890
    // 0x802A7D90: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    func_802A7890(rdram, ctx);
        goto after_8;
    // 0x802A7D90: addiu       $a0, $zero, 0x16
    ctx->r4 = ADD32(0, 0X16);
    after_8:
    // 0x802A7D94: b           L_802A8110
    // 0x802A7D98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7D98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7D9C:
    // 0x802A7D9C: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x802A7DA0: sll         $a2, $a3, 16
    ctx->r6 = S32(ctx->r7 << 16);
    // 0x802A7DA4: sra         $t4, $a2, 16
    ctx->r12 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7DA8: sra         $t3, $a1, 16
    ctx->r11 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802A7DAC: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x802A7DB0: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x802A7DB4: jal         0x802A7890
    // 0x802A7DB8: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_802A7890(rdram, ctx);
        goto after_9;
    // 0x802A7DB8: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_9:
    // 0x802A7DBC: b           L_802A8110
    // 0x802A7DC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7DC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7DC4:
    // 0x802A7DC4: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802A7DC8: sra         $t5, $a2, 16
    ctx->r13 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7DCC: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x802A7DD0: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    // 0x802A7DD4: jal         0x802A79B4
    // 0x802A7DD8: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    func_802A79B4(rdram, ctx);
        goto after_10;
    // 0x802A7DD8: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    after_10:
    // 0x802A7DDC: b           L_802A8110
    // 0x802A7DE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7DE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7DE4:
    // 0x802A7DE4: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802A7DE8: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7DEC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x802A7DF0: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x802A7DF4: jal         0x802A79B4
    // 0x802A7DF8: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    func_802A79B4(rdram, ctx);
        goto after_11;
    // 0x802A7DF8: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_11:
    // 0x802A7DFC: b           L_802A8110
    // 0x802A7E00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7E00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7E04:
    // 0x802A7E04: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802A7E08: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7E0C: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802A7E10: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x802A7E14: jal         0x802A79B4
    // 0x802A7E18: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_802A79B4(rdram, ctx);
        goto after_12;
    // 0x802A7E18: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_12:
    // 0x802A7E1C: b           L_802A8110
    // 0x802A7E20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7E20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7E24:
    // 0x802A7E24: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802A7E28: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7E2C: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x802A7E30: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    // 0x802A7E34: jal         0x802A79B4
    // 0x802A7E38: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    func_802A79B4(rdram, ctx);
        goto after_13;
    // 0x802A7E38: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    after_13:
    // 0x802A7E3C: b           L_802A8110
    // 0x802A7E40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7E40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7E44:
    // 0x802A7E44: jal         0x80087D40
    // 0x802A7E48: sh          $a3, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r7;
    func_80087D40(rdram, ctx);
        goto after_14;
    // 0x802A7E48: sh          $a3, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r7;
    after_14:
    // 0x802A7E4C: addiu       $at, $zero, 0x1F4
    ctx->r1 = ADD32(0, 0X1F4);
    // 0x802A7E50: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802A7E54: lh          $a3, 0x2A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2A);
    // 0x802A7E58: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802A7E5C: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802A7E60: sra         $t5, $a2, 16
    ctx->r13 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7E64: addiu       $a0, $zero, 0x26
    ctx->r4 = ADD32(0, 0X26);
    // 0x802A7E68: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    // 0x802A7E6C: mfhi        $t9
    ctx->r25 = hi;
    // 0x802A7E70: slti        $at, $t9, 0x64
    ctx->r1 = SIGNED(ctx->r25) < 0X64 ? 1 : 0;
    // 0x802A7E74: beq         $at, $zero, L_802A7ED4
    if (ctx->r1 == 0) {
        // 0x802A7E78: nop
    
            goto L_802A7ED4;
    }
    // 0x802A7E78: nop

    // 0x802A7E7C: lw          $t0, 0x55E4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X55E4);
    // 0x802A7E80: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x802A7E84: bne         $t0, $zero, L_802A7EB4
    if (ctx->r8 != 0) {
        // 0x802A7E88: sll         $a1, $s0, 16
        ctx->r5 = S32(ctx->r16 << 16);
            goto L_802A7EB4;
    }
    // 0x802A7E88: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x802A7E8C: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x802A7E90: sll         $a2, $a3, 16
    ctx->r6 = S32(ctx->r7 << 16);
    // 0x802A7E94: sra         $t2, $a2, 16
    ctx->r10 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7E98: sra         $t1, $a1, 16
    ctx->r9 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802A7E9C: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x802A7EA0: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x802A7EA4: jal         0x802A7890
    // 0x802A7EA8: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    func_802A7890(rdram, ctx);
        goto after_15;
    // 0x802A7EA8: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    after_15:
    // 0x802A7EAC: b           L_802A8110
    // 0x802A7EB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7EB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7EB4:
    // 0x802A7EB4: sll         $a2, $a3, 16
    ctx->r6 = S32(ctx->r7 << 16);
    // 0x802A7EB8: sra         $t4, $a2, 16
    ctx->r12 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7EBC: sra         $t3, $a1, 16
    ctx->r11 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802A7EC0: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x802A7EC4: jal         0x802A7890
    // 0x802A7EC8: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    func_802A7890(rdram, ctx);
        goto after_16;
    // 0x802A7EC8: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    after_16:
    // 0x802A7ECC: b           L_802A8110
    // 0x802A7ED0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7ED0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7ED4:
    // 0x802A7ED4: jal         0x802A79B4
    // 0x802A7ED8: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    func_802A79B4(rdram, ctx);
        goto after_17;
    // 0x802A7ED8: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    after_17:
    // 0x802A7EDC: b           L_802A8110
    // 0x802A7EE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7EE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7EE4:
    // 0x802A7EE4: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x802A7EE8: sll         $a2, $a3, 16
    ctx->r6 = S32(ctx->r7 << 16);
    // 0x802A7EEC: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7EF0: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802A7EF4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x802A7EF8: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802A7EFC: jal         0x802A7890
    // 0x802A7F00: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    func_802A7890(rdram, ctx);
        goto after_18;
    // 0x802A7F00: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    after_18:
    // 0x802A7F04: b           L_802A8110
    // 0x802A7F08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7F08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7F0C:
    // 0x802A7F0C: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x802A7F10: sll         $a2, $a3, 16
    ctx->r6 = S32(ctx->r7 << 16);
    // 0x802A7F14: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7F18: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802A7F1C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x802A7F20: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x802A7F24: jal         0x802A7890
    // 0x802A7F28: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    func_802A7890(rdram, ctx);
        goto after_19;
    // 0x802A7F28: addiu       $a0, $zero, 0x2D
    ctx->r4 = ADD32(0, 0X2D);
    after_19:
    // 0x802A7F2C: b           L_802A8110
    // 0x802A7F30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7F30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7F34:
    // 0x802A7F34: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802A7F38: sra         $t0, $a2, 16
    ctx->r8 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7F3C: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x802A7F40: addiu       $a0, $zero, 0x2E
    ctx->r4 = ADD32(0, 0X2E);
    // 0x802A7F44: jal         0x802A79B4
    // 0x802A7F48: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    func_802A79B4(rdram, ctx);
        goto after_20;
    // 0x802A7F48: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
    after_20:
    // 0x802A7F4C: b           L_802A8110
    // 0x802A7F50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7F50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7F54:
    // 0x802A7F54: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x802A7F58: sll         $a2, $a3, 16
    ctx->r6 = S32(ctx->r7 << 16);
    // 0x802A7F5C: sra         $t2, $a2, 16
    ctx->r10 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7F60: sra         $t1, $a1, 16
    ctx->r9 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802A7F64: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x802A7F68: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x802A7F6C: jal         0x802A7890
    // 0x802A7F70: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    func_802A7890(rdram, ctx);
        goto after_21;
    // 0x802A7F70: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_21:
    // 0x802A7F74: b           L_802A8110
    // 0x802A7F78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7F78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7F7C:
    // 0x802A7F7C: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802A7F80: sra         $t3, $a2, 16
    ctx->r11 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7F84: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x802A7F88: addiu       $a0, $zero, 0x33
    ctx->r4 = ADD32(0, 0X33);
    // 0x802A7F8C: jal         0x802A79B4
    // 0x802A7F90: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    func_802A79B4(rdram, ctx);
        goto after_22;
    // 0x802A7F90: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    after_22:
    // 0x802A7F94: b           L_802A8110
    // 0x802A7F98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7F98: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7F9C:
    // 0x802A7F9C: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802A7FA0: sra         $t4, $a2, 16
    ctx->r12 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7FA4: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x802A7FA8: addiu       $a0, $zero, 0x3F
    ctx->r4 = ADD32(0, 0X3F);
    // 0x802A7FAC: jal         0x802A79B4
    // 0x802A7FB0: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    func_802A79B4(rdram, ctx);
        goto after_23;
    // 0x802A7FB0: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    after_23:
    // 0x802A7FB4: b           L_802A8110
    // 0x802A7FB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7FB8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7FBC:
    // 0x802A7FBC: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802A7FC0: sra         $t5, $a2, 16
    ctx->r13 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7FC4: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x802A7FC8: addiu       $a0, $zero, 0x4A
    ctx->r4 = ADD32(0, 0X4A);
    // 0x802A7FCC: jal         0x802A79B4
    // 0x802A7FD0: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    func_802A79B4(rdram, ctx);
        goto after_24;
    // 0x802A7FD0: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    after_24:
    // 0x802A7FD4: b           L_802A8110
    // 0x802A7FD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7FD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7FDC:
    // 0x802A7FDC: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802A7FE0: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A7FE4: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x802A7FE8: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    // 0x802A7FEC: jal         0x802A79B4
    // 0x802A7FF0: addiu       $a1, $zero, 0x4D
    ctx->r5 = ADD32(0, 0X4D);
    func_802A79B4(rdram, ctx);
        goto after_25;
    // 0x802A7FF0: addiu       $a1, $zero, 0x4D
    ctx->r5 = ADD32(0, 0X4D);
    after_25:
    // 0x802A7FF4: b           L_802A8110
    // 0x802A7FF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A7FF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A7FFC:
    // 0x802A7FFC: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802A8000: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A8004: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802A8008: addiu       $a0, $zero, 0x4E
    ctx->r4 = ADD32(0, 0X4E);
    // 0x802A800C: jal         0x802A79B4
    // 0x802A8010: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    func_802A79B4(rdram, ctx);
        goto after_26;
    // 0x802A8010: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_26:
    // 0x802A8014: b           L_802A8110
    // 0x802A8018: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A8018: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A801C:
    // 0x802A801C: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802A8020: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A8024: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x802A8028: addiu       $a0, $zero, 0x51
    ctx->r4 = ADD32(0, 0X51);
    // 0x802A802C: jal         0x802A79B4
    // 0x802A8030: addiu       $a1, $zero, 0x53
    ctx->r5 = ADD32(0, 0X53);
    func_802A79B4(rdram, ctx);
        goto after_27;
    // 0x802A8030: addiu       $a1, $zero, 0x53
    ctx->r5 = ADD32(0, 0X53);
    after_27:
    // 0x802A8034: b           L_802A8110
    // 0x802A8038: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A8038: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A803C:
    // 0x802A803C: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x802A8040: sll         $a2, $a3, 16
    ctx->r6 = S32(ctx->r7 << 16);
    // 0x802A8044: sra         $t0, $a2, 16
    ctx->r8 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A8048: sra         $t9, $a1, 16
    ctx->r25 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802A804C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x802A8050: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x802A8054: jal         0x802A7890
    // 0x802A8058: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    func_802A7890(rdram, ctx);
        goto after_28;
    // 0x802A8058: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    after_28:
    // 0x802A805C: b           L_802A8110
    // 0x802A8060: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A8060: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A8064:
    // 0x802A8064: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802A8068: sra         $t1, $a2, 16
    ctx->r9 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A806C: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x802A8070: addiu       $a0, $zero, 0x55
    ctx->r4 = ADD32(0, 0X55);
    // 0x802A8074: jal         0x802A79B4
    // 0x802A8078: addiu       $a1, $zero, 0x57
    ctx->r5 = ADD32(0, 0X57);
    func_802A79B4(rdram, ctx);
        goto after_29;
    // 0x802A8078: addiu       $a1, $zero, 0x57
    ctx->r5 = ADD32(0, 0X57);
    after_29:
    // 0x802A807C: b           L_802A8110
    // 0x802A8080: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A8080: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A8084:
    // 0x802A8084: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802A8088: sra         $t2, $a2, 16
    ctx->r10 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A808C: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x802A8090: addiu       $a0, $zero, 0x58
    ctx->r4 = ADD32(0, 0X58);
    // 0x802A8094: jal         0x802A79B4
    // 0x802A8098: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    func_802A79B4(rdram, ctx);
        goto after_30;
    // 0x802A8098: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_30:
    // 0x802A809C: b           L_802A8110
    // 0x802A80A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A80A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A80A4:
    // 0x802A80A4: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x802A80A8: sra         $t3, $a2, 16
    ctx->r11 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A80AC: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x802A80B0: addiu       $a0, $zero, 0x5B
    ctx->r4 = ADD32(0, 0X5B);
    // 0x802A80B4: jal         0x802A79B4
    // 0x802A80B8: addiu       $a1, $zero, 0x5E
    ctx->r5 = ADD32(0, 0X5E);
    func_802A79B4(rdram, ctx);
        goto after_31;
    // 0x802A80B8: addiu       $a1, $zero, 0x5E
    ctx->r5 = ADD32(0, 0X5E);
    after_31:
    // 0x802A80BC: b           L_802A8110
    // 0x802A80C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A80C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A80C4:
    // 0x802A80C4: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x802A80C8: sll         $a2, $a3, 16
    ctx->r6 = S32(ctx->r7 << 16);
    // 0x802A80CC: sra         $t5, $a2, 16
    ctx->r13 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A80D0: sra         $t4, $a1, 16
    ctx->r12 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802A80D4: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x802A80D8: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    // 0x802A80DC: jal         0x802A7890
    // 0x802A80E0: addiu       $a0, $zero, 0x5F
    ctx->r4 = ADD32(0, 0X5F);
    func_802A7890(rdram, ctx);
        goto after_32;
    // 0x802A80E0: addiu       $a0, $zero, 0x5F
    ctx->r4 = ADD32(0, 0X5F);
    after_32:
    // 0x802A80E4: b           L_802A8110
    // 0x802A80E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802A8110;
    // 0x802A80E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A80EC:
    // 0x802A80EC: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x802A80F0: sll         $a2, $a3, 16
    ctx->r6 = S32(ctx->r7 << 16);
    // 0x802A80F4: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A80F8: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802A80FC: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x802A8100: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802A8104: jal         0x802A7890
    // 0x802A8108: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    func_802A7890(rdram, ctx);
        goto after_33;
    // 0x802A8108: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    after_33:
L_802A810C:
    // 0x802A810C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802A8110:
    // 0x802A8110: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802A8114: jr          $ra
    // 0x802A8118: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x802A8118: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802A811C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A811C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A8120: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A8124: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802A8128: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A812C: lh          $a2, 0x552E($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X552E);
    // 0x802A8130: lh          $a1, 0x55F2($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X55F2);
    // 0x802A8134: jal         0x802A7C08
    // 0x802A8138: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_0;
    // 0x802A8138: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802A813C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A8140: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A8144: jr          $ra
    // 0x802A8148: nop

    return;
    // 0x802A8148: nop

;}
RECOMP_FUNC void func_802A814C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A814C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802A8150: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A8154: jal         0x802AB334
    // 0x802A8158: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802AB334(rdram, ctx);
        goto after_0;
    // 0x802A8158: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802A815C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802A8160: jal         0x802AB2EC
    // 0x802A8164: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802AB2EC(rdram, ctx);
        goto after_1;
    // 0x802A8164: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x802A8168: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x802A816C: nop

    // 0x802A8170: slt         $at, $t6, $v0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802A8174: beq         $at, $zero, L_802A81A0
    if (ctx->r1 == 0) {
        // 0x802A8178: nop
    
            goto L_802A81A0;
    }
    // 0x802A8178: nop

    // 0x802A817C: jal         0x802AB334
    // 0x802A8180: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802AB334(rdram, ctx);
        goto after_2;
    // 0x802A8180: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x802A8184: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802A8188: jal         0x802AB2EC
    // 0x802A818C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802AB2EC(rdram, ctx);
        goto after_3;
    // 0x802A818C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x802A8190: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x802A8194: lui         $t9, 0x802C
    ctx->r25 = S32(0X802C << 16);
    // 0x802A8198: bne         $v0, $t7, L_802A81F8
    if (ctx->r2 != ctx->r15) {
        // 0x802A819C: nop
    
            goto L_802A81F8;
    }
    // 0x802A819C: nop

L_802A81A0:
    // 0x802A81A0: jal         0x80087D40
    // 0x802A81A4: nop

    func_80087D40(rdram, ctx);
        goto after_4;
    // 0x802A81A4: nop

    after_4:
    // 0x802A81A8: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    // 0x802A81AC: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802A81B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802A81B4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x802A81B8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A81BC: mfhi        $t8
    ctx->r24 = hi;
    // 0x802A81C0: slti        $at, $t8, 0x64
    ctx->r1 = SIGNED(ctx->r24) < 0X64 ? 1 : 0;
    // 0x802A81C4: beq         $at, $zero, L_802A81E4
    if (ctx->r1 == 0) {
        // 0x802A81C8: nop
    
            goto L_802A81E4;
    }
    // 0x802A81C8: nop

    // 0x802A81CC: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A81D0: lh          $a1, 0x552E($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X552E);
    // 0x802A81D4: jal         0x802A7C08
    // 0x802A81D8: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_802A7C08(rdram, ctx);
        goto after_5;
    // 0x802A81D8: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_5:
    // 0x802A81DC: b           L_802A840C
    // 0x802A81E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A840C;
    // 0x802A81E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A81E4:
    // 0x802A81E4: lh          $a1, 0x55F2($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X55F2);
    // 0x802A81E8: jal         0x802A7C08
    // 0x802A81EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_6;
    // 0x802A81EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x802A81F0: b           L_802A840C
    // 0x802A81F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A840C;
    // 0x802A81F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A81F8:
    // 0x802A81F8: lw          $t9, 0x50D8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X50D8);
    // 0x802A81FC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802A8200: bne         $t9, $at, L_802A82B0
    if (ctx->r25 != ctx->r1) {
        // 0x802A8204: addiu       $a0, $sp, 0x2E
        ctx->r4 = ADD32(ctx->r29, 0X2E);
            goto L_802A82B0;
    }
    // 0x802A8204: addiu       $a0, $sp, 0x2E
    ctx->r4 = ADD32(ctx->r29, 0X2E);
    // 0x802A8208: jal         0x802AB3C4
    // 0x802A820C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802AB3C4(rdram, ctx);
        goto after_7;
    // 0x802A820C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x802A8210: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802A8214: jal         0x802AB37C
    // 0x802A8218: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802AB37C(rdram, ctx);
        goto after_8;
    // 0x802A8218: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x802A821C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x802A8220: nop

    // 0x802A8224: slt         $at, $t0, $v0
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802A8228: beq         $at, $zero, L_802A8254
    if (ctx->r1 == 0) {
        // 0x802A822C: nop
    
            goto L_802A8254;
    }
    // 0x802A822C: nop

    // 0x802A8230: jal         0x802AB3C4
    // 0x802A8234: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802AB3C4(rdram, ctx);
        goto after_9;
    // 0x802A8234: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x802A8238: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802A823C: jal         0x802AB37C
    // 0x802A8240: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802AB37C(rdram, ctx);
        goto after_10;
    // 0x802A8240: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_10:
    // 0x802A8244: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x802A8248: nop

    // 0x802A824C: bne         $v0, $t1, L_802A82B0
    if (ctx->r2 != ctx->r9) {
        // 0x802A8250: addiu       $a0, $sp, 0x2E
        ctx->r4 = ADD32(ctx->r29, 0X2E);
            goto L_802A82B0;
    }
    // 0x802A8250: addiu       $a0, $sp, 0x2E
    ctx->r4 = ADD32(ctx->r29, 0X2E);
L_802A8254:
    // 0x802A8254: jal         0x80087D40
    // 0x802A8258: nop

    func_80087D40(rdram, ctx);
        goto after_11;
    // 0x802A8258: nop

    after_11:
    // 0x802A825C: addiu       $at, $zero, 0xC8
    ctx->r1 = ADD32(0, 0XC8);
    // 0x802A8260: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802A8264: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802A8268: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x802A826C: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A8270: mfhi        $t2
    ctx->r10 = hi;
    // 0x802A8274: slti        $at, $t2, 0x64
    ctx->r1 = SIGNED(ctx->r10) < 0X64 ? 1 : 0;
    // 0x802A8278: beq         $at, $zero, L_802A8298
    if (ctx->r1 == 0) {
        // 0x802A827C: nop
    
            goto L_802A8298;
    }
    // 0x802A827C: nop

    // 0x802A8280: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A8284: lh          $a1, 0x552E($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X552E);
    // 0x802A8288: jal         0x802A7C08
    // 0x802A828C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_802A7C08(rdram, ctx);
        goto after_12;
    // 0x802A828C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_12:
    // 0x802A8290: b           L_802A840C
    // 0x802A8294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A840C;
    // 0x802A8294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8298:
    // 0x802A8298: lh          $a1, 0x55F2($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X55F2);
    // 0x802A829C: jal         0x802A7C08
    // 0x802A82A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_13;
    // 0x802A82A0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x802A82A4: b           L_802A840C
    // 0x802A82A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A840C;
    // 0x802A82A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A82AC: addiu       $a0, $sp, 0x2E
    ctx->r4 = ADD32(ctx->r29, 0X2E);
L_802A82B0:
    // 0x802A82B0: jal         0x802A7AF8
    // 0x802A82B4: addiu       $a1, $sp, 0x2A
    ctx->r5 = ADD32(ctx->r29, 0X2A);
    func_802A7AF8(rdram, ctx);
        goto after_14;
    // 0x802A82B4: addiu       $a1, $sp, 0x2A
    ctx->r5 = ADD32(ctx->r29, 0X2A);
    after_14:
    // 0x802A82B8: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x802A82BC: jal         0x802A7B80
    // 0x802A82C0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_802A7B80(rdram, ctx);
        goto after_15;
    // 0x802A82C0: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_15:
    // 0x802A82C4: lh          $a0, 0x2A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X2A);
    // 0x802A82C8: lh          $a1, 0x28($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X28);
    // 0x802A82CC: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802A82D0: subu        $v0, $a0, $a1
    ctx->r2 = SUB32(ctx->r4, ctx->r5);
    // 0x802A82D4: bgez        $v0, L_802A82EC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802A82D8: sll         $v1, $v0, 16
        ctx->r3 = S32(ctx->r2 << 16);
            goto L_802A82EC;
    }
    // 0x802A82D8: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x802A82DC: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
    // 0x802A82E0: sll         $t3, $v1, 16
    ctx->r11 = S32(ctx->r3 << 16);
    // 0x802A82E4: b           L_802A82F4
    // 0x802A82E8: sra         $v1, $t3, 16
    ctx->r3 = S32(SIGNED(ctx->r11) >> 16);
        goto L_802A82F4;
    // 0x802A82E8: sra         $v1, $t3, 16
    ctx->r3 = S32(SIGNED(ctx->r11) >> 16);
L_802A82EC:
    // 0x802A82EC: sra         $t5, $v1, 16
    ctx->r13 = S32(SIGNED(ctx->r3) >> 16);
    // 0x802A82F0: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_802A82F4:
    // 0x802A82F4: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802A82F8: bne         $at, $zero, L_802A8358
    if (ctx->r1 != 0) {
        // 0x802A82FC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_802A8358;
    }
    // 0x802A82FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802A8300: lh          $a1, 0x2E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2E);
    // 0x802A8304: lh          $t6, 0x55F2($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X55F2);
    // 0x802A8308: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802A830C: bne         $a1, $t6, L_802A8340
    if (ctx->r5 != ctx->r14) {
        // 0x802A8310: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_802A8340;
    }
    // 0x802A8310: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x802A8314: bne         $v1, $at, L_802A8330
    if (ctx->r3 != ctx->r1) {
        // 0x802A8318: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_802A8330;
    }
    // 0x802A8318: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x802A831C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802A8320: jal         0x802A7C08
    // 0x802A8324: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_16;
    // 0x802A8324: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
    // 0x802A8328: b           L_802A840C
    // 0x802A832C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A840C;
    // 0x802A832C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8330:
    // 0x802A8330: jal         0x802A7C08
    // 0x802A8334: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_17;
    // 0x802A8334: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_17:
    // 0x802A8338: b           L_802A840C
    // 0x802A833C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A840C;
    // 0x802A833C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8340:
    // 0x802A8340: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    // 0x802A8344: jal         0x802A7C08
    // 0x802A8348: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_18;
    // 0x802A8348: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_18:
    // 0x802A834C: b           L_802A840C
    // 0x802A8350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A840C;
    // 0x802A8350: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A8354: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_802A8358:
    // 0x802A8358: bne         $v1, $at, L_802A839C
    if (ctx->r3 != ctx->r1) {
        // 0x802A835C: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_802A839C;
    }
    // 0x802A835C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A8360: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802A8364: lh          $a1, 0x2E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2E);
    // 0x802A8368: lh          $t7, 0x55F2($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X55F2);
    // 0x802A836C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802A8370: bne         $a1, $t7, L_802A8388
    if (ctx->r5 != ctx->r15) {
        // 0x802A8374: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_802A8388;
    }
    // 0x802A8374: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x802A8378: jal         0x802A7C08
    // 0x802A837C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_802A7C08(rdram, ctx);
        goto after_19;
    // 0x802A837C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_19:
    // 0x802A8380: b           L_802A840C
    // 0x802A8384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A840C;
    // 0x802A8384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8388:
    // 0x802A8388: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    // 0x802A838C: jal         0x802A7C08
    // 0x802A8390: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_20;
    // 0x802A8390: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_20:
    // 0x802A8394: b           L_802A840C
    // 0x802A8398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A840C;
    // 0x802A8398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A839C:
    // 0x802A839C: lh          $v0, 0x4FD0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4FD0);
    // 0x802A83A0: nop

    // 0x802A83A4: sra         $t8, $v0, 1
    ctx->r24 = S32(SIGNED(ctx->r2) >> 1);
    // 0x802A83A8: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x802A83AC: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802A83B0: blez        $t0, L_802A83F0
    if (SIGNED(ctx->r8) <= 0) {
        // 0x802A83B4: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_802A83F0;
    }
    // 0x802A83B4: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x802A83B8: slti        $at, $t0, 0x6
    ctx->r1 = SIGNED(ctx->r8) < 0X6 ? 1 : 0;
    // 0x802A83BC: beq         $at, $zero, L_802A83F0
    if (ctx->r1 == 0) {
        // 0x802A83C0: addu        $t1, $a0, $a1
        ctx->r9 = ADD32(ctx->r4, ctx->r5);
            goto L_802A83F0;
    }
    // 0x802A83C0: addu        $t1, $a0, $a1
    ctx->r9 = ADD32(ctx->r4, ctx->r5);
    // 0x802A83C4: bne         $t1, $zero, L_802A83F0
    if (ctx->r9 != 0) {
        // 0x802A83C8: lui         $t2, 0x802C
        ctx->r10 = S32(0X802C << 16);
            goto L_802A83F0;
    }
    // 0x802A83C8: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802A83CC: lw          $t2, 0x50D8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X50D8);
    // 0x802A83D0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802A83D4: beq         $t2, $at, L_802A83F0
    if (ctx->r10 == ctx->r1) {
        // 0x802A83D8: addiu       $a0, $zero, 0x7
        ctx->r4 = ADD32(0, 0X7);
            goto L_802A83F0;
    }
    // 0x802A83D8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x802A83DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A83E0: jal         0x802A7C08
    // 0x802A83E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_21;
    // 0x802A83E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_21:
    // 0x802A83E8: b           L_802A840C
    // 0x802A83EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A840C;
    // 0x802A83EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A83F0:
    // 0x802A83F0: slti        $at, $v0, 0x6
    ctx->r1 = SIGNED(ctx->r2) < 0X6 ? 1 : 0;
    // 0x802A83F4: bne         $at, $zero, L_802A8408
    if (ctx->r1 != 0) {
        // 0x802A83F8: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_802A8408;
    }
    // 0x802A83F8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x802A83FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A8400: jal         0x802A7C08
    // 0x802A8404: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_22;
    // 0x802A8404: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_22:
L_802A8408:
    // 0x802A8408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A840C:
    // 0x802A840C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802A8410: jr          $ra
    // 0x802A8414: nop

    return;
    // 0x802A8414: nop

;}
RECOMP_FUNC void func_802A8418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8418: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802A841C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A8420: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x802A8424: jal         0x802A7AF8
    // 0x802A8428: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_802A7AF8(rdram, ctx);
        goto after_0;
    // 0x802A8428: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x802A842C: addiu       $a0, $sp, 0x26
    ctx->r4 = ADD32(ctx->r29, 0X26);
    // 0x802A8430: jal         0x802A7B80
    // 0x802A8434: addiu       $a1, $sp, 0x22
    ctx->r5 = ADD32(ctx->r29, 0X22);
    func_802A7B80(rdram, ctx);
        goto after_1;
    // 0x802A8434: addiu       $a1, $sp, 0x22
    ctx->r5 = ADD32(ctx->r29, 0X22);
    after_1:
    // 0x802A8438: lh          $t6, 0x24($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X24);
    // 0x802A843C: lh          $t7, 0x22($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X22);
    // 0x802A8440: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A8444: subu        $v0, $t6, $t7
    ctx->r2 = SUB32(ctx->r14, ctx->r15);
    // 0x802A8448: bgez        $v0, L_802A8458
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802A844C: negu        $t8, $v0
        ctx->r24 = SUB32(0, ctx->r2);
            goto L_802A8458;
    }
    // 0x802A844C: negu        $t8, $v0
    ctx->r24 = SUB32(0, ctx->r2);
    // 0x802A8450: b           L_802A845C
    // 0x802A8454: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
        goto L_802A845C;
    // 0x802A8454: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_802A8458:
    // 0x802A8458: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
L_802A845C:
    // 0x802A845C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x802A8460: lh          $a1, 0x28($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X28);
    // 0x802A8464: sh          $t9, 0x4FD6($at)
    MEM_H(0X4FD6, ctx->r1) = ctx->r25;
    // 0x802A8468: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A846C: jal         0x802AFCC8
    // 0x802A8470: sh          $a1, 0x4FD8($at)
    MEM_H(0X4FD8, ctx->r1) = ctx->r5;
    func_802AFCC8(rdram, ctx);
        goto after_2;
    // 0x802A8470: sh          $a1, 0x4FD8($at)
    MEM_H(0X4FD8, ctx->r1) = ctx->r5;
    after_2:
    // 0x802A8474: beq         $v0, $zero, L_802A84A0
    if (ctx->r2 == 0) {
        // 0x802A8478: addiu       $a0, $zero, 0x24
        ctx->r4 = ADD32(0, 0X24);
            goto L_802A84A0;
    }
    // 0x802A8478: addiu       $a0, $zero, 0x24
    ctx->r4 = ADD32(0, 0X24);
    // 0x802A847C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A8480: jal         0x802A7C08
    // 0x802A8484: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_3;
    // 0x802A8484: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x802A8488: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x802A848C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A8490: jal         0x802A7C08
    // 0x802A8494: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_4;
    // 0x802A8494: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x802A8498: b           L_802A86AC
    // 0x802A849C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A86AC;
    // 0x802A849C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A84A0:
    // 0x802A84A0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A84A4: lh          $v0, 0x4FD0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4FD0);
    // 0x802A84A8: nop

    // 0x802A84AC: sra         $t0, $v0, 1
    ctx->r8 = S32(SIGNED(ctx->r2) >> 1);
    // 0x802A84B0: slti        $at, $t0, 0x5
    ctx->r1 = SIGNED(ctx->r8) < 0X5 ? 1 : 0;
    // 0x802A84B4: bne         $at, $zero, L_802A8514
    if (ctx->r1 != 0) {
        // 0x802A84B8: or          $v0, $t0, $zero
        ctx->r2 = ctx->r8 | 0;
            goto L_802A8514;
    }
    // 0x802A84B8: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x802A84BC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802A84C0: bne         $t0, $at, L_802A84DC
    if (ctx->r8 != ctx->r1) {
        // 0x802A84C4: addiu       $a0, $zero, 0x25
        ctx->r4 = ADD32(0, 0X25);
            goto L_802A84DC;
    }
    // 0x802A84C4: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x802A84C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A84CC: jal         0x802A7C08
    // 0x802A84D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_5;
    // 0x802A84D0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x802A84D4: b           L_802A8560
    // 0x802A84D8: nop

        goto L_802A8560;
    // 0x802A84D8: nop

L_802A84DC:
    // 0x802A84DC: jal         0x80087D40
    // 0x802A84E0: nop

    func_80087D40(rdram, ctx);
        goto after_6;
    // 0x802A84E0: nop

    after_6:
    // 0x802A84E4: addiu       $at, $zero, 0x190
    ctx->r1 = ADD32(0, 0X190);
    // 0x802A84E8: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802A84EC: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x802A84F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A84F4: mfhi        $t1
    ctx->r9 = hi;
    // 0x802A84F8: slti        $at, $t1, 0x8C
    ctx->r1 = SIGNED(ctx->r9) < 0X8C ? 1 : 0;
    // 0x802A84FC: beq         $at, $zero, L_802A8560
    if (ctx->r1 == 0) {
        // 0x802A8500: nop
    
            goto L_802A8560;
    }
    // 0x802A8500: nop

    // 0x802A8504: jal         0x802A7C08
    // 0x802A8508: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_7;
    // 0x802A8508: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x802A850C: b           L_802A8560
    // 0x802A8510: nop

        goto L_802A8560;
    // 0x802A8510: nop

L_802A8514:
    // 0x802A8514: bne         $v0, $zero, L_802A8530
    if (ctx->r2 != 0) {
        // 0x802A8518: addiu       $a0, $zero, 0x25
        ctx->r4 = ADD32(0, 0X25);
            goto L_802A8530;
    }
    // 0x802A8518: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x802A851C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A8520: jal         0x802A7C08
    // 0x802A8524: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_8;
    // 0x802A8524: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x802A8528: b           L_802A8560
    // 0x802A852C: nop

        goto L_802A8560;
    // 0x802A852C: nop

L_802A8530:
    // 0x802A8530: jal         0x80087D40
    // 0x802A8534: nop

    func_80087D40(rdram, ctx);
        goto after_9;
    // 0x802A8534: nop

    after_9:
    // 0x802A8538: addiu       $at, $zero, 0x190
    ctx->r1 = ADD32(0, 0X190);
    // 0x802A853C: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x802A8540: addiu       $a0, $zero, 0x25
    ctx->r4 = ADD32(0, 0X25);
    // 0x802A8544: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A8548: mfhi        $t2
    ctx->r10 = hi;
    // 0x802A854C: slti        $at, $t2, 0x8C
    ctx->r1 = SIGNED(ctx->r10) < 0X8C ? 1 : 0;
    // 0x802A8550: beq         $at, $zero, L_802A8560
    if (ctx->r1 == 0) {
        // 0x802A8554: nop
    
            goto L_802A8560;
    }
    // 0x802A8554: nop

    // 0x802A8558: jal         0x802A7C08
    // 0x802A855C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_10;
    // 0x802A855C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
L_802A8560:
    // 0x802A8560: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x802A8564: lh          $t3, 0x4FD0($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X4FD0);
    // 0x802A8568: lh          $v0, 0x1E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1E);
    // 0x802A856C: sra         $t4, $t3, 1
    ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
    // 0x802A8570: slti        $at, $t4, 0x2
    ctx->r1 = SIGNED(ctx->r12) < 0X2 ? 1 : 0;
    // 0x802A8574: bne         $at, $zero, L_802A8690
    if (ctx->r1 != 0) {
        // 0x802A8578: lui         $a1, 0x802C
        ctx->r5 = S32(0X802C << 16);
            goto L_802A8690;
    }
    // 0x802A8578: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A857C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802A8580: bne         $v0, $at, L_802A860C
    if (ctx->r2 != ctx->r1) {
        // 0x802A8584: nop
    
            goto L_802A860C;
    }
    // 0x802A8584: nop

    // 0x802A8588: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A858C: addiu       $v0, $v0, 0x4FD4
    ctx->r2 = ADD32(ctx->r2, 0X4FD4);
    // 0x802A8590: lh          $a1, 0x28($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X28);
    // 0x802A8594: lh          $t5, 0x0($v0)
    ctx->r13 = MEM_H(ctx->r2, 0X0);
    // 0x802A8598: lh          $a3, 0x26($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X26);
    // 0x802A859C: bne         $a1, $t5, L_802A85C0
    if (ctx->r5 != ctx->r13) {
        // 0x802A85A0: lui         $t7, 0x802C
        ctx->r15 = S32(0X802C << 16);
            goto L_802A85C0;
    }
    // 0x802A85A0: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802A85A4: sll         $a2, $a1, 16
    ctx->r6 = S32(ctx->r5 << 16);
    // 0x802A85A8: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A85AC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x802A85B0: jal         0x802A7C08
    // 0x802A85B4: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    func_802A7C08(rdram, ctx);
        goto after_11;
    // 0x802A85B4: addiu       $a0, $zero, 0x15
    ctx->r4 = ADD32(0, 0X15);
    after_11:
    // 0x802A85B8: b           L_802A86AC
    // 0x802A85BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A86AC;
    // 0x802A85BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A85C0:
    // 0x802A85C0: lh          $t7, 0x55F2($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X55F2);
    // 0x802A85C4: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x802A85C8: bne         $a3, $t7, L_802A85F8
    if (ctx->r7 != ctx->r15) {
        // 0x802A85CC: sll         $a2, $a1, 16
        ctx->r6 = S32(ctx->r5 << 16);
            goto L_802A85F8;
    }
    // 0x802A85CC: sll         $a2, $a1, 16
    ctx->r6 = S32(ctx->r5 << 16);
    // 0x802A85D0: sll         $a1, $a3, 16
    ctx->r5 = S32(ctx->r7 << 16);
    // 0x802A85D4: sll         $a2, $a3, 16
    ctx->r6 = S32(ctx->r7 << 16);
    // 0x802A85D8: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A85DC: sra         $t8, $a1, 16
    ctx->r24 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802A85E0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x802A85E4: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x802A85E8: jal         0x802A7C08
    // 0x802A85EC: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    func_802A7C08(rdram, ctx);
        goto after_12;
    // 0x802A85EC: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_12:
    // 0x802A85F0: b           L_802A86AC
    // 0x802A85F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A86AC;
    // 0x802A85F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A85F8:
    // 0x802A85F8: sra         $t0, $a2, 16
    ctx->r8 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A85FC: jal         0x802A7C08
    // 0x802A8600: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    func_802A7C08(rdram, ctx);
        goto after_13;
    // 0x802A8600: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    after_13:
    // 0x802A8604: b           L_802A86AC
    // 0x802A8608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A86AC;
    // 0x802A8608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A860C:
    // 0x802A860C: bne         $v0, $zero, L_802A8648
    if (ctx->r2 != 0) {
        // 0x802A8610: lui         $a1, 0x802C
        ctx->r5 = S32(0X802C << 16);
            goto L_802A8648;
    }
    // 0x802A8610: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A8614: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802A8618: lh          $t1, 0x55F2($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X55F2);
    // 0x802A861C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A8620: addiu       $v0, $v0, 0x4FD4
    ctx->r2 = ADD32(ctx->r2, 0X4FD4);
    // 0x802A8624: sh          $t1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r9;
    // 0x802A8628: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x802A862C: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    // 0x802A8630: sll         $a2, $a1, 16
    ctx->r6 = S32(ctx->r5 << 16);
    // 0x802A8634: sra         $t2, $a2, 16
    ctx->r10 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A8638: jal         0x802A7C08
    // 0x802A863C: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    func_802A7C08(rdram, ctx);
        goto after_14;
    // 0x802A863C: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_14:
    // 0x802A8640: b           L_802A86AC
    // 0x802A8644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A86AC;
    // 0x802A8644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8648:
    // 0x802A8648: lh          $a3, 0x26($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X26);
    // 0x802A864C: lh          $a1, 0x55F2($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X55F2);
    // 0x802A8650: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x802A8654: bne         $a3, $a1, L_802A8670
    if (ctx->r7 != ctx->r5) {
        // 0x802A8658: sll         $a2, $a1, 16
        ctx->r6 = S32(ctx->r5 << 16);
            goto L_802A8670;
    }
    // 0x802A8658: sll         $a2, $a1, 16
    ctx->r6 = S32(ctx->r5 << 16);
    // 0x802A865C: sra         $t3, $a2, 16
    ctx->r11 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A8660: jal         0x802A7C08
    // 0x802A8664: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    func_802A7C08(rdram, ctx);
        goto after_15;
    // 0x802A8664: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    after_15:
    // 0x802A8668: b           L_802A86AC
    // 0x802A866C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A86AC;
    // 0x802A866C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8670:
    // 0x802A8670: lh          $a1, 0x28($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X28);
    // 0x802A8674: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x802A8678: sll         $a2, $a1, 16
    ctx->r6 = S32(ctx->r5 << 16);
    // 0x802A867C: sra         $t4, $a2, 16
    ctx->r12 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A8680: jal         0x802A7C08
    // 0x802A8684: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    func_802A7C08(rdram, ctx);
        goto after_16;
    // 0x802A8684: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    after_16:
    // 0x802A8688: b           L_802A86AC
    // 0x802A868C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A86AC;
    // 0x802A868C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8690:
    // 0x802A8690: lh          $a1, 0x55F2($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X55F2);
    // 0x802A8694: addiu       $a0, $zero, 0x12
    ctx->r4 = ADD32(0, 0X12);
    // 0x802A8698: sll         $a2, $a1, 16
    ctx->r6 = S32(ctx->r5 << 16);
    // 0x802A869C: sra         $t5, $a2, 16
    ctx->r13 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A86A0: jal         0x802A7C08
    // 0x802A86A4: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    func_802A7C08(rdram, ctx);
        goto after_17;
    // 0x802A86A4: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    after_17:
    // 0x802A86A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A86AC:
    // 0x802A86AC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802A86B0: jr          $ra
    // 0x802A86B4: nop

    return;
    // 0x802A86B4: nop

;}
RECOMP_FUNC void func_802A86B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A86B8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A86BC: addiu       $a1, $a1, 0x53F8
    ctx->r5 = ADD32(ctx->r5, 0X53F8);
    // 0x802A86C0: lw          $t6, 0x14($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X14);
    // 0x802A86C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A86C8: beq         $t6, $zero, L_802A8908
    if (ctx->r14 == 0) {
        // 0x802A86CC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802A8908;
    }
    // 0x802A86CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A86D0: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802A86D4: addiu       $a0, $a0, 0x5648
    ctx->r4 = ADD32(ctx->r4, 0X5648);
    // 0x802A86D8: lwc1        $f12, 0x1C($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x802A86DC: lwc1        $f14, 0x20($a0)
    ctx->f14.u32l = MEM_W(ctx->r4, 0X20);
    // 0x802A86E0: jal         0x802AE140
    // 0x802A86E4: nop

    func_802AE140(rdram, ctx);
        goto after_0;
    // 0x802A86E4: nop

    after_0:
    // 0x802A86E8: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802A86EC: addiu       $a3, $a3, 0x54B8
    ctx->r7 = ADD32(ctx->r7, 0X54B8);
    // 0x802A86F0: lw          $v1, 0x8($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X8);
    // 0x802A86F4: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802A86F8: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A86FC: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x802A8700: addiu       $a1, $a1, 0x53F8
    ctx->r5 = ADD32(ctx->r5, 0X53F8);
    // 0x802A8704: beq         $v1, $at, L_802A8718
    if (ctx->r3 == ctx->r1) {
        // 0x802A8708: addiu       $a0, $a0, 0x5648
        ctx->r4 = ADD32(ctx->r4, 0X5648);
            goto L_802A8718;
    }
    // 0x802A8708: addiu       $a0, $a0, 0x5648
    ctx->r4 = ADD32(ctx->r4, 0X5648);
    // 0x802A870C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x802A8710: bne         $a2, $v1, L_802A8770
    if (ctx->r6 != ctx->r3) {
        // 0x802A8714: nop
    
            goto L_802A8770;
    }
    // 0x802A8714: nop

L_802A8718:
    // 0x802A8718: lw          $t7, 0x18($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X18);
    // 0x802A871C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802A8720: bne         $t7, $at, L_802A8770
    if (ctx->r15 != ctx->r1) {
        // 0x802A8724: addiu       $a2, $zero, 0x6
        ctx->r6 = ADD32(0, 0X6);
            goto L_802A8770;
    }
    // 0x802A8724: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x802A8728: beq         $v0, $zero, L_802A8748
    if (ctx->r2 == 0) {
        // 0x802A872C: addiu       $a0, $zero, 0x20
        ctx->r4 = ADD32(0, 0X20);
            goto L_802A8748;
    }
    // 0x802A872C: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x802A8730: beq         $v0, $a2, L_802A8748
    if (ctx->r2 == ctx->r6) {
        // 0x802A8734: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_802A8748;
    }
    // 0x802A8734: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802A8738: beq         $v0, $at, L_802A8748
    if (ctx->r2 == ctx->r1) {
        // 0x802A873C: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_802A8748;
    }
    // 0x802A873C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x802A8740: bne         $v0, $at, L_802A875C
    if (ctx->r2 != ctx->r1) {
        // 0x802A8744: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_802A875C;
    }
    // 0x802A8744: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_802A8748:
    // 0x802A8748: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A874C: jal         0x802A7C08
    // 0x802A8750: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_1;
    // 0x802A8750: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x802A8754: b           L_802A890C
    // 0x802A8758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A890C;
    // 0x802A8758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A875C:
    // 0x802A875C: lh          $a1, 0x76($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X76);
    // 0x802A8760: jal         0x802A7C08
    // 0x802A8764: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_802A7C08(rdram, ctx);
        goto after_2;
    // 0x802A8764: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_2:
    // 0x802A8768: b           L_802A890C
    // 0x802A876C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A890C;
    // 0x802A876C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8770:
    // 0x802A8770: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x802A8774: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802A8778: beq         $v1, $zero, L_802A87A4
    if (ctx->r3 == 0) {
        // 0x802A877C: nop
    
            goto L_802A87A4;
    }
    // 0x802A877C: nop

    // 0x802A8780: beq         $v1, $at, L_802A87EC
    if (ctx->r3 == ctx->r1) {
        // 0x802A8784: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_802A87EC;
    }
    // 0x802A8784: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802A8788: beq         $v1, $at, L_802A8834
    if (ctx->r3 == ctx->r1) {
        // 0x802A878C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_802A8834;
    }
    // 0x802A878C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802A8790: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802A8794: beq         $v1, $at, L_802A884C
    if (ctx->r3 == ctx->r1) {
        // 0x802A8798: lui         $at, 0x41D0
        ctx->r1 = S32(0X41D0 << 16);
            goto L_802A884C;
    }
    // 0x802A8798: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x802A879C: b           L_802A890C
    // 0x802A87A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A890C;
    // 0x802A87A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A87A4:
    // 0x802A87A4: beq         $v0, $zero, L_802A87C4
    if (ctx->r2 == 0) {
        // 0x802A87A8: addiu       $a0, $zero, 0x20
        ctx->r4 = ADD32(0, 0X20);
            goto L_802A87C4;
    }
    // 0x802A87A8: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x802A87AC: beq         $v0, $a2, L_802A87C4
    if (ctx->r2 == ctx->r6) {
        // 0x802A87B0: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_802A87C4;
    }
    // 0x802A87B0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802A87B4: beq         $v0, $at, L_802A87C4
    if (ctx->r2 == ctx->r1) {
        // 0x802A87B8: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_802A87C4;
    }
    // 0x802A87B8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x802A87BC: bne         $v0, $at, L_802A87D8
    if (ctx->r2 != ctx->r1) {
        // 0x802A87C0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_802A87D8;
    }
    // 0x802A87C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_802A87C4:
    // 0x802A87C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A87C8: jal         0x802A7C08
    // 0x802A87CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_3;
    // 0x802A87CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x802A87D0: b           L_802A890C
    // 0x802A87D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A890C;
    // 0x802A87D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A87D8:
    // 0x802A87D8: lh          $a1, 0x76($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X76);
    // 0x802A87DC: jal         0x802A7C08
    // 0x802A87E0: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    func_802A7C08(rdram, ctx);
        goto after_4;
    // 0x802A87E0: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_4:
    // 0x802A87E4: b           L_802A890C
    // 0x802A87E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A890C;
    // 0x802A87E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A87EC:
    // 0x802A87EC: beq         $v0, $zero, L_802A880C
    if (ctx->r2 == 0) {
        // 0x802A87F0: addiu       $a0, $zero, 0x20
        ctx->r4 = ADD32(0, 0X20);
            goto L_802A880C;
    }
    // 0x802A87F0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x802A87F4: beq         $v0, $a2, L_802A880C
    if (ctx->r2 == ctx->r6) {
        // 0x802A87F8: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_802A880C;
    }
    // 0x802A87F8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802A87FC: beq         $v0, $at, L_802A880C
    if (ctx->r2 == ctx->r1) {
        // 0x802A8800: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_802A880C;
    }
    // 0x802A8800: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x802A8804: bne         $v0, $at, L_802A8820
    if (ctx->r2 != ctx->r1) {
        // 0x802A8808: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_802A8820;
    }
    // 0x802A8808: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_802A880C:
    // 0x802A880C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A8810: jal         0x802A7C08
    // 0x802A8814: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_5;
    // 0x802A8814: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x802A8818: b           L_802A890C
    // 0x802A881C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A890C;
    // 0x802A881C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8820:
    // 0x802A8820: lh          $a1, 0x76($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X76);
    // 0x802A8824: jal         0x802A7C08
    // 0x802A8828: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_802A7C08(rdram, ctx);
        goto after_6;
    // 0x802A8828: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_6:
    // 0x802A882C: b           L_802A890C
    // 0x802A8830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A890C;
    // 0x802A8830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8834:
    // 0x802A8834: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x802A8838: jal         0x802A7C08
    // 0x802A883C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_7;
    // 0x802A883C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x802A8840: b           L_802A890C
    // 0x802A8844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A890C;
    // 0x802A8844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A8848: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
L_802A884C:
    // 0x802A884C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A8850: lwc1        $f6, 0x20($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X20);
    // 0x802A8854: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802A8858: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802A885C: nop

    // 0x802A8860: bc1f        L_802A887C
    if (!c1cs) {
        // 0x802A8864: nop
    
            goto L_802A887C;
    }
    // 0x802A8864: nop

    // 0x802A8868: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x802A886C: jal         0x802A7C08
    // 0x802A8870: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_8;
    // 0x802A8870: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x802A8874: b           L_802A890C
    // 0x802A8878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A890C;
    // 0x802A8878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A887C:
    // 0x802A887C: lw          $t8, 0x10($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X10);
    // 0x802A8880: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x802A8884: beq         $t8, $zero, L_802A88D0
    if (ctx->r24 == 0) {
        // 0x802A8888: nop
    
            goto L_802A88D0;
    }
    // 0x802A8888: nop

    // 0x802A888C: lui         $at, 0xC218
    ctx->r1 = S32(0XC218 << 16);
    // 0x802A8890: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802A8894: lwc1        $f8, 0x1C($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x802A8898: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802A889C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802A88A0: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    // 0x802A88A4: bc1f        L_802A88C0
    if (!c1cs) {
        // 0x802A88A8: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802A88C0;
    }
    // 0x802A88A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A88AC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x802A88B0: jal         0x802A7C08
    // 0x802A88B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_9;
    // 0x802A88B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x802A88B8: b           L_802A890C
    // 0x802A88BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A890C;
    // 0x802A88BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A88C0:
    // 0x802A88C0: jal         0x802A7C08
    // 0x802A88C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_10;
    // 0x802A88C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x802A88C8: b           L_802A890C
    // 0x802A88CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A890C;
    // 0x802A88CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A88D0:
    // 0x802A88D0: lwc1        $f16, 0x1C($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x802A88D4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802A88D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802A88DC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x802A88E0: addiu       $a0, $zero, 0x1D
    ctx->r4 = ADD32(0, 0X1D);
    // 0x802A88E4: bc1f        L_802A8900
    if (!c1cs) {
        // 0x802A88E8: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_802A8900;
    }
    // 0x802A88E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802A88EC: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    // 0x802A88F0: jal         0x802A7C08
    // 0x802A88F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_11;
    // 0x802A88F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x802A88F8: b           L_802A890C
    // 0x802A88FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A890C;
    // 0x802A88FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8900:
    // 0x802A8900: jal         0x802A7C08
    // 0x802A8904: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_12;
    // 0x802A8904: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
L_802A8908:
    // 0x802A8908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A890C:
    // 0x802A890C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A8910: jr          $ra
    // 0x802A8914: nop

    return;
    // 0x802A8914: nop

;}
RECOMP_FUNC void func_802A8918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8918: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802A891C: lh          $t6, 0x4FD6($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4FD6);
    // 0x802A8920: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A8924: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x802A8928: bne         $at, $zero, L_802A8954
    if (ctx->r1 != 0) {
        // 0x802A892C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802A8954;
    }
    // 0x802A892C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A8930: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A8934: lh          $a1, 0x4FD8($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X4FD8);
    // 0x802A8938: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    // 0x802A893C: sll         $a2, $a1, 16
    ctx->r6 = S32(ctx->r5 << 16);
    // 0x802A8940: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A8944: jal         0x802A7C08
    // 0x802A8948: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    func_802A7C08(rdram, ctx);
        goto after_0;
    // 0x802A8948: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    after_0:
    // 0x802A894C: b           L_802A8974
    // 0x802A8950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A8974;
    // 0x802A8950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8954:
    // 0x802A8954: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A8958: lh          $a1, 0x4FD8($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X4FD8);
    // 0x802A895C: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    // 0x802A8960: sll         $a2, $a1, 16
    ctx->r6 = S32(ctx->r5 << 16);
    // 0x802A8964: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A8968: jal         0x802A7C08
    // 0x802A896C: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    func_802A7C08(rdram, ctx);
        goto after_1;
    // 0x802A896C: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    after_1:
    // 0x802A8970: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8974:
    // 0x802A8974: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A8978: jr          $ra
    // 0x802A897C: nop

    return;
    // 0x802A897C: nop

;}
RECOMP_FUNC void func_802A8980(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8980: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A8984: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802A8988: lh          $t6, 0x4FD8($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4FD8);
    // 0x802A898C: lh          $a1, 0x55F2($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X55F2);
    // 0x802A8990: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A8994: beq         $t6, $a1, L_802A89B0
    if (ctx->r14 == ctx->r5) {
        // 0x802A8998: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802A89B0;
    }
    // 0x802A8998: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A899C: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x802A89A0: jal         0x802A7C08
    // 0x802A89A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_0;
    // 0x802A89A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x802A89A8: b           L_802A89C8
    // 0x802A89AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A89C8;
    // 0x802A89AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A89B0:
    // 0x802A89B0: lui         $a1, 0x802C
    ctx->r5 = S32(0X802C << 16);
    // 0x802A89B4: lh          $a1, 0x552E($a1)
    ctx->r5 = MEM_H(ctx->r5, 0X552E);
    // 0x802A89B8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    // 0x802A89BC: jal         0x802A7C08
    // 0x802A89C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_802A7C08(rdram, ctx);
        goto after_1;
    // 0x802A89C0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x802A89C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A89C8:
    // 0x802A89C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A89CC: jr          $ra
    // 0x802A89D0: nop

    return;
    // 0x802A89D0: nop

;}
RECOMP_FUNC void func_802A89D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A89D4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x802A89D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802A89DC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802A89E0: sll         $t9, $t6, 2
    ctx->r25 = S32(ctx->r14 << 2);
    // 0x802A89E4: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x802A89E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802A89EC: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802A89F0: ori         $at, $at, 0x89A8
    ctx->r1 = ctx->r1 | 0X89A8;
    // 0x802A89F4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802A89F8: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x802A89FC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x802A8A00: lui         $t1, 0x800E
    ctx->r9 = S32(0X800E << 16);
    // 0x802A8A04: addiu       $t1, $t1, -0x3770
    ctx->r9 = ADD32(ctx->r9, -0X3770);
    // 0x802A8A08: addiu       $t8, $t8, 0x358
    ctx->r24 = ADD32(ctx->r24, 0X358);
    // 0x802A8A0C: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x802A8A10: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802A8A14: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x802A8A18: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x802A8A1C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A8A20: sw          $t2, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r10;
    // 0x802A8A24: lhu         $t3, 0x0($a1)
    ctx->r11 = MEM_HU(ctx->r5, 0X0);
    // 0x802A8A28: nop

    // 0x802A8A2C: sh          $t3, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r11;
    // 0x802A8A30: lhu         $t4, 0x2($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X2);
    // 0x802A8A34: nop

    // 0x802A8A38: sh          $t4, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r12;
    // 0x802A8A3C: lhu         $t5, 0x4($a1)
    ctx->r13 = MEM_HU(ctx->r5, 0X4);
    // 0x802A8A40: nop

    // 0x802A8A44: sh          $t5, 0xE($v0)
    MEM_H(0XE, ctx->r2) = ctx->r13;
    // 0x802A8A48: lhu         $t6, 0x6($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X6);
    // 0x802A8A4C: nop

    // 0x802A8A50: sh          $t6, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r14;
    // 0x802A8A54: lhu         $t7, 0x8($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X8);
    // 0x802A8A58: nop

    // 0x802A8A5C: sh          $t7, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r15;
    // 0x802A8A60: lhu         $t8, 0xA($a1)
    ctx->r24 = MEM_HU(ctx->r5, 0XA);
    // 0x802A8A64: jr          $ra
    // 0x802A8A68: sh          $t8, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r24;
    return;
    // 0x802A8A68: sh          $t8, 0x14($v0)
    MEM_H(0X14, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_802A8A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8A6C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802A8A70: lbu         $t6, -0x3268($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X3268);
    // 0x802A8A74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A8A78: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802A8A7C: lui         $t8, 0x802C
    ctx->r24 = S32(0X802C << 16);
    // 0x802A8A80: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802A8A84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A8A88: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802A8A8C: addiu       $t8, $t8, -0x1CB0
    ctx->r24 = ADD32(ctx->r24, -0X1CB0);
    // 0x802A8A90: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x802A8A94: jal         0x802A89D4
    // 0x802A8A98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_802A89D4(rdram, ctx);
        goto after_0;
    // 0x802A8A98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x802A8A9C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x802A8AA0: lbu         $t9, -0x3267($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X3267);
    // 0x802A8AA4: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802A8AA8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x802A8AAC: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x802A8AB0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x802A8AB4: addiu       $t1, $t1, -0x1CB0
    ctx->r9 = ADD32(ctx->r9, -0X1CB0);
    // 0x802A8AB8: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    // 0x802A8ABC: jal         0x802A89D4
    // 0x802A8AC0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_802A89D4(rdram, ctx);
        goto after_1;
    // 0x802A8AC0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x802A8AC4: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x802A8AC8: lbu         $t2, -0x3266($t2)
    ctx->r10 = MEM_BU(ctx->r10, -0X3266);
    // 0x802A8ACC: lui         $t4, 0x802C
    ctx->r12 = S32(0X802C << 16);
    // 0x802A8AD0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x802A8AD4: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x802A8AD8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x802A8ADC: addiu       $t4, $t4, -0x1CB0
    ctx->r12 = ADD32(ctx->r12, -0X1CB0);
    // 0x802A8AE0: addu        $a1, $t3, $t4
    ctx->r5 = ADD32(ctx->r11, ctx->r12);
    // 0x802A8AE4: jal         0x802A89D4
    // 0x802A8AE8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_802A89D4(rdram, ctx);
        goto after_2;
    // 0x802A8AE8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x802A8AEC: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x802A8AF0: lbu         $t5, -0x3265($t5)
    ctx->r13 = MEM_BU(ctx->r13, -0X3265);
    // 0x802A8AF4: lui         $t7, 0x802C
    ctx->r15 = S32(0X802C << 16);
    // 0x802A8AF8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x802A8AFC: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x802A8B00: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x802A8B04: addiu       $t7, $t7, -0x1CB0
    ctx->r15 = ADD32(ctx->r15, -0X1CB0);
    // 0x802A8B08: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x802A8B0C: jal         0x802A89D4
    // 0x802A8B10: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_802A89D4(rdram, ctx);
        goto after_3;
    // 0x802A8B10: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_3:
    // 0x802A8B14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A8B18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A8B1C: jr          $ra
    // 0x802A8B20: nop

    return;
    // 0x802A8B20: nop

;}
RECOMP_FUNC void func_802A8B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8B24: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802A8B28: lw          $t6, 0x55E8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X55E8);
    // 0x802A8B2C: nop

    // 0x802A8B30: lh          $v1, 0x2($t6)
    ctx->r3 = MEM_H(ctx->r14, 0X2);
    // 0x802A8B34: nop

    // 0x802A8B38: andi        $t7, $v1, 0x1
    ctx->r15 = ctx->r3 & 0X1;
    // 0x802A8B3C: andi        $t8, $v1, 0x4
    ctx->r24 = ctx->r3 & 0X4;
    // 0x802A8B40: jr          $ra
    // 0x802A8B44: or          $v0, $t7, $t8
    ctx->r2 = ctx->r15 | ctx->r24;
    return;
    // 0x802A8B44: or          $v0, $t7, $t8
    ctx->r2 = ctx->r15 | ctx->r24;
;}
RECOMP_FUNC void func_802A8B48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8B48: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802A8B4C: lw          $t6, 0x55E8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X55E8);
    // 0x802A8B50: nop

    // 0x802A8B54: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    // 0x802A8B58: nop

    // 0x802A8B5C: andi        $t7, $v0, 0x8
    ctx->r15 = ctx->r2 & 0X8;
    // 0x802A8B60: jr          $ra
    // 0x802A8B64: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
    return;
    // 0x802A8B64: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
;}
RECOMP_FUNC void func_802A8B68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8B68: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802A8B6C: lbu         $t6, -0x32A4($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X32A4);
    // 0x802A8B70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A8B74: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802A8B78: bne         $t6, $at, L_802A8B90
    if (ctx->r14 != ctx->r1) {
        // 0x802A8B7C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802A8B90;
    }
    // 0x802A8B7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A8B80: jal         0x80036DC0
    // 0x802A8B84: nop

    func_80036DC0(rdram, ctx);
        goto after_0;
    // 0x802A8B84: nop

    after_0:
    // 0x802A8B88: b           L_802A8B9C
    // 0x802A8B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A8B9C;
    // 0x802A8B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8B90:
    // 0x802A8B90: jal         0x80036C78
    // 0x802A8B94: nop

    func_80036C78(rdram, ctx);
        goto after_1;
    // 0x802A8B94: nop

    after_1:
    // 0x802A8B98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8B9C:
    // 0x802A8B9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A8BA0: jr          $ra
    // 0x802A8BA4: nop

    return;
    // 0x802A8BA4: nop

;}
RECOMP_FUNC void func_802A8BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8BA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A8BAC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802A8BB0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A8BB4: lh          $v1, 0x54BE($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X54BE);
    // 0x802A8BB8: lh          $v0, 0x55BE($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X55BE);
    // 0x802A8BBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A8BC0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802A8BC4: sh          $a0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r4;
    // 0x802A8BC8: sh          $v1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r3;
    // 0x802A8BCC: jal         0x8000E300
    // 0x802A8BD0: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    func_8000E300(rdram, ctx);
        goto after_0;
    // 0x802A8BD0: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x802A8BD4: lh          $v1, 0x1E($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1E);
    // 0x802A8BD8: lh          $v0, 0x1C($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1C);
    // 0x802A8BDC: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x802A8BE0: beq         $v1, $zero, L_802A8BF0
    if (ctx->r3 == 0) {
        // 0x802A8BE4: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_802A8BF0;
    }
    // 0x802A8BE4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802A8BE8: bne         $v1, $a1, L_802A8CB0
    if (ctx->r3 != ctx->r5) {
        // 0x802A8BEC: nop
    
            goto L_802A8CB0;
    }
    // 0x802A8BEC: nop

L_802A8BF0:
    // 0x802A8BF0: beq         $v0, $zero, L_802A8C00
    if (ctx->r2 == 0) {
        // 0x802A8BF4: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_802A8C00;
    }
    // 0x802A8BF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802A8BF8: bne         $v0, $a1, L_802A8C78
    if (ctx->r2 != ctx->r5) {
        // 0x802A8BFC: nop
    
            goto L_802A8C78;
    }
    // 0x802A8BFC: nop

L_802A8C00:
    // 0x802A8C00: bne         $a0, $zero, L_802A8C40
    if (ctx->r4 != 0) {
        // 0x802A8C04: nop
    
            goto L_802A8C40;
    }
    // 0x802A8C04: nop

    // 0x802A8C08: bne         $v1, $zero, L_802A8C28
    if (ctx->r3 != 0) {
        // 0x802A8C0C: nop
    
            goto L_802A8C28;
    }
    // 0x802A8C0C: nop

    // 0x802A8C10: jal         0x802A7878
    // 0x802A8C14: nop

    func_802A7878(rdram, ctx);
        goto after_1;
    // 0x802A8C14: nop

    after_1:
    // 0x802A8C18: jal         0x80062414
    // 0x802A8C1C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80062414(rdram, ctx);
        goto after_2;
    // 0x802A8C1C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_2:
    // 0x802A8C20: b           L_802A8D70
    // 0x802A8C24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A8D70;
    // 0x802A8C24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8C28:
    // 0x802A8C28: jal         0x802A7880
    // 0x802A8C2C: nop

    func_802A7880(rdram, ctx);
        goto after_3;
    // 0x802A8C2C: nop

    after_3:
    // 0x802A8C30: jal         0x800625BC
    // 0x802A8C34: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_800625BC(rdram, ctx);
        goto after_4;
    // 0x802A8C34: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_4:
    // 0x802A8C38: b           L_802A8D70
    // 0x802A8C3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A8D70;
    // 0x802A8C3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8C40:
    // 0x802A8C40: bne         $v0, $zero, L_802A8C60
    if (ctx->r2 != 0) {
        // 0x802A8C44: nop
    
            goto L_802A8C60;
    }
    // 0x802A8C44: nop

    // 0x802A8C48: jal         0x802A7878
    // 0x802A8C4C: nop

    func_802A7878(rdram, ctx);
        goto after_5;
    // 0x802A8C4C: nop

    after_5:
    // 0x802A8C50: jal         0x80062414
    // 0x802A8C54: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80062414(rdram, ctx);
        goto after_6;
    // 0x802A8C54: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_6:
    // 0x802A8C58: b           L_802A8D70
    // 0x802A8C5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A8D70;
    // 0x802A8C5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8C60:
    // 0x802A8C60: jal         0x802A7880
    // 0x802A8C64: nop

    func_802A7880(rdram, ctx);
        goto after_7;
    // 0x802A8C64: nop

    after_7:
    // 0x802A8C68: jal         0x800625BC
    // 0x802A8C6C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_800625BC(rdram, ctx);
        goto after_8;
    // 0x802A8C6C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_8:
    // 0x802A8C70: b           L_802A8D70
    // 0x802A8C74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A8D70;
    // 0x802A8C74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8C78:
    // 0x802A8C78: bne         $a0, $zero, L_802A8C98
    if (ctx->r4 != 0) {
        // 0x802A8C7C: nop
    
            goto L_802A8C98;
    }
    // 0x802A8C7C: nop

    // 0x802A8C80: jal         0x802A7880
    // 0x802A8C84: nop

    func_802A7880(rdram, ctx);
        goto after_9;
    // 0x802A8C84: nop

    after_9:
    // 0x802A8C88: jal         0x80062860
    // 0x802A8C8C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80062860(rdram, ctx);
        goto after_10;
    // 0x802A8C8C: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_10:
    // 0x802A8C90: b           L_802A8D70
    // 0x802A8C94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A8D70;
    // 0x802A8C94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8C98:
    // 0x802A8C98: jal         0x802A7878
    // 0x802A8C9C: nop

    func_802A7878(rdram, ctx);
        goto after_11;
    // 0x802A8C9C: nop

    after_11:
    // 0x802A8CA0: jal         0x80062764
    // 0x802A8CA4: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80062764(rdram, ctx);
        goto after_12;
    // 0x802A8CA4: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_12:
    // 0x802A8CA8: b           L_802A8D70
    // 0x802A8CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A8D70;
    // 0x802A8CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8CB0:
    // 0x802A8CB0: beq         $v0, $zero, L_802A8CC0
    if (ctx->r2 == 0) {
        // 0x802A8CB4: nop
    
            goto L_802A8CC0;
    }
    // 0x802A8CB4: nop

    // 0x802A8CB8: bne         $v0, $a1, L_802A8CF8
    if (ctx->r2 != ctx->r5) {
        // 0x802A8CBC: nop
    
            goto L_802A8CF8;
    }
    // 0x802A8CBC: nop

L_802A8CC0:
    // 0x802A8CC0: bne         $a0, $zero, L_802A8CE0
    if (ctx->r4 != 0) {
        // 0x802A8CC4: nop
    
            goto L_802A8CE0;
    }
    // 0x802A8CC4: nop

    // 0x802A8CC8: jal         0x802A7878
    // 0x802A8CCC: nop

    func_802A7878(rdram, ctx);
        goto after_13;
    // 0x802A8CCC: nop

    after_13:
    // 0x802A8CD0: jal         0x80062764
    // 0x802A8CD4: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80062764(rdram, ctx);
        goto after_14;
    // 0x802A8CD4: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_14:
    // 0x802A8CD8: b           L_802A8D70
    // 0x802A8CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A8D70;
    // 0x802A8CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8CE0:
    // 0x802A8CE0: jal         0x802A7880
    // 0x802A8CE4: nop

    func_802A7880(rdram, ctx);
        goto after_15;
    // 0x802A8CE4: nop

    after_15:
    // 0x802A8CE8: jal         0x80062860
    // 0x802A8CEC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80062860(rdram, ctx);
        goto after_16;
    // 0x802A8CEC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_16:
    // 0x802A8CF0: b           L_802A8D70
    // 0x802A8CF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A8D70;
    // 0x802A8CF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8CF8:
    // 0x802A8CF8: bne         $a0, $zero, L_802A8D3C
    if (ctx->r4 != 0) {
        // 0x802A8CFC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_802A8D3C;
    }
    // 0x802A8CFC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802A8D00: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802A8D04: bne         $v1, $at, L_802A8D24
    if (ctx->r3 != ctx->r1) {
        // 0x802A8D08: nop
    
            goto L_802A8D24;
    }
    // 0x802A8D08: nop

    // 0x802A8D0C: jal         0x802A7878
    // 0x802A8D10: nop

    func_802A7878(rdram, ctx);
        goto after_17;
    // 0x802A8D10: nop

    after_17:
    // 0x802A8D14: jal         0x80062414
    // 0x802A8D18: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80062414(rdram, ctx);
        goto after_18;
    // 0x802A8D18: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_18:
    // 0x802A8D1C: b           L_802A8D70
    // 0x802A8D20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A8D70;
    // 0x802A8D20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8D24:
    // 0x802A8D24: jal         0x802A7880
    // 0x802A8D28: nop

    func_802A7880(rdram, ctx);
        goto after_19;
    // 0x802A8D28: nop

    after_19:
    // 0x802A8D2C: jal         0x800625BC
    // 0x802A8D30: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_800625BC(rdram, ctx);
        goto after_20;
    // 0x802A8D30: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_20:
    // 0x802A8D34: b           L_802A8D70
    // 0x802A8D38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A8D70;
    // 0x802A8D38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8D3C:
    // 0x802A8D3C: bne         $v0, $at, L_802A8D5C
    if (ctx->r2 != ctx->r1) {
        // 0x802A8D40: nop
    
            goto L_802A8D5C;
    }
    // 0x802A8D40: nop

    // 0x802A8D44: jal         0x802A7878
    // 0x802A8D48: nop

    func_802A7878(rdram, ctx);
        goto after_21;
    // 0x802A8D48: nop

    after_21:
    // 0x802A8D4C: jal         0x80062414
    // 0x802A8D50: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_80062414(rdram, ctx);
        goto after_22;
    // 0x802A8D50: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_22:
    // 0x802A8D54: b           L_802A8D70
    // 0x802A8D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802A8D70;
    // 0x802A8D58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8D5C:
    // 0x802A8D5C: jal         0x802A7880
    // 0x802A8D60: nop

    func_802A7880(rdram, ctx);
        goto after_23;
    // 0x802A8D60: nop

    after_23:
    // 0x802A8D64: jal         0x800625BC
    // 0x802A8D68: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    func_800625BC(rdram, ctx);
        goto after_24;
    // 0x802A8D68: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    after_24:
    // 0x802A8D6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802A8D70:
    // 0x802A8D70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802A8D74: jr          $ra
    // 0x802A8D78: nop

    return;
    // 0x802A8D78: nop

;}
RECOMP_FUNC void func_802A8D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8D7C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A8D80: sb          $zero, 0x541C($at)
    MEM_B(0X541C, ctx->r1) = 0;
    // 0x802A8D84: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802A8D88: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A8D8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802A8D90: addiu       $t6, $t6, 0x53F8
    ctx->r14 = ADD32(ctx->r14, 0X53F8);
    // 0x802A8D94: sb          $zero, 0x5421($at)
    MEM_B(0X5421, ctx->r1) = 0;
    // 0x802A8D98: addu        $v1, $v0, $t6
    ctx->r3 = ADD32(ctx->r2, ctx->r14);
    // 0x802A8D9C: sb          $zero, 0x25($v1)
    MEM_B(0X25, ctx->r3) = 0;
    // 0x802A8DA0: sb          $zero, 0x2A($v1)
    MEM_B(0X2A, ctx->r3) = 0;
    // 0x802A8DA4: sb          $zero, 0x26($v1)
    MEM_B(0X26, ctx->r3) = 0;
    // 0x802A8DA8: sb          $zero, 0x2B($v1)
    MEM_B(0X2B, ctx->r3) = 0;
    // 0x802A8DAC: sb          $zero, 0x27($v1)
    MEM_B(0X27, ctx->r3) = 0;
    // 0x802A8DB0: sb          $zero, 0x2C($v1)
    MEM_B(0X2C, ctx->r3) = 0;
    // 0x802A8DB4: sb          $zero, 0x24($v1)
    MEM_B(0X24, ctx->r3) = 0;
    // 0x802A8DB8: jr          $ra
    // 0x802A8DBC: sb          $zero, 0x29($v1)
    MEM_B(0X29, ctx->r3) = 0;
    return;
    // 0x802A8DBC: sb          $zero, 0x29($v1)
    MEM_B(0X29, ctx->r3) = 0;
;}
RECOMP_FUNC void func_802A8DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8DC0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A8DC4: addiu       $v0, $v0, 0x5240
    ctx->r2 = ADD32(ctx->r2, 0X5240);
    // 0x802A8DC8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802A8DCC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x802A8DD0: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x802A8DD4: lwc1        $f6, 0xC($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0XC);
    // 0x802A8DD8: lwc1        $f8, 0x10($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X10);
    // 0x802A8DDC: lwc1        $f10, 0x14($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802A8DE0: swc1        $f4, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f4.u32l;
    // 0x802A8DE4: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
    // 0x802A8DE8: swc1        $f8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f8.u32l;
    // 0x802A8DEC: swc1        $f10, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f10.u32l;
    // 0x802A8DF0: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802A8DF4: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802A8DF8: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802A8DFC: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802A8E00: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802A8E04: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x802A8E08: sh          $zero, 0x30($v0)
    MEM_H(0X30, ctx->r2) = 0;
    // 0x802A8E0C: swc1        $f12, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f12.u32l;
    // 0x802A8E10: swc1        $f14, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f14.u32l;
    // 0x802A8E14: swc1        $f16, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f16.u32l;
    // 0x802A8E18: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x802A8E1C: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    // 0x802A8E20: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
    // 0x802A8E24: swc1        $f8, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f8.u32l;
    // 0x802A8E28: jr          $ra
    // 0x802A8E2C: swc1        $f10, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f10.u32l;
    return;
    // 0x802A8E2C: swc1        $f10, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_802A8E30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8E30: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802A8E34: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802A8E38: jal         0x80027B60
    // 0x802A8E3C: nop

    func_80027B60(rdram, ctx);
        goto after_0;
    // 0x802A8E3C: nop

    after_0:
    // 0x802A8E40: jal         0x80063B94
    // 0x802A8E44: nop

    func_80063B94(rdram, ctx);
        goto after_1;
    // 0x802A8E44: nop

    after_1:
    // 0x802A8E48: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802A8E4C: lw          $t6, 0x5408($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5408);
    // 0x802A8E50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802A8E54: bne         $t6, $at, L_802A8EB4
    if (ctx->r14 != ctx->r1) {
        // 0x802A8E58: lui         $at, 0x4334
        ctx->r1 = S32(0X4334 << 16);
            goto L_802A8EB4;
    }
    // 0x802A8E58: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802A8E5C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A8E60: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x802A8E64: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802A8E68: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802A8E6C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802A8E70: lui         $at, 0xC3C8
    ctx->r1 = S32(0XC3C8 << 16);
    // 0x802A8E74: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A8E78: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802A8E7C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A8E80: lwc1        $f4, 0x14FC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X14FC);
    // 0x802A8E84: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802A8E88: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x802A8E8C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x802A8E90: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x802A8E94: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    // 0x802A8E98: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x802A8E9C: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x802A8EA0: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x802A8EA4: jal         0x802A8DC0
    // 0x802A8EA8: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    func_802A8DC0(rdram, ctx);
        goto after_2;
    // 0x802A8EA8: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x802A8EAC: b           L_802A8F0C
    // 0x802A8EB0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
        goto L_802A8F0C;
    // 0x802A8EB0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802A8EB4:
    // 0x802A8EB4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802A8EB8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x802A8EBC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x802A8EC0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802A8EC4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802A8EC8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802A8ECC: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x802A8ED0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A8ED4: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802A8ED8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A8EDC: lwc1        $f6, 0x1500($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X1500);
    // 0x802A8EE0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x802A8EE4: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x802A8EE8: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x802A8EEC: swc1        $f12, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f12.u32l;
    // 0x802A8EF0: swc1        $f14, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f14.u32l;
    // 0x802A8EF4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x802A8EF8: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x802A8EFC: swc1        $f2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f2.u32l;
    // 0x802A8F00: jal         0x802A8DC0
    // 0x802A8F04: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    func_802A8DC0(rdram, ctx);
        goto after_3;
    // 0x802A8F04: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x802A8F08: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_802A8F0C:
    // 0x802A8F0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802A8F10: jr          $ra
    // 0x802A8F14: nop

    return;
    // 0x802A8F14: nop

;}
RECOMP_FUNC void func_802A8F18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8F18: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A8F1C: addiu       $v0, $v0, 0x5240
    ctx->r2 = ADD32(ctx->r2, 0X5240);
    // 0x802A8F20: sh          $zero, 0x30($v0)
    MEM_H(0X30, ctx->r2) = 0;
    // 0x802A8F24: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A8F28: lwc1        $f4, 0x3924($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X3924);
    // 0x802A8F2C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A8F30: swc1        $f4, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->f4.u32l;
    // 0x802A8F34: lwc1        $f6, 0x3910($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X3910);
    // 0x802A8F38: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A8F3C: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x802A8F40: lwc1        $f8, 0x3918($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X3918);
    // 0x802A8F44: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A8F48: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    // 0x802A8F4C: lwc1        $f10, 0x3940($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X3940);
    // 0x802A8F50: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A8F54: swc1        $f10, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f10.u32l;
    // 0x802A8F58: lwc1        $f16, 0x393C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X393C);
    // 0x802A8F5C: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802A8F60: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x802A8F64: lwc1        $f18, 0x8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8);
    // 0x802A8F68: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x802A8F6C: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x802A8F70: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x802A8F74: lwc1        $f10, 0x14($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802A8F78: swc1        $f12, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f12.u32l;
    // 0x802A8F7C: swc1        $f14, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->f14.u32l;
    // 0x802A8F80: swc1        $f16, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f16.u32l;
    // 0x802A8F84: swc1        $f18, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->f18.u32l;
    // 0x802A8F88: swc1        $f4, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->f4.u32l;
    // 0x802A8F8C: swc1        $f6, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->f6.u32l;
    // 0x802A8F90: swc1        $f8, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f8.u32l;
    // 0x802A8F94: jr          $ra
    // 0x802A8F98: swc1        $f10, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f10.u32l;
    return;
    // 0x802A8F98: swc1        $f10, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->f10.u32l;
;}
RECOMP_FUNC void func_802A8F9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A8F9C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A8FA0: addiu       $v0, $v0, 0x5240
    ctx->r2 = ADD32(ctx->r2, 0X5240);
    // 0x802A8FA4: lwc1        $f4, 0x28($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X28);
    // 0x802A8FA8: lwc1        $f6, 0x2C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X2C);
    // 0x802A8FAC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802A8FB0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802A8FB4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A8FB8: swc1        $f8, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f8.u32l;
    // 0x802A8FBC: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x802A8FC0: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802A8FC4: cvt.d.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f10.d = CVT_D_S(ctx->f0.fl);
    // 0x802A8FC8: c.le.d      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.d <= ctx->f10.d;
    // 0x802A8FCC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A8FD0: bc1f        L_802A8FEC
    if (!c1cs) {
        // 0x802A8FD4: nop
    
            goto L_802A8FEC;
    }
    // 0x802A8FD4: nop

    // 0x802A8FD8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802A8FDC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802A8FE0: swc1        $f6, 0x28($v0)
    MEM_W(0X28, ctx->r2) = ctx->f6.u32l;
    // 0x802A8FE4: lwc1        $f0, 0x28($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X28);
    // 0x802A8FE8: sh          $t6, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r14;
L_802A8FEC:
    // 0x802A8FEC: lwc1        $f2, 0x0($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X0);
    // 0x802A8FF0: lwc1        $f8, 0x14($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X14);
    // 0x802A8FF4: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A8FF8: sub.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f2.fl;
    // 0x802A8FFC: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802A9000: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x802A9004: swc1        $f6, 0x3924($at)
    MEM_W(0X3924, ctx->r1) = ctx->f6.u32l;
    // 0x802A9008: lwc1        $f8, 0x18($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X18);
    // 0x802A900C: lwc1        $f12, 0x4($v0)
    ctx->f12.u32l = MEM_W(ctx->r2, 0X4);
    // 0x802A9010: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A9014: sub.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f12.fl;
    // 0x802A9018: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802A901C: add.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f12.fl;
    // 0x802A9020: swc1        $f6, 0x3910($at)
    MEM_W(0X3910, ctx->r1) = ctx->f6.u32l;
    // 0x802A9024: lwc1        $f8, 0x1C($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x802A9028: lwc1        $f14, 0x8($v0)
    ctx->f14.u32l = MEM_W(ctx->r2, 0X8);
    // 0x802A902C: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A9030: sub.s       $f10, $f8, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f14.fl;
    // 0x802A9034: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802A9038: add.s       $f6, $f4, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f14.fl;
    // 0x802A903C: swc1        $f6, 0x3918($at)
    MEM_W(0X3918, ctx->r1) = ctx->f6.u32l;
    // 0x802A9040: lwc1        $f8, 0x20($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X20);
    // 0x802A9044: lwc1        $f16, 0xC($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0XC);
    // 0x802A9048: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A904C: sub.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x802A9050: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802A9054: add.s       $f6, $f4, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x802A9058: swc1        $f6, 0x3940($at)
    MEM_W(0X3940, ctx->r1) = ctx->f6.u32l;
    // 0x802A905C: lwc1        $f8, 0x24($v0)
    ctx->f8.u32l = MEM_W(ctx->r2, 0X24);
    // 0x802A9060: lwc1        $f18, 0x10($v0)
    ctx->f18.u32l = MEM_W(ctx->r2, 0X10);
    // 0x802A9064: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A9068: sub.s       $f10, $f8, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x802A906C: mul.s       $f4, $f10, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x802A9070: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x802A9074: jr          $ra
    // 0x802A9078: swc1        $f6, 0x393C($at)
    MEM_W(0X393C, ctx->r1) = ctx->f6.u32l;
    return;
    // 0x802A9078: swc1        $f6, 0x393C($at)
    MEM_W(0X393C, ctx->r1) = ctx->f6.u32l;
;}
RECOMP_FUNC void func_802A907C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A907C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A9080: lh          $v0, 0x50B8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X50B8);
    // 0x802A9084: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x802A9088: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x802A908C: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x802A9090: mflo        $v0
    ctx->r2 = lo;
    // 0x802A9094: jr          $ra
    // 0x802A9098: nop

    return;
    // 0x802A9098: nop

;}
RECOMP_FUNC void func_802A909C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A909C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A90A0: lh          $v0, 0x50BA($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X50BA);
    // 0x802A90A4: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x802A90A8: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x802A90AC: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x802A90B0: mflo        $v0
    ctx->r2 = lo;
    // 0x802A90B4: jr          $ra
    // 0x802A90B8: nop

    return;
    // 0x802A90B8: nop

;}
RECOMP_FUNC void func_802A90BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A90BC: lui         $t5, 0x802C
    ctx->r13 = S32(0X802C << 16);
    // 0x802A90C0: addiu       $t5, $t5, 0x50A8
    ctx->r13 = ADD32(ctx->r13, 0X50A8);
    // 0x802A90C4: lh          $v1, 0x10($t5)
    ctx->r3 = MEM_H(ctx->r13, 0X10);
    // 0x802A90C8: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x802A90CC: sll         $t0, $v1, 4
    ctx->r8 = S32(ctx->r3 << 4);
    // 0x802A90D0: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x802A90D4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x802A90D8: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x802A90DC: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802A90E0: lh          $a3, 0x12($t5)
    ctx->r7 = MEM_H(ctx->r13, 0X12);
    // 0x802A90E4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x802A90E8: sll         $t1, $a3, 4
    ctx->r9 = S32(ctx->r7 << 4);
    // 0x802A90EC: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x802A90F0: sll         $a2, $a3, 16
    ctx->r6 = S32(ctx->r7 << 16);
    // 0x802A90F4: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802A90F8: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802A90FC: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x802A9100: sra         $t6, $v0, 16
    ctx->r14 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802A9104: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x802A9108: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x802A910C: lui         $t6, 0x802C
    ctx->r14 = S32(0X802C << 16);
    // 0x802A9110: lw          $t6, 0x54F0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X54F0);
    // 0x802A9114: nop

    // 0x802A9118: lw          $t3, 0x0($t6)
    ctx->r11 = MEM_W(ctx->r14, 0X0);
    // 0x802A911C: nop

    // 0x802A9120: lwc1        $f4, 0xC($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0XC);
    // 0x802A9124: lwc1        $f8, 0x10($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X10);
    // 0x802A9128: mflo        $t8
    ctx->r24 = lo;
    // 0x802A912C: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x802A9130: sra         $t0, $t9, 16
    ctx->r8 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802A9134: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x802A9138: mflo        $t7
    ctx->r15 = lo;
    // 0x802A913C: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x802A9140: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802A9144: sra         $t1, $t8, 16
    ctx->r9 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802A9148: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x802A914C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A9150: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A9154: nop

    // 0x802A9158: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802A915C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802A9160: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x802A9164: nop

    // 0x802A9168: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802A916C: sll         $t8, $t2, 16
    ctx->r24 = S32(ctx->r10 << 16);
    // 0x802A9170: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x802A9174: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A9178: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A917C: sra         $t2, $t8, 16
    ctx->r10 = S32(SIGNED(ctx->r24) >> 16);
    // 0x802A9180: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802A9184: subu        $t9, $t2, $v1
    ctx->r25 = SUB32(ctx->r10, ctx->r3);
    // 0x802A9188: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x802A918C: slt         $at, $t9, $a0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x802A9190: sll         $t7, $t4, 16
    ctx->r15 = S32(ctx->r12 << 16);
    // 0x802A9194: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802A9198: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802A919C: beq         $at, $zero, L_802A91D4
    if (ctx->r1 == 0) {
        // 0x802A91A0: or          $t4, $t8, $zero
        ctx->r12 = ctx->r24 | 0;
            goto L_802A91D4;
    }
    // 0x802A91A0: or          $t4, $t8, $zero
    ctx->r12 = ctx->r24 | 0;
    // 0x802A91A4: addu        $t6, $v0, $t2
    ctx->r14 = ADD32(ctx->r2, ctx->r10);
    // 0x802A91A8: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x802A91AC: beq         $at, $zero, L_802A91D4
    if (ctx->r1 == 0) {
        // 0x802A91B0: subu        $t7, $t8, $t0
        ctx->r15 = SUB32(ctx->r24, ctx->r8);
            goto L_802A91D4;
    }
    // 0x802A91B0: subu        $t7, $t8, $t0
    ctx->r15 = SUB32(ctx->r24, ctx->r8);
    // 0x802A91B4: slt         $at, $t7, $a1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x802A91B8: beq         $at, $zero, L_802A91D4
    if (ctx->r1 == 0) {
        // 0x802A91BC: addu        $t8, $t0, $t8
        ctx->r24 = ADD32(ctx->r8, ctx->r24);
            goto L_802A91D4;
    }
    // 0x802A91BC: addu        $t8, $t0, $t8
    ctx->r24 = ADD32(ctx->r8, ctx->r24);
    // 0x802A91C0: slt         $at, $a1, $t8
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x802A91C4: beq         $at, $zero, L_802A91D8
    if (ctx->r1 == 0) {
        // 0x802A91C8: subu        $t9, $t2, $a2
        ctx->r25 = SUB32(ctx->r10, ctx->r6);
            goto L_802A91D8;
    }
    // 0x802A91C8: subu        $t9, $t2, $a2
    ctx->r25 = SUB32(ctx->r10, ctx->r6);
    // 0x802A91CC: jr          $ra
    // 0x802A91D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x802A91D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802A91D4:
    // 0x802A91D4: subu        $t9, $t2, $a2
    ctx->r25 = SUB32(ctx->r10, ctx->r6);
L_802A91D8:
    // 0x802A91D8: slt         $at, $t9, $a0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x802A91DC: beq         $at, $zero, L_802A9210
    if (ctx->r1 == 0) {
        // 0x802A91E0: addu        $t6, $a2, $t2
        ctx->r14 = ADD32(ctx->r6, ctx->r10);
            goto L_802A9210;
    }
    // 0x802A91E0: addu        $t6, $a2, $t2
    ctx->r14 = ADD32(ctx->r6, ctx->r10);
    // 0x802A91E4: slt         $at, $a0, $t6
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x802A91E8: beq         $at, $zero, L_802A9210
    if (ctx->r1 == 0) {
        // 0x802A91EC: subu        $t7, $t4, $t1
        ctx->r15 = SUB32(ctx->r12, ctx->r9);
            goto L_802A9210;
    }
    // 0x802A91EC: subu        $t7, $t4, $t1
    ctx->r15 = SUB32(ctx->r12, ctx->r9);
    // 0x802A91F0: slt         $at, $t7, $a1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x802A91F4: beq         $at, $zero, L_802A9210
    if (ctx->r1 == 0) {
        // 0x802A91F8: addu        $t8, $t1, $t4
        ctx->r24 = ADD32(ctx->r9, ctx->r12);
            goto L_802A9210;
    }
    // 0x802A91F8: addu        $t8, $t1, $t4
    ctx->r24 = ADD32(ctx->r9, ctx->r12);
    // 0x802A91FC: slt         $at, $a1, $t8
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x802A9200: beq         $at, $zero, L_802A9214
    if (ctx->r1 == 0) {
        // 0x802A9204: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_802A9214;
    }
    // 0x802A9204: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802A9208: jr          $ra
    // 0x802A920C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x802A920C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802A9210:
    // 0x802A9210: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802A9214:
    // 0x802A9214: jr          $ra
    // 0x802A9218: nop

    return;
    // 0x802A9218: nop

;}
RECOMP_FUNC void func_802A921C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A921C: lui         $t3, 0x802C
    ctx->r11 = S32(0X802C << 16);
    // 0x802A9220: addiu       $t3, $t3, 0x50A8
    ctx->r11 = ADD32(ctx->r11, 0X50A8);
    // 0x802A9224: lh          $a0, 0x10($t3)
    ctx->r4 = MEM_H(ctx->r11, 0X10);
    // 0x802A9228: addiu       $t4, $zero, 0x14
    ctx->r12 = ADD32(0, 0X14);
    // 0x802A922C: sll         $t8, $a0, 4
    ctx->r24 = S32(ctx->r4 << 4);
    // 0x802A9230: div         $zero, $t8, $t4
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r12)));
    // 0x802A9234: lh          $a2, 0x12($t3)
    ctx->r6 = MEM_H(ctx->r11, 0X12);
    // 0x802A9238: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x802A923C: or          $v1, $t6, $zero
    ctx->r3 = ctx->r14 | 0;
    // 0x802A9240: sll         $t6, $a2, 4
    ctx->r14 = S32(ctx->r6 << 4);
    // 0x802A9244: lw          $v0, 0x8($t3)
    ctx->r2 = MEM_W(ctx->r11, 0X8);
    // 0x802A9248: sll         $a1, $a2, 16
    ctx->r5 = S32(ctx->r6 << 16);
    // 0x802A924C: sra         $t7, $a1, 16
    ctx->r15 = S32(SIGNED(ctx->r5) >> 16);
    // 0x802A9250: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x802A9254: negu        $t2, $v1
    ctx->r10 = SUB32(0, ctx->r3);
    // 0x802A9258: bne         $t4, $zero, L_802A9264
    if (ctx->r12 != 0) {
        // 0x802A925C: nop
    
            goto L_802A9264;
    }
    // 0x802A925C: nop

    // 0x802A9260: break       7
    do_break(2150273632);
L_802A9264:
    // 0x802A9264: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802A9268: bne         $t4, $at, L_802A927C
    if (ctx->r12 != ctx->r1) {
        // 0x802A926C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802A927C;
    }
    // 0x802A926C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802A9270: bne         $t8, $at, L_802A927C
    if (ctx->r24 != ctx->r1) {
        // 0x802A9274: nop
    
            goto L_802A927C;
    }
    // 0x802A9274: nop

    // 0x802A9278: break       6
    do_break(2150273656);
L_802A927C:
    // 0x802A927C: addiu       $a2, $a1, -0x2
    ctx->r6 = ADD32(ctx->r5, -0X2);
    // 0x802A9280: sh          $a0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r4;
    // 0x802A9284: sh          $v1, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r3;
    // 0x802A9288: negu        $a0, $a1
    ctx->r4 = SUB32(0, ctx->r5);
    // 0x802A928C: sh          $t2, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r10;
    // 0x802A9290: sh          $t2, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r10;
    // 0x802A9294: addiu       $t2, $a0, 0x2
    ctx->r10 = ADD32(ctx->r4, 0X2);
    // 0x802A9298: sh          $a2, 0x80($v0)
    MEM_H(0X80, ctx->r2) = ctx->r6;
    // 0x802A929C: mflo        $a3
    ctx->r7 = lo;
    // 0x802A92A0: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x802A92A4: sra         $t5, $t9, 16
    ctx->r13 = S32(SIGNED(ctx->r25) >> 16);
    // 0x802A92A8: div         $zero, $t6, $t4
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r12))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r12)));
    // 0x802A92AC: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x802A92B0: negu        $t1, $a3
    ctx->r9 = SUB32(0, ctx->r7);
    // 0x802A92B4: sh          $a3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r7;
    // 0x802A92B8: sh          $t1, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r9;
    // 0x802A92BC: sh          $t1, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r9;
    // 0x802A92C0: sh          $a3, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r7;
    // 0x802A92C4: sh          $a2, 0x90($v0)
    MEM_H(0X90, ctx->r2) = ctx->r6;
    // 0x802A92C8: lui         $a2, 0x802C
    ctx->r6 = S32(0X802C << 16);
    // 0x802A92CC: addiu       $a2, $a2, 0x50C0
    ctx->r6 = ADD32(ctx->r6, 0X50C0);
    // 0x802A92D0: sh          $a1, 0x40($v0)
    MEM_H(0X40, ctx->r2) = ctx->r5;
    // 0x802A92D4: sh          $a1, 0x50($v0)
    MEM_H(0X50, ctx->r2) = ctx->r5;
    // 0x802A92D8: sh          $a0, 0x60($v0)
    MEM_H(0X60, ctx->r2) = ctx->r4;
    // 0x802A92DC: sh          $a0, 0x70($v0)
    MEM_H(0X70, ctx->r2) = ctx->r4;
    // 0x802A92E0: sh          $t2, 0xA0($v0)
    MEM_H(0XA0, ctx->r2) = ctx->r10;
    // 0x802A92E4: sh          $t2, 0xB0($v0)
    MEM_H(0XB0, ctx->r2) = ctx->r10;
    // 0x802A92E8: bne         $t4, $zero, L_802A92F4
    if (ctx->r12 != 0) {
        // 0x802A92EC: nop
    
            goto L_802A92F4;
    }
    // 0x802A92EC: nop

    // 0x802A92F0: break       7
    do_break(2150273776);
L_802A92F4:
    // 0x802A92F4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802A92F8: bne         $t4, $at, L_802A930C
    if (ctx->r12 != ctx->r1) {
        // 0x802A92FC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802A930C;
    }
    // 0x802A92FC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802A9300: bne         $t6, $at, L_802A930C
    if (ctx->r14 != ctx->r1) {
        // 0x802A9304: nop
    
            goto L_802A930C;
    }
    // 0x802A9304: nop

    // 0x802A9308: break       6
    do_break(2150273800);
L_802A930C:
    // 0x802A930C: mflo        $t0
    ctx->r8 = lo;
    // 0x802A9310: sll         $t7, $t0, 16
    ctx->r15 = S32(ctx->r8 << 16);
    // 0x802A9314: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x802A9318: negu        $v1, $t8
    ctx->r3 = SUB32(0, ctx->r24);
    // 0x802A931C: addiu       $a3, $t8, -0x2
    ctx->r7 = ADD32(ctx->r24, -0X2);
    // 0x802A9320: addiu       $t1, $v1, 0x2
    ctx->r9 = ADD32(ctx->r3, 0X2);
    // 0x802A9324: sh          $t8, 0x42($v0)
    MEM_H(0X42, ctx->r2) = ctx->r24;
    // 0x802A9328: sh          $v1, 0x52($v0)
    MEM_H(0X52, ctx->r2) = ctx->r3;
    // 0x802A932C: sh          $v1, 0x62($v0)
    MEM_H(0X62, ctx->r2) = ctx->r3;
    // 0x802A9330: sh          $t8, 0x72($v0)
    MEM_H(0X72, ctx->r2) = ctx->r24;
    // 0x802A9334: sh          $a3, 0x82($v0)
    MEM_H(0X82, ctx->r2) = ctx->r7;
    // 0x802A9338: sh          $t1, 0x92($v0)
    MEM_H(0X92, ctx->r2) = ctx->r9;
    // 0x802A933C: sh          $t1, 0xA2($v0)
    MEM_H(0XA2, ctx->r2) = ctx->r9;
    // 0x802A9340: sh          $a3, 0xB2($v0)
    MEM_H(0XB2, ctx->r2) = ctx->r7;
    // 0x802A9344: lh          $v1, 0x12($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X12);
    // 0x802A9348: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x802A934C: lh          $a0, 0x10($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X10);
    // 0x802A9350: negu        $a1, $v1
    ctx->r5 = SUB32(0, ctx->r3);
    // 0x802A9354: sh          $a1, 0x12($v0)
    MEM_H(0X12, ctx->r2) = ctx->r5;
    // 0x802A9358: sh          $a1, 0x20($v0)
    MEM_H(0X20, ctx->r2) = ctx->r5;
    // 0x802A935C: sh          $a1, 0x22($v0)
    MEM_H(0X22, ctx->r2) = ctx->r5;
    // 0x802A9360: sh          $a1, 0x30($v0)
    MEM_H(0X30, ctx->r2) = ctx->r5;
    // 0x802A9364: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x802A9368: sh          $v1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r3;
    // 0x802A936C: sh          $v1, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r3;
    // 0x802A9370: sh          $v1, 0x32($v0)
    MEM_H(0X32, ctx->r2) = ctx->r3;
    // 0x802A9374: negu        $a1, $a0
    ctx->r5 = SUB32(0, ctx->r4);
    // 0x802A9378: addiu       $v1, $a1, 0x2
    ctx->r3 = ADD32(ctx->r5, 0X2);
    // 0x802A937C: addiu       $a2, $a0, -0x2
    ctx->r6 = ADD32(ctx->r4, -0X2);
    // 0x802A9380: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
    // 0x802A9384: sh          $a1, 0x52($v0)
    MEM_H(0X52, ctx->r2) = ctx->r5;
    // 0x802A9388: sh          $a1, 0x60($v0)
    MEM_H(0X60, ctx->r2) = ctx->r5;
    // 0x802A938C: sh          $a1, 0x62($v0)
    MEM_H(0X62, ctx->r2) = ctx->r5;
    // 0x802A9390: sh          $a1, 0x70($v0)
    MEM_H(0X70, ctx->r2) = ctx->r5;
    // 0x802A9394: sh          $a2, 0x80($v0)
    MEM_H(0X80, ctx->r2) = ctx->r6;
    // 0x802A9398: sh          $a2, 0x82($v0)
    MEM_H(0X82, ctx->r2) = ctx->r6;
    // 0x802A939C: sh          $a2, 0x90($v0)
    MEM_H(0X90, ctx->r2) = ctx->r6;
    // 0x802A93A0: sh          $v1, 0x92($v0)
    MEM_H(0X92, ctx->r2) = ctx->r3;
    // 0x802A93A4: sh          $v1, 0xA0($v0)
    MEM_H(0XA0, ctx->r2) = ctx->r3;
    // 0x802A93A8: sh          $v1, 0xA2($v0)
    MEM_H(0XA2, ctx->r2) = ctx->r3;
    // 0x802A93AC: sh          $v1, 0xB0($v0)
    MEM_H(0XB0, ctx->r2) = ctx->r3;
    // 0x802A93B0: sh          $a2, 0xB2($v0)
    MEM_H(0XB2, ctx->r2) = ctx->r6;
    // 0x802A93B4: sh          $a0, 0x40($v0)
    MEM_H(0X40, ctx->r2) = ctx->r4;
    // 0x802A93B8: sh          $a0, 0x42($v0)
    MEM_H(0X42, ctx->r2) = ctx->r4;
    // 0x802A93BC: sh          $a0, 0x50($v0)
    MEM_H(0X50, ctx->r2) = ctx->r4;
    // 0x802A93C0: jr          $ra
    // 0x802A93C4: sh          $a0, 0x72($v0)
    MEM_H(0X72, ctx->r2) = ctx->r4;
    return;
    // 0x802A93C4: sh          $a0, 0x72($v0)
    MEM_H(0X72, ctx->r2) = ctx->r4;
;}
RECOMP_FUNC void func_802A93C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A93C8: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A93CC: addiu       $v0, $v0, 0x53F8
    ctx->r2 = ADD32(ctx->r2, 0X53F8);
    // 0x802A93D0: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x802A93D4: nop

    // 0x802A93D8: lhu         $t7, 0x8($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X8);
    // 0x802A93DC: nop

    // 0x802A93E0: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802A93E4: jr          $ra
    // 0x802A93E8: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    return;
    // 0x802A93E8: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_802A93EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A93EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A93F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A93F4: jal         0x802A6DA4
    // 0x802A93F8: nop

    func_802A6DA4(rdram, ctx);
        goto after_0;
    // 0x802A93F8: nop

    after_0:
    // 0x802A93FC: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802A9400: addiu       $a0, $a0, 0x53F8
    ctx->r4 = ADD32(ctx->r4, 0X53F8);
    // 0x802A9404: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802A9408: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x802A940C: sh          $a1, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r5;
    // 0x802A9410: sh          $zero, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = 0;
    // 0x802A9414: sh          $zero, 0x48($a0)
    MEM_H(0X48, ctx->r4) = 0;
    // 0x802A9418: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
    // 0x802A941C: sh          $zero, 0x42($a0)
    MEM_H(0X42, ctx->r4) = 0;
    // 0x802A9420: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A9424: sh          $a2, 0x5276($at)
    MEM_H(0X5276, ctx->r1) = ctx->r6;
    // 0x802A9428: sh          $zero, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = 0;
    // 0x802A942C: sh          $zero, 0x40($a0)
    MEM_H(0X40, ctx->r4) = 0;
    // 0x802A9430: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_802A9434:
    // 0x802A9434: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
    // 0x802A9438: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802A943C: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x802A9440: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x802A9444: slti        $at, $v1, 0x5
    ctx->r1 = SIGNED(ctx->r3) < 0X5 ? 1 : 0;
    // 0x802A9448: sb          $zero, 0x24($v0)
    MEM_B(0X24, ctx->r2) = 0;
    // 0x802A944C: bne         $at, $zero, L_802A9434
    if (ctx->r1 != 0) {
        // 0x802A9450: sb          $zero, 0x29($v0)
        MEM_B(0X29, ctx->r2) = 0;
            goto L_802A9434;
    }
    // 0x802A9450: sb          $zero, 0x29($v0)
    MEM_B(0X29, ctx->r2) = 0;
    // 0x802A9454: lw          $v0, 0x14($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X14);
    // 0x802A9458: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x802A945C: beq         $v0, $zero, L_802A947C
    if (ctx->r2 == 0) {
        // 0x802A9460: nop
    
            goto L_802A947C;
    }
    // 0x802A9460: nop

    // 0x802A9464: beq         $v0, $a1, L_802A94B8
    if (ctx->r2 == ctx->r5) {
        // 0x802A9468: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_802A94B8;
    }
    // 0x802A9468: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802A946C: beq         $v0, $a2, L_802A94E0
    if (ctx->r2 == ctx->r6) {
        // 0x802A9470: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_802A94E0;
    }
    // 0x802A9470: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802A9474: b           L_802A94FC
    // 0x802A9478: nop

        goto L_802A94FC;
    // 0x802A9478: nop

L_802A947C:
    // 0x802A947C: lui         $v0, 0x8009
    ctx->r2 = S32(0X8009 << 16);
    // 0x802A9480: lw          $v0, 0x3B20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3B20);
    // 0x802A9484: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x802A9488: lw          $t8, 0xB4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XB4);
    // 0x802A948C: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x802A9490: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x802A9494: lw          $t9, 0xB4($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XB4);
    // 0x802A9498: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x802A949C: bne         $v1, $t9, L_802A94AC
    if (ctx->r3 != ctx->r25) {
        // 0x802A94A0: addiu       $t0, $t0, -0x225C
        ctx->r8 = ADD32(ctx->r8, -0X225C);
            goto L_802A94AC;
    }
    // 0x802A94A0: addiu       $t0, $t0, -0x225C
    ctx->r8 = ADD32(ctx->r8, -0X225C);
    // 0x802A94A4: b           L_802A94B0
    // 0x802A94A8: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
        goto L_802A94B0;
    // 0x802A94A8: sw          $t0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r8;
L_802A94AC:
    // 0x802A94AC: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
L_802A94B0:
    // 0x802A94B0: b           L_802A94FC
    // 0x802A94B4: sb          $t1, 0x2F($a0)
    MEM_B(0X2F, ctx->r4) = ctx->r9;
        goto L_802A94FC;
    // 0x802A94B4: sb          $t1, 0x2F($a0)
    MEM_B(0X2F, ctx->r4) = ctx->r9;
L_802A94B8:
    // 0x802A94B8: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x802A94BC: lhu         $t2, 0xA($v1)
    ctx->r10 = MEM_HU(ctx->r3, 0XA);
    // 0x802A94C0: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x802A94C4: addiu       $t3, $t3, -0x225C
    ctx->r11 = ADD32(ctx->r11, -0X225C);
    // 0x802A94C8: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x802A94CC: sw          $t3, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r11;
    // 0x802A94D0: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x802A94D4: sb          $t4, 0x2F($a0)
    MEM_B(0X2F, ctx->r4) = ctx->r12;
    // 0x802A94D8: b           L_802A94FC
    // 0x802A94DC: sh          $t2, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r10;
        goto L_802A94FC;
    // 0x802A94DC: sh          $t2, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r10;
L_802A94E0:
    // 0x802A94E0: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x802A94E4: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x802A94E8: addiu       $t5, $t5, -0x225C
    ctx->r13 = ADD32(ctx->r13, -0X225C);
    // 0x802A94EC: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x802A94F0: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x802A94F4: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    // 0x802A94F8: sb          $t6, 0x2F($a0)
    MEM_B(0X2F, ctx->r4) = ctx->r14;
L_802A94FC:
    // 0x802A94FC: jal         0x802A93C8
    // 0x802A9500: nop

    func_802A93C8(rdram, ctx);
        goto after_1;
    // 0x802A9500: nop

    after_1:
    // 0x802A9504: jal         0x802ABC58
    // 0x802A9508: nop

    func_802ABC58(rdram, ctx);
        goto after_2;
    // 0x802A9508: nop

    after_2:
    // 0x802A950C: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802A9510: addiu       $a0, $a0, 0x53F8
    ctx->r4 = ADD32(ctx->r4, 0X53F8);
    // 0x802A9514: sh          $zero, 0x22($a0)
    MEM_H(0X22, ctx->r4) = 0;
    // 0x802A9518: lh          $t7, 0x22($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X22);
    // 0x802A951C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A9520: sh          $t7, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r15;
    // 0x802A9524: lh          $t8, 0x20($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X20);
    // 0x802A9528: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A952C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A9530: jr          $ra
    // 0x802A9534: sh          $t8, 0x4FD0($at)
    MEM_H(0X4FD0, ctx->r1) = ctx->r24;
    return;
    // 0x802A9534: sh          $t8, 0x4FD0($at)
    MEM_H(0X4FD0, ctx->r1) = ctx->r24;
;}
RECOMP_FUNC void func_802A9538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9538: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802A953C: mtc1        $at, $f5
    ctx->f_odd[(5 - 1) * 2] = ctx->r1;
    // 0x802A9540: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802A9544: cvt.d.s     $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f6.d = CVT_D_S(ctx->f12.fl);
    // 0x802A9548: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x802A954C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A9550: bc1f        L_802A9564
    if (!c1cs) {
        // 0x802A9554: sw          $a3, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r7;
            goto L_802A9564;
    }
    // 0x802A9554: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x802A9558: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802A955C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802A9560: nop

L_802A9564:
    // 0x802A9564: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x802A9568: nop

    // 0x802A956C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802A9570: mul.s       $f12, $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x802A9574: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802A9578: nop

    // 0x802A957C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x802A9580: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A9584: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A9588: nop

    // 0x802A958C: cvt.w.s     $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    ctx->f16.u32l = CVT_W_S(ctx->f12.fl);
    // 0x802A9590: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x802A9594: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802A9598: bne         $a2, $v0, L_802A95A8
    if (ctx->r6 != ctx->r2) {
        // 0x802A959C: sll         $a0, $v0, 1
        ctx->r4 = S32(ctx->r2 << 1);
            goto L_802A95A8;
    }
    // 0x802A959C: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
    // 0x802A95A0: addiu       $v0, $a2, -0x1
    ctx->r2 = ADD32(ctx->r6, -0X1);
    // 0x802A95A4: sll         $a0, $v0, 1
    ctx->r4 = S32(ctx->r2 << 1);
L_802A95A8:
    // 0x802A95A8: addu        $a3, $a1, $a0
    ctx->r7 = ADD32(ctx->r5, ctx->r4);
    // 0x802A95AC: lh          $v1, 0x0($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X0);
    // 0x802A95B0: lh          $t0, 0x2($a3)
    ctx->r8 = MEM_H(ctx->r7, 0X2);
    // 0x802A95B4: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x802A95B8: subu        $t9, $t0, $v1
    ctx->r25 = SUB32(ctx->r8, ctx->r3);
    // 0x802A95BC: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802A95C0: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x802A95C4: mtc1        $v1, $f16
    ctx->f16.u32l = ctx->r3;
    // 0x802A95C8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802A95CC: sll         $t7, $a2, 1
    ctx->r15 = S32(ctx->r6 << 1);
    // 0x802A95D0: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x802A95D4: sub.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x802A95D8: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x802A95DC: mul.s       $f10, $f8, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f12.fl);
    // 0x802A95E0: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x802A95E4: addu        $t2, $t8, $a0
    ctx->r10 = ADD32(ctx->r24, ctx->r4);
    // 0x802A95E8: lh          $t1, 0x2($t2)
    ctx->r9 = MEM_H(ctx->r10, 0X2);
    // 0x802A95EC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802A95F0: lh          $t3, 0x4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X4);
    // 0x802A95F4: addu        $t5, $t7, $a0
    ctx->r13 = ADD32(ctx->r15, ctx->r4);
    // 0x802A95F8: add.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x802A95FC: subu        $t9, $t3, $t1
    ctx->r25 = SUB32(ctx->r11, ctx->r9);
    // 0x802A9600: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802A9604: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x802A9608: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x802A960C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A9610: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A9614: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x802A9618: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x802A961C: lh          $t8, 0x6($t5)
    ctx->r24 = MEM_H(ctx->r13, 0X6);
    // 0x802A9620: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802A9624: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x802A9628: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802A962C: lh          $t4, 0x4($t5)
    ctx->r12 = MEM_H(ctx->r13, 0X4);
    // 0x802A9630: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x802A9634: mul.s       $f10, $f16, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f16.fl, ctx->f12.fl);
    // 0x802A9638: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A963C: sh          $t8, 0x0($sp)
    MEM_H(0X0, ctx->r29) = ctx->r24;
    // 0x802A9640: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x802A9644: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802A9648: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x802A964C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x802A9650: add.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f4.fl;
    // 0x802A9654: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x802A9658: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A965C: nop

    // 0x802A9660: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x802A9664: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x802A9668: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802A966C: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x802A9670: lh          $t9, 0x0($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X0);
    // 0x802A9674: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802A9678: subu        $t6, $t9, $t4
    ctx->r14 = SUB32(ctx->r25, ctx->r12);
    // 0x802A967C: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x802A9680: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x802A9684: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802A9688: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A968C: mul.s       $f10, $f18, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x802A9690: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x802A9694: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802A9698: nop

    // 0x802A969C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x802A96A0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A96A4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A96A8: nop

    // 0x802A96AC: cvt.w.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_S(ctx->f8.fl);
    // 0x802A96B0: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x802A96B4: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802A96B8: jr          $ra
    // 0x802A96BC: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    return;
    // 0x802A96BC: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
;}
RECOMP_FUNC void func_802A96C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A96C0: lui         $at, 0x4218
    ctx->r1 = S32(0X4218 << 16);
    // 0x802A96C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A96C8: lui         $at, 0x42AC
    ctx->r1 = S32(0X42AC << 16);
    // 0x802A96CC: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x802A96D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A96D4: jr          $ra
    // 0x802A96D8: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    return;
    // 0x802A96D8: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
;}
RECOMP_FUNC void func_802A96DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A96DC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802A96E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802A96E4: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x802A96E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802A96EC: sub.s       $f6, $f12, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f12.fl - ctx->f4.fl;
    // 0x802A96F0: lui         $at, 0x426C
    ctx->r1 = S32(0X426C << 16);
    // 0x802A96F4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x802A96F8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802A96FC: jr          $ra
    // 0x802A9700: div.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    return;
    // 0x802A9700: div.s       $f0, $f10, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f0.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
;}
RECOMP_FUNC void func_802A9704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9704: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A9708: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A970C: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    // 0x802A9710: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802A9714: jal         0x802A96C0
    // 0x802A9718: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_802A96C0(rdram, ctx);
        goto after_0;
    // 0x802A9718: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x802A971C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x802A9720: nop

    // 0x802A9724: swc1        $f0, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f0.u32l;
    // 0x802A9728: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802A972C: jal         0x802A96DC
    // 0x802A9730: nop

    func_802A96DC(rdram, ctx);
        goto after_1;
    // 0x802A9730: nop

    after_1:
    // 0x802A9734: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x802A9738: nop

    // 0x802A973C: swc1        $f0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f0.u32l;
    // 0x802A9740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A9744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A9748: jr          $ra
    // 0x802A974C: nop

    return;
    // 0x802A974C: nop

;}
RECOMP_FUNC void func_802A9750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9750: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A9754: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802A9758: lwc1        $f4, 0x80($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X80);
    // 0x802A975C: lwc1        $f6, 0x84($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X84);
    // 0x802A9760: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x802A9764: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802A9768: mtc1        $at, $f3
    ctx->f_odd[(3 - 1) * 2] = ctx->r1;
    // 0x802A976C: swc1        $f8, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f8.u32l;
    // 0x802A9770: lwc1        $f12, 0x80($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X80);
    // 0x802A9774: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x802A9778: cvt.d.s     $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f0.d = CVT_D_S(ctx->f12.fl);
    // 0x802A977C: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x802A9780: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802A9784: bc1f        L_802A97B0
    if (!c1cs) {
        // 0x802A9788: addiu       $a3, $a0, 0x90
        ctx->r7 = ADD32(ctx->r4, 0X90);
            goto L_802A97B0;
    }
    // 0x802A9788: addiu       $a3, $a0, 0x90
    ctx->r7 = ADD32(ctx->r4, 0X90);
    // 0x802A978C: sub.d       $f10, $f2, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f2.d - ctx->f0.d;
    // 0x802A9790: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A9794: add.d       $f16, $f10, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f2.d); 
    ctx->f16.d = ctx->f10.d + ctx->f2.d;
    // 0x802A9798: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x802A979C: swc1        $f18, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f18.u32l;
    // 0x802A97A0: lwc1        $f4, 0x1504($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X1504);
    // 0x802A97A4: lwc1        $f12, 0x80($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X80);
    // 0x802A97A8: b           L_802A97E0
    // 0x802A97AC: swc1        $f4, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f4.u32l;
        goto L_802A97E0;
    // 0x802A97AC: swc1        $f4, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f4.u32l;
L_802A97B0:
    // 0x802A97B0: mtc1        $zero, $f7
    ctx->f_odd[(7 - 1) * 2] = 0;
    // 0x802A97B4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802A97B8: lui         $at, 0x802C
    ctx->r1 = S32(0X802C << 16);
    // 0x802A97BC: c.lt.d      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.d < ctx->f6.d;
    // 0x802A97C0: nop

    // 0x802A97C4: bc1f        L_802A97E0
    if (!c1cs) {
        // 0x802A97C8: nop
    
            goto L_802A97E0;
    }
    // 0x802A97C8: nop

    // 0x802A97CC: neg.s       $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = -ctx->f12.fl;
    // 0x802A97D0: swc1        $f8, 0x80($a0)
    MEM_W(0X80, ctx->r4) = ctx->f8.u32l;
    // 0x802A97D4: lwc1        $f10, 0x1508($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X1508);
    // 0x802A97D8: lwc1        $f12, 0x80($a0)
    ctx->f12.u32l = MEM_W(ctx->r4, 0X80);
    // 0x802A97DC: swc1        $f10, 0x84($a0)
    MEM_W(0X84, ctx->r4) = ctx->f10.u32l;
L_802A97E0:
    // 0x802A97E0: lw          $a1, 0x64($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X64);
    // 0x802A97E4: addiu       $t6, $a0, 0x94
    ctx->r14 = ADD32(ctx->r4, 0X94);
    // 0x802A97E8: addiu       $t7, $a0, 0x98
    ctx->r15 = ADD32(ctx->r4, 0X98);
    // 0x802A97EC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802A97F0: jal         0x802A9538
    // 0x802A97F4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    func_802A9538(rdram, ctx);
        goto after_0;
    // 0x802A97F4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_0:
    // 0x802A97F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802A97FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802A9800: jr          $ra
    // 0x802A9804: nop

    return;
    // 0x802A9804: nop

;}
RECOMP_FUNC void func_802A9808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9808: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802A980C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A9810: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x802A9814: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802A9818: bne         $t6, $zero, L_802A9834
    if (ctx->r14 != 0) {
        // 0x802A981C: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_802A9834;
    }
    // 0x802A981C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A9820: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x802A9824: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x802A9828: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x802A982C: b           L_802A9A74
    // 0x802A9830: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
        goto L_802A9A74;
    // 0x802A9830: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
L_802A9834:
    // 0x802A9834: lw          $v0, 0x50D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X50D8);
    // 0x802A9838: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802A983C: beq         $v0, $at, L_802A9A6C
    if (ctx->r2 == ctx->r1) {
        // 0x802A9840: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_802A9A6C;
    }
    // 0x802A9840: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802A9844: beq         $v0, $at, L_802A9A6C
    if (ctx->r2 == ctx->r1) {
        // 0x802A9848: lui         $a0, 0x802C
        ctx->r4 = S32(0X802C << 16);
            goto L_802A9A6C;
    }
    // 0x802A9848: lui         $a0, 0x802C
    ctx->r4 = S32(0X802C << 16);
    // 0x802A984C: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A9850: lw          $v0, 0x5504($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5504);
    // 0x802A9854: lh          $a0, 0x50BA($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X50BA);
    // 0x802A9858: addiu       $t0, $zero, 0x56
    ctx->r8 = ADD32(0, 0X56);
    // 0x802A985C: lh          $v1, 0x8($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X8);
    // 0x802A9860: lh          $a1, 0xA($v0)
    ctx->r5 = MEM_H(ctx->r2, 0XA);
    // 0x802A9864: addiu       $t9, $a0, -0x56
    ctx->r25 = ADD32(ctx->r4, -0X56);
    // 0x802A9868: subu        $t1, $t0, $a0
    ctx->r9 = SUB32(ctx->r8, ctx->r4);
    // 0x802A986C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x802A9870: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x802A9874: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802A9878: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x802A987C: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    // 0x802A9880: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802A9884: swc1        $f6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f6.u32l;
    // 0x802A9888: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    // 0x802A988C: jal         0x802A909C
    // 0x802A9890: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    func_802A909C(rdram, ctx);
        goto after_0;
    // 0x802A9890: swc1        $f10, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x802A9894: addiu       $t2, $v0, 0x2
    ctx->r10 = ADD32(ctx->r2, 0X2);
    // 0x802A9898: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x802A989C: nop

    // 0x802A98A0: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802A98A4: jal         0x802A909C
    // 0x802A98A8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    func_802A909C(rdram, ctx);
        goto after_1;
    // 0x802A98A8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_1:
    // 0x802A98AC: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x802A98B0: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802A98B4: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
    // 0x802A98B8: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x802A98BC: cvt.s.w     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802A98C0: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x802A98C4: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802A98C8: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802A98CC: addiu       $t6, $zero, 0x3D
    ctx->r14 = ADD32(0, 0X3D);
    // 0x802A98D0: bc1f        L_802A9908
    if (!c1cs) {
        // 0x802A98D4: subu        $t7, $t6, $v0
        ctx->r15 = SUB32(ctx->r14, ctx->r2);
            goto L_802A9908;
    }
    // 0x802A98D4: subu        $t7, $t6, $v0
    ctx->r15 = SUB32(ctx->r14, ctx->r2);
    // 0x802A98D8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x802A98DC: nop

    // 0x802A98E0: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x802A98E4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A98E8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A98EC: nop

    // 0x802A98F0: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x802A98F4: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x802A98F8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x802A98FC: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x802A9900: nop

    // 0x802A9904: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
L_802A9908:
    // 0x802A9908: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x802A990C: nop

    // 0x802A9910: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x802A9914: nop

    // 0x802A9918: bc1f        L_802A9950
    if (!c1cs) {
        // 0x802A991C: nop
    
            goto L_802A9950;
    }
    // 0x802A991C: nop

    // 0x802A9920: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802A9924: nop

    // 0x802A9928: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x802A992C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A9930: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A9934: nop

    // 0x802A9938: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x802A993C: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x802A9940: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802A9944: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x802A9948: nop

    // 0x802A994C: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
L_802A9950:
    // 0x802A9950: mtc1        $a1, $f16
    ctx->f16.u32l = ctx->r5;
    // 0x802A9954: nop

    // 0x802A9958: cvt.s.w     $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    ctx->f0.fl = CVT_S_W(ctx->f16.u32l);
    // 0x802A995C: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x802A9960: nop

    // 0x802A9964: bc1f        L_802A999C
    if (!c1cs) {
        // 0x802A9968: nop
    
            goto L_802A999C;
    }
    // 0x802A9968: nop

    // 0x802A996C: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802A9970: nop

    // 0x802A9974: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x802A9978: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A997C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A9980: nop

    // 0x802A9984: cvt.w.s     $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    ctx->f18.u32l = CVT_W_S(ctx->f12.fl);
    // 0x802A9988: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x802A998C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802A9990: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x802A9994: nop

    // 0x802A9998: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
L_802A999C:
    // 0x802A999C: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x802A99A0: nop

    // 0x802A99A4: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802A99A8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x802A99AC: nop

    // 0x802A99B0: bc1f        L_802A99E8
    if (!c1cs) {
        // 0x802A99B4: nop
    
            goto L_802A99E8;
    }
    // 0x802A99B4: nop

    // 0x802A99B8: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x802A99BC: nop

    // 0x802A99C0: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x802A99C4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A99C8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A99CC: nop

    // 0x802A99D0: cvt.w.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    ctx->f8.u32l = CVT_W_S(ctx->f12.fl);
    // 0x802A99D4: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802A99D8: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x802A99DC: mtc1        $a1, $f10
    ctx->f10.u32l = ctx->r5;
    // 0x802A99E0: nop

    // 0x802A99E4: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
L_802A99E8:
    // 0x802A99E8: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x802A99EC: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A99F0: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x802A99F4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A99F8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A99FC: addiu       $v0, $v0, 0x54B8
    ctx->r2 = ADD32(ctx->r2, 0X54B8);
    // 0x802A9A00: cvt.w.s     $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    ctx->f16.u32l = CVT_W_S(ctx->f2.fl);
    // 0x802A9A04: swc1        $f2, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f2.u32l;
    // 0x802A9A08: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x802A9A0C: lw          $t1, 0x4C($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4C);
    // 0x802A9A10: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x802A9A14: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x802A9A18: sh          $t0, 0x8($t1)
    MEM_H(0X8, ctx->r9) = ctx->r8;
    // 0x802A9A1C: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x802A9A20: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A9A24: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A9A28: swc1        $f0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f0.u32l;
    // 0x802A9A2C: cvt.w.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = CVT_W_S(ctx->f0.fl);
    // 0x802A9A30: lw          $t4, 0x4C($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4C);
    // 0x802A9A34: mfc1        $t3, $f18
    ctx->r11 = (int32_t)ctx->f18.u32l;
    // 0x802A9A38: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x802A9A3C: sh          $t3, 0xA($t4)
    MEM_H(0XA, ctx->r12) = ctx->r11;
    // 0x802A9A40: lw          $t5, 0x4C($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X4C);
    // 0x802A9A44: nop

    // 0x802A9A48: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x802A9A4C: nop

    // 0x802A9A50: andi        $t7, $t6, 0x10
    ctx->r15 = ctx->r14 & 0X10;
    // 0x802A9A54: beq         $t7, $zero, L_802A9A6C
    if (ctx->r15 == 0) {
        // 0x802A9A58: nop
    
            goto L_802A9A6C;
    }
    // 0x802A9A58: nop

    // 0x802A9A5C: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x802A9A60: nop

    // 0x802A9A64: xori        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 ^ 0X1;
    // 0x802A9A68: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
L_802A9A6C:
    // 0x802A9A6C: jal         0x802A9750
    // 0x802A9A70: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_802A9750(rdram, ctx);
        goto after_2;
    // 0x802A9A70: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
L_802A9A74:
    // 0x802A9A74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A9A78: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802A9A7C: jr          $ra
    // 0x802A9A80: nop

    return;
    // 0x802A9A80: nop

;}
RECOMP_FUNC void func_802A9A84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9A84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802A9A88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A9A8C: lw          $t6, 0x68($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X68);
    // 0x802A9A90: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x802A9A94: bne         $t6, $zero, L_802A9AB0
    if (ctx->r14 != 0) {
        // 0x802A9A98: lui         $v0, 0x802C
        ctx->r2 = S32(0X802C << 16);
            goto L_802A9AB0;
    }
    // 0x802A9A98: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A9A9C: lw          $t7, 0x0($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X0);
    // 0x802A9AA0: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x802A9AA4: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x802A9AA8: b           L_802A9CA8
    // 0x802A9AAC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
        goto L_802A9CA8;
    // 0x802A9AAC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
L_802A9AB0:
    // 0x802A9AB0: lw          $v0, 0x50D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X50D8);
    // 0x802A9AB4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x802A9AB8: beq         $v0, $at, L_802A9CA0
    if (ctx->r2 == ctx->r1) {
        // 0x802A9ABC: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_802A9CA0;
    }
    // 0x802A9ABC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x802A9AC0: beq         $v0, $at, L_802A9CA0
    if (ctx->r2 == ctx->r1) {
        // 0x802A9AC4: lui         $a3, 0x802C
        ctx->r7 = S32(0X802C << 16);
            goto L_802A9CA0;
    }
    // 0x802A9AC4: lui         $a3, 0x802C
    ctx->r7 = S32(0X802C << 16);
    // 0x802A9AC8: addiu       $a3, $a3, 0x55B8
    ctx->r7 = ADD32(ctx->r7, 0X55B8);
    // 0x802A9ACC: lw          $a0, 0x30($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X30);
    // 0x802A9AD0: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x802A9AD4: lh          $v0, 0x50D0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X50D0);
    // 0x802A9AD8: lh          $v1, 0x8($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X8);
    // 0x802A9ADC: addiu       $t9, $zero, -0x56
    ctx->r25 = ADD32(0, -0X56);
    // 0x802A9AE0: subu        $t0, $t9, $v0
    ctx->r8 = SUB32(ctx->r25, ctx->r2);
    // 0x802A9AE4: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x802A9AE8: mtc1        $v1, $f18
    ctx->f18.u32l = ctx->r3;
    // 0x802A9AEC: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802A9AF0: addiu       $t1, $v0, 0x56
    ctx->r9 = ADD32(ctx->r2, 0X56);
    // 0x802A9AF4: addiu       $t2, $v0, 0x2
    ctx->r10 = ADD32(ctx->r2, 0X2);
    // 0x802A9AF8: cvt.s.w     $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    ctx->f2.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802A9AFC: addiu       $t3, $v0, 0x3D
    ctx->r11 = ADD32(ctx->r2, 0X3D);
    // 0x802A9B00: mtc1        $t1, $f6
    ctx->f6.u32l = ctx->r9;
    // 0x802A9B04: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x802A9B08: mtc1        $t3, $f10
    ctx->f10.u32l = ctx->r11;
    // 0x802A9B0C: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x802A9B10: lh          $a1, 0xA($a0)
    ctx->r5 = MEM_H(ctx->r4, 0XA);
    // 0x802A9B14: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    // 0x802A9B18: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    // 0x802A9B1C: bc1f        L_802A9B54
    if (!c1cs) {
        // 0x802A9B20: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_802A9B54;
    }
    // 0x802A9B20: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x802A9B24: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x802A9B28: nop

    // 0x802A9B2C: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x802A9B30: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A9B34: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A9B38: nop

    // 0x802A9B3C: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x802A9B40: mfc1        $v1, $f4
    ctx->r3 = (int32_t)ctx->f4.u32l;
    // 0x802A9B44: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x802A9B48: mtc1        $v1, $f6
    ctx->f6.u32l = ctx->r3;
    // 0x802A9B4C: nop

    // 0x802A9B50: cvt.s.w     $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    ctx->f2.fl = CVT_S_W(ctx->f6.u32l);
L_802A9B54:
    // 0x802A9B54: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x802A9B58: nop

    // 0x802A9B5C: bc1f        L_802A9B94
    if (!c1cs) {
        // 0x802A9B60: nop
    
            goto L_802A9B94;
    }
    // 0x802A9B60: nop

    // 0x802A9B64: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x802A9B68: nop

    // 0x802A9B6C: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x802A9B70: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A9B74: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A9B78: nop

    // 0x802A9B7C: cvt.w.s     $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    ctx->f8.u32l = CVT_W_S(ctx->f12.fl);
    // 0x802A9B80: mfc1        $v1, $f8
    ctx->r3 = (int32_t)ctx->f8.u32l;
    // 0x802A9B84: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x802A9B88: mtc1        $v1, $f10
    ctx->f10.u32l = ctx->r3;
    // 0x802A9B8C: nop

    // 0x802A9B90: cvt.s.w     $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    ctx->f2.fl = CVT_S_W(ctx->f10.u32l);
L_802A9B94:
    // 0x802A9B94: mtc1        $a1, $f18
    ctx->f18.u32l = ctx->r5;
    // 0x802A9B98: nop

    // 0x802A9B9C: cvt.s.w     $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    ctx->f0.fl = CVT_S_W(ctx->f18.u32l);
    // 0x802A9BA0: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x802A9BA4: nop

    // 0x802A9BA8: bc1f        L_802A9BE0
    if (!c1cs) {
        // 0x802A9BAC: nop
    
            goto L_802A9BE0;
    }
    // 0x802A9BAC: nop

    // 0x802A9BB0: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x802A9BB4: nop

    // 0x802A9BB8: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x802A9BBC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A9BC0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A9BC4: nop

    // 0x802A9BC8: cvt.w.s     $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    ctx->f4.u32l = CVT_W_S(ctx->f14.fl);
    // 0x802A9BCC: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x802A9BD0: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x802A9BD4: mtc1        $a1, $f6
    ctx->f6.u32l = ctx->r5;
    // 0x802A9BD8: nop

    // 0x802A9BDC: cvt.s.w     $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    ctx->f0.fl = CVT_S_W(ctx->f6.u32l);
L_802A9BE0:
    // 0x802A9BE0: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x802A9BE4: nop

    // 0x802A9BE8: bc1f        L_802A9C20
    if (!c1cs) {
        // 0x802A9BEC: nop
    
            goto L_802A9C20;
    }
    // 0x802A9BEC: nop

    // 0x802A9BF0: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x802A9BF4: nop

    // 0x802A9BF8: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x802A9BFC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A9C00: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A9C04: nop

    // 0x802A9C08: cvt.w.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.u32l = CVT_W_S(ctx->f16.fl);
    // 0x802A9C0C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x802A9C10: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x802A9C14: mtc1        $a1, $f10
    ctx->f10.u32l = ctx->r5;
    // 0x802A9C18: nop

    // 0x802A9C1C: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
L_802A9C20:
    // 0x802A9C20: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x802A9C24: swc1        $f2, 0xC($a2)
    MEM_W(0XC, ctx->r6) = ctx->f2.u32l;
    // 0x802A9C28: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x802A9C2C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A9C30: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A9C34: lw          $t0, 0x30($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X30);
    // 0x802A9C38: cvt.w.s     $f18, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    ctx->f18.u32l = CVT_W_S(ctx->f2.fl);
    // 0x802A9C3C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x802A9C40: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x802A9C44: nop

    // 0x802A9C48: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x802A9C4C: sh          $t9, 0x8($t0)
    MEM_H(0X8, ctx->r8) = ctx->r25;
    // 0x802A9C50: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x802A9C54: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x802A9C58: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x802A9C5C: swc1        $f0, 0x10($a2)
    MEM_W(0X10, ctx->r6) = ctx->f0.u32l;
    // 0x802A9C60: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x802A9C64: lw          $t3, 0x30($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X30);
    // 0x802A9C68: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x802A9C6C: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x802A9C70: sh          $t2, 0xA($t3)
    MEM_H(0XA, ctx->r11) = ctx->r10;
    // 0x802A9C74: lw          $t4, 0x30($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X30);
    // 0x802A9C78: nop

    // 0x802A9C7C: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x802A9C80: nop

    // 0x802A9C84: andi        $t6, $t5, 0x10
    ctx->r14 = ctx->r13 & 0X10;
    // 0x802A9C88: beq         $t6, $zero, L_802A9CA0
    if (ctx->r14 == 0) {
        // 0x802A9C8C: nop
    
            goto L_802A9CA0;
    }
    // 0x802A9C8C: nop

    // 0x802A9C90: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x802A9C94: nop

    // 0x802A9C98: xori        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 ^ 0X1;
    // 0x802A9C9C: sw          $t8, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r24;
L_802A9CA0:
    // 0x802A9CA0: jal         0x802A9750
    // 0x802A9CA4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_802A9750(rdram, ctx);
        goto after_0;
    // 0x802A9CA4: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
L_802A9CA8:
    // 0x802A9CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A9CAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802A9CB0: jr          $ra
    // 0x802A9CB4: nop

    return;
    // 0x802A9CB4: nop

;}
RECOMP_FUNC void func_802A9CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9CB8: jr          $ra
    // 0x802A9CBC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x802A9CBC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_802A9CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9CC0: lui         $t0, 0x802C
    ctx->r8 = S32(0X802C << 16);
    // 0x802A9CC4: addiu       $t0, $t0, 0x53F8
    ctx->r8 = ADD32(ctx->r8, 0X53F8);
    // 0x802A9CC8: lh          $t6, 0x20($t0)
    ctx->r14 = MEM_H(ctx->r8, 0X20);
    // 0x802A9CCC: lui         $v1, 0x802C
    ctx->r3 = S32(0X802C << 16);
    // 0x802A9CD0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x802A9CD4: addiu       $v1, $v1, 0x4FD0
    ctx->r3 = ADD32(ctx->r3, 0X4FD0);
    // 0x802A9CD8: sh          $t7, 0x20($t0)
    MEM_H(0X20, ctx->r8) = ctx->r15;
    // 0x802A9CDC: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x802A9CE0: lh          $v0, 0x20($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X20);
    // 0x802A9CE4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x802A9CE8: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x802A9CEC: bne         $at, $zero, L_802A9D00
    if (ctx->r1 != 0) {
        // 0x802A9CF0: sh          $t9, 0x0($v1)
        MEM_H(0X0, ctx->r3) = ctx->r25;
            goto L_802A9D00;
    }
    // 0x802A9CF0: sh          $t9, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r25;
    // 0x802A9CF4: sh          $zero, 0x20($t0)
    MEM_H(0X20, ctx->r8) = 0;
    // 0x802A9CF8: lh          $v0, 0x20($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X20);
    // 0x802A9CFC: nop

L_802A9D00:
    // 0x802A9D00: lui         $t1, 0x802C
    ctx->r9 = S32(0X802C << 16);
    // 0x802A9D04: addiu       $t1, $t1, 0x53E0
    ctx->r9 = ADD32(ctx->r9, 0X53E0);
    // 0x802A9D08: sll         $t3, $v0, 1
    ctx->r11 = S32(ctx->r2 << 1);
    // 0x802A9D0C: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x802A9D10: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x802A9D14: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x802A9D18: bne         $v1, $t5, L_802A9D60
    if (ctx->r3 != ctx->r13) {
        // 0x802A9D1C: lui         $t2, 0x802C
        ctx->r10 = S32(0X802C << 16);
            goto L_802A9D60;
    }
    // 0x802A9D1C: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x802A9D20: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
L_802A9D24:
    // 0x802A9D24: sh          $t6, 0x20($t0)
    MEM_H(0X20, ctx->r8) = ctx->r14;
    // 0x802A9D28: lh          $v0, 0x20($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X20);
    // 0x802A9D2C: nop

    // 0x802A9D30: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x802A9D34: bne         $at, $zero, L_802A9D4C
    if (ctx->r1 != 0) {
        // 0x802A9D38: sll         $t7, $v0, 1
        ctx->r15 = S32(ctx->r2 << 1);
            goto L_802A9D4C;
    }
    // 0x802A9D38: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x802A9D3C: sh          $zero, 0x20($t0)
    MEM_H(0X20, ctx->r8) = 0;
    // 0x802A9D40: lh          $v0, 0x20($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X20);
    // 0x802A9D44: nop

    // 0x802A9D48: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
L_802A9D4C:
    // 0x802A9D4C: addu        $t8, $t1, $t7
    ctx->r24 = ADD32(ctx->r9, ctx->r15);
    // 0x802A9D50: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x802A9D54: nop

    // 0x802A9D58: beq         $v1, $t9, L_802A9D24
    if (ctx->r3 == ctx->r25) {
        // 0x802A9D5C: addiu       $t6, $v0, 0x1
        ctx->r14 = ADD32(ctx->r2, 0X1);
            goto L_802A9D24;
    }
    // 0x802A9D5C: addiu       $t6, $v0, 0x1
    ctx->r14 = ADD32(ctx->r2, 0X1);
L_802A9D60:
    // 0x802A9D60: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802A9D64: addiu       $t2, $t2, 0x53C8
    ctx->r10 = ADD32(ctx->r10, 0X53C8);
L_802A9D68:
    // 0x802A9D68: sll         $a1, $v1, 1
    ctx->r5 = S32(ctx->r3 << 1);
    // 0x802A9D6C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802A9D70: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x802A9D74: addu        $a2, $t1, $a1
    ctx->r6 = ADD32(ctx->r9, ctx->r5);
    // 0x802A9D78: addu        $a3, $t2, $a1
    ctx->r7 = ADD32(ctx->r10, ctx->r5);
    // 0x802A9D7C: lh          $a0, 0x0($a2)
    ctx->r4 = MEM_H(ctx->r6, 0X0);
    // 0x802A9D80: lh          $t3, 0x0($a3)
    ctx->r11 = MEM_H(ctx->r7, 0X0);
    // 0x802A9D84: sra         $v1, $t4, 16
    ctx->r3 = S32(SIGNED(ctx->r12) >> 16);
    // 0x802A9D88: slti        $at, $v1, 0xB
    ctx->r1 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x802A9D8C: sh          $a0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r4;
    // 0x802A9D90: bne         $at, $zero, L_802A9D68
    if (ctx->r1 != 0) {
        // 0x802A9D94: sh          $t3, 0x0($a2)
        MEM_H(0X0, ctx->r6) = ctx->r11;
            goto L_802A9D68;
    }
    // 0x802A9D94: sh          $t3, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r11;
    // 0x802A9D98: lh          $t7, 0x22($t0)
    ctx->r15 = MEM_H(ctx->r8, 0X22);
    // 0x802A9D9C: sh          $v0, 0x22($t0)
    MEM_H(0X22, ctx->r8) = ctx->r2;
    // 0x802A9DA0: jr          $ra
    // 0x802A9DA4: sh          $t7, 0x20($t0)
    MEM_H(0X20, ctx->r8) = ctx->r15;
    return;
    // 0x802A9DA4: sh          $t7, 0x20($t0)
    MEM_H(0X20, ctx->r8) = ctx->r15;
;}
RECOMP_FUNC void func_802A9DA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802A9DA8: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x802A9DAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802A9DB0: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x802A9DB4: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x802A9DB8: addiu       $t8, $t8, -0x3770
    ctx->r24 = ADD32(ctx->r24, -0X3770);
    // 0x802A9DBC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802A9DC0: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802A9DC4: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x802A9DC8: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x802A9DCC: addu        $v0, $v1, $at
    ctx->r2 = ADD32(ctx->r3, ctx->r1);
    // 0x802A9DD0: lbu         $t9, 0x214C($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X214C);
    // 0x802A9DD4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x802A9DD8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x802A9DDC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x802A9DE0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x802A9DE4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x802A9DE8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x802A9DEC: ori         $at, $at, 0xA144
    ctx->r1 = ctx->r1 | 0XA144;
    // 0x802A9DF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802A9DF4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802A9DF8: addu        $a0, $v1, $at
    ctx->r4 = ADD32(ctx->r3, ctx->r1);
    // 0x802A9DFC: lbu         $a2, 0x3F($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X3F);
    // 0x802A9E00: lbu         $a1, 0x3B($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X3B);
    // 0x802A9E04: andi        $t0, $t9, 0xFF01
    ctx->r8 = ctx->r25 & 0XFF01;
    // 0x802A9E08: sb          $t0, 0x214C($v0)
    MEM_B(0X214C, ctx->r2) = ctx->r8;
    // 0x802A9E0C: sb          $a3, 0x2149($v0)
    MEM_B(0X2149, ctx->r2) = ctx->r7;
    // 0x802A9E10: sb          $t1, 0x2148($v0)
    MEM_B(0X2148, ctx->r2) = ctx->r9;
    // 0x802A9E14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802A9E18: sh          $t2, 0x2156($v0)
    MEM_H(0X2156, ctx->r2) = ctx->r10;
    // 0x802A9E1C: jal         0x8002135C
    // 0x802A9E20: sw          $t3, 0x2174($v0)
    MEM_W(0X2174, ctx->r2) = ctx->r11;
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x802A9E20: sw          $t3, 0x2174($v0)
    MEM_W(0X2174, ctx->r2) = ctx->r11;
    after_0:
    // 0x802A9E24: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802A9E28: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x802A9E2C: nop

    // 0x802A9E30: sh          $t4, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r12;
    // 0x802A9E34: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x802A9E38: nop

    // 0x802A9E3C: sh          $t5, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r13;
    // 0x802A9E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802A9E44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802A9E48: jr          $ra
    // 0x802A9E4C: nop

    return;
    // 0x802A9E4C: nop

;}
