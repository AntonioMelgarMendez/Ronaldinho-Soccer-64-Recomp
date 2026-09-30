#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80046D28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046D28: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80046D2C: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80046D30: lb          $t6, 0xF($v1)
    ctx->r14 = MEM_B(ctx->r3, 0XF);
    // 0x80046D34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80046D38: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80046D3C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80046D40: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80046D44: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80046D48: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80046D4C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80046D50: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80046D54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80046D58: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80046D5C: lb          $t9, 0x6A($v1)
    ctx->r25 = MEM_B(ctx->r3, 0X6A);
    // 0x80046D60: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80046D64: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80046D68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80046D6C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80046D70: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80046D74: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x80046D78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80046D7C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80046D80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80046D84: bne         $t9, $at, L_80046F58
    if (ctx->r25 != ctx->r1) {
        // 0x80046D88: addu        $a1, $t7, $t8
        ctx->r5 = ADD32(ctx->r15, ctx->r24);
            goto L_80046F58;
    }
    // 0x80046D88: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x80046D8C: lh          $t0, 0x26($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X26);
    // 0x80046D90: nop

    // 0x80046D94: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x80046D98: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80046D9C: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x80046DA0: addu        $t2, $v1, $t1
    ctx->r10 = ADD32(ctx->r3, ctx->r9);
    // 0x80046DA4: lb          $t3, 0x110($t2)
    ctx->r11 = MEM_B(ctx->r10, 0X110);
    // 0x80046DA8: nop

    // 0x80046DAC: bne         $t3, $zero, L_80046F5C
    if (ctx->r11 != 0) {
        // 0x80046DB0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80046F5C;
    }
    // 0x80046DB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80046DB4: sh          $zero, 0x24($a0)
    MEM_H(0X24, ctx->r4) = 0;
    // 0x80046DB8: lh          $v0, 0x24($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X24);
    // 0x80046DBC: nop

    // 0x80046DC0: sh          $v0, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r2;
    // 0x80046DC4: sh          $v0, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r2;
    // 0x80046DC8: jal         0x8003906C
    // 0x80046DCC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_8003906C(rdram, ctx);
        goto after_0;
    // 0x80046DCC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80046DD0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80046DD4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80046DD8: beq         $v0, $zero, L_80046E58
    if (ctx->r2 == 0) {
        // 0x80046DDC: addiu       $v1, $v1, -0x32B0
        ctx->r3 = ADD32(ctx->r3, -0X32B0);
            goto L_80046E58;
    }
    // 0x80046DDC: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80046DE0: lh          $v0, 0x26($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X26);
    // 0x80046DE4: nop

    // 0x80046DE8: addu        $t4, $v1, $v0
    ctx->r12 = ADD32(ctx->r3, ctx->r2);
    // 0x80046DEC: lb          $t5, 0x6F($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X6F);
    // 0x80046DF0: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80046DF4: bne         $t5, $zero, L_80046E44
    if (ctx->r13 != 0) {
        // 0x80046DF8: addu        $t7, $v1, $t6
        ctx->r15 = ADD32(ctx->r3, ctx->r14);
            goto L_80046E44;
    }
    // 0x80046DF8: addu        $t7, $v1, $t6
    ctx->r15 = ADD32(ctx->r3, ctx->r14);
    // 0x80046DFC: lw          $a0, 0x78($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X78);
    // 0x80046E00: jal         0x80047AE4
    // 0x80046E04: nop

    func_80047AE4(rdram, ctx);
        goto after_1;
    // 0x80046E04: nop

    after_1:
    // 0x80046E08: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80046E0C: beq         $v0, $zero, L_80046E44
    if (ctx->r2 == 0) {
        // 0x80046E10: addiu       $v1, $v1, -0x32B0
        ctx->r3 = ADD32(ctx->r3, -0X32B0);
            goto L_80046E44;
    }
    // 0x80046E10: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80046E14: lh          $t8, 0x26($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X26);
    // 0x80046E18: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80046E1C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80046E20: addu        $v0, $v1, $t9
    ctx->r2 = ADD32(ctx->r3, ctx->r25);
    // 0x80046E24: lw          $t0, 0x78($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X78);
    // 0x80046E28: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80046E2C: sw          $t0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r8;
    // 0x80046E30: sw          $t1, 0x78($v0)
    MEM_W(0X78, ctx->r2) = ctx->r9;
    // 0x80046E34: jal         0x800297B4
    // 0x80046E38: addiu       $a0, $a0, 0x7060
    ctx->r4 = ADD32(ctx->r4, 0X7060);
    func_800297B4(rdram, ctx);
        goto after_2;
    // 0x80046E38: addiu       $a0, $a0, 0x7060
    ctx->r4 = ADD32(ctx->r4, 0X7060);
    after_2:
    // 0x80046E3C: b           L_80046F5C
    // 0x80046E40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80046F5C;
    // 0x80046E40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80046E44:
    // 0x80046E44: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80046E48: jal         0x800297B4
    // 0x80046E4C: addiu       $a0, $a0, 0x6F68
    ctx->r4 = ADD32(ctx->r4, 0X6F68);
    func_800297B4(rdram, ctx);
        goto after_3;
    // 0x80046E4C: addiu       $a0, $a0, 0x6F68
    ctx->r4 = ADD32(ctx->r4, 0X6F68);
    after_3:
    // 0x80046E50: b           L_80046F5C
    // 0x80046E54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80046F5C;
    // 0x80046E54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80046E58:
    // 0x80046E58: lh          $t2, 0x26($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X26);
    // 0x80046E5C: nop

    // 0x80046E60: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x80046E64: lb          $t4, 0x6F($t3)
    ctx->r12 = MEM_B(ctx->r11, 0X6F);
    // 0x80046E68: nop

    // 0x80046E6C: bne         $t4, $zero, L_80046F4C
    if (ctx->r12 != 0) {
        // 0x80046E70: nop
    
            goto L_80046F4C;
    }
    // 0x80046E70: nop

    // 0x80046E74: lbu         $t5, 0xC($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0XC);
    // 0x80046E78: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80046E7C: beq         $t5, $at, L_80046F4C
    if (ctx->r13 == ctx->r1) {
        // 0x80046E80: nop
    
            goto L_80046F4C;
    }
    // 0x80046E80: nop

    // 0x80046E84: lb          $a0, 0x1($a1)
    ctx->r4 = MEM_B(ctx->r5, 0X1);
    // 0x80046E88: jal         0x80049A4C
    // 0x80046E8C: nop

    func_80049A4C(rdram, ctx);
        goto after_4;
    // 0x80046E8C: nop

    after_4:
    // 0x80046E90: beq         $v0, $zero, L_80046F4C
    if (ctx->r2 == 0) {
        // 0x80046E94: lui         $t6, 0x8012
        ctx->r14 = S32(0X8012 << 16);
            goto L_80046F4C;
    }
    // 0x80046E94: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80046E98: lb          $t6, -0x3088($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X3088);
    // 0x80046E9C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80046EA0: beq         $t6, $at, L_80046EE0
    if (ctx->r14 == ctx->r1) {
        // 0x80046EA4: addiu       $t7, $zero, -0x1
        ctx->r15 = ADD32(0, -0X1);
            goto L_80046EE0;
    }
    // 0x80046EA4: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80046EA8: lh          $a0, 0x26($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X26);
    // 0x80046EAC: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80046EB0: jal         0x80047B84
    // 0x80046EB4: addiu       $a1, $a1, -0x7BD4
    ctx->r5 = ADD32(ctx->r5, -0X7BD4);
    func_80047B84(rdram, ctx);
        goto after_5;
    // 0x80046EB4: addiu       $a1, $a1, -0x7BD4
    ctx->r5 = ADD32(ctx->r5, -0X7BD4);
    after_5:
    // 0x80046EB8: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x80046EBC: jal         0x80047AE4
    // 0x80046EC0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80047AE4(rdram, ctx);
        goto after_6;
    // 0x80046EC0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x80046EC4: bne         $v0, $zero, L_80046EE4
    if (ctx->r2 != 0) {
        // 0x80046EC8: lui         $a1, 0x8004
        ctx->r5 = S32(0X8004 << 16);
            goto L_80046EE4;
    }
    // 0x80046EC8: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x80046ECC: lh          $a0, 0x26($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X26);
    // 0x80046ED0: jal         0x80047B84
    // 0x80046ED4: addiu       $a1, $a1, 0x7DBC
    ctx->r5 = ADD32(ctx->r5, 0X7DBC);
    func_80047B84(rdram, ctx);
        goto after_7;
    // 0x80046ED4: addiu       $a1, $a1, 0x7DBC
    ctx->r5 = ADD32(ctx->r5, 0X7DBC);
    after_7:
    // 0x80046ED8: b           L_80046EE4
    // 0x80046EDC: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
        goto L_80046EE4;
    // 0x80046EDC: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
L_80046EE0:
    // 0x80046EE0: sw          $t7, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r15;
L_80046EE4:
    // 0x80046EE4: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x80046EE8: jal         0x80047AE4
    // 0x80046EEC: nop

    func_80047AE4(rdram, ctx);
        goto after_8;
    // 0x80046EEC: nop

    after_8:
    // 0x80046EF0: bne         $v0, $zero, L_80046F28
    if (ctx->r2 != 0) {
        // 0x80046EF4: lui         $a1, 0x8005
        ctx->r5 = S32(0X8005 << 16);
            goto L_80046F28;
    }
    // 0x80046EF4: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80046EF8: lh          $a0, 0x26($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X26);
    // 0x80046EFC: jal         0x80047B84
    // 0x80046F00: addiu       $a1, $a1, -0x78AC
    ctx->r5 = ADD32(ctx->r5, -0X78AC);
    func_80047B84(rdram, ctx);
        goto after_9;
    // 0x80046F00: addiu       $a1, $a1, -0x78AC
    ctx->r5 = ADD32(ctx->r5, -0X78AC);
    after_9:
    // 0x80046F04: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x80046F08: jal         0x80047AE4
    // 0x80046F0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80047AE4(rdram, ctx);
        goto after_10;
    // 0x80046F0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_10:
    // 0x80046F10: bne         $v0, $zero, L_80046F28
    if (ctx->r2 != 0) {
        // 0x80046F14: lui         $a0, 0x8004
        ctx->r4 = S32(0X8004 << 16);
            goto L_80046F28;
    }
    // 0x80046F14: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80046F18: jal         0x800297B4
    // 0x80046F1C: addiu       $a0, $a0, 0x6F68
    ctx->r4 = ADD32(ctx->r4, 0X6F68);
    func_800297B4(rdram, ctx);
        goto after_11;
    // 0x80046F1C: addiu       $a0, $a0, 0x6F68
    ctx->r4 = ADD32(ctx->r4, 0X6F68);
    after_11:
    // 0x80046F20: b           L_80046F5C
    // 0x80046F24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80046F5C;
    // 0x80046F24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80046F28:
    // 0x80046F28: lbu         $a0, 0x27($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X27);
    // 0x80046F2C: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    // 0x80046F30: jal         0x80048B78
    // 0x80046F34: nop

    func_80048B78(rdram, ctx);
        goto after_12;
    // 0x80046F34: nop

    after_12:
    // 0x80046F38: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80046F3C: jal         0x800297B4
    // 0x80046F40: addiu       $a0, $a0, 0x7060
    ctx->r4 = ADD32(ctx->r4, 0X7060);
    func_800297B4(rdram, ctx);
        goto after_13;
    // 0x80046F40: addiu       $a0, $a0, 0x7060
    ctx->r4 = ADD32(ctx->r4, 0X7060);
    after_13:
    // 0x80046F44: b           L_80046F5C
    // 0x80046F48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80046F5C;
    // 0x80046F48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80046F4C:
    // 0x80046F4C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80046F50: jal         0x800297B4
    // 0x80046F54: addiu       $a0, $a0, 0x6F68
    ctx->r4 = ADD32(ctx->r4, 0X6F68);
    func_800297B4(rdram, ctx);
        goto after_14;
    // 0x80046F54: addiu       $a0, $a0, 0x6F68
    ctx->r4 = ADD32(ctx->r4, 0X6F68);
    after_14:
L_80046F58:
    // 0x80046F58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80046F5C:
    // 0x80046F5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80046F60: jr          $ra
    // 0x80046F64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80046F64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80046F68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046F68: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80046F6C: lb          $t6, -0x3246($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X3246);
    // 0x80046F70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80046F74: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80046F78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80046F7C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80046F80: bne         $t6, $at, L_80046FDC
    if (ctx->r14 != ctx->r1) {
        // 0x80046F84: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_80046FDC;
    }
    // 0x80046F84: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80046F88: lh          $t7, 0x26($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X26);
    // 0x80046F8C: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x80046F90: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80046F94: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80046F98: lh          $t9, -0x6A0($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X6A0);
    // 0x80046F9C: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x80046FA0: bne         $t9, $zero, L_80046FC0
    if (ctx->r25 != 0) {
        // 0x80046FA4: addiu       $t0, $t0, 0x6F68
        ctx->r8 = ADD32(ctx->r8, 0X6F68);
            goto L_80046FC0;
    }
    // 0x80046FA4: addiu       $t0, $t0, 0x6F68
    ctx->r8 = ADD32(ctx->r8, 0X6F68);
    // 0x80046FA8: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80046FAC: addiu       $a0, $a0, 0x7000
    ctx->r4 = ADD32(ctx->r4, 0X7000);
    // 0x80046FB0: jal         0x8002989C
    // 0x80046FB4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x80046FB4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_0:
    // 0x80046FB8: b           L_80046FE8
    // 0x80046FBC: nop

        goto L_80046FE8;
    // 0x80046FBC: nop

L_80046FC0:
    // 0x80046FC0: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80046FC4: sw          $t0, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r8;
    // 0x80046FC8: addiu       $a0, $a0, 0x76E0
    ctx->r4 = ADD32(ctx->r4, 0X76E0);
    // 0x80046FCC: jal         0x8002989C
    // 0x80046FD0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x80046FD0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80046FD4: b           L_80046FE8
    // 0x80046FD8: nop

        goto L_80046FE8;
    // 0x80046FD8: nop

L_80046FDC:
    // 0x80046FDC: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80046FE0: jal         0x800296E0
    // 0x80046FE4: addiu       $a0, $a0, 0x6D28
    ctx->r4 = ADD32(ctx->r4, 0X6D28);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x80046FE4: addiu       $a0, $a0, 0x6D28
    ctx->r4 = ADD32(ctx->r4, 0X6D28);
    after_2:
L_80046FE8:
    // 0x80046FE8: jal         0x800479A0
    // 0x80046FEC: nop

    func_800479A0(rdram, ctx);
        goto after_3;
    // 0x80046FEC: nop

    after_3:
    // 0x80046FF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80046FF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80046FF8: jr          $ra
    // 0x80046FFC: nop

    return;
    // 0x80046FFC: nop

;}
RECOMP_FUNC void func_80047000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80047004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80047008: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004700C: lh          $t7, 0x26($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X26);
    // 0x80047010: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80047014: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x80047018: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8004701C: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80047020: sb          $t6, 0x6F($t8)
    MEM_B(0X6F, ctx->r24) = ctx->r14;
    // 0x80047024: lh          $t9, 0x26($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X26);
    // 0x80047028: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x8004702C: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x80047030: sb          $zero, 0x6D($t0)
    MEM_B(0X6D, ctx->r8) = 0;
    // 0x80047034: addiu       $t1, $t1, 0x6D28
    ctx->r9 = ADD32(ctx->r9, 0X6D28);
    // 0x80047038: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8004703C: sw          $t1, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r9;
    // 0x80047040: jal         0x80047A08
    // 0x80047044: addiu       $a1, $a1, 0x6BA8
    ctx->r5 = ADD32(ctx->r5, 0X6BA8);
    func_80047A08(rdram, ctx);
        goto after_0;
    // 0x80047044: addiu       $a1, $a1, 0x6BA8
    ctx->r5 = ADD32(ctx->r5, 0X6BA8);
    after_0:
    // 0x80047048: jal         0x800479A0
    // 0x8004704C: nop

    func_800479A0(rdram, ctx);
        goto after_1;
    // 0x8004704C: nop

    after_1:
    // 0x80047050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80047054: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80047058: jr          $ra
    // 0x8004705C: nop

    return;
    // 0x8004705C: nop

;}
RECOMP_FUNC void func_80047060(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80047064: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80047068: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004706C: lh          $t6, 0x26($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X26);
    // 0x80047070: lui         $t8, 0x801B
    ctx->r24 = S32(0X801B << 16);
    // 0x80047074: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80047078: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8004707C: lh          $t8, -0x6A0($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X6A0);
    // 0x80047080: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80047084: bne         $t8, $zero, L_800470AC
    if (ctx->r24 != 0) {
        // 0x80047088: lui         $t0, 0x8004
        ctx->r8 = S32(0X8004 << 16);
            goto L_800470AC;
    }
    // 0x80047088: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x8004708C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80047090: sh          $t9, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r25;
    // 0x80047094: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80047098: addiu       $a0, $a0, 0x70DC
    ctx->r4 = ADD32(ctx->r4, 0X70DC);
    // 0x8004709C: jal         0x8002989C
    // 0x800470A0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x800470A0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_0:
    // 0x800470A4: b           L_800470C4
    // 0x800470A8: nop

        goto L_800470C4;
    // 0x800470A8: nop

L_800470AC:
    // 0x800470AC: addiu       $t0, $t0, 0x7060
    ctx->r8 = ADD32(ctx->r8, 0X7060);
    // 0x800470B0: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800470B4: sw          $t0, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r8;
    // 0x800470B8: addiu       $a0, $a0, 0x76E0
    ctx->r4 = ADD32(ctx->r4, 0X76E0);
    // 0x800470BC: jal         0x8002989C
    // 0x800470C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8002989C(rdram, ctx);
        goto after_1;
    // 0x800470C0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
L_800470C4:
    // 0x800470C4: jal         0x800479A0
    // 0x800470C8: nop

    func_800479A0(rdram, ctx);
        goto after_2;
    // 0x800470C8: nop

    after_2:
    // 0x800470CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800470D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800470D4: jr          $ra
    // 0x800470D8: nop

    return;
    // 0x800470D8: nop

;}
RECOMP_FUNC void func_800470DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800470DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800470E0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800470E4: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x800470E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800470EC: addiu       $t6, $t6, 0x712C
    ctx->r14 = ADD32(ctx->r14, 0X712C);
    // 0x800470F0: sw          $t6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r14;
    // 0x800470F4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800470F8: addiu       $a1, $a1, 0x6BE0
    ctx->r5 = ADD32(ctx->r5, 0X6BE0);
    // 0x800470FC: jal         0x80047A08
    // 0x80047100: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80047A08(rdram, ctx);
        goto after_0;
    // 0x80047100: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80047104: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80047108: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8004710C: sh          $zero, 0x34($a0)
    MEM_H(0X34, ctx->r4) = 0;
    // 0x80047110: sh          $zero, 0x38($a0)
    MEM_H(0X38, ctx->r4) = 0;
    // 0x80047114: jal         0x800479A0
    // 0x80047118: sh          $t7, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r15;
    func_800479A0(rdram, ctx);
        goto after_1;
    // 0x80047118: sh          $t7, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r15;
    after_1:
    // 0x8004711C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80047120: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80047124: jr          $ra
    // 0x80047128: nop

    return;
    // 0x80047128: nop

;}
RECOMP_FUNC void func_8004712C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004712C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80047130: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80047134: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x80047138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004713C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80047140: lh          $t7, 0x26($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X26);
    // 0x80047144: lb          $t6, 0x44($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X44);
    // 0x80047148: nop

    // 0x8004714C: bne         $t6, $t7, L_8004716C
    if (ctx->r14 != ctx->r15) {
        // 0x80047150: nop
    
            goto L_8004716C;
    }
    // 0x80047150: nop

    // 0x80047154: lb          $t8, 0x6A($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X6A);
    // 0x80047158: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8004715C: bne         $t8, $at, L_8004716C
    if (ctx->r24 != ctx->r1) {
        // 0x80047160: lui         $a0, 0x8004
        ctx->r4 = S32(0X8004 << 16);
            goto L_8004716C;
    }
    // 0x80047160: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80047164: jal         0x800296E0
    // 0x80047168: addiu       $a0, $a0, 0x7184
    ctx->r4 = ADD32(ctx->r4, 0X7184);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x80047168: addiu       $a0, $a0, 0x7184
    ctx->r4 = ADD32(ctx->r4, 0X7184);
    after_0:
L_8004716C:
    // 0x8004716C: jal         0x800479A0
    // 0x80047170: nop

    func_800479A0(rdram, ctx);
        goto after_1;
    // 0x80047170: nop

    after_1:
    // 0x80047174: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80047178: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004717C: jr          $ra
    // 0x80047180: nop

    return;
    // 0x80047180: nop

;}
RECOMP_FUNC void func_80047184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047184: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80047188: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004718C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80047190: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80047194: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x80047198: lh          $t7, 0x26($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X26);
    // 0x8004719C: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x800471A0: bne         $t6, $t7, L_800471CC
    if (ctx->r14 != ctx->r15) {
        // 0x800471A4: addiu       $t8, $t8, 0x71E4
        ctx->r24 = ADD32(ctx->r24, 0X71E4);
            goto L_800471CC;
    }
    // 0x800471A4: addiu       $t8, $t8, 0x71E4
    ctx->r24 = ADD32(ctx->r24, 0X71E4);
    // 0x800471A8: sw          $t8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r24;
    // 0x800471AC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800471B0: addiu       $a1, $a1, 0x6C20
    ctx->r5 = ADD32(ctx->r5, 0X6C20);
    // 0x800471B4: jal         0x80047A08
    // 0x800471B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80047A08(rdram, ctx);
        goto after_0;
    // 0x800471B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800471BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800471C0: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x800471C4: sh          $zero, 0x34($a0)
    MEM_H(0X34, ctx->r4) = 0;
    // 0x800471C8: sh          $t9, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r25;
L_800471CC:
    // 0x800471CC: jal         0x800479A0
    // 0x800471D0: nop

    func_800479A0(rdram, ctx);
        goto after_1;
    // 0x800471D0: nop

    after_1:
    // 0x800471D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800471D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800471DC: jr          $ra
    // 0x800471E0: nop

    return;
    // 0x800471E0: nop

;}
RECOMP_FUNC void func_800471E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800471E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800471E8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800471EC: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x800471F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800471F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800471F8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800471FC: lh          $v0, 0x26($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X26);
    // 0x80047200: lb          $t6, 0x44($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X44);
    // 0x80047204: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80047208: bne         $t6, $v0, L_80047238
    if (ctx->r14 != ctx->r2) {
        // 0x8004720C: nop
    
            goto L_80047238;
    }
    // 0x8004720C: nop

    // 0x80047210: lb          $t7, 0x6A($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X6A);
    // 0x80047214: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80047218: bne         $t7, $at, L_80047238
    if (ctx->r15 != ctx->r1) {
        // 0x8004721C: addiu       $t8, $zero, 0x4
        ctx->r24 = ADD32(0, 0X4);
            goto L_80047238;
    }
    // 0x8004721C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80047220: sh          $t8, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r24;
    // 0x80047224: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80047228: jal         0x800296E0
    // 0x8004722C: addiu       $a0, $a0, 0x726C
    ctx->r4 = ADD32(ctx->r4, 0X726C);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x8004722C: addiu       $a0, $a0, 0x726C
    ctx->r4 = ADD32(ctx->r4, 0X726C);
    after_0:
    // 0x80047230: b           L_80047260
    // 0x80047234: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80047260;
    // 0x80047234: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80047238:
    // 0x80047238: lh          $t9, 0x24($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X24);
    // 0x8004723C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80047240: beq         $t9, $at, L_8004725C
    if (ctx->r25 == ctx->r1) {
        // 0x80047244: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_8004725C;
    }
    // 0x80047244: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80047248: addu        $t1, $v1, $v0
    ctx->r9 = ADD32(ctx->r3, ctx->r2);
    // 0x8004724C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80047250: sb          $t0, 0x6F($t1)
    MEM_B(0X6F, ctx->r9) = ctx->r8;
    // 0x80047254: jal         0x800296E0
    // 0x80047258: addiu       $a0, $a0, 0x7708
    ctx->r4 = ADD32(ctx->r4, 0X7708);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x80047258: addiu       $a0, $a0, 0x7708
    ctx->r4 = ADD32(ctx->r4, 0X7708);
    after_1:
L_8004725C:
    // 0x8004725C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80047260:
    // 0x80047260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80047264: jr          $ra
    // 0x80047268: nop

    return;
    // 0x80047268: nop

;}
RECOMP_FUNC void func_8004726C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004726C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80047270: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80047274: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80047278: lh          $t6, 0x34($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X34);
    // 0x8004727C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80047280: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80047284: sh          $t7, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r15;
    // 0x80047288: lh          $t8, 0x34($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X34);
    // 0x8004728C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80047290: slti        $at, $t8, 0x11
    ctx->r1 = SIGNED(ctx->r24) < 0X11 ? 1 : 0;
    // 0x80047294: beq         $at, $zero, L_80047368
    if (ctx->r1 == 0) {
        // 0x80047298: nop
    
            goto L_80047368;
    }
    // 0x80047298: nop

    // 0x8004729C: lh          $t9, 0x38($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X38);
    // 0x800472A0: nop

    // 0x800472A4: slti        $at, $t9, 0x10
    ctx->r1 = SIGNED(ctx->r25) < 0X10 ? 1 : 0;
    // 0x800472A8: beq         $at, $zero, L_80047368
    if (ctx->r1 == 0) {
        // 0x800472AC: nop
    
            goto L_80047368;
    }
    // 0x800472AC: nop

    // 0x800472B0: lhu         $v1, 0x28($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X28);
    // 0x800472B4: lui         $t0, 0x801B
    ctx->r8 = S32(0X801B << 16);
    // 0x800472B8: slti        $at, $v1, 0xB
    ctx->r1 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x800472BC: bne         $at, $zero, L_800472D8
    if (ctx->r1 != 0) {
        // 0x800472C0: lui         $v0, 0x801B
        ctx->r2 = S32(0X801B << 16);
            goto L_800472D8;
    }
    // 0x800472C0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800472C4: lb          $t0, -0x69F($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X69F);
    // 0x800472C8: nop

    // 0x800472CC: slti        $at, $t0, 0xB
    ctx->r1 = SIGNED(ctx->r8) < 0XB ? 1 : 0;
    // 0x800472D0: bne         $at, $zero, L_800472F4
    if (ctx->r1 != 0) {
        // 0x800472D4: nop
    
            goto L_800472F4;
    }
    // 0x800472D4: nop

L_800472D8:
    // 0x800472D8: lb          $v0, -0x69F($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X69F);
    // 0x800472DC: slti        $at, $v1, 0xB
    ctx->r1 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x800472E0: beq         $at, $zero, L_80047318
    if (ctx->r1 == 0) {
        // 0x800472E4: slti        $at, $v0, 0xC
        ctx->r1 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
            goto L_80047318;
    }
    // 0x800472E4: slti        $at, $v0, 0xC
    ctx->r1 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x800472E8: bne         $at, $zero, L_80047318
    if (ctx->r1 != 0) {
        // 0x800472EC: slti        $at, $v0, 0x10
        ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
            goto L_80047318;
    }
    // 0x800472EC: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x800472F0: beq         $at, $zero, L_80047318
    if (ctx->r1 == 0) {
        // 0x800472F4: lui         $t1, 0x8004
        ctx->r9 = S32(0X8004 << 16);
            goto L_80047318;
    }
L_800472F4:
    // 0x800472F4: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x800472F8: addiu       $t1, $t1, 0x726C
    ctx->r9 = ADD32(ctx->r9, 0X726C);
    // 0x800472FC: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80047300: sw          $t1, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r9;
    // 0x80047304: addiu       $a0, $a0, 0x7394
    ctx->r4 = ADD32(ctx->r4, 0X7394);
    // 0x80047308: jal         0x8002989C
    // 0x8004730C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x8004730C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x80047310: b           L_80047388
    // 0x80047314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80047388;
    // 0x80047314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80047318:
    // 0x80047318: bne         $v0, $v1, L_8004734C
    if (ctx->r2 != ctx->r3) {
        // 0x8004731C: lui         $t4, 0x8004
        ctx->r12 = S32(0X8004 << 16);
            goto L_8004734C;
    }
    // 0x8004731C: lui         $t4, 0x8004
    ctx->r12 = S32(0X8004 << 16);
    // 0x80047320: lui         $t3, 0x8004
    ctx->r11 = S32(0X8004 << 16);
    // 0x80047324: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x80047328: addiu       $t3, $t3, 0x73BC
    ctx->r11 = ADD32(ctx->r11, 0X73BC);
    // 0x8004732C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80047330: sh          $t2, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r10;
    // 0x80047334: sh          $zero, 0x34($a2)
    MEM_H(0X34, ctx->r6) = 0;
    // 0x80047338: sw          $t3, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r11;
    // 0x8004733C: jal         0x800297B4
    // 0x80047340: addiu       $a0, $a0, 0x7690
    ctx->r4 = ADD32(ctx->r4, 0X7690);
    func_800297B4(rdram, ctx);
        goto after_1;
    // 0x80047340: addiu       $a0, $a0, 0x7690
    ctx->r4 = ADD32(ctx->r4, 0X7690);
    after_1:
    // 0x80047344: b           L_80047388
    // 0x80047348: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80047388;
    // 0x80047348: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004734C:
    // 0x8004734C: addiu       $t4, $t4, 0x726C
    ctx->r12 = ADD32(ctx->r12, 0X726C);
    // 0x80047350: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80047354: sw          $t4, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r12;
    // 0x80047358: jal         0x800297B4
    // 0x8004735C: addiu       $a0, $a0, 0x7668
    ctx->r4 = ADD32(ctx->r4, 0X7668);
    func_800297B4(rdram, ctx);
        goto after_2;
    // 0x8004735C: addiu       $a0, $a0, 0x7668
    ctx->r4 = ADD32(ctx->r4, 0X7668);
    after_2:
    // 0x80047360: b           L_80047388
    // 0x80047364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80047388;
    // 0x80047364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80047368:
    // 0x80047368: lh          $t6, 0x26($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X26);
    // 0x8004736C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80047370: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80047374: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80047378: sb          $t5, -0x3241($at)
    MEM_B(-0X3241, ctx->r1) = ctx->r13;
    // 0x8004737C: jal         0x800296E0
    // 0x80047380: addiu       $a0, $a0, 0x7708
    ctx->r4 = ADD32(ctx->r4, 0X7708);
    func_800296E0(rdram, ctx);
        goto after_3;
    // 0x80047380: addiu       $a0, $a0, 0x7708
    ctx->r4 = ADD32(ctx->r4, 0X7708);
    after_3:
    // 0x80047384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80047388:
    // 0x80047388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004738C: jr          $ra
    // 0x80047390: nop

    return;
    // 0x80047390: nop

;}
RECOMP_FUNC void func_80047394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047394: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80047398: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004739C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800473A0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800473A4: jal         0x80047A08
    // 0x800473A8: addiu       $a1, $a1, 0x6D18
    ctx->r5 = ADD32(ctx->r5, 0X6D18);
    func_80047A08(rdram, ctx);
        goto after_0;
    // 0x800473A8: addiu       $a1, $a1, 0x6D18
    ctx->r5 = ADD32(ctx->r5, 0X6D18);
    after_0:
    // 0x800473AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800473B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800473B4: jr          $ra
    // 0x800473B8: nop

    return;
    // 0x800473B8: nop

;}
RECOMP_FUNC void func_800473BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800473BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800473C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800473C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800473C8: lh          $t6, 0x34($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X34);
    // 0x800473CC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800473D0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800473D4: sh          $t7, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r15;
    // 0x800473D8: lh          $t8, 0x34($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X34);
    // 0x800473DC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800473E0: slti        $at, $t8, 0x10
    ctx->r1 = SIGNED(ctx->r24) < 0X10 ? 1 : 0;
    // 0x800473E4: beq         $at, $zero, L_800474DC
    if (ctx->r1 == 0) {
        // 0x800473E8: nop
    
            goto L_800474DC;
    }
    // 0x800473E8: nop

    // 0x800473EC: lhu         $v1, 0x2A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2A);
    // 0x800473F0: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x800473F4: slti        $at, $v1, 0xB
    ctx->r1 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x800473F8: bne         $at, $zero, L_80047414
    if (ctx->r1 != 0) {
        // 0x800473FC: lui         $v0, 0x801B
        ctx->r2 = S32(0X801B << 16);
            goto L_80047414;
    }
    // 0x800473FC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80047400: lb          $t9, -0x69E($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X69E);
    // 0x80047404: nop

    // 0x80047408: slti        $at, $t9, 0xB
    ctx->r1 = SIGNED(ctx->r25) < 0XB ? 1 : 0;
    // 0x8004740C: bne         $at, $zero, L_80047430
    if (ctx->r1 != 0) {
        // 0x80047410: nop
    
            goto L_80047430;
    }
    // 0x80047410: nop

L_80047414:
    // 0x80047414: lb          $v0, -0x69E($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X69E);
    // 0x80047418: slti        $at, $v1, 0xB
    ctx->r1 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x8004741C: beq         $at, $zero, L_80047454
    if (ctx->r1 == 0) {
        // 0x80047420: slti        $at, $v0, 0xC
        ctx->r1 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
            goto L_80047454;
    }
    // 0x80047420: slti        $at, $v0, 0xC
    ctx->r1 = SIGNED(ctx->r2) < 0XC ? 1 : 0;
    // 0x80047424: bne         $at, $zero, L_80047454
    if (ctx->r1 != 0) {
        // 0x80047428: slti        $at, $v0, 0x10
        ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
            goto L_80047454;
    }
    // 0x80047428: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8004742C: beq         $at, $zero, L_80047454
    if (ctx->r1 == 0) {
        // 0x80047430: lui         $t0, 0x8004
        ctx->r8 = S32(0X8004 << 16);
            goto L_80047454;
    }
L_80047430:
    // 0x80047430: lui         $t0, 0x8004
    ctx->r8 = S32(0X8004 << 16);
    // 0x80047434: addiu       $t0, $t0, 0x73BC
    ctx->r8 = ADD32(ctx->r8, 0X73BC);
    // 0x80047438: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8004743C: sw          $t0, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r8;
    // 0x80047440: addiu       $a0, $a0, 0x7394
    ctx->r4 = ADD32(ctx->r4, 0X7394);
    // 0x80047444: jal         0x8002989C
    // 0x80047448: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x80047448: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x8004744C: b           L_800474FC
    // 0x80047450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800474FC;
    // 0x80047450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80047454:
    // 0x80047454: bne         $v0, $v1, L_800474C0
    if (ctx->r2 != ctx->r3) {
        // 0x80047458: lui         $t6, 0x8004
        ctx->r14 = S32(0X8004 << 16);
            goto L_800474C0;
    }
    // 0x80047458: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x8004745C: lh          $t2, 0x38($a2)
    ctx->r10 = MEM_H(ctx->r6, 0X38);
    // 0x80047460: lui         $t4, 0x8004
    ctx->r12 = S32(0X8004 << 16);
    // 0x80047464: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x80047468: addiu       $t4, $t4, 0x7508
    ctx->r12 = ADD32(ctx->r12, 0X7508);
    // 0x8004746C: slti        $at, $v1, 0xB
    ctx->r1 = SIGNED(ctx->r3) < 0XB ? 1 : 0;
    // 0x80047470: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80047474: sh          $t1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r9;
    // 0x80047478: sh          $zero, 0x34($a2)
    MEM_H(0X34, ctx->r6) = 0;
    // 0x8004747C: sh          $t3, 0x38($a2)
    MEM_H(0X38, ctx->r6) = ctx->r11;
    // 0x80047480: bne         $at, $zero, L_800474AC
    if (ctx->r1 != 0) {
        // 0x80047484: sw          $t4, 0x30($a2)
        MEM_W(0X30, ctx->r6) = ctx->r12;
            goto L_800474AC;
    }
    // 0x80047484: sw          $t4, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r12;
    // 0x80047488: lhu         $t5, 0x28($a2)
    ctx->r13 = MEM_HU(ctx->r6, 0X28);
    // 0x8004748C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80047490: slti        $at, $t5, 0xB
    ctx->r1 = SIGNED(ctx->r13) < 0XB ? 1 : 0;
    // 0x80047494: beq         $at, $zero, L_800474AC
    if (ctx->r1 == 0) {
        // 0x80047498: nop
    
            goto L_800474AC;
    }
    // 0x80047498: nop

    // 0x8004749C: jal         0x800297B4
    // 0x800474A0: addiu       $a0, $a0, 0x76B8
    ctx->r4 = ADD32(ctx->r4, 0X76B8);
    func_800297B4(rdram, ctx);
        goto after_1;
    // 0x800474A0: addiu       $a0, $a0, 0x76B8
    ctx->r4 = ADD32(ctx->r4, 0X76B8);
    after_1:
    // 0x800474A4: b           L_800474FC
    // 0x800474A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800474FC;
    // 0x800474A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800474AC:
    // 0x800474AC: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800474B0: jal         0x800297B4
    // 0x800474B4: addiu       $a0, $a0, 0x7690
    ctx->r4 = ADD32(ctx->r4, 0X7690);
    func_800297B4(rdram, ctx);
        goto after_2;
    // 0x800474B4: addiu       $a0, $a0, 0x7690
    ctx->r4 = ADD32(ctx->r4, 0X7690);
    after_2:
    // 0x800474B8: b           L_800474FC
    // 0x800474BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800474FC;
    // 0x800474BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800474C0:
    // 0x800474C0: addiu       $t6, $t6, 0x73BC
    ctx->r14 = ADD32(ctx->r14, 0X73BC);
    // 0x800474C4: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800474C8: sw          $t6, 0x30($a2)
    MEM_W(0X30, ctx->r6) = ctx->r14;
    // 0x800474CC: jal         0x800297B4
    // 0x800474D0: addiu       $a0, $a0, 0x7668
    ctx->r4 = ADD32(ctx->r4, 0X7668);
    func_800297B4(rdram, ctx);
        goto after_3;
    // 0x800474D0: addiu       $a0, $a0, 0x7668
    ctx->r4 = ADD32(ctx->r4, 0X7668);
    after_3:
    // 0x800474D4: b           L_800474FC
    // 0x800474D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800474FC;
    // 0x800474D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800474DC:
    // 0x800474DC: lh          $t8, 0x26($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X26);
    // 0x800474E0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800474E4: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800474E8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800474EC: sb          $t7, -0x3241($at)
    MEM_B(-0X3241, ctx->r1) = ctx->r15;
    // 0x800474F0: jal         0x800296E0
    // 0x800474F4: addiu       $a0, $a0, 0x7708
    ctx->r4 = ADD32(ctx->r4, 0X7708);
    func_800296E0(rdram, ctx);
        goto after_4;
    // 0x800474F4: addiu       $a0, $a0, 0x7708
    ctx->r4 = ADD32(ctx->r4, 0X7708);
    after_4:
    // 0x800474F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800474FC:
    // 0x800474FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80047500: jr          $ra
    // 0x80047504: nop

    return;
    // 0x80047504: nop

;}
RECOMP_FUNC void func_80047508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047508: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004750C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80047510: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80047514: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80047518: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8004751C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80047520: sh          $t6, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r14;
    // 0x80047524: lh          $a0, 0x26($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X26);
    // 0x80047528: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8004752C: jal         0x80047B84
    // 0x80047530: addiu       $a1, $a1, -0x7BD4
    ctx->r5 = ADD32(ctx->r5, -0X7BD4);
    func_80047B84(rdram, ctx);
        goto after_0;
    // 0x80047530: addiu       $a1, $a1, -0x7BD4
    ctx->r5 = ADD32(ctx->r5, -0X7BD4);
    after_0:
    // 0x80047534: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x80047538: jal         0x80047AE4
    // 0x8004753C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80047AE4(rdram, ctx);
        goto after_1;
    // 0x8004753C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80047540: bne         $v0, $zero, L_8004755C
    if (ctx->r2 != 0) {
        // 0x80047544: lui         $a1, 0x8004
        ctx->r5 = S32(0X8004 << 16);
            goto L_8004755C;
    }
    // 0x80047544: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x80047548: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
    // 0x8004754C: lh          $a0, 0x26($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X26);
    // 0x80047550: jal         0x80047B84
    // 0x80047554: addiu       $a1, $a1, 0x7DBC
    ctx->r5 = ADD32(ctx->r5, 0X7DBC);
    func_80047B84(rdram, ctx);
        goto after_2;
    // 0x80047554: addiu       $a1, $a1, 0x7DBC
    ctx->r5 = ADD32(ctx->r5, 0X7DBC);
    after_2:
    // 0x80047558: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
L_8004755C:
    // 0x8004755C: jal         0x8003906C
    // 0x80047560: nop

    func_8003906C(rdram, ctx);
        goto after_3;
    // 0x80047560: nop

    after_3:
    // 0x80047564: beq         $v0, $zero, L_80047594
    if (ctx->r2 == 0) {
        // 0x80047568: nop
    
            goto L_80047594;
    }
    // 0x80047568: nop

    // 0x8004756C: lbu         $a0, 0x27($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X27);
    // 0x80047570: jal         0x8003A568
    // 0x80047574: nop

    func_8003A568(rdram, ctx);
        goto after_4;
    // 0x80047574: nop

    after_4:
    // 0x80047578: bgtz        $v0, L_80047594
    if (SIGNED(ctx->r2) > 0) {
        // 0x8004757C: nop
    
            goto L_80047594;
    }
    // 0x8004757C: nop

    // 0x80047580: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x80047584: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80047588: bne         $t7, $zero, L_80047594
    if (ctx->r15 != 0) {
        // 0x8004758C: nop
    
            goto L_80047594;
    }
    // 0x8004758C: nop

    // 0x80047590: sw          $t8, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r24;
L_80047594:
    // 0x80047594: lbu         $a0, 0x27($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X27);
    // 0x80047598: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    // 0x8004759C: jal         0x80048BFC
    // 0x800475A0: nop

    func_80048BFC(rdram, ctx);
        goto after_5;
    // 0x800475A0: nop

    after_5:
    // 0x800475A4: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x800475A8: jal         0x80047AE4
    // 0x800475AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80047AE4(rdram, ctx);
        goto after_6;
    // 0x800475AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x800475B0: bne         $v0, $zero, L_800475C8
    if (ctx->r2 != 0) {
        // 0x800475B4: lui         $a1, 0x8005
        ctx->r5 = S32(0X8005 << 16);
            goto L_800475C8;
    }
    // 0x800475B4: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x800475B8: lh          $a0, 0x26($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X26);
    // 0x800475BC: jal         0x80047B84
    // 0x800475C0: addiu       $a1, $a1, -0x78AC
    ctx->r5 = ADD32(ctx->r5, -0X78AC);
    func_80047B84(rdram, ctx);
        goto after_7;
    // 0x800475C0: addiu       $a1, $a1, -0x78AC
    ctx->r5 = ADD32(ctx->r5, -0X78AC);
    after_7:
    // 0x800475C4: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
L_800475C8:
    // 0x800475C8: lbu         $a0, 0x27($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X27);
    // 0x800475CC: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    // 0x800475D0: jal         0x80048BFC
    // 0x800475D4: nop

    func_80048BFC(rdram, ctx);
        goto after_8;
    // 0x800475D4: nop

    after_8:
    // 0x800475D8: sw          $v0, 0x28($s0)
    MEM_W(0X28, ctx->r16) = ctx->r2;
    // 0x800475DC: jal         0x80047AE4
    // 0x800475E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80047AE4(rdram, ctx);
        goto after_9;
    // 0x800475E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_9:
    // 0x800475E4: beq         $v0, $zero, L_80047638
    if (ctx->r2 == 0) {
        // 0x800475E8: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_80047638;
    }
    // 0x800475E8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800475EC: jal         0x8003906C
    // 0x800475F0: nop

    func_8003906C(rdram, ctx);
        goto after_10;
    // 0x800475F0: nop

    after_10:
    // 0x800475F4: beq         $v0, $zero, L_80047610
    if (ctx->r2 == 0) {
        // 0x800475F8: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_80047610;
    }
    // 0x800475F8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800475FC: lh          $t0, 0x26($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X26);
    // 0x80047600: lw          $t9, 0x28($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X28);
    // 0x80047604: sll         $t1, $t0, 5
    ctx->r9 = S32(ctx->r8 << 5);
    // 0x80047608: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8004760C: sw          $t9, -0x3230($at)
    MEM_W(-0X3230, ctx->r1) = ctx->r25;
L_80047610:
    // 0x80047610: lbu         $a0, 0x27($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X27);
    // 0x80047614: lw          $a1, 0x28($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X28);
    // 0x80047618: jal         0x80048B78
    // 0x8004761C: nop

    func_80048B78(rdram, ctx);
        goto after_11;
    // 0x8004761C: nop

    after_11:
    // 0x80047620: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80047624: addiu       $a0, $a0, 0x726C
    ctx->r4 = ADD32(ctx->r4, 0X726C);
    // 0x80047628: jal         0x8002989C
    // 0x8004762C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_8002989C(rdram, ctx);
        goto after_12;
    // 0x8004762C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_12:
    // 0x80047630: b           L_8004765C
    // 0x80047634: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8004765C;
    // 0x80047634: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80047638:
    // 0x80047638: lh          $t3, 0x26($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X26);
    // 0x8004763C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80047640: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80047644: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80047648: sb          $t2, -0x3241($at)
    MEM_B(-0X3241, ctx->r1) = ctx->r10;
    // 0x8004764C: addiu       $a0, $a0, 0x7708
    ctx->r4 = ADD32(ctx->r4, 0X7708);
    // 0x80047650: jal         0x8002989C
    // 0x80047654: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_8002989C(rdram, ctx);
        goto after_13;
    // 0x80047654: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_13:
    // 0x80047658: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8004765C:
    // 0x8004765C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80047660: jr          $ra
    // 0x80047664: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80047664: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80047668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047668: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004766C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80047670: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80047674: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80047678: jal         0x80047A08
    // 0x8004767C: addiu       $a1, $a1, 0x6D88
    ctx->r5 = ADD32(ctx->r5, 0X6D88);
    func_80047A08(rdram, ctx);
        goto after_0;
    // 0x8004767C: addiu       $a1, $a1, 0x6D88
    ctx->r5 = ADD32(ctx->r5, 0X6D88);
    after_0:
    // 0x80047680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80047684: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80047688: jr          $ra
    // 0x8004768C: nop

    return;
    // 0x8004768C: nop

;}
RECOMP_FUNC void func_80047690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80047694: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80047698: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004769C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800476A0: jal         0x80047A08
    // 0x800476A4: addiu       $a1, $a1, 0x6D90
    ctx->r5 = ADD32(ctx->r5, 0X6D90);
    func_80047A08(rdram, ctx);
        goto after_0;
    // 0x800476A4: addiu       $a1, $a1, 0x6D90
    ctx->r5 = ADD32(ctx->r5, 0X6D90);
    after_0:
    // 0x800476A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800476AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800476B0: jr          $ra
    // 0x800476B4: nop

    return;
    // 0x800476B4: nop

;}
RECOMP_FUNC void func_800476B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800476B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800476BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800476C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800476C4: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800476C8: jal         0x80047A08
    // 0x800476CC: addiu       $a1, $a1, 0x6D98
    ctx->r5 = ADD32(ctx->r5, 0X6D98);
    func_80047A08(rdram, ctx);
        goto after_0;
    // 0x800476CC: addiu       $a1, $a1, 0x6D98
    ctx->r5 = ADD32(ctx->r5, 0X6D98);
    after_0:
    // 0x800476D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800476D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800476D8: jr          $ra
    // 0x800476DC: nop

    return;
    // 0x800476DC: nop

;}
RECOMP_FUNC void func_800476E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800476E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800476E4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800476E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800476EC: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x800476F0: jal         0x80047A08
    // 0x800476F4: addiu       $a1, $a1, 0x6DA0
    ctx->r5 = ADD32(ctx->r5, 0X6DA0);
    func_80047A08(rdram, ctx);
        goto after_0;
    // 0x800476F4: addiu       $a1, $a1, 0x6DA0
    ctx->r5 = ADD32(ctx->r5, 0X6DA0);
    after_0:
    // 0x800476F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800476FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80047700: jr          $ra
    // 0x80047704: nop

    return;
    // 0x80047704: nop

;}
RECOMP_FUNC void func_80047708(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004770C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80047710: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80047714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80047718: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004771C: lh          $t7, 0x26($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X26);
    // 0x80047720: lb          $t6, 0x44($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X44);
    // 0x80047724: nop

    // 0x80047728: bne         $t6, $t7, L_800477AC
    if (ctx->r14 != ctx->r15) {
        // 0x8004772C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800477AC;
    }
    // 0x8004772C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80047730: lb          $v0, 0x6A($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X6A);
    // 0x80047734: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80047738: beq         $v0, $zero, L_8004779C
    if (ctx->r2 == 0) {
        // 0x8004773C: addiu       $a1, $zero, 0x60
        ctx->r5 = ADD32(0, 0X60);
            goto L_8004779C;
    }
    // 0x8004773C: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x80047740: beq         $v0, $at, L_80047774
    if (ctx->r2 == ctx->r1) {
        // 0x80047744: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80047774;
    }
    // 0x80047744: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80047748: beq         $v0, $at, L_80047788
    if (ctx->r2 == ctx->r1) {
        // 0x8004774C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80047788;
    }
    // 0x8004774C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80047750: bne         $v0, $at, L_8004779C
    if (ctx->r2 != ctx->r1) {
        // 0x80047754: lui         $t8, 0x8004
        ctx->r24 = S32(0X8004 << 16);
            goto L_8004779C;
    }
    // 0x80047754: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x80047758: addiu       $t8, $t8, 0x77B8
    ctx->r24 = ADD32(ctx->r24, 0X77B8);
    // 0x8004775C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80047760: sw          $t8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r24;
    // 0x80047764: jal         0x80047A08
    // 0x80047768: addiu       $a1, $a1, 0x6DA8
    ctx->r5 = ADD32(ctx->r5, 0X6DA8);
    func_80047A08(rdram, ctx);
        goto after_0;
    // 0x80047768: addiu       $a1, $a1, 0x6DA8
    ctx->r5 = ADD32(ctx->r5, 0X6DA8);
    after_0:
    // 0x8004776C: b           L_800477AC
    // 0x80047770: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800477AC;
    // 0x80047770: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80047774:
    // 0x80047774: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80047778: jal         0x800296E0
    // 0x8004777C: addiu       $a0, $a0, 0x6F68
    ctx->r4 = ADD32(ctx->r4, 0X6F68);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x8004777C: addiu       $a0, $a0, 0x6F68
    ctx->r4 = ADD32(ctx->r4, 0X6F68);
    after_1:
    // 0x80047780: b           L_800477AC
    // 0x80047784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800477AC;
    // 0x80047784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80047788:
    // 0x80047788: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8004778C: jal         0x800296E0
    // 0x80047790: addiu       $a0, $a0, 0x77F0
    ctx->r4 = ADD32(ctx->r4, 0X77F0);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x80047790: addiu       $a0, $a0, 0x77F0
    ctx->r4 = ADD32(ctx->r4, 0X77F0);
    after_2:
    // 0x80047794: b           L_800477AC
    // 0x80047798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800477AC;
    // 0x80047798: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004779C:
    // 0x8004779C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800477A0: jal         0x8002989C
    // 0x800477A4: addiu       $a0, $a0, 0x78D8
    ctx->r4 = ADD32(ctx->r4, 0X78D8);
    func_8002989C(rdram, ctx);
        goto after_3;
    // 0x800477A4: addiu       $a0, $a0, 0x78D8
    ctx->r4 = ADD32(ctx->r4, 0X78D8);
    after_3:
    // 0x800477A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800477AC:
    // 0x800477AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800477B0: jr          $ra
    // 0x800477B4: nop

    return;
    // 0x800477B4: nop

;}
RECOMP_FUNC void func_800477B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800477B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800477BC: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x800477C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800477C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800477C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800477CC: addiu       $t6, $t6, 0x77F0
    ctx->r14 = ADD32(ctx->r14, 0X77F0);
    // 0x800477D0: sw          $t6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r14;
    // 0x800477D4: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800477D8: jal         0x800297B4
    // 0x800477DC: addiu       $a0, $a0, 0x76B8
    ctx->r4 = ADD32(ctx->r4, 0X76B8);
    func_800297B4(rdram, ctx);
        goto after_0;
    // 0x800477DC: addiu       $a0, $a0, 0x76B8
    ctx->r4 = ADD32(ctx->r4, 0X76B8);
    after_0:
    // 0x800477E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800477E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800477E8: jr          $ra
    // 0x800477EC: nop

    return;
    // 0x800477EC: nop

;}
RECOMP_FUNC void func_800477F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800477F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800477F4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x800477F8: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x800477FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80047800: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80047804: lh          $t7, 0x26($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X26);
    // 0x80047808: lb          $t6, 0x44($v1)
    ctx->r14 = MEM_B(ctx->r3, 0X44);
    // 0x8004780C: nop

    // 0x80047810: bne         $t6, $t7, L_80047894
    if (ctx->r14 != ctx->r15) {
        // 0x80047814: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80047894;
    }
    // 0x80047814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80047818: lb          $v0, 0x6A($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X6A);
    // 0x8004781C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80047820: beq         $v0, $zero, L_80047884
    if (ctx->r2 == 0) {
        // 0x80047824: addiu       $a1, $zero, 0x60
        ctx->r5 = ADD32(0, 0X60);
            goto L_80047884;
    }
    // 0x80047824: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x80047828: beq         $v0, $at, L_80047854
    if (ctx->r2 == ctx->r1) {
        // 0x8004782C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80047854;
    }
    // 0x8004782C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80047830: beq         $v0, $at, L_80047868
    if (ctx->r2 == ctx->r1) {
        // 0x80047834: lui         $t8, 0x8004
        ctx->r24 = S32(0X8004 << 16);
            goto L_80047868;
    }
    // 0x80047834: lui         $t8, 0x8004
    ctx->r24 = S32(0X8004 << 16);
    // 0x80047838: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8004783C: bne         $v0, $at, L_80047884
    if (ctx->r2 != ctx->r1) {
        // 0x80047840: lui         $a0, 0x8004
        ctx->r4 = S32(0X8004 << 16);
            goto L_80047884;
    }
    // 0x80047840: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80047844: jal         0x800296E0
    // 0x80047848: addiu       $a0, $a0, 0x7708
    ctx->r4 = ADD32(ctx->r4, 0X7708);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x80047848: addiu       $a0, $a0, 0x7708
    ctx->r4 = ADD32(ctx->r4, 0X7708);
    after_0:
    // 0x8004784C: b           L_80047894
    // 0x80047850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80047894;
    // 0x80047850: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80047854:
    // 0x80047854: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80047858: jal         0x800296E0
    // 0x8004785C: addiu       $a0, $a0, 0x6F68
    ctx->r4 = ADD32(ctx->r4, 0X6F68);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x8004785C: addiu       $a0, $a0, 0x6F68
    ctx->r4 = ADD32(ctx->r4, 0X6F68);
    after_1:
    // 0x80047860: b           L_80047894
    // 0x80047864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80047894;
    // 0x80047864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80047868:
    // 0x80047868: addiu       $t8, $t8, 0x78A0
    ctx->r24 = ADD32(ctx->r24, 0X78A0);
    // 0x8004786C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80047870: sw          $t8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r24;
    // 0x80047874: jal         0x80047A08
    // 0x80047878: addiu       $a1, $a1, 0x6DB4
    ctx->r5 = ADD32(ctx->r5, 0X6DB4);
    func_80047A08(rdram, ctx);
        goto after_2;
    // 0x80047878: addiu       $a1, $a1, 0x6DB4
    ctx->r5 = ADD32(ctx->r5, 0X6DB4);
    after_2:
    // 0x8004787C: b           L_80047894
    // 0x80047880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80047894;
    // 0x80047880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80047884:
    // 0x80047884: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80047888: jal         0x8002989C
    // 0x8004788C: addiu       $a0, $a0, 0x78D8
    ctx->r4 = ADD32(ctx->r4, 0X78D8);
    func_8002989C(rdram, ctx);
        goto after_3;
    // 0x8004788C: addiu       $a0, $a0, 0x78D8
    ctx->r4 = ADD32(ctx->r4, 0X78D8);
    after_3:
    // 0x80047890: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80047894:
    // 0x80047894: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80047898: jr          $ra
    // 0x8004789C: nop

    return;
    // 0x8004789C: nop

;}
RECOMP_FUNC void func_800478A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800478A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800478A4: lui         $t6, 0x8004
    ctx->r14 = S32(0X8004 << 16);
    // 0x800478A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800478AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800478B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800478B4: addiu       $t6, $t6, 0x6F68
    ctx->r14 = ADD32(ctx->r14, 0X6F68);
    // 0x800478B8: sw          $t6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r14;
    // 0x800478BC: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800478C0: jal         0x800297B4
    // 0x800478C4: addiu       $a0, $a0, 0x76B8
    ctx->r4 = ADD32(ctx->r4, 0X76B8);
    func_800297B4(rdram, ctx);
        goto after_0;
    // 0x800478C4: addiu       $a0, $a0, 0x76B8
    ctx->r4 = ADD32(ctx->r4, 0X76B8);
    after_0:
    // 0x800478C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800478CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800478D0: jr          $ra
    // 0x800478D4: nop

    return;
    // 0x800478D4: nop

;}
RECOMP_FUNC void func_800478D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800478D8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800478DC: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x800478E0: lb          $t6, 0x6A($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X6A);
    // 0x800478E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800478E8: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800478EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800478F0: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x800478F4: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x800478F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800478FC: beq         $at, $zero, L_8004795C
    if (ctx->r1 == 0) {
        // 0x80047900: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_8004795C;
    }
    // 0x80047900: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80047904: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80047908: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8004790C: addu        $at, $at, $t7
    gpr jr_addend_80047918 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80047910: lw          $t7, 0x7438($at)
    ctx->r15 = ADD32(ctx->r1, 0X7438);
    // 0x80047914: nop

    // 0x80047918: jr          $t7
    // 0x8004791C: nop

    switch (jr_addend_80047918 >> 2) {
        case 0: goto L_80047984; break;
        case 1: goto L_8004795C; break;
        case 2: goto L_80047934; break;
        case 3: goto L_80047948; break;
        case 4: goto L_80047920; break;
        default: switch_error(__func__, 0x80047918, 0x800D7438);
    }
    // 0x8004791C: nop

L_80047920:
    // 0x80047920: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80047924: jal         0x800296E0
    // 0x80047928: addiu       $a0, $a0, 0x7708
    ctx->r4 = ADD32(ctx->r4, 0X7708);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x80047928: addiu       $a0, $a0, 0x7708
    ctx->r4 = ADD32(ctx->r4, 0X7708);
    after_0:
    // 0x8004792C: b           L_80047994
    // 0x80047930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80047994;
    // 0x80047930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80047934:
    // 0x80047934: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80047938: jal         0x800296E0
    // 0x8004793C: addiu       $a0, $a0, 0x6F68
    ctx->r4 = ADD32(ctx->r4, 0X6F68);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x8004793C: addiu       $a0, $a0, 0x6F68
    ctx->r4 = ADD32(ctx->r4, 0X6F68);
    after_1:
    // 0x80047940: b           L_80047994
    // 0x80047944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80047994;
    // 0x80047944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80047948:
    // 0x80047948: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8004794C: jal         0x800296E0
    // 0x80047950: addiu       $a0, $a0, 0x77F0
    ctx->r4 = ADD32(ctx->r4, 0X77F0);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x80047950: addiu       $a0, $a0, 0x77F0
    ctx->r4 = ADD32(ctx->r4, 0X77F0);
    after_2:
    // 0x80047954: b           L_80047994
    // 0x80047958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80047994;
    // 0x80047958: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004795C:
    // 0x8004795C: sb          $zero, 0x6A($v0)
    MEM_B(0X6A, ctx->r2) = 0;
    // 0x80047960: lh          $t9, 0x26($a1)
    ctx->r25 = MEM_H(ctx->r5, 0X26);
    // 0x80047964: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80047968: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8004796C: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x80047970: sb          $t8, 0x6F($t0)
    MEM_B(0X6F, ctx->r8) = ctx->r24;
    // 0x80047974: jal         0x800296E0
    // 0x80047978: addiu       $a0, $a0, 0x6D28
    ctx->r4 = ADD32(ctx->r4, 0X6D28);
    func_800296E0(rdram, ctx);
        goto after_3;
    // 0x80047978: addiu       $a0, $a0, 0x6D28
    ctx->r4 = ADD32(ctx->r4, 0X6D28);
    after_3:
    // 0x8004797C: b           L_80047994
    // 0x80047980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80047994;
    // 0x80047980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80047984:
    // 0x80047984: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x80047988: jal         0x800296E0
    // 0x8004798C: addiu       $a0, $a0, 0x6D28
    ctx->r4 = ADD32(ctx->r4, 0X6D28);
    func_800296E0(rdram, ctx);
        goto after_4;
    // 0x8004798C: addiu       $a0, $a0, 0x6D28
    ctx->r4 = ADD32(ctx->r4, 0X6D28);
    after_4:
    // 0x80047990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80047994:
    // 0x80047994: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80047998: jr          $ra
    // 0x8004799C: nop

    return;
    // 0x8004799C: nop

;}
RECOMP_FUNC void func_800479A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800479A0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800479A4: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x800479A8: lb          $t6, 0x6A($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X6A);
    // 0x800479AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800479B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800479B4: beq         $t6, $at, L_800479EC
    if (ctx->r14 == ctx->r1) {
        // 0x800479B8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800479EC;
    }
    // 0x800479B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800479BC: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x800479C0: lw          $t7, 0x1CF0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1CF0);
    // 0x800479C4: nop

    // 0x800479C8: lh          $t8, 0x26($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X26);
    // 0x800479CC: nop

    // 0x800479D0: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x800479D4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800479D8: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x800479DC: addu        $t0, $v0, $t9
    ctx->r8 = ADD32(ctx->r2, ctx->r25);
    // 0x800479E0: lb          $t1, 0x110($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X110);
    // 0x800479E4: nop

    // 0x800479E8: beq         $t1, $zero, L_800479F8
    if (ctx->r9 == 0) {
        // 0x800479EC: lui         $a0, 0x8004
        ctx->r4 = S32(0X8004 << 16);
            goto L_800479F8;
    }
L_800479EC:
    // 0x800479EC: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x800479F0: jal         0x800296E0
    // 0x800479F4: addiu       $a0, $a0, 0x6D28
    ctx->r4 = ADD32(ctx->r4, 0X6D28);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x800479F4: addiu       $a0, $a0, 0x6D28
    ctx->r4 = ADD32(ctx->r4, 0X6D28);
    after_0:
L_800479F8:
    // 0x800479F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800479FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80047A00: jr          $ra
    // 0x80047A04: nop

    return;
    // 0x80047A04: nop

;}
RECOMP_FUNC void func_80047A08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047A08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80047A0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80047A10: lh          $t6, 0x2C($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2C);
    // 0x80047A14: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80047A18: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80047A1C: sh          $t7, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r15;
    // 0x80047A20: lh          $t8, 0x2C($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X2C);
    // 0x80047A24: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80047A28: bgtz        $t8, L_80047AB8
    if (SIGNED(ctx->r24) > 0) {
        // 0x80047A2C: lui         $at, 0x8011
        ctx->r1 = S32(0X8011 << 16);
            goto L_80047AB8;
    }
    // 0x80047A2C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80047A30: lh          $t9, 0x2E($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X2E);
    // 0x80047A34: lh          $t2, 0x26($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X26);
    // 0x80047A38: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80047A3C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80047A40: addu        $t1, $a1, $t0
    ctx->r9 = ADD32(ctx->r5, ctx->r8);
    // 0x80047A44: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80047A48: lhu         $v0, 0x0($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X0);
    // 0x80047A4C: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80047A50: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80047A54: sh          $v0, -0x3078($at)
    MEM_H(-0X3078, ctx->r1) = ctx->r2;
    // 0x80047A58: lh          $t4, 0x2E($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X2E);
    // 0x80047A5C: nop

    // 0x80047A60: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80047A64: bne         $v0, $zero, L_80047A94
    if (ctx->r2 != 0) {
        // 0x80047A68: sh          $t5, 0x2E($a0)
        MEM_H(0X2E, ctx->r4) = ctx->r13;
            goto L_80047A94;
    }
    // 0x80047A68: sh          $t5, 0x2E($a0)
    MEM_H(0X2E, ctx->r4) = ctx->r13;
    // 0x80047A6C: lh          $t6, 0x2E($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X2E);
    // 0x80047A70: lw          $a0, 0x30($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X30);
    // 0x80047A74: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80047A78: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x80047A7C: lh          $a1, 0x0($t8)
    ctx->r5 = MEM_H(ctx->r24, 0X0);
    // 0x80047A80: jal         0x8002989C
    // 0x80047A84: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x80047A84: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80047A88: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80047A8C: b           L_80047AD4
    // 0x80047A90: sh          $zero, 0x2E($a2)
    MEM_H(0X2E, ctx->r6) = 0;
        goto L_80047AD4;
    // 0x80047A90: sh          $zero, 0x2E($a2)
    MEM_H(0X2E, ctx->r6) = 0;
L_80047A94:
    // 0x80047A94: lh          $v0, 0x2E($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X2E);
    // 0x80047A98: nop

    // 0x80047A9C: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x80047AA0: addu        $t0, $a3, $t9
    ctx->r8 = ADD32(ctx->r7, ctx->r25);
    // 0x80047AA4: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x80047AA8: addiu       $t2, $v0, 0x1
    ctx->r10 = ADD32(ctx->r2, 0X1);
    // 0x80047AAC: sh          $t2, 0x2E($a2)
    MEM_H(0X2E, ctx->r6) = ctx->r10;
    // 0x80047AB0: b           L_80047AD4
    // 0x80047AB4: sh          $t1, 0x2C($a2)
    MEM_H(0X2C, ctx->r6) = ctx->r9;
        goto L_80047AD4;
    // 0x80047AB4: sh          $t1, 0x2C($a2)
    MEM_H(0X2C, ctx->r6) = ctx->r9;
L_80047AB8:
    // 0x80047AB8: lh          $t3, 0x26($a2)
    ctx->r11 = MEM_H(ctx->r6, 0X26);
    // 0x80047ABC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80047AC0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80047AC4: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80047AC8: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x80047ACC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80047AD0: sh          $zero, -0x3078($at)
    MEM_H(-0X3078, ctx->r1) = 0;
L_80047AD4:
    // 0x80047AD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80047AD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80047ADC: jr          $ra
    // 0x80047AE0: nop

    return;
    // 0x80047AE0: nop

;}
RECOMP_FUNC void func_80047AE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047AE4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80047AE8: addiu       $v1, $sp, 0x4
    ctx->r3 = ADD32(ctx->r29, 0X4);
    // 0x80047AEC: sw          $a0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r4;
    // 0x80047AF0: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x80047AF4: nop

    // 0x80047AF8: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80047AFC: beq         $at, $zero, L_80047B30
    if (ctx->r1 == 0) {
        // 0x80047B00: nop
    
            goto L_80047B30;
    }
    // 0x80047B00: nop

    // 0x80047B04: bltz        $v0, L_80047B34
    if (SIGNED(ctx->r2) < 0) {
        // 0x80047B08: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80047B34;
    }
    // 0x80047B08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80047B0C: lh          $v0, 0x2($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X2);
    // 0x80047B10: nop

    // 0x80047B14: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80047B18: beq         $at, $zero, L_80047B30
    if (ctx->r1 == 0) {
        // 0x80047B1C: nop
    
            goto L_80047B30;
    }
    // 0x80047B1C: nop

    // 0x80047B20: bltz        $v0, L_80047B34
    if (SIGNED(ctx->r2) < 0) {
        // 0x80047B24: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80047B34;
    }
    // 0x80047B24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80047B28: b           L_80047B34
    // 0x80047B2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80047B34;
    // 0x80047B2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80047B30:
    // 0x80047B30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80047B34:
    // 0x80047B34: jr          $ra
    // 0x80047B38: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80047B38: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80047B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047B44: jr          $ra
    // 0x80047B48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80047B48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80047B54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047B54: sll         $t6, $a0, 24
    ctx->r14 = S32(ctx->r4 << 24);
    // 0x80047B58: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x80047B5C: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80047B60: lb          $t9, -0x3088($t9)
    ctx->r25 = MEM_B(ctx->r25, -0X3088);
    // 0x80047B64: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80047B68: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80047B6C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80047B70: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80047B74: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x80047B78: lbu         $v0, 0x6E04($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6E04);
    // 0x80047B7C: jr          $ra
    // 0x80047B80: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80047B80: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80047B84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047B84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80047B88: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80047B8C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80047B90: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80047B94: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80047B98: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x80047B9C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80047BA0: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x80047BA4: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80047BA8: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x80047BAC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80047BB0: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x80047BB4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80047BB8: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80047BBC: addiu       $t2, $t2, -0x32B0
    ctx->r10 = ADD32(ctx->r10, -0X32B0);
    // 0x80047BC0: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x80047BC4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80047BC8: sll         $t1, $a0, 4
    ctx->r9 = S32(ctx->r4 << 4);
    // 0x80047BCC: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80047BD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80047BD4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80047BD8: addiu       $a2, $a2, 0x35A0
    ctx->r6 = ADD32(ctx->r6, 0X35A0);
    // 0x80047BDC: addu        $t0, $t1, $t2
    ctx->r8 = ADD32(ctx->r9, ctx->r10);
    // 0x80047BE0: addu        $a3, $t8, $t9
    ctx->r7 = ADD32(ctx->r24, ctx->r25);
    // 0x80047BE4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80047BE8:
    // 0x80047BE8: addu        $v0, $a3, $v1
    ctx->r2 = ADD32(ctx->r7, ctx->r3);
    // 0x80047BEC: lbu         $t3, 0x308($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X308);
    // 0x80047BF0: addu        $t4, $a2, $v1
    ctx->r12 = ADD32(ctx->r6, ctx->r3);
    // 0x80047BF4: addu        $t5, $t0, $v1
    ctx->r13 = ADD32(ctx->r8, ctx->r3);
    // 0x80047BF8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80047BFC: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x80047C00: sb          $t3, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r11;
    // 0x80047C04: lbu         $t6, 0x1E($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X1E);
    // 0x80047C08: sra         $v1, $t7, 16
    ctx->r3 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80047C0C: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80047C10: bne         $at, $zero, L_80047BE8
    if (ctx->r1 != 0) {
        // 0x80047C14: sb          $t6, 0x308($v0)
        MEM_B(0X308, ctx->r2) = ctx->r14;
            goto L_80047BE8;
    }
    // 0x80047C14: sb          $t6, 0x308($v0)
    MEM_B(0X308, ctx->r2) = ctx->r14;
    // 0x80047C18: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80047C1C: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80047C20: addiu       $a1, $a1, 0x35B0
    ctx->r5 = ADD32(ctx->r5, 0X35B0);
    // 0x80047C24: jalr        $t9
    // 0x80047C28: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80047C28: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80047C2C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80047C30: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80047C34: addiu       $a2, $a2, 0x35A0
    ctx->r6 = ADD32(ctx->r6, 0X35A0);
    // 0x80047C38: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80047C3C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80047C40:
    // 0x80047C40: addu        $t1, $a2, $v1
    ctx->r9 = ADD32(ctx->r6, ctx->r3);
    // 0x80047C44: addu        $t3, $a3, $v1
    ctx->r11 = ADD32(ctx->r7, ctx->r3);
    // 0x80047C48: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80047C4C: sll         $t4, $v1, 16
    ctx->r12 = S32(ctx->r3 << 16);
    // 0x80047C50: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x80047C54: sra         $v1, $t4, 16
    ctx->r3 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80047C58: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80047C5C: bne         $at, $zero, L_80047C40
    if (ctx->r1 != 0) {
        // 0x80047C60: sb          $t2, 0x308($t3)
        MEM_B(0X308, ctx->r11) = ctx->r10;
            goto L_80047C40;
    }
    // 0x80047C60: sb          $t2, 0x308($t3)
    MEM_B(0X308, ctx->r11) = ctx->r10;
    // 0x80047C64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80047C68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80047C6C: jr          $ra
    // 0x80047C70: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    return;
    // 0x80047C70: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
;}
RECOMP_FUNC void func_80047C74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047C74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80047C78: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80047C7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80047C80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80047C84: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80047C88: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80047C8C: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80047C90: jalr        $a2
    // 0x80047C94: addiu       $a1, $a1, 0x35C0
    ctx->r5 = ADD32(ctx->r5, 0X35C0);
    LOOKUP_FUNC(ctx->r6)(rdram, ctx);
        goto after_0;
    // 0x80047C94: addiu       $a1, $a1, 0x35C0
    ctx->r5 = ADD32(ctx->r5, 0X35C0);
    after_0:
    // 0x80047C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80047C9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80047CA0: jr          $ra
    // 0x80047CA4: nop

    return;
    // 0x80047CA4: nop

;}
RECOMP_FUNC void func_80047CA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047CA8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80047CAC: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80047CB0: sll         $s3, $a0, 24
    ctx->r19 = S32(ctx->r4 << 24);
    // 0x80047CB4: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80047CB8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80047CBC: sra         $t8, $s3, 24
    ctx->r24 = S32(SIGNED(ctx->r19) >> 24);
    // 0x80047CC0: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x80047CC4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80047CC8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80047CCC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80047CD0: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80047CD4: or          $s3, $t8, $zero
    ctx->r19 = ctx->r24 | 0;
    // 0x80047CD8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80047CDC: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
L_80047CE0:
    // 0x80047CE0: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80047CE4: jal         0x800456D4
    // 0x80047CE8: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_800456D4(rdram, ctx);
        goto after_0;
    // 0x80047CE8: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_0:
    // 0x80047CEC: sll         $s1, $v0, 16
    ctx->r17 = S32(ctx->r2 << 16);
    // 0x80047CF0: sra         $t0, $s1, 16
    ctx->r8 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80047CF4: bltz        $v0, L_80047D98
    if (SIGNED(ctx->r2) < 0) {
        // 0x80047CF8: or          $s1, $t0, $zero
        ctx->r17 = ctx->r8 | 0;
            goto L_80047D98;
    }
    // 0x80047CF8: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x80047CFC: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x80047D00: sll         $s0, $t0, 24
    ctx->r16 = S32(ctx->r8 << 24);
    // 0x80047D04: sra         $t2, $s0, 24
    ctx->r10 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80047D08: sra         $t1, $a0, 24
    ctx->r9 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80047D0C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80047D10: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80047D14: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80047D18: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x80047D1C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80047D20: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x80047D24: sw          $s4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r20;
    // 0x80047D28: jal         0x80045AFC
    // 0x80047D2C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_80045AFC(rdram, ctx);
        goto after_1;
    // 0x80047D2C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_1:
    // 0x80047D30: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x80047D34: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x80047D38: sra         $t4, $a1, 24
    ctx->r12 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80047D3C: sra         $t3, $a0, 24
    ctx->r11 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80047D40: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80047D44: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x80047D48: jal         0x8004552C
    // 0x80047D4C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_8004552C(rdram, ctx);
        goto after_2;
    // 0x80047D4C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_2:
    // 0x80047D50: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80047D54: bltz        $v0, L_80047D80
    if (SIGNED(ctx->r2) < 0) {
        // 0x80047D58: sra         $t5, $v1, 16
        ctx->r13 = S32(SIGNED(ctx->r3) >> 16);
            goto L_80047D80;
    }
    // 0x80047D58: sra         $t5, $v1, 16
    ctx->r13 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80047D5C: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80047D60: sh          $s1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r17;
    // 0x80047D64: addu        $t6, $t5, $s4
    ctx->r14 = ADD32(ctx->r13, ctx->r20);
    // 0x80047D68: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80047D6C: nop

    // 0x80047D70: sh          $t7, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r15;
    // 0x80047D74: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x80047D78: b           L_80047DA0
    // 0x80047D7C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80047DA0;
    // 0x80047D7C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80047D80:
    // 0x80047D80: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80047D84: sll         $t8, $s2, 16
    ctx->r24 = S32(ctx->r18 << 16);
    // 0x80047D88: sra         $s2, $t8, 16
    ctx->r18 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80047D8C: slti        $at, $s2, 0xB
    ctx->r1 = SIGNED(ctx->r18) < 0XB ? 1 : 0;
    // 0x80047D90: bne         $at, $zero, L_80047CE0
    if (ctx->r1 != 0) {
        // 0x80047D94: sll         $a0, $s3, 24
        ctx->r4 = S32(ctx->r19 << 24);
            goto L_80047CE0;
    }
    // 0x80047D94: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
L_80047D98:
    // 0x80047D98: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80047D9C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80047DA0:
    // 0x80047DA0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80047DA4: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80047DA8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80047DAC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80047DB0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80047DB4: jr          $ra
    // 0x80047DB8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80047DB8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80047DBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80047DBC: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80047DC0: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80047DC4: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x80047DC8: lb          $s4, 0x7B($sp)
    ctx->r20 = MEM_B(ctx->r29, 0X7B);
    // 0x80047DCC: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80047DD0: sll         $a0, $s4, 24
    ctx->r4 = S32(ctx->r20 << 24);
    // 0x80047DD4: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x80047DD8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80047DDC: sra         $t6, $a0, 24
    ctx->r14 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80047DE0: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80047DE4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80047DE8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80047DEC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80047DF0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80047DF4: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80047DF8: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x80047DFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80047E00: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80047E04: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80047E08: jal         0x800458FC
    // 0x80047E0C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    func_800458FC(rdram, ctx);
        goto after_0;
    // 0x80047E0C: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    after_0:
    // 0x80047E10: jal         0x80048FF4
    // 0x80047E14: nop

    func_80048FF4(rdram, ctx);
        goto after_1;
    // 0x80047E14: nop

    after_1:
    // 0x80047E18: lh          $s6, 0x7A($sp)
    ctx->r22 = MEM_H(ctx->r29, 0X7A);
    // 0x80047E1C: jal         0x8003A568
    // 0x80047E20: andi        $a0, $s6, 0xFF
    ctx->r4 = ctx->r22 & 0XFF;
    func_8003A568(rdram, ctx);
        goto after_2;
    // 0x80047E20: andi        $a0, $s6, 0xFF
    ctx->r4 = ctx->r22 & 0XFF;
    after_2:
    // 0x80047E24: sll         $s2, $v0, 16
    ctx->r18 = S32(ctx->r2 << 16);
    // 0x80047E28: sra         $t7, $s2, 16
    ctx->r15 = S32(SIGNED(ctx->r18) >> 16);
    // 0x80047E2C: jal         0x80048F74
    // 0x80047E30: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    func_80048F74(rdram, ctx);
        goto after_3;
    // 0x80047E30: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    after_3:
    // 0x80047E34: bne         $v0, $zero, L_80047E44
    if (ctx->r2 != 0) {
        // 0x80047E38: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80047E44;
    }
    // 0x80047E38: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80047E3C: b           L_80047E48
    // 0x80047E40: addiu       $s1, $zero, 0x8
    ctx->r17 = ADD32(0, 0X8);
        goto L_80047E48;
    // 0x80047E40: addiu       $s1, $zero, 0x8
    ctx->r17 = ADD32(0, 0X8);
L_80047E44:
    // 0x80047E44: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80047E48:
    // 0x80047E48: bne         $s2, $at, L_80047E58
    if (ctx->r18 != ctx->r1) {
        // 0x80047E4C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80047E58;
    }
    // 0x80047E4C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80047E50: b           L_80047E58
    // 0x80047E54: addiu       $s0, $zero, -0x8
    ctx->r16 = ADD32(0, -0X8);
        goto L_80047E58;
    // 0x80047E54: addiu       $s0, $zero, -0x8
    ctx->r16 = ADD32(0, -0X8);
L_80047E58:
    // 0x80047E58: lh          $a1, 0x7A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X7A);
    // 0x80047E5C: addiu       $a0, $zero, 0xA94
    ctx->r4 = ADD32(0, 0XA94);
    // 0x80047E60: multu       $a1, $a0
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80047E64: xori        $t1, $a1, 0x1
    ctx->r9 = ctx->r5 ^ 0X1;
    // 0x80047E68: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80047E6C: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x80047E70: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
    // 0x80047E74: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80047E78: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80047E7C: mflo        $t8
    ctx->r24 = lo;
    // 0x80047E80: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x80047E84: lhu         $t0, 0xA($t9)
    ctx->r8 = MEM_HU(ctx->r25, 0XA);
    // 0x80047E88: multu       $t1, $a0
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80047E8C: mflo        $t2
    ctx->r10 = lo;
    // 0x80047E90: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x80047E94: lhu         $t4, 0xA($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0XA);
    // 0x80047E98: nop

    // 0x80047E9C: subu        $t5, $t0, $t4
    ctx->r13 = SUB32(ctx->r8, ctx->r12);
    // 0x80047EA0: bne         $t5, $at, L_80047EB0
    if (ctx->r13 != ctx->r1) {
        // 0x80047EA4: nop
    
            goto L_80047EB0;
    }
    // 0x80047EA4: nop

    // 0x80047EA8: b           L_80047EB0
    // 0x80047EAC: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
        goto L_80047EB0;
    // 0x80047EAC: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
L_80047EB0:
    // 0x80047EB0: beq         $v0, $zero, L_80047ECC
    if (ctx->r2 == 0) {
        // 0x80047EB4: addu        $s1, $s1, $s0
        ctx->r17 = ADD32(ctx->r17, ctx->r16);
            goto L_80047ECC;
    }
    // 0x80047EB4: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
    // 0x80047EB8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80047EBC: bne         $s2, $at, L_80047ED0
    if (ctx->r18 != ctx->r1) {
        // 0x80047EC0: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80047ED0;
    }
    // 0x80047EC0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80047EC4: b           L_80047ED0
    // 0x80047EC8: addiu       $s0, $zero, -0x3
    ctx->r16 = ADD32(0, -0X3);
        goto L_80047ED0;
    // 0x80047EC8: addiu       $s0, $zero, -0x3
    ctx->r16 = ADD32(0, -0X3);
L_80047ECC:
    // 0x80047ECC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80047ED0:
    // 0x80047ED0: jal         0x80048FF4
    // 0x80047ED4: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
    func_80048FF4(rdram, ctx);
        goto after_4;
    // 0x80047ED4: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
    after_4:
    // 0x80047ED8: sll         $s3, $v0, 16
    ctx->r19 = S32(ctx->r2 << 16);
    // 0x80047EDC: sll         $a0, $s4, 24
    ctx->r4 = S32(ctx->r20 << 24);
    // 0x80047EE0: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80047EE4: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x80047EE8: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x80047EEC: jal         0x80046BD4
    // 0x80047EF0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_80046BD4(rdram, ctx);
        goto after_5;
    // 0x80047EF0: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_5:
    // 0x80047EF4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80047EF8: jal         0x800457AC
    // 0x80047EFC: andi        $a0, $s6, 0xFFFF
    ctx->r4 = ctx->r22 & 0XFFFF;
    func_800457AC(rdram, ctx);
        goto after_6;
    // 0x80047EFC: andi        $a0, $s6, 0xFFFF
    ctx->r4 = ctx->r22 & 0XFFFF;
    after_6:
    // 0x80047F00: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80047F04: addu        $t8, $t8, $s3
    ctx->r24 = ADD32(ctx->r24, ctx->r19);
    // 0x80047F08: lbu         $t8, 0x6F1C($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X6F1C);
    // 0x80047F0C: mtc1        $s0, $f4
    ctx->f4.u32l = ctx->r16;
    // 0x80047F10: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80047F14: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80047F18: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80047F1C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80047F20: bgez        $t8, L_80047F38
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80047F24: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80047F38;
    }
    // 0x80047F24: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80047F28: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80047F2C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80047F30: nop

    // 0x80047F34: add.s       $f10, $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f16.fl;
L_80047F38:
    // 0x80047F38: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x80047F3C: addu        $t9, $t9, $v0
    ctx->r25 = ADD32(ctx->r25, ctx->r2);
    // 0x80047F40: lb          $t9, 0x6F24($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X6F24);
    // 0x80047F44: mul.s       $f18, $f6, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80047F48: addu        $t1, $t9, $s1
    ctx->r9 = ADD32(ctx->r25, ctx->r17);
    // 0x80047F4C: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80047F50: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80047F54: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80047F58: sw          $t3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r11;
    // 0x80047F5C: addiu       $s2, $zero, 0xA
    ctx->r18 = ADD32(0, 0XA);
    // 0x80047F60: mul.s       $f16, $f8, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x80047F64: nop

    // 0x80047F68: div.s       $f6, $f16, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80047F6C: nop

    // 0x80047F70: div.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x80047F74: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80047F78: nop

    // 0x80047F7C: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80047F80: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80047F84: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80047F88: nop

    // 0x80047F8C: cvt.w.s     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80047F90: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80047F94: mfc1        $s6, $f4
    ctx->r22 = (int32_t)ctx->f4.u32l;
    // 0x80047F98: nop

    // 0x80047F9C: addu        $t0, $s2, $s5
    ctx->r8 = ADD32(ctx->r18, ctx->r21);
L_80047FA0:
    // 0x80047FA0: lbu         $s3, 0x0($t0)
    ctx->r19 = MEM_BU(ctx->r8, 0X0);
    // 0x80047FA4: jal         0x8003906C
    // 0x80047FA8: nop

    func_8003906C(rdram, ctx);
        goto after_7;
    // 0x80047FA8: nop

    after_7:
    // 0x80047FAC: beq         $v0, $zero, L_80047FD0
    if (ctx->r2 == 0) {
        // 0x80047FB0: sll         $a0, $s4, 24
        ctx->r4 = S32(ctx->r20 << 24);
            goto L_80047FD0;
    }
    // 0x80047FB0: sll         $a0, $s4, 24
    ctx->r4 = S32(ctx->r20 << 24);
    // 0x80047FB4: sll         $a1, $s3, 24
    ctx->r5 = S32(ctx->r19 << 24);
    // 0x80047FB8: sra         $t5, $a1, 24
    ctx->r13 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80047FBC: sra         $t4, $a0, 24
    ctx->r12 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80047FC0: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80047FC4: jal         0x8003D190
    // 0x80047FC8: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    func_8003D190(rdram, ctx);
        goto after_8;
    // 0x80047FC8: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    after_8:
    // 0x80047FCC: beq         $v0, $zero, L_800480D8
    if (ctx->r2 == 0) {
        // 0x80047FD0: sll         $s0, $s3, 24
        ctx->r16 = S32(ctx->r19 << 24);
            goto L_800480D8;
    }
L_80047FD0:
    // 0x80047FD0: sll         $s0, $s3, 24
    ctx->r16 = S32(ctx->r19 << 24);
    // 0x80047FD4: sra         $t7, $s0, 24
    ctx->r15 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80047FD8: sll         $a1, $t7, 24
    ctx->r5 = S32(ctx->r15 << 24);
    // 0x80047FDC: sll         $a0, $s4, 24
    ctx->r4 = S32(ctx->r20 << 24);
    // 0x80047FE0: sra         $t6, $a0, 24
    ctx->r14 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80047FE4: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80047FE8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80047FEC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80047FF0: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80047FF4: jal         0x80046054
    // 0x80047FF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80046054(rdram, ctx);
        goto after_9;
    // 0x80047FF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x80047FFC: sll         $a0, $s4, 24
    ctx->r4 = S32(ctx->r20 << 24);
    // 0x80048000: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x80048004: sra         $t1, $a1, 24
    ctx->r9 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80048008: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8004800C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80048010: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x80048014: jal         0x80046054
    // 0x80048018: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80046054(rdram, ctx);
        goto after_10;
    // 0x80048018: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x8004801C: slt         $at, $v0, $s6
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r22) ? 1 : 0;
    // 0x80048020: beq         $at, $zero, L_800480EC
    if (ctx->r1 == 0) {
        // 0x80048024: sll         $a0, $s4, 24
        ctx->r4 = S32(ctx->r20 << 24);
            goto L_800480EC;
    }
    // 0x80048024: sll         $a0, $s4, 24
    ctx->r4 = S32(ctx->r20 << 24);
    // 0x80048028: sra         $t2, $a0, 24
    ctx->r10 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8004802C: addiu       $s1, $s5, 0xB
    ctx->r17 = ADD32(ctx->r21, 0XB);
    // 0x80048030: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80048034: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80048038: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x8004803C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    // 0x80048040: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x80048044: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80048048: jal         0x80045AFC
    // 0x8004804C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    func_80045AFC(rdram, ctx);
        goto after_11;
    // 0x8004804C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    after_11:
    // 0x80048050: sll         $a0, $s4, 24
    ctx->r4 = S32(ctx->r20 << 24);
    // 0x80048054: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x80048058: sra         $t0, $a1, 24
    ctx->r8 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8004805C: sra         $t3, $a0, 24
    ctx->r11 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80048060: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80048064: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80048068: jal         0x8004552C
    // 0x8004806C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_8004552C(rdram, ctx);
        goto after_12;
    // 0x8004806C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_12:
    // 0x80048070: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80048074: bltz        $v0, L_800480D8
    if (SIGNED(ctx->r2) < 0) {
        // 0x80048078: sra         $t4, $v1, 16
        ctx->r12 = S32(SIGNED(ctx->r3) >> 16);
            goto L_800480D8;
    }
    // 0x80048078: sra         $t4, $v1, 16
    ctx->r12 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8004807C: sll         $a0, $s4, 24
    ctx->r4 = S32(ctx->r20 << 24);
    // 0x80048080: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x80048084: addu        $s1, $t4, $s5
    ctx->r17 = ADD32(ctx->r12, ctx->r21);
    // 0x80048088: lb          $a2, 0xB($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XB);
    // 0x8004808C: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80048090: sra         $t5, $a0, 24
    ctx->r13 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80048094: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x80048098: jal         0x800469EC
    // 0x8004809C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_800469EC(rdram, ctx);
        goto after_13;
    // 0x8004809C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_13:
    // 0x800480A0: slti        $at, $v0, 0x29
    ctx->r1 = SIGNED(ctx->r2) < 0X29 ? 1 : 0;
    // 0x800480A4: bne         $at, $zero, L_800480D8
    if (ctx->r1 != 0) {
        // 0x800480A8: sll         $t7, $v0, 0
        ctx->r15 = S32(ctx->r2 << 0);
            goto L_800480D8;
    }
    // 0x800480A8: sll         $t7, $v0, 0
    ctx->r15 = S32(ctx->r2 << 0);
    // 0x800480AC: bltz        $t7, L_800480D8
    if (SIGNED(ctx->r15) < 0) {
        // 0x800480B0: addiu       $v0, $sp, 0x5C
        ctx->r2 = ADD32(ctx->r29, 0X5C);
            goto L_800480D8;
    }
    // 0x800480B0: addiu       $v0, $sp, 0x5C
    ctx->r2 = ADD32(ctx->r29, 0X5C);
    // 0x800480B4: sh          $s3, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r19;
    // 0x800480B8: lbu         $t8, 0xB($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0XB);
    // 0x800480BC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800480C0: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
    // 0x800480C4: lh          $t1, 0x7A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X7A);
    // 0x800480C8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800480CC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800480D0: b           L_800480EC
    // 0x800480D4: sb          $t9, -0x3243($at)
    MEM_B(-0X3243, ctx->r1) = ctx->r25;
        goto L_800480EC;
    // 0x800480D4: sb          $t9, -0x3243($at)
    MEM_B(-0X3243, ctx->r1) = ctx->r25;
L_800480D8:
    // 0x800480D8: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x800480DC: sll         $t2, $s2, 16
    ctx->r10 = S32(ctx->r18 << 16);
    // 0x800480E0: sra         $s2, $t2, 16
    ctx->r18 = S32(SIGNED(ctx->r10) >> 16);
    // 0x800480E4: bgez        $s2, L_80047FA0
    if (SIGNED(ctx->r18) >= 0) {
        // 0x800480E8: addu        $t0, $s2, $s5
        ctx->r8 = ADD32(ctx->r18, ctx->r21);
            goto L_80047FA0;
    }
    // 0x800480E8: addu        $t0, $s2, $s5
    ctx->r8 = ADD32(ctx->r18, ctx->r21);
L_800480EC:
    // 0x800480EC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x800480F0: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x800480F4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800480F8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x800480FC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80048100: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80048104: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80048108: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x8004810C: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80048110: jr          $ra
    // 0x80048114: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x80048114: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_80048118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048118: addiu       $sp, $sp, -0x90
    ctx->r29 = ADD32(ctx->r29, -0X90);
    // 0x8004811C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80048120: sll         $s1, $a0, 16
    ctx->r17 = S32(ctx->r4 << 16);
    // 0x80048124: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80048128: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x8004812C: addiu       $t7, $t7, -0x32B0
    ctx->r15 = ADD32(ctx->r15, -0X32B0);
    // 0x80048130: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x80048134: lb          $t8, 0x6D($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X6D);
    // 0x80048138: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x8004813C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80048140: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80048144: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80048148: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x8004814C: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80048150: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80048154: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80048158: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8004815C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80048160: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x80048164: bne         $t8, $zero, L_80048174
    if (ctx->r24 != 0) {
        // 0x80048168: sw          $a1, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->r5;
            goto L_80048174;
    }
    // 0x80048168: sw          $a1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r5;
    // 0x8004816C: b           L_800483FC
    // 0x80048170: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800483FC;
    // 0x80048170: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80048174:
    // 0x80048174: sll         $s6, $s1, 24
    ctx->r22 = S32(ctx->r17 << 24);
    // 0x80048178: sra         $t9, $s6, 24
    ctx->r25 = S32(SIGNED(ctx->r22) >> 24);
    // 0x8004817C: lw          $t1, 0x94($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X94);
    // 0x80048180: sll         $a0, $t9, 24
    ctx->r4 = S32(ctx->r25 << 24);
    // 0x80048184: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80048188: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8004818C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80048190: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80048194: or          $s6, $t9, $zero
    ctx->r22 = ctx->r25 | 0;
    // 0x80048198: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004819C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x800481A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x800481A4: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x800481A8: jal         0x800458FC
    // 0x800481AC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    func_800458FC(rdram, ctx);
        goto after_0;
    // 0x800481AC: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    after_0:
    // 0x800481B0: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x800481B4: andi        $s2, $s1, 0xFF
    ctx->r18 = ctx->r17 & 0XFF;
    // 0x800481B8: sw          $t3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r11;
    // 0x800481BC: addiu       $s1, $sp, 0x68
    ctx->r17 = ADD32(ctx->r29, 0X68);
    // 0x800481C0: addiu       $s0, $zero, 0xA
    ctx->r16 = ADD32(0, 0XA);
    // 0x800481C4: lw          $t4, 0x94($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94);
L_800481C8:
    // 0x800481C8: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x800481CC: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x800481D0: lbu         $s7, 0x0($t5)
    ctx->r23 = MEM_BU(ctx->r13, 0X0);
    // 0x800481D4: jal         0x80048BBC
    // 0x800481D8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_80048BBC(rdram, ctx);
        goto after_1;
    // 0x800481D8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_1:
    // 0x800481DC: sll         $s5, $s7, 24
    ctx->r21 = S32(ctx->r23 << 24);
    // 0x800481E0: sra         $t7, $s5, 24
    ctx->r15 = S32(SIGNED(ctx->r21) >> 24);
    // 0x800481E4: sll         $a1, $t7, 24
    ctx->r5 = S32(ctx->r15 << 24);
    // 0x800481E8: sll         $a0, $s6, 24
    ctx->r4 = S32(ctx->r22 << 24);
    // 0x800481EC: sra         $t6, $a0, 24
    ctx->r14 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800481F0: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x800481F4: sw          $v0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r2;
    // 0x800481F8: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x800481FC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80048200: jal         0x8003D190
    // 0x80048204: or          $s5, $t7, $zero
    ctx->r21 = ctx->r15 | 0;
    func_8003D190(rdram, ctx);
        goto after_2;
    // 0x80048204: or          $s5, $t7, $zero
    ctx->r21 = ctx->r15 | 0;
    after_2:
    // 0x80048208: beq         $v0, $zero, L_800483D8
    if (ctx->r2 == 0) {
        // 0x8004820C: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_800483D8;
    }
    // 0x8004820C: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80048210: lh          $t9, 0x0($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X0);
    // 0x80048214: nop

    // 0x80048218: beq         $s7, $t9, L_80048230
    if (ctx->r23 == ctx->r25) {
        // 0x8004821C: sll         $a0, $s6, 24
        ctx->r4 = S32(ctx->r22 << 24);
            goto L_80048230;
    }
    // 0x8004821C: sll         $a0, $s6, 24
    ctx->r4 = S32(ctx->r22 << 24);
    // 0x80048220: lh          $t0, 0x2($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X2);
    // 0x80048224: nop

    // 0x80048228: bne         $s7, $t0, L_800483D8
    if (ctx->r23 != ctx->r8) {
        // 0x8004822C: sll         $a0, $s6, 24
        ctx->r4 = S32(ctx->r22 << 24);
            goto L_800483D8;
    }
    // 0x8004822C: sll         $a0, $s6, 24
    ctx->r4 = S32(ctx->r22 << 24);
L_80048230:
    // 0x80048230: sll         $a1, $s5, 24
    ctx->r5 = S32(ctx->r21 << 24);
    // 0x80048234: sra         $t2, $a1, 24
    ctx->r10 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80048238: sra         $t1, $a0, 24
    ctx->r9 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8004823C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80048240: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x80048244: jal         0x80046054
    // 0x80048248: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80046054(rdram, ctx);
        goto after_3;
    // 0x80048248: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x8004824C: lw          $t4, 0x94($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94);
    // 0x80048250: sll         $a0, $s6, 24
    ctx->r4 = S32(ctx->r22 << 24);
    // 0x80048254: sra         $t3, $a0, 24
    ctx->r11 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80048258: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8004825C: sw          $v0, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r2;
    // 0x80048260: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80048264: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80048268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004826C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80048270: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80048274: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x80048278: jal         0x80045AFC
    // 0x8004827C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    func_80045AFC(rdram, ctx);
        goto after_4;
    // 0x8004827C: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    after_4:
    // 0x80048280: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80048284: sw          $zero, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = 0;
    // 0x80048288: sw          $t6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r14;
    // 0x8004828C: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    // 0x80048290: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80048294: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
L_80048298:
    // 0x80048298: sll         $a0, $s6, 24
    ctx->r4 = S32(ctx->r22 << 24);
    // 0x8004829C: addu        $t8, $s4, $t7
    ctx->r24 = ADD32(ctx->r20, ctx->r15);
    // 0x800482A0: lbu         $s3, 0x0($t8)
    ctx->r19 = MEM_BU(ctx->r24, 0X0);
    // 0x800482A4: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800482A8: beq         $s3, $s7, L_80048390
    if (ctx->r19 == ctx->r23) {
        // 0x800482AC: or          $a0, $t9, $zero
        ctx->r4 = ctx->r25 | 0;
            goto L_80048390;
    }
    // 0x800482AC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x800482B0: sll         $s0, $s3, 24
    ctx->r16 = S32(ctx->r19 << 24);
    // 0x800482B4: sra         $t0, $s0, 24
    ctx->r8 = S32(SIGNED(ctx->r16) >> 24);
    // 0x800482B8: sll         $a1, $t0, 24
    ctx->r5 = S32(ctx->r8 << 24);
    // 0x800482BC: sra         $t1, $a1, 24
    ctx->r9 = S32(SIGNED(ctx->r5) >> 24);
    // 0x800482C0: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x800482C4: jal         0x8003D190
    // 0x800482C8: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    func_8003D190(rdram, ctx);
        goto after_5;
    // 0x800482C8: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    after_5:
    // 0x800482CC: beq         $v0, $zero, L_80048390
    if (ctx->r2 == 0) {
        // 0x800482D0: sll         $a0, $s6, 24
        ctx->r4 = S32(ctx->r22 << 24);
            goto L_80048390;
    }
    // 0x800482D0: sll         $a0, $s6, 24
    ctx->r4 = S32(ctx->r22 << 24);
    // 0x800482D4: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x800482D8: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x800482DC: sll         $a2, $s5, 24
    ctx->r6 = S32(ctx->r21 << 24);
    // 0x800482E0: sll         $t2, $fp, 16
    ctx->r10 = S32(ctx->r30 << 16);
    // 0x800482E4: sra         $t6, $a2, 24
    ctx->r14 = S32(SIGNED(ctx->r6) >> 24);
    // 0x800482E8: sra         $t5, $a1, 24
    ctx->r13 = S32(SIGNED(ctx->r5) >> 24);
    // 0x800482EC: sra         $t4, $a0, 24
    ctx->r12 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800482F0: sra         $fp, $t2, 16
    ctx->r30 = S32(SIGNED(ctx->r10) >> 16);
    // 0x800482F4: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x800482F8: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    // 0x800482FC: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80048300: jal         0x800460E8
    // 0x80048304: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800460E8(rdram, ctx);
        goto after_6;
    // 0x80048304: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x80048308: lw          $t7, 0x80($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X80);
    // 0x8004830C: sll         $a0, $s6, 24
    ctx->r4 = S32(ctx->r22 << 24);
    // 0x80048310: sll         $a1, $s5, 24
    ctx->r5 = S32(ctx->r21 << 24);
    // 0x80048314: sll         $a2, $s0, 24
    ctx->r6 = S32(ctx->r16 << 24);
    // 0x80048318: sra         $t0, $a2, 24
    ctx->r8 = S32(SIGNED(ctx->r6) >> 24);
    // 0x8004831C: sra         $t9, $a1, 24
    ctx->r25 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80048320: sra         $t8, $a0, 24
    ctx->r24 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80048324: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80048328: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    // 0x8004832C: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x80048330: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80048334: jal         0x800460E8
    // 0x80048338: subu        $s2, $v0, $t7
    ctx->r18 = SUB32(ctx->r2, ctx->r15);
    func_800460E8(rdram, ctx);
        goto after_7;
    // 0x80048338: subu        $s2, $v0, $t7
    ctx->r18 = SUB32(ctx->r2, ctx->r15);
    after_7:
    // 0x8004833C: sll         $a0, $s6, 24
    ctx->r4 = S32(ctx->r22 << 24);
    // 0x80048340: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x80048344: sra         $t2, $a1, 24
    ctx->r10 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80048348: sra         $t1, $a0, 24
    ctx->r9 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8004834C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80048350: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80048354: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x80048358: jal         0x80046054
    // 0x8004835C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80046054(rdram, ctx);
        goto after_8;
    // 0x8004835C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_8:
    // 0x80048360: lw          $t3, 0x7C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X7C);
    // 0x80048364: subu        $s1, $s1, $v0
    ctx->r17 = SUB32(ctx->r17, ctx->r2);
    // 0x80048368: addu        $v1, $s2, $s1
    ctx->r3 = ADD32(ctx->r18, ctx->r17);
    // 0x8004836C: slt         $at, $t3, $v1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80048370: beq         $at, $zero, L_80048390
    if (ctx->r1 == 0) {
        // 0x80048374: nop
    
            goto L_80048390;
    }
    // 0x80048374: nop

    // 0x80048378: blez        $s2, L_80048390
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8004837C: nop
    
            goto L_80048390;
    }
    // 0x8004837C: nop

    // 0x80048380: blez        $s1, L_80048390
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80048384: nop
    
            goto L_80048390;
    }
    // 0x80048384: nop

    // 0x80048388: sw          $v1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r3;
    // 0x8004838C: sw          $s3, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r19;
L_80048390:
    // 0x80048390: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80048394: sll         $t4, $s4, 16
    ctx->r12 = S32(ctx->r20 << 16);
    // 0x80048398: sra         $s4, $t4, 16
    ctx->r20 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8004839C: slti        $at, $s4, 0xA
    ctx->r1 = SIGNED(ctx->r20) < 0XA ? 1 : 0;
    // 0x800483A0: bne         $at, $zero, L_80048298
    if (ctx->r1 != 0) {
        // 0x800483A4: lw          $t7, 0x94($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X94);
            goto L_80048298;
    }
    // 0x800483A4: lw          $t7, 0x94($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X94);
    // 0x800483A8: blez        $fp, L_800483EC
    if (SIGNED(ctx->r30) <= 0) {
        // 0x800483AC: lw          $t1, 0x5C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X5C);
            goto L_800483EC;
    }
    // 0x800483AC: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x800483B0: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x800483B4: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x800483B8: bltz        $t6, L_800483EC
    if (SIGNED(ctx->r14) < 0) {
        // 0x800483BC: lw          $t1, 0x5C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X5C);
            goto L_800483EC;
    }
    // 0x800483BC: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x800483C0: blez        $t7, L_800483E8
    if (SIGNED(ctx->r15) <= 0) {
        // 0x800483C4: addiu       $v0, $sp, 0x6C
        ctx->r2 = ADD32(ctx->r29, 0X6C);
            goto L_800483E8;
    }
    // 0x800483C4: addiu       $v0, $sp, 0x6C
    ctx->r2 = ADD32(ctx->r29, 0X6C);
    // 0x800483C8: sh          $s7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r23;
    // 0x800483CC: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x800483D0: b           L_800483E8
    // 0x800483D4: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
        goto L_800483E8;
    // 0x800483D4: sh          $t8, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r24;
L_800483D8:
    // 0x800483D8: sll         $t9, $s0, 16
    ctx->r25 = S32(ctx->r16 << 16);
    // 0x800483DC: sra         $s0, $t9, 16
    ctx->r16 = S32(SIGNED(ctx->r25) >> 16);
    // 0x800483E0: bgez        $s0, L_800481C8
    if (SIGNED(ctx->r16) >= 0) {
        // 0x800483E4: lw          $t4, 0x94($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X94);
            goto L_800481C8;
    }
    // 0x800483E4: lw          $t4, 0x94($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X94);
L_800483E8:
    // 0x800483E8: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
L_800483EC:
    // 0x800483EC: nop

    // 0x800483F0: sb          $zero, 0x6D($t1)
    MEM_B(0X6D, ctx->r9) = 0;
    // 0x800483F4: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x800483F8: nop

L_800483FC:
    // 0x800483FC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80048400: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80048404: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80048408: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8004840C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80048410: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80048414: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80048418: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8004841C: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80048420: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80048424: jr          $ra
    // 0x80048428: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
    return;
    // 0x80048428: addiu       $sp, $sp, 0x90
    ctx->r29 = ADD32(ctx->r29, 0X90);
;}
RECOMP_FUNC void func_8004842C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004842C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80048430: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80048434: sll         $s7, $a0, 16
    ctx->r23 = S32(ctx->r4 << 16);
    // 0x80048438: sra         $t6, $s7, 16
    ctx->r14 = S32(SIGNED(ctx->r23) >> 16);
    // 0x8004843C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80048440: sll         $s3, $t6, 24
    ctx->r19 = S32(ctx->r14 << 24);
    // 0x80048444: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80048448: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8004844C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80048450: sra         $t7, $s3, 24
    ctx->r15 = S32(SIGNED(ctx->r19) >> 24);
    // 0x80048454: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x80048458: or          $s7, $t6, $zero
    ctx->r23 = ctx->r14 | 0;
    // 0x8004845C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80048460: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80048464: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80048468: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8004846C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80048470: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
    // 0x80048474: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80048478: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8004847C: sll         $s1, $s0, 24
    ctx->r17 = S32(ctx->r16 << 24);
L_80048480:
    // 0x80048480: sra         $t9, $s1, 24
    ctx->r25 = S32(SIGNED(ctx->r17) >> 24);
    // 0x80048484: sll         $a1, $t9, 24
    ctx->r5 = S32(ctx->r25 << 24);
    // 0x80048488: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x8004848C: sra         $t8, $a0, 24
    ctx->r24 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80048490: sra         $t0, $a1, 24
    ctx->r8 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80048494: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80048498: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8004849C: jal         0x8003D108
    // 0x800484A0: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    func_8003D108(rdram, ctx);
        goto after_0;
    // 0x800484A0: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    after_0:
    // 0x800484A4: beq         $v0, $zero, L_80048520
    if (ctx->r2 == 0) {
        // 0x800484A8: sll         $a0, $s3, 24
        ctx->r4 = S32(ctx->r19 << 24);
            goto L_80048520;
    }
    // 0x800484A8: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x800484AC: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x800484B0: sll         $a2, $s1, 24
    ctx->r6 = S32(ctx->r17 << 24);
    // 0x800484B4: sra         $t3, $a2, 24
    ctx->r11 = S32(SIGNED(ctx->r6) >> 24);
    // 0x800484B8: sra         $t2, $a1, 24
    ctx->r10 = S32(SIGNED(ctx->r5) >> 24);
    // 0x800484BC: sra         $t1, $a0, 24
    ctx->r9 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800484C0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x800484C4: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x800484C8: jal         0x80042748
    // 0x800484CC: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    func_80042748(rdram, ctx);
        goto after_1;
    // 0x800484CC: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    after_1:
    // 0x800484D0: beq         $v0, $zero, L_80048520
    if (ctx->r2 == 0) {
        // 0x800484D4: or          $s2, $s0, $zero
        ctx->r18 = ctx->r16 | 0;
            goto L_80048520;
    }
    // 0x800484D4: or          $s2, $s0, $zero
    ctx->r18 = ctx->r16 | 0;
    // 0x800484D8: addu        $t4, $s5, $s6
    ctx->r12 = ADD32(ctx->r21, ctx->r22);
    // 0x800484DC: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x800484E0: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x800484E4: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x800484E8: sll         $t5, $s6, 16
    ctx->r13 = S32(ctx->r22 << 16);
    // 0x800484EC: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x800484F0: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800484F4: sra         $s6, $t5, 16
    ctx->r22 = S32(SIGNED(ctx->r13) >> 16);
    // 0x800484F8: sb          $s0, 0x0($t4)
    MEM_B(0X0, ctx->r12) = ctx->r16;
    // 0x800484FC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x80048500: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80048504: addiu       $a2, $zero, 0x1D
    ctx->r6 = ADD32(0, 0X1D);
    // 0x80048508: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8004850C: jal         0x8004237C
    // 0x80048510: andi        $s4, $s7, 0xFF
    ctx->r20 = ctx->r23 & 0XFF;
    func_8004237C(rdram, ctx);
        goto after_2;
    // 0x80048510: andi        $s4, $s7, 0xFF
    ctx->r20 = ctx->r23 & 0XFF;
    after_2:
    // 0x80048514: andi        $a0, $s4, 0xFF
    ctx->r4 = ctx->r20 & 0XFF;
    // 0x80048518: jal         0x80042AEC
    // 0x8004851C: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    func_80042AEC(rdram, ctx);
        goto after_3;
    // 0x8004851C: andi        $a1, $s2, 0xFF
    ctx->r5 = ctx->r18 & 0XFF;
    after_3:
L_80048520:
    // 0x80048520: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80048524: sll         $t9, $s0, 16
    ctx->r25 = S32(ctx->r16 << 16);
    // 0x80048528: sra         $s0, $t9, 16
    ctx->r16 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8004852C: slti        $at, $s0, 0xB
    ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
    // 0x80048530: bne         $at, $zero, L_80048480
    if (ctx->r1 != 0) {
        // 0x80048534: sll         $s1, $s0, 24
        ctx->r17 = S32(ctx->r16 << 24);
            goto L_80048480;
    }
    // 0x80048534: sll         $s1, $s0, 24
    ctx->r17 = S32(ctx->r16 << 24);
    // 0x80048538: addu        $v0, $s5, $s6
    ctx->r2 = ADD32(ctx->r21, ctx->r22);
    // 0x8004853C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80048540: sb          $t2, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r10;
    // 0x80048544: sb          $t2, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r10;
    // 0x80048548: lbu         $t3, 0x0($s5)
    ctx->r11 = MEM_BU(ctx->r21, 0X0);
    // 0x8004854C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x80048550: slti        $at, $t3, 0x11
    ctx->r1 = SIGNED(ctx->r11) < 0X11 ? 1 : 0;
    // 0x80048554: beq         $at, $zero, L_80048718
    if (ctx->r1 == 0) {
        // 0x80048558: sll         $a0, $s7, 16
        ctx->r4 = S32(ctx->r23 << 16);
            goto L_80048718;
    }
    // 0x80048558: sll         $a0, $s7, 16
    ctx->r4 = S32(ctx->r23 << 16);
    // 0x8004855C: sw          $t4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r12;
    // 0x80048560: lbu         $t5, 0x0($s5)
    ctx->r13 = MEM_BU(ctx->r21, 0X0);
    // 0x80048564: addiu       $s4, $zero, 0xFF
    ctx->r20 = ADD32(0, 0XFF);
    // 0x80048568: beq         $s4, $t5, L_80048714
    if (ctx->r20 == ctx->r13) {
        // 0x8004856C: or          $s6, $zero, $zero
        ctx->r22 = 0 | 0;
            goto L_80048714;
    }
    // 0x8004856C: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x80048570: addu        $s2, $zero, $s5
    ctx->r18 = ADD32(0, ctx->r21);
L_80048574:
    // 0x80048574: lbu         $t6, 0x1($s5)
    ctx->r14 = MEM_BU(ctx->r21, 0X1);
    // 0x80048578: addiu       $v0, $s6, 0x1
    ctx->r2 = ADD32(ctx->r22, 0X1);
    // 0x8004857C: beq         $s4, $t6, L_8004862C
    if (ctx->r20 == ctx->r14) {
        // 0x80048580: sll         $s0, $v0, 16
        ctx->r16 = S32(ctx->r2 << 16);
            goto L_8004862C;
    }
    // 0x80048580: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x80048584: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80048588: sra         $t8, $v1, 16
    ctx->r24 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8004858C: addu        $t9, $t8, $s5
    ctx->r25 = ADD32(ctx->r24, ctx->r21);
    // 0x80048590: lbu         $t0, 0x0($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X0);
    // 0x80048594: sra         $t7, $s0, 16
    ctx->r15 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80048598: beq         $s4, $t0, L_8004862C
    if (ctx->r20 == ctx->r8) {
        // 0x8004859C: or          $s0, $t7, $zero
        ctx->r16 = ctx->r15 | 0;
            goto L_8004862C;
    }
    // 0x8004859C: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x800485A0: slti        $at, $t8, 0xB
    ctx->r1 = SIGNED(ctx->r24) < 0XB ? 1 : 0;
    // 0x800485A4: beq         $at, $zero, L_8004862C
    if (ctx->r1 == 0) {
        // 0x800485A8: addu        $s1, $t7, $s5
        ctx->r17 = ADD32(ctx->r15, ctx->r21);
            goto L_8004862C;
    }
    // 0x800485A8: addu        $s1, $t7, $s5
    ctx->r17 = ADD32(ctx->r15, ctx->r21);
    // 0x800485AC: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x800485B0: nop

    // 0x800485B4: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
L_800485B8:
    // 0x800485B8: sll         $a1, $v0, 24
    ctx->r5 = S32(ctx->r2 << 24);
    // 0x800485BC: sra         $t2, $a1, 24
    ctx->r10 = S32(SIGNED(ctx->r5) >> 24);
    // 0x800485C0: sra         $t1, $a0, 24
    ctx->r9 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800485C4: lb          $a2, 0x0($s2)
    ctx->r6 = MEM_B(ctx->r18, 0X0);
    // 0x800485C8: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x800485CC: jal         0x80042748
    // 0x800485D0: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    func_80042748(rdram, ctx);
        goto after_4;
    // 0x800485D0: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    after_4:
    // 0x800485D4: bne         $v0, $zero, L_80048604
    if (ctx->r2 != 0) {
        // 0x800485D8: addiu       $v1, $sp, 0x4C
        ctx->r3 = ADD32(ctx->r29, 0X4C);
            goto L_80048604;
    }
    // 0x800485D8: addiu       $v1, $sp, 0x4C
    ctx->r3 = ADD32(ctx->r29, 0X4C);
    // 0x800485DC: lbu         $t3, 0x0($s2)
    ctx->r11 = MEM_BU(ctx->r18, 0X0);
    // 0x800485E0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800485E4: sh          $t3, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r11;
    // 0x800485E8: lbu         $t4, 0x0($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X0);
    // 0x800485EC: addu        $at, $at, $s7
    ctx->r1 = ADD32(ctx->r1, ctx->r23);
    // 0x800485F0: sh          $t4, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r12;
    // 0x800485F4: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800485F8: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x800485FC: b           L_80048728
    // 0x80048600: sb          $t5, -0x3243($at)
    MEM_B(-0X3243, ctx->r1) = ctx->r13;
        goto L_80048728;
    // 0x80048600: sb          $t5, -0x3243($at)
    MEM_B(-0X3243, ctx->r1) = ctx->r13;
L_80048604:
    // 0x80048604: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80048608: sll         $t6, $s0, 16
    ctx->r14 = S32(ctx->r16 << 16);
    // 0x8004860C: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80048610: addu        $s1, $t7, $s5
    ctx->r17 = ADD32(ctx->r15, ctx->r21);
    // 0x80048614: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80048618: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x8004861C: beq         $s4, $v0, L_8004862C
    if (ctx->r20 == ctx->r2) {
        // 0x80048620: slti        $at, $t7, 0xB
        ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
            goto L_8004862C;
    }
    // 0x80048620: slti        $at, $t7, 0xB
    ctx->r1 = SIGNED(ctx->r15) < 0XB ? 1 : 0;
    // 0x80048624: bne         $at, $zero, L_800485B8
    if (ctx->r1 != 0) {
        // 0x80048628: sll         $a0, $s3, 24
        ctx->r4 = S32(ctx->r19 << 24);
            goto L_800485B8;
    }
    // 0x80048628: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
L_8004862C:
    // 0x8004862C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80048630:
    // 0x80048630: lbu         $t8, 0x0($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X0);
    // 0x80048634: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x80048638: beq         $s0, $t8, L_800486D4
    if (ctx->r16 == ctx->r24) {
        // 0x8004863C: sra         $t9, $a0, 24
        ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
            goto L_800486D4;
    }
    // 0x8004863C: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80048640: sll         $s1, $s0, 24
    ctx->r17 = S32(ctx->r16 << 24);
    // 0x80048644: sra         $t0, $s1, 24
    ctx->r8 = S32(SIGNED(ctx->r17) >> 24);
    // 0x80048648: sll         $a1, $t0, 24
    ctx->r5 = S32(ctx->r8 << 24);
    // 0x8004864C: sra         $t1, $a1, 24
    ctx->r9 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80048650: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    // 0x80048654: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x80048658: jal         0x8003D108
    // 0x8004865C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_8003D108(rdram, ctx);
        goto after_5;
    // 0x8004865C: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_5:
    // 0x80048660: beq         $v0, $zero, L_800486D4
    if (ctx->r2 == 0) {
        // 0x80048664: sll         $a0, $s3, 24
        ctx->r4 = S32(ctx->r19 << 24);
            goto L_800486D4;
    }
    // 0x80048664: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x80048668: sll         $a1, $s1, 24
    ctx->r5 = S32(ctx->r17 << 24);
    // 0x8004866C: sra         $t3, $a1, 24
    ctx->r11 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80048670: sra         $t2, $a0, 24
    ctx->r10 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80048674: lb          $a2, 0x0($s2)
    ctx->r6 = MEM_B(ctx->r18, 0X0);
    // 0x80048678: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x8004867C: jal         0x80042748
    // 0x80048680: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    func_80042748(rdram, ctx);
        goto after_6;
    // 0x80048680: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_6:
    // 0x80048684: bne         $v0, $zero, L_800486D4
    if (ctx->r2 != 0) {
        // 0x80048688: sll         $a0, $s3, 24
        ctx->r4 = S32(ctx->r19 << 24);
            goto L_800486D4;
    }
    // 0x80048688: sll         $a0, $s3, 24
    ctx->r4 = S32(ctx->r19 << 24);
    // 0x8004868C: sll         $a2, $s1, 24
    ctx->r6 = S32(ctx->r17 << 24);
    // 0x80048690: sra         $t5, $a2, 24
    ctx->r13 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80048694: sra         $t4, $a0, 24
    ctx->r12 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80048698: lb          $a1, 0x0($s2)
    ctx->r5 = MEM_B(ctx->r18, 0X0);
    // 0x8004869C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x800486A0: jal         0x80042748
    // 0x800486A4: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    func_80042748(rdram, ctx);
        goto after_7;
    // 0x800486A4: or          $a2, $t5, $zero
    ctx->r6 = ctx->r13 | 0;
    after_7:
    // 0x800486A8: bne         $v0, $zero, L_800486D4
    if (ctx->r2 != 0) {
        // 0x800486AC: addiu       $v1, $sp, 0x4C
        ctx->r3 = ADD32(ctx->r29, 0X4C);
            goto L_800486D4;
    }
    // 0x800486AC: addiu       $v1, $sp, 0x4C
    ctx->r3 = ADD32(ctx->r29, 0X4C);
    // 0x800486B0: lbu         $t6, 0x0($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X0);
    // 0x800486B4: sh          $s0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r16;
    // 0x800486B8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800486BC: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
    // 0x800486C0: addu        $at, $at, $s7
    ctx->r1 = ADD32(ctx->r1, ctx->r23);
    // 0x800486C4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800486C8: lw          $v0, 0x4C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4C);
    // 0x800486CC: b           L_80048728
    // 0x800486D0: sb          $t7, -0x3243($at)
    MEM_B(-0X3243, ctx->r1) = ctx->r15;
        goto L_80048728;
    // 0x800486D0: sb          $t7, -0x3243($at)
    MEM_B(-0X3243, ctx->r1) = ctx->r15;
L_800486D4:
    // 0x800486D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800486D8: sll         $t8, $s0, 16
    ctx->r24 = S32(ctx->r16 << 16);
    // 0x800486DC: sra         $s0, $t8, 16
    ctx->r16 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800486E0: slti        $at, $s0, 0xB
    ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
    // 0x800486E4: bne         $at, $zero, L_80048630
    if (ctx->r1 != 0) {
        // 0x800486E8: nop
    
            goto L_80048630;
    }
    // 0x800486E8: nop

    // 0x800486EC: addiu       $v0, $s6, 0x1
    ctx->r2 = ADD32(ctx->r22, 0X1);
    // 0x800486F0: sll         $s6, $v0, 16
    ctx->r22 = S32(ctx->r2 << 16);
    // 0x800486F4: sra         $t0, $s6, 16
    ctx->r8 = S32(SIGNED(ctx->r22) >> 16);
    // 0x800486F8: addu        $s2, $t0, $s5
    ctx->r18 = ADD32(ctx->r8, ctx->r21);
    // 0x800486FC: lbu         $t1, 0x0($s2)
    ctx->r9 = MEM_BU(ctx->r18, 0X0);
    // 0x80048700: or          $s6, $t0, $zero
    ctx->r22 = ctx->r8 | 0;
    // 0x80048704: beq         $s4, $t1, L_80048714
    if (ctx->r20 == ctx->r9) {
        // 0x80048708: slti        $at, $t0, 0xB
        ctx->r1 = SIGNED(ctx->r8) < 0XB ? 1 : 0;
            goto L_80048714;
    }
    // 0x80048708: slti        $at, $t0, 0xB
    ctx->r1 = SIGNED(ctx->r8) < 0XB ? 1 : 0;
    // 0x8004870C: bne         $at, $zero, L_80048574
    if (ctx->r1 != 0) {
        // 0x80048710: nop
    
            goto L_80048574;
    }
    // 0x80048710: nop

L_80048714:
    // 0x80048714: sll         $a0, $s7, 16
    ctx->r4 = S32(ctx->r23 << 16);
L_80048718:
    // 0x80048718: sra         $t2, $a0, 16
    ctx->r10 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8004871C: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80048720: jal         0x80048118
    // 0x80048724: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    func_80048118(rdram, ctx);
        goto after_8;
    // 0x80048724: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_8:
L_80048728:
    // 0x80048728: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8004872C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80048730: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80048734: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80048738: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8004873C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80048740: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80048744: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80048748: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x8004874C: jr          $ra
    // 0x80048750: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80048750: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80048754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048754: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80048758: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8004875C: sll         $s3, $a0, 16
    ctx->r19 = S32(ctx->r4 << 16);
    // 0x80048760: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x80048764: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80048768: sll         $s2, $t6, 24
    ctx->r18 = S32(ctx->r14 << 24);
    // 0x8004876C: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80048770: sra         $t8, $s2, 24
    ctx->r24 = S32(SIGNED(ctx->r18) >> 24);
    // 0x80048774: sll         $a0, $t8, 24
    ctx->r4 = S32(ctx->r24 << 24);
    // 0x80048778: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8004877C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80048780: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80048784: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80048788: sra         $t9, $a0, 24
    ctx->r25 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8004878C: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x80048790: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80048794: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x80048798: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8004879C: sh          $zero, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = 0;
    // 0x800487A0: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x800487A4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800487A8: jal         0x8003D080
    // 0x800487AC: or          $s2, $t8, $zero
    ctx->r18 = ctx->r24 | 0;
    func_8003D080(rdram, ctx);
        goto after_0;
    // 0x800487AC: or          $s2, $t8, $zero
    ctx->r18 = ctx->r24 | 0;
    after_0:
    // 0x800487B0: bne         $v0, $zero, L_80048884
    if (ctx->r2 != 0) {
        // 0x800487B4: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_80048884;
    }
    // 0x800487B4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x800487B8: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
L_800487BC:
    // 0x800487BC: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x800487C0: sra         $t1, $a1, 24
    ctx->r9 = S32(SIGNED(ctx->r5) >> 24);
    // 0x800487C4: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800487C8: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x800487CC: jal         0x8003D080
    // 0x800487D0: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_8003D080(rdram, ctx);
        goto after_1;
    // 0x800487D0: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_1:
    // 0x800487D4: beq         $v0, $zero, L_80048818
    if (ctx->r2 == 0) {
        // 0x800487D8: andi        $a0, $s3, 0xFF
        ctx->r4 = ctx->r19 & 0XFF;
            goto L_80048818;
    }
    // 0x800487D8: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    // 0x800487DC: jal         0x8004DCB0
    // 0x800487E0: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    func_8004DCB0(rdram, ctx);
        goto after_2;
    // 0x800487E0: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    after_2:
    // 0x800487E4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800487E8: jal         0x8004D880
    // 0x800487EC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8004D880(rdram, ctx);
        goto after_3;
    // 0x800487EC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_3:
    // 0x800487F0: bne         $v0, $zero, L_80048804
    if (ctx->r2 != 0) {
        // 0x800487F4: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_80048804;
    }
    // 0x800487F4: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x800487F8: sra         $t2, $v0, 16
    ctx->r10 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800487FC: b           L_80048838
    // 0x80048800: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_80048838;
    // 0x80048800: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_80048804:
    // 0x80048804: bgtz        $s1, L_80048818
    if (SIGNED(ctx->r17) > 0) {
        // 0x80048808: nop
    
            goto L_80048818;
    }
    // 0x80048808: nop

    // 0x8004880C: sll         $s1, $s0, 16
    ctx->r17 = S32(ctx->r16 << 16);
    // 0x80048810: sra         $t3, $s1, 16
    ctx->r11 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80048814: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
L_80048818:
    // 0x80048818: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8004881C: sll         $t4, $s0, 16
    ctx->r12 = S32(ctx->r16 << 16);
    // 0x80048820: sra         $s0, $t4, 16
    ctx->r16 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80048824: slti        $at, $s0, 0xB
    ctx->r1 = SIGNED(ctx->r16) < 0XB ? 1 : 0;
    // 0x80048828: bne         $at, $zero, L_800487BC
    if (ctx->r1 != 0) {
        // 0x8004882C: sll         $a0, $s2, 24
        ctx->r4 = S32(ctx->r18 << 24);
            goto L_800487BC;
    }
    // 0x8004882C: sll         $a0, $s2, 24
    ctx->r4 = S32(ctx->r18 << 24);
    // 0x80048830: lh          $v0, 0x3A($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X3A);
    // 0x80048834: nop

L_80048838:
    // 0x80048838: bgtz        $v0, L_8004885C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8004883C: addiu       $v1, $sp, 0x34
        ctx->r3 = ADD32(ctx->r29, 0X34);
            goto L_8004885C;
    }
    // 0x8004883C: addiu       $v1, $sp, 0x34
    ctx->r3 = ADD32(ctx->r29, 0X34);
    // 0x80048840: blez        $s1, L_80048854
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80048844: sll         $s0, $s1, 16
        ctx->r16 = S32(ctx->r17 << 16);
            goto L_80048854;
    }
    // 0x80048844: sll         $s0, $s1, 16
    ctx->r16 = S32(ctx->r17 << 16);
    // 0x80048848: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8004884C: b           L_80048868
    // 0x80048850: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
        goto L_80048868;
    // 0x80048850: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
L_80048854:
    // 0x80048854: b           L_80048888
    // 0x80048858: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80048888;
    // 0x80048858: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8004885C:
    // 0x8004885C: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x80048860: sra         $t7, $s0, 16
    ctx->r15 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80048864: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
L_80048868:
    // 0x80048868: sh          $zero, 0x0($v1)
    MEM_H(0X0, ctx->r3) = 0;
    // 0x8004886C: sh          $s0, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r16;
    // 0x80048870: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80048874: addu        $at, $at, $s3
    ctx->r1 = ADD32(ctx->r1, ctx->r19);
    // 0x80048878: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x8004887C: b           L_80048888
    // 0x80048880: sb          $zero, -0x3243($at)
    MEM_B(-0X3243, ctx->r1) = 0;
        goto L_80048888;
    // 0x80048880: sb          $zero, -0x3243($at)
    MEM_B(-0X3243, ctx->r1) = 0;
L_80048884:
    // 0x80048884: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80048888:
    // 0x80048888: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8004888C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80048890: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80048894: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80048898: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8004889C: jr          $ra
    // 0x800488A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800488A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800488A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800488A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800488A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800488AC: jal         0x8003906C
    // 0x800488B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8003906C(rdram, ctx);
        goto after_0;
    // 0x800488B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800488B4: beq         $v0, $zero, L_80048914
    if (ctx->r2 == 0) {
        // 0x800488B8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80048914;
    }
    // 0x800488B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800488BC: jal         0x80048964
    // 0x800488C0: nop

    func_80048964(rdram, ctx);
        goto after_1;
    // 0x800488C0: nop

    after_1:
    // 0x800488C4: lbu         $v1, 0x1B($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X1B);
    // 0x800488C8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800488CC: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x800488D0: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x800488D4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800488D8: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x800488DC: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800488E0: addu        $t7, $t7, $v1
    ctx->r15 = ADD32(ctx->r15, ctx->r3);
    // 0x800488E4: lb          $t7, -0x3245($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X3245);
    // 0x800488E8: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x800488EC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800488F0: addu        $t6, $t6, $v1
    ctx->r14 = ADD32(ctx->r14, ctx->r3);
    // 0x800488F4: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x800488F8: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x800488FC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80048900: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x80048904: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80048908: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8004890C: sh          $v0, -0x225E($at)
    MEM_H(-0X225E, ctx->r1) = ctx->r2;
    // 0x80048910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80048914:
    // 0x80048914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80048918: jr          $ra
    // 0x8004891C: nop

    return;
    // 0x8004891C: nop

;}
RECOMP_FUNC void func_80048920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048920: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80048924: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80048928: lhu         $t8, 0xB74($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB74);
    // 0x8004892C: lb          $t6, -0x309D($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X309D);
    // 0x80048930: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80048934: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x80048938: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8004893C: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80048940: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80048944: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x80048948: lhu         $t2, 0x3944($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X3944);
    // 0x8004894C: lhu         $t1, 0x70F4($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X70F4);
    // 0x80048950: nop

    // 0x80048954: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x80048958: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x8004895C: jr          $ra
    // 0x80048960: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
    return;
    // 0x80048960: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
;}
RECOMP_FUNC void func_80048964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048964: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80048968: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8004896C: lhu         $t8, 0xB74($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB74);
    // 0x80048970: lb          $t6, -0x309D($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X309D);
    // 0x80048974: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80048978: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8004897C: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80048980: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x80048984: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80048988: lui         $t2, 0x802C
    ctx->r10 = S32(0X802C << 16);
    // 0x8004898C: lhu         $t2, 0x3946($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X3946);
    // 0x80048990: lhu         $t1, 0x70F4($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X70F4);
    // 0x80048994: nop

    // 0x80048998: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x8004899C: sll         $t3, $v0, 16
    ctx->r11 = S32(ctx->r2 << 16);
    // 0x800489A0: jr          $ra
    // 0x800489A4: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
    return;
    // 0x800489A4: sra         $v0, $t3, 16
    ctx->r2 = S32(SIGNED(ctx->r11) >> 16);
;}
RECOMP_FUNC void func_800489A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800489A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800489AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800489B0: jal         0x800489D0
    // 0x800489B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800489D0(rdram, ctx);
        goto after_0;
    // 0x800489B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x800489B8: jal         0x800489D0
    // 0x800489BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800489D0(rdram, ctx);
        goto after_1;
    // 0x800489BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x800489C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800489C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800489C8: jr          $ra
    // 0x800489CC: nop

    return;
    // 0x800489CC: nop

;}
RECOMP_FUNC void func_800489D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800489D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800489D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800489D8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x800489DC: andi        $s1, $a0, 0xFF
    ctx->r17 = ctx->r4 & 0XFF;
    // 0x800489E0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x800489E4: jal         0x80048964
    // 0x800489E8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_80048964(rdram, ctx);
        goto after_0;
    // 0x800489E8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x800489EC: jal         0x8003A568
    // 0x800489F0: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_8003A568(rdram, ctx);
        goto after_1;
    // 0x800489F0: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_1:
    // 0x800489F4: sll         $t6, $s1, 3
    ctx->r14 = S32(ctx->r17 << 3);
    // 0x800489F8: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x800489FC: addu        $t6, $t6, $s1
    ctx->r14 = ADD32(ctx->r14, ctx->r17);
    // 0x80048A00: addiu       $s0, $s0, -0x32B0
    ctx->r16 = ADD32(ctx->r16, -0X32B0);
    // 0x80048A04: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x80048A08: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x80048A0C: lb          $t8, 0x110($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X110);
    // 0x80048A10: sll         $t9, $s1, 2
    ctx->r25 = S32(ctx->r17 << 2);
    // 0x80048A14: bne         $t8, $zero, L_80048B60
    if (ctx->r24 != 0) {
        // 0x80048A18: addu        $v0, $s0, $t9
        ctx->r2 = ADD32(ctx->r16, ctx->r25);
            goto L_80048B60;
    }
    // 0x80048A18: addu        $v0, $s0, $t9
    ctx->r2 = ADD32(ctx->r16, ctx->r25);
    // 0x80048A1C: lw          $a0, 0x78($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X78);
    // 0x80048A20: jal         0x80047AE4
    // 0x80048A24: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    func_80047AE4(rdram, ctx);
        goto after_2;
    // 0x80048A24: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    after_2:
    // 0x80048A28: bne         $v0, $zero, L_80048B60
    if (ctx->r2 != 0) {
        // 0x80048A2C: sll         $a0, $s1, 24
        ctx->r4 = S32(ctx->r17 << 24);
            goto L_80048B60;
    }
    // 0x80048A2C: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
    // 0x80048A30: sra         $t0, $a0, 24
    ctx->r8 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80048A34: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80048A38: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80048A3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80048A40: jal         0x8003D080
    // 0x80048A44: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    func_8003D080(rdram, ctx);
        goto after_3;
    // 0x80048A44: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_3:
    // 0x80048A48: beq         $v0, $zero, L_80048A70
    if (ctx->r2 == 0) {
        // 0x80048A4C: nop
    
            goto L_80048A70;
    }
    // 0x80048A4C: nop

    // 0x80048A50: lbu         $t1, 0xC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XC);
    // 0x80048A54: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80048A58: beq         $t1, $at, L_80048B64
    if (ctx->r9 == ctx->r1) {
        // 0x80048A5C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80048B64;
    }
    // 0x80048A5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80048A60: jal         0x80048CFC
    // 0x80048A64: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_80048CFC(rdram, ctx);
        goto after_4;
    // 0x80048A64: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_4:
    // 0x80048A68: bne         $v0, $zero, L_80048B64
    if (ctx->r2 != 0) {
        // 0x80048A6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80048B64;
    }
    // 0x80048A6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80048A70:
    // 0x80048A70: jal         0x8003A568
    // 0x80048A74: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_8003A568(rdram, ctx);
        goto after_5;
    // 0x80048A74: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_5:
    // 0x80048A78: blez        $v0, L_80048ABC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80048A7C: addiu       $s0, $zero, -0x1
        ctx->r16 = ADD32(0, -0X1);
            goto L_80048ABC;
    }
    // 0x80048A7C: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x80048A80: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x80048A84: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80048A88: addiu       $a1, $a1, -0x7BD4
    ctx->r5 = ADD32(ctx->r5, -0X7BD4);
    // 0x80048A8C: jal         0x80047C74
    // 0x80048A90: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80047C74(rdram, ctx);
        goto after_6;
    // 0x80048A90: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_6:
    // 0x80048A94: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80048A98: jal         0x80047AE4
    // 0x80048A9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80047AE4(rdram, ctx);
        goto after_7;
    // 0x80048A9C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_7:
    // 0x80048AA0: bne         $v0, $zero, L_80048ABC
    if (ctx->r2 != 0) {
        // 0x80048AA4: lui         $a1, 0x8004
        ctx->r5 = S32(0X8004 << 16);
            goto L_80048ABC;
    }
    // 0x80048AA4: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    // 0x80048AA8: lh          $a0, 0x22($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X22);
    // 0x80048AAC: jal         0x80047C74
    // 0x80048AB0: addiu       $a1, $a1, 0x7DBC
    ctx->r5 = ADD32(ctx->r5, 0X7DBC);
    func_80047C74(rdram, ctx);
        goto after_8;
    // 0x80048AB0: addiu       $a1, $a1, 0x7DBC
    ctx->r5 = ADD32(ctx->r5, 0X7DBC);
    after_8:
    // 0x80048AB4: b           L_80048ABC
    // 0x80048AB8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_80048ABC;
    // 0x80048AB8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80048ABC:
    // 0x80048ABC: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x80048AC0: jal         0x80048BFC
    // 0x80048AC4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80048BFC(rdram, ctx);
        goto after_9;
    // 0x80048AC4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x80048AC8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80048ACC: jal         0x80047AE4
    // 0x80048AD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80047AE4(rdram, ctx);
        goto after_10;
    // 0x80048AD0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_10:
    // 0x80048AD4: bne         $v0, $zero, L_80048AEC
    if (ctx->r2 != 0) {
        // 0x80048AD8: lui         $a1, 0x8005
        ctx->r5 = S32(0X8005 << 16);
            goto L_80048AEC;
    }
    // 0x80048AD8: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80048ADC: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x80048AE0: jal         0x80047C74
    // 0x80048AE4: addiu       $a1, $a1, -0x78AC
    ctx->r5 = ADD32(ctx->r5, -0X78AC);
    func_80047C74(rdram, ctx);
        goto after_11;
    // 0x80048AE4: addiu       $a1, $a1, -0x78AC
    ctx->r5 = ADD32(ctx->r5, -0X78AC);
    after_11:
    // 0x80048AE8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80048AEC:
    // 0x80048AEC: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x80048AF0: jal         0x80048BFC
    // 0x80048AF4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80048BFC(rdram, ctx);
        goto after_12;
    // 0x80048AF4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_12:
    // 0x80048AF8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80048AFC: jal         0x80047AE4
    // 0x80048B00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80047AE4(rdram, ctx);
        goto after_13;
    // 0x80048B00: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_13:
    // 0x80048B04: beq         $v0, $zero, L_80048B60
    if (ctx->r2 == 0) {
        // 0x80048B08: andi        $a0, $s1, 0xFF
        ctx->r4 = ctx->r17 & 0XFF;
            goto L_80048B60;
    }
    // 0x80048B08: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    // 0x80048B0C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80048B10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80048B14: jal         0x80048B78
    // 0x80048B18: sw          $s0, 0x78($t2)
    MEM_W(0X78, ctx->r10) = ctx->r16;
    func_80048B78(rdram, ctx);
        goto after_14;
    // 0x80048B18: sw          $s0, 0x78($t2)
    MEM_W(0X78, ctx->r10) = ctx->r16;
    after_14:
    // 0x80048B1C: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x80048B20: addu        $t3, $t3, $s1
    ctx->r11 = ADD32(ctx->r11, ctx->r17);
    // 0x80048B24: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80048B28: addu        $t3, $t3, $s1
    ctx->r11 = ADD32(ctx->r11, ctx->r17);
    // 0x80048B2C: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80048B30: addu        $t3, $t3, $s1
    ctx->r11 = ADD32(ctx->r11, ctx->r17);
    // 0x80048B34: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80048B38: addu        $t3, $t3, $s1
    ctx->r11 = ADD32(ctx->r11, ctx->r17);
    // 0x80048B3C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80048B40: addiu       $t4, $t4, -0x2CF0
    ctx->r12 = ADD32(ctx->r12, -0X2CF0);
    // 0x80048B44: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80048B48: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x80048B4C: lhu         $t5, 0x10($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X10);
    // 0x80048B50: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80048B54: ori         $t6, $t5, 0x40
    ctx->r14 = ctx->r13 | 0X40;
    // 0x80048B58: b           L_80048B64
    // 0x80048B5C: sh          $t6, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r14;
        goto L_80048B64;
    // 0x80048B5C: sh          $t6, 0x10($v1)
    MEM_H(0X10, ctx->r3) = ctx->r14;
L_80048B60:
    // 0x80048B60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80048B64:
    // 0x80048B64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80048B68: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80048B6C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80048B70: jr          $ra
    // 0x80048B74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80048B74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80048B78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048B78: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80048B7C: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80048B80: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80048B84: addu        $v0, $v1, $t6
    ctx->r2 = ADD32(ctx->r3, ctx->r14);
    // 0x80048B88: lb          $t9, 0x71($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X71);
    // 0x80048B8C: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x80048B90: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x80048B94: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80048B98: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80048B9C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x80048BA0: sw          $a1, 0x80($t1)
    MEM_W(0X80, ctx->r9) = ctx->r5;
    // 0x80048BA4: lb          $t2, 0x71($v0)
    ctx->r10 = MEM_B(ctx->r2, 0X71);
    // 0x80048BA8: nop

    // 0x80048BAC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80048BB0: andi        $t4, $t3, 0x7
    ctx->r12 = ctx->r11 & 0X7;
    // 0x80048BB4: jr          $ra
    // 0x80048BB8: sb          $t4, 0x71($v0)
    MEM_B(0X71, ctx->r2) = ctx->r12;
    return;
    // 0x80048BB8: sb          $t4, 0x71($v0)
    MEM_B(0X71, ctx->r2) = ctx->r12;
;}
RECOMP_FUNC void func_80048BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048BBC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80048BC0: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x80048BC4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80048BC8: addu        $t1, $v1, $t6
    ctx->r9 = ADD32(ctx->r3, ctx->r14);
    // 0x80048BCC: lb          $t2, 0x71($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X71);
    // 0x80048BD0: sll         $t9, $t6, 5
    ctx->r25 = S32(ctx->r14 << 5);
    // 0x80048BD4: addu        $t3, $t2, $a1
    ctx->r11 = ADD32(ctx->r10, ctx->r5);
    // 0x80048BD8: andi        $t4, $t3, 0x7
    ctx->r12 = ctx->r11 & 0X7;
    // 0x80048BDC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80048BE0: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x80048BE4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80048BE8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80048BEC: addu        $t6, $t0, $t5
    ctx->r14 = ADD32(ctx->r8, ctx->r13);
    // 0x80048BF0: lw          $v0, 0x80($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X80);
    // 0x80048BF4: jr          $ra
    // 0x80048BF8: nop

    return;
    // 0x80048BF8: nop

;}
RECOMP_FUNC void func_80048BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048BFC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80048C00: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80048C04: andi        $s1, $a0, 0xFF
    ctx->r17 = ctx->r4 & 0XFF;
    // 0x80048C08: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80048C0C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80048C10: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80048C14: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80048C18: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80048C1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80048C20: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    // 0x80048C24: jal         0x80047AE4
    // 0x80048C28: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80047AE4(rdram, ctx);
        goto after_0;
    // 0x80048C28: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80048C2C: beq         $v0, $zero, L_80048CD8
    if (ctx->r2 == 0) {
        // 0x80048C30: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80048CD8;
    }
    // 0x80048C30: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80048C34: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80048C38: addiu       $t7, $t7, -0x32B0
    ctx->r15 = ADD32(ctx->r15, -0X32B0);
    // 0x80048C3C: sll         $t6, $s1, 5
    ctx->r14 = S32(ctx->r17 << 5);
    // 0x80048C40: addu        $s4, $s1, $t7
    ctx->r20 = ADD32(ctx->r17, ctx->r15);
    // 0x80048C44: addiu       $s1, $sp, 0x40
    ctx->r17 = ADD32(ctx->r29, 0X40);
    // 0x80048C48: addu        $s3, $t6, $t7
    ctx->r19 = ADD32(ctx->r14, ctx->r15);
    // 0x80048C4C: addiu       $s2, $sp, 0x3C
    ctx->r18 = ADD32(ctx->r29, 0X3C);
L_80048C50:
    // 0x80048C50: lb          $t8, 0x71($s4)
    ctx->r24 = MEM_B(ctx->r20, 0X71);
    // 0x80048C54: nop

    // 0x80048C58: subu        $t9, $t8, $s0
    ctx->r25 = SUB32(ctx->r24, ctx->r16);
    // 0x80048C5C: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80048C60: andi        $t1, $t0, 0x7
    ctx->r9 = ctx->r8 & 0X7;
    // 0x80048C64: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80048C68: addu        $t3, $s3, $t2
    ctx->r11 = ADD32(ctx->r19, ctx->r10);
    // 0x80048C6C: lw          $a0, 0x80($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X80);
    // 0x80048C70: jal         0x80047AE4
    // 0x80048C74: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    func_80047AE4(rdram, ctx);
        goto after_1;
    // 0x80048C74: sw          $a0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r4;
    after_1:
    // 0x80048C78: beq         $v0, $zero, L_80048CCC
    if (ctx->r2 == 0) {
        // 0x80048C7C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80048CCC;
    }
    // 0x80048C7C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80048C80: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80048C84: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x80048C88: sll         $t9, $s0, 16
    ctx->r25 = S32(ctx->r16 << 16);
    // 0x80048C8C: beq         $t4, $a0, L_80048CBC
    if (ctx->r12 == ctx->r4) {
        // 0x80048C90: sra         $s0, $t9, 16
        ctx->r16 = S32(SIGNED(ctx->r25) >> 16);
            goto L_80048CBC;
    }
    // 0x80048C90: sra         $s0, $t9, 16
    ctx->r16 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80048C94: lh          $t5, 0x0($s1)
    ctx->r13 = MEM_H(ctx->r17, 0X0);
    // 0x80048C98: lh          $t6, 0x2($s2)
    ctx->r14 = MEM_H(ctx->r18, 0X2);
    // 0x80048C9C: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x80048CA0: bne         $t5, $t6, L_80048CC4
    if (ctx->r13 != ctx->r14) {
        // 0x80048CA4: nop
    
            goto L_80048CC4;
    }
    // 0x80048CA4: nop

    // 0x80048CA8: lh          $t7, 0x2($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X2);
    // 0x80048CAC: lh          $t8, 0x0($s2)
    ctx->r24 = MEM_H(ctx->r18, 0X0);
    // 0x80048CB0: nop

    // 0x80048CB4: bne         $t7, $t8, L_80048CC4
    if (ctx->r15 != ctx->r24) {
        // 0x80048CB8: nop
    
            goto L_80048CC4;
    }
    // 0x80048CB8: nop

L_80048CBC:
    // 0x80048CBC: b           L_80048CDC
    // 0x80048CC0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80048CDC;
    // 0x80048CC0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80048CC4:
    // 0x80048CC4: bne         $at, $zero, L_80048C50
    if (ctx->r1 != 0) {
        // 0x80048CC8: nop
    
            goto L_80048C50;
    }
    // 0x80048CC8: nop

L_80048CCC:
    // 0x80048CCC: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x80048CD0: b           L_80048CE0
    // 0x80048CD4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80048CE0;
    // 0x80048CD4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80048CD8:
    // 0x80048CD8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80048CDC:
    // 0x80048CDC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80048CE0:
    // 0x80048CE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80048CE4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80048CE8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80048CEC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80048CF0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80048CF4: jr          $ra
    // 0x80048CF8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80048CF8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80048CFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048CFC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80048D00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048D04: jal         0x80048964
    // 0x80048D08: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_80048964(rdram, ctx);
        goto after_0;
    // 0x80048D08: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x80048D0C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80048D10: lb          $t6, -0x309D($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X309D);
    // 0x80048D14: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80048D18: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x80048D1C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80048D20: lhu         $t8, 0x70F6($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X70F6);
    // 0x80048D24: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x80048D28: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80048D2C: bgez        $t8, L_80048D44
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80048D30: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80048D44;
    }
    // 0x80048D30: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80048D34: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80048D38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80048D3C: nop

    // 0x80048D40: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_80048D44:
    // 0x80048D44: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80048D48: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80048D4C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80048D50: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80048D54: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80048D58: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80048D5C: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80048D60: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80048D64: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80048D68: nop

    // 0x80048D6C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80048D70: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80048D74: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80048D78: lui         $at, 0x4012
    ctx->r1 = S32(0X4012 << 16);
    // 0x80048D7C: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80048D80: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80048D84: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80048D88: lui         $at, 0x4014
    ctx->r1 = S32(0X4014 << 16);
    // 0x80048D8C: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80048D90: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80048D94: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80048D98: mfc1        $t0, $f4
    ctx->r8 = (int32_t)ctx->f4.u32l;
    // 0x80048D9C: nop

    // 0x80048DA0: sh          $t0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r8;
    // 0x80048DA4: div.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = DIV_D(ctx->f10.d, ctx->f16.d);
    // 0x80048DA8: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80048DAC: nop

    // 0x80048DB0: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80048DB4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80048DB8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80048DBC: nop

    // 0x80048DC0: cvt.w.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_D(ctx->f18.d);
    // 0x80048DC4: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x80048DC8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80048DCC: jal         0x8003906C
    // 0x80048DD0: sh          $t2, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r10;
    func_8003906C(rdram, ctx);
        goto after_1;
    // 0x80048DD0: sh          $t2, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r10;
    after_1:
    // 0x80048DD4: beq         $v0, $zero, L_80048F30
    if (ctx->r2 == 0) {
        // 0x80048DD8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80048F30;
    }
    // 0x80048DD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80048DDC: lbu         $t3, 0x2B($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X2B);
    // 0x80048DE0: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x80048DE4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80048DE8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80048DEC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80048DF0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80048DF4: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x80048DF8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80048DFC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80048E00: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80048E04: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80048E08: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80048E0C: lhu         $t5, -0x2CE0($t5)
    ctx->r13 = MEM_HU(ctx->r13, -0X2CE0);
    // 0x80048E10: nop

    // 0x80048E14: andi        $t6, $t5, 0x5000
    ctx->r14 = ctx->r13 & 0X5000;
    // 0x80048E18: beq         $t6, $zero, L_80048E28
    if (ctx->r14 == 0) {
        // 0x80048E1C: nop
    
            goto L_80048E28;
    }
    // 0x80048E1C: nop

    // 0x80048E20: b           L_80048F30
    // 0x80048E24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80048F30;
    // 0x80048E24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80048E28:
    // 0x80048E28: jal         0x80048F74
    // 0x80048E2C: nop

    func_80048F74(rdram, ctx);
        goto after_2;
    // 0x80048E2C: nop

    after_2:
    // 0x80048E30: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80048E34: lhu         $v1, 0xB74($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0XB74);
    // 0x80048E38: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x80048E3C: sra         $t7, $a1, 16
    ctx->r15 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80048E40: bne         $v1, $zero, L_80048E68
    if (ctx->r3 != 0) {
        // 0x80048E44: or          $a1, $t7, $zero
        ctx->r5 = ctx->r15 | 0;
            goto L_80048E68;
    }
    // 0x80048E44: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80048E48: lh          $t8, 0x22($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X22);
    // 0x80048E4C: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x80048E50: lh          $t0, 0x20($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X20);
    // 0x80048E54: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80048E58: beq         $at, $zero, L_80048E68
    if (ctx->r1 == 0) {
        // 0x80048E5C: slt         $at, $t9, $t0
        ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
            goto L_80048E68;
    }
    // 0x80048E5C: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80048E60: bne         $at, $zero, L_80048E7C
    if (ctx->r1 != 0) {
        // 0x80048E64: lbu         $a0, 0x2B($sp)
        ctx->r4 = MEM_BU(ctx->r29, 0X2B);
            goto L_80048E7C;
    }
    // 0x80048E64: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
L_80048E68:
    // 0x80048E68: bne         $v1, $zero, L_80048E7C
    if (ctx->r3 != 0) {
        // 0x80048E6C: lbu         $a0, 0x2B($sp)
        ctx->r4 = MEM_BU(ctx->r29, 0X2B);
            goto L_80048E7C;
    }
    // 0x80048E6C: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    // 0x80048E70: bne         $v0, $zero, L_80048F30
    if (ctx->r2 != 0) {
        // 0x80048E74: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80048F30;
    }
    // 0x80048E74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80048E78: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
L_80048E7C:
    // 0x80048E7C: jal         0x80048F40
    // 0x80048E80: sh          $a1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r5;
    func_80048F40(rdram, ctx);
        goto after_3;
    // 0x80048E80: sh          $a1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r5;
    after_3:
    // 0x80048E84: lh          $a1, 0x1E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1E);
    // 0x80048E88: beq         $v0, $zero, L_80048E98
    if (ctx->r2 == 0) {
        // 0x80048E8C: nop
    
            goto L_80048E98;
    }
    // 0x80048E8C: nop

    // 0x80048E90: bne         $a1, $zero, L_80048EA4
    if (ctx->r5 != 0) {
        // 0x80048E94: lbu         $a0, 0x2B($sp)
        ctx->r4 = MEM_BU(ctx->r29, 0X2B);
            goto L_80048EA4;
    }
    // 0x80048E94: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
L_80048E98:
    // 0x80048E98: b           L_80048F30
    // 0x80048E9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80048F30;
    // 0x80048E9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80048EA0: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
L_80048EA4:
    // 0x80048EA4: jal         0x80048F40
    // 0x80048EA8: nop

    func_80048F40(rdram, ctx);
        goto after_4;
    // 0x80048EA8: nop

    after_4:
    // 0x80048EAC: lbu         $t2, 0x2B($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X2B);
    // 0x80048EB0: sll         $t4, $v0, 1
    ctx->r12 = S32(ctx->r2 << 1);
    // 0x80048EB4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80048EB8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80048EBC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80048EC0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80048EC4: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80048EC8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80048ECC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80048ED0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80048ED4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80048ED8: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80048EDC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80048EE0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80048EE4: lh          $t6, -0x2266($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X2266);
    // 0x80048EE8: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x80048EEC: nop

    // 0x80048EF0: subu        $v1, $t1, $t6
    ctx->r3 = SUB32(ctx->r9, ctx->r14);
    // 0x80048EF4: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x80048EF8: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80048EFC: slti        $at, $t8, 0x3C
    ctx->r1 = SIGNED(ctx->r24) < 0X3C ? 1 : 0;
    // 0x80048F00: beq         $at, $zero, L_80048F1C
    if (ctx->r1 == 0) {
        // 0x80048F04: nop
    
            goto L_80048F1C;
    }
    // 0x80048F04: nop

    // 0x80048F08: jal         0x80048FF4
    // 0x80048F0C: nop

    func_80048FF4(rdram, ctx);
        goto after_5;
    // 0x80048F0C: nop

    after_5:
    // 0x80048F10: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x80048F14: bne         $at, $zero, L_80048F30
    if (ctx->r1 != 0) {
        // 0x80048F18: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80048F30;
    }
    // 0x80048F18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80048F1C:
    // 0x80048F1C: jal         0x80048FF4
    // 0x80048F20: nop

    func_80048FF4(rdram, ctx);
        goto after_6;
    // 0x80048F20: nop

    after_6:
    // 0x80048F24: b           L_80048F30
    // 0x80048F28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80048F30;
    // 0x80048F28: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80048F2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80048F30:
    // 0x80048F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80048F34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80048F38: jr          $ra
    // 0x80048F3C: nop

    return;
    // 0x80048F3C: nop

;}
RECOMP_FUNC void func_80048F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048F40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80048F44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048F48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80048F4C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80048F50: jal         0x8003A568
    // 0x80048F54: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_8003A568(rdram, ctx);
        goto after_0;
    // 0x80048F54: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_0:
    // 0x80048F58: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80048F5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80048F60: subu        $v0, $t7, $v0
    ctx->r2 = SUB32(ctx->r15, ctx->r2);
    // 0x80048F64: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x80048F68: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80048F6C: jr          $ra
    // 0x80048F70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80048F70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80048F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048F74: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80048F78: lhu         $v0, 0x38D4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X38D4);
    // 0x80048F7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80048F80: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x80048F84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80048F88: bne         $t6, $zero, L_80048FA4
    if (ctx->r14 != 0) {
        // 0x80048F8C: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80048FA4;
    }
    // 0x80048F8C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80048F90: lui         $v0, 0x802C
    ctx->r2 = S32(0X802C << 16);
    // 0x80048F94: lhu         $v0, 0x38D6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X38D6);
    // 0x80048F98: nop

    // 0x80048F9C: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x80048FA0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80048FA4:
    // 0x80048FA4: bne         $v0, $zero, L_80048FE0
    if (ctx->r2 != 0) {
        // 0x80048FA8: lui         $t8, 0x8012
        ctx->r24 = S32(0X8012 << 16);
            goto L_80048FE0;
    }
    // 0x80048FA8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80048FAC: lhu         $t8, 0xB74($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0XB74);
    // 0x80048FB0: nop

    // 0x80048FB4: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80048FB8: bne         $t9, $zero, L_80048FD0
    if (ctx->r25 != 0) {
        // 0x80048FBC: nop
    
            goto L_80048FD0;
    }
    // 0x80048FBC: nop

    // 0x80048FC0: jal         0x8003906C
    // 0x80048FC4: nop

    func_8003906C(rdram, ctx);
        goto after_0;
    // 0x80048FC4: nop

    after_0:
    // 0x80048FC8: bne         $v0, $zero, L_80048FD8
    if (ctx->r2 != 0) {
        // 0x80048FCC: nop
    
            goto L_80048FD8;
    }
    // 0x80048FCC: nop

L_80048FD0:
    // 0x80048FD0: b           L_80048FE4
    // 0x80048FD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80048FE4;
    // 0x80048FD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80048FD8:
    // 0x80048FD8: b           L_80048FE4
    // 0x80048FDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80048FE4;
    // 0x80048FDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80048FE0:
    // 0x80048FE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80048FE4:
    // 0x80048FE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80048FE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80048FEC: jr          $ra
    // 0x80048FF0: nop

    return;
    // 0x80048FF0: nop

;}
RECOMP_FUNC void func_80048FF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80048FF4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80048FF8: lb          $t6, -0x309D($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X309D);
    // 0x80048FFC: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x80049000: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x80049004: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80049008: lhu         $t8, 0x70F8($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X70F8);
    // 0x8004900C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80049010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80049014: jal         0x80048964
    // 0x80049018: sh          $t8, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r24;
    func_80048964(rdram, ctx);
        goto after_0;
    // 0x80049018: sh          $t8, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r24;
    after_0:
    // 0x8004901C: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x80049020: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80049024: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80049028: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8004902C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80049030: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80049034: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80049038: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004903C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x80049040: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80049044: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80049048: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8004904C: nop

    // 0x80049050: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80049054: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80049058: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8004905C: nop

    // 0x80049060: cvt.w.s     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80049064: mfc1        $a0, $f8
    ctx->r4 = (int32_t)ctx->f8.u32l;
    // 0x80049068: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8004906C: jal         0x8001D4C0
    // 0x80049070: nop

    func_8001D4C0(rdram, ctx);
        goto after_1;
    // 0x80049070: nop

    after_1:
    // 0x80049074: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80049078: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8004907C: lbu         $a0, 0x7398($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X7398);
    // 0x80049080: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80049084: jal         0x8001D4C0
    // 0x80049088: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_8001D4C0(rdram, ctx);
        goto after_2;
    // 0x80049088: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x8004908C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80049090: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x80049094: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80049098: jr          $ra
    // 0x8004909C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8004909C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800490A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800490A0: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x800490A4: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x800490A8: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x800490AC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800490B0: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x800490B4: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800490B8: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x800490BC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800490C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800490C4: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x800490C8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800490CC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800490D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800490D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800490D8: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x800490DC: addiu       $t7, $t6, 0x83A
    ctx->r15 = ADD32(ctx->r14, 0X83A);
    // 0x800490E0: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x800490E4: jal         0x8001D8A8
    // 0x800490E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001D8A8(rdram, ctx);
        goto after_0;
    // 0x800490E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800490EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800490F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800490F4: jr          $ra
    // 0x800490F8: nop

    return;
    // 0x800490F8: nop

;}
RECOMP_FUNC void func_800490FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800490FC: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x80049100: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x80049104: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x80049108: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8004910C: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x80049110: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80049114: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x80049118: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8004911C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80049120: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x80049124: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80049128: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8004912C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80049130: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80049134: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x80049138: addiu       $t7, $t6, 0x83B
    ctx->r15 = ADD32(ctx->r14, 0X83B);
    // 0x8004913C: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x80049140: jal         0x8001D8A8
    // 0x80049144: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001D8A8(rdram, ctx);
        goto after_0;
    // 0x80049144: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80049148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004914C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80049150: jr          $ra
    // 0x80049154: nop

    return;
    // 0x80049154: nop

;}
RECOMP_FUNC void func_80049158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049158: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x8004915C: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x80049160: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x80049164: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80049168: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x8004916C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80049170: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x80049174: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80049178: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004917C: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x80049180: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80049184: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80049188: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004918C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80049190: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x80049194: addiu       $t7, $t6, 0x83C
    ctx->r15 = ADD32(ctx->r14, 0X83C);
    // 0x80049198: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x8004919C: jal         0x8001D8A8
    // 0x800491A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001D8A8(rdram, ctx);
        goto after_0;
    // 0x800491A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800491A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800491A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800491AC: jr          $ra
    // 0x800491B0: nop

    return;
    // 0x800491B0: nop

;}
RECOMP_FUNC void func_800491B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800491B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800491B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800491BC: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x800491C0: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800491C4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800491C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800491CC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800491D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800491D4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800491D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800491DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800491E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800491E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800491E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800491EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x800491F0: addiu       $t8, $t7, 0x83E
    ctx->r24 = ADD32(ctx->r15, 0X83E);
    // 0x800491F4: addiu       $t9, $t9, -0x2CF0
    ctx->r25 = ADD32(ctx->r25, -0X2CF0);
    // 0x800491F8: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x800491FC: jal         0x8001D938
    // 0x80049200: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001D938(rdram, ctx);
        goto after_0;
    // 0x80049200: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80049204: lbu         $t0, 0x1B($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1B);
    // 0x80049208: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8004920C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80049210: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80049214: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80049218: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8004921C: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80049220: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80049224: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80049228: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8004922C: lb          $t3, 0x1F($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X1F);
    // 0x80049230: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80049234: addiu       $t2, $t2, -0x2CF0
    ctx->r10 = ADD32(ctx->r10, -0X2CF0);
    // 0x80049238: addu        $v1, $t1, $t2
    ctx->r3 = ADD32(ctx->r9, ctx->r10);
    // 0x8004923C: addu        $t4, $v1, $t3
    ctx->r12 = ADD32(ctx->r3, ctx->r11);
    // 0x80049240: lbu         $t5, 0x308($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X308);
    // 0x80049244: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80049248: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8004924C: addu        $a0, $v1, $t6
    ctx->r4 = ADD32(ctx->r3, ctx->r14);
    // 0x80049250: jal         0x8001D8A8
    // 0x80049254: addiu       $a0, $a0, 0x849
    ctx->r4 = ADD32(ctx->r4, 0X849);
    func_8001D8A8(rdram, ctx);
        goto after_1;
    // 0x80049254: addiu       $a0, $a0, 0x849
    ctx->r4 = ADD32(ctx->r4, 0X849);
    after_1:
    // 0x80049258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004925C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80049260: jr          $ra
    // 0x80049264: nop

    return;
    // 0x80049264: nop

;}
RECOMP_FUNC void func_80049268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049268: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x8004926C: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x80049270: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x80049274: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80049278: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x8004927C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80049280: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x80049284: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80049288: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004928C: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x80049290: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80049294: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80049298: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004929C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800492A0: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x800492A4: addiu       $t7, $t6, 0x840
    ctx->r15 = ADD32(ctx->r14, 0X840);
    // 0x800492A8: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x800492AC: jal         0x8001D938
    // 0x800492B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001D938(rdram, ctx);
        goto after_0;
    // 0x800492B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800492B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800492B8: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x800492BC: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x800492C0: jr          $ra
    // 0x800492C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800492C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800492C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800492C8: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x800492CC: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x800492D0: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x800492D4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800492D8: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x800492DC: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800492E0: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x800492E4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800492E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800492EC: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x800492F0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800492F4: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800492F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800492FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80049300: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x80049304: addiu       $t7, $t6, 0x844
    ctx->r15 = ADD32(ctx->r14, 0X844);
    // 0x80049308: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x8004930C: jal         0x8001D938
    // 0x80049310: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001D938(rdram, ctx);
        goto after_0;
    // 0x80049310: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80049314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80049318: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x8004931C: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80049320: jr          $ra
    // 0x80049324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80049324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80049328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049328: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x8004932C: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x80049330: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x80049334: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80049338: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x8004933C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80049340: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x80049344: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80049348: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004934C: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x80049350: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80049354: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80049358: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004935C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80049360: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x80049364: addiu       $t7, $t6, 0x846
    ctx->r15 = ADD32(ctx->r14, 0X846);
    // 0x80049368: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x8004936C: jal         0x8001D938
    // 0x80049370: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001D938(rdram, ctx);
        goto after_0;
    // 0x80049370: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80049374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80049378: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x8004937C: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80049380: jr          $ra
    // 0x80049384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80049384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80049388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049388: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004938C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80049390: lb          $t8, 0x23($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X23);
    // 0x80049394: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80049398: lb          $t2, -0x32A1($t2)
    ctx->r10 = MEM_B(ctx->r10, -0X32A1);
    // 0x8004939C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800493A0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800493A4: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800493A8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800493AC: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800493B0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800493B4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800493B8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x800493BC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800493C0: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x800493C4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800493C8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800493CC: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800493D0: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x800493D4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800493D8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800493DC: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x800493E0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800493E4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800493E8: addu        $t0, $t9, $t7
    ctx->r8 = ADD32(ctx->r25, ctx->r15);
    // 0x800493EC: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800493F0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800493F4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800493F8: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x800493FC: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80049400: lbu         $t1, -0x29E8($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X29E8);
    // 0x80049404: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x80049408: addiu       $t4, $t4, -0x2F80
    ctx->r12 = ADD32(ctx->r12, -0X2F80);
    // 0x8004940C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80049410: addu        $v1, $t3, $t4
    ctx->r3 = ADD32(ctx->r11, ctx->r12);
    // 0x80049414: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80049418: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x8004941C: jal         0x80039028
    // 0x80049420: sh          $t1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r9;
    func_80039028(rdram, ctx);
        goto after_0;
    // 0x80049420: sh          $t1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r9;
    after_0:
    // 0x80049424: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80049428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004942C: bne         $v0, $zero, L_80049484
    if (ctx->r2 != 0) {
        // 0x80049430: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80049484;
    }
    // 0x80049430: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80049434: lb          $t5, 0x23($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X23);
    // 0x80049438: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x8004943C: addu        $t6, $v1, $t5
    ctx->r14 = ADD32(ctx->r3, ctx->r13);
    // 0x80049440: lb          $t7, 0x7($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X7);
    // 0x80049444: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80049448: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8004944C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80049450: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80049454: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80049458: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8004945C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80049460: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80049464: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80049468: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x8004946C: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x80049470: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x80049474: lh          $v0, 0x4AE($t2)
    ctx->r2 = MEM_H(ctx->r10, 0X4AE);
    // 0x80049478: b           L_80049484
    // 0x8004947C: nop

        goto L_80049484;
    // 0x8004947C: nop

    // 0x80049480: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80049484:
    // 0x80049484: jr          $ra
    // 0x80049488: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80049488: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004948C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004948C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80049490: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80049494: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80049498: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004949C: or          $t6, $a0, $zero
    ctx->r14 = ctx->r4 | 0;
    // 0x800494A0: or          $t7, $a1, $zero
    ctx->r15 = ctx->r5 | 0;
    // 0x800494A4: andi        $a1, $t7, 0xFF
    ctx->r5 = ctx->r15 & 0XFF;
    // 0x800494A8: jal         0x8004DCB0
    // 0x800494AC: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    func_8004DCB0(rdram, ctx);
        goto after_0;
    // 0x800494AC: andi        $a0, $t6, 0xFF
    ctx->r4 = ctx->r14 & 0XFF;
    after_0:
    // 0x800494B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x800494B4: jal         0x8004D880
    // 0x800494B8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_8004D880(rdram, ctx);
        goto after_1;
    // 0x800494B8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
    // 0x800494BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800494C0: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x800494C4: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800494C8: jr          $ra
    // 0x800494CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x800494CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800494D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800494D0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800494D4: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x800494D8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x800494DC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800494E0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800494E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800494E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800494EC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800494F0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800494F4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800494F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800494FC: addiu       $a3, $a3, -0x2CF0
    ctx->r7 = ADD32(ctx->r7, -0X2CF0);
    // 0x80049500: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80049504: lhu         $t9, 0x8($a3)
    ctx->r25 = MEM_HU(ctx->r7, 0X8);
    // 0x80049508: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8004950C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80049510: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80049514: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80049518: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8004951C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80049520: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x80049524: andi        $t0, $t9, 0x1000
    ctx->r8 = ctx->r25 & 0X1000;
    // 0x80049528: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8004952C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80049530: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80049534: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80049538: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8004953C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80049540: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80049544: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80049548: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x8004954C: beq         $t0, $zero, L_8004955C
    if (ctx->r8 == 0) {
        // 0x80049550: addu        $s4, $t7, $t8
        ctx->r20 = ADD32(ctx->r15, ctx->r24);
            goto L_8004955C;
    }
    // 0x80049550: addu        $s4, $t7, $t8
    ctx->r20 = ADD32(ctx->r15, ctx->r24);
    // 0x80049554: b           L_80049574
    // 0x80049558: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
        goto L_80049574;
    // 0x80049558: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
L_8004955C:
    // 0x8004955C: lhu         $t1, 0xA9C($a3)
    ctx->r9 = MEM_HU(ctx->r7, 0XA9C);
    // 0x80049560: nop

    // 0x80049564: andi        $t2, $t1, 0x1000
    ctx->r10 = ctx->r9 & 0X1000;
    // 0x80049568: beq         $t2, $zero, L_80049574
    if (ctx->r10 == 0) {
        // 0x8004956C: nop
    
            goto L_80049574;
    }
    // 0x8004956C: nop

    // 0x80049570: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80049574:
    // 0x80049574: beq         $s3, $zero, L_80049580
    if (ctx->r19 == 0) {
        // 0x80049578: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80049580;
    }
    // 0x80049578: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8004957C: bne         $s3, $at, L_80049718
    if (ctx->r19 != ctx->r1) {
        // 0x80049580: addiu       $a2, $zero, 0xA94
        ctx->r6 = ADD32(0, 0XA94);
            goto L_80049718;
    }
L_80049580:
    // 0x80049580: addiu       $a2, $zero, 0xA94
    ctx->r6 = ADD32(0, 0XA94);
    // 0x80049584: multu       $s3, $a2
    result = U64(U32(ctx->r19)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80049588: xori        $v0, $s3, 0x1
    ctx->r2 = ctx->r19 ^ 0X1;
    // 0x8004958C: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x80049590: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80049594: sll         $a1, $v0, 16
    ctx->r5 = S32(ctx->r2 << 16);
    // 0x80049598: sra         $t3, $a1, 16
    ctx->r11 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8004959C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x800495A0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800495A4: addu        $t3, $t3, $a1
    ctx->r11 = ADD32(ctx->r11, ctx->r5);
    // 0x800495A8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800495AC: addu        $t3, $t3, $a1
    ctx->r11 = ADD32(ctx->r11, ctx->r5);
    // 0x800495B0: sll         $t3, $t3, 3
    ctx->r11 = S32(ctx->r11 << 3);
    // 0x800495B4: mflo        $t4
    ctx->r12 = lo;
    // 0x800495B8: addu        $t5, $a3, $t4
    ctx->r13 = ADD32(ctx->r7, ctx->r12);
    // 0x800495BC: sw          $t5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r13;
    // 0x800495C0: multu       $t8, $a2
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800495C4: lhu         $v1, 0xA($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0XA);
    // 0x800495C8: addu        $t3, $t3, $a1
    ctx->r11 = ADD32(ctx->r11, ctx->r5);
    // 0x800495CC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800495D0: addu        $t3, $t3, $a1
    ctx->r11 = ADD32(ctx->r11, ctx->r5);
    // 0x800495D4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800495D8: lui         $s6, 0x8012
    ctx->r22 = S32(0X8012 << 16);
    // 0x800495DC: addiu       $s6, $s6, 0xB88
    ctx->r22 = ADD32(ctx->r22, 0XB88);
    // 0x800495E0: addu        $s5, $a3, $t3
    ctx->r21 = ADD32(ctx->r7, ctx->r11);
    // 0x800495E4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800495E8: addiu       $fp, $zero, 0x6
    ctx->r30 = ADD32(0, 0X6);
    // 0x800495EC: addiu       $s7, $zero, 0xFF
    ctx->r23 = ADD32(0, 0XFF);
    // 0x800495F0: mflo        $t9
    ctx->r25 = lo;
    // 0x800495F4: addu        $t0, $a3, $t9
    ctx->r8 = ADD32(ctx->r7, ctx->r25);
    // 0x800495F8: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x800495FC: lhu         $a0, 0xA($t0)
    ctx->r4 = MEM_HU(ctx->r8, 0XA);
    // 0x80049600: nop

    // 0x80049604: addu        $t2, $v1, $a0
    ctx->r10 = ADD32(ctx->r3, ctx->r4);
    // 0x80049608: blez        $t2, L_800496E8
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8004960C: sll         $t4, $s1, 2
        ctx->r12 = S32(ctx->r17 << 2);
            goto L_800496E8;
    }
    // 0x8004960C: sll         $t4, $s1, 2
    ctx->r12 = S32(ctx->r17 << 2);
L_80049610:
    // 0x80049610: addu        $v0, $s6, $t4
    ctx->r2 = ADD32(ctx->r22, ctx->r12);
    // 0x80049614: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x80049618: lbu         $s0, 0x1($v0)
    ctx->r16 = MEM_BU(ctx->r2, 0X1);
    // 0x8004961C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x80049620: bne         $s3, $t6, L_800496B8
    if (ctx->r19 != ctx->r14) {
        // 0x80049624: nop
    
            goto L_800496B8;
    }
    // 0x80049624: nop

    // 0x80049628: beq         $s0, $s7, L_800496B8
    if (ctx->r16 == ctx->r23) {
        // 0x8004962C: sll         $t7, $s3, 2
        ctx->r15 = S32(ctx->r19 << 2);
            goto L_800496B8;
    }
    // 0x8004962C: sll         $t7, $s3, 2
    ctx->r15 = S32(ctx->r19 << 2);
    // 0x80049630: addu        $t7, $t7, $s3
    ctx->r15 = ADD32(ctx->r15, ctx->r19);
    // 0x80049634: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80049638: addu        $t7, $t7, $s3
    ctx->r15 = ADD32(ctx->r15, ctx->r19);
    // 0x8004963C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80049640: addu        $t7, $t7, $s3
    ctx->r15 = ADD32(ctx->r15, ctx->r19);
    // 0x80049644: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80049648: addu        $t7, $t7, $s3
    ctx->r15 = ADD32(ctx->r15, ctx->r19);
    // 0x8004964C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80049650: addu        $t8, $a3, $t7
    ctx->r24 = ADD32(ctx->r7, ctx->r15);
    // 0x80049654: sll         $t9, $s0, 1
    ctx->r25 = S32(ctx->r16 << 1);
    // 0x80049658: addu        $a0, $t8, $t9
    ctx->r4 = ADD32(ctx->r24, ctx->r25);
    // 0x8004965C: addiu       $a0, $a0, 0x848
    ctx->r4 = ADD32(ctx->r4, 0X848);
    // 0x80049660: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80049664: jal         0x8001D8F0
    // 0x80049668: addu        $s2, $s4, $s3
    ctx->r18 = ADD32(ctx->r20, ctx->r19);
    func_8001D8F0(rdram, ctx);
        goto after_0;
    // 0x80049668: addu        $s2, $s4, $s3
    ctx->r18 = ADD32(ctx->r20, ctx->r19);
    after_0:
    // 0x8004966C: multu       $s0, $fp
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r30)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80049670: lb          $t0, 0x7($s2)
    ctx->r8 = MEM_B(ctx->r18, 0X7);
    // 0x80049674: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80049678: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8004967C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80049680: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80049684: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80049688: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8004968C: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80049690: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80049694: addu        $t2, $s4, $t1
    ctx->r10 = ADD32(ctx->r20, ctx->r9);
    // 0x80049698: mflo        $t3
    ctx->r11 = lo;
    // 0x8004969C: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    // 0x800496A0: jal         0x8001D97C
    // 0x800496A4: addiu       $a0, $a0, 0x4AE
    ctx->r4 = ADD32(ctx->r4, 0X4AE);
    func_8001D97C(rdram, ctx);
        goto after_1;
    // 0x800496A4: addiu       $a0, $a0, 0x4AE
    ctx->r4 = ADD32(ctx->r4, 0X4AE);
    after_1:
    // 0x800496A8: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x800496AC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800496B0: lhu         $v1, 0xA($t4)
    ctx->r3 = MEM_HU(ctx->r12, 0XA);
    // 0x800496B4: addiu       $a3, $a3, -0x2CF0
    ctx->r7 = ADD32(ctx->r7, -0X2CF0);
L_800496B8:
    // 0x800496B8: lhu         $t7, 0xA($s5)
    ctx->r15 = MEM_HU(ctx->r21, 0XA);
    // 0x800496BC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800496C0: sll         $t5, $s1, 16
    ctx->r13 = S32(ctx->r17 << 16);
    // 0x800496C4: sra         $s1, $t5, 16
    ctx->r17 = S32(SIGNED(ctx->r13) >> 16);
    // 0x800496C8: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x800496CC: slt         $at, $s1, $t8
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x800496D0: bne         $at, $zero, L_80049610
    if (ctx->r1 != 0) {
        // 0x800496D4: sll         $t4, $s1, 2
        ctx->r12 = S32(ctx->r17 << 2);
            goto L_80049610;
    }
    // 0x800496D4: sll         $t4, $s1, 2
    ctx->r12 = S32(ctx->r17 << 2);
    // 0x800496D8: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x800496DC: nop

    // 0x800496E0: lhu         $a0, 0xA($t9)
    ctx->r4 = MEM_HU(ctx->r25, 0XA);
    // 0x800496E4: nop

L_800496E8:
    // 0x800496E8: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x800496EC: beq         $at, $zero, L_80049700
    if (ctx->r1 == 0) {
        // 0x800496F0: addiu       $t0, $zero, 0x3
        ctx->r8 = ADD32(0, 0X3);
            goto L_80049700;
    }
    // 0x800496F0: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800496F4: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x800496F8: b           L_8004970C
    // 0x800496FC: sh          $t0, 0xA($t1)
    MEM_H(0XA, ctx->r9) = ctx->r8;
        goto L_8004970C;
    // 0x800496FC: sh          $t0, 0xA($t1)
    MEM_H(0XA, ctx->r9) = ctx->r8;
L_80049700:
    // 0x80049700: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80049704: nop

    // 0x80049708: sh          $a0, 0xA($t2)
    MEM_H(0XA, ctx->r10) = ctx->r4;
L_8004970C:
    // 0x8004970C: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x80049710: nop

    // 0x80049714: sh          $zero, 0xA($t3)
    MEM_H(0XA, ctx->r11) = 0;
L_80049718:
    // 0x80049718: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8004971C: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x80049720: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80049724: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80049728: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8004972C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80049730: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80049734: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80049738: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8004973C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80049740: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80049744: jr          $ra
    // 0x80049748: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80049748: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8004974C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004974C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80049750: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80049754: jal         0x80039028
    // 0x80049758: nop

    func_80039028(rdram, ctx);
        goto after_0;
    // 0x80049758: nop

    after_0:
    // 0x8004975C: bne         $v0, $zero, L_80049780
    if (ctx->r2 != 0) {
        // 0x80049760: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_80049780;
    }
    // 0x80049760: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80049764: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80049768: lb          $a1, 0x418($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X418);
    // 0x8004976C: lb          $a0, -0x32A1($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X32A1);
    // 0x80049770: jal         0x80049794
    // 0x80049774: nop

    func_80049794(rdram, ctx);
        goto after_1;
    // 0x80049774: nop

    after_1:
    // 0x80049778: b           L_80049788
    // 0x8004977C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80049788;
    // 0x8004977C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80049780:
    // 0x80049780: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80049784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80049788:
    // 0x80049788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004978C: jr          $ra
    // 0x80049790: nop

    return;
    // 0x80049790: nop

;}
RECOMP_FUNC void func_80049794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049794: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80049798: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8004979C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x800497A0: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x800497A4: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800497A8: bne         $t7, $zero, L_800497B8
    if (ctx->r15 != 0) {
        // 0x800497AC: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_800497B8;
    }
    // 0x800497AC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800497B0: jr          $ra
    // 0x800497B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800497B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800497B8:
    // 0x800497B8: slti        $at, $a1, 0x6
    ctx->r1 = SIGNED(ctx->r5) < 0X6 ? 1 : 0;
    // 0x800497BC: beq         $at, $zero, L_800497D0
    if (ctx->r1 == 0) {
        // 0x800497C0: slti        $at, $a1, 0xA
        ctx->r1 = SIGNED(ctx->r5) < 0XA ? 1 : 0;
            goto L_800497D0;
    }
    // 0x800497C0: slti        $at, $a1, 0xA
    ctx->r1 = SIGNED(ctx->r5) < 0XA ? 1 : 0;
    // 0x800497C4: jr          $ra
    // 0x800497C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x800497C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800497CC: slti        $at, $a1, 0xA
    ctx->r1 = SIGNED(ctx->r5) < 0XA ? 1 : 0;
L_800497D0:
    // 0x800497D0: beq         $at, $zero, L_800497E0
    if (ctx->r1 == 0) {
        // 0x800497D4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_800497E0;
    }
    // 0x800497D4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800497D8: jr          $ra
    // 0x800497DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x800497DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_800497E0:
    // 0x800497E0: jr          $ra
    // 0x800497E4: nop

    return;
    // 0x800497E4: nop

;}
RECOMP_FUNC void func_800497E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800497E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800497EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800497F0: jal         0x8004974C
    // 0x800497F4: nop

    func_8004974C(rdram, ctx);
        goto after_0;
    // 0x800497F4: nop

    after_0:
    // 0x800497F8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800497FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80049800: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80049804: lb          $v0, 0x73A4($at)
    ctx->r2 = MEM_B(ctx->r1, 0X73A4);
    // 0x80049808: jr          $ra
    // 0x8004980C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8004980C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80049810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80049814: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80049818: jal         0x8004974C
    // 0x8004981C: nop

    func_8004974C(rdram, ctx);
        goto after_0;
    // 0x8004981C: nop

    after_0:
    // 0x80049820: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80049824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80049828: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8004982C: lb          $v0, 0x73A8($at)
    ctx->r2 = MEM_B(ctx->r1, 0X73A8);
    // 0x80049830: jr          $ra
    // 0x80049834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80049834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80049838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049838: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8004983C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80049840: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80049844: slti        $at, $a0, 0x18
    ctx->r1 = SIGNED(ctx->r4) < 0X18 ? 1 : 0;
    // 0x80049848: beq         $at, $zero, L_8004985C
    if (ctx->r1 == 0) {
        // 0x8004984C: slti        $at, $a0, 0x1B
        ctx->r1 = SIGNED(ctx->r4) < 0X1B ? 1 : 0;
            goto L_8004985C;
    }
    // 0x8004984C: slti        $at, $a0, 0x1B
    ctx->r1 = SIGNED(ctx->r4) < 0X1B ? 1 : 0;
    // 0x80049850: jr          $ra
    // 0x80049854: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80049854: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80049858: slti        $at, $a0, 0x1B
    ctx->r1 = SIGNED(ctx->r4) < 0X1B ? 1 : 0;
L_8004985C:
    // 0x8004985C: beq         $at, $zero, L_80049870
    if (ctx->r1 == 0) {
        // 0x80049860: slti        $at, $a0, 0x1E
        ctx->r1 = SIGNED(ctx->r4) < 0X1E ? 1 : 0;
            goto L_80049870;
    }
    // 0x80049860: slti        $at, $a0, 0x1E
    ctx->r1 = SIGNED(ctx->r4) < 0X1E ? 1 : 0;
    // 0x80049864: jr          $ra
    // 0x80049868: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80049868: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004986C: slti        $at, $a0, 0x1E
    ctx->r1 = SIGNED(ctx->r4) < 0X1E ? 1 : 0;
L_80049870:
    // 0x80049870: beq         $at, $zero, L_80049884
    if (ctx->r1 == 0) {
        // 0x80049874: slti        $at, $a0, 0x24
        ctx->r1 = SIGNED(ctx->r4) < 0X24 ? 1 : 0;
            goto L_80049884;
    }
    // 0x80049874: slti        $at, $a0, 0x24
    ctx->r1 = SIGNED(ctx->r4) < 0X24 ? 1 : 0;
    // 0x80049878: jr          $ra
    // 0x8004987C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x8004987C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80049880: slti        $at, $a0, 0x24
    ctx->r1 = SIGNED(ctx->r4) < 0X24 ? 1 : 0;
L_80049884:
    // 0x80049884: beq         $at, $zero, L_80049894
    if (ctx->r1 == 0) {
        // 0x80049888: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80049894;
    }
    // 0x80049888: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004988C: jr          $ra
    // 0x80049890: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    return;
    // 0x80049890: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80049894:
    // 0x80049894: jr          $ra
    // 0x80049898: nop

    return;
    // 0x80049898: nop

;}
RECOMP_FUNC void func_8004989C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004989C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x800498A0: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800498A4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800498A8: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x800498AC: lb          $v0, 0x73AC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X73AC);
    // 0x800498B0: jr          $ra
    // 0x800498B4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x800498B4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_800498B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800498B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800498BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800498C0: jal         0x8004974C
    // 0x800498C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8004974C(rdram, ctx);
        goto after_0;
    // 0x800498C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x800498C8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800498CC: bne         $v0, $at, L_800498FC
    if (ctx->r2 != ctx->r1) {
        // 0x800498D0: nop
    
            goto L_800498FC;
    }
    // 0x800498D0: nop

    // 0x800498D4: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x800498D8: jal         0x800499F4
    // 0x800498DC: nop

    func_800499F4(rdram, ctx);
        goto after_1;
    // 0x800498DC: nop

    after_1:
    // 0x800498E0: bgez        $v0, L_800498F0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800498E4: sra         $t6, $v0, 2
        ctx->r14 = S32(SIGNED(ctx->r2) >> 2);
            goto L_800498F0;
    }
    // 0x800498E4: sra         $t6, $v0, 2
    ctx->r14 = S32(SIGNED(ctx->r2) >> 2);
    // 0x800498E8: addiu       $at, $v0, 0x3
    ctx->r1 = ADD32(ctx->r2, 0X3);
    // 0x800498EC: sra         $t6, $at, 2
    ctx->r14 = S32(SIGNED(ctx->r1) >> 2);
L_800498F0:
    // 0x800498F0: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x800498F4: b           L_80049944
    // 0x800498F8: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
        goto L_80049944;
    // 0x800498F8: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
L_800498FC:
    // 0x800498FC: jal         0x800497E8
    // 0x80049900: nop

    func_800497E8(rdram, ctx);
        goto after_2;
    // 0x80049900: nop

    after_2:
    // 0x80049904: lh          $t9, 0x1A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1A);
    // 0x80049908: nop

    // 0x8004990C: div         $zero, $t9, $v0
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r2)));
    // 0x80049910: bne         $v0, $zero, L_8004991C
    if (ctx->r2 != 0) {
        // 0x80049914: nop
    
            goto L_8004991C;
    }
    // 0x80049914: nop

    // 0x80049918: break       7
    do_break(2147784984);
L_8004991C:
    // 0x8004991C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80049920: bne         $v0, $at, L_80049934
    if (ctx->r2 != ctx->r1) {
        // 0x80049924: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80049934;
    }
    // 0x80049924: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80049928: bne         $t9, $at, L_80049934
    if (ctx->r25 != ctx->r1) {
        // 0x8004992C: nop
    
            goto L_80049934;
    }
    // 0x8004992C: nop

    // 0x80049930: break       6
    do_break(2147785008);
L_80049934:
    // 0x80049934: mflo        $v0
    ctx->r2 = lo;
    // 0x80049938: sll         $t0, $v0, 16
    ctx->r8 = S32(ctx->r2 << 16);
    // 0x8004993C: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80049940: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_80049944:
    // 0x80049944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80049948: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004994C: jr          $ra
    // 0x80049950: nop

    return;
    // 0x80049950: nop

;}
RECOMP_FUNC void func_80049954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049954: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80049958: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004995C: jal         0x8004974C
    // 0x80049960: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8004974C(rdram, ctx);
        goto after_0;
    // 0x80049960: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80049964: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80049968: bne         $v0, $at, L_8004999C
    if (ctx->r2 != ctx->r1) {
        // 0x8004996C: nop
    
            goto L_8004999C;
    }
    // 0x8004996C: nop

    // 0x80049970: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x80049974: jal         0x800499F4
    // 0x80049978: nop

    func_800499F4(rdram, ctx);
        goto after_1;
    // 0x80049978: nop

    after_1:
    // 0x8004997C: bgez        $v0, L_80049990
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80049980: andi        $t6, $v0, 0x3
        ctx->r14 = ctx->r2 & 0X3;
            goto L_80049990;
    }
    // 0x80049980: andi        $t6, $v0, 0x3
    ctx->r14 = ctx->r2 & 0X3;
    // 0x80049984: beq         $t6, $zero, L_80049990
    if (ctx->r14 == 0) {
        // 0x80049988: nop
    
            goto L_80049990;
    }
    // 0x80049988: nop

    // 0x8004998C: addiu       $t6, $t6, -0x4
    ctx->r14 = ADD32(ctx->r14, -0X4);
L_80049990:
    // 0x80049990: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x80049994: b           L_800499E4
    // 0x80049998: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
        goto L_800499E4;
    // 0x80049998: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
L_8004999C:
    // 0x8004999C: jal         0x800497E8
    // 0x800499A0: nop

    func_800497E8(rdram, ctx);
        goto after_2;
    // 0x800499A0: nop

    after_2:
    // 0x800499A4: lh          $t9, 0x1A($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1A);
    // 0x800499A8: nop

    // 0x800499AC: div         $zero, $t9, $v0
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r2)));
    // 0x800499B0: bne         $v0, $zero, L_800499BC
    if (ctx->r2 != 0) {
        // 0x800499B4: nop
    
            goto L_800499BC;
    }
    // 0x800499B4: nop

    // 0x800499B8: break       7
    do_break(2147785144);
L_800499BC:
    // 0x800499BC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800499C0: bne         $v0, $at, L_800499D4
    if (ctx->r2 != ctx->r1) {
        // 0x800499C4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800499D4;
    }
    // 0x800499C4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800499C8: bne         $t9, $at, L_800499D4
    if (ctx->r25 != ctx->r1) {
        // 0x800499CC: nop
    
            goto L_800499D4;
    }
    // 0x800499CC: nop

    // 0x800499D0: break       6
    do_break(2147785168);
L_800499D4:
    // 0x800499D4: mfhi        $v0
    ctx->r2 = hi;
    // 0x800499D8: sll         $t0, $v0, 16
    ctx->r8 = S32(ctx->r2 << 16);
    // 0x800499DC: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x800499E0: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_800499E4:
    // 0x800499E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800499E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800499EC: jr          $ra
    // 0x800499F0: nop

    return;
    // 0x800499F0: nop

;}
RECOMP_FUNC void func_800499F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800499F4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800499F8: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x800499FC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80049A00: sra         $a0, $t6, 16
    ctx->r4 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80049A04: addiu       $v0, $v0, -0x3110
    ctx->r2 = ADD32(ctx->r2, -0X3110);
    // 0x80049A08: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80049A0C: addu        $t8, $v0, $v1
    ctx->r24 = ADD32(ctx->r2, ctx->r3);
L_80049A10:
    // 0x80049A10: lb          $t9, 0x11($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X11);
    // 0x80049A14: nop

    // 0x80049A18: bne         $a0, $t9, L_80049A28
    if (ctx->r4 != ctx->r25) {
        // 0x80049A1C: nop
    
            goto L_80049A28;
    }
    // 0x80049A1C: nop

    // 0x80049A20: jr          $ra
    // 0x80049A24: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80049A24: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80049A28:
    // 0x80049A28: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80049A2C: sll         $t0, $v1, 16
    ctx->r8 = S32(ctx->r3 << 16);
    // 0x80049A30: sra         $v1, $t0, 16
    ctx->r3 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80049A34: slti        $at, $v1, 0x18
    ctx->r1 = SIGNED(ctx->r3) < 0X18 ? 1 : 0;
    // 0x80049A38: bne         $at, $zero, L_80049A10
    if (ctx->r1 != 0) {
        // 0x80049A3C: addu        $t8, $v0, $v1
        ctx->r24 = ADD32(ctx->r2, ctx->r3);
            goto L_80049A10;
    }
    // 0x80049A3C: addu        $t8, $v0, $v1
    ctx->r24 = ADD32(ctx->r2, ctx->r3);
    // 0x80049A40: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80049A44: jr          $ra
    // 0x80049A48: nop

    return;
    // 0x80049A48: nop

;}
