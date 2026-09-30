#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80049A4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049A4C: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80049A50: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80049A54: slti        $at, $t7, 0x46
    ctx->r1 = SIGNED(ctx->r15) < 0X46 ? 1 : 0;
    // 0x80049A58: bne         $at, $zero, L_80049A7C
    if (ctx->r1 != 0) {
        // 0x80049A5C: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_80049A7C;
    }
    // 0x80049A5C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80049A60: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80049A64: lb          $t8, -0x32A1($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X32A1);
    // 0x80049A68: sll         $v0, $zero, 16
    ctx->r2 = S32(0 << 16);
    // 0x80049A6C: bne         $t8, $zero, L_80049A7C
    if (ctx->r24 != 0) {
        // 0x80049A70: sra         $t9, $v0, 16
        ctx->r25 = S32(SIGNED(ctx->r2) >> 16);
            goto L_80049A7C;
    }
    // 0x80049A70: sra         $t9, $v0, 16
    ctx->r25 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80049A74: jr          $ra
    // 0x80049A78: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    return;
    // 0x80049A78: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_80049A7C:
    // 0x80049A7C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80049A80: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80049A84: sra         $t9, $v0, 16
    ctx->r25 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80049A88: jr          $ra
    // 0x80049A8C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    return;
    // 0x80049A8C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
;}
RECOMP_FUNC void func_80049A90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049A90: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80049A94: lb          $t8, -0x32A1($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X32A1);
    // 0x80049A98: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x80049A9C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80049AA0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80049AA4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80049AA8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80049AAC: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80049AB0: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80049AB4: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80049AB8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80049ABC: sll         $t1, $t7, 3
    ctx->r9 = S32(ctx->r15 << 3);
    // 0x80049AC0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80049AC4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80049AC8: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x80049ACC: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80049AD0: sll         $t1, $t1, 5
    ctx->r9 = S32(ctx->r9 << 5);
    // 0x80049AD4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80049AD8: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x80049ADC: addiu       $t0, $t0, -0x2F80
    ctx->r8 = ADD32(ctx->r8, -0X2F80);
    // 0x80049AE0: subu        $t1, $t1, $t7
    ctx->r9 = SUB32(ctx->r9, ctx->r15);
    // 0x80049AE4: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x80049AE8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80049AEC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80049AF0: addu        $t2, $v1, $t1
    ctx->r10 = ADD32(ctx->r3, ctx->r9);
    // 0x80049AF4: lb          $t3, 0xC($t2)
    ctx->r11 = MEM_B(ctx->r10, 0XC);
    // 0x80049AF8: nop

    // 0x80049AFC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80049B00: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80049B04: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80049B08: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80049B0C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80049B10: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80049B14: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80049B18: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x80049B1C: lb          $v0, 0x4AC($t5)
    ctx->r2 = MEM_B(ctx->r13, 0X4AC);
    // 0x80049B20: jr          $ra
    // 0x80049B24: nop

    return;
    // 0x80049B24: nop

    // 0x80049B28: nop

    // 0x80049B2C: nop

;}
RECOMP_FUNC void func_80049B30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049B30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80049B34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80049B38: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80049B3C: jal         0x80036858
    // 0x80049B40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036858(rdram, ctx);
        goto after_0;
    // 0x80049B40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80049B44: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80049B48: jal         0x80035FF0
    // 0x80049B4C: addiu       $a0, $a0, -0x6E30
    ctx->r4 = ADD32(ctx->r4, -0X6E30);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x80049B4C: addiu       $a0, $a0, -0x6E30
    ctx->r4 = ADD32(ctx->r4, -0X6E30);
    after_1:
    // 0x80049B50: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x80049B54: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x80049B58: jal         0x80049E40
    // 0x80049B5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x80049B5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80049B60: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x80049B64: jal         0x8002AAC0
    // 0x80049B68: addiu       $a0, $a0, -0x6DEC
    ctx->r4 = ADD32(ctx->r4, -0X6DEC);
    func_8002AAC0(rdram, ctx);
        goto after_3;
    // 0x80049B68: addiu       $a0, $a0, -0x6DEC
    ctx->r4 = ADD32(ctx->r4, -0X6DEC);
    after_3:
    // 0x80049B6C: jal         0x8006FF08
    // 0x80049B70: nop

    func_8006FF08(rdram, ctx);
        goto after_4;
    // 0x80049B70: nop

    after_4:
    // 0x80049B74: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80049B78: addiu       $a0, $a0, -0x6314
    ctx->r4 = ADD32(ctx->r4, -0X6314);
    // 0x80049B7C: jal         0x800293DC
    // 0x80049B80: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800293DC(rdram, ctx);
        goto after_5;
    // 0x80049B80: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x80049B84: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80049B88: addiu       $a0, $a0, -0x645C
    ctx->r4 = ADD32(ctx->r4, -0X645C);
    // 0x80049B8C: jal         0x8004A9B4
    // 0x80049B90: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004A9B4(rdram, ctx);
        goto after_6;
    // 0x80049B90: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_6:
    // 0x80049B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80049B98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80049B9C: jr          $ra
    // 0x80049BA0: nop

    return;
    // 0x80049BA0: nop

;}
RECOMP_FUNC void func_80049BA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049BA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80049BA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80049BAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80049BB0: jal         0x800357CC
    // 0x80049BB4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800357CC(rdram, ctx);
        goto after_0;
    // 0x80049BB4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80049BB8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80049BBC: lw          $t6, -0x3250($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3250);
    // 0x80049BC0: nop

    // 0x80049BC4: lhu         $a0, 0x0($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X0);
    // 0x80049BC8: jal         0x80035BB8
    // 0x80049BCC: nop

    func_80035BB8(rdram, ctx);
        goto after_1;
    // 0x80049BCC: nop

    after_1:
    // 0x80049BD0: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80049BD4: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80049BD8: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x80049BDC: lw          $t9, -0x6DC4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X6DC4);
    // 0x80049BE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80049BE4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80049BE8: jalr        $t9
    // 0x80049BEC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80049BEC: nop

    after_2:
    // 0x80049BF0: jal         0x80035860
    // 0x80049BF4: nop

    func_80035860(rdram, ctx);
        goto after_3;
    // 0x80049BF4: nop

    after_3:
    // 0x80049BF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80049BFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80049C00: jr          $ra
    // 0x80049C04: nop

    return;
    // 0x80049C04: nop

;}
RECOMP_FUNC void func_80049C08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049C08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80049C0C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80049C10: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80049C14: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80049C18: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80049C1C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80049C20: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80049C24: jal         0x80035770
    // 0x80049C28: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x80049C28: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80049C2C: lh          $t6, 0x2C($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X2C);
    // 0x80049C30: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80049C34: bne         $t6, $zero, L_80049C4C
    if (ctx->r14 != 0) {
        // 0x80049C38: addiu       $s3, $zero, 0xA
        ctx->r19 = ADD32(0, 0XA);
            goto L_80049C4C;
    }
    // 0x80049C38: addiu       $s3, $zero, 0xA
    ctx->r19 = ADD32(0, 0XA);
    // 0x80049C3C: jal         0x80037908
    // 0x80049C40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037908(rdram, ctx);
        goto after_1;
    // 0x80049C40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80049C44: b           L_80049CAC
    // 0x80049C48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80049CAC;
    // 0x80049C48: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80049C4C:
    // 0x80049C4C: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x80049C50: addiu       $s2, $s2, -0x3A60
    ctx->r18 = ADD32(ctx->r18, -0X3A60);
    // 0x80049C54: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
L_80049C58:
    // 0x80049C58: addu        $t8, $s2, $t7
    ctx->r24 = ADD32(ctx->r18, ctx->r15);
    // 0x80049C5C: lbu         $t9, 0x2($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X2);
    // 0x80049C60: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x80049C64: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x80049C68: beq         $t0, $zero, L_80049C88
    if (ctx->r8 == 0) {
        // 0x80049C6C: nop
    
            goto L_80049C88;
    }
    // 0x80049C6C: nop

    // 0x80049C70: jal         0x80021D5C
    // 0x80049C74: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_80021D5C(rdram, ctx);
        goto after_2;
    // 0x80049C74: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_2:
    // 0x80049C78: bne         $v0, $s3, L_80049C88
    if (ctx->r2 != ctx->r19) {
        // 0x80049C7C: nop
    
            goto L_80049C88;
    }
    // 0x80049C7C: nop

    // 0x80049C80: jal         0x80021DD8
    // 0x80049C84: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_80021DD8(rdram, ctx);
        goto after_3;
    // 0x80049C84: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_3:
L_80049C88:
    // 0x80049C88: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80049C8C: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x80049C90: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80049C94: slti        $at, $s0, 0x4
    ctx->r1 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x80049C98: bne         $at, $zero, L_80049C58
    if (ctx->r1 != 0) {
        // 0x80049C9C: sll         $t7, $s0, 2
        ctx->r15 = S32(ctx->r16 << 2);
            goto L_80049C58;
    }
    // 0x80049C9C: sll         $t7, $s0, 2
    ctx->r15 = S32(ctx->r16 << 2);
    // 0x80049CA0: jal         0x80037908
    // 0x80049CA4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80037908(rdram, ctx);
        goto after_4;
    // 0x80049CA4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x80049CA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80049CAC:
    // 0x80049CAC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80049CB0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80049CB4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80049CB8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80049CBC: jr          $ra
    // 0x80049CC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80049CC0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80049CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049CC4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80049CC8: jr          $ra
    // 0x80049CCC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x80049CCC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_80049CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049CD0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80049CD4: jr          $ra
    // 0x80049CD8: sh          $zero, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = 0;
    return;
    // 0x80049CD8: sh          $zero, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80049CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049CDC: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80049CE0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80049CE4: jr          $ra
    // 0x80049CE8: sh          $t6, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r14;
    return;
    // 0x80049CE8: sh          $t6, 0x2C($a0)
    MEM_H(0X2C, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void func_80049CEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049CEC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80049CF0: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80049CF4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80049CF8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80049CFC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80049D00: addiu       $a1, $a1, -0x6DB0
    ctx->r5 = ADD32(ctx->r5, -0X6DB0);
    // 0x80049D04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80049D08: jal         0x8002F444
    // 0x80049D0C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8002F444(rdram, ctx);
        goto after_0;
    // 0x80049D0C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x80049D10: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80049D14: addiu       $t6, $zero, 0xE0
    ctx->r14 = ADD32(0, 0XE0);
    // 0x80049D18: addiu       $t7, $zero, 0x58
    ctx->r15 = ADD32(0, 0X58);
    // 0x80049D1C: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x80049D20: addiu       $t9, $zero, 0xB3
    ctx->r25 = ADD32(0, 0XB3);
    // 0x80049D24: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80049D28: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80049D2C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80049D30: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80049D34: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80049D38: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x80049D3C: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    // 0x80049D40: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80049D44: jal         0x8004A5E4
    // 0x80049D48: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_8004A5E4(rdram, ctx);
        goto after_1;
    // 0x80049D48: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_1:
    // 0x80049D4C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80049D50: addiu       $t1, $zero, 0xB0
    ctx->r9 = ADD32(0, 0XB0);
    // 0x80049D54: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x80049D58: addiu       $t2, $zero, 0x5C
    ctx->r10 = ADD32(0, 0X5C);
    // 0x80049D5C: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80049D60: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80049D64: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80049D68: addiu       $t6, $zero, 0xB3
    ctx->r14 = ADD32(0, 0XB3);
    // 0x80049D6C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80049D70: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x80049D74: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x80049D78: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x80049D7C: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x80049D80: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80049D84: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80049D88: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    // 0x80049D8C: jal         0x8004A5E4
    // 0x80049D90: addiu       $a3, $zero, 0x7C
    ctx->r7 = ADD32(0, 0X7C);
    func_8004A5E4(rdram, ctx);
        goto after_2;
    // 0x80049D90: addiu       $a3, $zero, 0x7C
    ctx->r7 = ADD32(0, 0X7C);
    after_2:
    // 0x80049D94: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80049D98: addiu       $t9, $zero, 0xA4
    ctx->r25 = ADD32(0, 0XA4);
    // 0x80049D9C: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80049DA0: addiu       $t0, $zero, 0x1B
    ctx->r8 = ADD32(0, 0X1B);
    // 0x80049DA4: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80049DA8: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x80049DAC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80049DB0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80049DB4: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x80049DB8: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x80049DBC: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80049DC0: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80049DC4: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x80049DC8: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80049DCC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80049DD0: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80049DD4: addiu       $a2, $zero, 0x4C
    ctx->r6 = ADD32(0, 0X4C);
    // 0x80049DD8: jal         0x8004A5E4
    // 0x80049DDC: addiu       $a3, $zero, 0x7F
    ctx->r7 = ADD32(0, 0X7F);
    func_8004A5E4(rdram, ctx);
        goto after_3;
    // 0x80049DDC: addiu       $a3, $zero, 0x7F
    ctx->r7 = ADD32(0, 0X7F);
    after_3:
    // 0x80049DE0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80049DE4: addiu       $t8, $zero, 0xA4
    ctx->r24 = ADD32(0, 0XA4);
    // 0x80049DE8: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x80049DEC: addiu       $t9, $zero, 0x35
    ctx->r25 = ADD32(0, 0X35);
    // 0x80049DF0: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80049DF4: addiu       $t0, $zero, 0x20
    ctx->r8 = ADD32(0, 0X20);
    // 0x80049DF8: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x80049DFC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80049E00: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80049E04: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80049E08: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80049E0C: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80049E10: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80049E14: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x80049E18: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80049E1C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80049E20: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x80049E24: addiu       $a2, $zero, 0x4C
    ctx->r6 = ADD32(0, 0X4C);
    // 0x80049E28: jal         0x8004A5E4
    // 0x80049E2C: addiu       $a3, $zero, 0x9F
    ctx->r7 = ADD32(0, 0X9F);
    func_8004A5E4(rdram, ctx);
        goto after_4;
    // 0x80049E2C: addiu       $a3, $zero, 0x9F
    ctx->r7 = ADD32(0, 0X9F);
    after_4:
    // 0x80049E30: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80049E34: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80049E38: jr          $ra
    // 0x80049E3C: nop

    return;
    // 0x80049E3C: nop

;}
RECOMP_FUNC void func_80049E40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049E40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80049E44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80049E48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80049E4C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80049E50: andi        $t6, $a0, 0xFFFF
    ctx->r14 = ctx->r4 & 0XFFFF;
    // 0x80049E54: andi        $t7, $a1, 0xFFFF
    ctx->r15 = ctx->r5 & 0XFFFF;
    // 0x80049E58: andi        $t8, $a2, 0xFFFF
    ctx->r24 = ctx->r6 & 0XFFFF;
    // 0x80049E5C: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x80049E60: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x80049E64: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80049E68: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80049E6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80049E70: addiu       $v0, $v0, -0x307C
    ctx->r2 = ADD32(ctx->r2, -0X307C);
    // 0x80049E74: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80049E78:
    // 0x80049E78: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80049E7C: andi        $t9, $v1, 0xFFFF
    ctx->r25 = ctx->r3 & 0XFFFF;
    // 0x80049E80: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x80049E84: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x80049E88: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x80049E8C: sh          $zero, -0x18($v0)
    MEM_H(-0X18, ctx->r2) = 0;
    // 0x80049E90: sh          $zero, -0x16($v0)
    MEM_H(-0X16, ctx->r2) = 0;
    // 0x80049E94: sh          $zero, -0x14($v0)
    MEM_H(-0X14, ctx->r2) = 0;
    // 0x80049E98: sh          $zero, -0x12($v0)
    MEM_H(-0X12, ctx->r2) = 0;
    // 0x80049E9C: sh          $zero, -0x10($v0)
    MEM_H(-0X10, ctx->r2) = 0;
    // 0x80049EA0: sb          $zero, -0xE($v0)
    MEM_B(-0XE, ctx->r2) = 0;
    // 0x80049EA4: sh          $a0, -0xC($v0)
    MEM_H(-0XC, ctx->r2) = ctx->r4;
    // 0x80049EA8: sh          $a1, -0xA($v0)
    MEM_H(-0XA, ctx->r2) = ctx->r5;
    // 0x80049EAC: sh          $a2, -0x8($v0)
    MEM_H(-0X8, ctx->r2) = ctx->r6;
    // 0x80049EB0: sh          $zero, -0x6($v0)
    MEM_H(-0X6, ctx->r2) = 0;
    // 0x80049EB4: sb          $zero, -0x2($v0)
    MEM_B(-0X2, ctx->r2) = 0;
    // 0x80049EB8: bne         $at, $zero, L_80049E78
    if (ctx->r1 != 0) {
        // 0x80049EBC: sh          $zero, -0x4($v0)
        MEM_H(-0X4, ctx->r2) = 0;
            goto L_80049E78;
    }
    // 0x80049EBC: sh          $zero, -0x4($v0)
    MEM_H(-0X4, ctx->r2) = 0;
    // 0x80049EC0: jal         0x800390B4
    // 0x80049EC4: nop

    func_800390B4(rdram, ctx);
        goto after_0;
    // 0x80049EC4: nop

    after_0:
    // 0x80049EC8: jal         0x80049EE0
    // 0x80049ECC: nop

    func_80049EE0(rdram, ctx);
        goto after_1;
    // 0x80049ECC: nop

    after_1:
    // 0x80049ED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80049ED4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80049ED8: jr          $ra
    // 0x80049EDC: nop

    return;
    // 0x80049EDC: nop

;}
RECOMP_FUNC void func_80049EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049EE0: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80049EE4: lui         $a1, 0x800E
    ctx->r5 = S32(0X800E << 16);
    // 0x80049EE8: addiu       $a1, $a1, -0x3770
    ctx->r5 = ADD32(ctx->r5, -0X3770);
    // 0x80049EEC: addiu       $t1, $t1, -0x32B0
    ctx->r9 = ADD32(ctx->r9, -0X32B0);
    // 0x80049EF0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80049EF4: addiu       $t2, $zero, 0x12
    ctx->r10 = ADD32(0, 0X12);
    // 0x80049EF8: addiu       $t0, $zero, -0x2
    ctx->r8 = ADD32(0, -0X2);
    // 0x80049EFC: lui         $a3, 0x3
    ctx->r7 = S32(0X3 << 16);
    // 0x80049F00: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
L_80049F04:
    // 0x80049F04: multu       $v0, $a2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80049F08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80049F0C: mflo        $t6
    ctx->r14 = lo;
    // 0x80049F10: addu        $t7, $a1, $t6
    ctx->r15 = ADD32(ctx->r5, ctx->r14);
    // 0x80049F14: addu        $v1, $t7, $a3
    ctx->r3 = ADD32(ctx->r15, ctx->r7);
    // 0x80049F18: multu       $v0, $t2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80049F1C: lbu         $t8, 0x70A($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X70A);
    // 0x80049F20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80049F24: and         $t9, $t8, $t0
    ctx->r25 = ctx->r24 & ctx->r8;
    // 0x80049F28: sb          $t9, 0x70A($v1)
    MEM_B(0X70A, ctx->r3) = ctx->r25;
    // 0x80049F2C: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x80049F30: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80049F34: mflo        $t3
    ctx->r11 = lo;
    // 0x80049F38: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80049F3C: lb          $t5, 0x110($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X110);
    // 0x80049F40: nop

    // 0x80049F44: bne         $t5, $zero, L_80049F64
    if (ctx->r13 != 0) {
        // 0x80049F48: nop
    
            goto L_80049F64;
    }
    // 0x80049F48: nop

    // 0x80049F4C: lb          $t6, 0x6A($t1)
    ctx->r14 = MEM_B(ctx->r9, 0X6A);
    // 0x80049F50: nop

    // 0x80049F54: blez        $t6, L_80049F64
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80049F58: nop
    
            goto L_80049F64;
    }
    // 0x80049F58: nop

    // 0x80049F5C: b           L_80049F64
    // 0x80049F60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
        goto L_80049F64;
    // 0x80049F60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
L_80049F64:
    // 0x80049F64: lbu         $t7, 0x70A($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X70A);
    // 0x80049F68: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80049F6C: or          $t8, $t7, $a0
    ctx->r24 = ctx->r15 | ctx->r4;
    // 0x80049F70: bne         $at, $zero, L_80049F04
    if (ctx->r1 != 0) {
        // 0x80049F74: sb          $t8, 0x70A($v1)
        MEM_B(0X70A, ctx->r3) = ctx->r24;
            goto L_80049F04;
    }
    // 0x80049F74: sb          $t8, 0x70A($v1)
    MEM_B(0X70A, ctx->r3) = ctx->r24;
    // 0x80049F78: jr          $ra
    // 0x80049F7C: nop

    return;
    // 0x80049F7C: nop

;}
RECOMP_FUNC void func_80049F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80049F80: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80049F84: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80049F88: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80049F8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80049F90: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80049F94: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80049F98: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80049F9C: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80049FA0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80049FA4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80049FA8: lui         $s1, 0x8010
    ctx->r17 = S32(0X8010 << 16);
    // 0x80049FAC: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x80049FB0: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x80049FB4: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80049FB8: addiu       $s1, $s1, 0x5238
    ctx->r17 = ADD32(ctx->r17, 0X5238);
    // 0x80049FBC: addiu       $s0, $s0, -0x307C
    ctx->r16 = ADD32(ctx->r16, -0X307C);
    // 0x80049FC0: addiu       $s3, $s3, -0x32B0
    ctx->r19 = ADD32(ctx->r19, -0X32B0);
    // 0x80049FC4: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80049FC8: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x80049FCC: addiu       $s5, $zero, 0x12
    ctx->r21 = ADD32(0, 0X12);
    // 0x80049FD0: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x80049FD4: addiu       $s7, $zero, 0x3
    ctx->r23 = ADD32(0, 0X3);
    // 0x80049FD8: addiu       $fp, $sp, 0x54
    ctx->r30 = ADD32(ctx->r29, 0X54);
L_80049FDC:
    // 0x80049FDC: lbu         $t6, 0x16($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X16);
    // 0x80049FE0: nop

    // 0x80049FE4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80049FE8: beq         $t7, $zero, L_8004A000
    if (ctx->r15 == 0) {
        // 0x80049FEC: nop
    
            goto L_8004A000;
    }
    // 0x80049FEC: nop

    // 0x80049FF0: jal         0x8004A32C
    // 0x80049FF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004A32C(rdram, ctx);
        goto after_0;
    // 0x80049FF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80049FF8: b           L_8004A104
    // 0x80049FFC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8004A104;
    // 0x80049FFC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8004A000:
    // 0x8004A000: multu       $s2, $s5
    result = U64(U32(ctx->r18)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004A004: mflo        $t8
    ctx->r24 = lo;
    // 0x8004A008: addu        $t9, $s3, $t8
    ctx->r25 = ADD32(ctx->r19, ctx->r24);
    // 0x8004A00C: lb          $t0, 0x110($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X110);
    // 0x8004A010: nop

    // 0x8004A014: bne         $t0, $zero, L_8004A04C
    if (ctx->r8 != 0) {
        // 0x8004A018: nop
    
            goto L_8004A04C;
    }
    // 0x8004A018: nop

    // 0x8004A01C: lb          $v0, 0x6A($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X6A);
    // 0x8004A020: nop

    // 0x8004A024: beq         $s4, $v0, L_8004A03C
    if (ctx->r20 == ctx->r2) {
        // 0x8004A028: nop
    
            goto L_8004A03C;
    }
    // 0x8004A028: nop

    // 0x8004A02C: beq         $s6, $v0, L_8004A03C
    if (ctx->r22 == ctx->r2) {
        // 0x8004A030: nop
    
            goto L_8004A03C;
    }
    // 0x8004A030: nop

    // 0x8004A034: bne         $s7, $v0, L_8004A04C
    if (ctx->r23 != ctx->r2) {
        // 0x8004A038: nop
    
            goto L_8004A04C;
    }
    // 0x8004A038: nop

L_8004A03C:
    // 0x8004A03C: jal         0x8004A32C
    // 0x8004A040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004A32C(rdram, ctx);
        goto after_1;
    // 0x8004A040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8004A044: b           L_8004A104
    // 0x8004A048: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8004A104;
    // 0x8004A048: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8004A04C:
    // 0x8004A04C: lbu         $t1, 0xA($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XA);
    // 0x8004A050: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8004A054: bne         $s4, $t1, L_8004A068
    if (ctx->r20 != ctx->r9) {
        // 0x8004A058: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_8004A068;
    }
    // 0x8004A058: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8004A05C: lhu         $t2, 0x10($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X10);
    // 0x8004A060: b           L_8004A074
    // 0x8004A064: sh          $t2, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r10;
        goto L_8004A074;
    // 0x8004A064: sh          $t2, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r10;
L_8004A068:
    // 0x8004A068: lhu         $t3, 0xE($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0XE);
    // 0x8004A06C: nop

    // 0x8004A070: sh          $t3, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r11;
L_8004A074:
    // 0x8004A074: lhu         $t4, 0x4($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X4);
    // 0x8004A078: lbu         $t6, 0x16($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X16);
    // 0x8004A07C: sh          $t4, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r12;
    // 0x8004A080: lhu         $t5, 0x2($s1)
    ctx->r13 = MEM_HU(ctx->r17, 0X2);
    // 0x8004A084: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x8004A088: bne         $t7, $zero, L_8004A098
    if (ctx->r15 != 0) {
        // 0x8004A08C: sh          $t5, 0x0($s0)
        MEM_H(0X0, ctx->r16) = ctx->r13;
            goto L_8004A098;
    }
    // 0x8004A08C: sh          $t5, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r13;
    // 0x8004A090: jal         0x8004A14C
    // 0x8004A094: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    func_8004A14C(rdram, ctx);
        goto after_2;
    // 0x8004A094: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    after_2:
L_8004A098:
    // 0x8004A098: lhu         $t8, 0x0($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X0);
    // 0x8004A09C: lhu         $t9, 0xC($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0XC);
    // 0x8004A0A0: lhu         $t1, 0x2($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X2);
    // 0x8004A0A4: and         $v1, $t8, $t9
    ctx->r3 = ctx->r24 & ctx->r25;
    // 0x8004A0A8: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x8004A0AC: beq         $v0, $t1, L_8004A0C0
    if (ctx->r2 == ctx->r9) {
        // 0x8004A0B0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8004A0C0;
    }
    // 0x8004A0B0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8004A0B4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8004A0B8: b           L_8004A0D0
    // 0x8004A0BC: sh          $zero, 0x12($s0)
    MEM_H(0X12, ctx->r16) = 0;
        goto L_8004A0D0;
    // 0x8004A0BC: sh          $zero, 0x12($s0)
    MEM_H(0X12, ctx->r16) = 0;
L_8004A0C0:
    // 0x8004A0C0: lhu         $t3, 0x12($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X12);
    // 0x8004A0C4: nop

    // 0x8004A0C8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8004A0CC: sh          $t4, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r12;
L_8004A0D0:
    // 0x8004A0D0: lhu         $t5, 0x54($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X54);
    // 0x8004A0D4: lhu         $t6, 0x12($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X12);
    // 0x8004A0D8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8004A0DC: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8004A0E0: beq         $at, $zero, L_8004A0FC
    if (ctx->r1 == 0) {
        // 0x8004A0E4: nop
    
            goto L_8004A0FC;
    }
    // 0x8004A0E4: nop

    // 0x8004A0E8: lhu         $t8, 0x4($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X4);
    // 0x8004A0EC: sb          $t7, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r15;
    // 0x8004A0F0: or          $t9, $t8, $v0
    ctx->r25 = ctx->r24 | ctx->r2;
    // 0x8004A0F4: sh          $t9, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r25;
    // 0x8004A0F8: sh          $zero, 0x12($s0)
    MEM_H(0X12, ctx->r16) = 0;
L_8004A0FC:
    // 0x8004A0FC: sh          $v1, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r3;
    // 0x8004A100: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8004A104:
    // 0x8004A104: andi        $t0, $s2, 0xFFFF
    ctx->r8 = ctx->r18 & 0XFFFF;
    // 0x8004A108: slti        $at, $t0, 0x4
    ctx->r1 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x8004A10C: or          $s2, $t0, $zero
    ctx->r18 = ctx->r8 | 0;
    // 0x8004A110: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x8004A114: bne         $at, $zero, L_80049FDC
    if (ctx->r1 != 0) {
        // 0x8004A118: addiu       $s1, $s1, 0xA
        ctx->r17 = ADD32(ctx->r17, 0XA);
            goto L_80049FDC;
    }
    // 0x8004A118: addiu       $s1, $s1, 0xA
    ctx->r17 = ADD32(ctx->r17, 0XA);
    // 0x8004A11C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8004A120: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8004A124: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8004A128: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8004A12C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8004A130: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8004A134: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8004A138: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8004A13C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8004A140: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8004A144: jr          $ra
    // 0x8004A148: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8004A148: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8004A14C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A14C: lh          $t6, 0x6($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X6);
    // 0x8004A150: lh          $v0, 0x6($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X6);
    // 0x8004A154: lh          $v1, 0x8($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X8);
    // 0x8004A158: slti        $at, $t6, 0x33
    ctx->r1 = SIGNED(ctx->r14) < 0X33 ? 1 : 0;
    // 0x8004A15C: bne         $at, $zero, L_8004A188
    if (ctx->r1 != 0) {
        // 0x8004A160: nop
    
            goto L_8004A188;
    }
    // 0x8004A160: nop

    // 0x8004A164: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x8004A168: slti        $at, $v0, 0x32
    ctx->r1 = SIGNED(ctx->r2) < 0X32 ? 1 : 0;
    // 0x8004A16C: ori         $t8, $t7, 0x100
    ctx->r24 = ctx->r15 | 0X100;
    // 0x8004A170: beq         $at, $zero, L_8004A188
    if (ctx->r1 == 0) {
        // 0x8004A174: sh          $t8, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r24;
            goto L_8004A188;
    }
    // 0x8004A174: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x8004A178: lhu         $t9, 0x4($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X4);
    // 0x8004A17C: nop

    // 0x8004A180: ori         $t0, $t9, 0x100
    ctx->r8 = ctx->r25 | 0X100;
    // 0x8004A184: sh          $t0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r8;
L_8004A188:
    // 0x8004A188: lh          $t1, 0x6($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X6);
    // 0x8004A18C: nop

    // 0x8004A190: slti        $at, $t1, -0x32
    ctx->r1 = SIGNED(ctx->r9) < -0X32 ? 1 : 0;
    // 0x8004A194: beq         $at, $zero, L_8004A1C0
    if (ctx->r1 == 0) {
        // 0x8004A198: nop
    
            goto L_8004A1C0;
    }
    // 0x8004A198: nop

    // 0x8004A19C: lhu         $t2, 0x0($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X0);
    // 0x8004A1A0: slti        $at, $v0, -0x31
    ctx->r1 = SIGNED(ctx->r2) < -0X31 ? 1 : 0;
    // 0x8004A1A4: ori         $t3, $t2, 0x200
    ctx->r11 = ctx->r10 | 0X200;
    // 0x8004A1A8: bne         $at, $zero, L_8004A1C0
    if (ctx->r1 != 0) {
        // 0x8004A1AC: sh          $t3, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r11;
            goto L_8004A1C0;
    }
    // 0x8004A1AC: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
    // 0x8004A1B0: lhu         $t4, 0x4($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X4);
    // 0x8004A1B4: nop

    // 0x8004A1B8: ori         $t5, $t4, 0x200
    ctx->r13 = ctx->r12 | 0X200;
    // 0x8004A1BC: sh          $t5, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r13;
L_8004A1C0:
    // 0x8004A1C0: lh          $t6, 0x8($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X8);
    // 0x8004A1C4: nop

    // 0x8004A1C8: slti        $at, $t6, 0x33
    ctx->r1 = SIGNED(ctx->r14) < 0X33 ? 1 : 0;
    // 0x8004A1CC: bne         $at, $zero, L_8004A1F8
    if (ctx->r1 != 0) {
        // 0x8004A1D0: nop
    
            goto L_8004A1F8;
    }
    // 0x8004A1D0: nop

    // 0x8004A1D4: lhu         $t7, 0x0($a1)
    ctx->r15 = MEM_HU(ctx->r5, 0X0);
    // 0x8004A1D8: slti        $at, $v1, 0x32
    ctx->r1 = SIGNED(ctx->r3) < 0X32 ? 1 : 0;
    // 0x8004A1DC: ori         $t8, $t7, 0x800
    ctx->r24 = ctx->r15 | 0X800;
    // 0x8004A1E0: beq         $at, $zero, L_8004A1F8
    if (ctx->r1 == 0) {
        // 0x8004A1E4: sh          $t8, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r24;
            goto L_8004A1F8;
    }
    // 0x8004A1E4: sh          $t8, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r24;
    // 0x8004A1E8: lhu         $t9, 0x4($a1)
    ctx->r25 = MEM_HU(ctx->r5, 0X4);
    // 0x8004A1EC: nop

    // 0x8004A1F0: ori         $t0, $t9, 0x800
    ctx->r8 = ctx->r25 | 0X800;
    // 0x8004A1F4: sh          $t0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r8;
L_8004A1F8:
    // 0x8004A1F8: lh          $t1, 0x8($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X8);
    // 0x8004A1FC: nop

    // 0x8004A200: slti        $at, $t1, -0x32
    ctx->r1 = SIGNED(ctx->r9) < -0X32 ? 1 : 0;
    // 0x8004A204: beq         $at, $zero, L_8004A230
    if (ctx->r1 == 0) {
        // 0x8004A208: nop
    
            goto L_8004A230;
    }
    // 0x8004A208: nop

    // 0x8004A20C: lhu         $t2, 0x0($a1)
    ctx->r10 = MEM_HU(ctx->r5, 0X0);
    // 0x8004A210: slti        $at, $v1, -0x31
    ctx->r1 = SIGNED(ctx->r3) < -0X31 ? 1 : 0;
    // 0x8004A214: ori         $t3, $t2, 0x400
    ctx->r11 = ctx->r10 | 0X400;
    // 0x8004A218: bne         $at, $zero, L_8004A230
    if (ctx->r1 != 0) {
        // 0x8004A21C: sh          $t3, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r11;
            goto L_8004A230;
    }
    // 0x8004A21C: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
    // 0x8004A220: lhu         $t4, 0x4($a1)
    ctx->r12 = MEM_HU(ctx->r5, 0X4);
    // 0x8004A224: nop

    // 0x8004A228: ori         $t5, $t4, 0x400
    ctx->r13 = ctx->r12 | 0X400;
    // 0x8004A22C: sh          $t5, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r13;
L_8004A230:
    // 0x8004A230: lh          $v0, 0x6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6);
    // 0x8004A234: nop

    // 0x8004A238: slti        $at, $v0, 0x4C
    ctx->r1 = SIGNED(ctx->r2) < 0X4C ? 1 : 0;
    // 0x8004A23C: beq         $at, $zero, L_8004A268
    if (ctx->r1 == 0) {
        // 0x8004A240: slti        $at, $v0, -0x4B
        ctx->r1 = SIGNED(ctx->r2) < -0X4B ? 1 : 0;
            goto L_8004A268;
    }
    // 0x8004A240: slti        $at, $v0, -0x4B
    ctx->r1 = SIGNED(ctx->r2) < -0X4B ? 1 : 0;
    // 0x8004A244: bne         $at, $zero, L_8004A268
    if (ctx->r1 != 0) {
        // 0x8004A248: nop
    
            goto L_8004A268;
    }
    // 0x8004A248: nop

    // 0x8004A24C: lh          $v1, 0x8($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X8);
    // 0x8004A250: nop

    // 0x8004A254: slti        $at, $v1, 0x4C
    ctx->r1 = SIGNED(ctx->r3) < 0X4C ? 1 : 0;
    // 0x8004A258: beq         $at, $zero, L_8004A268
    if (ctx->r1 == 0) {
        // 0x8004A25C: slti        $at, $v1, -0x4B
        ctx->r1 = SIGNED(ctx->r3) < -0X4B ? 1 : 0;
            goto L_8004A268;
    }
    // 0x8004A25C: slti        $at, $v1, -0x4B
    ctx->r1 = SIGNED(ctx->r3) < -0X4B ? 1 : 0;
    // 0x8004A260: beq         $at, $zero, L_8004A288
    if (ctx->r1 == 0) {
        // 0x8004A264: nop
    
            goto L_8004A288;
    }
    // 0x8004A264: nop

L_8004A268:
    // 0x8004A268: lhu         $v1, 0x0($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X0);
    // 0x8004A26C: nop

    // 0x8004A270: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8004A274: bne         $at, $zero, L_8004A288
    if (ctx->r1 != 0) {
        // 0x8004A278: srl         $t6, $v1, 2
        ctx->r14 = S32(U32(ctx->r3) >> 2);
            goto L_8004A288;
    }
    // 0x8004A278: srl         $t6, $v1, 2
    ctx->r14 = S32(U32(ctx->r3) >> 2);
    // 0x8004A27C: sh          $t6, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r14;
    // 0x8004A280: lh          $v0, 0x6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6);
    // 0x8004A284: nop

L_8004A288:
    // 0x8004A288: sh          $v0, 0x6($a1)
    MEM_H(0X6, ctx->r5) = ctx->r2;
    // 0x8004A28C: lh          $t7, 0x8($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X8);
    // 0x8004A290: jr          $ra
    // 0x8004A294: sh          $t7, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r15;
    return;
    // 0x8004A294: sh          $t7, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r15;
;}
RECOMP_FUNC void func_8004A298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A298: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8004A29C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8004A2A0: sll         $s3, $a2, 16
    ctx->r19 = S32(ctx->r6 << 16);
    // 0x8004A2A4: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x8004A2A8: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8004A2AC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8004A2B0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8004A2B4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8004A2B8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8004A2BC: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x8004A2C0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8004A2C4: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8004A2C8: blez        $t6, L_8004A310
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8004A2CC: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8004A310;
    }
    // 0x8004A2CC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8004A2D0:
    // 0x8004A2D0: lbu         $t7, 0x8($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X8);
    // 0x8004A2D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8004A2D8: sb          $t7, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r15;
    // 0x8004A2DC: lhu         $t8, 0x6($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X6);
    // 0x8004A2E0: lhu         $a3, 0x4($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X4);
    // 0x8004A2E4: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x8004A2E8: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x8004A2EC: jal         0x8004A55C
    // 0x8004A2F0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8004A55C(rdram, ctx);
        goto after_0;
    // 0x8004A2F0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x8004A2F4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8004A2F8: sll         $t9, $s2, 16
    ctx->r25 = S32(ctx->r18 << 16);
    // 0x8004A2FC: sra         $s2, $t9, 16
    ctx->r18 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8004A300: slt         $at, $s2, $s3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8004A304: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x8004A308: bne         $at, $zero, L_8004A2D0
    if (ctx->r1 != 0) {
        // 0x8004A30C: addiu       $s0, $s0, 0xA
        ctx->r16 = ADD32(ctx->r16, 0XA);
            goto L_8004A2D0;
    }
    // 0x8004A30C: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
L_8004A310:
    // 0x8004A310: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8004A314: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8004A318: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8004A31C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8004A320: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8004A324: jr          $ra
    // 0x8004A328: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8004A328: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8004A32C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A32C: sh          $zero, 0x0($a0)
    MEM_H(0X0, ctx->r4) = 0;
    // 0x8004A330: sh          $zero, 0x2($a0)
    MEM_H(0X2, ctx->r4) = 0;
    // 0x8004A334: sh          $zero, 0x4($a0)
    MEM_H(0X4, ctx->r4) = 0;
    // 0x8004A338: sh          $zero, 0x6($a0)
    MEM_H(0X6, ctx->r4) = 0;
    // 0x8004A33C: sh          $zero, 0x8($a0)
    MEM_H(0X8, ctx->r4) = 0;
    // 0x8004A340: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x8004A344: jr          $ra
    // 0x8004A348: sh          $zero, 0x12($a0)
    MEM_H(0X12, ctx->r4) = 0;
    return;
    // 0x8004A348: sh          $zero, 0x12($a0)
    MEM_H(0X12, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8004A34C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A34C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8004A350: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8004A354: sll         $s3, $a2, 16
    ctx->r19 = S32(ctx->r6 << 16);
    // 0x8004A358: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x8004A35C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8004A360: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8004A364: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8004A368: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8004A36C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8004A370: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x8004A374: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8004A378: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8004A37C: blez        $t6, L_8004A3E0
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8004A380: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8004A3E0;
    }
    // 0x8004A380: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8004A384:
    // 0x8004A384: lbu         $t7, 0x8($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X8);
    // 0x8004A388: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8004A38C: sb          $t7, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r15;
    // 0x8004A390: lhu         $t8, 0x6($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X6);
    // 0x8004A394: lhu         $a3, 0x4($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X4);
    // 0x8004A398: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x8004A39C: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x8004A3A0: jal         0x8004A55C
    // 0x8004A3A4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8004A55C(rdram, ctx);
        goto after_0;
    // 0x8004A3A4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x8004A3A8: addiu       $t9, $zero, 0xB3
    ctx->r25 = ADD32(0, 0XB3);
    // 0x8004A3AC: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8004A3B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8004A3B4: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8004A3B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8004A3BC: jal         0x8004A5C0
    // 0x8004A3C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8004A5C0(rdram, ctx);
        goto after_1;
    // 0x8004A3C0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x8004A3C4: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8004A3C8: sll         $t0, $s2, 16
    ctx->r8 = S32(ctx->r18 << 16);
    // 0x8004A3CC: sra         $s2, $t0, 16
    ctx->r18 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8004A3D0: slt         $at, $s2, $s3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8004A3D4: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x8004A3D8: bne         $at, $zero, L_8004A384
    if (ctx->r1 != 0) {
        // 0x8004A3DC: addiu       $s0, $s0, 0xA
        ctx->r16 = ADD32(ctx->r16, 0XA);
            goto L_8004A384;
    }
    // 0x8004A3DC: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
L_8004A3E0:
    // 0x8004A3E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8004A3E4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8004A3E8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8004A3EC: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8004A3F0: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8004A3F4: jr          $ra
    // 0x8004A3F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8004A3F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8004A3FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A3FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8004A400: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8004A404: sll         $s3, $a2, 16
    ctx->r19 = S32(ctx->r6 << 16);
    // 0x8004A408: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x8004A40C: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8004A410: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8004A414: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8004A418: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8004A41C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8004A420: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x8004A424: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8004A428: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8004A42C: blez        $t6, L_8004A490
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8004A430: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8004A490;
    }
    // 0x8004A430: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8004A434:
    // 0x8004A434: lbu         $t7, 0x8($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X8);
    // 0x8004A438: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8004A43C: sb          $t7, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r15;
    // 0x8004A440: lhu         $t8, 0x6($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X6);
    // 0x8004A444: lhu         $a3, 0x4($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X4);
    // 0x8004A448: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x8004A44C: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x8004A450: jal         0x8004A55C
    // 0x8004A454: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8004A55C(rdram, ctx);
        goto after_0;
    // 0x8004A454: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x8004A458: addiu       $t9, $zero, 0xE0
    ctx->r25 = ADD32(0, 0XE0);
    // 0x8004A45C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8004A460: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8004A464: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004A468: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8004A46C: jal         0x8004A5C0
    // 0x8004A470: addiu       $a3, $zero, 0x2C
    ctx->r7 = ADD32(0, 0X2C);
    func_8004A5C0(rdram, ctx);
        goto after_1;
    // 0x8004A470: addiu       $a3, $zero, 0x2C
    ctx->r7 = ADD32(0, 0X2C);
    after_1:
    // 0x8004A474: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8004A478: sll         $t0, $s2, 16
    ctx->r8 = S32(ctx->r18 << 16);
    // 0x8004A47C: sra         $s2, $t0, 16
    ctx->r18 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8004A480: slt         $at, $s2, $s3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8004A484: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x8004A488: bne         $at, $zero, L_8004A434
    if (ctx->r1 != 0) {
        // 0x8004A48C: addiu       $s0, $s0, 0xA
        ctx->r16 = ADD32(ctx->r16, 0XA);
            goto L_8004A434;
    }
    // 0x8004A48C: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
L_8004A490:
    // 0x8004A490: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8004A494: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8004A498: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8004A49C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8004A4A0: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8004A4A4: jr          $ra
    // 0x8004A4A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8004A4A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8004A4AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A4AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8004A4B0: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x8004A4B4: sll         $s3, $a2, 16
    ctx->r19 = S32(ctx->r6 << 16);
    // 0x8004A4B8: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x8004A4BC: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x8004A4C0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8004A4C4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8004A4C8: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8004A4CC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8004A4D0: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x8004A4D4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8004A4D8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8004A4DC: blez        $t6, L_8004A540
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8004A4E0: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_8004A540;
    }
    // 0x8004A4E0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
L_8004A4E4:
    // 0x8004A4E4: lbu         $t7, 0x8($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X8);
    // 0x8004A4E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8004A4EC: sb          $t7, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r15;
    // 0x8004A4F0: lhu         $t8, 0x6($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X6);
    // 0x8004A4F4: lhu         $a3, 0x4($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X4);
    // 0x8004A4F8: lh          $a2, 0x2($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X2);
    // 0x8004A4FC: lh          $a1, 0x0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X0);
    // 0x8004A500: jal         0x8004A55C
    // 0x8004A504: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8004A55C(rdram, ctx);
        goto after_0;
    // 0x8004A504: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_0:
    // 0x8004A508: addiu       $t9, $zero, 0xB3
    ctx->r25 = ADD32(0, 0XB3);
    // 0x8004A50C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8004A510: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8004A514: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004A518: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8004A51C: jal         0x8004A5C0
    // 0x8004A520: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8004A5C0(rdram, ctx);
        goto after_1;
    // 0x8004A520: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8004A524: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8004A528: sll         $t0, $s2, 16
    ctx->r8 = S32(ctx->r18 << 16);
    // 0x8004A52C: sra         $s2, $t0, 16
    ctx->r18 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8004A530: slt         $at, $s2, $s3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8004A534: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x8004A538: bne         $at, $zero, L_8004A4E4
    if (ctx->r1 != 0) {
        // 0x8004A53C: addiu       $s0, $s0, 0xA
        ctx->r16 = ADD32(ctx->r16, 0XA);
            goto L_8004A4E4;
    }
    // 0x8004A53C: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
L_8004A540:
    // 0x8004A540: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8004A544: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8004A548: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8004A54C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x8004A550: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8004A554: jr          $ra
    // 0x8004A558: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8004A558: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8004A55C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A55C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8004A560: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8004A564: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8004A568: lhu         $t6, 0x3E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X3E);
    // 0x8004A56C: lhu         $t7, 0x42($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X42);
    // 0x8004A570: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8004A574: lh          $a2, 0x36($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X36);
    // 0x8004A578: lh          $a3, 0x3A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X3A);
    // 0x8004A57C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8004A580: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8004A584: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8004A588: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8004A58C: addiu       $t1, $zero, 0xB3
    ctx->r9 = ADD32(0, 0XB3);
    // 0x8004A590: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8004A594: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8004A598: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8004A59C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8004A5A0: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    // 0x8004A5A4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8004A5A8: jal         0x8004A5E4
    // 0x8004A5AC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_8004A5E4(rdram, ctx);
        goto after_0;
    // 0x8004A5AC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x8004A5B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8004A5B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8004A5B8: jr          $ra
    // 0x8004A5BC: nop

    return;
    // 0x8004A5BC: nop

;}
RECOMP_FUNC void func_8004A5C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A5C0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8004A5C4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8004A5C8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8004A5CC: sb          $a1, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r5;
    // 0x8004A5D0: sb          $a2, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r6;
    // 0x8004A5D4: sb          $a3, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r7;
    // 0x8004A5D8: lbu         $t9, 0x13($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X13);
    // 0x8004A5DC: jr          $ra
    // 0x8004A5E0: sb          $t9, 0x11($a0)
    MEM_B(0X11, ctx->r4) = ctx->r25;
    return;
    // 0x8004A5E0: sb          $t9, 0x11($a0)
    MEM_B(0X11, ctx->r4) = ctx->r25;
;}
RECOMP_FUNC void func_8004A5E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A5E4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8004A5E8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8004A5EC: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8004A5F0: lbu         $t3, 0x8($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X8);
    // 0x8004A5F4: lui         $t2, 0x800B
    ctx->r10 = S32(0X800B << 16);
    // 0x8004A5F8: andi        $t4, $t3, 0xFF01
    ctx->r12 = ctx->r11 & 0XFF01;
    // 0x8004A5FC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8004A600: addiu       $t2, $t2, -0x6D80
    ctx->r10 = ADD32(ctx->r10, -0X6D80);
    // 0x8004A604: ori         $t5, $t4, 0x4
    ctx->r13 = ctx->r12 | 0X4;
    // 0x8004A608: sb          $t1, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r9;
    // 0x8004A60C: sh          $a1, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r5;
    // 0x8004A610: sw          $t2, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r10;
    // 0x8004A614: sh          $a2, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r6;
    // 0x8004A618: sh          $a3, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r7;
    // 0x8004A61C: sb          $t5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r13;
    // 0x8004A620: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x8004A624: lbu         $t0, 0x9($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X9);
    // 0x8004A628: sb          $t6, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r14;
    // 0x8004A62C: lbu         $t7, 0x1F($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X1F);
    // 0x8004A630: andi        $t1, $t0, 0xFFF1
    ctx->r9 = ctx->r8 & 0XFFF1;
    // 0x8004A634: sb          $t7, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r15;
    // 0x8004A638: lbu         $t8, 0x23($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X23);
    // 0x8004A63C: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x8004A640: sb          $t8, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r24;
    // 0x8004A644: lbu         $t9, 0x27($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X27);
    // 0x8004A648: sb          $t2, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r10;
    // 0x8004A64C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8004A650: sb          $t9, 0x11($a0)
    MEM_B(0X11, ctx->r4) = ctx->r25;
    // 0x8004A654: srl         $t3, $v0, 14
    ctx->r11 = S32(U32(ctx->r2) >> 14);
    // 0x8004A658: xori        $t4, $t3, 0x2
    ctx->r12 = ctx->r11 ^ 0X2;
    // 0x8004A65C: sll         $t5, $t4, 29
    ctx->r13 = S32(ctx->r12 << 29);
    // 0x8004A660: srl         $t6, $t5, 15
    ctx->r14 = S32(U32(ctx->r13) >> 15);
    // 0x8004A664: xor         $t7, $t6, $v0
    ctx->r15 = ctx->r14 ^ ctx->r2;
    // 0x8004A668: sw          $t7, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r15;
    // 0x8004A66C: lbu         $t9, 0x9($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X9);
    // 0x8004A670: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8004A674: ori         $t0, $t9, 0x40
    ctx->r8 = ctx->r25 | 0X40;
    // 0x8004A678: sb          $t0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r8;
    // 0x8004A67C: lhu         $t1, 0x12($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X12);
    // 0x8004A680: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8004A684: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8004A688: bgez        $t1, L_8004A6A0
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8004A68C: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8004A6A0;
    }
    // 0x8004A68C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8004A690: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8004A694: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8004A698: nop

    // 0x8004A69C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_8004A6A0:
    // 0x8004A6A0: nop

    // 0x8004A6A4: div.s       $f10, $f6, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f0.fl);
    // 0x8004A6A8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8004A6AC: swc1        $f10, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->f10.u32l;
    // 0x8004A6B0: lhu         $t2, 0x16($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X16);
    // 0x8004A6B4: nop

    // 0x8004A6B8: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8004A6BC: bgez        $t2, L_8004A6D0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8004A6C0: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_8004A6D0;
    }
    // 0x8004A6C0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8004A6C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004A6C8: nop

    // 0x8004A6CC: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_8004A6D0:
    // 0x8004A6D0: nop

    // 0x8004A6D4: div.s       $f8, $f18, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f0.fl);
    // 0x8004A6D8: jr          $ra
    // 0x8004A6DC: swc1        $f8, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f8.u32l;
    return;
    // 0x8004A6DC: swc1        $f8, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->f8.u32l;
;}
RECOMP_FUNC void func_8004A6E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A6E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004A6E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004A6E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004A6EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004A6F0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8004A6F4: addiu       $a0, $a0, -0x586C
    ctx->r4 = ADD32(ctx->r4, -0X586C);
    // 0x8004A6F8: jal         0x80029220
    // 0x8004A6FC: sh          $a1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r5;
    func_80029220(rdram, ctx);
        goto after_0;
    // 0x8004A6FC: sh          $a1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r5;
    after_0:
    // 0x8004A700: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8004A704: lbu         $t7, -0x301C($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X301C);
    // 0x8004A708: lhu         $a1, 0x1E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X1E);
    // 0x8004A70C: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x8004A710: beq         $t8, $zero, L_8004A720
    if (ctx->r24 == 0) {
        // 0x8004A714: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8004A720;
    }
    // 0x8004A714: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8004A718: sll         $t9, $a1, 1
    ctx->r25 = S32(ctx->r5 << 1);
    // 0x8004A71C: andi        $a1, $t9, 0xFFFF
    ctx->r5 = ctx->r25 & 0XFFFF;
L_8004A720:
    // 0x8004A720: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8004A724: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x8004A728: sh          $a1, 0x44($v1)
    MEM_H(0X44, ctx->r3) = ctx->r5;
    // 0x8004A72C: lhu         $t1, 0x2($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X2);
    // 0x8004A730: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004A734: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x8004A738: jal         0x8002984C
    // 0x8004A73C: sh          $t2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r10;
    func_8002984C(rdram, ctx);
        goto after_1;
    // 0x8004A73C: sh          $t2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r10;
    after_1:
    // 0x8004A740: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8004A744: jal         0x800296E0
    // 0x8004A748: addiu       $a0, $a0, -0x58A4
    ctx->r4 = ADD32(ctx->r4, -0X58A4);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x8004A748: addiu       $a0, $a0, -0x58A4
    ctx->r4 = ADD32(ctx->r4, -0X58A4);
    after_2:
    // 0x8004A74C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004A750: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004A754: jr          $ra
    // 0x8004A758: nop

    return;
    // 0x8004A758: nop

;}
RECOMP_FUNC void func_8004A75C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A75C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8004A760: lhu         $t6, -0x32AE($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X32AE);
    // 0x8004A764: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004A768: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8004A76C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004A770: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004A774: bne         $t7, $zero, L_8004A784
    if (ctx->r15 != 0) {
        // 0x8004A778: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8004A784;
    }
    // 0x8004A778: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004A77C: jal         0x80029828
    // 0x8004A780: nop

    func_80029828(rdram, ctx);
        goto after_0;
    // 0x8004A780: nop

    after_0:
L_8004A784:
    // 0x8004A784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004A788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004A78C: jr          $ra
    // 0x8004A790: nop

    return;
    // 0x8004A790: nop

;}
RECOMP_FUNC void func_8004A794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A794: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004A798: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004A79C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004A7A0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8004A7A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004A7A8: jal         0x800296E0
    // 0x8004A7AC: addiu       $a0, $a0, -0x5840
    ctx->r4 = ADD32(ctx->r4, -0X5840);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x8004A7AC: addiu       $a0, $a0, -0x5840
    ctx->r4 = ADD32(ctx->r4, -0X5840);
    after_0:
    // 0x8004A7B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004A7B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004A7B8: jr          $ra
    // 0x8004A7BC: nop

    return;
    // 0x8004A7BC: nop

;}
RECOMP_FUNC void func_8004A7C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A7C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004A7C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004A7C8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004A7CC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8004A7D0: lhu         $a0, 0x44($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X44);
    // 0x8004A7D4: jal         0x8004A84C
    // 0x8004A7D8: nop

    func_8004A84C(rdram, ctx);
        goto after_0;
    // 0x8004A7D8: nop

    after_0:
    // 0x8004A7DC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8004A7E0: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x8004A7E4: lhu         $a0, 0x44($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X44);
    // 0x8004A7E8: jal         0x8004A898
    // 0x8004A7EC: nop

    func_8004A898(rdram, ctx);
        goto after_1;
    // 0x8004A7EC: nop

    after_1:
    // 0x8004A7F0: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8004A7F4: sb          $v0, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r2;
    // 0x8004A7F8: lhu         $a0, 0x44($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X44);
    // 0x8004A7FC: jal         0x8004A918
    // 0x8004A800: nop

    func_8004A918(rdram, ctx);
        goto after_2;
    // 0x8004A800: nop

    after_2:
    // 0x8004A804: lbu         $t9, 0x1F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1F);
    // 0x8004A808: lbu         $t0, 0x1E($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1E);
    // 0x8004A80C: nop

    // 0x8004A810: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8004A814: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x8004A818: slti        $at, $t2, 0x3
    ctx->r1 = SIGNED(ctx->r10) < 0X3 ? 1 : 0;
    // 0x8004A81C: bne         $at, $zero, L_8004A83C
    if (ctx->r1 != 0) {
        // 0x8004A820: lui         $v0, 0x8012
        ctx->r2 = S32(0X8012 << 16);
            goto L_8004A83C;
    }
    // 0x8004A820: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8004A824: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x8004A828: lhu         $t3, 0x2($v0)
    ctx->r11 = MEM_HU(ctx->r2, 0X2);
    // 0x8004A82C: nop

    // 0x8004A830: andi        $t4, $t3, 0xFFFB
    ctx->r12 = ctx->r11 & 0XFFFB;
    // 0x8004A834: jal         0x800294F8
    // 0x8004A838: sh          $t4, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r12;
    func_800294F8(rdram, ctx);
        goto after_3;
    // 0x8004A838: sh          $t4, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r12;
    after_3:
L_8004A83C:
    // 0x8004A83C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004A840: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8004A844: jr          $ra
    // 0x8004A848: nop

    return;
    // 0x8004A848: nop

;}
RECOMP_FUNC void func_8004A84C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A84C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004A850: addiu       $a1, $a1, -0x3770
    ctx->r5 = ADD32(ctx->r5, -0X3770);
    // 0x8004A854: lh          $v1, 0x6EE($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X6EE);
    // 0x8004A858: lbu         $t7, 0x6F0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X6F0);
    // 0x8004A85C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8004A860: sll         $t0, $v1, 16
    ctx->r8 = S32(ctx->r3 << 16);
    // 0x8004A864: andi        $t8, $t7, 0xFF01
    ctx->r24 = ctx->r15 & 0XFF01;
    // 0x8004A868: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x8004A86C: sra         $v1, $t0, 16
    ctx->r3 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8004A870: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8004A874: bgtz        $v1, L_8004A888
    if (SIGNED(ctx->r3) > 0) {
        // 0x8004A878: sb          $t9, 0x6F0($a1)
        MEM_B(0X6F0, ctx->r5) = ctx->r25;
            goto L_8004A888;
    }
    // 0x8004A878: sb          $t9, 0x6F0($a1)
    MEM_B(0X6F0, ctx->r5) = ctx->r25;
    // 0x8004A87C: sh          $zero, 0x6EE($a1)
    MEM_H(0X6EE, ctx->r5) = 0;
    // 0x8004A880: jr          $ra
    // 0x8004A884: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8004A884: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004A888:
    // 0x8004A888: sh          $v1, 0x6EE($a1)
    MEM_H(0X6EE, ctx->r5) = ctx->r3;
    // 0x8004A88C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004A890: jr          $ra
    // 0x8004A894: nop

    return;
    // 0x8004A894: nop

;}
RECOMP_FUNC void func_8004A898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A898: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    // 0x8004A89C: addiu       $a1, $a1, -0x3770
    ctx->r5 = ADD32(ctx->r5, -0X3770);
    // 0x8004A8A0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8004A8A4: addiu       $t7, $a1, 0x7FFF
    ctx->r15 = ADD32(ctx->r5, 0X7FFF);
    // 0x8004A8A8: lbu         $t8, 0x6C22($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X6C22);
    // 0x8004A8AC: addiu       $at, $a1, 0x7FFF
    ctx->r1 = ADD32(ctx->r5, 0X7FFF);
    // 0x8004A8B0: ori         $t9, $t8, 0x20
    ctx->r25 = ctx->r24 | 0X20;
    // 0x8004A8B4: sb          $t9, 0x6C22($at)
    MEM_B(0X6C22, ctx->r1) = ctx->r25;
    // 0x8004A8B8: addiu       $t0, $a1, 0x7FFF
    ctx->r8 = ADD32(ctx->r5, 0X7FFF);
    // 0x8004A8BC: lbu         $t0, 0x6C21($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X6C21);
    // 0x8004A8C0: addiu       $t3, $a1, 0x7FFF
    ctx->r11 = ADD32(ctx->r5, 0X7FFF);
    // 0x8004A8C4: andi        $t1, $t0, 0xFF01
    ctx->r9 = ctx->r8 & 0XFF01;
    // 0x8004A8C8: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x8004A8CC: sb          $t2, 0x6C21($at)
    MEM_B(0X6C21, ctx->r1) = ctx->r10;
    // 0x8004A8D0: lbu         $t4, 0x6C22($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X6C22);
    // 0x8004A8D4: addiu       $v1, $a1, 0x7FFF
    ctx->r3 = ADD32(ctx->r5, 0X7FFF);
    // 0x8004A8D8: ori         $t5, $t4, 0x80
    ctx->r13 = ctx->r12 | 0X80;
    // 0x8004A8DC: sb          $t5, 0x6C22($at)
    MEM_B(0X6C22, ctx->r1) = ctx->r13;
    // 0x8004A8E0: lh          $v1, 0x6C1D($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X6C1D);
    // 0x8004A8E4: addiu       $at, $a1, 0x7FFF
    ctx->r1 = ADD32(ctx->r5, 0X7FFF);
    // 0x8004A8E8: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8004A8EC: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x8004A8F0: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8004A8F4: bgtz        $v1, L_8004A90C
    if (SIGNED(ctx->r3) > 0) {
        // 0x8004A8F8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004A90C;
    }
    // 0x8004A8F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004A8FC: addiu       $at, $a1, 0x7FFF
    ctx->r1 = ADD32(ctx->r5, 0X7FFF);
    // 0x8004A900: sh          $zero, 0x6C1D($at)
    MEM_H(0X6C1D, ctx->r1) = 0;
    // 0x8004A904: jr          $ra
    // 0x8004A908: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8004A908: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004A90C:
    // 0x8004A90C: sh          $v1, 0x6C1D($at)
    MEM_H(0X6C1D, ctx->r1) = ctx->r3;
    // 0x8004A910: jr          $ra
    // 0x8004A914: nop

    return;
    // 0x8004A914: nop

;}
RECOMP_FUNC void func_8004A918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A918: lui         $t1, 0x2
    ctx->r9 = S32(0X2 << 16);
    // 0x8004A91C: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x8004A920: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8004A924: andi        $a2, $a0, 0xFFFF
    ctx->r6 = ctx->r4 & 0XFFFF;
    // 0x8004A928: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004A92C: addiu       $a3, $a3, -0x3770
    ctx->r7 = ADD32(ctx->r7, -0X3770);
    // 0x8004A930: ori         $t1, $t1, 0x8000
    ctx->r9 = ctx->r9 | 0X8000;
    // 0x8004A934: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8004A938: addiu       $t0, $zero, 0x250
    ctx->r8 = ADD32(0, 0X250);
L_8004A93C:
    // 0x8004A93C: multu       $v1, $t0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004A940: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8004A944: mflo        $t7
    ctx->r15 = lo;
    // 0x8004A948: addu        $t8, $a3, $t7
    ctx->r24 = ADD32(ctx->r7, ctx->r15);
    // 0x8004A94C: addu        $a0, $t8, $t1
    ctx->r4 = ADD32(ctx->r24, ctx->r9);
    // 0x8004A950: lh          $a1, 0xF12($a0)
    ctx->r5 = MEM_H(ctx->r4, 0XF12);
    // 0x8004A954: lbu         $t9, 0xED8($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XED8);
    // 0x8004A958: subu        $a1, $a1, $a2
    ctx->r5 = SUB32(ctx->r5, ctx->r6);
    // 0x8004A95C: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x8004A960: andi        $t2, $t9, 0xFF01
    ctx->r10 = ctx->r25 & 0XFF01;
    // 0x8004A964: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x8004A968: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8004A96C: bgtz        $a1, L_8004A984
    if (SIGNED(ctx->r5) > 0) {
        // 0x8004A970: sb          $t3, 0xED8($a0)
        MEM_B(0XED8, ctx->r4) = ctx->r11;
            goto L_8004A984;
    }
    // 0x8004A970: sb          $t3, 0xED8($a0)
    MEM_B(0XED8, ctx->r4) = ctx->r11;
    // 0x8004A974: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8004A978: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x8004A97C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004A980: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_8004A984:
    // 0x8004A984: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x8004A988: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x8004A98C: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x8004A990: bne         $at, $zero, L_8004A93C
    if (ctx->r1 != 0) {
        // 0x8004A994: sh          $a1, 0xF12($a0)
        MEM_H(0XF12, ctx->r4) = ctx->r5;
            goto L_8004A93C;
    }
    // 0x8004A994: sh          $a1, 0xF12($a0)
    MEM_H(0XF12, ctx->r4) = ctx->r5;
    // 0x8004A998: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8004A99C: bne         $at, $zero, L_8004A9AC
    if (ctx->r1 != 0) {
        // 0x8004A9A0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004A9AC;
    }
    // 0x8004A9A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004A9A4: jr          $ra
    // 0x8004A9A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8004A9A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004A9AC:
    // 0x8004A9AC: jr          $ra
    // 0x8004A9B0: nop

    return;
    // 0x8004A9B0: nop

;}
RECOMP_FUNC void func_8004A9B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004A9B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004A9B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004A9BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004A9C0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004A9C4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8004A9C8: addiu       $a0, $a0, -0x553C
    ctx->r4 = ADD32(ctx->r4, -0X553C);
    // 0x8004A9CC: jal         0x80029220
    // 0x8004A9D0: sh          $a1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r5;
    func_80029220(rdram, ctx);
        goto after_0;
    // 0x8004A9D0: sh          $a1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r5;
    after_0:
    // 0x8004A9D4: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8004A9D8: addiu       $v1, $v1, -0x3770
    ctx->r3 = ADD32(ctx->r3, -0X3770);
    // 0x8004A9DC: lbu         $t7, 0x754($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X754);
    // 0x8004A9E0: lhu         $a1, 0x1E($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X1E);
    // 0x8004A9E4: andi        $t8, $t7, 0x8
    ctx->r24 = ctx->r15 & 0X8;
    // 0x8004A9E8: beq         $t8, $zero, L_8004A9F8
    if (ctx->r24 == 0) {
        // 0x8004A9EC: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8004A9F8;
    }
    // 0x8004A9EC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8004A9F0: sll         $t9, $a1, 1
    ctx->r25 = S32(ctx->r5 << 1);
    // 0x8004A9F4: andi        $a1, $t9, 0xFFFF
    ctx->r5 = ctx->r25 & 0XFFFF;
L_8004A9F8:
    // 0x8004A9F8: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8004A9FC: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8004AA00: sh          $a1, 0x44($a2)
    MEM_H(0X44, ctx->r6) = ctx->r5;
    // 0x8004AA04: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8004AA08: sb          $zero, 0x6C15($at)
    MEM_B(0X6C15, ctx->r1) = 0;
    // 0x8004AA0C: addiu       $t2, $v0, 0x7FFF
    ctx->r10 = ADD32(ctx->r2, 0X7FFF);
    // 0x8004AA10: lbu         $t3, 0x6C22($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X6C22);
    // 0x8004AA14: addiu       $t5, $v0, 0x7FFF
    ctx->r13 = ADD32(ctx->r2, 0X7FFF);
    // 0x8004AA18: ori         $t4, $t3, 0x20
    ctx->r12 = ctx->r11 | 0X20;
    // 0x8004AA1C: sb          $t4, 0x6C22($at)
    MEM_B(0X6C22, ctx->r1) = ctx->r12;
    // 0x8004AA20: lbu         $t5, 0x6C21($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X6C21);
    // 0x8004AA24: addiu       $t8, $v0, 0x7FFF
    ctx->r24 = ADD32(ctx->r2, 0X7FFF);
    // 0x8004AA28: andi        $t6, $t5, 0xFF01
    ctx->r14 = ctx->r13 & 0XFF01;
    // 0x8004AA2C: ori         $t7, $t6, 0x4
    ctx->r15 = ctx->r14 | 0X4;
    // 0x8004AA30: sb          $t7, 0x6C21($at)
    MEM_B(0X6C21, ctx->r1) = ctx->r15;
    // 0x8004AA34: lbu         $t8, 0x6C22($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X6C22);
    // 0x8004AA38: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x8004AA3C: andi        $t9, $t8, 0xFF7F
    ctx->r25 = ctx->r24 & 0XFF7F;
    // 0x8004AA40: sb          $t9, 0x6C22($at)
    MEM_B(0X6C22, ctx->r1) = ctx->r25;
    // 0x8004AA44: sh          $a3, 0x6C1B($at)
    MEM_H(0X6C1B, ctx->r1) = ctx->r7;
    // 0x8004AA48: addiu       $t1, $v0, 0x7FFF
    ctx->r9 = ADD32(ctx->r2, 0X7FFF);
    // 0x8004AA4C: lh          $t1, 0x6C1B($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X6C1B);
    // 0x8004AA50: addiu       $t2, $v0, 0x7FFF
    ctx->r10 = ADD32(ctx->r2, 0X7FFF);
    // 0x8004AA54: sh          $t1, 0x6C19($at)
    MEM_H(0X6C19, ctx->r1) = ctx->r9;
    // 0x8004AA58: lh          $t2, 0x6C19($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X6C19);
    // 0x8004AA5C: sh          $zero, 0x6C1D($at)
    MEM_H(0X6C1D, ctx->r1) = 0;
    // 0x8004AA60: sh          $t2, 0x6C17($at)
    MEM_H(0X6C17, ctx->r1) = ctx->r10;
    // 0x8004AA64: sh          $a3, 0x6EC($v1)
    MEM_H(0X6EC, ctx->r3) = ctx->r7;
    // 0x8004AA68: lh          $t6, 0x6EC($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X6EC);
    // 0x8004AA6C: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8004AA70: lbu         $t3, 0x6F0($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X6F0);
    // 0x8004AA74: addiu       $t0, $t0, -0x32B0
    ctx->r8 = ADD32(ctx->r8, -0X32B0);
    // 0x8004AA78: lhu         $t8, 0x2($t0)
    ctx->r24 = MEM_HU(ctx->r8, 0X2);
    // 0x8004AA7C: sh          $t6, 0x6EA($v1)
    MEM_H(0X6EA, ctx->r3) = ctx->r14;
    // 0x8004AA80: lh          $t7, 0x6EA($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X6EA);
    // 0x8004AA84: andi        $t4, $t3, 0xFF01
    ctx->r12 = ctx->r11 & 0XFF01;
    // 0x8004AA88: ori         $t5, $t4, 0x4
    ctx->r13 = ctx->r12 | 0X4;
    // 0x8004AA8C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004AA90: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x8004AA94: sb          $t5, 0x6F0($v1)
    MEM_B(0X6F0, ctx->r3) = ctx->r13;
    // 0x8004AA98: sh          $zero, 0x6EE($v1)
    MEM_H(0X6EE, ctx->r3) = 0;
    // 0x8004AA9C: sh          $t9, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r25;
    // 0x8004AAA0: jal         0x8002984C
    // 0x8004AAA4: sh          $t7, 0x6E8($v1)
    MEM_H(0X6E8, ctx->r3) = ctx->r15;
    func_8002984C(rdram, ctx);
        goto after_1;
    // 0x8004AAA4: sh          $t7, 0x6E8($v1)
    MEM_H(0X6E8, ctx->r3) = ctx->r15;
    after_1:
    // 0x8004AAA8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8004AAAC: jal         0x800296E0
    // 0x8004AAB0: addiu       $a0, $a0, -0x58A4
    ctx->r4 = ADD32(ctx->r4, -0X58A4);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x8004AAB0: addiu       $a0, $a0, -0x58A4
    ctx->r4 = ADD32(ctx->r4, -0X58A4);
    after_2:
    // 0x8004AAB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004AAB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004AABC: jr          $ra
    // 0x8004AAC0: nop

    return;
    // 0x8004AAC0: nop

;}
RECOMP_FUNC void func_8004AAC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004AAC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004AAC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004AACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004AAD0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8004AAD4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004AAD8: jal         0x800296E0
    // 0x8004AADC: addiu       $a0, $a0, -0x5510
    ctx->r4 = ADD32(ctx->r4, -0X5510);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x8004AADC: addiu       $a0, $a0, -0x5510
    ctx->r4 = ADD32(ctx->r4, -0X5510);
    after_0:
    // 0x8004AAE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004AAE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004AAE8: jr          $ra
    // 0x8004AAEC: nop

    return;
    // 0x8004AAEC: nop

;}
RECOMP_FUNC void func_8004AAF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004AAF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004AAF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004AAF8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004AAFC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8004AB00: lhu         $a0, 0x44($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X44);
    // 0x8004AB04: jal         0x8004AC14
    // 0x8004AB08: nop

    func_8004AC14(rdram, ctx);
        goto after_0;
    // 0x8004AB08: nop

    after_0:
    // 0x8004AB0C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8004AB10: sb          $v0, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r2;
    // 0x8004AB14: lhu         $a0, 0x44($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X44);
    // 0x8004AB18: jal         0x8004AC68
    // 0x8004AB1C: nop

    func_8004AC68(rdram, ctx);
        goto after_1;
    // 0x8004AB1C: nop

    after_1:
    // 0x8004AB20: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x8004AB24: sb          $v0, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r2;
    // 0x8004AB28: lhu         $a0, 0x44($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X44);
    // 0x8004AB2C: jal         0x8004ACF0
    // 0x8004AB30: nop

    func_8004ACF0(rdram, ctx);
        goto after_2;
    // 0x8004AB30: nop

    after_2:
    // 0x8004AB34: lbu         $t9, 0x1E($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X1E);
    // 0x8004AB38: lbu         $t0, 0x1D($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1D);
    // 0x8004AB3C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8004AB40: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8004AB44: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x8004AB48: slti        $at, $t2, 0x3
    ctx->r1 = SIGNED(ctx->r10) < 0X3 ? 1 : 0;
    // 0x8004AB4C: bne         $at, $zero, L_8004AC04
    if (ctx->r1 != 0) {
        // 0x8004AB50: lui         $v0, 0x8010
        ctx->r2 = S32(0X8010 << 16);
            goto L_8004AC04;
    }
    // 0x8004AB50: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8004AB54: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004AB58: addiu       $a1, $a1, -0x3770
    ctx->r5 = ADD32(ctx->r5, -0X3770);
    // 0x8004AB5C: addiu       $a0, $a0, -0x32B0
    ctx->r4 = ADD32(ctx->r4, -0X32B0);
    // 0x8004AB60: lhu         $t3, 0x2($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X2);
    // 0x8004AB64: lbu         $t5, 0x6F0($a1)
    ctx->r13 = MEM_BU(ctx->r5, 0X6F0);
    // 0x8004AB68: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8004AB6C: andi        $t4, $t3, 0xFFFB
    ctx->r12 = ctx->r11 & 0XFFFB;
    // 0x8004AB70: andi        $t6, $t5, 0xFF01
    ctx->r14 = ctx->r13 & 0XFF01;
    // 0x8004AB74: sh          $t4, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r12;
    // 0x8004AB78: sb          $t6, 0x6F0($a1)
    MEM_B(0X6F0, ctx->r5) = ctx->r14;
    // 0x8004AB7C: addiu       $t7, $v0, 0x7FFF
    ctx->r15 = ADD32(ctx->r2, 0X7FFF);
    // 0x8004AB80: lbu         $t7, 0x6C22($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X6C22);
    // 0x8004AB84: addiu       $at, $v0, 0x7FFF
    ctx->r1 = ADD32(ctx->r2, 0X7FFF);
    // 0x8004AB88: andi        $t8, $t7, 0xFFDF
    ctx->r24 = ctx->r15 & 0XFFDF;
    // 0x8004AB8C: sb          $t8, 0x6C22($at)
    MEM_B(0X6C22, ctx->r1) = ctx->r24;
    // 0x8004AB90: addiu       $t9, $v0, 0x7FFF
    ctx->r25 = ADD32(ctx->r2, 0X7FFF);
    // 0x8004AB94: lbu         $t9, 0x6C21($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X6C21);
    // 0x8004AB98: addiu       $t1, $v0, 0x7FFF
    ctx->r9 = ADD32(ctx->r2, 0X7FFF);
    // 0x8004AB9C: andi        $t0, $t9, 0xFF01
    ctx->r8 = ctx->r25 & 0XFF01;
    // 0x8004ABA0: sb          $t0, 0x6C21($at)
    MEM_B(0X6C21, ctx->r1) = ctx->r8;
    // 0x8004ABA4: lbu         $t1, 0x6C22($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X6C22);
    // 0x8004ABA8: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004ABAC: lui         $a2, 0x2
    ctx->r6 = S32(0X2 << 16);
    // 0x8004ABB0: andi        $t2, $t1, 0xFF7F
    ctx->r10 = ctx->r9 & 0XFF7F;
    // 0x8004ABB4: sb          $t2, 0x6C22($at)
    MEM_B(0X6C22, ctx->r1) = ctx->r10;
    // 0x8004ABB8: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x8004ABBC: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    // 0x8004ABC0: addiu       $a1, $zero, 0x250
    ctx->r5 = ADD32(0, 0X250);
    // 0x8004ABC4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8004ABC8:
    // 0x8004ABC8: multu       $v1, $a1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004ABCC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8004ABD0: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x8004ABD4: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x8004ABD8: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x8004ABDC: mflo        $t3
    ctx->r11 = lo;
    // 0x8004ABE0: addu        $t4, $a0, $t3
    ctx->r12 = ADD32(ctx->r4, ctx->r11);
    // 0x8004ABE4: addu        $v0, $t4, $a2
    ctx->r2 = ADD32(ctx->r12, ctx->r6);
    // 0x8004ABE8: lbu         $t5, 0xED8($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0XED8);
    // 0x8004ABEC: nop

    // 0x8004ABF0: andi        $t6, $t5, 0xFF01
    ctx->r14 = ctx->r13 & 0XFF01;
    // 0x8004ABF4: bne         $at, $zero, L_8004ABC8
    if (ctx->r1 != 0) {
        // 0x8004ABF8: sb          $t6, 0xED8($v0)
        MEM_B(0XED8, ctx->r2) = ctx->r14;
            goto L_8004ABC8;
    }
    // 0x8004ABF8: sb          $t6, 0xED8($v0)
    MEM_B(0XED8, ctx->r2) = ctx->r14;
    // 0x8004ABFC: jal         0x800294F8
    // 0x8004AC00: nop

    func_800294F8(rdram, ctx);
        goto after_3;
    // 0x8004AC00: nop

    after_3:
L_8004AC04:
    // 0x8004AC04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004AC08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8004AC0C: jr          $ra
    // 0x8004AC10: nop

    return;
    // 0x8004AC10: nop

;}
RECOMP_FUNC void func_8004AC14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004AC14: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8004AC18: addiu       $a1, $a1, -0x3770
    ctx->r5 = ADD32(ctx->r5, -0X3770);
    // 0x8004AC1C: lh          $v1, 0x6EE($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X6EE);
    // 0x8004AC20: lbu         $t7, 0x6F0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X6F0);
    // 0x8004AC24: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8004AC28: sll         $t0, $v1, 16
    ctx->r8 = S32(ctx->r3 << 16);
    // 0x8004AC2C: sra         $v1, $t0, 16
    ctx->r3 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8004AC30: andi        $t8, $t7, 0xFF01
    ctx->r24 = ctx->r15 & 0XFF01;
    // 0x8004AC34: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x8004AC38: slti        $at, $v1, 0xFF
    ctx->r1 = SIGNED(ctx->r3) < 0XFF ? 1 : 0;
    // 0x8004AC3C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8004AC40: bne         $at, $zero, L_8004AC58
    if (ctx->r1 != 0) {
        // 0x8004AC44: sb          $t9, 0x6F0($a1)
        MEM_B(0X6F0, ctx->r5) = ctx->r25;
            goto L_8004AC58;
    }
    // 0x8004AC44: sb          $t9, 0x6F0($a1)
    MEM_B(0X6F0, ctx->r5) = ctx->r25;
    // 0x8004AC48: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8004AC4C: sh          $t2, 0x6EE($a1)
    MEM_H(0X6EE, ctx->r5) = ctx->r10;
    // 0x8004AC50: jr          $ra
    // 0x8004AC54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8004AC54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004AC58:
    // 0x8004AC58: sh          $v1, 0x6EE($a1)
    MEM_H(0X6EE, ctx->r5) = ctx->r3;
    // 0x8004AC5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004AC60: jr          $ra
    // 0x8004AC64: nop

    return;
    // 0x8004AC64: nop

;}
RECOMP_FUNC void func_8004AC68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004AC68: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    // 0x8004AC6C: addiu       $a1, $a1, -0x3770
    ctx->r5 = ADD32(ctx->r5, -0X3770);
    // 0x8004AC70: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8004AC74: addiu       $t7, $a1, 0x7FFF
    ctx->r15 = ADD32(ctx->r5, 0X7FFF);
    // 0x8004AC78: lbu         $t8, 0x6C22($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X6C22);
    // 0x8004AC7C: addiu       $at, $a1, 0x7FFF
    ctx->r1 = ADD32(ctx->r5, 0X7FFF);
    // 0x8004AC80: ori         $t9, $t8, 0x20
    ctx->r25 = ctx->r24 | 0X20;
    // 0x8004AC84: sb          $t9, 0x6C22($at)
    MEM_B(0X6C22, ctx->r1) = ctx->r25;
    // 0x8004AC88: addiu       $t0, $a1, 0x7FFF
    ctx->r8 = ADD32(ctx->r5, 0X7FFF);
    // 0x8004AC8C: lbu         $t0, 0x6C21($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X6C21);
    // 0x8004AC90: addiu       $t3, $a1, 0x7FFF
    ctx->r11 = ADD32(ctx->r5, 0X7FFF);
    // 0x8004AC94: andi        $t1, $t0, 0xFF01
    ctx->r9 = ctx->r8 & 0XFF01;
    // 0x8004AC98: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x8004AC9C: sb          $t2, 0x6C21($at)
    MEM_B(0X6C21, ctx->r1) = ctx->r10;
    // 0x8004ACA0: lbu         $t4, 0x6C22($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X6C22);
    // 0x8004ACA4: addiu       $v1, $a1, 0x7FFF
    ctx->r3 = ADD32(ctx->r5, 0X7FFF);
    // 0x8004ACA8: ori         $t5, $t4, 0x80
    ctx->r13 = ctx->r12 | 0X80;
    // 0x8004ACAC: sb          $t5, 0x6C22($at)
    MEM_B(0X6C22, ctx->r1) = ctx->r13;
    // 0x8004ACB0: lh          $v1, 0x6C1D($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X6C1D);
    // 0x8004ACB4: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8004ACB8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8004ACBC: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x8004ACC0: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8004ACC4: slti        $at, $v1, 0xFF
    ctx->r1 = SIGNED(ctx->r3) < 0XFF ? 1 : 0;
    // 0x8004ACC8: bne         $at, $zero, L_8004ACE0
    if (ctx->r1 != 0) {
        // 0x8004ACCC: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004ACE0;
    }
    // 0x8004ACCC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004ACD0: addiu       $at, $a1, 0x7FFF
    ctx->r1 = ADD32(ctx->r5, 0X7FFF);
    // 0x8004ACD4: sh          $t8, 0x6C1D($at)
    MEM_H(0X6C1D, ctx->r1) = ctx->r24;
    // 0x8004ACD8: jr          $ra
    // 0x8004ACDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8004ACDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004ACE0:
    // 0x8004ACE0: addiu       $at, $a1, 0x7FFF
    ctx->r1 = ADD32(ctx->r5, 0X7FFF);
    // 0x8004ACE4: sh          $v1, 0x6C1D($at)
    MEM_H(0X6C1D, ctx->r1) = ctx->r3;
    // 0x8004ACE8: jr          $ra
    // 0x8004ACEC: nop

    return;
    // 0x8004ACEC: nop

;}
RECOMP_FUNC void func_8004ACF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004ACF0: lui         $t1, 0x2
    ctx->r9 = S32(0X2 << 16);
    // 0x8004ACF4: lui         $a3, 0x800E
    ctx->r7 = S32(0X800E << 16);
    // 0x8004ACF8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8004ACFC: andi        $a2, $a0, 0xFFFF
    ctx->r6 = ctx->r4 & 0XFFFF;
    // 0x8004AD00: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004AD04: addiu       $a3, $a3, -0x3770
    ctx->r7 = ADD32(ctx->r7, -0X3770);
    // 0x8004AD08: ori         $t1, $t1, 0x8000
    ctx->r9 = ctx->r9 | 0X8000;
    // 0x8004AD0C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8004AD10: addiu       $t0, $zero, 0x250
    ctx->r8 = ADD32(0, 0X250);
L_8004AD14:
    // 0x8004AD14: multu       $v1, $t0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004AD18: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8004AD1C: mflo        $t7
    ctx->r15 = lo;
    // 0x8004AD20: addu        $t8, $a3, $t7
    ctx->r24 = ADD32(ctx->r7, ctx->r15);
    // 0x8004AD24: addu        $a0, $t8, $t1
    ctx->r4 = ADD32(ctx->r24, ctx->r9);
    // 0x8004AD28: lh          $a1, 0xF12($a0)
    ctx->r5 = MEM_H(ctx->r4, 0XF12);
    // 0x8004AD2C: lbu         $t9, 0xED8($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0XED8);
    // 0x8004AD30: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x8004AD34: sll         $t4, $a1, 16
    ctx->r12 = S32(ctx->r5 << 16);
    // 0x8004AD38: sra         $a1, $t4, 16
    ctx->r5 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8004AD3C: andi        $t2, $t9, 0xFF01
    ctx->r10 = ctx->r25 & 0XFF01;
    // 0x8004AD40: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x8004AD44: slti        $at, $a1, 0xFF
    ctx->r1 = SIGNED(ctx->r5) < 0XFF ? 1 : 0;
    // 0x8004AD48: bne         $at, $zero, L_8004AD60
    if (ctx->r1 != 0) {
        // 0x8004AD4C: sb          $t3, 0xED8($a0)
        MEM_B(0XED8, ctx->r4) = ctx->r11;
            goto L_8004AD60;
    }
    // 0x8004AD4C: sb          $t3, 0xED8($a0)
    MEM_B(0XED8, ctx->r4) = ctx->r11;
    // 0x8004AD50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8004AD54: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x8004AD58: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8004AD5C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_8004AD60:
    // 0x8004AD60: andi        $t7, $v1, 0xFF
    ctx->r15 = ctx->r3 & 0XFF;
    // 0x8004AD64: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x8004AD68: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
    // 0x8004AD6C: bne         $at, $zero, L_8004AD14
    if (ctx->r1 != 0) {
        // 0x8004AD70: sh          $a1, 0xF12($a0)
        MEM_H(0XF12, ctx->r4) = ctx->r5;
            goto L_8004AD14;
    }
    // 0x8004AD70: sh          $a1, 0xF12($a0)
    MEM_H(0XF12, ctx->r4) = ctx->r5;
    // 0x8004AD74: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8004AD78: bne         $at, $zero, L_8004AD88
    if (ctx->r1 != 0) {
        // 0x8004AD7C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004AD88;
    }
    // 0x8004AD7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004AD80: jr          $ra
    // 0x8004AD84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x8004AD84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004AD88:
    // 0x8004AD88: jr          $ra
    // 0x8004AD8C: nop

    return;
    // 0x8004AD8C: nop

;}
RECOMP_FUNC void func_8004AD90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004AD90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004AD94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004AD98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004AD9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004ADA0: jal         0x80021940
    // 0x8004ADA4: sh          $a1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r5;
    func_80021940(rdram, ctx);
        goto after_0;
    // 0x8004ADA4: sh          $a1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r5;
    after_0:
    // 0x8004ADA8: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004ADAC: lbu         $t8, -0x301C($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X301C);
    // 0x8004ADB0: lh          $a1, 0x1E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1E);
    // 0x8004ADB4: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x8004ADB8: beq         $t9, $zero, L_8004ADC8
    if (ctx->r25 == 0) {
        // 0x8004ADBC: or          $t0, $a1, $zero
        ctx->r8 = ctx->r5 | 0;
            goto L_8004ADC8;
    }
    // 0x8004ADBC: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x8004ADC0: sll         $t1, $t0, 17
    ctx->r9 = S32(ctx->r8 << 17);
    // 0x8004ADC4: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
L_8004ADC8:
    // 0x8004ADC8: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x8004ADCC: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8004ADD0: jal         0x800219BC
    // 0x8004ADD4: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_800219BC(rdram, ctx);
        goto after_1;
    // 0x8004ADD4: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_1:
    // 0x8004ADD8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004ADDC: jal         0x8002984C
    // 0x8004ADE0: nop

    func_8002984C(rdram, ctx);
        goto after_2;
    // 0x8004ADE0: nop

    after_2:
    // 0x8004ADE4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8004ADE8: jal         0x800296E0
    // 0x8004ADEC: addiu       $a0, $a0, -0x5200
    ctx->r4 = ADD32(ctx->r4, -0X5200);
    func_800296E0(rdram, ctx);
        goto after_3;
    // 0x8004ADEC: addiu       $a0, $a0, -0x5200
    ctx->r4 = ADD32(ctx->r4, -0X5200);
    after_3:
    // 0x8004ADF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004ADF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004ADF8: jr          $ra
    // 0x8004ADFC: nop

    return;
    // 0x8004ADFC: nop

;}
RECOMP_FUNC void func_8004AE00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004AE00: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004AE04: lh          $t6, -0x2FAC($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X2FAC);
    // 0x8004AE08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004AE0C: slti        $at, $t6, 0xFF
    ctx->r1 = SIGNED(ctx->r14) < 0XFF ? 1 : 0;
    // 0x8004AE10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004AE14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004AE18: bne         $at, $zero, L_8004AE28
    if (ctx->r1 != 0) {
        // 0x8004AE1C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8004AE28;
    }
    // 0x8004AE1C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004AE20: jal         0x80029828
    // 0x8004AE24: nop

    func_80029828(rdram, ctx);
        goto after_0;
    // 0x8004AE24: nop

    after_0:
L_8004AE28:
    // 0x8004AE28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004AE2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004AE30: jr          $ra
    // 0x8004AE34: nop

    return;
    // 0x8004AE34: nop

;}
RECOMP_FUNC void func_8004AE38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004AE38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004AE3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004AE40: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004AE44: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004AE48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004AE4C: sb          $zero, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = 0;
    // 0x8004AE50: jal         0x8004AEF0
    // 0x8004AE54: sh          $a1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r5;
    func_8004AEF0(rdram, ctx);
        goto after_0;
    // 0x8004AE54: sh          $a1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r5;
    after_0:
    // 0x8004AE58: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8004AE5C: lbu         $t8, -0x301C($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X301C);
    // 0x8004AE60: lh          $a1, 0x1E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1E);
    // 0x8004AE64: andi        $t9, $t8, 0x8
    ctx->r25 = ctx->r24 & 0X8;
    // 0x8004AE68: beq         $t9, $zero, L_8004AE78
    if (ctx->r25 == 0) {
        // 0x8004AE6C: or          $t0, $a1, $zero
        ctx->r8 = ctx->r5 | 0;
            goto L_8004AE78;
    }
    // 0x8004AE6C: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x8004AE70: sll         $t1, $t0, 17
    ctx->r9 = S32(ctx->r8 << 17);
    // 0x8004AE74: sra         $a1, $t1, 16
    ctx->r5 = S32(SIGNED(ctx->r9) >> 16);
L_8004AE78:
    // 0x8004AE78: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x8004AE7C: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8004AE80: jal         0x800219E4
    // 0x8004AE84: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_800219E4(rdram, ctx);
        goto after_1;
    // 0x8004AE84: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_1:
    // 0x8004AE88: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004AE8C: jal         0x8002984C
    // 0x8004AE90: nop

    func_8002984C(rdram, ctx);
        goto after_2;
    // 0x8004AE90: nop

    after_2:
    // 0x8004AE94: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8004AE98: jal         0x800296E0
    // 0x8004AE9C: addiu       $a0, $a0, -0x5150
    ctx->r4 = ADD32(ctx->r4, -0X5150);
    func_800296E0(rdram, ctx);
        goto after_3;
    // 0x8004AE9C: addiu       $a0, $a0, -0x5150
    ctx->r4 = ADD32(ctx->r4, -0X5150);
    after_3:
    // 0x8004AEA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004AEA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004AEA8: jr          $ra
    // 0x8004AEAC: nop

    return;
    // 0x8004AEAC: nop

;}
RECOMP_FUNC void func_8004AEB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004AEB0: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8004AEB4: lh          $t6, -0x2FAC($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X2FAC);
    // 0x8004AEB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004AEBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004AEC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004AEC4: bgtz        $t6, L_8004AEE0
    if (SIGNED(ctx->r14) > 0) {
        // 0x8004AEC8: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8004AEE0;
    }
    // 0x8004AEC8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004AECC: jal         0x80021940
    // 0x8004AED0: nop

    func_80021940(rdram, ctx);
        goto after_0;
    // 0x8004AED0: nop

    after_0:
    // 0x8004AED4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8004AED8: jal         0x80029828
    // 0x8004AEDC: sh          $zero, -0x2FAE($at)
    MEM_H(-0X2FAE, ctx->r1) = 0;
    func_80029828(rdram, ctx);
        goto after_1;
    // 0x8004AEDC: sh          $zero, -0x2FAE($at)
    MEM_H(-0X2FAE, ctx->r1) = 0;
    after_1:
L_8004AEE0:
    // 0x8004AEE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004AEE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004AEE8: jr          $ra
    // 0x8004AEEC: nop

    return;
    // 0x8004AEEC: nop

;}
RECOMP_FUNC void func_8004AEF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004AEF0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8004AEF4: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8004AEF8: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    // 0x8004AEFC: addiu       $v1, $v1, -0x32B0
    ctx->r3 = ADD32(ctx->r3, -0X32B0);
    // 0x8004AF00: lhu         $t6, 0x2($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X2);
    // 0x8004AF04: lbu         $t8, 0x6F0($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X6F0);
    // 0x8004AF08: lui         $a2, 0x8010
    ctx->r6 = S32(0X8010 << 16);
    // 0x8004AF0C: addiu       $a2, $a2, -0x3770
    ctx->r6 = ADD32(ctx->r6, -0X3770);
    // 0x8004AF10: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x8004AF14: andi        $t7, $t6, 0xFFFB
    ctx->r15 = ctx->r14 & 0XFFFB;
    // 0x8004AF18: andi        $t9, $t8, 0xFF01
    ctx->r25 = ctx->r24 & 0XFF01;
    // 0x8004AF1C: sh          $t7, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r15;
    // 0x8004AF20: sb          $t9, 0x6F0($a0)
    MEM_B(0X6F0, ctx->r4) = ctx->r25;
    // 0x8004AF24: sh          $a1, 0x6EE($a0)
    MEM_H(0X6EE, ctx->r4) = ctx->r5;
    // 0x8004AF28: addiu       $at, $a2, 0x7FFF
    ctx->r1 = ADD32(ctx->r6, 0X7FFF);
    // 0x8004AF2C: sh          $a1, 0x6C1B($at)
    MEM_H(0X6C1B, ctx->r1) = ctx->r5;
    // 0x8004AF30: addiu       $t0, $a2, 0x7FFF
    ctx->r8 = ADD32(ctx->r6, 0X7FFF);
    // 0x8004AF34: lh          $t0, 0x6C1B($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X6C1B);
    // 0x8004AF38: addiu       $t1, $a2, 0x7FFF
    ctx->r9 = ADD32(ctx->r6, 0X7FFF);
    // 0x8004AF3C: sh          $t0, 0x6C19($at)
    MEM_H(0X6C19, ctx->r1) = ctx->r8;
    // 0x8004AF40: lbu         $t1, 0x6C22($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X6C22);
    // 0x8004AF44: addiu       $t3, $a2, 0x7FFF
    ctx->r11 = ADD32(ctx->r6, 0X7FFF);
    // 0x8004AF48: andi        $t2, $t1, 0xFFDF
    ctx->r10 = ctx->r9 & 0XFFDF;
    // 0x8004AF4C: sb          $t2, 0x6C22($at)
    MEM_B(0X6C22, ctx->r1) = ctx->r10;
    // 0x8004AF50: lbu         $t3, 0x6C21($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X6C21);
    // 0x8004AF54: addiu       $t5, $a2, 0x7FFF
    ctx->r13 = ADD32(ctx->r6, 0X7FFF);
    // 0x8004AF58: andi        $t4, $t3, 0xFF01
    ctx->r12 = ctx->r11 & 0XFF01;
    // 0x8004AF5C: sb          $t4, 0x6C21($at)
    MEM_B(0X6C21, ctx->r1) = ctx->r12;
    // 0x8004AF60: lh          $t5, 0x6C19($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X6C19);
    // 0x8004AF64: lui         $a0, 0x800E
    ctx->r4 = S32(0X800E << 16);
    // 0x8004AF68: lui         $a3, 0x2
    ctx->r7 = S32(0X2 << 16);
    // 0x8004AF6C: sh          $a1, 0x6C1D($at)
    MEM_H(0X6C1D, ctx->r1) = ctx->r5;
    // 0x8004AF70: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x8004AF74: addiu       $a0, $a0, -0x3770
    ctx->r4 = ADD32(ctx->r4, -0X3770);
    // 0x8004AF78: addiu       $a2, $zero, 0x250
    ctx->r6 = ADD32(0, 0X250);
    // 0x8004AF7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004AF80: sh          $t5, 0x6C17($at)
    MEM_H(0X6C17, ctx->r1) = ctx->r13;
L_8004AF84:
    // 0x8004AF84: multu       $v0, $a2
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004AF88: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8004AF8C: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x8004AF90: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x8004AF94: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x8004AF98: mflo        $t6
    ctx->r14 = lo;
    // 0x8004AF9C: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x8004AFA0: addu        $v1, $t7, $a3
    ctx->r3 = ADD32(ctx->r15, ctx->r7);
    // 0x8004AFA4: lbu         $t8, 0xED8($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0XED8);
    // 0x8004AFA8: sh          $a1, 0xF12($v1)
    MEM_H(0XF12, ctx->r3) = ctx->r5;
    // 0x8004AFAC: andi        $t9, $t8, 0xFF01
    ctx->r25 = ctx->r24 & 0XFF01;
    // 0x8004AFB0: bne         $at, $zero, L_8004AF84
    if (ctx->r1 != 0) {
        // 0x8004AFB4: sb          $t9, 0xED8($v1)
        MEM_B(0XED8, ctx->r3) = ctx->r25;
            goto L_8004AF84;
    }
    // 0x8004AFB4: sb          $t9, 0xED8($v1)
    MEM_B(0XED8, ctx->r3) = ctx->r25;
    // 0x8004AFB8: jr          $ra
    // 0x8004AFBC: nop

    return;
    // 0x8004AFBC: nop

;}
RECOMP_FUNC void func_8004AFC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004AFC0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8004AFC4: lb          $v0, -0x326C($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X326C);
    // 0x8004AFC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004AFCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004AFD0: beq         $v0, $zero, L_8004AFEC
    if (ctx->r2 == 0) {
        // 0x8004AFD4: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_8004AFEC;
    }
    // 0x8004AFD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004AFD8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8004AFDC: beq         $v0, $at, L_8004B030
    if (ctx->r2 == ctx->r1) {
        // 0x8004AFE0: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8004B030;
    }
    // 0x8004AFE0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8004AFE4: b           L_8004B06C
    // 0x8004AFE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8004B06C;
    // 0x8004AFE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004AFEC:
    // 0x8004AFEC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8004AFF0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8004AFF4: jal         0x80021214
    // 0x8004AFF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_0;
    // 0x8004AFF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8004AFFC: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8004B000: addiu       $t6, $t6, -0x6CE4
    ctx->r14 = ADD32(ctx->r14, -0X6CE4);
    // 0x8004B004: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8004B008: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004B00C: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x8004B010: lw          $a2, 0x4($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X4);
    // 0x8004B014: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8004B018: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8004B01C: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x8004B020: jal         0x8004B078
    // 0x8004B024: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_1;
    // 0x8004B024: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_1:
    // 0x8004B028: b           L_8004B06C
    // 0x8004B02C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8004B06C;
    // 0x8004B02C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004B030:
    // 0x8004B030: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x8004B034: jal         0x80021214
    // 0x8004B038: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_2;
    // 0x8004B038: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8004B03C: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8004B040: addiu       $t9, $t9, -0x6CC0
    ctx->r25 = ADD32(ctx->r25, -0X6CC0);
    // 0x8004B044: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x8004B048: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004B04C: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x8004B050: lw          $a2, 0x4($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X4);
    // 0x8004B054: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8004B058: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8004B05C: lw          $a3, 0x8($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X8);
    // 0x8004B060: jal         0x8004B078
    // 0x8004B064: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_3;
    // 0x8004B064: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_3:
    // 0x8004B068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004B06C:
    // 0x8004B06C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004B070: jr          $ra
    // 0x8004B074: nop

    return;
    // 0x8004B074: nop

;}
RECOMP_FUNC void func_8004B078(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004B078: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004B07C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004B080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004B084: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8004B088: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8004B08C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8004B090: jal         0x8002924C
    // 0x8004B094: addiu       $a1, $a1, -0x4EF4
    ctx->r5 = ADD32(ctx->r5, -0X4EF4);
    func_8002924C(rdram, ctx);
        goto after_0;
    // 0x8004B094: addiu       $a1, $a1, -0x4EF4
    ctx->r5 = ADD32(ctx->r5, -0X4EF4);
    after_0:
    // 0x8004B098: lbu         $t6, 0x21($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X21);
    // 0x8004B09C: lbu         $t8, 0x22($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X22);
    // 0x8004B0A0: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8004B0A4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8004B0A8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8004B0AC: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8004B0B0: ori         $at, $at, 0xEC28
    ctx->r1 = ctx->r1 | 0XEC28;
    // 0x8004B0B4: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8004B0B8: addiu       $t2, $t2, -0x3770
    ctx->r10 = ADD32(ctx->r10, -0X3770);
    // 0x8004B0BC: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x8004B0C0: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8004B0C4: sw          $t3, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r11;
    // 0x8004B0C8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8004B0CC: nop

    // 0x8004B0D0: sw          $t4, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r12;
    // 0x8004B0D4: lbu         $t5, 0x20($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X20);
    // 0x8004B0D8: nop

    // 0x8004B0DC: sb          $t5, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r13;
    // 0x8004B0E0: lhu         $t6, 0x26($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X26);
    // 0x8004B0E4: nop

    // 0x8004B0E8: sh          $t6, 0x50($v0)
    MEM_H(0X50, ctx->r2) = ctx->r14;
    // 0x8004B0EC: lhu         $t7, 0x24($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X24);
    // 0x8004B0F0: sh          $zero, 0x54($v0)
    MEM_H(0X54, ctx->r2) = 0;
    // 0x8004B0F4: sh          $zero, 0x56($v0)
    MEM_H(0X56, ctx->r2) = 0;
    // 0x8004B0F8: sh          $t7, 0x52($v0)
    MEM_H(0X52, ctx->r2) = ctx->r15;
    // 0x8004B0FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004B100: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004B104: jr          $ra
    // 0x8004B108: nop

    return;
    // 0x8004B108: nop

;}
RECOMP_FUNC void func_8004B10C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004B10C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004B110: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004B114: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8004B118: lw          $t6, 0x48($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X48);
    // 0x8004B11C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8004B120: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8004B124: lhu         $t7, 0x54($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X54);
    // 0x8004B128: lhu         $t9, 0x50($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X50);
    // 0x8004B12C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8004B130: andi        $t0, $t8, 0xFFFF
    ctx->r8 = ctx->r24 & 0XFFFF;
    // 0x8004B134: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8004B138: beq         $at, $zero, L_8004B150
    if (ctx->r1 == 0) {
        // 0x8004B13C: sh          $t8, 0x54($a0)
        MEM_H(0X54, ctx->r4) = ctx->r24;
            goto L_8004B150;
    }
    // 0x8004B13C: sh          $t8, 0x54($a0)
    MEM_H(0X54, ctx->r4) = ctx->r24;
    // 0x8004B140: lhu         $t1, 0x56($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X56);
    // 0x8004B144: sh          $zero, 0x54($a0)
    MEM_H(0X54, ctx->r4) = 0;
    // 0x8004B148: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8004B14C: sh          $t2, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r10;
L_8004B150:
    // 0x8004B150: lhu         $v0, 0x56($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X56);
    // 0x8004B154: lbu         $t3, 0x4C($a3)
    ctx->r11 = MEM_BU(ctx->r7, 0X4C);
    // 0x8004B158: nop

    // 0x8004B15C: slt         $at, $v0, $t3
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8004B160: bne         $at, $zero, L_8004B174
    if (ctx->r1 != 0) {
        // 0x8004B164: lw          $t5, 0x1C($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X1C);
            goto L_8004B174;
    }
    // 0x8004B164: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8004B168: sh          $zero, 0x56($a3)
    MEM_H(0X56, ctx->r7) = 0;
    // 0x8004B16C: andi        $v0, $zero, 0xFFFF
    ctx->r2 = 0 & 0XFFFF;
    // 0x8004B170: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
L_8004B174:
    // 0x8004B174: sll         $t4, $v0, 1
    ctx->r12 = S32(ctx->r2 << 1);
    // 0x8004B178: addu        $a0, $t4, $t5
    ctx->r4 = ADD32(ctx->r12, ctx->r13);
    // 0x8004B17C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    // 0x8004B180: lhu         $a2, 0x52($a3)
    ctx->r6 = MEM_HU(ctx->r7, 0X52);
    // 0x8004B184: lw          $a1, 0x44($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X44);
    // 0x8004B188: jal         0x80020AA0
    // 0x8004B18C: nop

    func_80020AA0(rdram, ctx);
        goto after_0;
    // 0x8004B18C: nop

    after_0:
    // 0x8004B190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004B194: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8004B198: jr          $ra
    // 0x8004B19C: nop

    return;
    // 0x8004B19C: nop

;}
RECOMP_FUNC void func_8004B1A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004B1A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004B1A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004B1A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004B1AC: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8004B1B0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8004B1B4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8004B1B8: jal         0x8002924C
    // 0x8004B1BC: addiu       $a1, $a1, -0x4DE0
    ctx->r5 = ADD32(ctx->r5, -0X4DE0);
    func_8002924C(rdram, ctx);
        goto after_0;
    // 0x8004B1BC: addiu       $a1, $a1, -0x4DE0
    ctx->r5 = ADD32(ctx->r5, -0X4DE0);
    after_0:
    // 0x8004B1C0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8004B1C4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8004B1C8: sw          $t6, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->r14;
    // 0x8004B1CC: lhu         $t7, 0x22($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X22);
    // 0x8004B1D0: ori         $at, $at, 0xEC28
    ctx->r1 = ctx->r1 | 0XEC28;
    // 0x8004B1D4: sb          $t7, 0x4C($v0)
    MEM_B(0X4C, ctx->r2) = ctx->r15;
    // 0x8004B1D8: lhu         $t8, 0x24($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X24);
    // 0x8004B1DC: lui         $t5, 0x800E
    ctx->r13 = S32(0X800E << 16);
    // 0x8004B1E0: sh          $t8, 0x50($v0)
    MEM_H(0X50, ctx->r2) = ctx->r24;
    // 0x8004B1E4: lbu         $t9, 0x20($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X20);
    // 0x8004B1E8: lbu         $t1, 0x21($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X21);
    // 0x8004B1EC: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x8004B1F0: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8004B1F4: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8004B1F8: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x8004B1FC: addiu       $t5, $t5, -0x3770
    ctx->r13 = ADD32(ctx->r13, -0X3770);
    // 0x8004B200: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8004B204: sw          $t6, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->r14;
    // 0x8004B208: sh          $zero, 0x54($v0)
    MEM_H(0X54, ctx->r2) = 0;
    // 0x8004B20C: sh          $zero, 0x56($v0)
    MEM_H(0X56, ctx->r2) = 0;
    // 0x8004B210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004B214: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004B218: jr          $ra
    // 0x8004B21C: nop

    return;
    // 0x8004B21C: nop

;}
RECOMP_FUNC void func_8004B220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004B220: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004B224: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8004B228: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8004B22C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8004B230: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8004B234: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8004B238: lhu         $t6, 0x54($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X54);
    // 0x8004B23C: lhu         $t8, 0x50($a0)
    ctx->r24 = MEM_HU(ctx->r4, 0X50);
    // 0x8004B240: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8004B244: andi        $t9, $t7, 0xFFFF
    ctx->r25 = ctx->r15 & 0XFFFF;
    // 0x8004B248: lbu         $v0, 0x4C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4C);
    // 0x8004B24C: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8004B250: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8004B254: beq         $at, $zero, L_8004B26C
    if (ctx->r1 == 0) {
        // 0x8004B258: sh          $t7, 0x54($a0)
        MEM_H(0X54, ctx->r4) = ctx->r15;
            goto L_8004B26C;
    }
    // 0x8004B258: sh          $t7, 0x54($a0)
    MEM_H(0X54, ctx->r4) = ctx->r15;
    // 0x8004B25C: lhu         $t0, 0x56($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X56);
    // 0x8004B260: sh          $zero, 0x54($a0)
    MEM_H(0X54, ctx->r4) = 0;
    // 0x8004B264: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8004B268: sh          $t1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r9;
L_8004B26C:
    // 0x8004B26C: lhu         $t2, 0x56($s1)
    ctx->r10 = MEM_HU(ctx->r17, 0X56);
    // 0x8004B270: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8004B274: slt         $at, $t2, $v0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004B278: bne         $at, $zero, L_8004B284
    if (ctx->r1 != 0) {
        // 0x8004B27C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8004B284;
    }
    // 0x8004B27C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8004B280: sh          $zero, 0x56($s1)
    MEM_H(0X56, ctx->r17) = 0;
L_8004B284:
    // 0x8004B284: blez        $s2, L_8004B2E8
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8004B288: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8004B2E8;
    }
    // 0x8004B288: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8004B28C:
    // 0x8004B28C: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8004B290: lw          $t3, 0x48($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X48);
    // 0x8004B294: sll         $t4, $s0, 1
    ctx->r12 = S32(ctx->r16 << 1);
    // 0x8004B298: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8004B29C: beq         $at, $zero, L_8004B2BC
    if (ctx->r1 == 0) {
        // 0x8004B2A0: addu        $a0, $t3, $t4
        ctx->r4 = ADD32(ctx->r11, ctx->r12);
            goto L_8004B2BC;
    }
    // 0x8004B2A0: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    // 0x8004B2A4: subu        $t5, $s2, $v1
    ctx->r13 = SUB32(ctx->r18, ctx->r3);
    // 0x8004B2A8: lw          $t8, 0x44($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X44);
    // 0x8004B2AC: addu        $t6, $t5, $v0
    ctx->r14 = ADD32(ctx->r13, ctx->r2);
    // 0x8004B2B0: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8004B2B4: b           L_8004B2CC
    // 0x8004B2B8: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
        goto L_8004B2CC;
    // 0x8004B2B8: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
L_8004B2BC:
    // 0x8004B2BC: lw          $t1, 0x44($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X44);
    // 0x8004B2C0: subu        $t9, $v0, $v1
    ctx->r25 = SUB32(ctx->r2, ctx->r3);
    // 0x8004B2C4: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8004B2C8: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
L_8004B2CC:
    // 0x8004B2CC: jal         0x80020AA0
    // 0x8004B2D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80020AA0(rdram, ctx);
        goto after_0;
    // 0x8004B2D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8004B2D4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8004B2D8: andi        $v0, $s0, 0xFFFF
    ctx->r2 = ctx->r16 & 0XFFFF;
    // 0x8004B2DC: slt         $at, $v0, $s2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x8004B2E0: bne         $at, $zero, L_8004B28C
    if (ctx->r1 != 0) {
        // 0x8004B2E4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_8004B28C;
    }
    // 0x8004B2E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8004B2E8:
    // 0x8004B2E8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8004B2EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8004B2F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8004B2F4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8004B2F8: jr          $ra
    // 0x8004B2FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8004B2FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8004B300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004B300: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8004B304: lhu         $t0, 0x4A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X4A);
    // 0x8004B308: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8004B30C: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8004B310: lhu         $t7, 0x3E($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X3E);
    // 0x8004B314: lhu         $t6, 0x3A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X3A);
    // 0x8004B318: lhu         $t8, 0x42($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X42);
    // 0x8004B31C: lhu         $t9, 0x46($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X46);
    // 0x8004B320: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8004B324: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8004B328: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x8004B32C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8004B330: lbu         $a3, 0x37($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X37);
    // 0x8004B334: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x8004B338: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8004B33C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8004B340: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8004B344: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8004B348: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8004B34C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8004B350: bgez        $t0, L_8004B368
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8004B354: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8004B368;
    }
    // 0x8004B354: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8004B358: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8004B35C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004B360: nop

    // 0x8004B364: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_8004B368:
    // 0x8004B368: subu        $t1, $t8, $t6
    ctx->r9 = SUB32(ctx->r24, ctx->r14);
    // 0x8004B36C: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x8004B370: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8004B374: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8004B378: subu        $t4, $t9, $t7
    ctx->r12 = SUB32(ctx->r25, ctx->r15);
    // 0x8004B37C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8004B380: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8004B384: mul.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8004B388: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8004B38C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8004B390: nop

    // 0x8004B394: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8004B398: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8004B39C: nop

    // 0x8004B3A0: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8004B3A4: beq         $t3, $zero, L_8004B3F0
    if (ctx->r11 == 0) {
        // 0x8004B3A8: nop
    
            goto L_8004B3F0;
    }
    // 0x8004B3A8: nop

    // 0x8004B3AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004B3B0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8004B3B4: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8004B3B8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004B3BC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8004B3C0: nop

    // 0x8004B3C4: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8004B3C8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8004B3CC: nop

    // 0x8004B3D0: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8004B3D4: bne         $t3, $zero, L_8004B3E8
    if (ctx->r11 != 0) {
        // 0x8004B3D8: nop
    
            goto L_8004B3E8;
    }
    // 0x8004B3D8: nop

    // 0x8004B3DC: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x8004B3E0: b           L_8004B400
    // 0x8004B3E4: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_8004B400;
    // 0x8004B3E4: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_8004B3E8:
    // 0x8004B3E8: b           L_8004B400
    // 0x8004B3EC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_8004B400;
    // 0x8004B3EC: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
L_8004B3F0:
    // 0x8004B3F0: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x8004B3F4: nop

    // 0x8004B3F8: bltz        $t3, L_8004B3E8
    if (SIGNED(ctx->r11) < 0) {
        // 0x8004B3FC: nop
    
            goto L_8004B3E8;
    }
    // 0x8004B3FC: nop

L_8004B400:
    // 0x8004B400: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8004B404: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x8004B408: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8004B40C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8004B410: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8004B414: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8004B418: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8004B41C: mul.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x8004B420: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8004B424: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8004B428: nop

    // 0x8004B42C: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8004B430: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8004B434: nop

    // 0x8004B438: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x8004B43C: beq         $t0, $zero, L_8004B488
    if (ctx->r8 == 0) {
        // 0x8004B440: nop
    
            goto L_8004B488;
    }
    // 0x8004B440: nop

    // 0x8004B444: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8004B448: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8004B44C: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8004B450: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004B454: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8004B458: nop

    // 0x8004B45C: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8004B460: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8004B464: nop

    // 0x8004B468: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x8004B46C: bne         $t0, $zero, L_8004B480
    if (ctx->r8 != 0) {
        // 0x8004B470: nop
    
            goto L_8004B480;
    }
    // 0x8004B470: nop

    // 0x8004B474: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x8004B478: b           L_8004B498
    // 0x8004B47C: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_8004B498;
    // 0x8004B47C: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_8004B480:
    // 0x8004B480: b           L_8004B498
    // 0x8004B484: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_8004B498;
    // 0x8004B484: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_8004B488:
    // 0x8004B488: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x8004B48C: nop

    // 0x8004B490: bltz        $t0, L_8004B480
    if (SIGNED(ctx->r8) < 0) {
        // 0x8004B494: nop
    
            goto L_8004B480;
    }
    // 0x8004B494: nop

L_8004B498:
    // 0x8004B498: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8004B49C: jal         0x8004B668
    // 0x8004B4A0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_8004B668(rdram, ctx);
        goto after_0;
    // 0x8004B4A0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_0:
    // 0x8004B4A4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8004B4A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8004B4AC: jr          $ra
    // 0x8004B4B0: nop

    return;
    // 0x8004B4B0: nop

;}
RECOMP_FUNC void func_8004B4B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004B4B4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8004B4B8: lhu         $t0, 0x4A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X4A);
    // 0x8004B4BC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8004B4C0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8004B4C4: lhu         $t7, 0x3E($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X3E);
    // 0x8004B4C8: lhu         $t6, 0x3A($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X3A);
    // 0x8004B4CC: lhu         $t8, 0x42($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X42);
    // 0x8004B4D0: lhu         $t9, 0x46($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X46);
    // 0x8004B4D4: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8004B4D8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8004B4DC: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x8004B4E0: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8004B4E4: lbu         $a3, 0x37($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X37);
    // 0x8004B4E8: lw          $a2, 0x4C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X4C);
    // 0x8004B4EC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8004B4F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8004B4F4: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8004B4F8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8004B4FC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8004B500: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8004B504: bgez        $t0, L_8004B51C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8004B508: cvt.s.w     $f0, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
            goto L_8004B51C;
    }
    // 0x8004B508: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8004B50C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8004B510: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8004B514: nop

    // 0x8004B518: add.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f6.fl;
L_8004B51C:
    // 0x8004B51C: subu        $t1, $t6, $t8
    ctx->r9 = SUB32(ctx->r14, ctx->r24);
    // 0x8004B520: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x8004B524: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8004B528: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8004B52C: subu        $t4, $t7, $t9
    ctx->r12 = SUB32(ctx->r15, ctx->r25);
    // 0x8004B530: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8004B534: div.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = DIV_S(ctx->f10.fl, ctx->f0.fl);
    // 0x8004B538: mul.s       $f18, $f2, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x8004B53C: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8004B540: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8004B544: nop

    // 0x8004B548: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8004B54C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8004B550: nop

    // 0x8004B554: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8004B558: beq         $t3, $zero, L_8004B5A4
    if (ctx->r11 == 0) {
        // 0x8004B55C: nop
    
            goto L_8004B5A4;
    }
    // 0x8004B55C: nop

    // 0x8004B560: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8004B564: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8004B568: sub.s       $f4, $f18, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f4.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8004B56C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004B570: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8004B574: nop

    // 0x8004B578: cvt.w.s     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8004B57C: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8004B580: nop

    // 0x8004B584: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x8004B588: bne         $t3, $zero, L_8004B59C
    if (ctx->r11 != 0) {
        // 0x8004B58C: nop
    
            goto L_8004B59C;
    }
    // 0x8004B58C: nop

    // 0x8004B590: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x8004B594: b           L_8004B5B4
    // 0x8004B598: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_8004B5B4;
    // 0x8004B598: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_8004B59C:
    // 0x8004B59C: b           L_8004B5B4
    // 0x8004B5A0: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_8004B5B4;
    // 0x8004B5A0: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
L_8004B5A4:
    // 0x8004B5A4: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x8004B5A8: nop

    // 0x8004B5AC: bltz        $t3, L_8004B59C
    if (SIGNED(ctx->r11) < 0) {
        // 0x8004B5B0: nop
    
            goto L_8004B59C;
    }
    // 0x8004B5B0: nop

L_8004B5B4:
    // 0x8004B5B4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8004B5B8: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x8004B5BC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8004B5C0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8004B5C4: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x8004B5C8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8004B5CC: div.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f0.fl);
    // 0x8004B5D0: mul.s       $f16, $f2, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x8004B5D4: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x8004B5D8: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8004B5DC: nop

    // 0x8004B5E0: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8004B5E4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8004B5E8: nop

    // 0x8004B5EC: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x8004B5F0: beq         $t0, $zero, L_8004B63C
    if (ctx->r8 == 0) {
        // 0x8004B5F4: nop
    
            goto L_8004B63C;
    }
    // 0x8004B5F4: nop

    // 0x8004B5F8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8004B5FC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8004B600: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8004B604: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004B608: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x8004B60C: nop

    // 0x8004B610: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8004B614: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x8004B618: nop

    // 0x8004B61C: andi        $t0, $t0, 0x78
    ctx->r8 = ctx->r8 & 0X78;
    // 0x8004B620: bne         $t0, $zero, L_8004B634
    if (ctx->r8 != 0) {
        // 0x8004B624: nop
    
            goto L_8004B634;
    }
    // 0x8004B624: nop

    // 0x8004B628: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x8004B62C: b           L_8004B64C
    // 0x8004B630: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
        goto L_8004B64C;
    // 0x8004B630: or          $t0, $t0, $at
    ctx->r8 = ctx->r8 | ctx->r1;
L_8004B634:
    // 0x8004B634: b           L_8004B64C
    // 0x8004B638: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
        goto L_8004B64C;
    // 0x8004B638: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_8004B63C:
    // 0x8004B63C: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x8004B640: nop

    // 0x8004B644: bltz        $t0, L_8004B634
    if (SIGNED(ctx->r8) < 0) {
        // 0x8004B648: nop
    
            goto L_8004B634;
    }
    // 0x8004B648: nop

L_8004B64C:
    // 0x8004B64C: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x8004B650: jal         0x8004B668
    // 0x8004B654: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_8004B668(rdram, ctx);
        goto after_0;
    // 0x8004B654: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_0:
    // 0x8004B658: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8004B65C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8004B660: jr          $ra
    // 0x8004B664: nop

    return;
    // 0x8004B664: nop

;}
RECOMP_FUNC void func_8004B668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004B668: andi        $t6, $a3, 0xFF
    ctx->r14 = ctx->r7 & 0XFF;
    // 0x8004B66C: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8004B670: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8004B674: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004B678: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8004B67C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8004B680: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8004B684: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8004B688: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8004B68C: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8004B690: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x8004B694: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x8004B698: lhu         $t0, 0x2A($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X2A);
    // 0x8004B69C: lhu         $t1, 0x2E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X2E);
    // 0x8004B6A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004B6A4: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8004B6A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004B6AC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8004B6B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004B6B4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8004B6B8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8004B6BC: sb          $zero, 0xED4($v0)
    MEM_B(0XED4, ctx->r2) = 0;
    // 0x8004B6C0: addiu       $a0, $a0, -0x485C
    ctx->r4 = ADD32(ctx->r4, -0X485C);
    // 0x8004B6C4: sh          $t0, 0xF08($v0)
    MEM_H(0XF08, ctx->r2) = ctx->r8;
    // 0x8004B6C8: jal         0x80029220
    // 0x8004B6CC: sh          $t1, 0xF0A($v0)
    MEM_H(0XF0A, ctx->r2) = ctx->r9;
    func_80029220(rdram, ctx);
        goto after_0;
    // 0x8004B6CC: sh          $t1, 0xF0A($v0)
    MEM_H(0XF0A, ctx->r2) = ctx->r9;
    after_0:
    // 0x8004B6D0: lbu         $t2, 0x1F($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X1F);
    // 0x8004B6D4: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8004B6D8: sb          $t2, 0x28($v0)
    MEM_B(0X28, ctx->r2) = ctx->r10;
    // 0x8004B6DC: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8004B6E0: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8004B6E4: sw          $t3, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->r11;
    // 0x8004B6E8: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8004B6EC: addiu       $a2, $a2, -0x32B0
    ctx->r6 = ADD32(ctx->r6, -0X32B0);
    // 0x8004B6F0: sw          $t4, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->r12;
    // 0x8004B6F4: lhu         $t5, 0x32($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X32);
    // 0x8004B6F8: nop

    // 0x8004B6FC: sh          $t5, 0x3C($v0)
    MEM_H(0X3C, ctx->r2) = ctx->r13;
    // 0x8004B700: lhu         $t6, 0x36($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X36);
    // 0x8004B704: nop

    // 0x8004B708: sh          $t6, 0x3E($v0)
    MEM_H(0X3E, ctx->r2) = ctx->r14;
    // 0x8004B70C: lhu         $t7, 0x2A($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X2A);
    // 0x8004B710: nop

    // 0x8004B714: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8004B718: and         $t9, $t8, $v1
    ctx->r25 = ctx->r24 & ctx->r3;
    // 0x8004B71C: sw          $t9, 0x2C($v0)
    MEM_W(0X2C, ctx->r2) = ctx->r25;
    // 0x8004B720: lhu         $t0, 0x2E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X2E);
    // 0x8004B724: nop

    // 0x8004B728: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x8004B72C: and         $t2, $t1, $v1
    ctx->r10 = ctx->r9 & ctx->r3;
    // 0x8004B730: sw          $t2, 0x30($v0)
    MEM_W(0X30, ctx->r2) = ctx->r10;
    // 0x8004B734: lhu         $t3, 0x2($a2)
    ctx->r11 = MEM_HU(ctx->r6, 0X2);
    // 0x8004B738: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8004B73C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004B740: ori         $t4, $t3, 0x8
    ctx->r12 = ctx->r11 | 0X8;
    // 0x8004B744: jal         0x8002985C
    // 0x8004B748: sh          $t4, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r12;
    func_8002985C(rdram, ctx);
        goto after_1;
    // 0x8004B748: sh          $t4, 0x2($a2)
    MEM_H(0X2, ctx->r6) = ctx->r12;
    after_1:
    // 0x8004B74C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004B750: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8004B754: jal         0x800296F0
    // 0x8004B758: addiu       $a1, $a1, -0x4894
    ctx->r5 = ADD32(ctx->r5, -0X4894);
    func_800296F0(rdram, ctx);
        goto after_2;
    // 0x8004B758: addiu       $a1, $a1, -0x4894
    ctx->r5 = ADD32(ctx->r5, -0X4894);
    after_2:
    // 0x8004B75C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004B760: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004B764: jr          $ra
    // 0x8004B768: nop

    return;
    // 0x8004B768: nop

;}
RECOMP_FUNC void func_8004B76C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004B76C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8004B770: lhu         $t6, -0x32AE($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X32AE);
    // 0x8004B774: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004B778: andi        $t7, $t6, 0x8
    ctx->r15 = ctx->r14 & 0X8;
    // 0x8004B77C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004B780: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004B784: bne         $t7, $zero, L_8004B794
    if (ctx->r15 != 0) {
        // 0x8004B788: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8004B794;
    }
    // 0x8004B788: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004B78C: jal         0x80029828
    // 0x8004B790: nop

    func_80029828(rdram, ctx);
        goto after_0;
    // 0x8004B790: nop

    after_0:
L_8004B794:
    // 0x8004B794: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004B798: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004B79C: jr          $ra
    // 0x8004B7A0: nop

    return;
    // 0x8004B7A0: nop

;}
RECOMP_FUNC void func_8004B7A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004B7A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004B7A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004B7AC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8004B7B0: lbu         $t6, 0x29($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X29);
    // 0x8004B7B4: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8004B7B8: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8004B7BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8004B7C0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8004B7C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8004B7C8: lbu         $v0, 0x28($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X28);
    // 0x8004B7CC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8004B7D0: ori         $at, $at, 0x8ED0
    ctx->r1 = ctx->r1 | 0X8ED0;
    // 0x8004B7D4: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8004B7D8: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x8004B7DC: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x8004B7E0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8004B7E4: beq         $v0, $zero, L_8004B808
    if (ctx->r2 == 0) {
        // 0x8004B7E8: addu        $a3, $t8, $t9
        ctx->r7 = ADD32(ctx->r24, ctx->r25);
            goto L_8004B808;
    }
    // 0x8004B7E8: addu        $a3, $t8, $t9
    ctx->r7 = ADD32(ctx->r24, ctx->r25);
    // 0x8004B7EC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8004B7F0: beq         $v0, $at, L_8004B874
    if (ctx->r2 == ctx->r1) {
        // 0x8004B7F4: nop
    
            goto L_8004B874;
    }
    // 0x8004B7F4: nop

    // 0x8004B7F8: lhu         $a2, 0x18($sp)
    ctx->r6 = MEM_HU(ctx->r29, 0X18);
    // 0x8004B7FC: lhu         $a1, 0x1A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X1A);
    // 0x8004B800: b           L_8004B8E0
    // 0x8004B804: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
        goto L_8004B8E0;
    // 0x8004B804: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
L_8004B808:
    // 0x8004B808: lw          $t0, 0x2C($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X2C);
    // 0x8004B80C: lw          $t1, 0x34($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X34);
    // 0x8004B810: lw          $t3, 0x30($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X30);
    // 0x8004B814: lw          $t4, 0x38($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X38);
    // 0x8004B818: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8004B81C: lh          $v0, 0x3C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X3C);
    // 0x8004B820: srl         $t7, $t2, 16
    ctx->r15 = S32(U32(ctx->r10) >> 16);
    // 0x8004B824: andi        $a1, $t7, 0xFFFF
    ctx->r5 = ctx->r15 & 0XFFFF;
    // 0x8004B828: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8004B82C: srl         $t0, $t5, 16
    ctx->r8 = S32(U32(ctx->r13) >> 16);
    // 0x8004B830: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004B834: sw          $t2, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r10;
    // 0x8004B838: sw          $t5, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r13;
    // 0x8004B83C: bne         $at, $zero, L_8004B84C
    if (ctx->r1 != 0) {
        // 0x8004B840: andi        $a2, $t0, 0xFFFF
        ctx->r6 = ctx->r8 & 0XFFFF;
            goto L_8004B84C;
    }
    // 0x8004B840: andi        $a2, $t0, 0xFFFF
    ctx->r6 = ctx->r8 & 0XFFFF;
    // 0x8004B844: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x8004B848: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8004B84C:
    // 0x8004B84C: lh          $v0, 0x3E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X3E);
    // 0x8004B850: nop

    // 0x8004B854: slt         $at, $a2, $v0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004B858: bne         $at, $zero, L_8004B8E0
    if (ctx->r1 != 0) {
        // 0x8004B85C: slti        $at, $v1, 0x2
        ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8004B8E0;
    }
    // 0x8004B85C: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8004B860: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8004B864: andi        $t2, $v1, 0xFF
    ctx->r10 = ctx->r3 & 0XFF;
    // 0x8004B868: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    // 0x8004B86C: b           L_8004B8DC
    // 0x8004B870: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
        goto L_8004B8DC;
    // 0x8004B870: or          $v1, $t2, $zero
    ctx->r3 = ctx->r10 | 0;
L_8004B874:
    // 0x8004B874: lw          $t3, 0x2C($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X2C);
    // 0x8004B878: lw          $t4, 0x34($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X34);
    // 0x8004B87C: lw          $t6, 0x30($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X30);
    // 0x8004B880: lw          $t7, 0x38($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X38);
    // 0x8004B884: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x8004B888: lh          $v0, 0x3C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X3C);
    // 0x8004B88C: srl         $t0, $t5, 16
    ctx->r8 = S32(U32(ctx->r13) >> 16);
    // 0x8004B890: andi        $a1, $t0, 0xFFFF
    ctx->r5 = ctx->r8 & 0XFFFF;
    // 0x8004B894: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x8004B898: srl         $t3, $t8, 16
    ctx->r11 = S32(U32(ctx->r24) >> 16);
    // 0x8004B89C: slt         $at, $v0, $a1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8004B8A0: sw          $t5, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r13;
    // 0x8004B8A4: sw          $t8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r24;
    // 0x8004B8A8: bne         $at, $zero, L_8004B8B8
    if (ctx->r1 != 0) {
        // 0x8004B8AC: andi        $a2, $t3, 0xFFFF
        ctx->r6 = ctx->r11 & 0XFFFF;
            goto L_8004B8B8;
    }
    // 0x8004B8AC: andi        $a2, $t3, 0xFFFF
    ctx->r6 = ctx->r11 & 0XFFFF;
    // 0x8004B8B0: andi        $a1, $v0, 0xFFFF
    ctx->r5 = ctx->r2 & 0XFFFF;
    // 0x8004B8B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8004B8B8:
    // 0x8004B8B8: lh          $v0, 0x3E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X3E);
    // 0x8004B8BC: nop

    // 0x8004B8C0: slt         $at, $v0, $a2
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8004B8C4: bne         $at, $zero, L_8004B8E0
    if (ctx->r1 != 0) {
        // 0x8004B8C8: slti        $at, $v1, 0x2
        ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8004B8E0;
    }
    // 0x8004B8C8: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8004B8CC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8004B8D0: andi        $t5, $v1, 0xFF
    ctx->r13 = ctx->r3 & 0XFF;
    // 0x8004B8D4: andi        $a2, $v0, 0xFFFF
    ctx->r6 = ctx->r2 & 0XFFFF;
    // 0x8004B8D8: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
L_8004B8DC:
    // 0x8004B8DC: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
L_8004B8E0:
    // 0x8004B8E0: sh          $a1, 0x38($a3)
    MEM_H(0X38, ctx->r7) = ctx->r5;
    // 0x8004B8E4: bne         $at, $zero, L_8004B908
    if (ctx->r1 != 0) {
        // 0x8004B8E8: sh          $a2, 0x3A($a3)
        MEM_H(0X3A, ctx->r7) = ctx->r6;
            goto L_8004B908;
    }
    // 0x8004B8E8: sh          $a2, 0x3A($a3)
    MEM_H(0X3A, ctx->r7) = ctx->r6;
    // 0x8004B8EC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8004B8F0: addiu       $v0, $v0, -0x32B0
    ctx->r2 = ADD32(ctx->r2, -0X32B0);
    // 0x8004B8F4: lhu         $t6, 0x2($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X2);
    // 0x8004B8F8: nop

    // 0x8004B8FC: andi        $t7, $t6, 0xFFF7
    ctx->r15 = ctx->r14 & 0XFFF7;
    // 0x8004B900: jal         0x800294F8
    // 0x8004B904: sh          $t7, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r15;
    func_800294F8(rdram, ctx);
        goto after_0;
    // 0x8004B904: sh          $t7, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r15;
    after_0:
L_8004B908:
    // 0x8004B908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004B90C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8004B910: jr          $ra
    // 0x8004B914: nop

    return;
    // 0x8004B914: nop

;}
RECOMP_FUNC void func_8004B918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004B918: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8004B91C: sll         $t0, $t6, 3
    ctx->r8 = S32(ctx->r14 << 3);
    // 0x8004B920: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8004B924: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8004B928: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8004B92C: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8004B930: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8004B934: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8004B938: lui         $t2, 0x800E
    ctx->r10 = S32(0X800E << 16);
    // 0x8004B93C: addiu       $t2, $t2, -0x3770
    ctx->r10 = ADD32(ctx->r10, -0X3770);
    // 0x8004B940: addu        $t1, $t0, $at
    ctx->r9 = ADD32(ctx->r8, ctx->r1);
    // 0x8004B944: addu        $v0, $t1, $t2
    ctx->r2 = ADD32(ctx->r9, ctx->r10);
    // 0x8004B948: lhu         $t3, 0x12($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X12);
    // 0x8004B94C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8004B950: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8004B954: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8004B958: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8004B95C: sh          $a1, 0xF04($v0)
    MEM_H(0XF04, ctx->r2) = ctx->r5;
    // 0x8004B960: sh          $a2, 0xF06($v0)
    MEM_H(0XF06, ctx->r2) = ctx->r6;
    // 0x8004B964: sh          $a3, 0xF08($v0)
    MEM_H(0XF08, ctx->r2) = ctx->r7;
    // 0x8004B968: jr          $ra
    // 0x8004B96C: sh          $t3, 0xF0A($v0)
    MEM_H(0XF0A, ctx->r2) = ctx->r11;
    return;
    // 0x8004B96C: sh          $t3, 0xF0A($v0)
    MEM_H(0XF0A, ctx->r2) = ctx->r11;
;}
RECOMP_FUNC void func_8004B970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004B970: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8004B974: lui         $at, 0x2
    ctx->r1 = S32(0X2 << 16);
    // 0x8004B978: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x8004B97C: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x8004B980: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8004B984: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x8004B988: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8004B98C: ori         $at, $at, 0x8000
    ctx->r1 = ctx->r1 | 0X8000;
    // 0x8004B990: lui         $t8, 0x800E
    ctx->r24 = S32(0X800E << 16);
    // 0x8004B994: lhu         $t9, 0x2($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X2);
    // 0x8004B998: addiu       $t8, $t8, -0x3770
    ctx->r24 = ADD32(ctx->r24, -0X3770);
    // 0x8004B99C: addu        $t7, $t6, $at
    ctx->r15 = ADD32(ctx->r14, ctx->r1);
    // 0x8004B9A0: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8004B9A4: sh          $t9, 0xF04($v1)
    MEM_H(0XF04, ctx->r3) = ctx->r25;
    // 0x8004B9A8: lhu         $t0, 0x4($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X4);
    // 0x8004B9AC: nop

    // 0x8004B9B0: sh          $t0, 0xF06($v1)
    MEM_H(0XF06, ctx->r3) = ctx->r8;
    // 0x8004B9B4: lhu         $t1, 0x6($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X6);
    // 0x8004B9B8: nop

    // 0x8004B9BC: sh          $t1, 0xF08($v1)
    MEM_H(0XF08, ctx->r3) = ctx->r9;
    // 0x8004B9C0: lhu         $t2, 0x8($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X8);
    // 0x8004B9C4: jr          $ra
    // 0x8004B9C8: sh          $t2, 0xF0A($v1)
    MEM_H(0XF0A, ctx->r3) = ctx->r10;
    return;
    // 0x8004B9C8: sh          $t2, 0xF0A($v1)
    MEM_H(0XF0A, ctx->r3) = ctx->r10;
;}
RECOMP_FUNC void func_8004B9CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004B9CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004B9D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004B9D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004B9D8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8004B9DC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8004B9E0: jal         0x80029354
    // 0x8004B9E4: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x8004B9E4: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x8004B9E8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8004B9EC: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8004B9F0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8004B9F4: nop

    // 0x8004B9F8: sw          $t6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r14;
    // 0x8004B9FC: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x8004BA00: jal         0x8004BA18
    // 0x8004BA04: nop

    func_8004BA18(rdram, ctx);
        goto after_1;
    // 0x8004BA04: nop

    after_1:
    // 0x8004BA08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BA0C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8004BA10: jr          $ra
    // 0x8004BA14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8004BA14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004BA18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BA18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004BA1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BA20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004BA24: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x8004BA28: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8004BA2C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8004BA30: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x8004BA34: addiu       $t9, $t9, -0x6BC0
    ctx->r25 = ADD32(ctx->r25, -0X6BC0);
    // 0x8004BA38: sll         $t8, $a3, 2
    ctx->r24 = S32(ctx->r7 << 2);
    // 0x8004BA3C: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    // 0x8004BA40: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x8004BA44: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8004BA48: lhu         $t0, 0x0($v0)
    ctx->r8 = MEM_HU(ctx->r2, 0X0);
    // 0x8004BA4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8004BA50: sh          $t0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r8;
    // 0x8004BA54: lbu         $a2, 0x2($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X2);
    // 0x8004BA58: jal         0x8002135C
    // 0x8004BA5C: nop

    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x8004BA5C: nop

    after_0:
    // 0x8004BA60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BA64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004BA68: jr          $ra
    // 0x8004BA6C: nop

    return;
    // 0x8004BA6C: nop

;}
RECOMP_FUNC void func_8004BA70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BA70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004BA74: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004BA78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BA7C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8004BA80: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8004BA84: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8004BA88: jal         0x80029354
    // 0x8004BA8C: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x8004BA8C: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x8004BA90: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8004BA94: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8004BA98: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x8004BA9C: jal         0x8004BB14
    // 0x8004BAA0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004BB14(rdram, ctx);
        goto after_1;
    // 0x8004BAA0: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x8004BAA4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8004BAA8: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    // 0x8004BAAC: lh          $a2, 0x2A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2A);
    // 0x8004BAB0: jal         0x8004CD44
    // 0x8004BAB4: nop

    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x8004BAB4: nop

    after_2:
    // 0x8004BAB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BABC: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8004BAC0: jr          $ra
    // 0x8004BAC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8004BAC4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004BAC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BAC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004BACC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004BAD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BAD4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8004BAD8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8004BADC: jal         0x80029354
    // 0x8004BAE0: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x8004BAE0: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x8004BAE4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8004BAE8: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8004BAEC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8004BAF0: nop

    // 0x8004BAF4: sw          $t6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r14;
    // 0x8004BAF8: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x8004BAFC: jal         0x8004BB14
    // 0x8004BB00: nop

    func_8004BB14(rdram, ctx);
        goto after_1;
    // 0x8004BB00: nop

    after_1:
    // 0x8004BB04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BB08: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8004BB0C: jr          $ra
    // 0x8004BB10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8004BB10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004BB14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BB14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004BB18: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004BB1C: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x8004BB20: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8004BB24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8004BB28: addu        $a3, $a3, $t7
    ctx->r7 = ADD32(ctx->r7, ctx->r15);
    // 0x8004BB2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BB30: lw          $a3, -0x6C6C($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X6C6C);
    // 0x8004BB34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004BB38: addiu       $a1, $zero, 0x102
    ctx->r5 = ADD32(0, 0X102);
    // 0x8004BB3C: jal         0x8004CD24
    // 0x8004BB40: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8004BB40: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_0:
    // 0x8004BB44: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004BB48: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8004BB4C: jal         0x8002135C
    // 0x8004BB50: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8004BB50: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8004BB54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BB58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004BB5C: jr          $ra
    // 0x8004BB60: nop

    return;
    // 0x8004BB60: nop

;}
RECOMP_FUNC void func_8004BB64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BB64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004BB68: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004BB6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BB70: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8004BB74: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8004BB78: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8004BB7C: jal         0x80029354
    // 0x8004BB80: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x8004BB80: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x8004BB84: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8004BB88: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8004BB8C: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x8004BB90: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x8004BB94: lh          $a3, 0x2A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2A);
    // 0x8004BB98: jal         0x8004BBB0
    // 0x8004BB9C: nop

    func_8004BBB0(rdram, ctx);
        goto after_1;
    // 0x8004BB9C: nop

    after_1:
    // 0x8004BBA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BBA4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8004BBA8: jr          $ra
    // 0x8004BBAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8004BBAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004BBB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BBB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004BBB4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8004BBB8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BBBC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004BBC0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8004BBC4: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x8004BBC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004BBCC: addiu       $a3, $a3, -0x3644
    ctx->r7 = ADD32(ctx->r7, -0X3644);
    // 0x8004BBD0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x8004BBD4: jal         0x8004CD24
    // 0x8004BBD8: addiu       $a1, $zero, 0xB7
    ctx->r5 = ADD32(0, 0XB7);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8004BBD8: addiu       $a1, $zero, 0xB7
    ctx->r5 = ADD32(0, 0XB7);
    after_0:
    // 0x8004BBDC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004BBE0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x8004BBE4: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x8004BBE8: jal         0x8004CD44
    // 0x8004BBEC: nop

    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x8004BBEC: nop

    after_1:
    // 0x8004BBF0: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x8004BBF4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x8004BBF8: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x8004BBFC: lbu         $a2, -0x6BC4($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X6BC4);
    // 0x8004BC00: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004BC04: jal         0x8002135C
    // 0x8004BC08: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8004BC08: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_2:
    // 0x8004BC0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BC10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004BC14: jr          $ra
    // 0x8004BC18: nop

    return;
    // 0x8004BC18: nop

;}
RECOMP_FUNC void func_8004BC1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BC1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004BC20: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004BC24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BC28: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8004BC2C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8004BC30: jal         0x80029354
    // 0x8004BC34: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x8004BC34: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x8004BC38: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8004BC3C: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8004BC40: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8004BC44: nop

    // 0x8004BC48: sw          $t6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r14;
    // 0x8004BC4C: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x8004BC50: jal         0x8004BC68
    // 0x8004BC54: nop

    func_8004BC68(rdram, ctx);
        goto after_1;
    // 0x8004BC54: nop

    after_1:
    // 0x8004BC58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BC5C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8004BC60: jr          $ra
    // 0x8004BC64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8004BC64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004BC68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BC68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004BC6C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8004BC70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BC74: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004BC78: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8004BC7C: lbu         $a2, -0x326C($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X326C);
    // 0x8004BC80: jal         0x8004BC98
    // 0x8004BC84: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_8004BC98(rdram, ctx);
        goto after_0;
    // 0x8004BC84: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_0:
    // 0x8004BC88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BC8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004BC90: jr          $ra
    // 0x8004BC94: nop

    return;
    // 0x8004BC94: nop

;}
RECOMP_FUNC void func_8004BC98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BC98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004BC9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BCA0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004BCA4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8004BCA8: andi        $a3, $a1, 0xFF
    ctx->r7 = ctx->r5 & 0XFF;
    // 0x8004BCAC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8004BCB0: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x8004BCB4: sll         $t8, $a3, 1
    ctx->r24 = S32(ctx->r7 << 1);
    // 0x8004BCB8: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x8004BCBC: sb          $t6, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r14;
    // 0x8004BCC0: sb          $t7, 0x5($a0)
    MEM_B(0X5, ctx->r4) = ctx->r15;
    // 0x8004BCC4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8004BCC8: lhu         $t9, -0x6B68($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X6B68);
    // 0x8004BCCC: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x8004BCD0: sh          $t9, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r25;
    // 0x8004BCD4: lbu         $t0, 0x23($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X23);
    // 0x8004BCD8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8004BCDC: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x8004BCE0: lbu         $a2, 0x7A20($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X7A20);
    // 0x8004BCE4: jal         0x8002135C
    // 0x8004BCE8: nop

    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x8004BCE8: nop

    after_0:
    // 0x8004BCEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BCF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004BCF4: jr          $ra
    // 0x8004BCF8: nop

    return;
    // 0x8004BCF8: nop

;}
RECOMP_FUNC void func_8004BCFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BCFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004BD00: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8004BD04: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x8004BD08: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8004BD0C: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8004BD10: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x8004BD14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BD18: lhu         $a1, 0x7A24($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X7A24);
    // 0x8004BD1C: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x8004BD20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8004BD24: addiu       $a3, $a3, -0x365C
    ctx->r7 = ADD32(ctx->r7, -0X365C);
    // 0x8004BD28: jal         0x8004CD24
    // 0x8004BD2C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8004BD2C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_0:
    // 0x8004BD30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8004BD34: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8004BD38: jal         0x8002135C
    // 0x8004BD3C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8004BD3C: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    after_1:
    // 0x8004BD40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BD44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8004BD48: jr          $ra
    // 0x8004BD4C: nop

    return;
    // 0x8004BD4C: nop

;}
RECOMP_FUNC void func_8004BD50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BD50: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8004BD54: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8004BD58: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    // 0x8004BD5C: jr          $ra
    // 0x8004BD60: sw          $zero, 0x30($a0)
    MEM_W(0X30, ctx->r4) = 0;
    return;
    // 0x8004BD60: sw          $zero, 0x30($a0)
    MEM_W(0X30, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8004BD64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004BD64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004BD68: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8004BD6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8004BD70: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8004BD74: jal         0x80029354
    // 0x8004BD78: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x8004BD78: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x8004BD7C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8004BD80: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8004BD84: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x8004BD88: jal         0x8004BDA0
    // 0x8004BD8C: nop

    func_8004BDA0(rdram, ctx);
        goto after_1;
    // 0x8004BD8C: nop

    after_1:
    // 0x8004BD90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8004BD94: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8004BD98: jr          $ra
    // 0x8004BD9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8004BD9C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
