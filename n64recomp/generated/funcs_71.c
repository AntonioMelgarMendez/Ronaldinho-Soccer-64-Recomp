#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80276C1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276C1C: bne         $t6, $at, L_80276C48
    if (ctx->r14 != ctx->r1) {
        // 0x80276C20: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80276C48;
    }
    // 0x80276C20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80276C24: lb          $t7, 0x4C($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X4C);
    // 0x80276C28: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80276C2C: bne         $t7, $at, L_80276C48
    if (ctx->r15 != ctx->r1) {
        // 0x80276C30: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80276C48;
    }
    // 0x80276C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80276C34: jal         0x80035770
    // 0x80276C38: nop

    func_80035770(rdram, ctx);
        goto after_0;
    // 0x80276C38: nop

    after_0:
    // 0x80276C3C: jal         0x802794F4
    // 0x80276C40: nop

    func_802794F4(rdram, ctx);
        goto after_1;
    // 0x80276C40: nop

    after_1:
    // 0x80276C44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80276C48:
    // 0x80276C48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80276C4C: jr          $ra
    // 0x80276C50: nop

    return;
    // 0x80276C50: nop

;}
RECOMP_FUNC void func_80276C54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276C54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80276C58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80276C5C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80276C60: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x80276C64: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80276C68: beq         $v0, $at, L_80276C80
    if (ctx->r2 == ctx->r1) {
        // 0x80276C6C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80276C80;
    }
    // 0x80276C6C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80276C70: beq         $v0, $at, L_80276C80
    if (ctx->r2 == ctx->r1) {
        // 0x80276C74: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_80276C80;
    }
    // 0x80276C74: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80276C78: bne         $v0, $at, L_80276CA4
    if (ctx->r2 != ctx->r1) {
        // 0x80276C7C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80276CA4;
    }
    // 0x80276C7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80276C80:
    // 0x80276C80: jal         0x80035734
    // 0x80276C84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x80276C84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80276C88: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80276C8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80276C90: lb          $t6, 0x40($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X40);
    // 0x80276C94: sb          $v0, 0x41($a0)
    MEM_B(0X41, ctx->r4) = ctx->r2;
    // 0x80276C98: subu        $t7, $v0, $t6
    ctx->r15 = SUB32(ctx->r2, ctx->r14);
    // 0x80276C9C: sb          $t7, 0x40($a0)
    MEM_B(0X40, ctx->r4) = ctx->r15;
    // 0x80276CA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80276CA4:
    // 0x80276CA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80276CA8: jr          $ra
    // 0x80276CAC: nop

    return;
    // 0x80276CAC: nop

;}
RECOMP_FUNC void func_80276CB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276CB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80276CB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80276CB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80276CBC: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x80276CC0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80276CC4: beq         $v0, $at, L_80276CDC
    if (ctx->r2 == ctx->r1) {
        // 0x80276CC8: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80276CDC;
    }
    // 0x80276CC8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80276CCC: beq         $v0, $at, L_80276CDC
    if (ctx->r2 == ctx->r1) {
        // 0x80276CD0: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_80276CDC;
    }
    // 0x80276CD0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80276CD4: bne         $v0, $at, L_80276D00
    if (ctx->r2 != ctx->r1) {
        // 0x80276CD8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80276D00;
    }
    // 0x80276CD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80276CDC:
    // 0x80276CDC: jal         0x80035734
    // 0x80276CE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x80276CE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80276CE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80276CE8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80276CEC: lb          $t6, 0x3F($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X3F);
    // 0x80276CF0: nop

    // 0x80276CF4: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x80276CF8: sb          $t8, 0x3F($a0)
    MEM_B(0X3F, ctx->r4) = ctx->r24;
    // 0x80276CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80276D00:
    // 0x80276D00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80276D04: jr          $ra
    // 0x80276D08: nop

    return;
    // 0x80276D08: nop

;}
RECOMP_FUNC void func_80276CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276CD0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80276CD4: bne         $v0, $at, L_80276D00
    if (ctx->r2 != ctx->r1) {
        // 0x80276CD8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80276D00;
    }
    // 0x80276CD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80276CDC: jal         0x80035734
    // 0x80276CE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035734(rdram, ctx);
        goto after_0;
    // 0x80276CE0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80276CE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80276CE8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80276CEC: lb          $t6, 0x3F($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X3F);
    // 0x80276CF0: nop

    // 0x80276CF4: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x80276CF8: sb          $t8, 0x3F($a0)
    MEM_B(0X3F, ctx->r4) = ctx->r24;
    // 0x80276CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80276D00:
    // 0x80276D00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80276D04: jr          $ra
    // 0x80276D08: nop

    return;
    // 0x80276D08: nop

;}
RECOMP_FUNC void func_80276D0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276D0C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80276D10: jr          $ra
    // 0x80276D14: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x80276D14: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80276D18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276D18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80276D1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80276D20: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80276D24: addiu       $s0, $s0, 0x1CF0
    ctx->r16 = ADD32(ctx->r16, 0X1CF0);
    // 0x80276D28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80276D2C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80276D30: jal         0x8006F5B8
    // 0x80276D34: nop

    func_8006F5B8(rdram, ctx);
        goto after_0;
    // 0x80276D34: nop

    after_0:
    // 0x80276D38: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80276D3C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80276D40: sb          $zero, 0x2F($t6)
    MEM_B(0X2F, ctx->r14) = 0;
    // 0x80276D44: lb          $t7, -0x326C($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X326C);
    // 0x80276D48: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80276D4C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80276D50: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80276D54: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80276D58: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80276D5C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80276D60: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80276D64: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80276D68: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80276D6C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80276D70: addu        $v0, $v0, $t8
    ctx->r2 = ADD32(ctx->r2, ctx->r24);
    // 0x80276D74: lb          $v0, -0x2CEF($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2CEF);
    // 0x80276D78: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80276D7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80276D80: sb          $v0, 0x3B($t9)
    MEM_B(0X3B, ctx->r25) = ctx->r2;
    // 0x80276D84: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    // 0x80276D88: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80276D8C: sb          $v0, 0x3A($t0)
    MEM_B(0X3A, ctx->r8) = ctx->r2;
    // 0x80276D90: lw          $t1, 0x0($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X0);
    // 0x80276D94: nop

    // 0x80276D98: lb          $a0, 0x3A($t1)
    ctx->r4 = MEM_B(ctx->r9, 0X3A);
    // 0x80276D9C: jal         0x8001D4C0
    // 0x80276DA0: nop

    func_8001D4C0(rdram, ctx);
        goto after_1;
    // 0x80276DA0: nop

    after_1:
    // 0x80276DA4: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80276DA8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80276DAC: sb          $t2, 0x3D($t3)
    MEM_B(0X3D, ctx->r11) = ctx->r10;
    // 0x80276DB0: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x80276DB4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80276DB8: sb          $zero, 0x57($t4)
    MEM_B(0X57, ctx->r12) = 0;
    // 0x80276DBC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x80276DC0: jal         0x80034908
    // 0x80276DC4: nop

    func_80034908(rdram, ctx);
        goto after_2;
    // 0x80276DC4: nop

    after_2:
    // 0x80276DC8: beq         $v0, $zero, L_80276DE0
    if (ctx->r2 == 0) {
        // 0x80276DCC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80276DE0;
    }
    // 0x80276DCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80276DD0: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80276DD4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80276DD8: sb          $t5, 0x5A($t6)
    MEM_B(0X5A, ctx->r14) = ctx->r13;
    // 0x80276DDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80276DE0:
    // 0x80276DE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80276DE4: jr          $ra
    // 0x80276DE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80276DE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80276DEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276DEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80276DF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80276DF4: jal         0x80277178
    // 0x80276DF8: nop

    func_80277178(rdram, ctx);
        goto after_0;
    // 0x80276DF8: nop

    after_0:
    // 0x80276DFC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80276E00: lb          $t8, -0x326C($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X326C);
    // 0x80276E04: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80276E08: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80276E0C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80276E10: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80276E14: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80276E18: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80276E1C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80276E20: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x80276E24: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80276E28: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80276E2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80276E30: lb          $t7, 0x3B($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X3B);
    // 0x80276E34: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80276E38: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80276E3C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80276E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80276E44: jr          $ra
    // 0x80276E48: sb          $t7, -0x2CEF($at)
    MEM_B(-0X2CEF, ctx->r1) = ctx->r15;
    return;
    // 0x80276E48: sb          $t7, -0x2CEF($at)
    MEM_B(-0X2CEF, ctx->r1) = ctx->r15;
;}
RECOMP_FUNC void func_80276E4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276E4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80276E50: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80276E54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80276E58: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x80276E5C: lui         $a1, 0x8029
    ctx->r5 = S32(0X8029 << 16);
    // 0x80276E60: jal         0x800344BC
    // 0x80276E64: addiu       $a1, $a1, -0x79C8
    ctx->r5 = ADD32(ctx->r5, -0X79C8);
    func_800344BC(rdram, ctx);
        goto after_0;
    // 0x80276E64: addiu       $a1, $a1, -0x79C8
    ctx->r5 = ADD32(ctx->r5, -0X79C8);
    after_0:
    // 0x80276E68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80276E6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80276E70: jr          $ra
    // 0x80276E74: nop

    return;
    // 0x80276E74: nop

;}
RECOMP_FUNC void func_80276E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276E78: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x80276E7C: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x80276E80: lui         $t8, 0x8029
    ctx->r24 = S32(0X8029 << 16);
    // 0x80276E84: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80276E88: lbu         $t8, -0x79C8($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X79C8);
    // 0x80276E8C: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    // 0x80276E90: beq         $t8, $at, L_80276EA0
    if (ctx->r24 == ctx->r1) {
        // 0x80276E94: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_80276EA0;
    }
    // 0x80276E94: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80276E98: jr          $ra
    // 0x80276E9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80276E9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80276EA0:
    // 0x80276EA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80276EA4: jr          $ra
    // 0x80276EA8: nop

    return;
    // 0x80276EA8: nop

;}
RECOMP_FUNC void func_80276EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276EAC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80276EB0: lw          $v0, 0x1CF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X1CF0);
    // 0x80276EB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80276EB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80276EBC: lb          $a2, 0x3A($v0)
    ctx->r6 = MEM_B(ctx->r2, 0X3A);
    // 0x80276EC0: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x80276EC4: sll         $t6, $a2, 5
    ctx->r14 = S32(ctx->r6 << 5);
    // 0x80276EC8: lw          $t7, 0xFA0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XFA0);
    // 0x80276ECC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80276ED0: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x80276ED4: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x80276ED8: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x80276EDC: lb          $a1, 0x57($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X57);
    // 0x80276EE0: jal         0x80034520
    // 0x80276EE4: addu        $a3, $t6, $t7
    ctx->r7 = ADD32(ctx->r14, ctx->r15);
    func_80034520(rdram, ctx);
        goto after_0;
    // 0x80276EE4: addu        $a3, $t6, $t7
    ctx->r7 = ADD32(ctx->r14, ctx->r15);
    after_0:
    // 0x80276EE8: jal         0x80276E4C
    // 0x80276EEC: nop

    func_80276E4C(rdram, ctx);
        goto after_1;
    // 0x80276EEC: nop

    after_1:
    // 0x80276EF0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80276EF4: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x80276EF8: jal         0x80034908
    // 0x80276EFC: nop

    func_80034908(rdram, ctx);
        goto after_2;
    // 0x80276EFC: nop

    after_2:
    // 0x80276F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80276F04: bne         $v0, $zero, L_80276F18
    if (ctx->r2 != 0) {
        // 0x80276F08: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80276F18;
    }
    // 0x80276F08: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80276F0C: b           L_80276F18
    // 0x80276F10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80276F18;
    // 0x80276F10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80276F14: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80276F18:
    // 0x80276F18: jr          $ra
    // 0x80276F1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80276F1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80276EF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276EF0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80276EF4: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x80276EF8: jal         0x80034908
    // 0x80276EFC: nop

    func_80034908(rdram, ctx);
        goto after_0;
    // 0x80276EFC: nop

    after_0:
    // 0x80276F00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80276F04: bne         $v0, $zero, L_80276F18
    if (ctx->r2 != 0) {
        // 0x80276F08: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80276F18;
    }
    // 0x80276F08: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80276F0C: b           L_80276F18
    // 0x80276F10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80276F18;
    // 0x80276F10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80276F14: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80276F18:
    // 0x80276F18: jr          $ra
    // 0x80276F1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80276F1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80276F20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276F20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80276F24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80276F28: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80276F2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80276F30: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x80276F34: jal         0x80035154
    // 0x80276F38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035154(rdram, ctx);
        goto after_0;
    // 0x80276F38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80276F3C: bne         $v0, $zero, L_80276F74
    if (ctx->r2 != 0) {
        // 0x80276F40: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80276F74;
    }
    // 0x80276F40: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80276F44: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80276F48: addiu       $v0, $v0, 0x1CF0
    ctx->r2 = ADD32(ctx->r2, 0X1CF0);
    // 0x80276F4C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80276F50: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80276F54: jal         0x80277340
    // 0x80276F58: sb          $t6, 0x55($t7)
    MEM_B(0X55, ctx->r15) = ctx->r14;
    func_80277340(rdram, ctx);
        goto after_1;
    // 0x80276F58: sb          $t6, 0x55($t7)
    MEM_B(0X55, ctx->r15) = ctx->r14;
    after_1:
    // 0x80276F5C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80276F60: addiu       $a0, $a0, 0x7004
    ctx->r4 = ADD32(ctx->r4, 0X7004);
    // 0x80276F64: jal         0x8002989C
    // 0x80276F68: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8002989C(rdram, ctx);
        goto after_2;
    // 0x80276F68: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_2:
    // 0x80276F6C: b           L_80276FA4
    // 0x80276F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80276FA4;
    // 0x80276F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80276F74:
    // 0x80276F74: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80276F78: addiu       $v0, $v0, 0x1CF0
    ctx->r2 = ADD32(ctx->r2, 0X1CF0);
    // 0x80276F7C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80276F80: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x80276F84: sb          $t8, 0x5B($t9)
    MEM_B(0X5B, ctx->r25) = ctx->r24;
    // 0x80276F88: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80276F8C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80276F90: addiu       $a0, $a0, 0x7004
    ctx->r4 = ADD32(ctx->r4, 0X7004);
    // 0x80276F94: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80276F98: jal         0x8002989C
    // 0x80276F9C: sb          $t0, 0x55($t1)
    MEM_B(0X55, ctx->r9) = ctx->r8;
    func_8002989C(rdram, ctx);
        goto after_3;
    // 0x80276F9C: sb          $t0, 0x55($t1)
    MEM_B(0X55, ctx->r9) = ctx->r8;
    after_3:
    // 0x80276FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80276FA4:
    // 0x80276FA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80276FA8: jr          $ra
    // 0x80276FAC: nop

    return;
    // 0x80276FAC: nop

;}
RECOMP_FUNC void func_80276F34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276F34: jal         0x80035154
    // 0x80276F38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035154(rdram, ctx);
        goto after_0;
    // 0x80276F38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80276F3C: bne         $v0, $zero, L_80276F74
    if (ctx->r2 != 0) {
        // 0x80276F40: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80276F74;
    }
    // 0x80276F40: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80276F44: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80276F48: addiu       $v0, $v0, 0x1CF0
    ctx->r2 = ADD32(ctx->r2, 0X1CF0);
    // 0x80276F4C: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80276F50: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80276F54: jal         0x80277340
    // 0x80276F58: sb          $t6, 0x55($t7)
    MEM_B(0X55, ctx->r15) = ctx->r14;
    func_80277340(rdram, ctx);
        goto after_1;
    // 0x80276F58: sb          $t6, 0x55($t7)
    MEM_B(0X55, ctx->r15) = ctx->r14;
    after_1:
    // 0x80276F5C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80276F60: addiu       $a0, $a0, 0x7004
    ctx->r4 = ADD32(ctx->r4, 0X7004);
    // 0x80276F64: jal         0x8002989C
    // 0x80276F68: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8002989C(rdram, ctx);
        goto after_2;
    // 0x80276F68: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_2:
    // 0x80276F6C: b           L_80276FA4
    // 0x80276F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80276FA4;
    // 0x80276F70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80276F74:
    // 0x80276F74: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80276F78: addiu       $v0, $v0, 0x1CF0
    ctx->r2 = ADD32(ctx->r2, 0X1CF0);
    // 0x80276F7C: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80276F80: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x80276F84: sb          $t8, 0x5B($t9)
    MEM_B(0X5B, ctx->r25) = ctx->r24;
    // 0x80276F88: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80276F8C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80276F90: addiu       $a0, $a0, 0x7004
    ctx->r4 = ADD32(ctx->r4, 0X7004);
    // 0x80276F94: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80276F98: jal         0x8002989C
    // 0x80276F9C: sb          $t0, 0x55($t1)
    MEM_B(0X55, ctx->r9) = ctx->r8;
    func_8002989C(rdram, ctx);
        goto after_3;
    // 0x80276F9C: sb          $t0, 0x55($t1)
    MEM_B(0X55, ctx->r9) = ctx->r8;
    after_3:
    // 0x80276FA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80276FA4:
    // 0x80276FA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80276FA8: jr          $ra
    // 0x80276FAC: nop

    return;
    // 0x80276FAC: nop

;}
RECOMP_FUNC void func_80276FB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80276FB0: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80276FB4: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x80276FB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80276FBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80276FC0: lb          $a1, 0x57($t6)
    ctx->r5 = MEM_B(ctx->r14, 0X57);
    // 0x80276FC4: lui         $v0, 0x8029
    ctx->r2 = S32(0X8029 << 16);
    // 0x80276FC8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80276FCC: lb          $v0, -0x79C8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X79C8);
    // 0x80276FD0: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80276FD4: sll         $t7, $v0, 5
    ctx->r15 = S32(ctx->r2 << 5);
    // 0x80276FD8: lw          $t8, 0xFA0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XFA0);
    // 0x80276FDC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80276FE0: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x80276FE4: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80276FE8: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x80276FEC: jal         0x800347A8
    // 0x80276FF0: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
    func_800347A8(rdram, ctx);
        goto after_0;
    // 0x80276FF0: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
    after_0:
    // 0x80276FF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80276FF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80276FFC: jr          $ra
    // 0x80277000: nop

    return;
    // 0x80277000: nop

;}
RECOMP_FUNC void func_80277004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277004: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80277008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027700C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80277010: jal         0x802777C8
    // 0x80277014: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    func_802777C8(rdram, ctx);
        goto after_0;
    // 0x80277014: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    after_0:
    // 0x80277018: jal         0x802771FC
    // 0x8027701C: nop

    func_802771FC(rdram, ctx);
        goto after_1;
    // 0x8027701C: nop

    after_1:
    // 0x80277020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80277024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80277028: jr          $ra
    // 0x8027702C: nop

    return;
    // 0x8027702C: nop

;}
RECOMP_FUNC void func_80277030(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277030: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80277034: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80277038: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027703C: jal         0x802777C8
    // 0x80277040: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    func_802777C8(rdram, ctx);
        goto after_0;
    // 0x80277040: sb          $zero, 0x38($a0)
    MEM_B(0X38, ctx->r4) = 0;
    after_0:
    // 0x80277044: jal         0x802771FC
    // 0x80277048: nop

    func_802771FC(rdram, ctx);
        goto after_1;
    // 0x80277048: nop

    after_1:
    // 0x8027704C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80277050: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80277054: jr          $ra
    // 0x80277058: nop

    return;
    // 0x80277058: nop

;}
RECOMP_FUNC void func_8027705C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027705C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80277060: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80277064: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80277068: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8027706C: sb          $zero, 0x56($a0)
    MEM_B(0X56, ctx->r4) = 0;
    // 0x80277070: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x80277074: jal         0x800296E0
    // 0x80277078: addiu       $a0, $a0, 0x5510
    ctx->r4 = ADD32(ctx->r4, 0X5510);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x80277078: addiu       $a0, $a0, 0x5510
    ctx->r4 = ADD32(ctx->r4, 0X5510);
    after_0:
    // 0x8027707C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80277080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80277084: jr          $ra
    // 0x80277088: nop

    return;
    // 0x80277088: nop

;}
RECOMP_FUNC void func_8027708C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027708C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80277090: addiu       $v0, $v0, 0x1CF0
    ctx->r2 = ADD32(ctx->r2, 0X1CF0);
    // 0x80277094: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80277098: nop

    // 0x8027709C: sb          $zero, 0x41($t6)
    MEM_B(0X41, ctx->r14) = 0;
    // 0x802770A0: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x802770A4: nop

    // 0x802770A8: sb          $zero, 0x47($t7)
    MEM_B(0X47, ctx->r15) = 0;
    // 0x802770AC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x802770B0: nop

    // 0x802770B4: sb          $zero, 0x4F($t8)
    MEM_B(0X4F, ctx->r24) = 0;
    // 0x802770B8: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x802770BC: nop

    // 0x802770C0: sb          $zero, 0x50($t9)
    MEM_B(0X50, ctx->r25) = 0;
    // 0x802770C4: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x802770C8: nop

    // 0x802770CC: sb          $zero, 0x51($t0)
    MEM_B(0X51, ctx->r8) = 0;
    // 0x802770D0: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x802770D4: nop

    // 0x802770D8: sb          $zero, 0x52($t1)
    MEM_B(0X52, ctx->r9) = 0;
    // 0x802770DC: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x802770E0: nop

    // 0x802770E4: sb          $zero, 0x53($t2)
    MEM_B(0X53, ctx->r10) = 0;
    // 0x802770E8: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x802770EC: jr          $ra
    // 0x802770F0: sb          $zero, 0x54($t3)
    MEM_B(0X54, ctx->r11) = 0;
    return;
    // 0x802770F0: sb          $zero, 0x54($t3)
    MEM_B(0X54, ctx->r11) = 0;
;}
RECOMP_FUNC void func_802770F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802770F4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x802770F8: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x802770FC: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80277100: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80277104: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80277108: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027710C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80277110: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80277114: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80277118: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027711C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80277120: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80277124: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80277128: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x8027712C: addiu       $t8, $t7, 0x418
    ctx->r24 = ADD32(ctx->r15, 0X418);
    // 0x80277130: lw          $v0, 0xFA0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XFA0);
    // 0x80277134: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80277138: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8027713C:
    // 0x8027713C: lwl         $at, 0x0($v1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r3, 0X0);
    // 0x80277140: lwr         $at, 0x3($v1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r3, 0X3);
    // 0x80277144: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80277148: swl         $at, 0x0($v0)
    do_swl(rdram, 0X0, ctx->r2, ctx->r1);
    // 0x8027714C: swr         $at, 0x3($v0)
    do_swr(rdram, 0X3, ctx->r2, ctx->r1);
    // 0x80277150: lhu         $at, 0x4($v1)
    ctx->r1 = MEM_HU(ctx->r3, 0X4);
    // 0x80277154: andi        $t3, $a0, 0xFFFF
    ctx->r11 = ctx->r4 & 0XFFFF;
    // 0x80277158: sh          $at, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r1;
    // 0x8027715C: slti        $at, $t3, 0xB0
    ctx->r1 = SIGNED(ctx->r11) < 0XB0 ? 1 : 0;
    // 0x80277160: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80277164: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x80277168: bne         $at, $zero, L_8027713C
    if (ctx->r1 != 0) {
        // 0x8027716C: addiu       $v1, $v1, 0x6
        ctx->r3 = ADD32(ctx->r3, 0X6);
            goto L_8027713C;
    }
    // 0x8027716C: addiu       $v1, $v1, 0x6
    ctx->r3 = ADD32(ctx->r3, 0X6);
    // 0x80277170: jr          $ra
    // 0x80277174: nop

    return;
    // 0x80277174: nop

;}
RECOMP_FUNC void func_80277118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277118: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027711C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80277120: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80277124: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80277128: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x8027712C: addiu       $t8, $t7, 0x418
    ctx->r24 = ADD32(ctx->r15, 0X418);
    // 0x80277130: lw          $v0, 0xFA0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XFA0);
    // 0x80277134: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80277138: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_8027713C:
    // 0x8027713C: lwl         $at, 0x0($v1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r3, 0X0);
    // 0x80277140: lwr         $at, 0x3($v1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r3, 0X3);
    // 0x80277144: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80277148: swl         $at, 0x0($v0)
    do_swl(rdram, 0X0, ctx->r2, ctx->r1);
    // 0x8027714C: swr         $at, 0x3($v0)
    do_swr(rdram, 0X3, ctx->r2, ctx->r1);
    // 0x80277150: lhu         $at, 0x4($v1)
    ctx->r1 = MEM_HU(ctx->r3, 0X4);
    // 0x80277154: andi        $t3, $a0, 0xFFFF
    ctx->r11 = ctx->r4 & 0XFFFF;
    // 0x80277158: sh          $at, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r1;
    // 0x8027715C: slti        $at, $t3, 0xB0
    ctx->r1 = SIGNED(ctx->r11) < 0XB0 ? 1 : 0;
    // 0x80277160: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80277164: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x80277168: bne         $at, $zero, L_8027713C
    if (ctx->r1 != 0) {
        // 0x8027716C: addiu       $v1, $v1, 0x6
        ctx->r3 = ADD32(ctx->r3, 0X6);
            goto L_8027713C;
    }
    // 0x8027716C: addiu       $v1, $v1, 0x6
    ctx->r3 = ADD32(ctx->r3, 0X6);
    // 0x80277170: jr          $ra
    // 0x80277174: nop

    return;
    // 0x80277174: nop

;}
RECOMP_FUNC void func_80277178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277178: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8027717C: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x80277180: lui         $v0, 0x8028
    ctx->r2 = S32(0X8028 << 16);
    // 0x80277184: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80277188: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027718C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80277190: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80277194: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80277198: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027719C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802771A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802771A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802771A8: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x802771AC: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x802771B0: addiu       $t8, $t7, 0x418
    ctx->r24 = ADD32(ctx->r15, 0X418);
    // 0x802771B4: lw          $v0, 0xFA0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XFA0);
    // 0x802771B8: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x802771BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_802771C0:
    // 0x802771C0: lwl         $at, 0x0($v0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r2, 0X0);
    // 0x802771C4: lwr         $at, 0x3($v0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r2, 0X3);
    // 0x802771C8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802771CC: swl         $at, 0x0($v1)
    do_swl(rdram, 0X0, ctx->r3, ctx->r1);
    // 0x802771D0: swr         $at, 0x3($v1)
    do_swr(rdram, 0X3, ctx->r3, ctx->r1);
    // 0x802771D4: lhu         $at, 0x4($v0)
    ctx->r1 = MEM_HU(ctx->r2, 0X4);
    // 0x802771D8: andi        $t3, $a0, 0xFFFF
    ctx->r11 = ctx->r4 & 0XFFFF;
    // 0x802771DC: sh          $at, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r1;
    // 0x802771E0: slti        $at, $t3, 0xB0
    ctx->r1 = SIGNED(ctx->r11) < 0XB0 ? 1 : 0;
    // 0x802771E4: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x802771E8: addiu       $v1, $v1, 0x6
    ctx->r3 = ADD32(ctx->r3, 0X6);
    // 0x802771EC: bne         $at, $zero, L_802771C0
    if (ctx->r1 != 0) {
        // 0x802771F0: addiu       $v0, $v0, 0x6
        ctx->r2 = ADD32(ctx->r2, 0X6);
            goto L_802771C0;
    }
    // 0x802771F0: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x802771F4: jr          $ra
    // 0x802771F8: nop

    return;
    // 0x802771F8: nop

;}
RECOMP_FUNC void func_802771FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802771FC: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80277200: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x80277204: lui         $t7, 0x8028
    ctx->r15 = S32(0X8028 << 16);
    // 0x80277208: lbu         $v0, 0x3A($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X3A);
    // 0x8027720C: lw          $t7, 0xFA0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0XFA0);
    // 0x80277210: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x80277214: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x80277218: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8027721C: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x80277220: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80277224: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80277228: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x8027722C: lui         $t2, 0x8029
    ctx->r10 = S32(0X8029 << 16);
    // 0x80277230: lui         $t1, 0x8029
    ctx->r9 = S32(0X8029 << 16);
    // 0x80277234: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x80277238: addiu       $a3, $a3, -0x7A38
    ctx->r7 = ADD32(ctx->r7, -0X7A38);
    // 0x8027723C: addiu       $t1, $t1, -0x7A20
    ctx->r9 = ADD32(ctx->r9, -0X7A20);
    // 0x80277240: addiu       $t2, $t2, -0x79D8
    ctx->r10 = ADD32(ctx->r10, -0X79D8);
    // 0x80277244: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80277248: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027724C: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80277250: addu        $a0, $t7, $t9
    ctx->r4 = ADD32(ctx->r15, ctx->r25);
L_80277254:
    // 0x80277254: multu       $a1, $t0
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80277258: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8027725C: addu        $t5, $a3, $v0
    ctx->r13 = ADD32(ctx->r7, ctx->r2);
    // 0x80277260: addu        $t8, $t1, $v0
    ctx->r24 = ADD32(ctx->r9, ctx->r2);
    // 0x80277264: addu        $t9, $t2, $v1
    ctx->r25 = ADD32(ctx->r10, ctx->r3);
    // 0x80277268: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8027726C: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
    // 0x80277270: slti        $at, $a1, 0xB
    ctx->r1 = SIGNED(ctx->r5) < 0XB ? 1 : 0;
    // 0x80277274: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80277278: mflo        $t3
    ctx->r11 = lo;
    // 0x8027727C: addu        $a2, $a0, $t3
    ctx->r6 = ADD32(ctx->r4, ctx->r11);
    // 0x80277280: lh          $t4, 0x0($a2)
    ctx->r12 = MEM_H(ctx->r6, 0X0);
    // 0x80277284: nop

    // 0x80277288: sh          $t4, 0x0($t5)
    MEM_H(0X0, ctx->r13) = ctx->r12;
    // 0x8027728C: lh          $t6, 0x2($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X2);
    // 0x80277290: nop

    // 0x80277294: sh          $t6, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r14;
    // 0x80277298: lbu         $t7, 0x4($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X4);
    // 0x8027729C: bne         $at, $zero, L_80277254
    if (ctx->r1 != 0) {
        // 0x802772A0: sb          $t7, 0x0($t9)
        MEM_B(0X0, ctx->r25) = ctx->r15;
            goto L_80277254;
    }
    // 0x802772A0: sb          $t7, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r15;
    // 0x802772A4: jr          $ra
    // 0x802772A8: nop

    return;
    // 0x802772A8: nop

;}
RECOMP_FUNC void func_802772AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802772AC: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x802772B0: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x802772B4: lui         $t2, 0x8029
    ctx->r10 = S32(0X8029 << 16);
    // 0x802772B8: lbu         $v0, 0x3A($t6)
    ctx->r2 = MEM_BU(ctx->r14, 0X3A);
    // 0x802772BC: lui         $t1, 0x8029
    ctx->r9 = S32(0X8029 << 16);
    // 0x802772C0: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x802772C4: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x802772C8: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x802772CC: lui         $a3, 0x8028
    ctx->r7 = S32(0X8028 << 16);
    // 0x802772D0: addiu       $a3, $a3, 0xFA0
    ctx->r7 = ADD32(ctx->r7, 0XFA0);
    // 0x802772D4: addiu       $t1, $t1, -0x7A38
    ctx->r9 = ADD32(ctx->r9, -0X7A38);
    // 0x802772D8: addiu       $t2, $t2, -0x7A20
    ctx->r10 = ADD32(ctx->r10, -0X7A20);
    // 0x802772DC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x802772E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802772E4: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x802772E8: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
L_802772EC:
    // 0x802772EC: addu        $t7, $a0, $a1
    ctx->r15 = ADD32(ctx->r4, ctx->r5);
    // 0x802772F0: multu       $t7, $t0
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802772F4: sll         $a2, $v1, 1
    ctx->r6 = S32(ctx->r3 << 1);
    // 0x802772F8: lw          $t3, 0x0($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X0);
    // 0x802772FC: addu        $t8, $t1, $a2
    ctx->r24 = ADD32(ctx->r9, ctx->r6);
    // 0x80277300: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x80277304: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80277308: addu        $t5, $t2, $a2
    ctx->r13 = ADD32(ctx->r10, ctx->r6);
    // 0x8027730C: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
    // 0x80277310: slti        $at, $a1, 0xB
    ctx->r1 = SIGNED(ctx->r5) < 0XB ? 1 : 0;
    // 0x80277314: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80277318: mflo        $v0
    ctx->r2 = lo;
    // 0x8027731C: addu        $t4, $t3, $v0
    ctx->r12 = ADD32(ctx->r11, ctx->r2);
    // 0x80277320: sh          $t9, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r25;
    // 0x80277324: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x80277328: lh          $t6, 0x0($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X0);
    // 0x8027732C: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x80277330: bne         $at, $zero, L_802772EC
    if (ctx->r1 != 0) {
        // 0x80277334: sh          $t6, 0x2($t8)
        MEM_H(0X2, ctx->r24) = ctx->r14;
            goto L_802772EC;
    }
    // 0x80277334: sh          $t6, 0x2($t8)
    MEM_H(0X2, ctx->r24) = ctx->r14;
    // 0x80277338: jr          $ra
    // 0x8027733C: nop

    return;
    // 0x8027733C: nop

;}
RECOMP_FUNC void func_80277340(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277340: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80277344: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x80277348: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8027734C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80277350: lb          $v0, 0x57($t6)
    ctx->r2 = MEM_B(ctx->r14, 0X57);
    // 0x80277354: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80277358: lui         $t8, 0x8029
    ctx->r24 = S32(0X8029 << 16);
    // 0x8027735C: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x80277360: sra         $t7, $a1, 24
    ctx->r15 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80277364: addiu       $t8, $t8, -0x79D8
    ctx->r24 = ADD32(ctx->r24, -0X79D8);
    // 0x80277368: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8027736C: lui         $a2, 0x8029
    ctx->r6 = S32(0X8029 << 16);
    // 0x80277370: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x80277374: addiu       $a3, $a3, -0x7A20
    ctx->r7 = ADD32(ctx->r7, -0X7A20);
    // 0x80277378: addiu       $a2, $a2, -0x7A38
    ctx->r6 = ADD32(ctx->r6, -0X7A38);
    // 0x8027737C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80277380: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80277384: jal         0x80034700
    // 0x80277388: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    func_80034700(rdram, ctx);
        goto after_0;
    // 0x80277388: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    after_0:
    // 0x8027738C: lh          $v0, 0x26($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X26);
    // 0x80277390: lui         $t9, 0x8029
    ctx->r25 = S32(0X8029 << 16);
    // 0x80277394: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x80277398: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x8027739C: lbu         $t9, -0x79C8($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X79C8);
    // 0x802773A0: lw          $t0, 0x1CF0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1CF0);
    // 0x802773A4: nop

    // 0x802773A8: sb          $t9, 0x59($t0)
    MEM_B(0X59, ctx->r8) = ctx->r25;
    // 0x802773AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802773B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802773B4: jr          $ra
    // 0x802773B8: nop

    return;
    // 0x802773B8: nop

;}
RECOMP_FUNC void func_802773BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802773BC: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x802773C0: lui         $a2, 0x8029
    ctx->r6 = S32(0X8029 << 16);
    // 0x802773C4: lui         $a1, 0x8029
    ctx->r5 = S32(0X8029 << 16);
    // 0x802773C8: lui         $a0, 0x8029
    ctx->r4 = S32(0X8029 << 16);
    // 0x802773CC: addiu       $a0, $a0, -0x7A08
    ctx->r4 = ADD32(ctx->r4, -0X7A08);
    // 0x802773D0: addiu       $a1, $a1, -0x7A38
    ctx->r5 = ADD32(ctx->r5, -0X7A38);
    // 0x802773D4: addiu       $a2, $a2, -0x79F0
    ctx->r6 = ADD32(ctx->r6, -0X79F0);
    // 0x802773D8: addiu       $a3, $a3, -0x7A20
    ctx->r7 = ADD32(ctx->r7, -0X7A20);
    // 0x802773DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_802773E0:
    // 0x802773E0: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x802773E4: addu        $t6, $a1, $v1
    ctx->r14 = ADD32(ctx->r5, ctx->r3);
    // 0x802773E8: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x802773EC: addu        $t8, $a0, $v1
    ctx->r24 = ADD32(ctx->r4, ctx->r3);
    // 0x802773F0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802773F4: addu        $t9, $a3, $v1
    ctx->r25 = ADD32(ctx->r7, ctx->r3);
    // 0x802773F8: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x802773FC: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x80277400: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x80277404: slti        $at, $t2, 0xB
    ctx->r1 = SIGNED(ctx->r10) < 0XB ? 1 : 0;
    // 0x80277408: addu        $t1, $a2, $v1
    ctx->r9 = ADD32(ctx->r6, ctx->r3);
    // 0x8027740C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x80277410: bne         $at, $zero, L_802773E0
    if (ctx->r1 != 0) {
        // 0x80277414: sh          $t0, 0x0($t1)
        MEM_H(0X0, ctx->r9) = ctx->r8;
            goto L_802773E0;
    }
    // 0x80277414: sh          $t0, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r8;
    // 0x80277418: jr          $ra
    // 0x8027741C: nop

    return;
    // 0x8027741C: nop

;}
RECOMP_FUNC void func_80277420(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277420: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80277424: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x80277428: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8027742C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80277430: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80277434: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80277438: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027743C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80277440: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80277444: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80277448: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027744C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80277450: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80277454: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x80277458: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x8027745C: lb          $v0, -0x2CEF($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2CEF);
    // 0x80277460: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x80277464: nop

    // 0x80277468: sb          $v0, 0x3B($t8)
    MEM_B(0X3B, ctx->r24) = ctx->r2;
    // 0x8027746C: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80277470: jr          $ra
    // 0x80277474: sb          $v0, 0x3A($t9)
    MEM_B(0X3A, ctx->r25) = ctx->r2;
    return;
    // 0x80277474: sb          $v0, 0x3A($t9)
    MEM_B(0X3A, ctx->r25) = ctx->r2;
;}
RECOMP_FUNC void func_80277478(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277478: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x8027747C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80277480: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80277484: addiu       $a0, $a0, 0xFA0
    ctx->r4 = ADD32(ctx->r4, 0XFA0);
    // 0x80277488: addiu       $a2, $a2, -0x2CF0
    ctx->r6 = ADD32(ctx->r6, -0X2CF0);
    // 0x8027748C: addiu       $a3, $a3, -0x32B0
    ctx->r7 = ADD32(ctx->r7, -0X32B0);
    // 0x80277490: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80277494: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
L_80277498:
    // 0x80277498: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8027749C: lb          $t6, 0x44($a3)
    ctx->r14 = MEM_B(ctx->r7, 0X44);
    // 0x802774A0: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x802774A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802774A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802774AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802774B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802774B4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802774B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802774BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802774C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802774C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802774C8: addu        $t8, $a2, $t7
    ctx->r24 = ADD32(ctx->r6, ctx->r15);
    // 0x802774CC: mflo        $v1
    ctx->r3 = lo;
    // 0x802774D0: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x802774D4: lh          $t0, 0x418($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X418);
    // 0x802774D8: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x802774DC: sh          $t0, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r8;
    // 0x802774E0: lb          $t3, 0x44($a3)
    ctx->r11 = MEM_B(ctx->r7, 0X44);
    // 0x802774E4: lw          $t8, 0x0($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X0);
    // 0x802774E8: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x802774EC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x802774F0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x802774F4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x802774F8: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x802774FC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80277500: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80277504: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80277508: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8027750C: addu        $t5, $a2, $t4
    ctx->r13 = ADD32(ctx->r6, ctx->r12);
    // 0x80277510: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80277514: addu        $t6, $t5, $v1
    ctx->r14 = ADD32(ctx->r13, ctx->r3);
    // 0x80277518: lh          $t7, 0x41A($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X41A);
    // 0x8027751C: andi        $t1, $v0, 0xFFFF
    ctx->r9 = ctx->r2 & 0XFFFF;
    // 0x80277520: slti        $at, $t1, 0xB0
    ctx->r1 = SIGNED(ctx->r9) < 0XB0 ? 1 : 0;
    // 0x80277524: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x80277528: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x8027752C: bne         $at, $zero, L_80277498
    if (ctx->r1 != 0) {
        // 0x80277530: sh          $t7, 0x2($t9)
        MEM_H(0X2, ctx->r25) = ctx->r15;
            goto L_80277498;
    }
    // 0x80277530: sh          $t7, 0x2($t9)
    MEM_H(0X2, ctx->r25) = ctx->r15;
    // 0x80277534: jr          $ra
    // 0x80277538: nop

    return;
    // 0x80277538: nop

;}
RECOMP_FUNC void func_8027753C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027753C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80277540: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80277544: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80277548: addiu       $a0, $a0, 0xFA0
    ctx->r4 = ADD32(ctx->r4, 0XFA0);
    // 0x8027754C: addiu       $a2, $a2, -0x2CF0
    ctx->r6 = ADD32(ctx->r6, -0X2CF0);
    // 0x80277550: addiu       $a3, $a3, -0x32B0
    ctx->r7 = ADD32(ctx->r7, -0X32B0);
    // 0x80277554: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80277558: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
L_8027755C:
    // 0x8027755C: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80277560: lb          $t6, 0x44($a3)
    ctx->r14 = MEM_B(ctx->r7, 0X44);
    // 0x80277564: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80277568: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027756C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80277570: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80277574: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80277578: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027757C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80277580: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80277584: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80277588: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027758C: addu        $t8, $a2, $t7
    ctx->r24 = ADD32(ctx->r6, ctx->r15);
    // 0x80277590: mflo        $v1
    ctx->r3 = lo;
    // 0x80277594: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80277598: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x8027759C: lbu         $t0, 0x41C($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X41C);
    // 0x802775A0: andi        $t3, $v0, 0xFFFF
    ctx->r11 = ctx->r2 & 0XFFFF;
    // 0x802775A4: slti        $at, $t3, 0xB0
    ctx->r1 = SIGNED(ctx->r11) < 0XB0 ? 1 : 0;
    // 0x802775A8: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x802775AC: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x802775B0: bne         $at, $zero, L_8027755C
    if (ctx->r1 != 0) {
        // 0x802775B4: sb          $t0, 0x4($t2)
        MEM_B(0X4, ctx->r10) = ctx->r8;
            goto L_8027755C;
    }
    // 0x802775B4: sb          $t0, 0x4($t2)
    MEM_B(0X4, ctx->r10) = ctx->r8;
    // 0x802775B8: jr          $ra
    // 0x802775BC: nop

    return;
    // 0x802775BC: nop

;}
RECOMP_FUNC void func_8027755C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8027755C:
    // 0x8027755C: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80277560: lb          $t6, 0x44($a3)
    ctx->r14 = MEM_B(ctx->r7, 0X44);
    // 0x80277564: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x80277568: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8027756C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80277570: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80277574: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80277578: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027757C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80277580: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80277584: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80277588: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027758C: addu        $t8, $a2, $t7
    ctx->r24 = ADD32(ctx->r6, ctx->r15);
    // 0x80277590: mflo        $v1
    ctx->r3 = lo;
    // 0x80277594: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80277598: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x8027759C: lbu         $t0, 0x41C($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X41C);
    // 0x802775A0: andi        $t3, $v0, 0xFFFF
    ctx->r11 = ctx->r2 & 0XFFFF;
    // 0x802775A4: slti        $at, $t3, 0xB0
    ctx->r1 = SIGNED(ctx->r11) < 0XB0 ? 1 : 0;
    // 0x802775A8: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x802775AC: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x802775B0: bne         $at, $zero, L_8027755C
    if (ctx->r1 != 0) {
        // 0x802775B4: sb          $t0, 0x4($t2)
        MEM_B(0X4, ctx->r10) = ctx->r8;
            goto L_8027755C;
    }
    // 0x802775B4: sb          $t0, 0x4($t2)
    MEM_B(0X4, ctx->r10) = ctx->r8;
    // 0x802775B8: jr          $ra
    // 0x802775BC: nop

    return;
    // 0x802775BC: nop

;}
RECOMP_FUNC void func_8027756C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8027755C:
    // 0x8027756C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80277570: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80277574: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80277578: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8027757C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80277580: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80277584: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80277588: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8027758C: addu        $t8, $a2, $t7
    ctx->r24 = ADD32(ctx->r6, ctx->r15);
    // 0x80277590: mflo        $v1
    ctx->r3 = lo;
    // 0x80277594: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80277598: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x8027759C: lbu         $t0, 0x41C($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X41C);
    // 0x802775A0: andi        $t3, $v0, 0xFFFF
    ctx->r11 = ctx->r2 & 0XFFFF;
    // 0x802775A4: slti        $at, $t3, 0xB0
    ctx->r1 = SIGNED(ctx->r11) < 0XB0 ? 1 : 0;
    // 0x802775A8: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x802775AC: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x802775B0: bne         $at, $zero, L_8027755C
    if (ctx->r1 != 0) {
            // 0x802775B4: sb          $t0, 0x4($t2)
    MEM_B(0X4, ctx->r10) = ctx->r8;
    func_8027755C(rdram, ctx);
    return;
    }
    // 0x802775B4: sb          $t0, 0x4($t2)
    MEM_B(0X4, ctx->r10) = ctx->r8;
    // 0x802775B8: jr          $ra
    // 0x802775BC: nop

    return;
    // 0x802775BC: nop

;}
RECOMP_FUNC void func_802775C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802775C0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x802775C4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x802775C8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802775CC: addiu       $a0, $a0, 0xFA0
    ctx->r4 = ADD32(ctx->r4, 0XFA0);
    // 0x802775D0: addiu       $a2, $a2, -0x2CF0
    ctx->r6 = ADD32(ctx->r6, -0X2CF0);
    // 0x802775D4: addiu       $a3, $a3, -0x32B0
    ctx->r7 = ADD32(ctx->r7, -0X32B0);
    // 0x802775D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802775DC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
L_802775E0:
    // 0x802775E0: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802775E4: lb          $t6, 0x44($a3)
    ctx->r14 = MEM_B(ctx->r7, 0X44);
    // 0x802775E8: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x802775EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802775F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802775F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802775F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802775FC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80277600: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80277604: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80277608: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027760C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80277610: addu        $t8, $a2, $t7
    ctx->r24 = ADD32(ctx->r6, ctx->r15);
    // 0x80277614: mflo        $v1
    ctx->r3 = lo;
    // 0x80277618: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8027761C: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x80277620: lbu         $t0, 0x41D($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X41D);
    // 0x80277624: andi        $t3, $v0, 0xFFFF
    ctx->r11 = ctx->r2 & 0XFFFF;
    // 0x80277628: slti        $at, $t3, 0xB0
    ctx->r1 = SIGNED(ctx->r11) < 0XB0 ? 1 : 0;
    // 0x8027762C: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x80277630: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x80277634: bne         $at, $zero, L_802775E0
    if (ctx->r1 != 0) {
        // 0x80277638: sb          $t0, 0x5($t2)
        MEM_B(0X5, ctx->r10) = ctx->r8;
            goto L_802775E0;
    }
    // 0x80277638: sb          $t0, 0x5($t2)
    MEM_B(0X5, ctx->r10) = ctx->r8;
    // 0x8027763C: jr          $ra
    // 0x80277640: nop

    return;
    // 0x80277640: nop

;}
RECOMP_FUNC void func_802775D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802775D4: addiu       $a3, $a3, -0x32B0
    ctx->r7 = ADD32(ctx->r7, -0X32B0);
    // 0x802775D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802775DC: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
L_802775E0:
    // 0x802775E0: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802775E4: lb          $t6, 0x44($a3)
    ctx->r14 = MEM_B(ctx->r7, 0X44);
    // 0x802775E8: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x802775EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802775F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802775F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x802775F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x802775FC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80277600: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80277604: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80277608: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8027760C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80277610: addu        $t8, $a2, $t7
    ctx->r24 = ADD32(ctx->r6, ctx->r15);
    // 0x80277614: mflo        $v1
    ctx->r3 = lo;
    // 0x80277618: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8027761C: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x80277620: lbu         $t0, 0x41D($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X41D);
    // 0x80277624: andi        $t3, $v0, 0xFFFF
    ctx->r11 = ctx->r2 & 0XFFFF;
    // 0x80277628: slti        $at, $t3, 0xB0
    ctx->r1 = SIGNED(ctx->r11) < 0XB0 ? 1 : 0;
    // 0x8027762C: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x80277630: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x80277634: bne         $at, $zero, L_802775E0
    if (ctx->r1 != 0) {
        // 0x80277638: sb          $t0, 0x5($t2)
        MEM_B(0X5, ctx->r10) = ctx->r8;
            goto L_802775E0;
    }
    // 0x80277638: sb          $t0, 0x5($t2)
    MEM_B(0X5, ctx->r10) = ctx->r8;
    // 0x8027763C: jr          $ra
    // 0x80277640: nop

    return;
    // 0x80277640: nop

;}
RECOMP_FUNC void func_80277644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277644: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80277648: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027764C: jal         0x80277420
    // 0x80277650: nop

    func_80277420(rdram, ctx);
        goto after_0;
    // 0x80277650: nop

    after_0:
    // 0x80277654: jal         0x80277478
    // 0x80277658: nop

    func_80277478(rdram, ctx);
        goto after_1;
    // 0x80277658: nop

    after_1:
    // 0x8027765C: jal         0x8027753C
    // 0x80277660: nop

    func_8027753C(rdram, ctx);
        goto after_2;
    // 0x80277660: nop

    after_2:
    // 0x80277664: jal         0x802775C0
    // 0x80277668: nop

    func_802775C0(rdram, ctx);
        goto after_3;
    // 0x80277668: nop

    after_3:
    // 0x8027766C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80277670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80277674: jr          $ra
    // 0x80277678: nop

    return;
    // 0x80277678: nop

;}
RECOMP_FUNC void func_8027767C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027767C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80277680: lb          $t7, -0x326C($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X326C);
    // 0x80277684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80277688: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8027768C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80277690: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80277694: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80277698: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027769C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x802776A0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802776A4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802776A8: sb          $t6, -0x3066($at)
    MEM_B(-0X3066, ctx->r1) = ctx->r14;
    // 0x802776AC: jal         0x80029220
    // 0x802776B0: addiu       $a0, $a0, 0x76C4
    ctx->r4 = ADD32(ctx->r4, 0X76C4);
    func_80029220(rdram, ctx);
        goto after_0;
    // 0x802776B0: addiu       $a0, $a0, 0x76C4
    ctx->r4 = ADD32(ctx->r4, 0X76C4);
    after_0:
    // 0x802776B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802776B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802776BC: jr          $ra
    // 0x802776C0: nop

    return;
    // 0x802776C0: nop

;}
RECOMP_FUNC void func_802776C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802776C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802776C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x802776CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802776D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802776D4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x802776D8: addiu       $a0, $a0, 0x76F4
    ctx->r4 = ADD32(ctx->r4, 0X76F4);
    // 0x802776DC: jal         0x8002989C
    // 0x802776E0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x802776E0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_0:
    // 0x802776E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802776E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802776EC: jr          $ra
    // 0x802776F0: nop

    return;
    // 0x802776F0: nop

;}
RECOMP_FUNC void func_802776F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802776F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802776F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802776FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80277700: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80277704: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80277708: sb          $zero, 0x38($v0)
    MEM_B(0X38, ctx->r2) = 0;
    // 0x8027770C: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x80277710: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80277714: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80277718: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8027771C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80277720: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80277724: jal         0x800294F8
    // 0x80277728: sb          $zero, -0x3066($at)
    MEM_B(-0X3066, ctx->r1) = 0;
    func_800294F8(rdram, ctx);
        goto after_0;
    // 0x80277728: sb          $zero, -0x3066($at)
    MEM_B(-0X3066, ctx->r1) = 0;
    after_0:
    // 0x8027772C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80277730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80277734: jr          $ra
    // 0x80277738: nop

    return;
    // 0x80277738: nop

;}
RECOMP_FUNC void func_80277730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80277734: jr          $ra
    // 0x80277738: nop

    return;
    // 0x80277738: nop

;}
RECOMP_FUNC void func_8027773C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027773C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80277740: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80277744: addiu       $v0, $v0, 0x1CF0
    ctx->r2 = ADD32(ctx->r2, 0X1CF0);
    // 0x80277748: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8027774C: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x80277750: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80277754: addiu       $t9, $t9, 0x5510
    ctx->r25 = ADD32(ctx->r25, 0X5510);
    // 0x80277758: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8027775C: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x80277760: addiu       $t7, $zero, 0x26
    ctx->r15 = ADD32(0, 0X26);
    // 0x80277764: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80277768: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8027776C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80277770: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80277774: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80277778: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8027777C: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x80277780: jal         0x8004B4B4
    // 0x80277784: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8004B4B4(rdram, ctx);
        goto after_0;
    // 0x80277784: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_0:
    // 0x80277788: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8027778C: addiu       $v0, $v0, 0x1CF0
    ctx->r2 = ADD32(ctx->r2, 0X1CF0);
    // 0x80277790: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x80277794: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80277798: sb          $v1, 0x41($t0)
    MEM_B(0X41, ctx->r8) = ctx->r3;
    // 0x8027779C: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x802777A0: nop

    // 0x802777A4: sb          $v1, 0x47($t1)
    MEM_B(0X47, ctx->r9) = ctx->r3;
    // 0x802777A8: lw          $t3, 0x0($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X0);
    // 0x802777AC: lb          $t2, 0x2B($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X2B);
    // 0x802777B0: nop

    // 0x802777B4: sb          $t2, 0x38($t3)
    MEM_B(0X38, ctx->r11) = ctx->r10;
    // 0x802777B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802777BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802777C0: jr          $ra
    // 0x802777C4: nop

    return;
    // 0x802777C4: nop

;}
RECOMP_FUNC void func_802777C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802777C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802777CC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802777D0: addiu       $v0, $v0, 0x1CF0
    ctx->r2 = ADD32(ctx->r2, 0X1CF0);
    // 0x802777D4: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x802777D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802777DC: addiu       $t9, $t9, 0x5510
    ctx->r25 = ADD32(ctx->r25, 0X5510);
    // 0x802777E0: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x802777E4: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x802777E8: addiu       $t7, $zero, 0x70
    ctx->r15 = ADD32(0, 0X70);
    // 0x802777EC: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802777F0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802777F4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802777F8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802777FC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80277800: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80277804: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x80277808: jal         0x8004B300
    // 0x8027780C: addiu       $a3, $zero, 0x26
    ctx->r7 = ADD32(0, 0X26);
    func_8004B300(rdram, ctx);
        goto after_0;
    // 0x8027780C: addiu       $a3, $zero, 0x26
    ctx->r7 = ADD32(0, 0X26);
    after_0:
    // 0x80277810: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80277814: addiu       $v0, $v0, 0x1CF0
    ctx->r2 = ADD32(ctx->r2, 0X1CF0);
    // 0x80277818: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8027781C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80277820: sb          $v1, 0x41($t0)
    MEM_B(0X41, ctx->r8) = ctx->r3;
    // 0x80277824: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80277828: nop

    // 0x8027782C: sb          $v1, 0x47($t1)
    MEM_B(0X47, ctx->r9) = ctx->r3;
    // 0x80277830: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x80277834: nop

    // 0x80277838: sb          $zero, 0x38($t2)
    MEM_B(0X38, ctx->r10) = 0;
    // 0x8027783C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80277840: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80277844: jr          $ra
    // 0x80277848: nop

    return;
    // 0x80277848: nop

;}
RECOMP_FUNC void func_802777E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802777E4: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x802777E8: addiu       $t7, $zero, 0x70
    ctx->r15 = ADD32(0, 0X70);
    // 0x802777EC: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x802777F0: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x802777F4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x802777F8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x802777FC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80277800: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80277804: addiu       $a2, $zero, 0x140
    ctx->r6 = ADD32(0, 0X140);
    // 0x80277808: jal         0x8004B300
    // 0x8027780C: addiu       $a3, $zero, 0x26
    ctx->r7 = ADD32(0, 0X26);
    func_8004B300(rdram, ctx);
        goto after_0;
    // 0x8027780C: addiu       $a3, $zero, 0x26
    ctx->r7 = ADD32(0, 0X26);
    after_0:
    // 0x80277810: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80277814: addiu       $v0, $v0, 0x1CF0
    ctx->r2 = ADD32(ctx->r2, 0X1CF0);
    // 0x80277818: lw          $t0, 0x0($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X0);
    // 0x8027781C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80277820: sb          $v1, 0x41($t0)
    MEM_B(0X41, ctx->r8) = ctx->r3;
    // 0x80277824: lw          $t1, 0x0($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X0);
    // 0x80277828: nop

    // 0x8027782C: sb          $v1, 0x47($t1)
    MEM_B(0X47, ctx->r9) = ctx->r3;
    // 0x80277830: lw          $t2, 0x0($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X0);
    // 0x80277834: nop

    // 0x80277838: sb          $zero, 0x38($t2)
    MEM_B(0X38, ctx->r10) = 0;
    // 0x8027783C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80277840: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80277844: jr          $ra
    // 0x80277848: nop

    return;
    // 0x80277848: nop

;}
RECOMP_FUNC void func_8027784C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027784C: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x80277850: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x80277854: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80277858: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027785C: lb          $t7, 0x3A($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X3A);
    // 0x80277860: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x80277864: addiu       $a0, $a3, -0x7A80
    ctx->r4 = ADD32(ctx->r7, -0X7A80);
    // 0x80277868: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8027786C: jal         0x8004C19C
    // 0x80277870: sb          $t7, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r15;
    func_8004C19C(rdram, ctx);
        goto after_0;
    // 0x80277870: sb          $t7, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r15;
    after_0:
    // 0x80277874: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x80277878: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8027787C: addiu       $a1, $a3, -0x7A80
    ctx->r5 = ADD32(ctx->r7, -0X7A80);
    // 0x80277880: addiu       $a0, $a0, 0x1468
    ctx->r4 = ADD32(ctx->r4, 0X1468);
    // 0x80277884: jal         0x8004C200
    // 0x80277888: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    func_8004C200(rdram, ctx);
        goto after_1;
    // 0x80277888: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    after_1:
    // 0x8027788C: lbu         $t8, 0x1E($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1E);
    // 0x80277890: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x80277894: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80277898: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8027789C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x802778A0: lui         $a3, 0x8029
    ctx->r7 = S32(0X8029 << 16);
    // 0x802778A4: addiu       $t0, $t0, -0x6AA4
    ctx->r8 = ADD32(ctx->r8, -0X6AA4);
    // 0x802778A8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x802778AC: addiu       $a3, $a3, -0x7A80
    ctx->r7 = ADD32(ctx->r7, -0X7A80);
    // 0x802778B0: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x802778B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x802778B8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802778BC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_802778C0:
    // 0x802778C0: addu        $t1, $v1, $v0
    ctx->r9 = ADD32(ctx->r3, ctx->r2);
    // 0x802778C4: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x802778C8: nop

    // 0x802778CC: bne         $a0, $t2, L_802778E4
    if (ctx->r4 != ctx->r10) {
        // 0x802778D0: nop
    
            goto L_802778E4;
    }
    // 0x802778D0: nop

    // 0x802778D4: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802778D8: mflo        $t3
    ctx->r11 = lo;
    // 0x802778DC: addu        $t4, $a3, $t3
    ctx->r12 = ADD32(ctx->r7, ctx->r11);
    // 0x802778E0: sb          $zero, 0x0($t4)
    MEM_B(0X0, ctx->r12) = 0;
L_802778E4:
    // 0x802778E4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802778E8: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x802778EC: slti        $at, $t5, 0xB
    ctx->r1 = SIGNED(ctx->r13) < 0XB ? 1 : 0;
    // 0x802778F0: bne         $at, $zero, L_802778C0
    if (ctx->r1 != 0) {
        // 0x802778F4: or          $v0, $t5, $zero
        ctx->r2 = ctx->r13 | 0;
            goto L_802778C0;
    }
    // 0x802778F4: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x802778F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802778FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80277900: jr          $ra
    // 0x80277904: nop

    return;
    // 0x80277904: nop

;}
RECOMP_FUNC void func_80277908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277908: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8027790C: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x80277910: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80277914: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80277918: lb          $t7, 0x3A($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X3A);
    // 0x8027791C: lui         $a0, 0x8029
    ctx->r4 = S32(0X8029 << 16);
    // 0x80277920: addiu       $a0, $a0, -0x7A80
    ctx->r4 = ADD32(ctx->r4, -0X7A80);
    // 0x80277924: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80277928: jal         0x8004C19C
    // 0x8027792C: sb          $t7, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r15;
    func_8004C19C(rdram, ctx);
        goto after_0;
    // 0x8027792C: sb          $t7, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r15;
    after_0:
    // 0x80277930: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x80277934: lui         $a1, 0x8029
    ctx->r5 = S32(0X8029 << 16);
    // 0x80277938: addiu       $a1, $a1, -0x7A80
    ctx->r5 = ADD32(ctx->r5, -0X7A80);
    // 0x8027793C: addiu       $a0, $a0, 0x1688
    ctx->r4 = ADD32(ctx->r4, 0X1688);
    // 0x80277940: jal         0x8004C200
    // 0x80277944: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8004C200(rdram, ctx);
        goto after_1;
    // 0x80277944: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x80277948: lbu         $t8, 0x1E($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1E);
    // 0x8027794C: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x80277950: lw          $t0, 0x1CF0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1CF0);
    // 0x80277954: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80277958: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8027795C: lb          $t1, 0x46($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X46);
    // 0x80277960: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80277964: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80277968: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8027796C: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80277970: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x80277974: lbu         $v0, -0x6AA4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6AA4);
    // 0x80277978: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8027797C: beq         $v0, $at, L_80277988
    if (ctx->r2 == ctx->r1) {
        // 0x80277980: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80277988;
    }
    // 0x80277980: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80277984: bne         $v0, $at, L_80277990
    if (ctx->r2 != ctx->r1) {
        // 0x80277988: lui         $at, 0x8029
        ctx->r1 = S32(0X8029 << 16);
            goto L_80277990;
    }
L_80277988:
    // 0x80277988: lui         $at, 0x8029
    ctx->r1 = S32(0X8029 << 16);
    // 0x8027798C: sb          $zero, -0x7A71($at)
    MEM_B(-0X7A71, ctx->r1) = 0;
L_80277990:
    // 0x80277990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80277994: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80277998: jr          $ra
    // 0x8027799C: nop

    return;
    // 0x8027799C: nop

;}
RECOMP_FUNC void func_802779A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802779A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802779A4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802779A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802779AC: lb          $a0, -0x326B($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X326B);
    // 0x802779B0: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x802779B4: addiu       $a2, $zero, 0x17
    ctx->r6 = ADD32(0, 0X17);
    // 0x802779B8: jal         0x80039F1C
    // 0x802779BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80039F1C(rdram, ctx);
        goto after_0;
    // 0x802779BC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x802779C0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802779C4: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x802779C8: lui         $a1, 0x803C
    ctx->r5 = S32(0X803C << 16);
    // 0x802779CC: jal         0x8004C2C8
    // 0x802779D0: addiu       $a1, $a1, 0x6D40
    ctx->r5 = ADD32(ctx->r5, 0X6D40);
    func_8004C2C8(rdram, ctx);
        goto after_1;
    // 0x802779D0: addiu       $a1, $a1, 0x6D40
    ctx->r5 = ADD32(ctx->r5, 0X6D40);
    after_1:
    // 0x802779D4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x802779D8: lbu         $a0, -0x326B($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326B);
    // 0x802779DC: lui         $a1, 0x803C
    ctx->r5 = S32(0X803C << 16);
    // 0x802779E0: jal         0x8004BC1C
    // 0x802779E4: addiu       $a1, $a1, 0x6D4C
    ctx->r5 = ADD32(ctx->r5, 0X6D4C);
    func_8004BC1C(rdram, ctx);
        goto after_2;
    // 0x802779E4: addiu       $a1, $a1, 0x6D4C
    ctx->r5 = ADD32(ctx->r5, 0X6D4C);
    after_2:
    // 0x802779E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802779EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802779F0: jr          $ra
    // 0x802779F4: nop

    return;
    // 0x802779F4: nop

;}
RECOMP_FUNC void func_802779F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802779F8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802779FC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80277A00: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80277A04: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80277A08: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80277A0C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80277A10: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80277A14: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80277A18: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    // 0x80277A1C: jal         0x800293DC
    // 0x80277A20: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x80277A20: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x80277A24: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x80277A28: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x80277A2C: beq         $s0, $s2, L_80277A94
    if (ctx->r16 == ctx->r18) {
        // 0x80277A30: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_80277A94;
    }
    // 0x80277A30: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80277A34: lui         $s4, 0x8028
    ctx->r20 = S32(0X8028 << 16);
    // 0x80277A38: lui         $s3, 0x8028
    ctx->r19 = S32(0X8028 << 16);
    // 0x80277A3C: addiu       $s3, $s3, 0xFB0
    ctx->r19 = ADD32(ctx->r19, 0XFB0);
    // 0x80277A40: addiu       $s4, $s4, 0x1000
    ctx->r20 = ADD32(ctx->r20, 0X1000);
L_80277A44:
    // 0x80277A44: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x80277A48: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x80277A4C: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x80277A50: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80277A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80277A58: jal         0x8004CD24
    // 0x80277A5C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x80277A5C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_1:
    // 0x80277A60: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
    // 0x80277A64: addu        $t9, $s4, $s1
    ctx->r25 = ADD32(ctx->r20, ctx->r17);
    // 0x80277A68: ori         $t8, $t7, 0x400
    ctx->r24 = ctx->r15 | 0X400;
    // 0x80277A6C: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
    // 0x80277A70: lbu         $a2, 0x0($t9)
    ctx->r6 = MEM_BU(ctx->r25, 0X0);
    // 0x80277A74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80277A78: jal         0x8002135C
    // 0x80277A7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80277A7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80277A80: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80277A84: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80277A88: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x80277A8C: bne         $s0, $s2, L_80277A44
    if (ctx->r16 != ctx->r18) {
        // 0x80277A90: or          $s1, $t0, $zero
        ctx->r17 = ctx->r8 | 0;
            goto L_80277A44;
    }
    // 0x80277A90: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
L_80277A94:
    // 0x80277A94: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80277A98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80277A9C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80277AA0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80277AA4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80277AA8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80277AAC: jr          $ra
    // 0x80277AB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80277AB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80277A44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80277A44:
    // 0x80277A44: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x80277A48: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x80277A4C: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x80277A50: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80277A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80277A58: jal         0x8004CD24
    // 0x80277A5C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x80277A5C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_0:
    // 0x80277A60: lhu         $t7, 0x16($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X16);
    // 0x80277A64: addu        $t9, $s4, $s1
    ctx->r25 = ADD32(ctx->r20, ctx->r17);
    // 0x80277A68: ori         $t8, $t7, 0x400
    ctx->r24 = ctx->r15 | 0X400;
    // 0x80277A6C: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
    // 0x80277A70: lbu         $a2, 0x0($t9)
    ctx->r6 = MEM_BU(ctx->r25, 0X0);
    // 0x80277A74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80277A78: jal         0x8002135C
    // 0x80277A7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x80277A7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80277A80: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80277A84: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80277A88: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x80277A8C: bne         $s0, $s2, L_80277A44
    if (ctx->r16 != ctx->r18) {
        // 0x80277A90: or          $s1, $t0, $zero
        ctx->r17 = ctx->r8 | 0;
            goto L_80277A44;
    }
    // 0x80277A90: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x80277A94: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80277A98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80277A9C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80277AA0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80277AA4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80277AA8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80277AAC: jr          $ra
    // 0x80277AB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80277AB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80277A64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_80277A44:
    // 0x80277A64: addu        $t9, $s4, $s1
    ctx->r25 = ADD32(ctx->r20, ctx->r17);
    // 0x80277A68: ori         $t8, $t7, 0x400
    ctx->r24 = ctx->r15 | 0X400;
    // 0x80277A6C: sh          $t8, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r24;
    // 0x80277A70: lbu         $a2, 0x0($t9)
    ctx->r6 = MEM_BU(ctx->r25, 0X0);
    // 0x80277A74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80277A78: jal         0x8002135C
    // 0x80277A7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x80277A7C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80277A80: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x80277A84: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80277A88: andi        $t0, $s1, 0xFF
    ctx->r8 = ctx->r17 & 0XFF;
    // 0x80277A8C: bne         $s0, $s2, L_80277A44
    if (ctx->r16 != ctx->r18) {
            // 0x80277A90: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    func_80277A44(rdram, ctx);
    return;
    }
    // 0x80277A90: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x80277A94: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80277A98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80277A9C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80277AA0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80277AA4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80277AA8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80277AAC: jr          $ra
    // 0x80277AB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80277AB0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80277AB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277AB4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80277AB8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80277ABC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80277AC0: lw          $t6, 0x8($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X8);
    // 0x80277AC4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80277AC8: lw          $v1, 0x8($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X8);
    // 0x80277ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80277AD0: lb          $v0, 0x39($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X39);
    // 0x80277AD4: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80277AD8: beq         $v0, $zero, L_80277B08
    if (ctx->r2 == 0) {
        // 0x80277ADC: addiu       $a2, $zero, 0x26
        ctx->r6 = ADD32(0, 0X26);
            goto L_80277B08;
    }
    // 0x80277ADC: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x80277AE0: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80277AE4: beq         $v0, $at, L_80277B1C
    if (ctx->r2 == ctx->r1) {
        // 0x80277AE8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80277B1C;
    }
    // 0x80277AE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80277AEC: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80277AF0: beq         $v0, $at, L_80277B1C
    if (ctx->r2 == ctx->r1) {
        // 0x80277AF4: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_80277B1C;
    }
    // 0x80277AF4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80277AF8: beq         $v0, $at, L_80277B1C
    if (ctx->r2 == ctx->r1) {
        // 0x80277AFC: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_80277B1C;
    }
    // 0x80277AFC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80277B00: b           L_80277B38
    // 0x80277B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80277B38;
    // 0x80277B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80277B08:
    // 0x80277B08: jal         0x8002135C
    // 0x80277B0C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x80277B0C: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_0:
    // 0x80277B10: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80277B14: b           L_80277B50
    // 0x80277B18: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
        goto L_80277B50;
    // 0x80277B18: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
L_80277B1C:
    // 0x80277B1C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80277B20: addiu       $a2, $zero, 0x27
    ctx->r6 = ADD32(0, 0X27);
    // 0x80277B24: jal         0x8002135C
    // 0x80277B28: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x80277B28: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x80277B2C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80277B30: b           L_80277B50
    // 0x80277B34: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
        goto L_80277B50;
    // 0x80277B34: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
L_80277B38:
    // 0x80277B38: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x80277B3C: jal         0x8002135C
    // 0x80277B40: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80277B40: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_2:
    // 0x80277B44: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80277B48: nop

    // 0x80277B4C: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
L_80277B50:
    // 0x80277B50: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80277B54: beq         $v0, $zero, L_80277B6C
    if (ctx->r2 == 0) {
        // 0x80277B58: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80277B6C;
    }
    // 0x80277B58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80277B5C: beq         $v0, $at, L_80277B6C
    if (ctx->r2 == ctx->r1) {
        // 0x80277B60: nop
    
            goto L_80277B6C;
    }
    // 0x80277B60: nop

    // 0x80277B64: b           L_80277BA0
    // 0x80277B68: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_80277BA0;
    // 0x80277B68: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_80277B6C:
    // 0x80277B6C: lb          $t7, 0x39($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X39);
    // 0x80277B70: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80277B74: addiu       $t9, $t9, 0x100C
    ctx->r25 = ADD32(ctx->r25, 0X100C);
    // 0x80277B78: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80277B7C: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x80277B80: lhu         $a1, 0x4($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X4);
    // 0x80277B84: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x80277B88: jal         0x8004CD24
    // 0x80277B8C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_3;
    // 0x80277B8C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_3:
    // 0x80277B90: lhu         $t0, 0x16($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X16);
    // 0x80277B94: nop

    // 0x80277B98: ori         $t1, $t0, 0x400
    ctx->r9 = ctx->r8 | 0X400;
    // 0x80277B9C: sh          $t1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r9;
L_80277BA0:
    // 0x80277BA0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80277BA4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80277BA8: jr          $ra
    // 0x80277BAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80277BAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80277BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277BB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80277BB4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80277BB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80277BBC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x80277BC0: jal         0x8004BD64
    // 0x80277BC4: nop

    func_8004BD64(rdram, ctx);
        goto after_0;
    // 0x80277BC4: nop

    after_0:
    // 0x80277BC8: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80277BCC: lw          $v1, 0x14($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X14);
    // 0x80277BD0: addiu       $t6, $t6, 0x7BF8
    ctx->r14 = ADD32(ctx->r14, 0X7BF8);
    // 0x80277BD4: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x80277BD8: lhu         $t7, 0x16($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X16);
    // 0x80277BDC: nop

    // 0x80277BE0: ori         $t8, $t7, 0x400
    ctx->r24 = ctx->r15 | 0X400;
    // 0x80277BE4: sh          $t8, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r24;
    // 0x80277BE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80277BEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80277BF0: jr          $ra
    // 0x80277BF4: nop

    return;
    // 0x80277BF4: nop

;}
RECOMP_FUNC void func_80277BF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277BF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80277BFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80277C00: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x80277C04: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80277C08: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
    // 0x80277C0C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80277C10: beq         $v0, $zero, L_80277C34
    if (ctx->r2 == 0) {
        // 0x80277C14: lui         $t9, 0x8028
        ctx->r25 = S32(0X8028 << 16);
            goto L_80277C34;
    }
    // 0x80277C14: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80277C18: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80277C1C: beq         $v0, $at, L_80277C78
    if (ctx->r2 == ctx->r1) {
        // 0x80277C20: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_80277C78;
    }
    // 0x80277C20: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80277C24: beq         $v0, $at, L_80277C70
    if (ctx->r2 == ctx->r1) {
        // 0x80277C28: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_80277C70;
    }
    // 0x80277C28: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80277C2C: b           L_80277CE0
    // 0x80277C30: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
        goto L_80277CE0;
    // 0x80277C30: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
L_80277C34:
    // 0x80277C34: sb          $t6, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r14;
    // 0x80277C38: lb          $t7, 0x39($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X39);
    // 0x80277C3C: lhu         $t0, 0x16($a3)
    ctx->r8 = MEM_HU(ctx->r7, 0X16);
    // 0x80277C40: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80277C44: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80277C48: lw          $t9, 0x1068($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1068);
    // 0x80277C4C: ori         $t1, $t0, 0x400
    ctx->r9 = ctx->r8 | 0X400;
    // 0x80277C50: sh          $t1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r9;
    // 0x80277C54: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80277C58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80277C5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80277C60: jal         0x8004CD44
    // 0x80277C64: sw          $t9, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r25;
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x80277C64: sw          $t9, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r25;
    after_0:
    // 0x80277C68: b           L_80277CE4
    // 0x80277C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277CE4;
    // 0x80277C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277C70:
    // 0x80277C70: b           L_80277CE0
    // 0x80277C74: sb          $t2, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r10;
        goto L_80277CE0;
    // 0x80277C74: sb          $t2, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r10;
L_80277C78:
    // 0x80277C78: lb          $v0, 0x45($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X45);
    // 0x80277C7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80277C80: beq         $v0, $zero, L_80277C98
    if (ctx->r2 == 0) {
        // 0x80277C84: nop
    
            goto L_80277C98;
    }
    // 0x80277C84: nop

    // 0x80277C88: beq         $v0, $at, L_80277CA0
    if (ctx->r2 == ctx->r1) {
        // 0x80277C8C: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_80277CA0;
    }
    // 0x80277C8C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80277C90: b           L_80277CE4
    // 0x80277C94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277CE4;
    // 0x80277C94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277C98:
    // 0x80277C98: b           L_80277CE0
    // 0x80277C9C: sb          $zero, 0x4($a3)
    MEM_B(0X4, ctx->r7) = 0;
        goto L_80277CE0;
    // 0x80277C9C: sb          $zero, 0x4($a3)
    MEM_B(0X4, ctx->r7) = 0;
L_80277CA0:
    // 0x80277CA0: lhu         $t5, 0x16($a3)
    ctx->r13 = MEM_HU(ctx->r7, 0X16);
    // 0x80277CA4: lui         $t4, 0x803C
    ctx->r12 = S32(0X803C << 16);
    // 0x80277CA8: addiu       $t4, $t4, 0x7CDC
    ctx->r12 = ADD32(ctx->r12, 0X7CDC);
    // 0x80277CAC: andi        $t6, $t5, 0xFBFF
    ctx->r14 = ctx->r13 & 0XFBFF;
    // 0x80277CB0: sb          $t3, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r11;
    // 0x80277CB4: sw          $t4, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r12;
    // 0x80277CB8: sh          $t6, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r14;
    // 0x80277CBC: lb          $t7, 0x48($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X48);
    // 0x80277CC0: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80277CC4: addiu       $t9, $t9, 0x1678
    ctx->r25 = ADD32(ctx->r25, 0X1678);
    // 0x80277CC8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80277CCC: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x80277CD0: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x80277CD4: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x80277CD8: jal         0x8004CD44
    // 0x80277CDC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x80277CDC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_1:
L_80277CE0:
    // 0x80277CE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277CE4:
    // 0x80277CE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80277CE8: jr          $ra
    // 0x80277CEC: nop

    return;
    // 0x80277CEC: nop

;}
RECOMP_FUNC void func_80277CF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277CF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80277CF4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80277CF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80277CFC: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x80277D00: jal         0x8004BD64
    // 0x80277D04: nop

    func_8004BD64(rdram, ctx);
        goto after_0;
    // 0x80277D04: nop

    after_0:
    // 0x80277D08: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x80277D0C: addiu       $t6, $t6, 0x7D24
    ctx->r14 = ADD32(ctx->r14, 0X7D24);
    // 0x80277D10: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x80277D14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80277D18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80277D1C: jr          $ra
    // 0x80277D20: nop

    return;
    // 0x80277D20: nop

;}
RECOMP_FUNC void func_80277D24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277D24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80277D28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80277D2C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x80277D30: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80277D34: lb          $t6, 0x2E($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X2E);
    // 0x80277D38: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x80277D3C: bne         $t6, $zero, L_80277D50
    if (ctx->r14 != 0) {
        // 0x80277D40: addiu       $t7, $zero, 0x210
        ctx->r15 = ADD32(0, 0X210);
            goto L_80277D50;
    }
    // 0x80277D40: addiu       $t7, $zero, 0x210
    ctx->r15 = ADD32(0, 0X210);
    // 0x80277D44: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x80277D48: b           L_80277D54
    // 0x80277D4C: addiu       $v1, $v1, 0x1574
    ctx->r3 = ADD32(ctx->r3, 0X1574);
        goto L_80277D54;
    // 0x80277D4C: addiu       $v1, $v1, 0x1574
    ctx->r3 = ADD32(ctx->r3, 0X1574);
L_80277D50:
    // 0x80277D50: addiu       $v1, $v1, 0x1580
    ctx->r3 = ADD32(ctx->r3, 0X1580);
L_80277D54:
    // 0x80277D54: sh          $t7, 0x12($a3)
    MEM_H(0X12, ctx->r7) = ctx->r15;
    // 0x80277D58: lb          $t8, 0x38($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X38);
    // 0x80277D5C: nop

    // 0x80277D60: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80277D64: sltiu       $at, $t9, 0x9
    ctx->r1 = ctx->r25 < 0X9 ? 1 : 0;
    // 0x80277D68: beq         $at, $zero, L_80277FE0
    if (ctx->r1 == 0) {
        // 0x80277D6C: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_80277FE0;
    }
    // 0x80277D6C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80277D70: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80277D74: addu        $at, $at, $t9
    gpr jr_addend_80277D80 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80277D78: lw          $t9, 0x1E88($at)
    ctx->r25 = ADD32(ctx->r1, 0X1E88);
    // 0x80277D7C: nop

    // 0x80277D80: jr          $t9
    // 0x80277D84: nop

    switch (jr_addend_80277D80 >> 2) {
        case 0: goto L_80277DD4; break;
        case 1: goto L_80277E0C; break;
        case 2: goto L_80277E6C; break;
        case 3: goto L_80277EB0; break;
        case 4: goto L_80277EF0; break;
        case 5: goto L_80277F50; break;
        case 6: goto L_80277FA8; break;
        case 7: goto L_80277FA8; break;
        case 8: goto L_80277D88; break;
        default: switch_error(__func__, 0x80277D80, 0x80281E88);
    }
    // 0x80277D84: nop

L_80277D88:
    // 0x80277D88: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80277D8C: sb          $t0, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r8;
    // 0x80277D90: lb          $t1, 0x4A($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X4A);
    // 0x80277D94: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x80277D98: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80277D9C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80277DA0: lw          $t3, 0x17B4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X17B4);
    // 0x80277DA4: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80277DA8: sw          $t3, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r11;
    // 0x80277DAC: lb          $t4, 0x4A($v0)
    ctx->r12 = MEM_B(ctx->r2, 0X4A);
    // 0x80277DB0: addiu       $t6, $t6, 0x17A0
    ctx->r14 = ADD32(ctx->r14, 0X17A0);
    // 0x80277DB4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80277DB8: addu        $v1, $t5, $t6
    ctx->r3 = ADD32(ctx->r13, ctx->r14);
    // 0x80277DBC: lh          $a1, 0x0($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X0);
    // 0x80277DC0: lh          $a2, 0x2($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X2);
    // 0x80277DC4: jal         0x8004CD44
    // 0x80277DC8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x80277DC8: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x80277DCC: b           L_80277FE8
    // 0x80277DD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277FE8;
    // 0x80277DD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277DD4:
    // 0x80277DD4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80277DD8: sb          $t7, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r15;
    // 0x80277DDC: lb          $t8, 0x3A($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X3A);
    // 0x80277DE0: lui         $t0, 0x8028
    ctx->r8 = S32(0X8028 << 16);
    // 0x80277DE4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80277DE8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80277DEC: lw          $t0, 0x1104($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X1104);
    // 0x80277DF0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80277DF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80277DF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80277DFC: jal         0x8004CD44
    // 0x80277E00: sw          $t0, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r8;
    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x80277E00: sw          $t0, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r8;
    after_1:
    // 0x80277E04: b           L_80277FE8
    // 0x80277E08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277FE8;
    // 0x80277E08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277E0C:
    // 0x80277E0C: lui         $t2, 0x803C
    ctx->r10 = S32(0X803C << 16);
    // 0x80277E10: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80277E14: addiu       $t2, $t2, 0x69E0
    ctx->r10 = ADD32(ctx->r10, 0X69E0);
    // 0x80277E18: sb          $t1, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r9;
    // 0x80277E1C: sw          $t2, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r10;
    // 0x80277E20: lb          $t3, 0x3D($v0)
    ctx->r11 = MEM_B(ctx->r2, 0X3D);
    // 0x80277E24: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x80277E28: addiu       $t5, $t5, 0x13E8
    ctx->r13 = ADD32(ctx->r13, 0X13E8);
    // 0x80277E2C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80277E30: addu        $v1, $t4, $t5
    ctx->r3 = ADD32(ctx->r12, ctx->r13);
    // 0x80277E34: lh          $a1, 0x0($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X0);
    // 0x80277E38: lh          $a2, 0x2($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X2);
    // 0x80277E3C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80277E40: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80277E44: jal         0x8004CD44
    // 0x80277E48: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x80277E48: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x80277E4C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80277E50: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80277E54: lb          $t6, 0x3E($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X3E);
    // 0x80277E58: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80277E5C: bne         $t6, $at, L_80277FE4
    if (ctx->r14 != ctx->r1) {
        // 0x80277E60: addiu       $t7, $zero, 0x414
        ctx->r15 = ADD32(0, 0X414);
            goto L_80277FE4;
    }
    // 0x80277E60: addiu       $t7, $zero, 0x414
    ctx->r15 = ADD32(0, 0X414);
    // 0x80277E64: b           L_80277FE4
    // 0x80277E68: sh          $t7, 0x12($a3)
    MEM_H(0X12, ctx->r7) = ctx->r15;
        goto L_80277FE4;
    // 0x80277E68: sh          $t7, 0x12($a3)
    MEM_H(0X12, ctx->r7) = ctx->r15;
L_80277E6C:
    // 0x80277E6C: lb          $t8, 0x42($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X42);
    // 0x80277E70: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80277E74: bne         $t8, $zero, L_80277E84
    if (ctx->r24 != 0) {
        // 0x80277E78: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80277E84;
    }
    // 0x80277E78: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80277E7C: b           L_80277FE4
    // 0x80277E80: sb          $zero, 0x4($a3)
    MEM_B(0X4, ctx->r7) = 0;
        goto L_80277FE4;
    // 0x80277E80: sb          $zero, 0x4($a3)
    MEM_B(0X4, ctx->r7) = 0;
L_80277E84:
    // 0x80277E84: sb          $t9, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r25;
    // 0x80277E88: lb          $t0, 0x43($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X43);
    // 0x80277E8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80277E90: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80277E94: addu        $t2, $v1, $t1
    ctx->r10 = ADD32(ctx->r3, ctx->r9);
    // 0x80277E98: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80277E9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80277EA0: jal         0x8004CD44
    // 0x80277EA4: sw          $t3, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r11;
    func_8004CD44(rdram, ctx);
        goto after_3;
    // 0x80277EA4: sw          $t3, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r11;
    after_3:
    // 0x80277EA8: b           L_80277FE8
    // 0x80277EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277FE8;
    // 0x80277EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277EB0:
    // 0x80277EB0: lui         $t5, 0x803C
    ctx->r13 = S32(0X803C << 16);
    // 0x80277EB4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80277EB8: addiu       $t5, $t5, 0x69E0
    ctx->r13 = ADD32(ctx->r13, 0X69E0);
    // 0x80277EBC: sb          $t4, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r12;
    // 0x80277EC0: sw          $t5, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r13;
    // 0x80277EC4: lb          $t6, 0x44($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X44);
    // 0x80277EC8: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80277ECC: addiu       $t8, $t8, 0x13E8
    ctx->r24 = ADD32(ctx->r24, 0X13E8);
    // 0x80277ED0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80277ED4: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x80277ED8: lh          $a1, 0x0($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X0);
    // 0x80277EDC: lh          $a2, 0x2($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X2);
    // 0x80277EE0: jal         0x8004CD44
    // 0x80277EE4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8004CD44(rdram, ctx);
        goto after_4;
    // 0x80277EE4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_4:
    // 0x80277EE8: b           L_80277FE8
    // 0x80277EEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277FE8;
    // 0x80277EEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277EF0:
    // 0x80277EF0: lui         $t0, 0x803C
    ctx->r8 = S32(0X803C << 16);
    // 0x80277EF4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80277EF8: addiu       $t0, $t0, 0x69E0
    ctx->r8 = ADD32(ctx->r8, 0X69E0);
    // 0x80277EFC: sb          $t9, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r25;
    // 0x80277F00: sw          $t0, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r8;
    // 0x80277F04: lb          $t1, 0x46($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X46);
    // 0x80277F08: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x80277F0C: addiu       $t3, $t3, 0x13E8
    ctx->r11 = ADD32(ctx->r11, 0X13E8);
    // 0x80277F10: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80277F14: addu        $v1, $t2, $t3
    ctx->r3 = ADD32(ctx->r10, ctx->r11);
    // 0x80277F18: lh          $a1, 0x0($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X0);
    // 0x80277F1C: lh          $a2, 0x2($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X2);
    // 0x80277F20: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80277F24: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80277F28: jal         0x8004CD44
    // 0x80277F2C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8004CD44(rdram, ctx);
        goto after_5;
    // 0x80277F2C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_5:
    // 0x80277F30: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80277F34: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80277F38: lb          $t4, 0x45($v0)
    ctx->r12 = MEM_B(ctx->r2, 0X45);
    // 0x80277F3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80277F40: bne         $t4, $at, L_80277FE4
    if (ctx->r12 != ctx->r1) {
        // 0x80277F44: addiu       $t5, $zero, 0x414
        ctx->r13 = ADD32(0, 0X414);
            goto L_80277FE4;
    }
    // 0x80277F44: addiu       $t5, $zero, 0x414
    ctx->r13 = ADD32(0, 0X414);
    // 0x80277F48: b           L_80277FE4
    // 0x80277F4C: sh          $t5, 0x12($a3)
    MEM_H(0X12, ctx->r7) = ctx->r13;
        goto L_80277FE4;
    // 0x80277F4C: sh          $t5, 0x12($a3)
    MEM_H(0X12, ctx->r7) = ctx->r13;
L_80277F50:
    // 0x80277F50: lb          $t6, 0x4D($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X4D);
    // 0x80277F54: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80277F58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80277F5C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80277F60: lw          $t8, 0x16F0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X16F0);
    // 0x80277F64: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80277F68: sw          $t8, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r24;
    // 0x80277F6C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80277F70: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80277F74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80277F78: jal         0x8004CD44
    // 0x80277F7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8004CD44(rdram, ctx);
        goto after_6;
    // 0x80277F7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80277F80: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80277F84: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80277F88: lb          $t9, 0x4C($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X4C);
    // 0x80277F8C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80277F90: bne         $t9, $zero, L_80277FA0
    if (ctx->r25 != 0) {
        // 0x80277F94: nop
    
            goto L_80277FA0;
    }
    // 0x80277F94: nop

    // 0x80277F98: b           L_80277FE4
    // 0x80277F9C: sb          $t0, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r8;
        goto L_80277FE4;
    // 0x80277F9C: sb          $t0, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r8;
L_80277FA0:
    // 0x80277FA0: b           L_80277FE4
    // 0x80277FA4: sb          $zero, 0x4($a3)
    MEM_B(0X4, ctx->r7) = 0;
        goto L_80277FE4;
    // 0x80277FA4: sb          $zero, 0x4($a3)
    MEM_B(0X4, ctx->r7) = 0;
L_80277FA8:
    // 0x80277FA8: lui         $t1, 0x803C
    ctx->r9 = S32(0X803C << 16);
    // 0x80277FAC: addiu       $t1, $t1, 0x70DC
    ctx->r9 = ADD32(ctx->r9, 0X70DC);
    // 0x80277FB0: sw          $t1, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r9;
    // 0x80277FB4: lb          $t2, 0x57($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X57);
    // 0x80277FB8: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x80277FBC: addiu       $t4, $t4, 0x11F4
    ctx->r12 = ADD32(ctx->r12, 0X11F4);
    // 0x80277FC0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80277FC4: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x80277FC8: lh          $a1, 0x0($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X0);
    // 0x80277FCC: lh          $a2, 0x2($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X2);
    // 0x80277FD0: jal         0x8004CD44
    // 0x80277FD4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8004CD44(rdram, ctx);
        goto after_7;
    // 0x80277FD4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_7:
    // 0x80277FD8: b           L_80277FE8
    // 0x80277FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277FE8;
    // 0x80277FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277FE0:
    // 0x80277FE0: sb          $zero, 0x4($a3)
    MEM_B(0X4, ctx->r7) = 0;
L_80277FE4:
    // 0x80277FE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277FE8:
    // 0x80277FE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80277FEC: jr          $ra
    // 0x80277FF0: nop

    return;
    // 0x80277FF0: nop

;}
RECOMP_FUNC void func_80277ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277ED0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80277ED4: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x80277ED8: lh          $a1, 0x0($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X0);
    // 0x80277EDC: lh          $a2, 0x2($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X2);
    // 0x80277EE0: jal         0x8004CD44
    // 0x80277EE4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x80277EE4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_0:
    // 0x80277EE8: b           L_80277FE8
    // 0x80277EEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277FE8;
    // 0x80277EEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80277EF0: lui         $t0, 0x803C
    ctx->r8 = S32(0X803C << 16);
    // 0x80277EF4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80277EF8: addiu       $t0, $t0, 0x69E0
    ctx->r8 = ADD32(ctx->r8, 0X69E0);
    // 0x80277EFC: sb          $t9, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r25;
    // 0x80277F00: sw          $t0, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r8;
    // 0x80277F04: lb          $t1, 0x46($v0)
    ctx->r9 = MEM_B(ctx->r2, 0X46);
    // 0x80277F08: lui         $t3, 0x8028
    ctx->r11 = S32(0X8028 << 16);
    // 0x80277F0C: addiu       $t3, $t3, 0x13E8
    ctx->r11 = ADD32(ctx->r11, 0X13E8);
    // 0x80277F10: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80277F14: addu        $v1, $t2, $t3
    ctx->r3 = ADD32(ctx->r10, ctx->r11);
    // 0x80277F18: lh          $a1, 0x0($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X0);
    // 0x80277F1C: lh          $a2, 0x2($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X2);
    // 0x80277F20: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80277F24: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80277F28: jal         0x8004CD44
    // 0x80277F2C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x80277F2C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_1:
    // 0x80277F30: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80277F34: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80277F38: lb          $t4, 0x45($v0)
    ctx->r12 = MEM_B(ctx->r2, 0X45);
    // 0x80277F3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80277F40: bne         $t4, $at, L_80277FE4
    if (ctx->r12 != ctx->r1) {
        // 0x80277F44: addiu       $t5, $zero, 0x414
        ctx->r13 = ADD32(0, 0X414);
            goto L_80277FE4;
    }
    // 0x80277F44: addiu       $t5, $zero, 0x414
    ctx->r13 = ADD32(0, 0X414);
    // 0x80277F48: b           L_80277FE4
    // 0x80277F4C: sh          $t5, 0x12($a3)
    MEM_H(0X12, ctx->r7) = ctx->r13;
        goto L_80277FE4;
    // 0x80277F4C: sh          $t5, 0x12($a3)
    MEM_H(0X12, ctx->r7) = ctx->r13;
    // 0x80277F50: lb          $t6, 0x4D($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X4D);
    // 0x80277F54: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x80277F58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80277F5C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80277F60: lw          $t8, 0x16F0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X16F0);
    // 0x80277F64: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80277F68: sw          $t8, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r24;
    // 0x80277F6C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x80277F70: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80277F74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80277F78: jal         0x8004CD44
    // 0x80277F7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x80277F7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80277F80: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80277F84: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80277F88: lb          $t9, 0x4C($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X4C);
    // 0x80277F8C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80277F90: bne         $t9, $zero, L_80277FA0
    if (ctx->r25 != 0) {
        // 0x80277F94: nop
    
            goto L_80277FA0;
    }
    // 0x80277F94: nop

    // 0x80277F98: b           L_80277FE4
    // 0x80277F9C: sb          $t0, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r8;
        goto L_80277FE4;
    // 0x80277F9C: sb          $t0, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r8;
L_80277FA0:
    // 0x80277FA0: b           L_80277FE4
    // 0x80277FA4: sb          $zero, 0x4($a3)
    MEM_B(0X4, ctx->r7) = 0;
        goto L_80277FE4;
    // 0x80277FA4: sb          $zero, 0x4($a3)
    MEM_B(0X4, ctx->r7) = 0;
    // 0x80277FA8: lui         $t1, 0x803C
    ctx->r9 = S32(0X803C << 16);
    // 0x80277FAC: addiu       $t1, $t1, 0x70DC
    ctx->r9 = ADD32(ctx->r9, 0X70DC);
    // 0x80277FB0: sw          $t1, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r9;
    // 0x80277FB4: lb          $t2, 0x57($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X57);
    // 0x80277FB8: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x80277FBC: addiu       $t4, $t4, 0x11F4
    ctx->r12 = ADD32(ctx->r12, 0X11F4);
    // 0x80277FC0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80277FC4: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x80277FC8: lh          $a1, 0x0($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X0);
    // 0x80277FCC: lh          $a2, 0x2($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X2);
    // 0x80277FD0: jal         0x8004CD44
    // 0x80277FD4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    func_8004CD44(rdram, ctx);
        goto after_3;
    // 0x80277FD4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_3:
    // 0x80277FD8: b           L_80277FE8
    // 0x80277FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80277FE8;
    // 0x80277FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80277FE0: sb          $zero, 0x4($a3)
    MEM_B(0X4, ctx->r7) = 0;
L_80277FE4:
    // 0x80277FE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80277FE8:
    // 0x80277FE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80277FEC: jr          $ra
    // 0x80277FF0: nop

    return;
    // 0x80277FF0: nop

;}
RECOMP_FUNC void func_80277FF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80277FF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80277FF8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80277FFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80278000: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x80278004: jal         0x8004BD64
    // 0x80278008: nop

    func_8004BD64(rdram, ctx);
        goto after_0;
    // 0x80278008: nop

    after_0:
    // 0x8027800C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80278010: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x80278014: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x80278018: addiu       $a3, $a3, -0x7280
    ctx->r7 = ADD32(ctx->r7, -0X7280);
    // 0x8027801C: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    // 0x80278020: jal         0x8004CD24
    // 0x80278024: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x80278024: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_1:
    // 0x80278028: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8027802C: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x80278030: addiu       $t6, $t6, -0x7FB8
    ctx->r14 = ADD32(ctx->r14, -0X7FB8);
    // 0x80278034: sw          $t6, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r14;
    // 0x80278038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027803C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80278040: jr          $ra
    // 0x80278044: nop

    return;
    // 0x80278044: nop

;}
RECOMP_FUNC void func_80278048(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278048: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8027804C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80278050: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80278054: lw          $a3, 0x8($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X8);
    // 0x80278058: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8027805C: lb          $t6, 0x38($a3)
    ctx->r14 = MEM_B(ctx->r7, 0X38);
    // 0x80278060: nop

    // 0x80278064: addiu       $t7, $t6, -0x2
    ctx->r15 = ADD32(ctx->r14, -0X2);
    // 0x80278068: sltiu       $at, $t7, 0x8
    ctx->r1 = ctx->r15 < 0X8 ? 1 : 0;
    // 0x8027806C: beq         $at, $zero, L_802782B4
    if (ctx->r1 == 0) {
        // 0x80278070: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_802782B4;
    }
    // 0x80278070: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80278074: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80278078: addu        $at, $at, $t7
    gpr jr_addend_80278084 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8027807C: lw          $t7, 0x1EAC($at)
    ctx->r15 = ADD32(ctx->r1, 0X1EAC);
    // 0x80278080: nop

    // 0x80278084: jr          $t7
    // 0x80278088: nop

    switch (jr_addend_80278084 >> 2) {
        case 0: goto L_802780FC; break;
        case 1: goto L_802782B4; break;
        case 2: goto L_80278158; break;
        case 3: goto L_802781B4; break;
        case 4: goto L_802782B4; break;
        case 5: goto L_80278210; break;
        case 6: goto L_80278268; break;
        case 7: goto L_8027808C; break;
        default: switch_error(__func__, 0x80278084, 0x80281EAC);
    }
    // 0x80278088: nop

L_8027808C:
    // 0x8027808C: lb          $v0, 0x49($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X49);
    // 0x80278090: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80278094: beq         $v0, $zero, L_802780AC
    if (ctx->r2 == 0) {
        // 0x80278098: nop
    
            goto L_802780AC;
    }
    // 0x80278098: nop

    // 0x8027809C: beq         $v0, $at, L_802780B4
    if (ctx->r2 == ctx->r1) {
        // 0x802780A0: addiu       $t8, $zero, 0x210
        ctx->r24 = ADD32(0, 0X210);
            goto L_802780B4;
    }
    // 0x802780A0: addiu       $t8, $zero, 0x210
    ctx->r24 = ADD32(0, 0X210);
    // 0x802780A4: b           L_802782BC
    // 0x802780A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x802780A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802780AC:
    // 0x802780AC: b           L_802782B8
    // 0x802780B0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_802782B8;
    // 0x802780B0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_802780B4:
    // 0x802780B4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x802780B8: lb          $t9, 0x4B($a3)
    ctx->r25 = MEM_B(ctx->r7, 0X4B);
    // 0x802780BC: lui         $t1, 0x803D
    ctx->r9 = S32(0X803D << 16);
    // 0x802780C0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x802780C4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x802780C8: lw          $t1, 0x1A2C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1A2C);
    // 0x802780CC: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x802780D0: sw          $t1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r9;
    // 0x802780D4: lb          $t2, 0x4B($a3)
    ctx->r10 = MEM_B(ctx->r7, 0X4B);
    // 0x802780D8: addiu       $t4, $t4, 0x17E8
    ctx->r12 = ADD32(ctx->r12, 0X17E8);
    // 0x802780DC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x802780E0: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x802780E4: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x802780E8: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x802780EC: jal         0x8004CD44
    // 0x802780F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x802780F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x802780F4: b           L_802782BC
    // 0x802780F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x802780F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802780FC:
    // 0x802780FC: lb          $t5, 0x3D($a3)
    ctx->r13 = MEM_B(ctx->r7, 0X3D);
    // 0x80278100: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80278104: bne         $t5, $at, L_80278114
    if (ctx->r13 != ctx->r1) {
        // 0x80278108: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80278114;
    }
    // 0x80278108: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8027810C: b           L_802782B8
    // 0x80278110: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_802782B8;
    // 0x80278110: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_80278114:
    // 0x80278114: sb          $t6, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r14;
    // 0x80278118: lbu         $a2, 0x3D($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X3D);
    // 0x8027811C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80278120: jal         0x80279914
    // 0x80278124: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80279914(rdram, ctx);
        goto after_1;
    // 0x80278124: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x80278128: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    // 0x8027812C: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x80278130: jal         0x8004CD44
    // 0x80278134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x80278134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80278138: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x8027813C: addiu       $a3, $a3, -0x7280
    ctx->r7 = ADD32(ctx->r7, -0X7280);
    // 0x80278140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278144: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    // 0x80278148: jal         0x8004CD24
    // 0x8027814C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8004CD24(rdram, ctx);
        goto after_3;
    // 0x8027814C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_3:
    // 0x80278150: b           L_802782BC
    // 0x80278154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x80278154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80278158:
    // 0x80278158: lb          $t7, 0x44($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X44);
    // 0x8027815C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80278160: bne         $t7, $at, L_80278170
    if (ctx->r15 != ctx->r1) {
        // 0x80278164: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80278170;
    }
    // 0x80278164: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80278168: b           L_802782B8
    // 0x8027816C: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_802782B8;
    // 0x8027816C: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_80278170:
    // 0x80278170: sb          $t8, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r24;
    // 0x80278174: lbu         $a2, 0x44($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X44);
    // 0x80278178: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8027817C: jal         0x80279914
    // 0x80278180: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80279914(rdram, ctx);
        goto after_4;
    // 0x80278180: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_4:
    // 0x80278184: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    // 0x80278188: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x8027818C: jal         0x8004CD44
    // 0x80278190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_5;
    // 0x80278190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80278194: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x80278198: addiu       $a3, $a3, -0x7280
    ctx->r7 = ADD32(ctx->r7, -0X7280);
    // 0x8027819C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802781A0: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    // 0x802781A4: jal         0x8004CD24
    // 0x802781A8: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8004CD24(rdram, ctx);
        goto after_6;
    // 0x802781A8: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_6:
    // 0x802781AC: b           L_802782BC
    // 0x802781B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x802781B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802781B4:
    // 0x802781B4: lb          $t9, 0x46($a3)
    ctx->r25 = MEM_B(ctx->r7, 0X46);
    // 0x802781B8: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x802781BC: bne         $t9, $at, L_802781CC
    if (ctx->r25 != ctx->r1) {
        // 0x802781C0: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_802781CC;
    }
    // 0x802781C0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802781C4: b           L_802782B8
    // 0x802781C8: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_802782B8;
    // 0x802781C8: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_802781CC:
    // 0x802781CC: sb          $t0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r8;
    // 0x802781D0: lbu         $a2, 0x46($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X46);
    // 0x802781D4: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x802781D8: jal         0x80279914
    // 0x802781DC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80279914(rdram, ctx);
        goto after_7;
    // 0x802781DC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_7:
    // 0x802781E0: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    // 0x802781E4: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x802781E8: jal         0x8004CD44
    // 0x802781EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_8;
    // 0x802781EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x802781F0: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x802781F4: addiu       $a3, $a3, -0x7280
    ctx->r7 = ADD32(ctx->r7, -0X7280);
    // 0x802781F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802781FC: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    // 0x80278200: jal         0x8004CD24
    // 0x80278204: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8004CD24(rdram, ctx);
        goto after_9;
    // 0x80278204: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_9:
    // 0x80278208: b           L_802782BC
    // 0x8027820C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x8027820C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80278210:
    // 0x80278210: lb          $v0, 0x55($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X55);
    // 0x80278214: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80278218: beq         $v0, $at, L_80278234
    if (ctx->r2 == ctx->r1) {
        // 0x8027821C: addiu       $t1, $zero, 0x210
        ctx->r9 = ADD32(0, 0X210);
            goto L_80278234;
    }
    // 0x8027821C: addiu       $t1, $zero, 0x210
    ctx->r9 = ADD32(0, 0X210);
    // 0x80278220: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80278224: beq         $v0, $at, L_80278234
    if (ctx->r2 == ctx->r1) {
        // 0x80278228: nop
    
            goto L_80278234;
    }
    // 0x80278228: nop

    // 0x8027822C: b           L_802782B8
    // 0x80278230: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_802782B8;
    // 0x80278230: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_80278234:
    // 0x80278234: sh          $t1, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r9;
    // 0x80278238: lb          $t2, 0x58($a3)
    ctx->r10 = MEM_B(ctx->r7, 0X58);
    // 0x8027823C: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x80278240: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80278244: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80278248: lw          $t4, 0x1284($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1284);
    // 0x8027824C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80278254: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80278258: jal         0x8004CD44
    // 0x8027825C: sw          $t4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r12;
    func_8004CD44(rdram, ctx);
        goto after_10;
    // 0x8027825C: sw          $t4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r12;
    after_10:
    // 0x80278260: b           L_802782BC
    // 0x80278264: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x80278264: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80278268:
    // 0x80278268: lb          $t5, 0x56($a3)
    ctx->r13 = MEM_B(ctx->r7, 0X56);
    // 0x8027826C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80278270: bne         $t5, $at, L_802782AC
    if (ctx->r13 != ctx->r1) {
        // 0x80278274: addiu       $t6, $zero, 0x210
        ctx->r14 = ADD32(0, 0X210);
            goto L_802782AC;
    }
    // 0x80278274: addiu       $t6, $zero, 0x210
    ctx->r14 = ADD32(0, 0X210);
    // 0x80278278: sh          $t6, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r14;
    // 0x8027827C: lb          $t7, 0x58($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X58);
    // 0x80278280: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80278284: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80278288: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8027828C: lw          $t9, 0x1284($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1284);
    // 0x80278290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278294: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80278298: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027829C: jal         0x8004CD44
    // 0x802782A0: sw          $t9, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r25;
    func_8004CD44(rdram, ctx);
        goto after_11;
    // 0x802782A0: sw          $t9, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r25;
    after_11:
    // 0x802782A4: b           L_802782BC
    // 0x802782A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x802782A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802782AC:
    // 0x802782AC: b           L_802782B8
    // 0x802782B0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_802782B8;
    // 0x802782B0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_802782B4:
    // 0x802782B4: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_802782B8:
    // 0x802782B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802782BC:
    // 0x802782BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802782C0: jr          $ra
    // 0x802782C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802782C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8027809C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027809C: beq         $v0, $at, L_802780B4
    if (ctx->r2 == ctx->r1) {
        // 0x802780A0: addiu       $t8, $zero, 0x210
        ctx->r24 = ADD32(0, 0X210);
            goto L_802780B4;
    }
    // 0x802780A0: addiu       $t8, $zero, 0x210
    ctx->r24 = ADD32(0, 0X210);
    // 0x802780A4: b           L_802782BC
    // 0x802780A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x802780A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802780AC: b           L_802782B8
    // 0x802780B0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_802782B8;
    // 0x802780B0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_802780B4:
    // 0x802780B4: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
    // 0x802780B8: lb          $t9, 0x4B($a3)
    ctx->r25 = MEM_B(ctx->r7, 0X4B);
    // 0x802780BC: lui         $t1, 0x803D
    ctx->r9 = S32(0X803D << 16);
    // 0x802780C0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x802780C4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x802780C8: lw          $t1, 0x1A2C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X1A2C);
    // 0x802780CC: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x802780D0: sw          $t1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r9;
    // 0x802780D4: lb          $t2, 0x4B($a3)
    ctx->r10 = MEM_B(ctx->r7, 0X4B);
    // 0x802780D8: addiu       $t4, $t4, 0x17E8
    ctx->r12 = ADD32(ctx->r12, 0X17E8);
    // 0x802780DC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x802780E0: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x802780E4: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x802780E8: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x802780EC: jal         0x8004CD44
    // 0x802780F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x802780F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x802780F4: b           L_802782BC
    // 0x802780F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x802780F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802780FC: lb          $t5, 0x3D($a3)
    ctx->r13 = MEM_B(ctx->r7, 0X3D);
    // 0x80278100: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80278104: bne         $t5, $at, L_80278114
    if (ctx->r13 != ctx->r1) {
        // 0x80278108: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80278114;
    }
    // 0x80278108: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8027810C: b           L_802782B8
    // 0x80278110: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_802782B8;
    // 0x80278110: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_80278114:
    // 0x80278114: sb          $t6, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r14;
    // 0x80278118: lbu         $a2, 0x3D($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X3D);
    // 0x8027811C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80278120: jal         0x80279914
    // 0x80278124: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80279914(rdram, ctx);
        goto after_1;
    // 0x80278124: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x80278128: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    // 0x8027812C: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x80278130: jal         0x8004CD44
    // 0x80278134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x80278134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80278138: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x8027813C: addiu       $a3, $a3, -0x7280
    ctx->r7 = ADD32(ctx->r7, -0X7280);
    // 0x80278140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278144: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    // 0x80278148: jal         0x8004CD24
    // 0x8027814C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8004CD24(rdram, ctx);
        goto after_3;
    // 0x8027814C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_3:
    // 0x80278150: b           L_802782BC
    // 0x80278154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x80278154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80278158: lb          $t7, 0x44($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X44);
    // 0x8027815C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80278160: bne         $t7, $at, L_80278170
    if (ctx->r15 != ctx->r1) {
        // 0x80278164: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80278170;
    }
    // 0x80278164: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80278168: b           L_802782B8
    // 0x8027816C: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_802782B8;
    // 0x8027816C: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_80278170:
    // 0x80278170: sb          $t8, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r24;
    // 0x80278174: lbu         $a2, 0x44($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X44);
    // 0x80278178: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8027817C: jal         0x80279914
    // 0x80278180: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80279914(rdram, ctx);
        goto after_4;
    // 0x80278180: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_4:
    // 0x80278184: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    // 0x80278188: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x8027818C: jal         0x8004CD44
    // 0x80278190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_5;
    // 0x80278190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80278194: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x80278198: addiu       $a3, $a3, -0x7280
    ctx->r7 = ADD32(ctx->r7, -0X7280);
    // 0x8027819C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802781A0: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    // 0x802781A4: jal         0x8004CD24
    // 0x802781A8: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8004CD24(rdram, ctx);
        goto after_6;
    // 0x802781A8: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_6:
    // 0x802781AC: b           L_802782BC
    // 0x802781B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x802781B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802781B4: lb          $t9, 0x46($a3)
    ctx->r25 = MEM_B(ctx->r7, 0X46);
    // 0x802781B8: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x802781BC: bne         $t9, $at, L_802781CC
    if (ctx->r25 != ctx->r1) {
        // 0x802781C0: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_802781CC;
    }
    // 0x802781C0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802781C4: b           L_802782B8
    // 0x802781C8: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_802782B8;
    // 0x802781C8: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_802781CC:
    // 0x802781CC: sb          $t0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r8;
    // 0x802781D0: lbu         $a2, 0x46($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X46);
    // 0x802781D4: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x802781D8: jal         0x80279914
    // 0x802781DC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80279914(rdram, ctx);
        goto after_7;
    // 0x802781DC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_7:
    // 0x802781E0: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    // 0x802781E4: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x802781E8: jal         0x8004CD44
    // 0x802781EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_8;
    // 0x802781EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x802781F0: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x802781F4: addiu       $a3, $a3, -0x7280
    ctx->r7 = ADD32(ctx->r7, -0X7280);
    // 0x802781F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802781FC: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    // 0x80278200: jal         0x8004CD24
    // 0x80278204: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8004CD24(rdram, ctx);
        goto after_9;
    // 0x80278204: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_9:
    // 0x80278208: b           L_802782BC
    // 0x8027820C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x8027820C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80278210: lb          $v0, 0x55($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X55);
    // 0x80278214: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80278218: beq         $v0, $at, L_80278234
    if (ctx->r2 == ctx->r1) {
        // 0x8027821C: addiu       $t1, $zero, 0x210
        ctx->r9 = ADD32(0, 0X210);
            goto L_80278234;
    }
    // 0x8027821C: addiu       $t1, $zero, 0x210
    ctx->r9 = ADD32(0, 0X210);
    // 0x80278220: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80278224: beq         $v0, $at, L_80278234
    if (ctx->r2 == ctx->r1) {
        // 0x80278228: nop
    
            goto L_80278234;
    }
    // 0x80278228: nop

    // 0x8027822C: b           L_802782B8
    // 0x80278230: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_802782B8;
    // 0x80278230: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_80278234:
    // 0x80278234: sh          $t1, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r9;
    // 0x80278238: lb          $t2, 0x58($a3)
    ctx->r10 = MEM_B(ctx->r7, 0X58);
    // 0x8027823C: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x80278240: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80278244: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80278248: lw          $t4, 0x1284($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1284);
    // 0x8027824C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80278254: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80278258: jal         0x8004CD44
    // 0x8027825C: sw          $t4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r12;
    func_8004CD44(rdram, ctx);
        goto after_10;
    // 0x8027825C: sw          $t4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r12;
    after_10:
    // 0x80278260: b           L_802782BC
    // 0x80278264: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x80278264: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80278268: lb          $t5, 0x56($a3)
    ctx->r13 = MEM_B(ctx->r7, 0X56);
    // 0x8027826C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80278270: bne         $t5, $at, L_802782AC
    if (ctx->r13 != ctx->r1) {
        // 0x80278274: addiu       $t6, $zero, 0x210
        ctx->r14 = ADD32(0, 0X210);
            goto L_802782AC;
    }
    // 0x80278274: addiu       $t6, $zero, 0x210
    ctx->r14 = ADD32(0, 0X210);
    // 0x80278278: sh          $t6, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r14;
    // 0x8027827C: lb          $t7, 0x58($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X58);
    // 0x80278280: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80278284: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80278288: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8027828C: lw          $t9, 0x1284($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1284);
    // 0x80278290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278294: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80278298: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027829C: jal         0x8004CD44
    // 0x802782A0: sw          $t9, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r25;
    func_8004CD44(rdram, ctx);
        goto after_11;
    // 0x802782A0: sw          $t9, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r25;
    after_11:
    // 0x802782A4: b           L_802782BC
    // 0x802782A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x802782A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802782AC:
    // 0x802782AC: b           L_802782B8
    // 0x802782B0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_802782B8;
    // 0x802782B0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x802782B4: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_802782B8:
    // 0x802782B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802782BC:
    // 0x802782BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802782C0: jr          $ra
    // 0x802782C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802782C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802780E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802780E0: addu        $v0, $t3, $t4
    ctx->r2 = ADD32(ctx->r11, ctx->r12);
    // 0x802780E4: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x802780E8: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x802780EC: jal         0x8004CD44
    // 0x802780F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x802780F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x802780F4: b           L_802782BC
    // 0x802780F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x802780F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802780FC: lb          $t5, 0x3D($a3)
    ctx->r13 = MEM_B(ctx->r7, 0X3D);
    // 0x80278100: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80278104: bne         $t5, $at, L_80278114
    if (ctx->r13 != ctx->r1) {
        // 0x80278108: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80278114;
    }
    // 0x80278108: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8027810C: b           L_802782B8
    // 0x80278110: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_802782B8;
    // 0x80278110: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_80278114:
    // 0x80278114: sb          $t6, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r14;
    // 0x80278118: lbu         $a2, 0x3D($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X3D);
    // 0x8027811C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80278120: jal         0x80279914
    // 0x80278124: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80279914(rdram, ctx);
        goto after_1;
    // 0x80278124: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x80278128: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    // 0x8027812C: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x80278130: jal         0x8004CD44
    // 0x80278134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x80278134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80278138: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x8027813C: addiu       $a3, $a3, -0x7280
    ctx->r7 = ADD32(ctx->r7, -0X7280);
    // 0x80278140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278144: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    // 0x80278148: jal         0x8004CD24
    // 0x8027814C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8004CD24(rdram, ctx);
        goto after_3;
    // 0x8027814C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_3:
    // 0x80278150: b           L_802782BC
    // 0x80278154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x80278154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80278158: lb          $t7, 0x44($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X44);
    // 0x8027815C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80278160: bne         $t7, $at, L_80278170
    if (ctx->r15 != ctx->r1) {
        // 0x80278164: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80278170;
    }
    // 0x80278164: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80278168: b           L_802782B8
    // 0x8027816C: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_802782B8;
    // 0x8027816C: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_80278170:
    // 0x80278170: sb          $t8, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r24;
    // 0x80278174: lbu         $a2, 0x44($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X44);
    // 0x80278178: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8027817C: jal         0x80279914
    // 0x80278180: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80279914(rdram, ctx);
        goto after_4;
    // 0x80278180: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_4:
    // 0x80278184: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    // 0x80278188: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x8027818C: jal         0x8004CD44
    // 0x80278190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_5;
    // 0x80278190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80278194: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x80278198: addiu       $a3, $a3, -0x7280
    ctx->r7 = ADD32(ctx->r7, -0X7280);
    // 0x8027819C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802781A0: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    // 0x802781A4: jal         0x8004CD24
    // 0x802781A8: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8004CD24(rdram, ctx);
        goto after_6;
    // 0x802781A8: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_6:
    // 0x802781AC: b           L_802782BC
    // 0x802781B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x802781B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802781B4: lb          $t9, 0x46($a3)
    ctx->r25 = MEM_B(ctx->r7, 0X46);
    // 0x802781B8: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x802781BC: bne         $t9, $at, L_802781CC
    if (ctx->r25 != ctx->r1) {
        // 0x802781C0: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_802781CC;
    }
    // 0x802781C0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802781C4: b           L_802782B8
    // 0x802781C8: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_802782B8;
    // 0x802781C8: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_802781CC:
    // 0x802781CC: sb          $t0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r8;
    // 0x802781D0: lbu         $a2, 0x46($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X46);
    // 0x802781D4: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x802781D8: jal         0x80279914
    // 0x802781DC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80279914(rdram, ctx);
        goto after_7;
    // 0x802781DC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_7:
    // 0x802781E0: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    // 0x802781E4: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x802781E8: jal         0x8004CD44
    // 0x802781EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_8;
    // 0x802781EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x802781F0: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x802781F4: addiu       $a3, $a3, -0x7280
    ctx->r7 = ADD32(ctx->r7, -0X7280);
    // 0x802781F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802781FC: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    // 0x80278200: jal         0x8004CD24
    // 0x80278204: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8004CD24(rdram, ctx);
        goto after_9;
    // 0x80278204: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_9:
    // 0x80278208: b           L_802782BC
    // 0x8027820C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x8027820C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80278210: lb          $v0, 0x55($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X55);
    // 0x80278214: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80278218: beq         $v0, $at, L_80278234
    if (ctx->r2 == ctx->r1) {
        // 0x8027821C: addiu       $t1, $zero, 0x210
        ctx->r9 = ADD32(0, 0X210);
            goto L_80278234;
    }
    // 0x8027821C: addiu       $t1, $zero, 0x210
    ctx->r9 = ADD32(0, 0X210);
    // 0x80278220: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80278224: beq         $v0, $at, L_80278234
    if (ctx->r2 == ctx->r1) {
        // 0x80278228: nop
    
            goto L_80278234;
    }
    // 0x80278228: nop

    // 0x8027822C: b           L_802782B8
    // 0x80278230: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_802782B8;
    // 0x80278230: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_80278234:
    // 0x80278234: sh          $t1, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r9;
    // 0x80278238: lb          $t2, 0x58($a3)
    ctx->r10 = MEM_B(ctx->r7, 0X58);
    // 0x8027823C: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x80278240: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80278244: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80278248: lw          $t4, 0x1284($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1284);
    // 0x8027824C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80278254: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80278258: jal         0x8004CD44
    // 0x8027825C: sw          $t4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r12;
    func_8004CD44(rdram, ctx);
        goto after_10;
    // 0x8027825C: sw          $t4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r12;
    after_10:
    // 0x80278260: b           L_802782BC
    // 0x80278264: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x80278264: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80278268: lb          $t5, 0x56($a3)
    ctx->r13 = MEM_B(ctx->r7, 0X56);
    // 0x8027826C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80278270: bne         $t5, $at, L_802782AC
    if (ctx->r13 != ctx->r1) {
        // 0x80278274: addiu       $t6, $zero, 0x210
        ctx->r14 = ADD32(0, 0X210);
            goto L_802782AC;
    }
    // 0x80278274: addiu       $t6, $zero, 0x210
    ctx->r14 = ADD32(0, 0X210);
    // 0x80278278: sh          $t6, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r14;
    // 0x8027827C: lb          $t7, 0x58($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X58);
    // 0x80278280: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80278284: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80278288: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8027828C: lw          $t9, 0x1284($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1284);
    // 0x80278290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278294: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80278298: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027829C: jal         0x8004CD44
    // 0x802782A0: sw          $t9, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r25;
    func_8004CD44(rdram, ctx);
        goto after_11;
    // 0x802782A0: sw          $t9, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r25;
    after_11:
    // 0x802782A4: b           L_802782BC
    // 0x802782A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x802782A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802782AC:
    // 0x802782AC: b           L_802782B8
    // 0x802782B0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_802782B8;
    // 0x802782B0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x802782B4: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_802782B8:
    // 0x802782B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802782BC:
    // 0x802782BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802782C0: jr          $ra
    // 0x802782C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802782C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80278144(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278144: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    // 0x80278148: jal         0x8004CD24
    // 0x8027814C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8027814C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_0:
    // 0x80278150: b           L_802782BC
    // 0x80278154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x80278154: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80278158: lb          $t7, 0x44($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X44);
    // 0x8027815C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80278160: bne         $t7, $at, L_80278170
    if (ctx->r15 != ctx->r1) {
        // 0x80278164: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80278170;
    }
    // 0x80278164: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80278168: b           L_802782B8
    // 0x8027816C: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_802782B8;
    // 0x8027816C: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_80278170:
    // 0x80278170: sb          $t8, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r24;
    // 0x80278174: lbu         $a2, 0x44($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X44);
    // 0x80278178: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8027817C: jal         0x80279914
    // 0x80278180: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80279914(rdram, ctx);
        goto after_1;
    // 0x80278180: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x80278184: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    // 0x80278188: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x8027818C: jal         0x8004CD44
    // 0x80278190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x80278190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80278194: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x80278198: addiu       $a3, $a3, -0x7280
    ctx->r7 = ADD32(ctx->r7, -0X7280);
    // 0x8027819C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802781A0: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    // 0x802781A4: jal         0x8004CD24
    // 0x802781A8: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8004CD24(rdram, ctx);
        goto after_3;
    // 0x802781A8: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_3:
    // 0x802781AC: b           L_802782BC
    // 0x802781B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x802781B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802781B4: lb          $t9, 0x46($a3)
    ctx->r25 = MEM_B(ctx->r7, 0X46);
    // 0x802781B8: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x802781BC: bne         $t9, $at, L_802781CC
    if (ctx->r25 != ctx->r1) {
        // 0x802781C0: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_802781CC;
    }
    // 0x802781C0: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x802781C4: b           L_802782B8
    // 0x802781C8: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_802782B8;
    // 0x802781C8: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_802781CC:
    // 0x802781CC: sb          $t0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r8;
    // 0x802781D0: lbu         $a2, 0x46($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X46);
    // 0x802781D4: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x802781D8: jal         0x80279914
    // 0x802781DC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_80279914(rdram, ctx);
        goto after_4;
    // 0x802781DC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_4:
    // 0x802781E0: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    // 0x802781E4: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x802781E8: jal         0x8004CD44
    // 0x802781EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_5;
    // 0x802781EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x802781F0: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x802781F4: addiu       $a3, $a3, -0x7280
    ctx->r7 = ADD32(ctx->r7, -0X7280);
    // 0x802781F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x802781FC: addiu       $a1, $zero, 0x139
    ctx->r5 = ADD32(0, 0X139);
    // 0x80278200: jal         0x8004CD24
    // 0x80278204: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8004CD24(rdram, ctx);
        goto after_6;
    // 0x80278204: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_6:
    // 0x80278208: b           L_802782BC
    // 0x8027820C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x8027820C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80278210: lb          $v0, 0x55($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X55);
    // 0x80278214: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80278218: beq         $v0, $at, L_80278234
    if (ctx->r2 == ctx->r1) {
        // 0x8027821C: addiu       $t1, $zero, 0x210
        ctx->r9 = ADD32(0, 0X210);
            goto L_80278234;
    }
    // 0x8027821C: addiu       $t1, $zero, 0x210
    ctx->r9 = ADD32(0, 0X210);
    // 0x80278220: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80278224: beq         $v0, $at, L_80278234
    if (ctx->r2 == ctx->r1) {
        // 0x80278228: nop
    
            goto L_80278234;
    }
    // 0x80278228: nop

    // 0x8027822C: b           L_802782B8
    // 0x80278230: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_802782B8;
    // 0x80278230: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_80278234:
    // 0x80278234: sh          $t1, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r9;
    // 0x80278238: lb          $t2, 0x58($a3)
    ctx->r10 = MEM_B(ctx->r7, 0X58);
    // 0x8027823C: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x80278240: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80278244: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80278248: lw          $t4, 0x1284($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X1284);
    // 0x8027824C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80278254: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80278258: jal         0x8004CD44
    // 0x8027825C: sw          $t4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r12;
    func_8004CD44(rdram, ctx);
        goto after_7;
    // 0x8027825C: sw          $t4, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r12;
    after_7:
    // 0x80278260: b           L_802782BC
    // 0x80278264: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x80278264: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80278268: lb          $t5, 0x56($a3)
    ctx->r13 = MEM_B(ctx->r7, 0X56);
    // 0x8027826C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80278270: bne         $t5, $at, L_802782AC
    if (ctx->r13 != ctx->r1) {
        // 0x80278274: addiu       $t6, $zero, 0x210
        ctx->r14 = ADD32(0, 0X210);
            goto L_802782AC;
    }
    // 0x80278274: addiu       $t6, $zero, 0x210
    ctx->r14 = ADD32(0, 0X210);
    // 0x80278278: sh          $t6, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r14;
    // 0x8027827C: lb          $t7, 0x58($a3)
    ctx->r15 = MEM_B(ctx->r7, 0X58);
    // 0x80278280: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80278284: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80278288: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8027828C: lw          $t9, 0x1284($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X1284);
    // 0x80278290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80278294: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80278298: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8027829C: jal         0x8004CD44
    // 0x802782A0: sw          $t9, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r25;
    func_8004CD44(rdram, ctx);
        goto after_8;
    // 0x802782A0: sw          $t9, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r25;
    after_8:
    // 0x802782A4: b           L_802782BC
    // 0x802782A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_802782BC;
    // 0x802782A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802782AC:
    // 0x802782AC: b           L_802782B8
    // 0x802782B0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_802782B8;
    // 0x802782B0: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x802782B4: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_802782B8:
    // 0x802782B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_802782BC:
    // 0x802782BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802782C0: jr          $ra
    // 0x802782C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802782C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_802782C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802782C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802782CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802782D0: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802782D4: jal         0x80029354
    // 0x802782D8: addiu       $a0, $a0, -0x7CE4
    ctx->r4 = ADD32(ctx->r4, -0X7CE4);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x802782D8: addiu       $a0, $a0, -0x7CE4
    ctx->r4 = ADD32(ctx->r4, -0X7CE4);
    after_0:
    // 0x802782DC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802782E0: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x802782E4: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x802782E8: addiu       $a3, $a3, -0x7244
    ctx->r7 = ADD32(ctx->r7, -0X7244);
    // 0x802782EC: addiu       $a1, $zero, 0x30C
    ctx->r5 = ADD32(0, 0X30C);
    // 0x802782F0: jal         0x8004CD24
    // 0x802782F4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x802782F4: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_1:
    // 0x802782F8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802782FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80278300: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    // 0x80278304: jal         0x8002135C
    // 0x80278308: addiu       $a2, $zero, 0xFB
    ctx->r6 = ADD32(0, 0XFB);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x80278308: addiu       $a2, $zero, 0xFB
    ctx->r6 = ADD32(0, 0XFB);
    after_2:
    // 0x8027830C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80278310: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80278314: jr          $ra
    // 0x80278318: nop

    return;
    // 0x80278318: nop

;}
RECOMP_FUNC void func_8027831C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8027831C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80278320: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80278324: lw          $a3, 0x8($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X8);
    // 0x80278328: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8027832C: lb          $v1, 0x38($a3)
    ctx->r3 = MEM_B(ctx->r7, 0X38);
    // 0x80278330: lbu         $t0, 0x3A($a3)
    ctx->r8 = MEM_BU(ctx->r7, 0X3A);
    // 0x80278334: lbu         $t1, 0x3D($a3)
    ctx->r9 = MEM_BU(ctx->r7, 0X3D);
    // 0x80278338: beq         $v1, $a2, L_80278350
    if (ctx->r3 == ctx->r6) {
        // 0x8027833C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80278350;
    }
    // 0x8027833C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80278340: beq         $v1, $at, L_802783EC
    if (ctx->r3 == ctx->r1) {
        // 0x80278344: nop
    
            goto L_802783EC;
    }
    // 0x80278344: nop

    // 0x80278348: b           L_802784B0
    // 0x8027834C: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
        goto L_802784B0;
    // 0x8027834C: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
L_80278350:
    // 0x80278350: lb          $v1, 0x3E($a3)
    ctx->r3 = MEM_B(ctx->r7, 0X3E);
    // 0x80278354: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80278358: beq         $v1, $zero, L_80278370
    if (ctx->r3 == 0) {
        // 0x8027835C: nop
    
            goto L_80278370;
    }
    // 0x8027835C: nop

    // 0x80278360: beq         $v1, $at, L_80278378
    if (ctx->r3 == ctx->r1) {
        // 0x80278364: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80278378;
    }
    // 0x80278364: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80278368: b           L_802784B4
    // 0x8027836C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802784B4;
    // 0x8027836C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278370:
    // 0x80278370: b           L_802784B0
    // 0x80278374: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
        goto L_802784B0;
    // 0x80278374: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
L_80278378:
    // 0x80278378: sb          $t6, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r14;
    // 0x8027837C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80278380: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x80278384: sb          $t1, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r9;
    // 0x80278388: sb          $t0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r8;
    // 0x8027838C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x80278390: jal         0x802785E0
    // 0x80278394: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_802785E0(rdram, ctx);
        goto after_0;
    // 0x80278394: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80278398: lbu         $t0, 0x1F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1F);
    // 0x8027839C: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x802783A0: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x802783A4: lui         $t8, 0x8028
    ctx->r24 = S32(0X8028 << 16);
    // 0x802783A8: subu        $t9, $t9, $t0
    ctx->r25 = SUB32(ctx->r25, ctx->r8);
    // 0x802783AC: lbu         $t1, 0x1E($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1E);
    // 0x802783B0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x802783B4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x802783B8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x802783BC: lhu         $t8, 0x143C($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X143C);
    // 0x802783C0: subu        $t9, $t9, $t0
    ctx->r25 = SUB32(ctx->r25, ctx->r8);
    // 0x802783C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x802783C8: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x802783CC: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x802783D0: addu        $a2, $a2, $t2
    ctx->r6 = ADD32(ctx->r6, ctx->r10);
    // 0x802783D4: sh          $t8, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r24;
    // 0x802783D8: lbu         $a2, -0x6AA4($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X6AA4);
    // 0x802783DC: jal         0x802784C0
    // 0x802783E0: nop

    func_802784C0(rdram, ctx);
        goto after_1;
    // 0x802783E0: nop

    after_1:
    // 0x802783E4: b           L_802784B4
    // 0x802783E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802784B4;
    // 0x802783E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802783EC:
    // 0x802783EC: lb          $v1, 0x42($a3)
    ctx->r3 = MEM_B(ctx->r7, 0X42);
    // 0x802783F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802783F4: beq         $v1, $zero, L_80278414
    if (ctx->r3 == 0) {
        // 0x802783F8: nop
    
            goto L_80278414;
    }
    // 0x802783F8: nop

    // 0x802783FC: beq         $v1, $at, L_80278414
    if (ctx->r3 == ctx->r1) {
        // 0x80278400: nop
    
            goto L_80278414;
    }
    // 0x80278400: nop

    // 0x80278404: beq         $v1, $a2, L_8027841C
    if (ctx->r3 == ctx->r6) {
        // 0x80278408: addiu       $t3, $zero, 0x1
        ctx->r11 = ADD32(0, 0X1);
            goto L_8027841C;
    }
    // 0x80278408: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8027840C: b           L_802784B4
    // 0x80278410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802784B4;
    // 0x80278410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278414:
    // 0x80278414: b           L_802784B0
    // 0x80278418: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
        goto L_802784B0;
    // 0x80278418: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
L_8027841C:
    // 0x8027841C: sb          $t3, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r11;
    // 0x80278420: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80278424: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x80278428: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x8027842C: jal         0x802785E0
    // 0x80278430: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_802785E0(rdram, ctx);
        goto after_2;
    // 0x80278430: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_2:
    // 0x80278434: sll         $t4, $v0, 1
    ctx->r12 = S32(ctx->r2 << 1);
    // 0x80278438: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x8027843C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80278440: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80278444: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80278448: lhu         $t5, 0x143C($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X143C);
    // 0x8027844C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80278450: sh          $t5, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r13;
    // 0x80278454: lb          $v1, 0x43($a3)
    ctx->r3 = MEM_B(ctx->r7, 0X43);
    // 0x80278458: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8027845C: beq         $v1, $zero, L_8027847C
    if (ctx->r3 == 0) {
        // 0x80278460: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8027847C;
    }
    // 0x80278460: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80278464: beq         $v1, $at, L_8027848C
    if (ctx->r3 == ctx->r1) {
        // 0x80278468: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8027848C;
    }
    // 0x80278468: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8027846C: beq         $v1, $a2, L_8027849C
    if (ctx->r3 == ctx->r6) {
        // 0x80278470: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8027849C;
    }
    // 0x80278470: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80278474: b           L_802784B4
    // 0x80278478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802784B4;
    // 0x80278478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027847C:
    // 0x8027847C: jal         0x802784C0
    // 0x80278480: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_802784C0(rdram, ctx);
        goto after_3;
    // 0x80278480: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80278484: b           L_802784B4
    // 0x80278488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802784B4;
    // 0x80278488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027848C:
    // 0x8027848C: jal         0x802784C0
    // 0x80278490: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_802784C0(rdram, ctx);
        goto after_4;
    // 0x80278490: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_4:
    // 0x80278494: b           L_802784B4
    // 0x80278498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802784B4;
    // 0x80278498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027849C:
    // 0x8027849C: jal         0x802784C0
    // 0x802784A0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_802784C0(rdram, ctx);
        goto after_5;
    // 0x802784A0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_5:
    // 0x802784A4: b           L_802784B4
    // 0x802784A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_802784B4;
    // 0x802784A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802784AC: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
L_802784B0:
    // 0x802784B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_802784B4:
    // 0x802784B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802784B8: jr          $ra
    // 0x802784BC: nop

    return;
    // 0x802784BC: nop

;}
RECOMP_FUNC void func_802784C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802784C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802784C4: andi        $v0, $a2, 0xFF
    ctx->r2 = ctx->r6 & 0XFF;
    // 0x802784C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802784CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802784D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x802784D4: bne         $v0, $at, L_802784E4
    if (ctx->r2 != ctx->r1) {
        // 0x802784D8: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_802784E4;
    }
    // 0x802784D8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x802784DC: b           L_802784F8
    // 0x802784E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
        goto L_802784F8;
    // 0x802784E0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_802784E4:
    // 0x802784E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802784E8: bne         $v0, $at, L_802784F8
    if (ctx->r2 != ctx->r1) {
        // 0x802784EC: addiu       $a3, $zero, 0x2
        ctx->r7 = ADD32(0, 0X2);
            goto L_802784F8;
    }
    // 0x802784EC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x802784F0: b           L_802784F8
    // 0x802784F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_802784F8;
    // 0x802784F4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_802784F8:
    // 0x802784F8: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x802784FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80278500: beq         $v0, $at, L_8027851C
    if (ctx->r2 == ctx->r1) {
        // 0x80278504: sll         $t9, $a3, 2
        ctx->r25 = S32(ctx->r7 << 2);
            goto L_8027851C;
    }
    // 0x80278504: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
    // 0x80278508: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8027850C: beq         $v0, $at, L_80278540
    if (ctx->r2 == ctx->r1) {
        // 0x80278510: nop
    
            goto L_80278540;
    }
    // 0x80278510: nop

    // 0x80278514: b           L_80278578
    // 0x80278518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80278578;
    // 0x80278518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8027851C:
    // 0x8027851C: lb          $t7, 0x2E($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X2E);
    // 0x80278520: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x80278524: bne         $t7, $zero, L_80278538
    if (ctx->r15 != 0) {
        // 0x80278528: nop
    
            goto L_80278538;
    }
    // 0x80278528: nop

    // 0x8027852C: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x80278530: b           L_8027855C
    // 0x80278534: addiu       $v1, $v1, 0x1450
    ctx->r3 = ADD32(ctx->r3, 0X1450);
        goto L_8027855C;
    // 0x80278534: addiu       $v1, $v1, 0x1450
    ctx->r3 = ADD32(ctx->r3, 0X1450);
L_80278538:
    // 0x80278538: b           L_8027855C
    // 0x8027853C: addiu       $v1, $v1, 0x145C
    ctx->r3 = ADD32(ctx->r3, 0X145C);
        goto L_8027855C;
    // 0x8027853C: addiu       $v1, $v1, 0x145C
    ctx->r3 = ADD32(ctx->r3, 0X145C);
L_80278540:
    // 0x80278540: lb          $t8, 0x2E($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X2E);
    // 0x80278544: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x80278548: bne         $t8, $zero, L_8027855C
    if (ctx->r24 != 0) {
        // 0x8027854C: addiu       $v1, $v1, 0x1568
        ctx->r3 = ADD32(ctx->r3, 0X1568);
            goto L_8027855C;
    }
    // 0x8027854C: addiu       $v1, $v1, 0x1568
    ctx->r3 = ADD32(ctx->r3, 0X1568);
    // 0x80278550: lui         $v1, 0x8028
    ctx->r3 = S32(0X8028 << 16);
    // 0x80278554: b           L_8027855C
    // 0x80278558: addiu       $v1, $v1, 0x155C
    ctx->r3 = ADD32(ctx->r3, 0X155C);
        goto L_8027855C;
    // 0x80278558: addiu       $v1, $v1, 0x155C
    ctx->r3 = ADD32(ctx->r3, 0X155C);
L_8027855C:
    // 0x8027855C: addu        $v0, $v1, $t9
    ctx->r2 = ADD32(ctx->r3, ctx->r25);
    // 0x80278560: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x80278564: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x80278568: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8027856C: jal         0x8004CD44
    // 0x80278570: nop

    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x80278570: nop

    after_0:
    // 0x80278574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80278578:
    // 0x80278578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8027857C: jr          $ra
    // 0x80278580: nop

    return;
    // 0x80278580: nop

;}
RECOMP_FUNC void func_80278584(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278584: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80278588: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027858C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80278590: jal         0x80029354
    // 0x80278594: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x80278594: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x80278598: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8027859C: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x802785A0: addiu       $a3, $a3, -0x7130
    ctx->r7 = ADD32(ctx->r7, -0X7130);
    // 0x802785A4: addiu       $a1, $zero, 0x419
    ctx->r5 = ADD32(0, 0X419);
    // 0x802785A8: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x802785AC: jal         0x8004CD24
    // 0x802785B0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x802785B0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x802785B4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x802785B8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802785BC: jal         0x8002135C
    // 0x802785C0: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x802785C0: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    after_2:
    // 0x802785C4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x802785C8: nop

    // 0x802785CC: sb          $zero, 0x4($t6)
    MEM_B(0X4, ctx->r14) = 0;
    // 0x802785D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802785D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802785D8: jr          $ra
    // 0x802785DC: nop

    return;
    // 0x802785DC: nop

;}
RECOMP_FUNC void func_802785E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802785E0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x802785E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x802785E8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x802785EC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x802785F0: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x802785F4: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x802785F8: lhu         $v0, -0x307C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X307C);
    // 0x802785FC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80278600: xori        $t8, $v0, 0xA00
    ctx->r24 = ctx->r2 ^ 0XA00;
    // 0x80278604: bne         $t8, $zero, L_80278614
    if (ctx->r24 != 0) {
        // 0x80278608: xori        $t9, $v0, 0x900
        ctx->r25 = ctx->r2 ^ 0X900;
            goto L_80278614;
    }
    // 0x80278608: xori        $t9, $v0, 0x900
    ctx->r25 = ctx->r2 ^ 0X900;
    // 0x8027860C: jr          $ra
    // 0x80278610: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x80278610: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80278614:
    // 0x80278614: bne         $t9, $zero, L_80278624
    if (ctx->r25 != 0) {
        // 0x80278618: xori        $t0, $v0, 0x600
        ctx->r8 = ctx->r2 ^ 0X600;
            goto L_80278624;
    }
    // 0x80278618: xori        $t0, $v0, 0x600
    ctx->r8 = ctx->r2 ^ 0X600;
    // 0x8027861C: jr          $ra
    // 0x80278620: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    // 0x80278620: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80278624:
    // 0x80278624: bne         $t0, $zero, L_80278634
    if (ctx->r8 != 0) {
        // 0x80278628: xori        $t1, $v0, 0x500
        ctx->r9 = ctx->r2 ^ 0X500;
            goto L_80278634;
    }
    // 0x80278628: xori        $t1, $v0, 0x500
    ctx->r9 = ctx->r2 ^ 0X500;
    // 0x8027862C: jr          $ra
    // 0x80278630: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x80278630: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80278634:
    // 0x80278634: bne         $t1, $zero, L_80278644
    if (ctx->r9 != 0) {
        // 0x80278638: xori        $t2, $v0, 0x800
        ctx->r10 = ctx->r2 ^ 0X800;
            goto L_80278644;
    }
    // 0x80278638: xori        $t2, $v0, 0x800
    ctx->r10 = ctx->r2 ^ 0X800;
    // 0x8027863C: jr          $ra
    // 0x80278640: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    return;
    // 0x80278640: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80278644:
    // 0x80278644: bne         $t2, $zero, L_80278654
    if (ctx->r10 != 0) {
        // 0x80278648: xori        $t3, $v0, 0x400
        ctx->r11 = ctx->r2 ^ 0X400;
            goto L_80278654;
    }
    // 0x80278648: xori        $t3, $v0, 0x400
    ctx->r11 = ctx->r2 ^ 0X400;
    // 0x8027864C: jr          $ra
    // 0x80278650: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80278650: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80278654:
    // 0x80278654: bne         $t3, $zero, L_80278664
    if (ctx->r11 != 0) {
        // 0x80278658: xori        $t4, $v0, 0x200
        ctx->r12 = ctx->r2 ^ 0X200;
            goto L_80278664;
    }
    // 0x80278658: xori        $t4, $v0, 0x200
    ctx->r12 = ctx->r2 ^ 0X200;
    // 0x8027865C: jr          $ra
    // 0x80278660: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x80278660: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80278664:
    // 0x80278664: bne         $t4, $zero, L_80278674
    if (ctx->r12 != 0) {
        // 0x80278668: xori        $t5, $v0, 0x100
        ctx->r13 = ctx->r2 ^ 0X100;
            goto L_80278674;
    }
    // 0x80278668: xori        $t5, $v0, 0x100
    ctx->r13 = ctx->r2 ^ 0X100;
    // 0x8027866C: jr          $ra
    // 0x80278670: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x80278670: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80278674:
    // 0x80278674: bne         $t5, $zero, L_80278684
    if (ctx->r13 != 0) {
        // 0x80278678: lui         $v0, 0x8029
        ctx->r2 = S32(0X8029 << 16);
            goto L_80278684;
    }
    // 0x80278678: lui         $v0, 0x8029
    ctx->r2 = S32(0X8029 << 16);
    // 0x8027867C: jr          $ra
    // 0x80278680: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    return;
    // 0x80278680: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80278684:
    // 0x80278684: lh          $v0, -0x79B8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X79B8);
    // 0x80278688: nop

    // 0x8027868C: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x80278690: bne         $at, $zero, L_802786D8
    if (ctx->r1 != 0) {
        // 0x80278694: slti        $at, $v0, -0xA
        ctx->r1 = SIGNED(ctx->r2) < -0XA ? 1 : 0;
            goto L_802786D8;
    }
    // 0x80278694: slti        $at, $v0, -0xA
    ctx->r1 = SIGNED(ctx->r2) < -0XA ? 1 : 0;
    // 0x80278698: lui         $v0, 0x8029
    ctx->r2 = S32(0X8029 << 16);
    // 0x8027869C: lh          $v0, -0x79B6($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X79B6);
    // 0x802786A0: nop

    // 0x802786A4: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x802786A8: bne         $at, $zero, L_802786BC
    if (ctx->r1 != 0) {
        // 0x802786AC: slti        $at, $v0, -0xA
        ctx->r1 = SIGNED(ctx->r2) < -0XA ? 1 : 0;
            goto L_802786BC;
    }
    // 0x802786AC: slti        $at, $v0, -0xA
    ctx->r1 = SIGNED(ctx->r2) < -0XA ? 1 : 0;
    // 0x802786B0: jr          $ra
    // 0x802786B4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    return;
    // 0x802786B4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802786B8: slti        $at, $v0, -0xA
    ctx->r1 = SIGNED(ctx->r2) < -0XA ? 1 : 0;
L_802786BC:
    // 0x802786BC: beq         $at, $zero, L_802786CC
    if (ctx->r1 == 0) {
        // 0x802786C0: nop
    
            goto L_802786CC;
    }
    // 0x802786C0: nop

    // 0x802786C4: jr          $ra
    // 0x802786C8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    return;
    // 0x802786C8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_802786CC:
    // 0x802786CC: jr          $ra
    // 0x802786D0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    return;
    // 0x802786D0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802786D4: slti        $at, $v0, -0xA
    ctx->r1 = SIGNED(ctx->r2) < -0XA ? 1 : 0;
L_802786D8:
    // 0x802786D8: beq         $at, $zero, L_8027871C
    if (ctx->r1 == 0) {
        // 0x802786DC: lui         $v0, 0x8029
        ctx->r2 = S32(0X8029 << 16);
            goto L_8027871C;
    }
    // 0x802786DC: lui         $v0, 0x8029
    ctx->r2 = S32(0X8029 << 16);
    // 0x802786E0: lui         $v0, 0x8029
    ctx->r2 = S32(0X8029 << 16);
    // 0x802786E4: lh          $v0, -0x79B6($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X79B6);
    // 0x802786E8: nop

    // 0x802786EC: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x802786F0: bne         $at, $zero, L_80278704
    if (ctx->r1 != 0) {
        // 0x802786F4: slti        $at, $v0, -0xA
        ctx->r1 = SIGNED(ctx->r2) < -0XA ? 1 : 0;
            goto L_80278704;
    }
    // 0x802786F4: slti        $at, $v0, -0xA
    ctx->r1 = SIGNED(ctx->r2) < -0XA ? 1 : 0;
    // 0x802786F8: jr          $ra
    // 0x802786FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x802786FC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80278700: slti        $at, $v0, -0xA
    ctx->r1 = SIGNED(ctx->r2) < -0XA ? 1 : 0;
L_80278704:
    // 0x80278704: beq         $at, $zero, L_80278714
    if (ctx->r1 == 0) {
        // 0x80278708: nop
    
            goto L_80278714;
    }
    // 0x80278708: nop

    // 0x8027870C: jr          $ra
    // 0x80278710: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x80278710: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80278714:
    // 0x80278714: jr          $ra
    // 0x80278718: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x80278718: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8027871C:
    // 0x8027871C: lh          $v0, -0x79B6($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X79B6);
    // 0x80278720: nop

    // 0x80278724: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x80278728: bne         $at, $zero, L_8027873C
    if (ctx->r1 != 0) {
        // 0x8027872C: slti        $at, $v0, -0xA
        ctx->r1 = SIGNED(ctx->r2) < -0XA ? 1 : 0;
            goto L_8027873C;
    }
    // 0x8027872C: slti        $at, $v0, -0xA
    ctx->r1 = SIGNED(ctx->r2) < -0XA ? 1 : 0;
    // 0x80278730: jr          $ra
    // 0x80278734: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80278734: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80278738: slti        $at, $v0, -0xA
    ctx->r1 = SIGNED(ctx->r2) < -0XA ? 1 : 0;
L_8027873C:
    // 0x8027873C: beq         $at, $zero, L_8027874C
    if (ctx->r1 == 0) {
        // 0x80278740: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8027874C;
    }
    // 0x80278740: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80278744: jr          $ra
    // 0x80278748: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x80278748: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8027874C:
    // 0x8027874C: jr          $ra
    // 0x80278750: nop

    return;
    // 0x80278750: nop

;}
RECOMP_FUNC void func_80278700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278700: slti        $at, $v0, -0xA
    ctx->r1 = SIGNED(ctx->r2) < -0XA ? 1 : 0;
    // 0x80278704: beq         $at, $zero, L_80278714
    if (ctx->r1 == 0) {
        // 0x80278708: nop
    
            goto L_80278714;
    }
    // 0x80278708: nop

    // 0x8027870C: jr          $ra
    // 0x80278710: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x80278710: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80278714:
    // 0x80278714: jr          $ra
    // 0x80278718: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x80278718: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8027871C: lh          $v0, -0x79B6($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X79B6);
    // 0x80278720: nop

    // 0x80278724: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x80278728: bne         $at, $zero, L_8027873C
    if (ctx->r1 != 0) {
        // 0x8027872C: slti        $at, $v0, -0xA
        ctx->r1 = SIGNED(ctx->r2) < -0XA ? 1 : 0;
            goto L_8027873C;
    }
    // 0x8027872C: slti        $at, $v0, -0xA
    ctx->r1 = SIGNED(ctx->r2) < -0XA ? 1 : 0;
    // 0x80278730: jr          $ra
    // 0x80278734: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80278734: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80278738: slti        $at, $v0, -0xA
    ctx->r1 = SIGNED(ctx->r2) < -0XA ? 1 : 0;
L_8027873C:
    // 0x8027873C: beq         $at, $zero, L_8027874C
    if (ctx->r1 == 0) {
        // 0x80278740: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8027874C;
    }
    // 0x80278740: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80278744: jr          $ra
    // 0x80278748: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    return;
    // 0x80278748: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8027874C:
    // 0x8027874C: jr          $ra
    // 0x80278750: nop

    return;
    // 0x80278750: nop

;}
RECOMP_FUNC void func_80278754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80278754: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80278758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8027875C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80278760: jal         0x80029354
    // 0x80278764: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x80278764: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x80278768: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8027876C: lui         $a1, 0x8028
    ctx->r5 = S32(0X8028 << 16);
    // 0x80278770: addiu       $a1, $a1, 0x105C
    ctx->r5 = ADD32(ctx->r5, 0X105C);
    // 0x80278774: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80278778: jal         0x8004A298
    // 0x8027877C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004A298(rdram, ctx);
        goto after_1;
    // 0x8027877C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x80278780: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80278784: nop

    // 0x80278788: lhu         $t6, 0x16($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X16);
    // 0x8027878C: nop

    // 0x80278790: ori         $t7, $t6, 0x400
    ctx->r15 = ctx->r14 | 0X400;
    // 0x80278794: sh          $t7, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r15;
    // 0x80278798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8027879C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802787A0: jr          $ra
    // 0x802787A4: nop

    return;
    // 0x802787A4: nop

;}
