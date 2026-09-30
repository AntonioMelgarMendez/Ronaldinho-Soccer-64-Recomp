#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80031B20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80031B20: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80031B24: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x80031B28: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80031B2C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80031B30: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80031B34: sll         $t8, $t8, 8
    ctx->r24 = S32(ctx->r24 << 8);
    // 0x80031B38: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80031B3C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80031B40: addiu       $t7, $zero, 0x7
    ctx->r15 = ADD32(0, 0X7);
    // 0x80031B44: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80031B48: jr          $ra
    // 0x80031B4C: sw          $t7, 0x5350($at)
    MEM_W(0X5350, ctx->r1) = ctx->r15;
    return;
    // 0x80031B4C: sw          $t7, 0x5350($at)
    MEM_W(0X5350, ctx->r1) = ctx->r15;
;}
RECOMP_FUNC void func_80031B50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80031B50: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x80031B54: sll         $t6, $a2, 4
    ctx->r14 = S32(ctx->r6 << 4);
    // 0x80031B58: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x80031B5C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80031B60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80031B64: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x80031B68: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x80031B6C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80031B70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80031B74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80031B78: addiu       $t8, $t8, 0x5350
    ctx->r24 = ADD32(ctx->r24, 0X5350);
    // 0x80031B7C: addiu       $t7, $t6, 0xDB0
    ctx->r15 = ADD32(ctx->r14, 0XDB0);
    // 0x80031B80: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x80031B84: jal         0x8001DC24
    // 0x80031B88: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8001DC24(rdram, ctx);
        goto after_0;
    // 0x80031B88: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_0:
    // 0x80031B8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80031B90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80031B94: jr          $ra
    // 0x80031B98: nop

    return;
    // 0x80031B98: nop

;}
RECOMP_FUNC void func_80031B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80031B9C: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x80031BA0: sll         $t6, $a2, 4
    ctx->r14 = S32(ctx->r6 << 4);
    // 0x80031BA4: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x80031BA8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80031BAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80031BB0: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x80031BB4: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x80031BB8: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80031BBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80031BC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80031BC4: addiu       $t8, $t8, 0x5350
    ctx->r24 = ADD32(ctx->r24, 0X5350);
    // 0x80031BC8: addiu       $t7, $t6, 0x30
    ctx->r15 = ADD32(ctx->r14, 0X30);
    // 0x80031BCC: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x80031BD0: jal         0x8001DC24
    // 0x80031BD4: addiu       $a1, $zero, 0xD80
    ctx->r5 = ADD32(0, 0XD80);
    func_8001DC24(rdram, ctx);
        goto after_0;
    // 0x80031BD4: addiu       $a1, $zero, 0xD80
    ctx->r5 = ADD32(0, 0XD80);
    after_0:
    // 0x80031BD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80031BDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80031BE0: jr          $ra
    // 0x80031BE4: nop

    return;
    // 0x80031BE4: nop

;}
RECOMP_FUNC void func_80031BE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80031BE8: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x80031BEC: sll         $t6, $a2, 4
    ctx->r14 = S32(ctx->r6 << 4);
    // 0x80031BF0: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x80031BF4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80031BF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80031BFC: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x80031C00: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x80031C04: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80031C08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80031C0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80031C10: addiu       $t8, $t8, 0x5350
    ctx->r24 = ADD32(ctx->r24, 0X5350);
    // 0x80031C14: addiu       $t7, $t6, 0xDF0
    ctx->r15 = ADD32(ctx->r14, 0XDF0);
    // 0x80031C18: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x80031C1C: jal         0x8001DC24
    // 0x80031C20: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    func_8001DC24(rdram, ctx);
        goto after_0;
    // 0x80031C20: addiu       $a1, $zero, 0x500
    ctx->r5 = ADD32(0, 0X500);
    after_0:
    // 0x80031C24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80031C28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80031C2C: jr          $ra
    // 0x80031C30: nop

    return;
    // 0x80031C30: nop

;}
RECOMP_FUNC void func_80031C34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80031C34: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x80031C38: sll         $t6, $a2, 4
    ctx->r14 = S32(ctx->r6 << 4);
    // 0x80031C3C: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x80031C40: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80031C44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80031C48: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x80031C4C: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x80031C50: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80031C54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80031C58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80031C5C: addiu       $t8, $t8, 0x5350
    ctx->r24 = ADD32(ctx->r24, 0X5350);
    // 0x80031C60: addiu       $t7, $t6, 0x12F0
    ctx->r15 = ADD32(ctx->r14, 0X12F0);
    // 0x80031C64: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x80031C68: jal         0x8001DC24
    // 0x80031C6C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_8001DC24(rdram, ctx);
        goto after_0;
    // 0x80031C6C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_0:
    // 0x80031C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80031C74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80031C78: jr          $ra
    // 0x80031C7C: nop

    return;
    // 0x80031C7C: nop

;}
RECOMP_FUNC void func_80031C80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80031C80: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x80031C84: sll         $t7, $a2, 4
    ctx->r15 = S32(ctx->r6 << 4);
    // 0x80031C88: subu        $t7, $t7, $a2
    ctx->r15 = SUB32(ctx->r15, ctx->r6);
    // 0x80031C8C: sll         $a3, $a1, 16
    ctx->r7 = S32(ctx->r5 << 16);
    // 0x80031C90: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80031C94: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80031C98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80031C9C: addu        $t7, $t7, $a2
    ctx->r15 = ADD32(ctx->r15, ctx->r6);
    // 0x80031CA0: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x80031CA4: sll         $t8, $t6, 5
    ctx->r24 = S32(ctx->r14 << 5);
    // 0x80031CA8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80031CAC: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80031CB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80031CB4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80031CB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80031CBC: addiu       $t1, $t1, 0x5350
    ctx->r9 = ADD32(ctx->r9, 0X5350);
    // 0x80031CC0: addiu       $t0, $t9, 0x3CB4
    ctx->r8 = ADD32(ctx->r25, 0X3CB4);
    // 0x80031CC4: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x80031CC8: jal         0x8001DC24
    // 0x80031CCC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_8001DC24(rdram, ctx);
        goto after_0;
    // 0x80031CCC: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_0:
    // 0x80031CD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80031CD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80031CD8: jr          $ra
    // 0x80031CDC: nop

    return;
    // 0x80031CDC: nop

;}
RECOMP_FUNC void func_80031CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80031CE0: sll         $a3, $a1, 16
    ctx->r7 = S32(ctx->r5 << 16);
    // 0x80031CE4: sra         $t6, $a3, 16
    ctx->r14 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80031CE8: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80031CEC: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80031CF0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80031CF4: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x80031CF8: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80031CFC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80031D00: sll         $t7, $a2, 4
    ctx->r15 = S32(ctx->r6 << 4);
    // 0x80031D04: subu        $t7, $t7, $a2
    ctx->r15 = SUB32(ctx->r15, ctx->r6);
    // 0x80031D08: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80031D0C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80031D10: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80031D14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80031D18: addu        $t7, $t7, $a2
    ctx->r15 = ADD32(ctx->r15, ctx->r6);
    // 0x80031D1C: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80031D20: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80031D24: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x80031D28: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80031D2C: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80031D30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80031D34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80031D38: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80031D3C: addiu       $t1, $t1, 0x5350
    ctx->r9 = ADD32(ctx->r9, 0X5350);
    // 0x80031D40: addiu       $t0, $t9, 0x1744
    ctx->r8 = ADD32(ctx->r25, 0X1744);
    // 0x80031D44: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x80031D48: jal         0x8001DC24
    // 0x80031D4C: addiu       $a1, $zero, 0x12B8
    ctx->r5 = ADD32(0, 0X12B8);
    func_8001DC24(rdram, ctx);
        goto after_0;
    // 0x80031D4C: addiu       $a1, $zero, 0x12B8
    ctx->r5 = ADD32(0, 0X12B8);
    after_0:
    // 0x80031D50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80031D54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80031D58: jr          $ra
    // 0x80031D5C: nop

    return;
    // 0x80031D5C: nop

;}
RECOMP_FUNC void func_80031D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80031D60: andi        $a2, $a0, 0xFF
    ctx->r6 = ctx->r4 & 0XFF;
    // 0x80031D64: sll         $t6, $a2, 4
    ctx->r14 = S32(ctx->r6 << 4);
    // 0x80031D68: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x80031D6C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80031D70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80031D74: addu        $t6, $t6, $a2
    ctx->r14 = ADD32(ctx->r14, ctx->r6);
    // 0x80031D78: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x80031D7C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80031D80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80031D84: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80031D88: addiu       $t8, $t8, 0x5350
    ctx->r24 = ADD32(ctx->r24, 0X5350);
    // 0x80031D8C: addiu       $t7, $t6, 0x1302
    ctx->r15 = ADD32(ctx->r14, 0X1302);
    // 0x80031D90: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x80031D94: jal         0x8001DC24
    // 0x80031D98: addiu       $a1, $zero, 0x440
    ctx->r5 = ADD32(0, 0X440);
    func_8001DC24(rdram, ctx);
        goto after_0;
    // 0x80031D98: addiu       $a1, $zero, 0x440
    ctx->r5 = ADD32(0, 0X440);
    after_0:
    // 0x80031D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80031DA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80031DA4: jr          $ra
    // 0x80031DA8: nop

    return;
    // 0x80031DA8: nop

;}
RECOMP_FUNC void func_80031DAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80031DAC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80031DB0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80031DB4: andi        $s2, $a0, 0xFF
    ctx->r18 = ctx->r4 & 0XFF;
    // 0x80031DB8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80031DBC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80031DC0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80031DC4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80031DC8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80031DCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80031DD0: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80031DD4: jal         0x80031B50
    // 0x80031DD8: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_80031B50(rdram, ctx);
        goto after_0;
    // 0x80031DD8: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_0:
    // 0x80031DDC: sll         $t6, $s2, 4
    ctx->r14 = S32(ctx->r18 << 4);
    // 0x80031DE0: subu        $t6, $t6, $s2
    ctx->r14 = SUB32(ctx->r14, ctx->r18);
    // 0x80031DE4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80031DE8: addu        $t6, $t6, $s2
    ctx->r14 = ADD32(ctx->r14, ctx->r18);
    // 0x80031DEC: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80031DF0: addiu       $t7, $t7, 0x5350
    ctx->r15 = ADD32(ctx->r15, 0X5350);
    // 0x80031DF4: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x80031DF8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80031DFC: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
    // 0x80031E00: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x80031E04: nop

    // 0x80031E08: beq         $v0, $t9, L_80031E1C
    if (ctx->r2 == ctx->r25) {
        // 0x80031E0C: nop
    
            goto L_80031E1C;
    }
    // 0x80031E0C: nop

    // 0x80031E10: jal         0x800326F0
    // 0x80031E14: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_800326F0(rdram, ctx);
        goto after_1;
    // 0x80031E14: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_1:
    // 0x80031E18: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
L_80031E1C:
    // 0x80031E1C: jal         0x80031B9C
    // 0x80031E20: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_80031B9C(rdram, ctx);
        goto after_2;
    // 0x80031E20: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_2:
    // 0x80031E24: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80031E28: nop

    // 0x80031E2C: lw          $t1, 0x2C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X2C);
    // 0x80031E30: nop

    // 0x80031E34: beq         $v0, $t1, L_80031E50
    if (ctx->r2 == ctx->r9) {
        // 0x80031E38: nop
    
            goto L_80031E50;
    }
    // 0x80031E38: nop

    // 0x80031E3C: jal         0x80032120
    // 0x80031E40: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_80032120(rdram, ctx);
        goto after_3;
    // 0x80031E40: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_3:
    // 0x80031E44: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80031E48: sll         $t2, $s3, 16
    ctx->r10 = S32(ctx->r19 << 16);
    // 0x80031E4C: sra         $s3, $t2, 16
    ctx->r19 = S32(SIGNED(ctx->r10) >> 16);
L_80031E50:
    // 0x80031E50: jal         0x80031BE8
    // 0x80031E54: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_80031BE8(rdram, ctx);
        goto after_4;
    // 0x80031E54: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_4:
    // 0x80031E58: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80031E5C: nop

    // 0x80031E60: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x80031E64: nop

    // 0x80031E68: beq         $v0, $t5, L_80031E84
    if (ctx->r2 == ctx->r13) {
        // 0x80031E6C: nop
    
            goto L_80031E84;
    }
    // 0x80031E6C: nop

    // 0x80031E70: jal         0x80032ACC
    // 0x80031E74: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_80032ACC(rdram, ctx);
        goto after_5;
    // 0x80031E74: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_5:
    // 0x80031E78: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80031E7C: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x80031E80: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
L_80031E84:
    // 0x80031E84: jal         0x80031C34
    // 0x80031E88: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_80031C34(rdram, ctx);
        goto after_6;
    // 0x80031E88: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_6:
    // 0x80031E8C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80031E90: nop

    // 0x80031E94: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x80031E98: nop

    // 0x80031E9C: beq         $v0, $t9, L_80031EBC
    if (ctx->r2 == ctx->r25) {
        // 0x80031EA0: sll         $t2, $s2, 4
        ctx->r10 = S32(ctx->r18 << 4);
            goto L_80031EBC;
    }
    // 0x80031EA0: sll         $t2, $s2, 4
    ctx->r10 = S32(ctx->r18 << 4);
    // 0x80031EA4: jal         0x80033140
    // 0x80031EA8: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_80033140(rdram, ctx);
        goto after_7;
    // 0x80031EA8: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_7:
    // 0x80031EAC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80031EB0: sll         $t0, $s3, 16
    ctx->r8 = S32(ctx->r19 << 16);
    // 0x80031EB4: sra         $s3, $t0, 16
    ctx->r19 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80031EB8: sll         $t2, $s2, 4
    ctx->r10 = S32(ctx->r18 << 4);
L_80031EBC:
    // 0x80031EBC: subu        $t2, $t2, $s2
    ctx->r10 = SUB32(ctx->r10, ctx->r18);
    // 0x80031EC0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80031EC4: addu        $t2, $t2, $s2
    ctx->r10 = ADD32(ctx->r10, ctx->r18);
    // 0x80031EC8: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x80031ECC: addiu       $t3, $t3, 0x5350
    ctx->r11 = ADD32(ctx->r11, 0X5350);
    // 0x80031ED0: sll         $t2, $t2, 8
    ctx->r10 = S32(ctx->r10 << 8);
    // 0x80031ED4: addu        $s4, $t2, $t3
    ctx->r20 = ADD32(ctx->r10, ctx->r11);
    // 0x80031ED8: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80031EDC: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
L_80031EE0:
    // 0x80031EE0: sra         $t4, $a1, 16
    ctx->r12 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80031EE4: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    // 0x80031EE8: jal         0x80031C80
    // 0x80031EEC: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_80031C80(rdram, ctx);
        goto after_8;
    // 0x80031EEC: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_8:
    // 0x80031EF0: sll         $t5, $s0, 2
    ctx->r13 = S32(ctx->r16 << 2);
    // 0x80031EF4: addu        $s1, $s4, $t5
    ctx->r17 = ADD32(ctx->r20, ctx->r13);
    // 0x80031EF8: lw          $t6, 0x20($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X20);
    // 0x80031EFC: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x80031F00: beq         $v0, $t6, L_80031F20
    if (ctx->r2 == ctx->r14) {
        // 0x80031F04: sll         $a1, $s0, 16
        ctx->r5 = S32(ctx->r16 << 16);
            goto L_80031F20;
    }
    // 0x80031F04: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x80031F08: sra         $t7, $a1, 16
    ctx->r15 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80031F0C: jal         0x800333FC
    // 0x80031F10: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_800333FC(rdram, ctx);
        goto after_9;
    // 0x80031F10: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_9:
    // 0x80031F14: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80031F18: sll         $t8, $s3, 16
    ctx->r24 = S32(ctx->r19 << 16);
    // 0x80031F1C: sra         $s3, $t8, 16
    ctx->r19 = S32(SIGNED(ctx->r24) >> 16);
L_80031F20:
    // 0x80031F20: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x80031F24: sra         $t0, $a1, 16
    ctx->r8 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80031F28: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80031F2C: jal         0x80031CE0
    // 0x80031F30: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_80031CE0(rdram, ctx);
        goto after_10;
    // 0x80031F30: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_10:
    // 0x80031F34: lw          $t1, 0x14($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X14);
    // 0x80031F38: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x80031F3C: beq         $v0, $t1, L_80031F5C
    if (ctx->r2 == ctx->r9) {
        // 0x80031F40: sll         $a1, $s0, 16
        ctx->r5 = S32(ctx->r16 << 16);
            goto L_80031F5C;
    }
    // 0x80031F40: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x80031F44: sra         $t2, $a1, 16
    ctx->r10 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80031F48: jal         0x800337B8
    // 0x80031F4C: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    func_800337B8(rdram, ctx);
        goto after_11;
    // 0x80031F4C: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    after_11:
    // 0x80031F50: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80031F54: sll         $t3, $s3, 16
    ctx->r11 = S32(ctx->r19 << 16);
    // 0x80031F58: sra         $s3, $t3, 16
    ctx->r19 = S32(SIGNED(ctx->r11) >> 16);
L_80031F5C:
    // 0x80031F5C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80031F60: sll         $t5, $s0, 16
    ctx->r13 = S32(ctx->r16 << 16);
    // 0x80031F64: sra         $s0, $t5, 16
    ctx->r16 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80031F68: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x80031F6C: bne         $at, $zero, L_80031EE0
    if (ctx->r1 != 0) {
        // 0x80031F70: sll         $a1, $s0, 16
        ctx->r5 = S32(ctx->r16 << 16);
            goto L_80031EE0;
    }
    // 0x80031F70: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x80031F74: jal         0x80031D60
    // 0x80031F78: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_80031D60(rdram, ctx);
        goto after_12;
    // 0x80031F78: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_12:
    // 0x80031F7C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80031F80: nop

    // 0x80031F84: lw          $t8, 0x10($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X10);
    // 0x80031F88: nop

    // 0x80031F8C: beq         $v0, $t8, L_80031FAC
    if (ctx->r2 == ctx->r24) {
        // 0x80031F90: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_80031FAC;
    }
    // 0x80031F90: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80031F94: jal         0x800343D0
    // 0x80031F98: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    func_800343D0(rdram, ctx);
        goto after_13;
    // 0x80031F98: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    after_13:
    // 0x80031F9C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80031FA0: sll         $t9, $s3, 16
    ctx->r25 = S32(ctx->r19 << 16);
    // 0x80031FA4: sra         $s3, $t9, 16
    ctx->r19 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80031FA8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80031FAC:
    // 0x80031FAC: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x80031FB0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80031FB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80031FB8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80031FBC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80031FC0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80031FC4: jr          $ra
    // 0x80031FC8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80031FC8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80031FCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80031FCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80031FD0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80031FD4: andi        $s1, $a0, 0xFF
    ctx->r17 = ctx->r4 & 0XFF;
    // 0x80031FD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80031FDC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80031FE0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80031FE4: jal         0x800320CC
    // 0x80031FE8: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_800320CC(rdram, ctx);
        goto after_0;
    // 0x80031FE8: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_0:
    // 0x80031FEC: jal         0x800326F0
    // 0x80031FF0: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_800326F0(rdram, ctx);
        goto after_1;
    // 0x80031FF0: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_1:
    // 0x80031FF4: jal         0x80032120
    // 0x80031FF8: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_80032120(rdram, ctx);
        goto after_2;
    // 0x80031FF8: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_2:
    // 0x80031FFC: jal         0x80032ACC
    // 0x80032000: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_80032ACC(rdram, ctx);
        goto after_3;
    // 0x80032000: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_3:
    // 0x80032004: jal         0x80033140
    // 0x80032008: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_80033140(rdram, ctx);
        goto after_4;
    // 0x80032008: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_4:
    // 0x8003200C: jal         0x800343D0
    // 0x80032010: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_800343D0(rdram, ctx);
        goto after_5;
    // 0x80032010: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_5:
    // 0x80032014: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80032018: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
L_8003201C:
    // 0x8003201C: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80032020: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80032024: jal         0x800337B8
    // 0x80032028: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_800337B8(rdram, ctx);
        goto after_6;
    // 0x80032028: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_6:
    // 0x8003202C: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x80032030: sra         $t7, $a1, 16
    ctx->r15 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80032034: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80032038: jal         0x800333FC
    // 0x8003203C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_800333FC(rdram, ctx);
        goto after_7;
    // 0x8003203C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_7:
    // 0x80032040: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80032044: sll         $t8, $s0, 16
    ctx->r24 = S32(ctx->r16 << 16);
    // 0x80032048: sra         $s0, $t8, 16
    ctx->r16 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8003204C: slti        $at, $s0, 0x2
    ctx->r1 = SIGNED(ctx->r16) < 0X2 ? 1 : 0;
    // 0x80032050: bne         $at, $zero, L_8003201C
    if (ctx->r1 != 0) {
        // 0x80032054: sll         $a1, $s0, 16
        ctx->r5 = S32(ctx->r16 << 16);
            goto L_8003201C;
    }
    // 0x80032054: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x80032058: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003205C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80032060: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80032064: jr          $ra
    // 0x80032068: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80032068: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003206C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003206C: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80032070: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80032074: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80032078: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003207C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80032080: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x80032084: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80032088: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8003208C: lw          $t8, 0x5350($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5350);
    // 0x80032090: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80032094: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80032098: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x8003209C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x800320A0: beq         $t8, $at, L_800320B8
    if (ctx->r24 == ctx->r1) {
        // 0x800320A4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_800320B8;
    }
    // 0x800320A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800320A8: jal         0x80031FCC
    // 0x800320AC: nop

    func_80031FCC(rdram, ctx);
        goto after_0;
    // 0x800320AC: nop

    after_0:
    // 0x800320B0: b           L_800320BC
    // 0x800320B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800320BC;
    // 0x800320B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800320B8:
    // 0x800320B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800320BC:
    // 0x800320BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800320C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800320C4: jr          $ra
    // 0x800320C8: nop

    return;
    // 0x800320C8: nop

;}
RECOMP_FUNC void func_800320CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800320CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800320D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800320D4: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x800320D8: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800320DC: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x800320E0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800320E4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800320E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800320EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800320F0: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x800320F4: addiu       $t8, $t8, 0x5350
    ctx->r24 = ADD32(ctx->r24, 0X5350);
    // 0x800320F8: addu        $a0, $t7, $t8
    ctx->r4 = ADD32(ctx->r15, ctx->r24);
    // 0x800320FC: jal         0x800218E0
    // 0x80032100: addiu       $a1, $zero, 0x3CF4
    ctx->r5 = ADD32(0, 0X3CF4);
    func_800218E0(rdram, ctx);
        goto after_0;
    // 0x80032100: addiu       $a1, $zero, 0x3CF4
    ctx->r5 = ADD32(0, 0X3CF4);
    after_0:
    // 0x80032104: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x80032108: jal         0x80031B20
    // 0x8003210C: nop

    func_80031B20(rdram, ctx);
        goto after_1;
    // 0x8003210C: nop

    after_1:
    // 0x80032110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80032114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80032118: jr          $ra
    // 0x8003211C: nop

    return;
    // 0x8003211C: nop

;}
RECOMP_FUNC void func_80032120(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80032120: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80032124: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80032128: lbu         $t6, 0x33($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X33);
    // 0x8003212C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80032130: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80032134: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80032138: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003213C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80032140: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80032144: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80032148: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003214C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80032150: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80032154: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x80032158: addiu       $t8, $t8, 0x5350
    ctx->r24 = ADD32(ctx->r24, 0X5350);
    // 0x8003215C: lui         $s3, 0x800A
    ctx->r19 = S32(0X800A << 16);
    // 0x80032160: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80032164: addiu       $s3, $s3, 0x7278
    ctx->r19 = ADD32(ctx->r19, 0X7278);
    // 0x80032168: addu        $s2, $t7, $t8
    ctx->r18 = ADD32(ctx->r15, ctx->r24);
    // 0x8003216C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80032170: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80032174: addiu       $s4, $zero, 0x60
    ctx->r20 = ADD32(0, 0X60);
L_80032178:
    // 0x80032178: multu       $s1, $s4
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003217C: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x80032180: addu        $t0, $s3, $t9
    ctx->r8 = ADD32(ctx->r19, ctx->r25);
    // 0x80032184: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x80032188: mflo        $t1
    ctx->r9 = lo;
    // 0x8003218C: addu        $a1, $s2, $t1
    ctx->r5 = ADD32(ctx->r18, ctx->r9);
    // 0x80032190: jal         0x8003240C
    // 0x80032194: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    func_8003240C(rdram, ctx);
        goto after_0;
    // 0x80032194: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    after_0:
    // 0x80032198: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003219C: andi        $s1, $s0, 0xFF
    ctx->r17 = ctx->r16 & 0XFF;
    // 0x800321A0: slti        $at, $s1, 0x24
    ctx->r1 = SIGNED(ctx->r17) < 0X24 ? 1 : 0;
    // 0x800321A4: bne         $at, $zero, L_80032178
    if (ctx->r1 != 0) {
        // 0x800321A8: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80032178;
    }
    // 0x800321A8: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x800321AC: lbu         $a0, 0x33($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X33);
    // 0x800321B0: jal         0x80031B9C
    // 0x800321B4: nop

    func_80031B9C(rdram, ctx);
        goto after_1;
    // 0x800321B4: nop

    after_1:
    // 0x800321B8: lbu         $a0, 0x33($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X33);
    // 0x800321BC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800321C0: sll         $t4, $a0, 4
    ctx->r12 = S32(ctx->r4 << 4);
    // 0x800321C4: subu        $t4, $t4, $a0
    ctx->r12 = SUB32(ctx->r12, ctx->r4);
    // 0x800321C8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800321CC: addu        $t4, $t4, $a0
    ctx->r12 = ADD32(ctx->r12, ctx->r4);
    // 0x800321D0: sll         $t4, $t4, 8
    ctx->r12 = S32(ctx->r12 << 8);
    // 0x800321D4: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800321D8: jal         0x80031B20
    // 0x800321DC: sw          $v0, 0x537C($at)
    MEM_W(0X537C, ctx->r1) = ctx->r2;
    func_80031B20(rdram, ctx);
        goto after_2;
    // 0x800321DC: sw          $v0, 0x537C($at)
    MEM_W(0X537C, ctx->r1) = ctx->r2;
    after_2:
    // 0x800321E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800321E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800321E8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800321EC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800321F0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x800321F4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x800321F8: jr          $ra
    // 0x800321FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800321FC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80032200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80032200: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80032204: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80032208: andi        $s5, $a0, 0xFF
    ctx->r21 = ctx->r4 & 0XFF;
    // 0x8003220C: sll         $t6, $s5, 4
    ctx->r14 = S32(ctx->r21 << 4);
    // 0x80032210: subu        $t6, $t6, $s5
    ctx->r14 = SUB32(ctx->r14, ctx->r21);
    // 0x80032214: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80032218: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8003221C: addu        $t6, $t6, $s5
    ctx->r14 = ADD32(ctx->r14, ctx->r21);
    // 0x80032220: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80032224: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80032228: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8003222C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80032230: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80032234: addiu       $t7, $t7, 0x5350
    ctx->r15 = ADD32(ctx->r15, 0X5350);
    // 0x80032238: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x8003223C: lui         $s3, 0x8011
    ctx->r19 = S32(0X8011 << 16);
    // 0x80032240: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80032244: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80032248: addiu       $s3, $s3, 0x3D30
    ctx->r19 = ADD32(ctx->r19, 0X3D30);
    // 0x8003224C: addu        $s2, $t6, $t7
    ctx->r18 = ADD32(ctx->r14, ctx->r15);
    // 0x80032250: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80032254: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80032258: addiu       $s4, $zero, 0x60
    ctx->r20 = ADD32(0, 0X60);
L_8003225C:
    // 0x8003225C: multu       $s0, $s4
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80032260: sll         $t8, $s0, 7
    ctx->r24 = S32(ctx->r16 << 7);
    // 0x80032264: addu        $a0, $s3, $t8
    ctx->r4 = ADD32(ctx->r19, ctx->r24);
    // 0x80032268: mflo        $t9
    ctx->r25 = lo;
    // 0x8003226C: addu        $a1, $s2, $t9
    ctx->r5 = ADD32(ctx->r18, ctx->r25);
    // 0x80032270: jal         0x8003240C
    // 0x80032274: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    func_8003240C(rdram, ctx);
        goto after_0;
    // 0x80032274: addiu       $a1, $a1, 0x30
    ctx->r5 = ADD32(ctx->r5, 0X30);
    after_0:
    // 0x80032278: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8003227C: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
    // 0x80032280: slti        $at, $s0, 0x24
    ctx->r1 = SIGNED(ctx->r16) < 0X24 ? 1 : 0;
    // 0x80032284: bne         $at, $zero, L_8003225C
    if (ctx->r1 != 0) {
        // 0x80032288: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_8003225C;
    }
    // 0x80032288: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x8003228C: jal         0x80031B9C
    // 0x80032290: andi        $a0, $s5, 0xFF
    ctx->r4 = ctx->r21 & 0XFF;
    func_80031B9C(rdram, ctx);
        goto after_1;
    // 0x80032290: andi        $a0, $s5, 0xFF
    ctx->r4 = ctx->r21 & 0XFF;
    after_1:
    // 0x80032294: sll         $t1, $s5, 4
    ctx->r9 = S32(ctx->r21 << 4);
    // 0x80032298: subu        $t1, $t1, $s5
    ctx->r9 = SUB32(ctx->r9, ctx->r21);
    // 0x8003229C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800322A0: addu        $t1, $t1, $s5
    ctx->r9 = ADD32(ctx->r9, ctx->r21);
    // 0x800322A4: lui         $s0, 0x8011
    ctx->r16 = S32(0X8011 << 16);
    // 0x800322A8: addiu       $s0, $s0, 0x5350
    ctx->r16 = ADD32(ctx->r16, 0X5350);
    // 0x800322AC: sll         $t1, $t1, 8
    ctx->r9 = S32(ctx->r9 << 8);
    // 0x800322B0: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x800322B4: jal         0x800353F0
    // 0x800322B8: sw          $v0, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->r2;
    func_800353F0(rdram, ctx);
        goto after_2;
    // 0x800322B8: sw          $v0, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->r2;
    after_2:
    // 0x800322BC: bne         $s5, $zero, L_800322E0
    if (ctx->r21 != 0) {
        // 0x800322C0: nop
    
            goto L_800322E0;
    }
    // 0x800322C0: nop

    // 0x800322C4: jal         0x800353F0
    // 0x800322C8: nop

    func_800353F0(rdram, ctx);
        goto after_3;
    // 0x800322C8: nop

    after_3:
    // 0x800322CC: beq         $v0, $zero, L_800322E0
    if (ctx->r2 == 0) {
        // 0x800322D0: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_800322E0;
    }
    // 0x800322D0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800322D4: lw          $t3, 0x2C($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X2C);
    // 0x800322D8: jal         0x80031B20
    // 0x800322DC: sw          $t3, 0x3D2C($s0)
    MEM_W(0X3D2C, ctx->r16) = ctx->r11;
    func_80031B20(rdram, ctx);
        goto after_4;
    // 0x800322DC: sw          $t3, 0x3D2C($s0)
    MEM_W(0X3D2C, ctx->r16) = ctx->r11;
    after_4:
L_800322E0:
    // 0x800322E0: jal         0x80031B20
    // 0x800322E4: andi        $a0, $s5, 0xFF
    ctx->r4 = ctx->r21 & 0XFF;
    func_80031B20(rdram, ctx);
        goto after_5;
    // 0x800322E4: andi        $a0, $s5, 0xFF
    ctx->r4 = ctx->r21 & 0XFF;
    after_5:
    // 0x800322E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800322EC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800322F0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800322F4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800322F8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800322FC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80032300: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80032304: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80032308: jr          $ra
    // 0x8003230C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8003230C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80032310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80032310: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80032314: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80032318: andi        $s3, $a0, 0xFF
    ctx->r19 = ctx->r4 & 0XFF;
    // 0x8003231C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80032320: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80032324: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80032328: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003232C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80032330: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80032334: jal         0x80031B9C
    // 0x80032338: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    func_80031B9C(rdram, ctx);
        goto after_0;
    // 0x80032338: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    after_0:
    // 0x8003233C: sll         $t6, $s3, 4
    ctx->r14 = S32(ctx->r19 << 4);
    // 0x80032340: subu        $t6, $t6, $s3
    ctx->r14 = SUB32(ctx->r14, ctx->r19);
    // 0x80032344: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80032348: addu        $t6, $t6, $s3
    ctx->r14 = ADD32(ctx->r14, ctx->r19);
    // 0x8003234C: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80032350: addiu       $t7, $t7, 0x5350
    ctx->r15 = ADD32(ctx->r15, 0X5350);
    // 0x80032354: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x80032358: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8003235C: lw          $t9, 0x2C($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X2C);
    // 0x80032360: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80032364: bne         $v0, $t9, L_800323C8
    if (ctx->r2 != ctx->r25) {
        // 0x80032368: sll         $t0, $s3, 4
        ctx->r8 = S32(ctx->r19 << 4);
            goto L_800323C8;
    }
    // 0x80032368: sll         $t0, $s3, 4
    ctx->r8 = S32(ctx->r19 << 4);
    // 0x8003236C: subu        $t0, $t0, $s3
    ctx->r8 = SUB32(ctx->r8, ctx->r19);
    // 0x80032370: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80032374: addu        $t0, $t0, $s3
    ctx->r8 = ADD32(ctx->r8, ctx->r19);
    // 0x80032378: sll         $t0, $t0, 8
    ctx->r8 = S32(ctx->r8 << 8);
    // 0x8003237C: lui         $s4, 0x8011
    ctx->r20 = S32(0X8011 << 16);
    // 0x80032380: addiu       $s4, $s4, 0x3D30
    ctx->r20 = ADD32(ctx->r20, 0X3D30);
    // 0x80032384: addu        $s2, $t0, $t7
    ctx->r18 = ADD32(ctx->r8, ctx->r15);
    // 0x80032388: addiu       $s3, $zero, 0x60
    ctx->r19 = ADD32(0, 0X60);
    // 0x8003238C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80032390:
    // 0x80032390: multu       $s0, $s3
    result = U64(U32(ctx->r16)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80032394: sll         $t2, $s0, 7
    ctx->r10 = S32(ctx->r16 << 7);
    // 0x80032398: addu        $a1, $s4, $t2
    ctx->r5 = ADD32(ctx->r20, ctx->r10);
    // 0x8003239C: mflo        $t1
    ctx->r9 = lo;
    // 0x800323A0: addu        $a0, $s2, $t1
    ctx->r4 = ADD32(ctx->r18, ctx->r9);
    // 0x800323A4: jal         0x80032578
    // 0x800323A8: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    func_80032578(rdram, ctx);
        goto after_1;
    // 0x800323A8: addiu       $a0, $a0, 0x30
    ctx->r4 = ADD32(ctx->r4, 0X30);
    after_1:
    // 0x800323AC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800323B0: andi        $s0, $s1, 0xFF
    ctx->r16 = ctx->r17 & 0XFF;
    // 0x800323B4: slti        $at, $s0, 0x24
    ctx->r1 = SIGNED(ctx->r16) < 0X24 ? 1 : 0;
    // 0x800323B8: bne         $at, $zero, L_80032390
    if (ctx->r1 != 0) {
        // 0x800323BC: or          $s1, $s0, $zero
        ctx->r17 = ctx->r16 | 0;
            goto L_80032390;
    }
    // 0x800323BC: or          $s1, $s0, $zero
    ctx->r17 = ctx->r16 | 0;
    // 0x800323C0: b           L_800323EC
    // 0x800323C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800323EC;
    // 0x800323C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800323C8:
    // 0x800323C8: jal         0x80034EE0
    // 0x800323CC: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    func_80034EE0(rdram, ctx);
        goto after_2;
    // 0x800323CC: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    after_2:
    // 0x800323D0: beq         $v0, $zero, L_800323E0
    if (ctx->r2 == 0) {
        // 0x800323D4: nop
    
            goto L_800323E0;
    }
    // 0x800323D4: nop

    // 0x800323D8: jal         0x80032120
    // 0x800323DC: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    func_80032120(rdram, ctx);
        goto after_3;
    // 0x800323DC: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    after_3:
L_800323E0:
    // 0x800323E0: jal         0x80032310
    // 0x800323E4: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    func_80032310(rdram, ctx);
        goto after_4;
    // 0x800323E4: andi        $a0, $s3, 0xFF
    ctx->r4 = ctx->r19 & 0XFF;
    after_4:
    // 0x800323E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800323EC:
    // 0x800323EC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800323F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800323F4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800323F8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800323FC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80032400: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80032404: jr          $ra
    // 0x80032408: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80032408: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8003240C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003240C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80032410: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80032414: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80032418: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003241C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80032420: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80032424: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80032428: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8003242C:
    // 0x8003242C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80032430: jal         0x8003246C
    // 0x80032434: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_8003246C(rdram, ctx);
        goto after_0;
    // 0x80032434: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x80032438: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003243C: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x80032440: slti        $at, $t6, 0x10
    ctx->r1 = SIGNED(ctx->r14) < 0X10 ? 1 : 0;
    // 0x80032444: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80032448: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8003244C: bne         $at, $zero, L_8003242C
    if (ctx->r1 != 0) {
        // 0x80032450: addiu       $s2, $s2, 0x6
        ctx->r18 = ADD32(ctx->r18, 0X6);
            goto L_8003242C;
    }
    // 0x80032450: addiu       $s2, $s2, 0x6
    ctx->r18 = ADD32(ctx->r18, 0X6);
    // 0x80032454: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80032458: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003245C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80032460: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80032464: jr          $ra
    // 0x80032468: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80032468: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8003246C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003246C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80032470: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80032474: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80032478: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003247C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80032480: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80032484: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80032488: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8003248C:
    // 0x8003248C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80032490: jal         0x800324CC
    // 0x80032494: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800324CC(rdram, ctx);
        goto after_0;
    // 0x80032494: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x80032498: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003249C: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x800324A0: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x800324A4: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x800324A8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800324AC: bne         $at, $zero, L_8003248C
    if (ctx->r1 != 0) {
        // 0x800324B0: addiu       $s2, $s2, 0x3
        ctx->r18 = ADD32(ctx->r18, 0X3);
            goto L_8003248C;
    }
    // 0x800324B0: addiu       $s2, $s2, 0x3
    ctx->r18 = ADD32(ctx->r18, 0X3);
    // 0x800324B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800324B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800324BC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800324C0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800324C4: jr          $ra
    // 0x800324C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800324C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800324CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800324CC: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x800324D0: addiu       $v1, $sp, 0x8
    ctx->r3 = ADD32(ctx->r29, 0X8);
    // 0x800324D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800324D8:
    // 0x800324D8: addu        $t7, $v1, $v0
    ctx->r15 = ADD32(ctx->r3, ctx->r2);
    // 0x800324DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800324E0: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x800324E4: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x800324E8: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x800324EC: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x800324F0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x800324F4: bne         $at, $zero, L_800324D8
    if (ctx->r1 != 0) {
        // 0x800324F8: sb          $t6, 0x0($t7)
        MEM_B(0X0, ctx->r15) = ctx->r14;
            goto L_800324D8;
    }
    // 0x800324F8: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x800324FC: lbu         $v1, 0x9($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X9);
    // 0x80032500: lbu         $t1, 0x8($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X8);
    // 0x80032504: lbu         $a0, 0xA($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XA);
    // 0x80032508: sra         $t9, $v1, 4
    ctx->r25 = S32(SIGNED(ctx->r3) >> 4);
    // 0x8003250C: lbu         $t8, 0xB($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0XB);
    // 0x80032510: andi        $t0, $t9, 0x3
    ctx->r8 = ctx->r25 & 0X3;
    // 0x80032514: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80032518: sra         $t4, $a0, 2
    ctx->r12 = S32(SIGNED(ctx->r4) >> 2);
    // 0x8003251C: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80032520: andi        $t5, $t4, 0xF
    ctx->r13 = ctx->r12 & 0XF;
    // 0x80032524: sll         $t6, $v1, 4
    ctx->r14 = S32(ctx->r3 << 4);
    // 0x80032528: sll         $t1, $a0, 6
    ctx->r9 = S32(ctx->r4 << 6);
    // 0x8003252C: andi        $t9, $t8, 0x3F
    ctx->r25 = ctx->r24 & 0X3F;
    // 0x80032530: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80032534: addu        $t0, $t9, $t1
    ctx->r8 = ADD32(ctx->r25, ctx->r9);
    // 0x80032538: sb          $t3, 0xC($sp)
    MEM_B(0XC, ctx->r29) = ctx->r11;
    // 0x8003253C: sb          $t7, 0xD($sp)
    MEM_B(0XD, ctx->r29) = ctx->r15;
    // 0x80032540: sb          $t0, 0xE($sp)
    MEM_B(0XE, ctx->r29) = ctx->r8;
    // 0x80032544: addiu       $v1, $sp, 0xC
    ctx->r3 = ADD32(ctx->r29, 0XC);
    // 0x80032548: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003254C:
    // 0x8003254C: addu        $t2, $v1, $v0
    ctx->r10 = ADD32(ctx->r3, ctx->r2);
    // 0x80032550: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80032554: lbu         $t3, 0x0($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X0);
    // 0x80032558: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x8003255C: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x80032560: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x80032564: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80032568: bne         $at, $zero, L_8003254C
    if (ctx->r1 != 0) {
        // 0x8003256C: sb          $t3, -0x1($a1)
        MEM_B(-0X1, ctx->r5) = ctx->r11;
            goto L_8003254C;
    }
    // 0x8003256C: sb          $t3, -0x1($a1)
    MEM_B(-0X1, ctx->r5) = ctx->r11;
    // 0x80032570: jr          $ra
    // 0x80032574: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80032574: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80032578(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80032578: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003257C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80032580: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80032584: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80032588: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8003258C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80032590: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80032594: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80032598:
    // 0x80032598: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8003259C: jal         0x800325D8
    // 0x800325A0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800325D8(rdram, ctx);
        goto after_0;
    // 0x800325A0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x800325A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800325A8: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x800325AC: slti        $at, $t6, 0x10
    ctx->r1 = SIGNED(ctx->r14) < 0X10 ? 1 : 0;
    // 0x800325B0: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x800325B4: addiu       $s1, $s1, 0x6
    ctx->r17 = ADD32(ctx->r17, 0X6);
    // 0x800325B8: bne         $at, $zero, L_80032598
    if (ctx->r1 != 0) {
        // 0x800325BC: addiu       $s2, $s2, 0x8
        ctx->r18 = ADD32(ctx->r18, 0X8);
            goto L_80032598;
    }
    // 0x800325BC: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x800325C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800325C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800325C8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800325CC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800325D0: jr          $ra
    // 0x800325D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800325D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800325D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800325D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800325DC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800325E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800325E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800325E8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x800325EC: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x800325F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800325F4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_800325F8:
    // 0x800325F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800325FC: jal         0x80032638
    // 0x80032600: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_80032638(rdram, ctx);
        goto after_0;
    // 0x80032600: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x80032604: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80032608: andi        $t6, $s0, 0xFF
    ctx->r14 = ctx->r16 & 0XFF;
    // 0x8003260C: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x80032610: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80032614: addiu       $s1, $s1, 0x3
    ctx->r17 = ADD32(ctx->r17, 0X3);
    // 0x80032618: bne         $at, $zero, L_800325F8
    if (ctx->r1 != 0) {
        // 0x8003261C: addiu       $s2, $s2, 0x4
        ctx->r18 = ADD32(ctx->r18, 0X4);
            goto L_800325F8;
    }
    // 0x8003261C: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80032620: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80032624: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80032628: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003262C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80032630: jr          $ra
    // 0x80032634: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80032634: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80032638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80032638: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8003263C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80032640: addiu       $v1, $sp, 0xC
    ctx->r3 = ADD32(ctx->r29, 0XC);
    // 0x80032644: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80032648:
    // 0x80032648: addu        $t7, $v1, $v0
    ctx->r15 = ADD32(ctx->r3, ctx->r2);
    // 0x8003264C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80032650: lbu         $t6, 0x0($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X0);
    // 0x80032654: andi        $t8, $v0, 0xFF
    ctx->r24 = ctx->r2 & 0XFF;
    // 0x80032658: slti        $at, $t8, 0x3
    ctx->r1 = SIGNED(ctx->r24) < 0X3 ? 1 : 0;
    // 0x8003265C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    // 0x80032660: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80032664: bne         $at, $zero, L_80032648
    if (ctx->r1 != 0) {
        // 0x80032668: sb          $t6, 0x0($t7)
        MEM_B(0X0, ctx->r15) = ctx->r14;
            goto L_80032648;
    }
    // 0x80032668: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x8003266C: lbu         $v1, 0xC($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0XC);
    // 0x80032670: lbu         $a0, 0xD($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0XD);
    // 0x80032674: lbu         $a1, 0xE($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0XE);
    // 0x80032678: sra         $t9, $v1, 2
    ctx->r25 = S32(SIGNED(ctx->r3) >> 2);
    // 0x8003267C: andi        $t0, $t9, 0x3F
    ctx->r8 = ctx->r25 & 0X3F;
    // 0x80032680: sra         $t1, $a0, 4
    ctx->r9 = S32(SIGNED(ctx->r4) >> 4);
    // 0x80032684: andi        $t2, $t1, 0xF
    ctx->r10 = ctx->r9 & 0XF;
    // 0x80032688: sll         $t3, $v1, 4
    ctx->r11 = S32(ctx->r3 << 4);
    // 0x8003268C: sll         $t8, $a0, 2
    ctx->r24 = S32(ctx->r4 << 2);
    // 0x80032690: sra         $t6, $a1, 6
    ctx->r14 = S32(SIGNED(ctx->r5) >> 6);
    // 0x80032694: sb          $t0, 0x8($sp)
    MEM_B(0X8, ctx->r29) = ctx->r8;
    // 0x80032698: andi        $t4, $t3, 0x30
    ctx->r12 = ctx->r11 & 0X30;
    // 0x8003269C: andi        $t7, $t6, 0x3
    ctx->r15 = ctx->r14 & 0X3;
    // 0x800326A0: andi        $t9, $t8, 0x3C
    ctx->r25 = ctx->r24 & 0X3C;
    // 0x800326A4: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x800326A8: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x800326AC: andi        $t1, $a1, 0x3F
    ctx->r9 = ctx->r5 & 0X3F;
    // 0x800326B0: sb          $t5, 0x9($sp)
    MEM_B(0X9, ctx->r29) = ctx->r13;
    // 0x800326B4: sb          $t0, 0xA($sp)
    MEM_B(0XA, ctx->r29) = ctx->r8;
    // 0x800326B8: sb          $t1, 0xB($sp)
    MEM_B(0XB, ctx->r29) = ctx->r9;
    // 0x800326BC: addiu       $v1, $sp, 0x8
    ctx->r3 = ADD32(ctx->r29, 0X8);
    // 0x800326C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800326C4:
    // 0x800326C4: addu        $t3, $v1, $v0
    ctx->r11 = ADD32(ctx->r3, ctx->r2);
    // 0x800326C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800326CC: lbu         $t2, 0x0($t3)
    ctx->r10 = MEM_BU(ctx->r11, 0X0);
    // 0x800326D0: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x800326D4: slti        $at, $t4, 0x4
    ctx->r1 = SIGNED(ctx->r12) < 0X4 ? 1 : 0;
    // 0x800326D8: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x800326DC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800326E0: bne         $at, $zero, L_800326C4
    if (ctx->r1 != 0) {
        // 0x800326E4: sb          $t2, -0x1($a2)
        MEM_B(-0X1, ctx->r6) = ctx->r10;
            goto L_800326C4;
    }
    // 0x800326E4: sb          $t2, -0x1($a2)
    MEM_B(-0X1, ctx->r6) = ctx->r10;
    // 0x800326E8: jr          $ra
    // 0x800326EC: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x800326EC: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800326F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800326F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800326F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800326F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800326FC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80032700: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80032704: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80032708: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8003270C: sb          $t6, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = ctx->r14;
    // 0x80032710: addiu       $a1, $a1, -0x4898
    ctx->r5 = ADD32(ctx->r5, -0X4898);
    // 0x80032714: addiu       $a0, $a0, 0x37B0
    ctx->r4 = ADD32(ctx->r4, 0X37B0);
    // 0x80032718: jal         0x8001DA44
    // 0x8003271C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8001DA44(rdram, ctx);
        goto after_0;
    // 0x8003271C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80032720: jal         0x800382A8
    // 0x80032724: nop

    func_800382A8(rdram, ctx);
        goto after_1;
    // 0x80032724: nop

    after_1:
    // 0x80032728: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x8003272C: jal         0x80032824
    // 0x80032730: nop

    func_80032824(rdram, ctx);
        goto after_2;
    // 0x80032730: nop

    after_2:
    // 0x80032734: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80032738: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8003273C: addiu       $a1, $a1, 0x37B0
    ctx->r5 = ADD32(ctx->r5, 0X37B0);
    // 0x80032740: addiu       $a0, $a0, -0x4898
    ctx->r4 = ADD32(ctx->r4, -0X4898);
    // 0x80032744: jal         0x8001DA44
    // 0x80032748: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8001DA44(rdram, ctx);
        goto after_3;
    // 0x80032748: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_3:
    // 0x8003274C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80032750: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x80032754: jal         0x80031B50
    // 0x80032758: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    func_80031B50(rdram, ctx);
        goto after_4;
    // 0x80032758: sb          $zero, -0x2F8C($at)
    MEM_B(-0X2F8C, ctx->r1) = 0;
    after_4:
    // 0x8003275C: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x80032760: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80032764: sll         $t8, $a0, 4
    ctx->r24 = S32(ctx->r4 << 4);
    // 0x80032768: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x8003276C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80032770: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x80032774: sll         $t8, $t8, 8
    ctx->r24 = S32(ctx->r24 << 8);
    // 0x80032778: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8003277C: jal         0x80031B20
    // 0x80032780: sw          $v0, 0x5354($at)
    MEM_W(0X5354, ctx->r1) = ctx->r2;
    func_80031B20(rdram, ctx);
        goto after_5;
    // 0x80032780: sw          $v0, 0x5354($at)
    MEM_W(0X5354, ctx->r1) = ctx->r2;
    after_5:
    // 0x80032784: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80032788: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003278C: jr          $ra
    // 0x80032790: nop

    return;
    // 0x80032790: nop

;}
RECOMP_FUNC void func_80032794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80032794: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80032798: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003279C: andi        $s0, $a0, 0xFF
    ctx->r16 = ctx->r4 & 0XFF;
    // 0x800327A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800327A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800327A8: jal         0x80032824
    // 0x800327AC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80032824(rdram, ctx);
        goto after_0;
    // 0x800327AC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_0:
    // 0x800327B0: jal         0x80031B50
    // 0x800327B4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80031B50(rdram, ctx);
        goto after_1;
    // 0x800327B4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_1:
    // 0x800327B8: sll         $t6, $s0, 4
    ctx->r14 = S32(ctx->r16 << 4);
    // 0x800327BC: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x800327C0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800327C4: addu        $t6, $t6, $s0
    ctx->r14 = ADD32(ctx->r14, ctx->r16);
    // 0x800327C8: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x800327CC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800327D0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800327D4: jal         0x800353F0
    // 0x800327D8: sw          $v0, 0x5354($at)
    MEM_W(0X5354, ctx->r1) = ctx->r2;
    func_800353F0(rdram, ctx);
        goto after_2;
    // 0x800327D8: sw          $v0, 0x5354($at)
    MEM_W(0X5354, ctx->r1) = ctx->r2;
    after_2:
    // 0x800327DC: bne         $s0, $zero, L_80032808
    if (ctx->r16 != 0) {
        // 0x800327E0: nop
    
            goto L_80032808;
    }
    // 0x800327E0: nop

    // 0x800327E4: jal         0x800353F0
    // 0x800327E8: nop

    func_800353F0(rdram, ctx);
        goto after_3;
    // 0x800327E8: nop

    after_3:
    // 0x800327EC: beq         $v0, $zero, L_80032808
    if (ctx->r2 == 0) {
        // 0x800327F0: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80032808;
    }
    // 0x800327F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800327F4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x800327F8: addiu       $v0, $v0, 0x5350
    ctx->r2 = ADD32(ctx->r2, 0X5350);
    // 0x800327FC: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80032800: jal         0x80031B20
    // 0x80032804: sw          $t7, 0x3D04($v0)
    MEM_W(0X3D04, ctx->r2) = ctx->r15;
    func_80031B20(rdram, ctx);
        goto after_4;
    // 0x80032804: sw          $t7, 0x3D04($v0)
    MEM_W(0X3D04, ctx->r2) = ctx->r15;
    after_4:
L_80032808:
    // 0x80032808: jal         0x80031B20
    // 0x8003280C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80031B20(rdram, ctx);
        goto after_5;
    // 0x8003280C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_5:
    // 0x80032810: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80032814: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80032818: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8003281C: jr          $ra
    // 0x80032820: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80032820: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80032824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80032824: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80032828: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8003282C: andi        $s5, $a0, 0xFF
    ctx->r21 = ctx->r4 & 0XFF;
    // 0x80032830: sll         $t7, $s5, 4
    ctx->r15 = S32(ctx->r21 << 4);
    // 0x80032834: subu        $t7, $t7, $s5
    ctx->r15 = SUB32(ctx->r15, ctx->r21);
    // 0x80032838: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003283C: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80032840: addu        $t7, $t7, $s5
    ctx->r15 = ADD32(ctx->r15, ctx->r21);
    // 0x80032844: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80032848: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x8003284C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80032850: addiu       $t8, $t8, 0x5350
    ctx->r24 = ADD32(ctx->r24, 0X5350);
    // 0x80032854: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x80032858: lui         $s6, 0x8011
    ctx->r22 = S32(0X8011 << 16);
    // 0x8003285C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80032860: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80032864: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80032868: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003286C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80032870: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80032874: addiu       $s6, $s6, 0x5350
    ctx->r22 = ADD32(ctx->r22, 0X5350);
    // 0x80032878: addu        $s7, $t7, $t8
    ctx->r23 = ADD32(ctx->r15, ctx->r24);
    // 0x8003287C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80032880: addiu       $t0, $s2, 0x2A
    ctx->r8 = ADD32(ctx->r18, 0X2A);
L_80032884:
    // 0x80032884: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x80032888: sra         $t2, $t1, 16
    ctx->r10 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8003288C: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80032890: addiu       $t4, $t4, 0x37B0
    ctx->r12 = ADD32(ctx->r12, 0X37B0);
    // 0x80032894: sll         $t3, $t2, 5
    ctx->r11 = S32(ctx->r10 << 5);
    // 0x80032898: sll         $t9, $s2, 5
    ctx->r25 = S32(ctx->r18 << 5);
    // 0x8003289C: addu        $s3, $s7, $t9
    ctx->r19 = ADD32(ctx->r23, ctx->r25);
    // 0x800328A0: addu        $s4, $t3, $t4
    ctx->r20 = ADD32(ctx->r11, ctx->r12);
    // 0x800328A4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x800328A8: sll         $s0, $s1, 1
    ctx->r16 = S32(ctx->r17 << 1);
L_800328AC:
    // 0x800328AC: addu        $t6, $s4, $s0
    ctx->r14 = ADD32(ctx->r20, ctx->r16);
    // 0x800328B0: lbu         $at, 0x0($t6)
    ctx->r1 = MEM_BU(ctx->r14, 0X0);
    // 0x800328B4: addu        $t5, $s3, $s0
    ctx->r13 = ADD32(ctx->r19, ctx->r16);
    // 0x800328B8: sb          $at, 0xDB0($t5)
    MEM_B(0XDB0, ctx->r13) = ctx->r1;
    // 0x800328BC: lbu         $t9, 0x1($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X1);
    // 0x800328C0: bne         $s5, $zero, L_800328F0
    if (ctx->r21 != 0) {
        // 0x800328C4: sb          $t9, 0xDB1($t5)
        MEM_B(0XDB1, ctx->r13) = ctx->r25;
            goto L_800328F0;
    }
    // 0x800328C4: sb          $t9, 0xDB1($t5)
    MEM_B(0XDB1, ctx->r13) = ctx->r25;
    // 0x800328C8: jal         0x800353F0
    // 0x800328CC: nop

    func_800353F0(rdram, ctx);
        goto after_0;
    // 0x800328CC: nop

    after_0:
    // 0x800328D0: beq         $v0, $zero, L_800328F0
    if (ctx->r2 == 0) {
        // 0x800328D4: sll         $t0, $s2, 5
        ctx->r8 = S32(ctx->r18 << 5);
            goto L_800328F0;
    }
    // 0x800328D4: sll         $t0, $s2, 5
    ctx->r8 = S32(ctx->r18 << 5);
    // 0x800328D8: addu        $t1, $s6, $t0
    ctx->r9 = ADD32(ctx->r22, ctx->r8);
    // 0x800328DC: addu        $v0, $t1, $s0
    ctx->r2 = ADD32(ctx->r9, ctx->r16);
    // 0x800328E0: lbu         $at, 0xDB0($v0)
    ctx->r1 = MEM_BU(ctx->r2, 0XDB0);
    // 0x800328E4: lbu         $t3, 0xDB1($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0XDB1);
    // 0x800328E8: sb          $at, 0x4AB0($v0)
    MEM_B(0X4AB0, ctx->r2) = ctx->r1;
    // 0x800328EC: sb          $t3, 0x4AB1($v0)
    MEM_B(0X4AB1, ctx->r2) = ctx->r11;
L_800328F0:
    // 0x800328F0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800328F4: sll         $t4, $s1, 16
    ctx->r12 = S32(ctx->r17 << 16);
    // 0x800328F8: sra         $s1, $t4, 16
    ctx->r17 = S32(SIGNED(ctx->r12) >> 16);
    // 0x800328FC: slti        $at, $s1, 0x10
    ctx->r1 = SIGNED(ctx->r17) < 0X10 ? 1 : 0;
    // 0x80032900: bne         $at, $zero, L_800328AC
    if (ctx->r1 != 0) {
        // 0x80032904: sll         $s0, $s1, 1
        ctx->r16 = S32(ctx->r17 << 1);
            goto L_800328AC;
    }
    // 0x80032904: sll         $s0, $s1, 1
    ctx->r16 = S32(ctx->r17 << 1);
    // 0x80032908: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8003290C: sll         $t7, $s2, 16
    ctx->r15 = S32(ctx->r18 << 16);
    // 0x80032910: sra         $s2, $t7, 16
    ctx->r18 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80032914: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x80032918: bne         $at, $zero, L_80032884
    if (ctx->r1 != 0) {
        // 0x8003291C: addiu       $t0, $s2, 0x2A
        ctx->r8 = ADD32(ctx->r18, 0X2A);
            goto L_80032884;
    }
    // 0x8003291C: addiu       $t0, $s2, 0x2A
    ctx->r8 = ADD32(ctx->r18, 0X2A);
    // 0x80032920: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80032924: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80032928: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003292C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80032930: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80032934: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80032938: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8003293C: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80032940: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80032944: jr          $ra
    // 0x80032948: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80032948: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8003294C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003294C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80032950: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80032954: andi        $s0, $a0, 0xFF
    ctx->r16 = ctx->r4 & 0XFF;
    // 0x80032958: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003295C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80032960: jal         0x80031B50
    // 0x80032964: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80031B50(rdram, ctx);
        goto after_0;
    // 0x80032964: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_0:
    // 0x80032968: sll         $t6, $s0, 4
    ctx->r14 = S32(ctx->r16 << 4);
    // 0x8003296C: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x80032970: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80032974: addu        $t6, $t6, $s0
    ctx->r14 = ADD32(ctx->r14, ctx->r16);
    // 0x80032978: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x8003297C: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80032980: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80032984: lw          $t7, 0x5354($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5354);
    // 0x80032988: nop

    // 0x8003298C: bne         $v0, $t7, L_80032A98
    if (ctx->r2 != ctx->r15) {
        // 0x80032990: nop
    
            goto L_80032A98;
    }
    // 0x80032990: nop

    // 0x80032994: jal         0x800382A8
    // 0x80032998: nop

    func_800382A8(rdram, ctx);
        goto after_1;
    // 0x80032998: nop

    after_1:
    // 0x8003299C: sll         $t8, $s0, 4
    ctx->r24 = S32(ctx->r16 << 4);
    // 0x800329A0: subu        $t8, $t8, $s0
    ctx->r24 = SUB32(ctx->r24, ctx->r16);
    // 0x800329A4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800329A8: addu        $t8, $t8, $s0
    ctx->r24 = ADD32(ctx->r24, ctx->r16);
    // 0x800329AC: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800329B0: addiu       $t9, $t9, 0x5350
    ctx->r25 = ADD32(ctx->r25, 0X5350);
    // 0x800329B4: sll         $t8, $t8, 8
    ctx->r24 = S32(ctx->r24 << 8);
    // 0x800329B8: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x800329BC: addiu       $t0, $t0, 0x37B0
    ctx->r8 = ADD32(ctx->r8, 0X37B0);
    // 0x800329C0: addu        $t3, $t8, $t9
    ctx->r11 = ADD32(ctx->r24, ctx->r25);
    // 0x800329C4: or          $t2, $zero, $zero
    ctx->r10 = 0 | 0;
    // 0x800329C8: addiu       $a3, $t2, 0x2A
    ctx->r7 = ADD32(ctx->r10, 0X2A);
L_800329CC:
    // 0x800329CC: sll         $t5, $a3, 16
    ctx->r13 = S32(ctx->r7 << 16);
    // 0x800329D0: sll         $t4, $t2, 5
    ctx->r12 = S32(ctx->r10 << 5);
    // 0x800329D4: addu        $t1, $t3, $t4
    ctx->r9 = ADD32(ctx->r11, ctx->r12);
    // 0x800329D8: sra         $a3, $t5, 16
    ctx->r7 = S32(SIGNED(ctx->r13) >> 16);
    // 0x800329DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800329E0: sll         $a2, $a0, 1
    ctx->r6 = S32(ctx->r4 << 1);
L_800329E4:
    // 0x800329E4: addu        $a1, $t1, $a2
    ctx->r5 = ADD32(ctx->r9, ctx->r6);
    // 0x800329E8: lbu         $t7, 0xDB0($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0XDB0);
    // 0x800329EC: addiu       $v0, $a1, 0xDB0
    ctx->r2 = ADD32(ctx->r5, 0XDB0);
    // 0x800329F0: bne         $a3, $t7, L_80032A08
    if (ctx->r7 != ctx->r15) {
        // 0x800329F4: nop
    
            goto L_80032A08;
    }
    // 0x800329F4: nop

    // 0x800329F8: lbu         $t8, 0xDB1($a1)
    ctx->r24 = MEM_BU(ctx->r5, 0XDB1);
    // 0x800329FC: nop

    // 0x80032A00: beq         $a0, $t8, L_80032A60
    if (ctx->r4 == ctx->r24) {
        // 0x80032A04: nop
    
            goto L_80032A60;
    }
    // 0x80032A04: nop

L_80032A08:
    // 0x80032A08: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x80032A0C: lbu         $t6, 0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1);
    // 0x80032A10: sll         $t4, $t9, 5
    ctx->r12 = S32(ctx->r25 << 5);
    // 0x80032A14: addu        $t5, $t0, $t4
    ctx->r13 = ADD32(ctx->r8, ctx->r12);
    // 0x80032A18: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80032A1C: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80032A20: sb          $a3, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r7;
    // 0x80032A24: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x80032A28: lbu         $t5, 0x1($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X1);
    // 0x80032A2C: sll         $t4, $t9, 5
    ctx->r12 = S32(ctx->r25 << 5);
    // 0x80032A30: addu        $t6, $t0, $t4
    ctx->r14 = ADD32(ctx->r8, ctx->r12);
    // 0x80032A34: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x80032A38: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80032A3C: sb          $a0, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r4;
    // 0x80032A40: sll         $t9, $a3, 5
    ctx->r25 = S32(ctx->r7 << 5);
    // 0x80032A44: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x80032A48: addu        $t4, $t0, $t9
    ctx->r12 = ADD32(ctx->r8, ctx->r25);
    // 0x80032A4C: addu        $v1, $t4, $a2
    ctx->r3 = ADD32(ctx->r12, ctx->r6);
    // 0x80032A50: sb          $t5, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r13;
    // 0x80032A54: lbu         $t6, 0x1($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1);
    // 0x80032A58: nop

    // 0x80032A5C: sb          $t6, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r14;
L_80032A60:
    // 0x80032A60: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80032A64: sll         $t7, $a0, 16
    ctx->r15 = S32(ctx->r4 << 16);
    // 0x80032A68: sra         $a0, $t7, 16
    ctx->r4 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80032A6C: slti        $at, $a0, 0x10
    ctx->r1 = SIGNED(ctx->r4) < 0X10 ? 1 : 0;
    // 0x80032A70: bne         $at, $zero, L_800329E4
    if (ctx->r1 != 0) {
        // 0x80032A74: sll         $a2, $a0, 1
        ctx->r6 = S32(ctx->r4 << 1);
            goto L_800329E4;
    }
    // 0x80032A74: sll         $a2, $a0, 1
    ctx->r6 = S32(ctx->r4 << 1);
    // 0x80032A78: addiu       $t2, $t2, 0x1
    ctx->r10 = ADD32(ctx->r10, 0X1);
    // 0x80032A7C: sll         $t9, $t2, 16
    ctx->r25 = S32(ctx->r10 << 16);
    // 0x80032A80: sra         $t2, $t9, 16
    ctx->r10 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80032A84: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x80032A88: bne         $at, $zero, L_800329CC
    if (ctx->r1 != 0) {
        // 0x80032A8C: addiu       $a3, $t2, 0x2A
        ctx->r7 = ADD32(ctx->r10, 0X2A);
            goto L_800329CC;
    }
    // 0x80032A8C: addiu       $a3, $t2, 0x2A
    ctx->r7 = ADD32(ctx->r10, 0X2A);
    // 0x80032A90: b           L_80032ABC
    // 0x80032A94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80032ABC;
    // 0x80032A94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80032A98:
    // 0x80032A98: jal         0x80034EE0
    // 0x80032A9C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80034EE0(rdram, ctx);
        goto after_2;
    // 0x80032A9C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_2:
    // 0x80032AA0: beq         $v0, $zero, L_80032AB0
    if (ctx->r2 == 0) {
        // 0x80032AA4: nop
    
            goto L_80032AB0;
    }
    // 0x80032AA4: nop

    // 0x80032AA8: jal         0x800326F0
    // 0x80032AAC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_800326F0(rdram, ctx);
        goto after_3;
    // 0x80032AAC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_3:
L_80032AB0:
    // 0x80032AB0: jal         0x8003294C
    // 0x80032AB4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_8003294C(rdram, ctx);
        goto after_4;
    // 0x80032AB4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_4:
    // 0x80032AB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80032ABC:
    // 0x80032ABC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80032AC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80032AC4: jr          $ra
    // 0x80032AC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80032AC8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80032ACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80032ACC: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x80032AD0: sll         $t6, $a3, 4
    ctx->r14 = S32(ctx->r7 << 4);
    // 0x80032AD4: subu        $t6, $t6, $a3
    ctx->r14 = SUB32(ctx->r14, ctx->r7);
    // 0x80032AD8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80032ADC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80032AE0: addu        $t6, $t6, $a3
    ctx->r14 = ADD32(ctx->r14, ctx->r7);
    // 0x80032AE4: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80032AE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80032AEC: addiu       $t7, $t7, 0x5350
    ctx->r15 = ADD32(ctx->r15, 0X5350);
    // 0x80032AF0: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x80032AF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80032AF8: addu        $a2, $t6, $t7
    ctx->r6 = ADD32(ctx->r14, ctx->r15);
    // 0x80032AFC: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80032B00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80032B04: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
L_80032B08:
    // 0x80032B08: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x80032B0C: sll         $t8, $t8, 7
    ctx->r24 = S32(ctx->r24 << 7);
    // 0x80032B10: addu        $v1, $a2, $t8
    ctx->r3 = ADD32(ctx->r6, ctx->r24);
    // 0x80032B14: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80032B18:
    // 0x80032B18: addu        $t9, $v1, $v0
    ctx->r25 = ADD32(ctx->r3, ctx->r2);
    // 0x80032B1C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80032B20: sll         $t0, $v0, 16
    ctx->r8 = S32(ctx->r2 << 16);
    // 0x80032B24: sra         $v0, $t0, 16
    ctx->r2 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80032B28: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80032B2C: bne         $at, $zero, L_80032B18
    if (ctx->r1 != 0) {
        // 0x80032B30: sb          $a0, 0xDF0($t9)
        MEM_B(0XDF0, ctx->r25) = ctx->r4;
            goto L_80032B18;
    }
    // 0x80032B30: sb          $a0, 0xDF0($t9)
    MEM_B(0XDF0, ctx->r25) = ctx->r4;
    // 0x80032B34: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80032B38: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x80032B3C: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    // 0x80032B40: slti        $at, $a1, 0x2
    ctx->r1 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x80032B44: bne         $at, $zero, L_80032B08
    if (ctx->r1 != 0) {
        // 0x80032B48: sll         $t8, $a1, 2
        ctx->r24 = S32(ctx->r5 << 2);
            goto L_80032B08;
    }
    // 0x80032B48: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x80032B4C: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    // 0x80032B50: jal         0x80031BE8
    // 0x80032B54: sb          $a3, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r7;
    func_80031BE8(rdram, ctx);
        goto after_0;
    // 0x80032B54: sb          $a3, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r7;
    after_0:
    // 0x80032B58: lbu         $a3, 0x1B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X1B);
    // 0x80032B5C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80032B60: sll         $t4, $a3, 4
    ctx->r12 = S32(ctx->r7 << 4);
    // 0x80032B64: subu        $t4, $t4, $a3
    ctx->r12 = SUB32(ctx->r12, ctx->r7);
    // 0x80032B68: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80032B6C: addu        $t4, $t4, $a3
    ctx->r12 = ADD32(ctx->r12, ctx->r7);
    // 0x80032B70: sll         $t4, $t4, 8
    ctx->r12 = S32(ctx->r12 << 8);
    // 0x80032B74: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80032B78: sw          $v0, 0x5358($at)
    MEM_W(0X5358, ctx->r1) = ctx->r2;
    // 0x80032B7C: jal         0x80031B20
    // 0x80032B80: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    func_80031B20(rdram, ctx);
        goto after_1;
    // 0x80032B80: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    after_1:
    // 0x80032B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80032B88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80032B8C: jr          $ra
    // 0x80032B90: nop

    return;
    // 0x80032B90: nop

;}
RECOMP_FUNC void func_80032B94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80032B94: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80032B98: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80032B9C: andi        $s5, $a0, 0xFF
    ctx->r21 = ctx->r4 & 0XFF;
    // 0x80032BA0: sll         $t7, $s5, 4
    ctx->r15 = S32(ctx->r21 << 4);
    // 0x80032BA4: subu        $t7, $t7, $s5
    ctx->r15 = SUB32(ctx->r15, ctx->r21);
    // 0x80032BA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80032BAC: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80032BB0: addu        $t7, $t7, $s5
    ctx->r15 = ADD32(ctx->r15, ctx->r21);
    // 0x80032BB4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80032BB8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80032BBC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80032BC0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80032BC4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80032BC8: addiu       $t8, $t8, 0x5350
    ctx->r24 = ADD32(ctx->r24, 0X5350);
    // 0x80032BCC: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x80032BD0: lui         $s4, 0x8011
    ctx->r20 = S32(0X8011 << 16);
    // 0x80032BD4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80032BD8: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80032BDC: addiu       $s4, $s4, 0x5350
    ctx->r20 = ADD32(ctx->r20, 0X5350);
    // 0x80032BE0: addu        $s3, $t7, $t8
    ctx->r19 = ADD32(ctx->r15, ctx->r24);
    // 0x80032BE4: sb          $s5, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r21;
    // 0x80032BE8: addiu       $s0, $zero, 0x19
    ctx->r16 = ADD32(0, 0X19);
    // 0x80032BEC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
L_80032BF0:
    // 0x80032BF0: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x80032BF4: addiu       $t5, $t5, 0x5330
    ctx->r13 = ADD32(ctx->r13, 0X5330);
    // 0x80032BF8: sll         $t9, $s1, 4
    ctx->r25 = S32(ctx->r17 << 4);
    // 0x80032BFC: addu        $t0, $t9, $t5
    ctx->r8 = ADD32(ctx->r25, ctx->r13);
    // 0x80032C00: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80032C04: sll         $t8, $s1, 2
    ctx->r24 = S32(ctx->r17 << 2);
    // 0x80032C08: addu        $t8, $t8, $s1
    ctx->r24 = ADD32(ctx->r24, ctx->r17);
    // 0x80032C0C: addiu       $t7, $t7, -0x2F6C
    ctx->r15 = ADD32(ctx->r15, -0X2F6C);
    // 0x80032C10: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80032C14: sll         $t6, $s1, 4
    ctx->r14 = S32(ctx->r17 << 4);
    // 0x80032C18: addu        $t1, $t6, $t7
    ctx->r9 = ADD32(ctx->r14, ctx->r15);
    // 0x80032C1C: addiu       $t9, $t9, -0x7A10
    ctx->r25 = ADD32(ctx->r25, -0X7A10);
    // 0x80032C20: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80032C24: addu        $t2, $t8, $t9
    ctx->r10 = ADD32(ctx->r24, ctx->r25);
    // 0x80032C28: sll         $t7, $s1, 4
    ctx->r15 = S32(ctx->r17 << 4);
    // 0x80032C2C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80032C30: sll         $s2, $s1, 2
    ctx->r18 = S32(ctx->r17 << 2);
    // 0x80032C34: addu        $s2, $s2, $s1
    ctx->r18 = ADD32(ctx->r18, ctx->r17);
    // 0x80032C38: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80032C3C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80032C40: sll         $s2, $s2, 7
    ctx->r18 = S32(ctx->r18 << 7);
    // 0x80032C44: lui         $t9, 0x800B
    ctx->r25 = S32(0X800B << 16);
    // 0x80032C48: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80032C4C: addiu       $t6, $t6, 0x3D30
    ctx->r14 = ADD32(ctx->r14, 0X3D30);
    // 0x80032C50: addiu       $t9, $t9, 0x4F30
    ctx->r25 = ADD32(ctx->r25, 0X4F30);
    // 0x80032C54: addu        $a3, $s3, $s2
    ctx->r7 = ADD32(ctx->r19, ctx->r18);
    // 0x80032C58: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80032C5C: sll         $t5, $s1, 7
    ctx->r13 = S32(ctx->r17 << 7);
    // 0x80032C60: addu        $t3, $t5, $t6
    ctx->r11 = ADD32(ctx->r13, ctx->r14);
    // 0x80032C64: addu        $t4, $t8, $t9
    ctx->r12 = ADD32(ctx->r24, ctx->r25);
    // 0x80032C68: addiu       $a3, $a3, 0xDF0
    ctx->r7 = ADD32(ctx->r7, 0XDF0);
    // 0x80032C6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80032C70: addu        $t5, $t0, $a1
    ctx->r13 = ADD32(ctx->r8, ctx->r5);
L_80032C74:
    // 0x80032C74: lbu         $t6, 0x0($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X0);
    // 0x80032C78: addu        $a2, $a3, $a1
    ctx->r6 = ADD32(ctx->r7, ctx->r5);
    // 0x80032C7C: addu        $t7, $t1, $a1
    ctx->r15 = ADD32(ctx->r9, ctx->r5);
    // 0x80032C80: sb          $t6, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r14;
    // 0x80032C84: lbu         $t8, 0x2A0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X2A0);
    // 0x80032C88: sll         $t5, $a1, 2
    ctx->r13 = S32(ctx->r5 << 2);
    // 0x80032C8C: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x80032C90: addu        $t9, $t9, $a1
    ctx->r25 = ADD32(ctx->r25, ctx->r5);
    // 0x80032C94: addu        $t5, $t5, $a1
    ctx->r13 = ADD32(ctx->r13, ctx->r5);
    // 0x80032C98: addu        $a0, $a3, $t5
    ctx->r4 = ADD32(ctx->r7, ctx->r13);
    // 0x80032C9C: addu        $v1, $t2, $t9
    ctx->r3 = ADD32(ctx->r10, ctx->r25);
    // 0x80032CA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80032CA4: sb          $t8, 0x10($a2)
    MEM_B(0X10, ctx->r6) = ctx->r24;
L_80032CA8:
    // 0x80032CA8: addu        $t6, $v1, $v0
    ctx->r14 = ADD32(ctx->r3, ctx->r2);
    // 0x80032CAC: addu        $t8, $a0, $v0
    ctx->r24 = ADD32(ctx->r4, ctx->r2);
    // 0x80032CB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80032CB4: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x80032CB8: lbu         $t7, 0xB40($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0XB40);
    // 0x80032CBC: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80032CC0: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x80032CC4: bne         $at, $zero, L_80032CA8
    if (ctx->r1 != 0) {
        // 0x80032CC8: sb          $t7, 0x20($t8)
        MEM_B(0X20, ctx->r24) = ctx->r15;
            goto L_80032CA8;
    }
    // 0x80032CC8: sb          $t7, 0x20($t8)
    MEM_B(0X20, ctx->r24) = ctx->r15;
    // 0x80032CCC: sll         $t6, $a1, 3
    ctx->r14 = S32(ctx->r5 << 3);
    // 0x80032CD0: addu        $v1, $t3, $t6
    ctx->r3 = ADD32(ctx->r11, ctx->r14);
    // 0x80032CD4: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x80032CD8: addu        $a0, $a3, $t7
    ctx->r4 = ADD32(ctx->r7, ctx->r15);
    // 0x80032CDC: addiu       $v1, $v1, 0x1500
    ctx->r3 = ADD32(ctx->r3, 0X1500);
    // 0x80032CE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80032CE4:
    // 0x80032CE4: addu        $t8, $v0, $v1
    ctx->r24 = ADD32(ctx->r2, ctx->r3);
    // 0x80032CE8: addu        $t5, $a0, $v0
    ctx->r13 = ADD32(ctx->r4, ctx->r2);
    // 0x80032CEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80032CF0: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x80032CF4: lbu         $t9, 0x0($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X0);
    // 0x80032CF8: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80032CFC: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x80032D00: bne         $at, $zero, L_80032CE4
    if (ctx->r1 != 0) {
        // 0x80032D04: sb          $t9, 0x70($t5)
        MEM_B(0X70, ctx->r13) = ctx->r25;
            goto L_80032CE4;
    }
    // 0x80032D04: sb          $t9, 0x70($t5)
    MEM_B(0X70, ctx->r13) = ctx->r25;
    // 0x80032D08: multu       $a1, $s0
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80032D0C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80032D10: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x80032D14: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80032D18: mflo        $v0
    ctx->r2 = lo;
    // 0x80032D1C: addu        $t9, $t4, $v0
    ctx->r25 = ADD32(ctx->r12, ctx->r2);
    // 0x80032D20: lwl         $at, 0x3840($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X3840);
    // 0x80032D24: lwr         $at, 0x3843($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3843);
    // 0x80032D28: addu        $t8, $a3, $v0
    ctx->r24 = ADD32(ctx->r7, ctx->r2);
    // 0x80032D2C: swl         $at, 0xF0($t8)
    do_swl(rdram, 0XF0, ctx->r24, ctx->r1);
    // 0x80032D30: swr         $at, 0xF3($t8)
    do_swr(rdram, 0XF3, ctx->r24, ctx->r1);
    // 0x80032D34: lwl         $t6, 0x3844($t9)
    ctx->r14 = do_lwl(rdram, ctx->r14, ctx->r25, 0X3844);
    // 0x80032D38: lwr         $t6, 0x3847($t9)
    ctx->r14 = do_lwr(rdram, ctx->r14, ctx->r25, 0X3847);
    // 0x80032D3C: nop

    // 0x80032D40: swl         $t6, 0xF4($t8)
    do_swl(rdram, 0XF4, ctx->r24, ctx->r14);
    // 0x80032D44: swr         $t6, 0xF7($t8)
    do_swr(rdram, 0XF7, ctx->r24, ctx->r14);
    // 0x80032D48: lwl         $at, 0x3848($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X3848);
    // 0x80032D4C: lwr         $at, 0x384B($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X384B);
    // 0x80032D50: nop

    // 0x80032D54: swl         $at, 0xF8($t8)
    do_swl(rdram, 0XF8, ctx->r24, ctx->r1);
    // 0x80032D58: swr         $at, 0xFB($t8)
    do_swr(rdram, 0XFB, ctx->r24, ctx->r1);
    // 0x80032D5C: lwl         $t6, 0x384C($t9)
    ctx->r14 = do_lwl(rdram, ctx->r14, ctx->r25, 0X384C);
    // 0x80032D60: lwr         $t6, 0x384F($t9)
    ctx->r14 = do_lwr(rdram, ctx->r14, ctx->r25, 0X384F);
    // 0x80032D64: nop

    // 0x80032D68: swl         $t6, 0xFC($t8)
    do_swl(rdram, 0XFC, ctx->r24, ctx->r14);
    // 0x80032D6C: swr         $t6, 0xFF($t8)
    do_swr(rdram, 0XFF, ctx->r24, ctx->r14);
    // 0x80032D70: lwl         $at, 0x3850($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X3850);
    // 0x80032D74: lwr         $at, 0x3853($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X3853);
    // 0x80032D78: nop

    // 0x80032D7C: swl         $at, 0x100($t8)
    do_swl(rdram, 0X100, ctx->r24, ctx->r1);
    // 0x80032D80: swr         $at, 0x103($t8)
    do_swr(rdram, 0X103, ctx->r24, ctx->r1);
    // 0x80032D84: lwl         $t6, 0x3854($t9)
    ctx->r14 = do_lwl(rdram, ctx->r14, ctx->r25, 0X3854);
    // 0x80032D88: lwr         $t6, 0x3857($t9)
    ctx->r14 = do_lwr(rdram, ctx->r14, ctx->r25, 0X3857);
    // 0x80032D8C: nop

    // 0x80032D90: swl         $t6, 0x104($t8)
    do_swl(rdram, 0X104, ctx->r24, ctx->r14);
    // 0x80032D94: swr         $t6, 0x107($t8)
    do_swr(rdram, 0X107, ctx->r24, ctx->r14);
    // 0x80032D98: lbu         $at, 0x3858($t9)
    ctx->r1 = MEM_BU(ctx->r25, 0X3858);
    // 0x80032D9C: nop

    // 0x80032DA0: sb          $at, 0x108($t8)
    MEM_B(0X108, ctx->r24) = ctx->r1;
    // 0x80032DA4: slti        $at, $a1, 0x10
    ctx->r1 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x80032DA8: bne         $at, $zero, L_80032C74
    if (ctx->r1 != 0) {
        // 0x80032DAC: addu        $t5, $t0, $a1
        ctx->r13 = ADD32(ctx->r8, ctx->r5);
            goto L_80032C74;
    }
    // 0x80032DAC: addu        $t5, $t0, $a1
    ctx->r13 = ADD32(ctx->r8, ctx->r5);
    // 0x80032DB0: bne         $s5, $zero, L_80032E24
    if (ctx->r21 != 0) {
        // 0x80032DB4: nop
    
            goto L_80032E24;
    }
    // 0x80032DB4: nop

    // 0x80032DB8: jal         0x800353F0
    // 0x80032DBC: nop

    func_800353F0(rdram, ctx);
        goto after_0;
    // 0x80032DBC: nop

    after_0:
    // 0x80032DC0: beq         $v0, $zero, L_80032E24
    if (ctx->r2 == 0) {
        // 0x80032DC4: addu        $t7, $s4, $s2
        ctx->r15 = ADD32(ctx->r20, ctx->r18);
            goto L_80032E24;
    }
    // 0x80032DC4: addu        $t7, $s4, $s2
    ctx->r15 = ADD32(ctx->r20, ctx->r18);
    // 0x80032DC8: or          $t6, $t7, $zero
    ctx->r14 = ctx->r15 | 0;
    // 0x80032DCC: addiu       $t9, $t7, 0x27C
    ctx->r25 = ADD32(ctx->r15, 0X27C);
L_80032DD0:
    // 0x80032DD0: lwl         $at, 0xDF0($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0XDF0);
    // 0x80032DD4: lwr         $at, 0xDF3($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0XDF3);
    // 0x80032DD8: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x80032DDC: swl         $at, 0x4AF0($t7)
    do_swl(rdram, 0X4AF0, ctx->r15, ctx->r1);
    // 0x80032DE0: swr         $at, 0x4AF3($t7)
    do_swr(rdram, 0X4AF3, ctx->r15, ctx->r1);
    // 0x80032DE4: lwl         $at, 0xDE8($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0XDE8);
    // 0x80032DE8: lwr         $at, 0xDEB($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0XDEB);
    // 0x80032DEC: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80032DF0: swl         $at, 0x4AE8($t7)
    do_swl(rdram, 0X4AE8, ctx->r15, ctx->r1);
    // 0x80032DF4: swr         $at, 0x4AEB($t7)
    do_swr(rdram, 0X4AEB, ctx->r15, ctx->r1);
    // 0x80032DF8: lwl         $at, 0xDEC($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0XDEC);
    // 0x80032DFC: lwr         $at, 0xDEF($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0XDEF);
    // 0x80032E00: nop

    // 0x80032E04: swl         $at, 0x4AEC($t7)
    do_swl(rdram, 0X4AEC, ctx->r15, ctx->r1);
    // 0x80032E08: bne         $t6, $t9, L_80032DD0
    if (ctx->r14 != ctx->r25) {
        // 0x80032E0C: swr         $at, 0x4AEF($t7)
        do_swr(rdram, 0X4AEF, ctx->r15, ctx->r1);
            goto L_80032DD0;
    }
    // 0x80032E0C: swr         $at, 0x4AEF($t7)
    do_swr(rdram, 0X4AEF, ctx->r15, ctx->r1);
    // 0x80032E10: lwl         $at, 0xDF0($t6)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r14, 0XDF0);
    // 0x80032E14: lwr         $at, 0xDF3($t6)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r14, 0XDF3);
    // 0x80032E18: nop

    // 0x80032E1C: swl         $at, 0x4AF0($t7)
    do_swl(rdram, 0X4AF0, ctx->r15, ctx->r1);
    // 0x80032E20: swr         $at, 0x4AF3($t7)
    do_swr(rdram, 0X4AF3, ctx->r15, ctx->r1);
L_80032E24:
    // 0x80032E24: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80032E28: sll         $t5, $s1, 16
    ctx->r13 = S32(ctx->r17 << 16);
    // 0x80032E2C: sra         $s1, $t5, 16
    ctx->r17 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80032E30: slti        $at, $s1, 0x2
    ctx->r1 = SIGNED(ctx->r17) < 0X2 ? 1 : 0;
    // 0x80032E34: bne         $at, $zero, L_80032BF0
    if (ctx->r1 != 0) {
        // 0x80032E38: nop
    
            goto L_80032BF0;
    }
    // 0x80032E38: nop

    // 0x80032E3C: lbu         $a0, 0x33($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X33);
    // 0x80032E40: jal         0x80031BE8
    // 0x80032E44: nop

    func_80031BE8(rdram, ctx);
        goto after_1;
    // 0x80032E44: nop

    after_1:
    // 0x80032E48: lbu         $t9, 0x33($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X33);
    // 0x80032E4C: nop

    // 0x80032E50: sll         $t6, $t9, 4
    ctx->r14 = S32(ctx->r25 << 4);
    // 0x80032E54: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x80032E58: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80032E5C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80032E60: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x80032E64: addu        $t7, $s4, $t6
    ctx->r15 = ADD32(ctx->r20, ctx->r14);
    // 0x80032E68: bne         $s5, $zero, L_80032E8C
    if (ctx->r21 != 0) {
        // 0x80032E6C: sw          $v0, 0x8($t7)
        MEM_W(0X8, ctx->r15) = ctx->r2;
            goto L_80032E8C;
    }
    // 0x80032E6C: sw          $v0, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r2;
    // 0x80032E70: jal         0x800353F0
    // 0x80032E74: nop

    func_800353F0(rdram, ctx);
        goto after_2;
    // 0x80032E74: nop

    after_2:
    // 0x80032E78: beq         $v0, $zero, L_80032E8C
    if (ctx->r2 == 0) {
        // 0x80032E7C: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80032E8C;
    }
    // 0x80032E7C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80032E80: lw          $t5, 0x8($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X8);
    // 0x80032E84: jal         0x80031B20
    // 0x80032E88: sw          $t5, 0x3D08($s4)
    MEM_W(0X3D08, ctx->r20) = ctx->r13;
    func_80031B20(rdram, ctx);
        goto after_3;
    // 0x80032E88: sw          $t5, 0x3D08($s4)
    MEM_W(0X3D08, ctx->r20) = ctx->r13;
    after_3:
L_80032E8C:
    // 0x80032E8C: lbu         $a0, 0x33($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X33);
    // 0x80032E90: jal         0x80031B20
    // 0x80032E94: nop

    func_80031B20(rdram, ctx);
        goto after_4;
    // 0x80032E94: nop

    after_4:
    // 0x80032E98: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80032E9C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80032EA0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80032EA4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80032EA8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80032EAC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80032EB0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80032EB4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80032EB8: jr          $ra
    // 0x80032EBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80032EBC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80032EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80032EC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80032EC4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80032EC8: andi        $s1, $a0, 0xFF
    ctx->r17 = ctx->r4 & 0XFF;
    // 0x80032ECC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80032ED0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80032ED4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80032ED8: jal         0x80031BE8
    // 0x80032EDC: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_80031BE8(rdram, ctx);
        goto after_0;
    // 0x80032EDC: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_0:
    // 0x80032EE0: sll         $t6, $s1, 4
    ctx->r14 = S32(ctx->r17 << 4);
    // 0x80032EE4: subu        $t6, $t6, $s1
    ctx->r14 = SUB32(ctx->r14, ctx->r17);
    // 0x80032EE8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80032EEC: addu        $t6, $t6, $s1
    ctx->r14 = ADD32(ctx->r14, ctx->r17);
    // 0x80032EF0: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80032EF4: addiu       $t7, $t7, 0x5350
    ctx->r15 = ADD32(ctx->r15, 0X5350);
    // 0x80032EF8: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x80032EFC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80032F00: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x80032F04: sll         $t6, $s1, 4
    ctx->r14 = S32(ctx->r17 << 4);
    // 0x80032F08: bne         $v0, $t9, L_80033108
    if (ctx->r2 != ctx->r25) {
        // 0x80032F0C: or          $ra, $zero, $zero
        ctx->r31 = 0 | 0;
            goto L_80033108;
    }
    // 0x80032F0C: or          $ra, $zero, $zero
    ctx->r31 = 0 | 0;
    // 0x80032F10: subu        $t6, $t6, $s1
    ctx->r14 = SUB32(ctx->r14, ctx->r17);
    // 0x80032F14: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80032F18: addu        $t6, $t6, $s1
    ctx->r14 = ADD32(ctx->r14, ctx->r17);
    // 0x80032F1C: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x80032F20: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x80032F24: addiu       $t5, $zero, 0x19
    ctx->r13 = ADD32(0, 0X19);
    // 0x80032F28: sll         $t8, $ra, 2
    ctx->r24 = S32(ctx->r31 << 2);
L_80032F2C:
    // 0x80032F2C: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80032F30: addiu       $t6, $t6, 0x5330
    ctx->r14 = ADD32(ctx->r14, 0X5330);
    // 0x80032F34: addu        $t8, $t8, $ra
    ctx->r24 = ADD32(ctx->r24, ctx->r31);
    // 0x80032F38: sll         $t9, $ra, 4
    ctx->r25 = S32(ctx->r31 << 4);
    // 0x80032F3C: addu        $t0, $t9, $t6
    ctx->r8 = ADD32(ctx->r25, ctx->r14);
    // 0x80032F40: sll         $t8, $t8, 7
    ctx->r24 = S32(ctx->r24 << 7);
    // 0x80032F44: addu        $a3, $s0, $t8
    ctx->r7 = ADD32(ctx->r16, ctx->r24);
    // 0x80032F48: sll         $t9, $ra, 2
    ctx->r25 = S32(ctx->r31 << 2);
    // 0x80032F4C: addu        $t9, $t9, $ra
    ctx->r25 = ADD32(ctx->r25, ctx->r31);
    // 0x80032F50: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x80032F54: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x80032F58: addiu       $t6, $t6, -0x7A10
    ctx->r14 = ADD32(ctx->r14, -0X7A10);
    // 0x80032F5C: addiu       $t8, $t8, -0x2F6C
    ctx->r24 = ADD32(ctx->r24, -0X2F6C);
    // 0x80032F60: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80032F64: sll         $t7, $ra, 4
    ctx->r15 = S32(ctx->r31 << 4);
    // 0x80032F68: addu        $t1, $t7, $t8
    ctx->r9 = ADD32(ctx->r15, ctx->r24);
    // 0x80032F6C: addu        $t2, $t9, $t6
    ctx->r10 = ADD32(ctx->r25, ctx->r14);
    // 0x80032F70: sll         $t9, $ra, 4
    ctx->r25 = S32(ctx->r31 << 4);
    // 0x80032F74: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80032F78: addiu       $t8, $t8, 0x3D30
    ctx->r24 = ADD32(ctx->r24, 0X3D30);
    // 0x80032F7C: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80032F80: sll         $t7, $ra, 7
    ctx->r15 = S32(ctx->r31 << 7);
    // 0x80032F84: addu        $t3, $t7, $t8
    ctx->r11 = ADD32(ctx->r15, ctx->r24);
    // 0x80032F88: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x80032F8C: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80032F90: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x80032F94: addiu       $t7, $t7, 0x4F30
    ctx->r15 = ADD32(ctx->r15, 0X4F30);
    // 0x80032F98: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80032F9C: addu        $t4, $t6, $t7
    ctx->r12 = ADD32(ctx->r14, ctx->r15);
    // 0x80032FA0: addiu       $a3, $a3, 0xDF0
    ctx->r7 = ADD32(ctx->r7, 0XDF0);
    // 0x80032FA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80032FA8: addu        $a2, $a3, $a1
    ctx->r6 = ADD32(ctx->r7, ctx->r5);
L_80032FAC:
    // 0x80032FAC: lbu         $t8, 0x0($a2)
    ctx->r24 = MEM_BU(ctx->r6, 0X0);
    // 0x80032FB0: addu        $t9, $t0, $a1
    ctx->r25 = ADD32(ctx->r8, ctx->r5);
    // 0x80032FB4: sb          $t8, 0x0($t9)
    MEM_B(0X0, ctx->r25) = ctx->r24;
    // 0x80032FB8: lbu         $t6, 0x10($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X10);
    // 0x80032FBC: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x80032FC0: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x80032FC4: addu        $t7, $t1, $a1
    ctx->r15 = ADD32(ctx->r9, ctx->r5);
    // 0x80032FC8: addu        $t9, $t9, $a1
    ctx->r25 = ADD32(ctx->r25, ctx->r5);
    // 0x80032FCC: addu        $t8, $t8, $a1
    ctx->r24 = ADD32(ctx->r24, ctx->r5);
    // 0x80032FD0: addu        $v1, $t2, $t8
    ctx->r3 = ADD32(ctx->r10, ctx->r24);
    // 0x80032FD4: addu        $a0, $a3, $t9
    ctx->r4 = ADD32(ctx->r7, ctx->r25);
    // 0x80032FD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80032FDC: sb          $t6, 0x2A0($t7)
    MEM_B(0X2A0, ctx->r15) = ctx->r14;
L_80032FE0:
    // 0x80032FE0: addu        $t6, $a0, $v0
    ctx->r14 = ADD32(ctx->r4, ctx->r2);
    // 0x80032FE4: addu        $t8, $v1, $v0
    ctx->r24 = ADD32(ctx->r3, ctx->r2);
    // 0x80032FE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80032FEC: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x80032FF0: lbu         $t7, 0x20($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X20);
    // 0x80032FF4: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80032FF8: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x80032FFC: bne         $at, $zero, L_80032FE0
    if (ctx->r1 != 0) {
        // 0x80033000: sb          $t7, 0xB40($t8)
        MEM_B(0XB40, ctx->r24) = ctx->r15;
            goto L_80032FE0;
    }
    // 0x80033000: sb          $t7, 0xB40($t8)
    MEM_B(0XB40, ctx->r24) = ctx->r15;
    // 0x80033004: sll         $t7, $a1, 3
    ctx->r15 = S32(ctx->r5 << 3);
    // 0x80033008: addu        $v1, $t3, $t7
    ctx->r3 = ADD32(ctx->r11, ctx->r15);
    // 0x8003300C: sll         $t8, $a1, 3
    ctx->r24 = S32(ctx->r5 << 3);
    // 0x80033010: addu        $a0, $a3, $t8
    ctx->r4 = ADD32(ctx->r7, ctx->r24);
    // 0x80033014: addiu       $v1, $v1, 0x1500
    ctx->r3 = ADD32(ctx->r3, 0X1500);
    // 0x80033018: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003301C:
    // 0x8003301C: addu        $t9, $a0, $v0
    ctx->r25 = ADD32(ctx->r4, ctx->r2);
    // 0x80033020: addu        $t7, $v1, $v0
    ctx->r15 = ADD32(ctx->r3, ctx->r2);
    // 0x80033024: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80033028: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x8003302C: lbu         $t6, 0x70($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0X70);
    // 0x80033030: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80033034: slti        $at, $v0, 0x8
    ctx->r1 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x80033038: bne         $at, $zero, L_8003301C
    if (ctx->r1 != 0) {
        // 0x8003303C: sb          $t6, 0x0($t7)
        MEM_B(0X0, ctx->r15) = ctx->r14;
            goto L_8003301C;
    }
    // 0x8003303C: sb          $t6, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r14;
    // 0x80033040: multu       $a1, $t5
    result = U64(U32(ctx->r5)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033044: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80033048: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x8003304C: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80033050: mflo        $v0
    ctx->r2 = lo;
    // 0x80033054: addu        $t7, $a3, $v0
    ctx->r15 = ADD32(ctx->r7, ctx->r2);
    // 0x80033058: lwl         $at, 0xF0($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0XF0);
    // 0x8003305C: lwr         $at, 0xF3($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0XF3);
    // 0x80033060: addu        $t6, $t4, $v0
    ctx->r14 = ADD32(ctx->r12, ctx->r2);
    // 0x80033064: swl         $at, 0x3840($t6)
    do_swl(rdram, 0X3840, ctx->r14, ctx->r1);
    // 0x80033068: swr         $at, 0x3843($t6)
    do_swr(rdram, 0X3843, ctx->r14, ctx->r1);
    // 0x8003306C: lwl         $t9, 0xF4($t7)
    ctx->r25 = do_lwl(rdram, ctx->r25, ctx->r15, 0XF4);
    // 0x80033070: lwr         $t9, 0xF7($t7)
    ctx->r25 = do_lwr(rdram, ctx->r25, ctx->r15, 0XF7);
    // 0x80033074: nop

    // 0x80033078: swl         $t9, 0x3844($t6)
    do_swl(rdram, 0X3844, ctx->r14, ctx->r25);
    // 0x8003307C: swr         $t9, 0x3847($t6)
    do_swr(rdram, 0X3847, ctx->r14, ctx->r25);
    // 0x80033080: lwl         $at, 0xF8($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0XF8);
    // 0x80033084: lwr         $at, 0xFB($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0XFB);
    // 0x80033088: nop

    // 0x8003308C: swl         $at, 0x3848($t6)
    do_swl(rdram, 0X3848, ctx->r14, ctx->r1);
    // 0x80033090: swr         $at, 0x384B($t6)
    do_swr(rdram, 0X384B, ctx->r14, ctx->r1);
    // 0x80033094: lwl         $t9, 0xFC($t7)
    ctx->r25 = do_lwl(rdram, ctx->r25, ctx->r15, 0XFC);
    // 0x80033098: lwr         $t9, 0xFF($t7)
    ctx->r25 = do_lwr(rdram, ctx->r25, ctx->r15, 0XFF);
    // 0x8003309C: nop

    // 0x800330A0: swl         $t9, 0x384C($t6)
    do_swl(rdram, 0X384C, ctx->r14, ctx->r25);
    // 0x800330A4: swr         $t9, 0x384F($t6)
    do_swr(rdram, 0X384F, ctx->r14, ctx->r25);
    // 0x800330A8: lwl         $at, 0x100($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X100);
    // 0x800330AC: lwr         $at, 0x103($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X103);
    // 0x800330B0: nop

    // 0x800330B4: swl         $at, 0x3850($t6)
    do_swl(rdram, 0X3850, ctx->r14, ctx->r1);
    // 0x800330B8: swr         $at, 0x3853($t6)
    do_swr(rdram, 0X3853, ctx->r14, ctx->r1);
    // 0x800330BC: lwl         $t9, 0x104($t7)
    ctx->r25 = do_lwl(rdram, ctx->r25, ctx->r15, 0X104);
    // 0x800330C0: lwr         $t9, 0x107($t7)
    ctx->r25 = do_lwr(rdram, ctx->r25, ctx->r15, 0X107);
    // 0x800330C4: nop

    // 0x800330C8: swl         $t9, 0x3854($t6)
    do_swl(rdram, 0X3854, ctx->r14, ctx->r25);
    // 0x800330CC: swr         $t9, 0x3857($t6)
    do_swr(rdram, 0X3857, ctx->r14, ctx->r25);
    // 0x800330D0: lbu         $at, 0x108($t7)
    ctx->r1 = MEM_BU(ctx->r15, 0X108);
    // 0x800330D4: nop

    // 0x800330D8: sb          $at, 0x3858($t6)
    MEM_B(0X3858, ctx->r14) = ctx->r1;
    // 0x800330DC: slti        $at, $a1, 0x10
    ctx->r1 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x800330E0: bne         $at, $zero, L_80032FAC
    if (ctx->r1 != 0) {
        // 0x800330E4: addu        $a2, $a3, $a1
        ctx->r6 = ADD32(ctx->r7, ctx->r5);
            goto L_80032FAC;
    }
    // 0x800330E4: addu        $a2, $a3, $a1
    ctx->r6 = ADD32(ctx->r7, ctx->r5);
    // 0x800330E8: addiu       $ra, $ra, 0x1
    ctx->r31 = ADD32(ctx->r31, 0X1);
    // 0x800330EC: sll         $t7, $ra, 16
    ctx->r15 = S32(ctx->r31 << 16);
    // 0x800330F0: sra         $ra, $t7, 16
    ctx->r31 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800330F4: slti        $at, $ra, 0x2
    ctx->r1 = SIGNED(ctx->r31) < 0X2 ? 1 : 0;
    // 0x800330F8: bne         $at, $zero, L_80032F2C
    if (ctx->r1 != 0) {
        // 0x800330FC: sll         $t8, $ra, 2
        ctx->r24 = S32(ctx->r31 << 2);
            goto L_80032F2C;
    }
    // 0x800330FC: sll         $t8, $ra, 2
    ctx->r24 = S32(ctx->r31 << 2);
    // 0x80033100: b           L_8003312C
    // 0x80033104: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003312C;
    // 0x80033104: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80033108:
    // 0x80033108: jal         0x80034EE0
    // 0x8003310C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_80034EE0(rdram, ctx);
        goto after_1;
    // 0x8003310C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_1:
    // 0x80033110: beq         $v0, $zero, L_80033120
    if (ctx->r2 == 0) {
        // 0x80033114: nop
    
            goto L_80033120;
    }
    // 0x80033114: nop

    // 0x80033118: jal         0x80032ACC
    // 0x8003311C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_80032ACC(rdram, ctx);
        goto after_2;
    // 0x8003311C: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_2:
L_80033120:
    // 0x80033120: jal         0x80032EC0
    // 0x80033124: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_80032EC0(rdram, ctx);
        goto after_3;
    // 0x80033124: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_3:
    // 0x80033128: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8003312C:
    // 0x8003312C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80033130: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80033134: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80033138: jr          $ra
    // 0x8003313C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8003313C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80033140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80033140: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80033144: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80033148: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x8003314C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80033150: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80033154: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80033158: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003315C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80033160: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x80033164: addiu       $t8, $t8, 0x5350
    ctx->r24 = ADD32(ctx->r24, 0X5350);
    // 0x80033168: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003316C: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x80033170: addiu       $a0, $v1, 0x12F0
    ctx->r4 = ADD32(ctx->r3, 0X12F0);
    // 0x80033174: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x80033178: jal         0x800218E0
    // 0x8003317C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_800218E0(rdram, ctx);
        goto after_0;
    // 0x8003317C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_0:
    // 0x80033180: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80033184: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80033188: sb          $t0, 0x12F7($v1)
    MEM_B(0X12F7, ctx->r3) = ctx->r8;
    // 0x8003318C: lb          $v0, 0x12F7($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X12F7);
    // 0x80033190: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80033194: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80033198: addiu       $t3, $zero, 0x24
    ctx->r11 = ADD32(0, 0X24);
    // 0x8003319C: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x800331A0: sb          $t9, 0x12F2($v1)
    MEM_B(0X12F2, ctx->r3) = ctx->r25;
    // 0x800331A4: sb          $t2, 0x12FF($v1)
    MEM_B(0X12FF, ctx->r3) = ctx->r10;
    // 0x800331A8: sb          $t2, 0x12FE($v1)
    MEM_B(0X12FE, ctx->r3) = ctx->r10;
    // 0x800331AC: sb          $t3, 0x12F6($v1)
    MEM_B(0X12F6, ctx->r3) = ctx->r11;
    // 0x800331B0: sb          $zero, 0x1300($v1)
    MEM_B(0X1300, ctx->r3) = 0;
    // 0x800331B4: sb          $v0, 0x12F3($v1)
    MEM_B(0X12F3, ctx->r3) = ctx->r2;
    // 0x800331B8: jal         0x80031C34
    // 0x800331BC: sb          $v0, 0x12FD($v1)
    MEM_B(0X12FD, ctx->r3) = ctx->r2;
    func_80031C34(rdram, ctx);
        goto after_1;
    // 0x800331BC: sb          $v0, 0x12FD($v1)
    MEM_B(0X12FD, ctx->r3) = ctx->r2;
    after_1:
    // 0x800331C0: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x800331C4: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x800331C8: jal         0x80031B20
    // 0x800331CC: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    func_80031B20(rdram, ctx);
        goto after_2;
    // 0x800331CC: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    after_2:
    // 0x800331D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800331D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800331D8: jr          $ra
    // 0x800331DC: nop

    return;
    // 0x800331DC: nop

;}
RECOMP_FUNC void func_800331E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800331E0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800331E4: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x800331E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800331EC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800331F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800331F4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800331F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800331FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80033200: addiu       $t9, $t9, -0x3088
    ctx->r25 = ADD32(ctx->r25, -0X3088);
    // 0x80033204: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80033208: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8003320C: lw          $at, 0x0($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X0);
    // 0x80033210: addiu       $t8, $t8, 0x5350
    ctx->r24 = ADD32(ctx->r24, 0X5350);
    // 0x80033214: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x80033218: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8003321C: swl         $at, 0x12F0($v1)
    do_swl(rdram, 0X12F0, ctx->r3, ctx->r1);
    // 0x80033220: swr         $at, 0x12F3($v1)
    do_swr(rdram, 0X12F3, ctx->r3, ctx->r1);
    // 0x80033224: lw          $t2, 0x4($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X4);
    // 0x80033228: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8003322C: swl         $t2, 0x12F4($v1)
    do_swl(rdram, 0X12F4, ctx->r3, ctx->r10);
    // 0x80033230: swr         $t2, 0x12F7($v1)
    do_swr(rdram, 0X12F7, ctx->r3, ctx->r10);
    // 0x80033234: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x80033238: nop

    // 0x8003323C: swl         $at, 0x12F8($v1)
    do_swl(rdram, 0X12F8, ctx->r3, ctx->r1);
    // 0x80033240: swr         $at, 0x12FB($v1)
    do_swr(rdram, 0X12FB, ctx->r3, ctx->r1);
    // 0x80033244: lw          $t2, 0xC($t9)
    ctx->r10 = MEM_W(ctx->r25, 0XC);
    // 0x80033248: nop

    // 0x8003324C: swl         $t2, 0x12FC($v1)
    do_swl(rdram, 0X12FC, ctx->r3, ctx->r10);
    // 0x80033250: swr         $t2, 0x12FF($v1)
    do_swr(rdram, 0X12FF, ctx->r3, ctx->r10);
    // 0x80033254: lbu         $at, 0x10($t9)
    ctx->r1 = MEM_BU(ctx->r25, 0X10);
    // 0x80033258: nop

    // 0x8003325C: sb          $at, 0x1300($v1)
    MEM_B(0X1300, ctx->r3) = ctx->r1;
    // 0x80033260: sb          $t6, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r14;
    // 0x80033264: jal         0x80031C34
    // 0x80033268: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80031C34(rdram, ctx);
        goto after_0;
    // 0x80033268: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x8003326C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80033270: lbu         $t3, 0x23($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X23);
    // 0x80033274: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x80033278: bne         $t3, $zero, L_80033304
    if (ctx->r11 != 0) {
        // 0x8003327C: lbu         $a0, 0x23($sp)
        ctx->r4 = MEM_BU(ctx->r29, 0X23);
            goto L_80033304;
    }
    // 0x8003327C: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x80033280: jal         0x800353F0
    // 0x80033284: nop

    func_800353F0(rdram, ctx);
        goto after_1;
    // 0x80033284: nop

    after_1:
    // 0x80033288: beq         $v0, $zero, L_80033300
    if (ctx->r2 == 0) {
        // 0x8003328C: lui         $t4, 0x8012
        ctx->r12 = S32(0X8012 << 16);
            goto L_80033300;
    }
    // 0x8003328C: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80033290: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x80033294: addiu       $t5, $t5, 0x6640
    ctx->r13 = ADD32(ctx->r13, 0X6640);
    // 0x80033298: lwl         $at, 0x0($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X0);
    // 0x8003329C: lwr         $at, 0x3($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X3);
    // 0x800332A0: addiu       $t4, $t4, -0x5CC0
    ctx->r12 = ADD32(ctx->r12, -0X5CC0);
    // 0x800332A4: swl         $at, 0x0($t4)
    do_swl(rdram, 0X0, ctx->r12, ctx->r1);
    // 0x800332A8: swr         $at, 0x3($t4)
    do_swr(rdram, 0X3, ctx->r12, ctx->r1);
    // 0x800332AC: lwl         $t7, 0x4($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0X4);
    // 0x800332B0: lwr         $t7, 0x7($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0X7);
    // 0x800332B4: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x800332B8: swl         $t7, 0x4($t4)
    do_swl(rdram, 0X4, ctx->r12, ctx->r15);
    // 0x800332BC: swr         $t7, 0x7($t4)
    do_swr(rdram, 0X7, ctx->r12, ctx->r15);
    // 0x800332C0: lwl         $at, 0x8($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X8);
    // 0x800332C4: lwr         $at, 0xB($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0XB);
    // 0x800332C8: addiu       $v0, $v0, 0x5350
    ctx->r2 = ADD32(ctx->r2, 0X5350);
    // 0x800332CC: swl         $at, 0x8($t4)
    do_swl(rdram, 0X8, ctx->r12, ctx->r1);
    // 0x800332D0: swr         $at, 0xB($t4)
    do_swr(rdram, 0XB, ctx->r12, ctx->r1);
    // 0x800332D4: lwl         $t7, 0xC($t5)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r13, 0XC);
    // 0x800332D8: lwr         $t7, 0xF($t5)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r13, 0XF);
    // 0x800332DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800332E0: swl         $t7, 0xC($t4)
    do_swl(rdram, 0XC, ctx->r12, ctx->r15);
    // 0x800332E4: swr         $t7, 0xF($t4)
    do_swr(rdram, 0XF, ctx->r12, ctx->r15);
    // 0x800332E8: lbu         $at, 0x10($t5)
    ctx->r1 = MEM_BU(ctx->r13, 0X10);
    // 0x800332EC: nop

    // 0x800332F0: sb          $at, 0x10($t4)
    MEM_B(0X10, ctx->r12) = ctx->r1;
    // 0x800332F4: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x800332F8: jal         0x80031B20
    // 0x800332FC: sw          $t8, 0x3D0C($v0)
    MEM_W(0X3D0C, ctx->r2) = ctx->r24;
    func_80031B20(rdram, ctx);
        goto after_2;
    // 0x800332FC: sw          $t8, 0x3D0C($v0)
    MEM_W(0X3D0C, ctx->r2) = ctx->r24;
    after_2:
L_80033300:
    // 0x80033300: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
L_80033304:
    // 0x80033304: jal         0x80031B20
    // 0x80033308: nop

    func_80031B20(rdram, ctx);
        goto after_3;
    // 0x80033308: nop

    after_3:
    // 0x8003330C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80033310: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80033314: jr          $ra
    // 0x80033318: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80033318: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8003331C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003331C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80033320: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80033324: andi        $s0, $a0, 0xFF
    ctx->r16 = ctx->r4 & 0XFF;
    // 0x80033328: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003332C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80033330: jal         0x80031C34
    // 0x80033334: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80031C34(rdram, ctx);
        goto after_0;
    // 0x80033334: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_0:
    // 0x80033338: sll         $t6, $s0, 4
    ctx->r14 = S32(ctx->r16 << 4);
    // 0x8003333C: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x80033340: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80033344: addu        $t6, $t6, $s0
    ctx->r14 = ADD32(ctx->r14, ctx->r16);
    // 0x80033348: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x8003334C: addiu       $t7, $t7, 0x5350
    ctx->r15 = ADD32(ctx->r15, 0X5350);
    // 0x80033350: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x80033354: addu        $t0, $t6, $t7
    ctx->r8 = ADD32(ctx->r14, ctx->r15);
    // 0x80033358: lw          $t8, 0xC($t0)
    ctx->r24 = MEM_W(ctx->r8, 0XC);
    // 0x8003335C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80033360: bne         $v0, $t8, L_800333C8
    if (ctx->r2 != ctx->r24) {
        // 0x80033364: addiu       $v1, $v1, -0x3088
        ctx->r3 = ADD32(ctx->r3, -0X3088);
            goto L_800333C8;
    }
    // 0x80033364: addiu       $v1, $v1, -0x3088
    ctx->r3 = ADD32(ctx->r3, -0X3088);
    // 0x80033368: lwl         $at, 0x12F0($t0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r8, 0X12F0);
    // 0x8003336C: lwr         $at, 0x12F3($t0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r8, 0X12F3);
    // 0x80033370: lb          $a2, 0x1($v1)
    ctx->r6 = MEM_B(ctx->r3, 0X1);
    // 0x80033374: lwl         $t1, 0x12F4($t0)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r8, 0X12F4);
    // 0x80033378: lwr         $t1, 0x12F7($t0)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r8, 0X12F7);
    // 0x8003337C: sw          $at, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r1;
    // 0x80033380: lb          $a3, 0x4($v1)
    ctx->r7 = MEM_B(ctx->r3, 0X4);
    // 0x80033384: lwl         $at, 0x12F8($t0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r8, 0X12F8);
    // 0x80033388: lwr         $at, 0x12FB($t0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r8, 0X12FB);
    // 0x8003338C: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x80033390: lwl         $t1, 0x12FC($t0)
    ctx->r9 = do_lwl(rdram, ctx->r9, ctx->r8, 0X12FC);
    // 0x80033394: lbu         $a0, 0xE($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0XE);
    // 0x80033398: lbu         $a1, 0xF($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0XF);
    // 0x8003339C: lwr         $t1, 0x12FF($t0)
    ctx->r9 = do_lwr(rdram, ctx->r9, ctx->r8, 0X12FF);
    // 0x800333A0: sw          $at, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r1;
    // 0x800333A4: lbu         $at, 0x1300($t0)
    ctx->r1 = MEM_BU(ctx->r8, 0X1300);
    // 0x800333A8: sw          $t1, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r9;
    // 0x800333AC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800333B0: sb          $a2, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r6;
    // 0x800333B4: sb          $a3, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r7;
    // 0x800333B8: sb          $a0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r4;
    // 0x800333BC: sb          $a1, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r5;
    // 0x800333C0: b           L_800333EC
    // 0x800333C4: sb          $at, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r1;
        goto L_800333EC;
    // 0x800333C4: sb          $at, 0x10($v1)
    MEM_B(0X10, ctx->r3) = ctx->r1;
L_800333C8:
    // 0x800333C8: jal         0x80034EE0
    // 0x800333CC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80034EE0(rdram, ctx);
        goto after_1;
    // 0x800333CC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_1:
    // 0x800333D0: beq         $v0, $zero, L_800333E0
    if (ctx->r2 == 0) {
        // 0x800333D4: nop
    
            goto L_800333E0;
    }
    // 0x800333D4: nop

    // 0x800333D8: jal         0x80033140
    // 0x800333DC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80033140(rdram, ctx);
        goto after_2;
    // 0x800333DC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_2:
L_800333E0:
    // 0x800333E0: jal         0x8003331C
    // 0x800333E4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_8003331C(rdram, ctx);
        goto after_3;
    // 0x800333E4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_3:
    // 0x800333E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800333EC:
    // 0x800333EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800333F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800333F4: jr          $ra
    // 0x800333F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800333F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800333FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800333FC: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80033400: sll         $t9, $t6, 4
    ctx->r25 = S32(ctx->r14 << 4);
    // 0x80033404: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x80033408: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003340C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80033410: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80033414: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x80033418: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x8003341C: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80033420: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80033424: addiu       $t0, $t0, 0x5350
    ctx->r8 = ADD32(ctx->r8, 0X5350);
    // 0x80033428: sll         $t9, $t9, 8
    ctx->r25 = S32(ctx->r25 << 8);
    // 0x8003342C: addu        $a3, $t9, $t0
    ctx->r7 = ADD32(ctx->r25, ctx->r8);
    // 0x80033430: sll         $t1, $a1, 5
    ctx->r9 = S32(ctx->r5 << 5);
    // 0x80033434: addu        $a2, $a3, $t1
    ctx->r6 = ADD32(ctx->r7, ctx->r9);
    // 0x80033438: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8003343C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x80033440: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80033444: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80033448: sh          $zero, 0x3CC6($a2)
    MEM_H(0X3CC6, ctx->r6) = 0;
    // 0x8003344C: sb          $t2, 0x3CB4($a2)
    MEM_B(0X3CB4, ctx->r6) = ctx->r10;
    // 0x80033450: addiu       $v1, $a2, 0x3CB4
    ctx->r3 = ADD32(ctx->r6, 0X3CB4);
    // 0x80033454: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80033458:
    // 0x80033458: addu        $t3, $v1, $v0
    ctx->r11 = ADD32(ctx->r3, ctx->r2);
    // 0x8003345C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80033460: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x80033464: sra         $v0, $t4, 16
    ctx->r2 = S32(SIGNED(ctx->r12) >> 16);
    // 0x80033468: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8003346C: bne         $at, $zero, L_80033458
    if (ctx->r1 != 0) {
        // 0x80033470: sb          $zero, 0x1($t3)
        MEM_B(0X1, ctx->r11) = 0;
            goto L_80033458;
    }
    // 0x80033470: sb          $zero, 0x1($t3)
    MEM_B(0X1, ctx->r11) = 0;
    // 0x80033474: sb          $a0, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r4;
    // 0x80033478: sh          $a1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r5;
    // 0x8003347C: jal         0x80031C80
    // 0x80033480: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80031C80(rdram, ctx);
        goto after_0;
    // 0x80033480: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80033484: lh          $a1, 0x2E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2E);
    // 0x80033488: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8003348C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80033490: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    // 0x80033494: addu        $t7, $a3, $t6
    ctx->r15 = ADD32(ctx->r7, ctx->r14);
    // 0x80033498: jal         0x80031B20
    // 0x8003349C: sw          $v0, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->r2;
    func_80031B20(rdram, ctx);
        goto after_1;
    // 0x8003349C: sw          $v0, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->r2;
    after_1:
    // 0x800334A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800334A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800334A8: jr          $ra
    // 0x800334AC: nop

    return;
    // 0x800334AC: nop

;}
RECOMP_FUNC void func_800334B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800334B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800334B4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800334B8: lbu         $t8, 0x2B($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2B);
    // 0x800334BC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x800334C0: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x800334C4: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x800334C8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800334CC: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x800334D0: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800334D4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800334D8: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800334DC: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x800334E0: sll         $t9, $t9, 8
    ctx->r25 = S32(ctx->r25 << 8);
    // 0x800334E4: addiu       $t1, $t1, 0x5350
    ctx->r9 = ADD32(ctx->r9, 0X5350);
    // 0x800334E8: addiu       $a2, $a2, -0x32B0
    ctx->r6 = ADD32(ctx->r6, -0X32B0);
    // 0x800334EC: addu        $t0, $t9, $t1
    ctx->r8 = ADD32(ctx->r25, ctx->r9);
    // 0x800334F0: sll         $t2, $a1, 5
    ctx->r10 = S32(ctx->r5 << 5);
    // 0x800334F4: addu        $a3, $t0, $t2
    ctx->r7 = ADD32(ctx->r8, ctx->r10);
    // 0x800334F8: lhu         $t3, 0x148($a2)
    ctx->r11 = MEM_HU(ctx->r6, 0X148);
    // 0x800334FC: lbu         $t4, 0x136($a2)
    ctx->r12 = MEM_BU(ctx->r6, 0X136);
    // 0x80033500: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80033504: addiu       $v1, $a3, 0x3CB4
    ctx->r3 = ADD32(ctx->r7, 0X3CB4);
    // 0x80033508: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003350C: sh          $t3, 0x3CC6($a3)
    MEM_H(0X3CC6, ctx->r7) = ctx->r11;
    // 0x80033510: sb          $t4, 0x3CB4($a3)
    MEM_B(0X3CB4, ctx->r7) = ctx->r12;
L_80033514:
    // 0x80033514: addu        $t5, $a2, $v0
    ctx->r13 = ADD32(ctx->r6, ctx->r2);
    // 0x80033518: addu        $t7, $v1, $v0
    ctx->r15 = ADD32(ctx->r3, ctx->r2);
    // 0x8003351C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80033520: sll         $t8, $v0, 16
    ctx->r24 = S32(ctx->r2 << 16);
    // 0x80033524: lbu         $t6, 0x137($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X137);
    // 0x80033528: sra         $v0, $t8, 16
    ctx->r2 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8003352C: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80033530: bne         $at, $zero, L_80033514
    if (ctx->r1 != 0) {
        // 0x80033534: sb          $t6, 0x1($t7)
        MEM_B(0X1, ctx->r15) = ctx->r14;
            goto L_80033514;
    }
    // 0x80033534: sb          $t6, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r14;
    // 0x80033538: lbu         $t1, 0x48($a2)
    ctx->r9 = MEM_BU(ctx->r6, 0X48);
    // 0x8003353C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80033540: addiu       $a0, $a0, -0x2CF0
    ctx->r4 = ADD32(ctx->r4, -0X2CF0);
    // 0x80033544: sb          $t1, 0x14($v1)
    MEM_B(0X14, ctx->r3) = ctx->r9;
    // 0x80033548: lbu         $t2, 0x868($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X868);
    // 0x8003354C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80033550: sb          $t2, 0x15($v1)
    MEM_B(0X15, ctx->r3) = ctx->r10;
    // 0x80033554: lbu         $t3, 0x4E($a2)
    ctx->r11 = MEM_BU(ctx->r6, 0X4E);
    // 0x80033558: addiu       $a3, $a3, -0x3088
    ctx->r7 = ADD32(ctx->r7, -0X3088);
    // 0x8003355C: sb          $t3, 0x16($v1)
    MEM_B(0X16, ctx->r3) = ctx->r11;
    // 0x80033560: lbu         $t4, 0x86A($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X86A);
    // 0x80033564: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80033568: sb          $t4, 0x17($v1)
    MEM_B(0X17, ctx->r3) = ctx->r12;
    // 0x8003356C: lbu         $t5, 0x869($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X869);
    // 0x80033570: nop

    // 0x80033574: sb          $t5, 0x18($v1)
    MEM_B(0X18, ctx->r3) = ctx->r13;
    // 0x80033578: lbu         $t6, 0xE($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0XE);
    // 0x8003357C: nop

    // 0x80033580: sb          $t6, 0x19($v1)
    MEM_B(0X19, ctx->r3) = ctx->r14;
    // 0x80033584: lbu         $t7, 0xF($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0XF);
    // 0x80033588: nop

    // 0x8003358C: sb          $t7, 0x1A($v1)
    MEM_B(0X1A, ctx->r3) = ctx->r15;
L_80033590:
    // 0x80033590: addu        $t8, $a0, $v0
    ctx->r24 = ADD32(ctx->r4, ctx->r2);
    // 0x80033594: addu        $t1, $v1, $v0
    ctx->r9 = ADD32(ctx->r3, ctx->r2);
    // 0x80033598: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003359C: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x800335A0: lbu         $t9, 0x86B($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X86B);
    // 0x800335A4: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
    // 0x800335A8: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x800335AC: bne         $at, $zero, L_80033590
    if (ctx->r1 != 0) {
        // 0x800335B0: sb          $t9, 0x1B($t1)
        MEM_B(0X1B, ctx->r9) = ctx->r25;
            goto L_80033590;
    }
    // 0x800335B0: sb          $t9, 0x1B($t1)
    MEM_B(0X1B, ctx->r9) = ctx->r25;
    // 0x800335B4: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    // 0x800335B8: sh          $a1, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r5;
    // 0x800335BC: jal         0x80031C80
    // 0x800335C0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    func_80031C80(rdram, ctx);
        goto after_0;
    // 0x800335C0: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    after_0:
    // 0x800335C4: lh          $a1, 0x2E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2E);
    // 0x800335C8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800335CC: sll         $t4, $a1, 2
    ctx->r12 = S32(ctx->r5 << 2);
    // 0x800335D0: addu        $t5, $t0, $t4
    ctx->r13 = ADD32(ctx->r8, ctx->r12);
    // 0x800335D4: sw          $v0, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->r2;
    // 0x800335D8: lbu         $a0, 0x2B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X2B);
    // 0x800335DC: jal         0x80031B20
    // 0x800335E0: nop

    func_80031B20(rdram, ctx);
        goto after_1;
    // 0x800335E0: nop

    after_1:
    // 0x800335E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800335E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800335EC: jr          $ra
    // 0x800335F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800335F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800335F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800335F4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800335F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800335FC: sll         $s0, $a1, 16
    ctx->r16 = S32(ctx->r5 << 16);
    // 0x80033600: sra         $t6, $s0, 16
    ctx->r14 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80033604: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80033608: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8003360C: sll         $a1, $t6, 16
    ctx->r5 = S32(ctx->r14 << 16);
    // 0x80033610: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80033614: sra         $t7, $a1, 16
    ctx->r15 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80033618: lbu         $a0, 0x33($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X33);
    // 0x8003361C: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80033620: jal         0x80031C80
    // 0x80033624: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_80031C80(rdram, ctx);
        goto after_0;
    // 0x80033624: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_0:
    // 0x80033628: lbu         $a0, 0x33($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X33);
    // 0x8003362C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80033630: sll         $t8, $a0, 4
    ctx->r24 = S32(ctx->r4 << 4);
    // 0x80033634: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x80033638: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8003363C: addu        $t8, $t8, $a0
    ctx->r24 = ADD32(ctx->r24, ctx->r4);
    // 0x80033640: sll         $t8, $t8, 8
    ctx->r24 = S32(ctx->r24 << 8);
    // 0x80033644: addiu       $t9, $t9, 0x5350
    ctx->r25 = ADD32(ctx->r25, 0X5350);
    // 0x80033648: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    // 0x8003364C: sll         $t0, $s0, 2
    ctx->r8 = S32(ctx->r16 << 2);
    // 0x80033650: addu        $t1, $a2, $t0
    ctx->r9 = ADD32(ctx->r6, ctx->r8);
    // 0x80033654: lw          $t2, 0x20($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X20);
    // 0x80033658: sll         $t3, $s0, 5
    ctx->r11 = S32(ctx->r16 << 5);
    // 0x8003365C: bne         $v0, $t2, L_80033750
    if (ctx->r2 != ctx->r10) {
        // 0x80033660: addu        $v1, $a2, $t3
        ctx->r3 = ADD32(ctx->r6, ctx->r11);
            goto L_80033750;
    }
    // 0x80033660: addu        $v1, $a2, $t3
    ctx->r3 = ADD32(ctx->r6, ctx->r11);
    // 0x80033664: lhu         $t4, 0x3CC6($v1)
    ctx->r12 = MEM_HU(ctx->r3, 0X3CC6);
    // 0x80033668: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8003366C: sh          $t4, -0x3168($at)
    MEM_H(-0X3168, ctx->r1) = ctx->r12;
    // 0x80033670: lbu         $t5, 0x3CB4($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X3CB4);
    // 0x80033674: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80033678: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8003367C: addiu       $v1, $v1, 0x3CB4
    ctx->r3 = ADD32(ctx->r3, 0X3CB4);
    // 0x80033680: addiu       $a2, $a2, -0x32B0
    ctx->r6 = ADD32(ctx->r6, -0X32B0);
    // 0x80033684: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80033688: sb          $t5, -0x317A($at)
    MEM_B(-0X317A, ctx->r1) = ctx->r13;
L_8003368C:
    // 0x8003368C: addu        $t6, $v1, $v0
    ctx->r14 = ADD32(ctx->r3, ctx->r2);
    // 0x80033690: addu        $t8, $a2, $v0
    ctx->r24 = ADD32(ctx->r6, ctx->r2);
    // 0x80033694: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80033698: sll         $t9, $v0, 16
    ctx->r25 = S32(ctx->r2 << 16);
    // 0x8003369C: lbu         $t7, 0x1($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X1);
    // 0x800336A0: sra         $v0, $t9, 16
    ctx->r2 = S32(SIGNED(ctx->r25) >> 16);
    // 0x800336A4: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x800336A8: bne         $at, $zero, L_8003368C
    if (ctx->r1 != 0) {
        // 0x800336AC: sb          $t7, 0x137($t8)
        MEM_B(0X137, ctx->r24) = ctx->r15;
            goto L_8003368C;
    }
    // 0x800336AC: sb          $t7, 0x137($t8)
    MEM_B(0X137, ctx->r24) = ctx->r15;
    // 0x800336B0: lbu         $t1, 0x14($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X14);
    // 0x800336B4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800336B8: sb          $t1, -0x3268($at)
    MEM_B(-0X3268, ctx->r1) = ctx->r9;
    // 0x800336BC: lbu         $t2, 0x15($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X15);
    // 0x800336C0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800336C4: sb          $t2, -0x2488($at)
    MEM_B(-0X2488, ctx->r1) = ctx->r10;
    // 0x800336C8: lbu         $t3, 0x16($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X16);
    // 0x800336CC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800336D0: sb          $t3, -0x3262($at)
    MEM_B(-0X3262, ctx->r1) = ctx->r11;
    // 0x800336D4: lbu         $a1, 0x48($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X48);
    // 0x800336D8: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x800336DC: jal         0x8006F700
    // 0x800336E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8006F700(rdram, ctx);
        goto after_1;
    // 0x800336E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x800336E4: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x800336E8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x800336EC: lbu         $t4, 0x17($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X17);
    // 0x800336F0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800336F4: sb          $t4, -0x2486($at)
    MEM_B(-0X2486, ctx->r1) = ctx->r12;
    // 0x800336F8: lbu         $t5, 0x18($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0X18);
    // 0x800336FC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80033700: sb          $t5, -0x2487($at)
    MEM_B(-0X2487, ctx->r1) = ctx->r13;
    // 0x80033704: lbu         $t6, 0x19($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X19);
    // 0x80033708: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8003370C: sb          $t6, -0x307A($at)
    MEM_B(-0X307A, ctx->r1) = ctx->r14;
    // 0x80033710: lbu         $t7, 0x1A($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X1A);
    // 0x80033714: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80033718: addiu       $a0, $a0, -0x2CF0
    ctx->r4 = ADD32(ctx->r4, -0X2CF0);
    // 0x8003371C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80033720: sb          $t7, -0x3079($at)
    MEM_B(-0X3079, ctx->r1) = ctx->r15;
L_80033724:
    // 0x80033724: addu        $t8, $v1, $v0
    ctx->r24 = ADD32(ctx->r3, ctx->r2);
    // 0x80033728: addu        $t0, $a0, $v0
    ctx->r8 = ADD32(ctx->r4, ctx->r2);
    // 0x8003372C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80033730: sll         $t1, $v0, 16
    ctx->r9 = S32(ctx->r2 << 16);
    // 0x80033734: lb          $t9, 0x1B($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X1B);
    // 0x80033738: sra         $v0, $t1, 16
    ctx->r2 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8003373C: slti        $at, $v0, 0x4
    ctx->r1 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x80033740: bne         $at, $zero, L_80033724
    if (ctx->r1 != 0) {
        // 0x80033744: sb          $t9, 0x86B($t0)
        MEM_B(0X86B, ctx->r8) = ctx->r25;
            goto L_80033724;
    }
    // 0x80033744: sb          $t9, 0x86B($t0)
    MEM_B(0X86B, ctx->r8) = ctx->r25;
    // 0x80033748: b           L_800337A8
    // 0x8003374C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800337A8;
    // 0x8003374C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80033750:
    // 0x80033750: jal         0x80034EE0
    // 0x80033754: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    func_80034EE0(rdram, ctx);
        goto after_2;
    // 0x80033754: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_2:
    // 0x80033758: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8003375C: beq         $v0, $zero, L_80033780
    if (ctx->r2 == 0) {
        // 0x80033760: sll         $a1, $s0, 16
        ctx->r5 = S32(ctx->r16 << 16);
            goto L_80033780;
    }
    // 0x80033760: sll         $a1, $s0, 16
    ctx->r5 = S32(ctx->r16 << 16);
    // 0x80033764: lbu         $a0, 0x33($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X33);
    // 0x80033768: sra         $t3, $a1, 16
    ctx->r11 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8003376C: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x80033770: jal         0x800333FC
    // 0x80033774: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    func_800333FC(rdram, ctx);
        goto after_3;
    // 0x80033774: sw          $a2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r6;
    after_3:
    // 0x80033778: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8003377C: nop

L_80033780:
    // 0x80033780: sll         $t4, $s0, 5
    ctx->r12 = S32(ctx->r16 << 5);
    // 0x80033784: addu        $v1, $a2, $t4
    ctx->r3 = ADD32(ctx->r6, ctx->r12);
    // 0x80033788: lhu         $t5, 0x3CC6($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X3CC6);
    // 0x8003378C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80033790: sh          $t5, -0x3168($at)
    MEM_H(-0X3168, ctx->r1) = ctx->r13;
    // 0x80033794: lbu         $t6, 0x3CB4($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X3CB4);
    // 0x80033798: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8003379C: addiu       $v1, $v1, 0x3CB4
    ctx->r3 = ADD32(ctx->r3, 0X3CB4);
    // 0x800337A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800337A4: sb          $t6, -0x317A($at)
    MEM_B(-0X317A, ctx->r1) = ctx->r14;
L_800337A8:
    // 0x800337A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800337AC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800337B0: jr          $ra
    // 0x800337B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800337B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800337B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800337B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800337BC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800337C0: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x800337C4: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800337C8: sll         $t1, $a1, 2
    ctx->r9 = S32(ctx->r5 << 2);
    // 0x800337CC: addu        $t1, $t1, $a1
    ctx->r9 = ADD32(ctx->r9, ctx->r5);
    // 0x800337D0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800337D4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800337D8: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x800337DC: sll         $t9, $t6, 4
    ctx->r25 = S32(ctx->r14 << 4);
    // 0x800337E0: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x800337E4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800337E8: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x800337EC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800337F0: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800337F4: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x800337F8: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x800337FC: addiu       $t0, $t0, 0x5350
    ctx->r8 = ADD32(ctx->r8, 0X5350);
    // 0x80033800: subu        $t1, $t1, $a1
    ctx->r9 = SUB32(ctx->r9, ctx->r5);
    // 0x80033804: sll         $t9, $t9, 8
    ctx->r25 = S32(ctx->r25 << 8);
    // 0x80033808: addu        $v1, $t9, $t0
    ctx->r3 = ADD32(ctx->r25, ctx->r8);
    // 0x8003380C: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x80033810: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80033814: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80033818: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8003381C: addu        $v0, $v1, $t1
    ctx->r2 = ADD32(ctx->r3, ctx->r9);
    // 0x80033820: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80033824: sb          $a2, 0x1744($v0)
    MEM_B(0X1744, ctx->r2) = ctx->r6;
    // 0x80033828: sb          $a2, 0x1747($v0)
    MEM_B(0X1747, ctx->r2) = ctx->r6;
    // 0x8003382C: sb          $t6, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r14;
    // 0x80033830: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80033834: jal         0x80031CE0
    // 0x80033838: sh          $a1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r5;
    func_80031CE0(rdram, ctx);
        goto after_0;
    // 0x80033838: sh          $a1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003383C: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    // 0x80033840: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80033844: sll         $t2, $a1, 2
    ctx->r10 = S32(ctx->r5 << 2);
    // 0x80033848: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x8003384C: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x80033850: jal         0x80031B20
    // 0x80033854: sw          $v0, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->r2;
    func_80031B20(rdram, ctx);
        goto after_1;
    // 0x80033854: sw          $v0, 0x14($t3)
    MEM_W(0X14, ctx->r11) = ctx->r2;
    after_1:
    // 0x80033858: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003385C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80033860: jr          $ra
    // 0x80033864: nop

    return;
    // 0x80033864: nop

;}
RECOMP_FUNC void func_80033868(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80033868: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003386C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80033870: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80033874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80033878: lh          $a1, 0x1E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1E);
    // 0x8003387C: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x80033880: jal         0x800338DC
    // 0x80033884: nop

    func_800338DC(rdram, ctx);
        goto after_0;
    // 0x80033884: nop

    after_0:
    // 0x80033888: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x8003388C: lh          $a1, 0x1E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1E);
    // 0x80033890: jal         0x80031CE0
    // 0x80033894: nop

    func_80031CE0(rdram, ctx);
        goto after_1;
    // 0x80033894: nop

    after_1:
    // 0x80033898: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x8003389C: lh          $t7, 0x1E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1E);
    // 0x800338A0: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x800338A4: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800338A8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800338AC: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x800338B0: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x800338B4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800338B8: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x800338BC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800338C0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800338C4: jal         0x80031B20
    // 0x800338C8: sw          $v0, 0x5364($at)
    MEM_W(0X5364, ctx->r1) = ctx->r2;
    func_80031B20(rdram, ctx);
        goto after_2;
    // 0x800338C8: sw          $v0, 0x5364($at)
    MEM_W(0X5364, ctx->r1) = ctx->r2;
    after_2:
    // 0x800338CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800338D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800338D4: jr          $ra
    // 0x800338D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800338D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800338DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800338DC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800338E0: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x800338E4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800338E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800338EC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800338F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800338F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800338F8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x800338FC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80033900: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80033904: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80033908: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8003390C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80033910: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80033914: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80033918: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8003391C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80033920: addu        $t2, $t7, $t8
    ctx->r10 = ADD32(ctx->r15, ctx->r24);
    // 0x80033924: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80033928: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8003392C: jal         0x8004974C
    // 0x80033930: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    func_8004974C(rdram, ctx);
        goto after_0;
    // 0x80033930: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    after_0:
    // 0x80033934: lh          $t7, 0x3E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X3E);
    // 0x80033938: lbu         $t9, 0x3B($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X3B);
    // 0x8003393C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80033940: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80033944: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80033948: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8003394C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80033950: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80033954: sll         $t6, $t9, 4
    ctx->r14 = S32(ctx->r25 << 4);
    // 0x80033958: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x8003395C: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x80033960: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80033964: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80033968: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8003396C: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x80033970: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80033974: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80033978: addiu       $t7, $t7, 0x5350
    ctx->r15 = ADD32(ctx->r15, 0X5350);
    // 0x8003397C: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80033980: addu        $a3, $t9, $t7
    ctx->r7 = ADD32(ctx->r25, ctx->r15);
    // 0x80033984: addiu       $t3, $a3, 0x1744
    ctx->r11 = ADD32(ctx->r7, 0X1744);
    // 0x80033988: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8003398C: sb          $v0, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r2;
    // 0x80033990: lb          $v1, 0x0($t3)
    ctx->r3 = MEM_B(ctx->r11, 0X0);
    // 0x80033994: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80033998: bne         $v1, $at, L_800339AC
    if (ctx->r3 != ctx->r1) {
        // 0x8003399C: addiu       $t5, $zero, 0x14C
        ctx->r13 = ADD32(0, 0X14C);
            goto L_800339AC;
    }
    // 0x8003399C: addiu       $t5, $zero, 0x14C
    ctx->r13 = ADD32(0, 0X14C);
    // 0x800339A0: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x800339A4: b           L_800339B0
    // 0x800339A8: sb          $t6, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r14;
        goto L_800339B0;
    // 0x800339A8: sb          $t6, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r14;
L_800339AC:
    // 0x800339AC: sb          $v1, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r3;
L_800339B0:
    // 0x800339B0: lb          $t8, 0x0($t2)
    ctx->r24 = MEM_B(ctx->r10, 0X0);
    // 0x800339B4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800339B8: sb          $t8, 0x1($t3)
    MEM_B(0X1, ctx->r11) = ctx->r24;
    // 0x800339BC: lb          $t9, 0x1($t2)
    ctx->r25 = MEM_B(ctx->r10, 0X1);
    // 0x800339C0: addiu       $v0, $v0, -0x30A0
    ctx->r2 = ADD32(ctx->r2, -0X30A0);
    // 0x800339C4: sb          $t9, 0x2($t3)
    MEM_B(0X2, ctx->r11) = ctx->r25;
    // 0x800339C8: lb          $t7, 0x2($t2)
    ctx->r15 = MEM_B(ctx->r10, 0X2);
    // 0x800339CC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800339D0: sb          $t7, 0x3($t3)
    MEM_B(0X3, ctx->r11) = ctx->r15;
    // 0x800339D4: lb          $t6, 0x3($t2)
    ctx->r14 = MEM_B(ctx->r10, 0X3);
    // 0x800339D8: addiu       $a1, $a1, -0x2CF0
    ctx->r5 = ADD32(ctx->r5, -0X2CF0);
    // 0x800339DC: sb          $t6, 0x4($t3)
    MEM_B(0X4, ctx->r11) = ctx->r14;
    // 0x800339E0: lbu         $t8, 0x6($t2)
    ctx->r24 = MEM_BU(ctx->r10, 0X6);
    // 0x800339E4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800339E8: sb          $t8, 0x6($t3)
    MEM_B(0X6, ctx->r11) = ctx->r24;
    // 0x800339EC: lbu         $t9, 0x9($t2)
    ctx->r25 = MEM_BU(ctx->r10, 0X9);
    // 0x800339F0: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    // 0x800339F4: sb          $t9, 0xA($t3)
    MEM_B(0XA, ctx->r11) = ctx->r25;
    // 0x800339F8: lb          $t7, 0x1($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X1);
    // 0x800339FC: addiu       $ra, $zero, 0x3
    ctx->r31 = ADD32(0, 0X3);
    // 0x80033A00: sb          $t7, 0x7($t3)
    MEM_B(0X7, ctx->r11) = ctx->r15;
    // 0x80033A04: lb          $t6, 0x4($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X4);
    // 0x80033A08: addiu       $t4, $zero, 0x7C
    ctx->r12 = ADD32(0, 0X7C);
    // 0x80033A0C: sb          $t6, 0x8($t3)
    MEM_B(0X8, ctx->r11) = ctx->r14;
    // 0x80033A10: lb          $t8, 0x7($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X7);
    // 0x80033A14: nop

    // 0x80033A18: sb          $t8, 0x9($t3)
    MEM_B(0X9, ctx->r11) = ctx->r24;
L_80033A1C:
    // 0x80033A1C: multu       $v1, $a2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033A20: addu        $a0, $t3, $v1
    ctx->r4 = ADD32(ctx->r11, ctx->r3);
    // 0x80033A24: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80033A28: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x80033A2C: sra         $v1, $t8, 16
    ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80033A30: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80033A34: mflo        $t9
    ctx->r25 = lo;
    // 0x80033A38: addu        $v0, $a1, $t9
    ctx->r2 = ADD32(ctx->r5, ctx->r25);
    // 0x80033A3C: lbu         $t7, 0x41($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X41);
    // 0x80033A40: nop

    // 0x80033A44: sb          $t7, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r15;
    // 0x80033A48: lbu         $t6, 0xAD5($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0XAD5);
    // 0x80033A4C: bne         $at, $zero, L_80033A1C
    if (ctx->r1 != 0) {
        // 0x80033A50: sb          $t6, 0x1B($a0)
        MEM_B(0X1B, ctx->r4) = ctx->r14;
            goto L_80033A1C;
    }
    // 0x80033A50: sb          $t6, 0x1B($a0)
    MEM_B(0X1B, ctx->r4) = ctx->r14;
    // 0x80033A54: lb          $v1, 0x1($t2)
    ctx->r3 = MEM_B(ctx->r10, 0X1);
    // 0x80033A58: nop

    // 0x80033A5C: blez        $v1, L_80033AA4
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80033A60: nop
    
            goto L_80033AA4;
    }
    // 0x80033A60: nop

    // 0x80033A64: multu       $v1, $ra
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r31)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033A68: lb          $t7, 0xC($t2)
    ctx->r15 = MEM_B(ctx->r10, 0XC);
    // 0x80033A6C: nop

    // 0x80033A70: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80033A74: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80033A78: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80033A7C: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80033A80: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80033A84: subu        $t6, $t6, $t7
    ctx->r14 = SUB32(ctx->r14, ctx->r15);
    // 0x80033A88: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80033A8C: addu        $t8, $t2, $t6
    ctx->r24 = ADD32(ctx->r10, ctx->r14);
    // 0x80033A90: mflo        $t9
    ctx->r25 = lo;
    // 0x80033A94: addu        $t7, $t8, $t9
    ctx->r15 = ADD32(ctx->r24, ctx->r25);
    // 0x80033A98: lb          $t6, 0x50B($t7)
    ctx->r14 = MEM_B(ctx->r15, 0X50B);
    // 0x80033A9C: nop

    // 0x80033AA0: sb          $t6, 0x5($t3)
    MEM_B(0X5, ctx->r11) = ctx->r14;
L_80033AA4:
    // 0x80033AA4: lb          $t8, 0xC($t2)
    ctx->r24 = MEM_B(ctx->r10, 0XC);
    // 0x80033AA8: addiu       $v0, $a3, 0x1770
    ctx->r2 = ADD32(ctx->r7, 0X1770);
    // 0x80033AAC: sb          $t8, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r24;
    // 0x80033AB0: lbu         $t9, 0xE($t2)
    ctx->r25 = MEM_BU(ctx->r10, 0XE);
    // 0x80033AB4: addiu       $ra, $zero, 0x3
    ctx->r31 = ADD32(0, 0X3);
    // 0x80033AB8: sb          $t9, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r25;
    // 0x80033ABC: lbu         $t7, 0xF($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0XF);
    // 0x80033AC0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x80033AC4: sb          $t7, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r15;
    // 0x80033AC8: lbu         $t6, 0x10($t2)
    ctx->r14 = MEM_BU(ctx->r10, 0X10);
    // 0x80033ACC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80033AD0: sb          $t6, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r14;
    // 0x80033AD4: lbu         $t8, 0x11($t2)
    ctx->r24 = MEM_BU(ctx->r10, 0X11);
    // 0x80033AD8: addiu       $v1, $zero, 0xB
    ctx->r3 = ADD32(0, 0XB);
    // 0x80033ADC: sb          $t8, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r24;
    // 0x80033AE0: lbu         $t9, 0x12($t2)
    ctx->r25 = MEM_BU(ctx->r10, 0X12);
    // 0x80033AE4: nop

    // 0x80033AE8: sb          $t9, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r25;
    // 0x80033AEC: lbu         $t7, 0x13($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0X13);
    // 0x80033AF0: nop

    // 0x80033AF4: sb          $t7, 0x7($v0)
    MEM_B(0X7, ctx->r2) = ctx->r15;
    // 0x80033AF8: lbu         $t6, 0x14($t2)
    ctx->r14 = MEM_BU(ctx->r10, 0X14);
    // 0x80033AFC: nop

    // 0x80033B00: sb          $t6, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r14;
    // 0x80033B04: lbu         $t8, 0x15($t2)
    ctx->r24 = MEM_BU(ctx->r10, 0X15);
    // 0x80033B08: nop

    // 0x80033B0C: sb          $t8, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r24;
    // 0x80033B10: lbu         $t9, 0x16($t2)
    ctx->r25 = MEM_BU(ctx->r10, 0X16);
    // 0x80033B14: nop

    // 0x80033B18: sb          $t9, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r25;
    // 0x80033B1C: lbu         $t7, 0x17($t2)
    ctx->r15 = MEM_BU(ctx->r10, 0X17);
    // 0x80033B20: nop

    // 0x80033B24: sb          $t7, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r15;
    // 0x80033B28: lbu         $t6, 0xD($t2)
    ctx->r14 = MEM_BU(ctx->r10, 0XD);
    // 0x80033B2C: nop

    // 0x80033B30: sb          $t6, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r14;
L_80033B34:
    // 0x80033B34: multu       $a2, $a3
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033B38: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x80033B3C: subu        $t7, $t7, $a2
    ctx->r15 = SUB32(ctx->r15, ctx->r6);
    // 0x80033B40: sll         $t7, $t7, 1
    ctx->r15 = S32(ctx->r15 << 1);
    // 0x80033B44: addu        $t6, $t2, $t7
    ctx->r14 = ADD32(ctx->r10, ctx->r15);
    // 0x80033B48: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80033B4C: mflo        $t8
    ctx->r24 = lo;
    // 0x80033B50: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x80033B54: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    // 0x80033B58: nop

    // 0x80033B5C: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033B60: mflo        $t7
    ctx->r15 = lo;
    // 0x80033B64: nop

    // 0x80033B68: nop

    // 0x80033B6C: multu       $t7, $a3
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033B70: mflo        $t8
    ctx->r24 = lo;
    // 0x80033B74: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x80033B78: lwl         $at, 0x68($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X68);
    // 0x80033B7C: lwr         $at, 0x6B($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X6B);
    // 0x80033B80: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x80033B84: swl         $at, 0x4C($t9)
    do_swl(rdram, 0X4C, ctx->r25, ctx->r1);
    // 0x80033B88: swr         $at, 0x4F($t9)
    do_swr(rdram, 0X4F, ctx->r25, ctx->r1);
    // 0x80033B8C: lhu         $at, 0x6C($t7)
    ctx->r1 = MEM_HU(ctx->r15, 0X6C);
    // 0x80033B90: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80033B94: sh          $at, 0x50($t9)
    MEM_H(0X50, ctx->r25) = ctx->r1;
    // 0x80033B98: slti        $at, $a2, 0xB
    ctx->r1 = SIGNED(ctx->r6) < 0XB ? 1 : 0;
    // 0x80033B9C: bne         $at, $zero, L_80033B34
    if (ctx->r1 != 0) {
        // 0x80033BA0: nop
    
            goto L_80033B34;
    }
    // 0x80033BA0: nop

    // 0x80033BA4: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80033BA8:
    // 0x80033BA8: addu        $t7, $t2, $v1
    ctx->r15 = ADD32(ctx->r10, ctx->r3);
    // 0x80033BAC: addu        $t6, $v0, $v1
    ctx->r14 = ADD32(ctx->r2, ctx->r3);
    // 0x80033BB0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80033BB4: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x80033BB8: lb          $t8, 0x18($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X18);
    // 0x80033BBC: sra         $v1, $t9, 16
    ctx->r3 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80033BC0: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80033BC4: bne         $at, $zero, L_80033BA8
    if (ctx->r1 != 0) {
        // 0x80033BC8: sb          $t8, 0xC($t6)
        MEM_B(0XC, ctx->r14) = ctx->r24;
            goto L_80033BA8;
    }
    // 0x80033BC8: sb          $t8, 0xC($t6)
    MEM_B(0XC, ctx->r14) = ctx->r24;
    // 0x80033BCC: or          $t9, $t2, $zero
    ctx->r25 = ctx->r10 | 0;
    // 0x80033BD0: or          $t7, $v0, $zero
    ctx->r15 = ctx->r2 | 0;
    // 0x80033BD4: addiu       $t6, $t2, 0x3C
    ctx->r14 = ADD32(ctx->r10, 0X3C);
L_80033BD8:
    // 0x80033BD8: lw          $at, 0x2C($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X2C);
    // 0x80033BDC: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80033BE0: sw          $at, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r1;
    // 0x80033BE4: lw          $at, 0x24($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X24);
    // 0x80033BE8: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80033BEC: sw          $at, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r1;
    // 0x80033BF0: lw          $at, 0x28($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X28);
    // 0x80033BF4: bne         $t9, $t6, L_80033BD8
    if (ctx->r25 != ctx->r14) {
        // 0x80033BF8: sw          $at, 0xC($t7)
        MEM_W(0XC, ctx->r15) = ctx->r1;
            goto L_80033BD8;
    }
    // 0x80033BF8: sw          $at, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r1;
    // 0x80033BFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80033C00:
    // 0x80033C00: multu       $a2, $t4
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033C04: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x80033C08: mflo        $t8
    ctx->r24 = lo;
    // 0x80033C0C: addu        $t0, $t3, $t8
    ctx->r8 = ADD32(ctx->r11, ctx->r24);
    // 0x80033C10: nop

    // 0x80033C14: multu       $a2, $t5
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033C18: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80033C1C: mflo        $t6
    ctx->r14 = lo;
    // 0x80033C20: addu        $v0, $t2, $t6
    ctx->r2 = ADD32(ctx->r10, ctx->r14);
    // 0x80033C24: lb          $t9, 0x4AC($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X4AC);
    // 0x80033C28: nop

    // 0x80033C2C: sb          $t9, 0xBC($t0)
    MEM_B(0XBC, ctx->r8) = ctx->r25;
    // 0x80033C30: lb          $t7, 0x4AD($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X4AD);
    // 0x80033C34: nop

    // 0x80033C38: sb          $t7, 0xBD($t0)
    MEM_B(0XBD, ctx->r8) = ctx->r15;
    // 0x80033C3C: lb          $v1, 0x1($t2)
    ctx->r3 = MEM_B(ctx->r10, 0X1);
    // 0x80033C40: nop

    // 0x80033C44: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80033C48: bne         $at, $zero, L_80033C60
    if (ctx->r1 != 0) {
        // 0x80033C4C: nop
    
            goto L_80033C60;
    }
    // 0x80033C4C: nop

    // 0x80033C50: addiu       $t1, $v1, -0x2
    ctx->r9 = ADD32(ctx->r3, -0X2);
    // 0x80033C54: sll         $t8, $t1, 16
    ctx->r24 = S32(ctx->r9 << 16);
    // 0x80033C58: b           L_80033C60
    // 0x80033C5C: sra         $t1, $t8, 16
    ctx->r9 = S32(SIGNED(ctx->r24) >> 16);
        goto L_80033C60;
    // 0x80033C5C: sra         $t1, $t8, 16
    ctx->r9 = S32(SIGNED(ctx->r24) >> 16);
L_80033C60:
    // 0x80033C60: multu       $t1, $ra
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r31)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033C64: addiu       $a0, $v0, 0x4AC
    ctx->r4 = ADD32(ctx->r2, 0X4AC);
    // 0x80033C68: addiu       $a1, $t0, 0xBC
    ctx->r5 = ADD32(ctx->r8, 0XBC);
    // 0x80033C6C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80033C70: mflo        $t9
    ctx->r25 = lo;
    // 0x80033C74: addu        $t7, $a0, $t9
    ctx->r15 = ADD32(ctx->r4, ctx->r25);
    // 0x80033C78: lb          $t8, 0x62($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X62);
    // 0x80033C7C: nop

    // 0x80033C80: sb          $t8, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r24;
    // 0x80033C84: lwl         $at, 0x134($a0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r4, 0X134);
    // 0x80033C88: lwr         $at, 0x137($a0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r4, 0X137);
    // 0x80033C8C: nop

    // 0x80033C90: swl         $at, 0x64($a1)
    do_swl(rdram, 0X64, ctx->r5, ctx->r1);
    // 0x80033C94: swr         $at, 0x67($a1)
    do_swr(rdram, 0X67, ctx->r5, ctx->r1);
    // 0x80033C98: lwl         $t9, 0x138($a0)
    ctx->r25 = do_lwl(rdram, ctx->r25, ctx->r4, 0X138);
    // 0x80033C9C: lwr         $t9, 0x13B($a0)
    ctx->r25 = do_lwr(rdram, ctx->r25, ctx->r4, 0X13B);
    // 0x80033CA0: nop

    // 0x80033CA4: swl         $t9, 0x68($a1)
    do_swl(rdram, 0X68, ctx->r5, ctx->r25);
    // 0x80033CA8: swr         $t9, 0x6B($a1)
    do_swr(rdram, 0X6B, ctx->r5, ctx->r25);
    // 0x80033CAC: lwl         $at, 0x13C($a0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r4, 0X13C);
    // 0x80033CB0: lwr         $at, 0x13F($a0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r4, 0X13F);
    // 0x80033CB4: nop

    // 0x80033CB8: swl         $at, 0x6C($a1)
    do_swl(rdram, 0X6C, ctx->r5, ctx->r1);
    // 0x80033CBC: swr         $at, 0x6F($a1)
    do_swr(rdram, 0X6F, ctx->r5, ctx->r1);
    // 0x80033CC0: lwl         $at, 0x140($a0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r4, 0X140);
    // 0x80033CC4: lwr         $at, 0x143($a0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r4, 0X143);
    // 0x80033CC8: nop

    // 0x80033CCC: swl         $at, 0x70($a1)
    do_swl(rdram, 0X70, ctx->r5, ctx->r1);
    // 0x80033CD0: swr         $at, 0x73($a1)
    do_swr(rdram, 0X73, ctx->r5, ctx->r1);
    // 0x80033CD4: lwl         $at, 0x144($a0)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r4, 0X144);
    // 0x80033CD8: lwr         $at, 0x147($a0)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r4, 0X147);
    // 0x80033CDC: nop

    // 0x80033CE0: swl         $at, 0x74($a1)
    do_swl(rdram, 0X74, ctx->r5, ctx->r1);
    // 0x80033CE4: swr         $at, 0x77($a1)
    do_swr(rdram, 0X77, ctx->r5, ctx->r1);
L_80033CE8:
    // 0x80033CE8: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033CEC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80033CF0: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x80033CF4: sra         $v1, $t7, 16
    ctx->r3 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80033CF8: mflo        $v0
    ctx->r2 = lo;
    // 0x80033CFC: addu        $t9, $a0, $v0
    ctx->r25 = ADD32(ctx->r4, ctx->r2);
    // 0x80033D00: lwl         $at, 0x2($t9)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r25, 0X2);
    // 0x80033D04: lwr         $at, 0x5($t9)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r25, 0X5);
    // 0x80033D08: addu        $t6, $a1, $v0
    ctx->r14 = ADD32(ctx->r5, ctx->r2);
    // 0x80033D0C: swl         $at, 0x4($t6)
    do_swl(rdram, 0X4, ctx->r14, ctx->r1);
    // 0x80033D10: swr         $at, 0x7($t6)
    do_swr(rdram, 0X7, ctx->r14, ctx->r1);
    // 0x80033D14: lhu         $at, 0x6($t9)
    ctx->r1 = MEM_HU(ctx->r25, 0X6);
    // 0x80033D18: nop

    // 0x80033D1C: sh          $at, 0x8($t6)
    MEM_H(0X8, ctx->r14) = ctx->r1;
    // 0x80033D20: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80033D24: bne         $at, $zero, L_80033CE8
    if (ctx->r1 != 0) {
        // 0x80033D28: nop
    
            goto L_80033CE8;
    }
    // 0x80033D28: nop

    // 0x80033D2C: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x80033D30: sra         $a2, $t9, 16
    ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80033D34: slti        $at, $a2, 0x24
    ctx->r1 = SIGNED(ctx->r6) < 0X24 ? 1 : 0;
    // 0x80033D38: bne         $at, $zero, L_80033C00
    if (ctx->r1 != 0) {
        // 0x80033D3C: nop
    
            goto L_80033C00;
    }
    // 0x80033D3C: nop

    // 0x80033D40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80033D44:
    // 0x80033D44: multu       $a2, $ra
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r31)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033D48: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80033D4C: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x80033D50: sra         $a2, $t9, 16
    ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80033D54: mflo        $v0
    ctx->r2 = lo;
    // 0x80033D58: addu        $t6, $t2, $v0
    ctx->r14 = ADD32(ctx->r10, ctx->r2);
    // 0x80033D5C: lbu         $at, 0x337A($t6)
    ctx->r1 = MEM_BU(ctx->r14, 0X337A);
    // 0x80033D60: addu        $t7, $t3, $v0
    ctx->r15 = ADD32(ctx->r11, ctx->r2);
    // 0x80033D64: sb          $at, 0x122C($t7)
    MEM_B(0X122C, ctx->r15) = ctx->r1;
    // 0x80033D68: lbu         $t8, 0x337B($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X337B);
    // 0x80033D6C: nop

    // 0x80033D70: sb          $t8, 0x122D($t7)
    MEM_B(0X122D, ctx->r15) = ctx->r24;
    // 0x80033D74: lbu         $at, 0x337C($t6)
    ctx->r1 = MEM_BU(ctx->r14, 0X337C);
    // 0x80033D78: nop

    // 0x80033D7C: sb          $at, 0x122E($t7)
    MEM_B(0X122E, ctx->r15) = ctx->r1;
    // 0x80033D80: slti        $at, $a2, 0xA
    ctx->r1 = SIGNED(ctx->r6) < 0XA ? 1 : 0;
    // 0x80033D84: bne         $at, $zero, L_80033D44
    if (ctx->r1 != 0) {
        // 0x80033D88: nop
    
            goto L_80033D44;
    }
    // 0x80033D88: nop

    // 0x80033D8C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80033D90: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x80033D94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80033D98: beq         $t6, $zero, L_80033E0C
    if (ctx->r14 == 0) {
        // 0x80033D9C: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_80033E0C;
    }
    // 0x80033D9C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80033DA0: addiu       $v1, $v1, -0x3110
    ctx->r3 = ADD32(ctx->r3, -0X3110);
L_80033DA4:
    // 0x80033DA4: addu        $t8, $v1, $a2
    ctx->r24 = ADD32(ctx->r3, ctx->r6);
    // 0x80033DA8: lb          $t9, 0x11($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X11);
    // 0x80033DAC: addu        $t7, $t3, $a2
    ctx->r15 = ADD32(ctx->r11, ctx->r6);
    // 0x80033DB0: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x80033DB4: addu        $t8, $v1, $v0
    ctx->r24 = ADD32(ctx->r3, ctx->r2);
    // 0x80033DB8: sb          $t9, 0x125A($t7)
    MEM_B(0X125A, ctx->r15) = ctx->r25;
    // 0x80033DBC: lbu         $at, 0x30($t8)
    ctx->r1 = MEM_BU(ctx->r24, 0X30);
    // 0x80033DC0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80033DC4: addu        $t6, $t3, $v0
    ctx->r14 = ADD32(ctx->r11, ctx->r2);
    // 0x80033DC8: sll         $t9, $a2, 16
    ctx->r25 = S32(ctx->r6 << 16);
    // 0x80033DCC: sb          $at, 0x1279($t6)
    MEM_B(0X1279, ctx->r14) = ctx->r1;
    // 0x80033DD0: lbu         $t7, 0x31($t8)
    ctx->r15 = MEM_BU(ctx->r24, 0X31);
    // 0x80033DD4: sra         $a2, $t9, 16
    ctx->r6 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80033DD8: slti        $at, $a2, 0x1F
    ctx->r1 = SIGNED(ctx->r6) < 0X1F ? 1 : 0;
    // 0x80033DDC: bne         $at, $zero, L_80033DA4
    if (ctx->r1 != 0) {
        // 0x80033DE0: sb          $t7, 0x127A($t6)
        MEM_B(0X127A, ctx->r14) = ctx->r15;
            goto L_80033DA4;
    }
    // 0x80033DE0: sb          $t7, 0x127A($t6)
    MEM_B(0X127A, ctx->r14) = ctx->r15;
    // 0x80033DE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80033DE8:
    // 0x80033DE8: addu        $t8, $v1, $a2
    ctx->r24 = ADD32(ctx->r3, ctx->r6);
    // 0x80033DEC: addu        $t9, $t3, $a2
    ctx->r25 = ADD32(ctx->r11, ctx->r6);
    // 0x80033DF0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80033DF4: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x80033DF8: lb          $t7, 0x1($t8)
    ctx->r15 = MEM_B(ctx->r24, 0X1);
    // 0x80033DFC: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80033E00: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x80033E04: bne         $at, $zero, L_80033DE8
    if (ctx->r1 != 0) {
        // 0x80033E08: sb          $t7, 0x124A($t9)
        MEM_B(0X124A, ctx->r25) = ctx->r15;
            goto L_80033DE8;
    }
    // 0x80033E08: sb          $t7, 0x124A($t9)
    MEM_B(0X124A, ctx->r25) = ctx->r15;
L_80033E0C:
    // 0x80033E0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80033E10: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80033E14: jr          $ra
    // 0x80033E18: nop

    return;
    // 0x80033E18: nop

;}
RECOMP_FUNC void func_80033E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80033E1C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80033E20: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80033E24: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80033E28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80033E2C: lh          $a1, 0x46($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X46);
    // 0x80033E30: lbu         $a0, 0x43($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X43);
    // 0x80033E34: jal         0x80031CE0
    // 0x80033E38: nop

    func_80031CE0(rdram, ctx);
        goto after_0;
    // 0x80033E38: nop

    after_0:
    // 0x80033E3C: lbu         $a0, 0x43($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X43);
    // 0x80033E40: lh          $a1, 0x46($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X46);
    // 0x80033E44: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80033E48: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80033E4C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80033E50: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80033E54: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80033E58: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x80033E5C: addiu       $t7, $t7, 0x5350
    ctx->r15 = ADD32(ctx->r15, 0X5350);
    // 0x80033E60: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x80033E64: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x80033E68: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x80033E6C: lw          $t6, 0x14($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X14);
    // 0x80033E70: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80033E74: bne         $v0, $t6, L_8003438C
    if (ctx->r2 != ctx->r14) {
        // 0x80033E78: addu        $t7, $t7, $a1
        ctx->r15 = ADD32(ctx->r15, ctx->r5);
            goto L_8003438C;
    }
    // 0x80033E78: addu        $t7, $t7, $a1
    ctx->r15 = ADD32(ctx->r15, ctx->r5);
    // 0x80033E7C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80033E80: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x80033E84: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80033E88: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x80033E8C: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80033E90: subu        $t7, $t7, $a1
    ctx->r15 = SUB32(ctx->r15, ctx->r5);
    // 0x80033E94: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80033E98: addu        $a3, $v1, $t7
    ctx->r7 = ADD32(ctx->r3, ctx->r15);
    // 0x80033E9C: lb          $t8, 0x1744($a3)
    ctx->r24 = MEM_B(ctx->r7, 0X1744);
    // 0x80033EA0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80033EA4: bne         $t8, $zero, L_80033EB8
    if (ctx->r24 != 0) {
        // 0x80033EA8: addiu       $t3, $a3, 0x1744
        ctx->r11 = ADD32(ctx->r7, 0X1744);
            goto L_80033EB8;
    }
    // 0x80033EA8: addiu       $t3, $a3, 0x1744
    ctx->r11 = ADD32(ctx->r7, 0X1744);
    // 0x80033EAC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80033EB0: b           L_80033EC4
    // 0x80033EB4: sb          $zero, -0x32A1($at)
    MEM_B(-0X32A1, ctx->r1) = 0;
        goto L_80033EC4;
    // 0x80033EB4: sb          $zero, -0x32A1($at)
    MEM_B(-0X32A1, ctx->r1) = 0;
L_80033EB8:
    // 0x80033EB8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80033EBC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80033EC0: sb          $t9, -0x32A1($at)
    MEM_B(-0X32A1, ctx->r1) = ctx->r25;
L_80033EC4:
    // 0x80033EC4: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x80033EC8: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80033ECC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80033ED0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80033ED4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80033ED8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80033EDC: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80033EE0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80033EE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80033EE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80033EEC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80033EF0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80033EF4: lb          $t9, 0x1($t3)
    ctx->r25 = MEM_B(ctx->r11, 0X1);
    // 0x80033EF8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x80033EFC: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x80033F00: addu        $t2, $t7, $t8
    ctx->r10 = ADD32(ctx->r15, ctx->r24);
    // 0x80033F04: sb          $t9, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r25;
    // 0x80033F08: lb          $t6, 0x2($t3)
    ctx->r14 = MEM_B(ctx->r11, 0X2);
    // 0x80033F0C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80033F10: sb          $t6, 0x1($t2)
    MEM_B(0X1, ctx->r10) = ctx->r14;
    // 0x80033F14: lb          $t7, 0x3($t3)
    ctx->r15 = MEM_B(ctx->r11, 0X3);
    // 0x80033F18: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80033F1C: sb          $t7, 0x2($t2)
    MEM_B(0X2, ctx->r10) = ctx->r15;
    // 0x80033F20: lb          $t8, 0x4($t3)
    ctx->r24 = MEM_B(ctx->r11, 0X4);
    // 0x80033F24: addiu       $a1, $a1, -0x2CF0
    ctx->r5 = ADD32(ctx->r5, -0X2CF0);
    // 0x80033F28: sb          $t8, 0x3($t2)
    MEM_B(0X3, ctx->r10) = ctx->r24;
    // 0x80033F2C: lbu         $t9, 0x6($t3)
    ctx->r25 = MEM_BU(ctx->r11, 0X6);
    // 0x80033F30: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80033F34: sb          $t9, 0x6($t2)
    MEM_B(0X6, ctx->r10) = ctx->r25;
    // 0x80033F38: lbu         $t6, 0xA($t3)
    ctx->r14 = MEM_BU(ctx->r11, 0XA);
    // 0x80033F3C: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    // 0x80033F40: sb          $t6, 0x9($t2)
    MEM_B(0X9, ctx->r10) = ctx->r14;
    // 0x80033F44: lb          $t7, 0x7($t3)
    ctx->r15 = MEM_B(ctx->r11, 0X7);
    // 0x80033F48: addiu       $ra, $zero, 0x3
    ctx->r31 = ADD32(0, 0X3);
    // 0x80033F4C: sb          $t7, -0x309F($at)
    MEM_B(-0X309F, ctx->r1) = ctx->r15;
    // 0x80033F50: lb          $t8, 0x8($t3)
    ctx->r24 = MEM_B(ctx->r11, 0X8);
    // 0x80033F54: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80033F58: sb          $t8, -0x309C($at)
    MEM_B(-0X309C, ctx->r1) = ctx->r24;
    // 0x80033F5C: lb          $t9, 0x9($t3)
    ctx->r25 = MEM_B(ctx->r11, 0X9);
    // 0x80033F60: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80033F64: sb          $t9, -0x3099($at)
    MEM_B(-0X3099, ctx->r1) = ctx->r25;
L_80033F68:
    // 0x80033F68: multu       $v1, $a2
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033F6C: addu        $a0, $t3, $v1
    ctx->r4 = ADD32(ctx->r11, ctx->r3);
    // 0x80033F70: lbu         $t7, 0xB($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0XB);
    // 0x80033F74: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80033F78: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x80033F7C: sra         $v1, $t9, 16
    ctx->r3 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80033F80: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80033F84: mflo        $t6
    ctx->r14 = lo;
    // 0x80033F88: addu        $v0, $a1, $t6
    ctx->r2 = ADD32(ctx->r5, ctx->r14);
    // 0x80033F8C: sb          $t7, 0x41($v0)
    MEM_B(0X41, ctx->r2) = ctx->r15;
    // 0x80033F90: lbu         $t8, 0x1B($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X1B);
    // 0x80033F94: bne         $at, $zero, L_80033F68
    if (ctx->r1 != 0) {
        // 0x80033F98: sb          $t8, 0xAD5($v0)
        MEM_B(0XAD5, ctx->r2) = ctx->r24;
            goto L_80033F68;
    }
    // 0x80033F98: sb          $t8, 0xAD5($v0)
    MEM_B(0XAD5, ctx->r2) = ctx->r24;
    // 0x80033F9C: addiu       $v0, $a3, 0x1770
    ctx->r2 = ADD32(ctx->r7, 0X1770);
    // 0x80033FA0: lb          $t7, 0x0($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X0);
    // 0x80033FA4: lb          $v1, 0x1($t2)
    ctx->r3 = MEM_B(ctx->r10, 0X1);
    // 0x80033FA8: sb          $t7, 0xC($t2)
    MEM_B(0XC, ctx->r10) = ctx->r15;
    // 0x80033FAC: blez        $v1, L_80033FEC
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80033FB0: nop
    
            goto L_80033FEC;
    }
    // 0x80033FB0: nop

    // 0x80033FB4: multu       $v1, $ra
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r31)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80033FB8: lb          $t9, 0xC($t2)
    ctx->r25 = MEM_B(ctx->r10, 0XC);
    // 0x80033FBC: lb          $t8, 0x5($t3)
    ctx->r24 = MEM_B(ctx->r11, 0X5);
    // 0x80033FC0: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80033FC4: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80033FC8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80033FCC: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80033FD0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80033FD4: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x80033FD8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80033FDC: addu        $t7, $t2, $t6
    ctx->r15 = ADD32(ctx->r10, ctx->r14);
    // 0x80033FE0: mflo        $t9
    ctx->r25 = lo;
    // 0x80033FE4: addu        $t6, $t7, $t9
    ctx->r14 = ADD32(ctx->r15, ctx->r25);
    // 0x80033FE8: sb          $t8, 0x50B($t6)
    MEM_B(0X50B, ctx->r14) = ctx->r24;
L_80033FEC:
    // 0x80033FEC: lbu         $t7, 0x2($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X2);
    // 0x80033FF0: nop

    // 0x80033FF4: sb          $t7, 0xE($t2)
    MEM_B(0XE, ctx->r10) = ctx->r15;
    // 0x80033FF8: lbu         $t9, 0x3($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X3);
    // 0x80033FFC: nop

    // 0x80034000: sb          $t9, 0xF($t2)
    MEM_B(0XF, ctx->r10) = ctx->r25;
    // 0x80034004: lbu         $t8, 0x4($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X4);
    // 0x80034008: nop

    // 0x8003400C: sb          $t8, 0x10($t2)
    MEM_B(0X10, ctx->r10) = ctx->r24;
    // 0x80034010: lbu         $t6, 0x5($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X5);
    // 0x80034014: nop

    // 0x80034018: sb          $t6, 0x11($t2)
    MEM_B(0X11, ctx->r10) = ctx->r14;
    // 0x8003401C: lbu         $t7, 0x6($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X6);
    // 0x80034020: nop

    // 0x80034024: sb          $t7, 0x12($t2)
    MEM_B(0X12, ctx->r10) = ctx->r15;
    // 0x80034028: lbu         $t9, 0x7($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X7);
    // 0x8003402C: nop

    // 0x80034030: sb          $t9, 0x13($t2)
    MEM_B(0X13, ctx->r10) = ctx->r25;
    // 0x80034034: lbu         $t8, 0x8($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X8);
    // 0x80034038: nop

    // 0x8003403C: sb          $t8, 0x14($t2)
    MEM_B(0X14, ctx->r10) = ctx->r24;
    // 0x80034040: lbu         $t6, 0x9($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X9);
    // 0x80034044: nop

    // 0x80034048: sb          $t6, 0x15($t2)
    MEM_B(0X15, ctx->r10) = ctx->r14;
    // 0x8003404C: lbu         $t7, 0xA($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XA);
    // 0x80034050: nop

    // 0x80034054: sb          $t7, 0x16($t2)
    MEM_B(0X16, ctx->r10) = ctx->r15;
    // 0x80034058: lbu         $t9, 0xB($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XB);
    // 0x8003405C: nop

    // 0x80034060: sb          $t9, 0x17($t2)
    MEM_B(0X17, ctx->r10) = ctx->r25;
    // 0x80034064: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x80034068: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x8003406C: jal         0x8005CFC8
    // 0x80034070: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8005CFC8(rdram, ctx);
        goto after_1;
    // 0x80034070: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x80034074: jal         0x8027FB14
    // 0x80034078: nop

    LOOKUP_FUNC(0x8027FB14)(rdram, ctx);
        goto after_2;
    // 0x80034078: nop

    after_2:
    // 0x8003407C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80034080: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80034084: lbu         $t8, 0x1($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1);
    // 0x80034088: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8003408C: addiu       $ra, $zero, 0x3
    ctx->r31 = ADD32(0, 0X3);
    // 0x80034090: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80034094: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    // 0x80034098: addiu       $v1, $zero, 0xB
    ctx->r3 = ADD32(0, 0XB);
    // 0x8003409C: sb          $t8, 0xD($t2)
    MEM_B(0XD, ctx->r10) = ctx->r24;
L_800340A0:
    // 0x800340A0: lbu         $t9, 0x1($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X1);
    // 0x800340A4: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x800340A8: multu       $t9, $v1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800340AC: subu        $t6, $t6, $a2
    ctx->r14 = SUB32(ctx->r14, ctx->r6);
    // 0x800340B0: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x800340B4: addu        $t7, $t2, $t6
    ctx->r15 = ADD32(ctx->r10, ctx->r14);
    // 0x800340B8: mflo        $t8
    ctx->r24 = lo;
    // 0x800340BC: nop

    // 0x800340C0: nop

    // 0x800340C4: multu       $t8, $a3
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800340C8: mflo        $t6
    ctx->r14 = lo;
    // 0x800340CC: addu        $t9, $t7, $t6
    ctx->r25 = ADD32(ctx->r15, ctx->r14);
    // 0x800340D0: nop

    // 0x800340D4: multu       $a2, $a3
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800340D8: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800340DC: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x800340E0: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800340E4: mflo        $t8
    ctx->r24 = lo;
    // 0x800340E8: addu        $t7, $v0, $t8
    ctx->r15 = ADD32(ctx->r2, ctx->r24);
    // 0x800340EC: lwl         $at, 0x4C($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X4C);
    // 0x800340F0: lwr         $at, 0x4F($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X4F);
    // 0x800340F4: nop

    // 0x800340F8: swl         $at, 0x68($t9)
    do_swl(rdram, 0X68, ctx->r25, ctx->r1);
    // 0x800340FC: swr         $at, 0x6B($t9)
    do_swr(rdram, 0X6B, ctx->r25, ctx->r1);
    // 0x80034100: lhu         $at, 0x50($t7)
    ctx->r1 = MEM_HU(ctx->r15, 0X50);
    // 0x80034104: nop

    // 0x80034108: sh          $at, 0x6C($t9)
    MEM_H(0X6C, ctx->r25) = ctx->r1;
    // 0x8003410C: slti        $at, $a2, 0xB
    ctx->r1 = SIGNED(ctx->r6) < 0XB ? 1 : 0;
    // 0x80034110: bne         $at, $zero, L_800340A0
    if (ctx->r1 != 0) {
        // 0x80034114: nop
    
            goto L_800340A0;
    }
    // 0x80034114: nop

    // 0x80034118: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8003411C:
    // 0x8003411C: addu        $t7, $v0, $v1
    ctx->r15 = ADD32(ctx->r2, ctx->r3);
    // 0x80034120: addu        $t6, $t2, $v1
    ctx->r14 = ADD32(ctx->r10, ctx->r3);
    // 0x80034124: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80034128: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x8003412C: lb          $t8, 0xC($t7)
    ctx->r24 = MEM_B(ctx->r15, 0XC);
    // 0x80034130: sra         $v1, $t9, 16
    ctx->r3 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80034134: slti        $at, $v1, 0x4
    ctx->r1 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80034138: bne         $at, $zero, L_8003411C
    if (ctx->r1 != 0) {
        // 0x8003413C: sb          $t8, 0x18($t6)
        MEM_B(0X18, ctx->r14) = ctx->r24;
            goto L_8003411C;
    }
    // 0x8003413C: sb          $t8, 0x18($t6)
    MEM_B(0X18, ctx->r14) = ctx->r24;
    // 0x80034140: or          $t9, $v0, $zero
    ctx->r25 = ctx->r2 | 0;
    // 0x80034144: or          $t7, $t2, $zero
    ctx->r15 = ctx->r10 | 0;
    // 0x80034148: addiu       $t6, $v0, 0x3C
    ctx->r14 = ADD32(ctx->r2, 0X3C);
L_8003414C:
    // 0x8003414C: lw          $at, 0x10($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X10);
    // 0x80034150: addiu       $t9, $t9, 0xC
    ctx->r25 = ADD32(ctx->r25, 0XC);
    // 0x80034154: sw          $at, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->r1;
    // 0x80034158: lw          $at, 0x8($t9)
    ctx->r1 = MEM_W(ctx->r25, 0X8);
    // 0x8003415C: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x80034160: sw          $at, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->r1;
    // 0x80034164: lw          $at, 0xC($t9)
    ctx->r1 = MEM_W(ctx->r25, 0XC);
    // 0x80034168: bne         $t9, $t6, L_8003414C
    if (ctx->r25 != ctx->r14) {
        // 0x8003416C: sw          $at, 0x28($t7)
        MEM_W(0X28, ctx->r15) = ctx->r1;
            goto L_8003414C;
    }
    // 0x8003416C: sw          $at, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->r1;
    // 0x80034170: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80034174: addiu       $t5, $zero, 0x7C
    ctx->r13 = ADD32(0, 0X7C);
    // 0x80034178: addiu       $t4, $zero, 0x14C
    ctx->r12 = ADD32(0, 0X14C);
L_8003417C:
    // 0x8003417C: multu       $a2, $t4
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80034180: or          $t1, $zero, $zero
    ctx->r9 = 0 | 0;
    // 0x80034184: mflo        $t8
    ctx->r24 = lo;
    // 0x80034188: addu        $v0, $t2, $t8
    ctx->r2 = ADD32(ctx->r10, ctx->r24);
    // 0x8003418C: nop

    // 0x80034190: multu       $a2, $t5
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r13)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80034194: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80034198: mflo        $t6
    ctx->r14 = lo;
    // 0x8003419C: addu        $t0, $t3, $t6
    ctx->r8 = ADD32(ctx->r11, ctx->r14);
    // 0x800341A0: lb          $t9, 0xBC($t0)
    ctx->r25 = MEM_B(ctx->r8, 0XBC);
    // 0x800341A4: nop

    // 0x800341A8: sb          $t9, 0x4AC($v0)
    MEM_B(0X4AC, ctx->r2) = ctx->r25;
    // 0x800341AC: lb          $t7, 0xBD($t0)
    ctx->r15 = MEM_B(ctx->r8, 0XBD);
    // 0x800341B0: nop

    // 0x800341B4: sb          $t7, 0x4AD($v0)
    MEM_B(0X4AD, ctx->r2) = ctx->r15;
    // 0x800341B8: lb          $v1, 0x1($t2)
    ctx->r3 = MEM_B(ctx->r10, 0X1);
    // 0x800341BC: nop

    // 0x800341C0: slti        $at, $v1, 0x2
    ctx->r1 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x800341C4: bne         $at, $zero, L_800341DC
    if (ctx->r1 != 0) {
        // 0x800341C8: nop
    
            goto L_800341DC;
    }
    // 0x800341C8: nop

    // 0x800341CC: addiu       $t1, $v1, -0x2
    ctx->r9 = ADD32(ctx->r3, -0X2);
    // 0x800341D0: sll         $t8, $t1, 16
    ctx->r24 = S32(ctx->r9 << 16);
    // 0x800341D4: b           L_800341DC
    // 0x800341D8: sra         $t1, $t8, 16
    ctx->r9 = S32(SIGNED(ctx->r24) >> 16);
        goto L_800341DC;
    // 0x800341D8: sra         $t1, $t8, 16
    ctx->r9 = S32(SIGNED(ctx->r24) >> 16);
L_800341DC:
    // 0x800341DC: multu       $t1, $ra
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r31)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800341E0: addiu       $a1, $t0, 0xBC
    ctx->r5 = ADD32(ctx->r8, 0XBC);
    // 0x800341E4: lb          $t9, 0x2($a1)
    ctx->r25 = MEM_B(ctx->r5, 0X2);
    // 0x800341E8: addiu       $a0, $v0, 0x4AC
    ctx->r4 = ADD32(ctx->r2, 0X4AC);
    // 0x800341EC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x800341F0: mflo        $t7
    ctx->r15 = lo;
    // 0x800341F4: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x800341F8: sb          $t9, 0x62($t8)
    MEM_B(0X62, ctx->r24) = ctx->r25;
    // 0x800341FC: lwl         $at, 0x64($a1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r5, 0X64);
    // 0x80034200: lwr         $at, 0x67($a1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r5, 0X67);
    // 0x80034204: nop

    // 0x80034208: swl         $at, 0x134($a0)
    do_swl(rdram, 0X134, ctx->r4, ctx->r1);
    // 0x8003420C: swr         $at, 0x137($a0)
    do_swr(rdram, 0X137, ctx->r4, ctx->r1);
    // 0x80034210: lwl         $t7, 0x68($a1)
    ctx->r15 = do_lwl(rdram, ctx->r15, ctx->r5, 0X68);
    // 0x80034214: lwr         $t7, 0x6B($a1)
    ctx->r15 = do_lwr(rdram, ctx->r15, ctx->r5, 0X6B);
    // 0x80034218: nop

    // 0x8003421C: swl         $t7, 0x138($a0)
    do_swl(rdram, 0X138, ctx->r4, ctx->r15);
    // 0x80034220: swr         $t7, 0x13B($a0)
    do_swr(rdram, 0X13B, ctx->r4, ctx->r15);
    // 0x80034224: lwl         $at, 0x6C($a1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r5, 0X6C);
    // 0x80034228: lwr         $at, 0x6F($a1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r5, 0X6F);
    // 0x8003422C: nop

    // 0x80034230: swl         $at, 0x13C($a0)
    do_swl(rdram, 0X13C, ctx->r4, ctx->r1);
    // 0x80034234: swr         $at, 0x13F($a0)
    do_swr(rdram, 0X13F, ctx->r4, ctx->r1);
    // 0x80034238: lwl         $at, 0x70($a1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r5, 0X70);
    // 0x8003423C: lwr         $at, 0x73($a1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r5, 0X73);
    // 0x80034240: nop

    // 0x80034244: swl         $at, 0x140($a0)
    do_swl(rdram, 0X140, ctx->r4, ctx->r1);
    // 0x80034248: swr         $at, 0x143($a0)
    do_swr(rdram, 0X143, ctx->r4, ctx->r1);
    // 0x8003424C: lwl         $at, 0x74($a1)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r5, 0X74);
    // 0x80034250: lwr         $at, 0x77($a1)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r5, 0X77);
    // 0x80034254: nop

    // 0x80034258: swl         $at, 0x144($a0)
    do_swl(rdram, 0X144, ctx->r4, ctx->r1);
    // 0x8003425C: swr         $at, 0x147($a0)
    do_swr(rdram, 0X147, ctx->r4, ctx->r1);
L_80034260:
    // 0x80034260: multu       $v1, $a3
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80034264: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80034268: sll         $t9, $v1, 16
    ctx->r25 = S32(ctx->r3 << 16);
    // 0x8003426C: sra         $v1, $t9, 16
    ctx->r3 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80034270: mflo        $v0
    ctx->r2 = lo;
    // 0x80034274: addu        $t7, $a1, $v0
    ctx->r15 = ADD32(ctx->r5, ctx->r2);
    // 0x80034278: lwl         $at, 0x4($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X4);
    // 0x8003427C: lwr         $at, 0x7($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X7);
    // 0x80034280: addu        $t6, $a0, $v0
    ctx->r14 = ADD32(ctx->r4, ctx->r2);
    // 0x80034284: swl         $at, 0x2($t6)
    do_swl(rdram, 0X2, ctx->r14, ctx->r1);
    // 0x80034288: swr         $at, 0x5($t6)
    do_swr(rdram, 0X5, ctx->r14, ctx->r1);
    // 0x8003428C: lhu         $at, 0x8($t7)
    ctx->r1 = MEM_HU(ctx->r15, 0X8);
    // 0x80034290: nop

    // 0x80034294: sh          $at, 0x6($t6)
    MEM_H(0X6, ctx->r14) = ctx->r1;
    // 0x80034298: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8003429C: bne         $at, $zero, L_80034260
    if (ctx->r1 != 0) {
        // 0x800342A0: nop
    
            goto L_80034260;
    }
    // 0x800342A0: nop

    // 0x800342A4: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x800342A8: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800342AC: slti        $at, $a2, 0x24
    ctx->r1 = SIGNED(ctx->r6) < 0X24 ? 1 : 0;
    // 0x800342B0: bne         $at, $zero, L_8003417C
    if (ctx->r1 != 0) {
        // 0x800342B4: nop
    
            goto L_8003417C;
    }
    // 0x800342B4: nop

    // 0x800342B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_800342BC:
    // 0x800342BC: multu       $a2, $ra
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r31)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800342C0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800342C4: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x800342C8: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
    // 0x800342CC: mflo        $v0
    ctx->r2 = lo;
    // 0x800342D0: addu        $t6, $t3, $v0
    ctx->r14 = ADD32(ctx->r11, ctx->r2);
    // 0x800342D4: lbu         $at, 0x122C($t6)
    ctx->r1 = MEM_BU(ctx->r14, 0X122C);
    // 0x800342D8: addu        $t9, $t2, $v0
    ctx->r25 = ADD32(ctx->r10, ctx->r2);
    // 0x800342DC: sb          $at, 0x337A($t9)
    MEM_B(0X337A, ctx->r25) = ctx->r1;
    // 0x800342E0: lbu         $t8, 0x122D($t6)
    ctx->r24 = MEM_BU(ctx->r14, 0X122D);
    // 0x800342E4: nop

    // 0x800342E8: sb          $t8, 0x337B($t9)
    MEM_B(0X337B, ctx->r25) = ctx->r24;
    // 0x800342EC: lbu         $at, 0x122E($t6)
    ctx->r1 = MEM_BU(ctx->r14, 0X122E);
    // 0x800342F0: nop

    // 0x800342F4: sb          $at, 0x337C($t9)
    MEM_B(0X337C, ctx->r25) = ctx->r1;
    // 0x800342F8: slti        $at, $a2, 0xA
    ctx->r1 = SIGNED(ctx->r6) < 0XA ? 1 : 0;
    // 0x800342FC: bne         $at, $zero, L_800342BC
    if (ctx->r1 != 0) {
        // 0x80034300: nop
    
            goto L_800342BC;
    }
    // 0x80034300: nop

    // 0x80034304: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80034308: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8003430C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80034310: beq         $t6, $zero, L_80034384
    if (ctx->r14 == 0) {
        // 0x80034314: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_80034384;
    }
    // 0x80034314: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80034318: addiu       $v1, $v1, -0x3110
    ctx->r3 = ADD32(ctx->r3, -0X3110);
L_8003431C:
    // 0x8003431C: addu        $t8, $t3, $a2
    ctx->r24 = ADD32(ctx->r11, ctx->r6);
    // 0x80034320: lb          $t7, 0x125A($t8)
    ctx->r15 = MEM_B(ctx->r24, 0X125A);
    // 0x80034324: addu        $t9, $v1, $a2
    ctx->r25 = ADD32(ctx->r3, ctx->r6);
    // 0x80034328: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x8003432C: addu        $t8, $t3, $v0
    ctx->r24 = ADD32(ctx->r11, ctx->r2);
    // 0x80034330: sb          $t7, 0x11($t9)
    MEM_B(0X11, ctx->r25) = ctx->r15;
    // 0x80034334: lbu         $at, 0x1279($t8)
    ctx->r1 = MEM_BU(ctx->r24, 0X1279);
    // 0x80034338: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8003433C: addu        $t6, $v1, $v0
    ctx->r14 = ADD32(ctx->r3, ctx->r2);
    // 0x80034340: sll         $t7, $a2, 16
    ctx->r15 = S32(ctx->r6 << 16);
    // 0x80034344: sb          $at, 0x30($t6)
    MEM_B(0X30, ctx->r14) = ctx->r1;
    // 0x80034348: lbu         $t9, 0x127A($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X127A);
    // 0x8003434C: sra         $a2, $t7, 16
    ctx->r6 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80034350: slti        $at, $a2, 0x1F
    ctx->r1 = SIGNED(ctx->r6) < 0X1F ? 1 : 0;
    // 0x80034354: bne         $at, $zero, L_8003431C
    if (ctx->r1 != 0) {
        // 0x80034358: sb          $t9, 0x31($t6)
        MEM_B(0X31, ctx->r14) = ctx->r25;
            goto L_8003431C;
    }
    // 0x80034358: sb          $t9, 0x31($t6)
    MEM_B(0X31, ctx->r14) = ctx->r25;
    // 0x8003435C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80034360:
    // 0x80034360: addu        $t8, $t3, $a2
    ctx->r24 = ADD32(ctx->r11, ctx->r6);
    // 0x80034364: addu        $t7, $v1, $a2
    ctx->r15 = ADD32(ctx->r3, ctx->r6);
    // 0x80034368: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8003436C: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x80034370: lb          $t9, 0x124A($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X124A);
    // 0x80034374: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80034378: slti        $at, $a2, 0x10
    ctx->r1 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x8003437C: bne         $at, $zero, L_80034360
    if (ctx->r1 != 0) {
        // 0x80034380: sb          $t9, 0x1($t7)
        MEM_B(0X1, ctx->r15) = ctx->r25;
            goto L_80034360;
    }
    // 0x80034380: sb          $t9, 0x1($t7)
    MEM_B(0X1, ctx->r15) = ctx->r25;
L_80034384:
    // 0x80034384: b           L_800343C0
    // 0x80034388: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800343C0;
    // 0x80034388: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003438C:
    // 0x8003438C: jal         0x80034EE0
    // 0x80034390: nop

    func_80034EE0(rdram, ctx);
        goto after_3;
    // 0x80034390: nop

    after_3:
    // 0x80034394: beq         $v0, $zero, L_800343B0
    if (ctx->r2 == 0) {
        // 0x80034398: lbu         $a0, 0x43($sp)
        ctx->r4 = MEM_BU(ctx->r29, 0X43);
            goto L_800343B0;
    }
    // 0x80034398: lbu         $a0, 0x43($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X43);
    // 0x8003439C: lbu         $a0, 0x43($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X43);
    // 0x800343A0: lh          $a1, 0x46($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X46);
    // 0x800343A4: jal         0x800337B8
    // 0x800343A8: nop

    func_800337B8(rdram, ctx);
        goto after_4;
    // 0x800343A8: nop

    after_4:
    // 0x800343AC: lbu         $a0, 0x43($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X43);
L_800343B0:
    // 0x800343B0: lh          $a1, 0x46($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X46);
    // 0x800343B4: jal         0x80033E1C
    // 0x800343B8: nop

    func_80033E1C(rdram, ctx);
        goto after_5;
    // 0x800343B8: nop

    after_5:
    // 0x800343BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800343C0:
    // 0x800343C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800343C4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800343C8: jr          $ra
    // 0x800343CC: nop

    return;
    // 0x800343CC: nop

;}
RECOMP_FUNC void func_800343D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800343D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800343D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800343D8: lbu         $t6, 0x1B($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1B);
    // 0x800343DC: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800343E0: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x800343E4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800343E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800343EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800343F0: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x800343F4: addiu       $t8, $t8, 0x5350
    ctx->r24 = ADD32(ctx->r24, 0X5350);
    // 0x800343F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800343FC: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    // 0x80034400: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80034404: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x80034408: addiu       $t0, $zero, 0x44
    ctx->r8 = ADD32(0, 0X44);
    // 0x8003440C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
L_80034410:
    // 0x80034410: multu       $a2, $t0
    result = U64(U32(ctx->r6)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80034414: sll         $t3, $a2, 4
    ctx->r11 = S32(ctx->r6 << 4);
    // 0x80034418: addu        $t3, $t3, $a2
    ctx->r11 = ADD32(ctx->r11, ctx->r6);
    // 0x8003441C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80034420: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80034424: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x80034428: addu        $a0, $a3, $t3
    ctx->r4 = ADD32(ctx->r7, ctx->r11);
    // 0x8003442C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80034430: mflo        $t9
    ctx->r25 = lo;
    // 0x80034434: addu        $t2, $a3, $t9
    ctx->r10 = ADD32(ctx->r7, ctx->r25);
    // 0x80034438: sb          $t1, 0x1302($t2)
    MEM_B(0X1302, ctx->r10) = ctx->r9;
L_8003443C:
    // 0x8003443C: multu       $v1, $a1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80034440: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80034444: andi        $t5, $v1, 0xFF
    ctx->r13 = ctx->r3 & 0XFF;
    // 0x80034448: slti        $at, $t5, 0xB
    ctx->r1 = SIGNED(ctx->r13) < 0XB ? 1 : 0;
    // 0x8003444C: or          $v1, $t5, $zero
    ctx->r3 = ctx->r13 | 0;
    // 0x80034450: mflo        $t4
    ctx->r12 = lo;
    // 0x80034454: addu        $v0, $a0, $t4
    ctx->r2 = ADD32(ctx->r4, ctx->r12);
    // 0x80034458: sh          $zero, 0x1304($v0)
    MEM_H(0X1304, ctx->r2) = 0;
    // 0x8003445C: sh          $zero, 0x1306($v0)
    MEM_H(0X1306, ctx->r2) = 0;
    // 0x80034460: sb          $zero, 0x1308($v0)
    MEM_B(0X1308, ctx->r2) = 0;
    // 0x80034464: bne         $at, $zero, L_8003443C
    if (ctx->r1 != 0) {
        // 0x80034468: sb          $zero, 0x1309($v0)
        MEM_B(0X1309, ctx->r2) = 0;
            goto L_8003443C;
    }
    // 0x80034468: sb          $zero, 0x1309($v0)
    MEM_B(0X1309, ctx->r2) = 0;
    // 0x8003446C: slti        $at, $t6, 0x10
    ctx->r1 = SIGNED(ctx->r14) < 0X10 ? 1 : 0;
    // 0x80034470: bne         $at, $zero, L_80034410
    if (ctx->r1 != 0) {
        // 0x80034474: or          $a2, $t6, $zero
        ctx->r6 = ctx->r14 | 0;
            goto L_80034410;
    }
    // 0x80034474: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80034478: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x8003447C: jal         0x80031D60
    // 0x80034480: nop

    func_80031D60(rdram, ctx);
        goto after_0;
    // 0x80034480: nop

    after_0:
    // 0x80034484: lbu         $a0, 0x1B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1B);
    // 0x80034488: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8003448C: sll         $t7, $a0, 4
    ctx->r15 = S32(ctx->r4 << 4);
    // 0x80034490: subu        $t7, $t7, $a0
    ctx->r15 = SUB32(ctx->r15, ctx->r4);
    // 0x80034494: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80034498: addu        $t7, $t7, $a0
    ctx->r15 = ADD32(ctx->r15, ctx->r4);
    // 0x8003449C: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x800344A0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800344A4: jal         0x80031B20
    // 0x800344A8: sw          $v0, 0x5360($at)
    MEM_W(0X5360, ctx->r1) = ctx->r2;
    func_80031B20(rdram, ctx);
        goto after_1;
    // 0x800344A8: sw          $v0, 0x5360($at)
    MEM_W(0X5360, ctx->r1) = ctx->r2;
    after_1:
    // 0x800344AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800344B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800344B4: jr          $ra
    // 0x800344B8: nop

    return;
    // 0x800344B8: nop

;}
RECOMP_FUNC void func_800344BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800344BC: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800344C0: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x800344C4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x800344C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800344CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800344D0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x800344D4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800344D8: addiu       $t8, $t8, 0x5350
    ctx->r24 = ADD32(ctx->r24, 0X5350);
    // 0x800344DC: sll         $t7, $t7, 8
    ctx->r15 = S32(ctx->r15 << 8);
    // 0x800344E0: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x800344E4: addiu       $a0, $zero, 0x44
    ctx->r4 = ADD32(0, 0X44);
    // 0x800344E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800344EC:
    // 0x800344EC: multu       $v0, $a0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800344F0: addu        $t2, $a1, $v0
    ctx->r10 = ADD32(ctx->r5, ctx->r2);
    // 0x800344F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800344F8: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x800344FC: slti        $at, $t3, 0x10
    ctx->r1 = SIGNED(ctx->r11) < 0X10 ? 1 : 0;
    // 0x80034500: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x80034504: mflo        $t9
    ctx->r25 = lo;
    // 0x80034508: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x8003450C: lbu         $t1, 0x1302($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X1302);
    // 0x80034510: bne         $at, $zero, L_800344EC
    if (ctx->r1 != 0) {
        // 0x80034514: sb          $t1, 0x0($t2)
        MEM_B(0X0, ctx->r10) = ctx->r9;
            goto L_800344EC;
    }
    // 0x80034514: sb          $t1, 0x0($t2)
    MEM_B(0X0, ctx->r10) = ctx->r9;
    // 0x80034518: jr          $ra
    // 0x8003451C: nop

    return;
    // 0x8003451C: nop

;}
RECOMP_FUNC void func_80034520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034520: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80034524: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80034528: andi        $s0, $a0, 0xFF
    ctx->r16 = ctx->r4 & 0XFF;
    // 0x8003452C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80034530: sll         $t8, $s0, 4
    ctx->r24 = S32(ctx->r16 << 4);
    // 0x80034534: lb          $t1, 0x3F($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X3F);
    // 0x80034538: subu        $t8, $t8, $s0
    ctx->r24 = SUB32(ctx->r24, ctx->r16);
    // 0x8003453C: lb          $t5, 0x3F($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X3F);
    // 0x80034540: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80034544: addu        $t8, $t8, $s0
    ctx->r24 = ADD32(ctx->r24, ctx->r16);
    // 0x80034548: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8003454C: sll         $t4, $t1, 4
    ctx->r12 = S32(ctx->r9 << 4);
    // 0x80034550: addiu       $t9, $t9, 0x5350
    ctx->r25 = ADD32(ctx->r25, 0X5350);
    // 0x80034554: sll         $t8, $t8, 8
    ctx->r24 = S32(ctx->r24 << 8);
    // 0x80034558: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x8003455C: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x80034560: sll         $t1, $t4, 2
    ctx->r9 = S32(ctx->r12 << 2);
    // 0x80034564: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80034568: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8003456C: addu        $t2, $v1, $t1
    ctx->r10 = ADD32(ctx->r3, ctx->r9);
    // 0x80034570: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80034574: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80034578: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8003457C: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80034580: sb          $a2, 0x1302($t2)
    MEM_B(0X1302, ctx->r10) = ctx->r6;
    // 0x80034584: addu        $t0, $v1, $t6
    ctx->r8 = ADD32(ctx->r3, ctx->r14);
    // 0x80034588: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8003458C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80034590:
    // 0x80034590: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80034594: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80034598: andi        $t5, $v0, 0xFF
    ctx->r13 = ctx->r2 & 0XFF;
    // 0x8003459C: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x800345A0: mflo        $v1
    ctx->r3 = lo;
    // 0x800345A4: addu        $t8, $a3, $v1
    ctx->r24 = ADD32(ctx->r7, ctx->r3);
    // 0x800345A8: lwl         $at, 0x0($t8)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r24, 0X0);
    // 0x800345AC: lwr         $at, 0x3($t8)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r24, 0X3);
    // 0x800345B0: addu        $t7, $t0, $v1
    ctx->r15 = ADD32(ctx->r8, ctx->r3);
    // 0x800345B4: swl         $at, 0x1304($t7)
    do_swl(rdram, 0X1304, ctx->r15, ctx->r1);
    // 0x800345B8: swr         $at, 0x1307($t7)
    do_swr(rdram, 0X1307, ctx->r15, ctx->r1);
    // 0x800345BC: lhu         $at, 0x4($t8)
    ctx->r1 = MEM_HU(ctx->r24, 0X4);
    // 0x800345C0: nop

    // 0x800345C4: sh          $at, 0x1308($t7)
    MEM_H(0X1308, ctx->r15) = ctx->r1;
    // 0x800345C8: slti        $at, $t5, 0xB
    ctx->r1 = SIGNED(ctx->r13) < 0XB ? 1 : 0;
    // 0x800345CC: bne         $at, $zero, L_80034590
    if (ctx->r1 != 0) {
        // 0x800345D0: nop
    
            goto L_80034590;
    }
    // 0x800345D0: nop

    // 0x800345D4: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x800345D8: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x800345DC: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x800345E0: jal         0x80031D60
    // 0x800345E4: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    func_80031D60(rdram, ctx);
        goto after_0;
    // 0x800345E4: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    after_0:
    // 0x800345E8: sll         $t6, $s0, 4
    ctx->r14 = S32(ctx->r16 << 4);
    // 0x800345EC: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x800345F0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800345F4: addu        $t6, $t6, $s0
    ctx->r14 = ADD32(ctx->r14, ctx->r16);
    // 0x800345F8: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800345FC: addiu       $t9, $t9, 0x5350
    ctx->r25 = ADD32(ctx->r25, 0X5350);
    // 0x80034600: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x80034604: addu        $a3, $t6, $t9
    ctx->r7 = ADD32(ctx->r14, ctx->r25);
    // 0x80034608: sw          $v0, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r2;
    // 0x8003460C: jal         0x800353F0
    // 0x80034610: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    func_800353F0(rdram, ctx);
        goto after_1;
    // 0x80034610: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    after_1:
    // 0x80034614: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80034618: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8003461C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80034620: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80034624: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x80034628: addiu       $t3, $t3, 0x5350
    ctx->r11 = ADD32(ctx->r11, 0X5350);
    // 0x8003462C: beq         $v0, $zero, L_800346E8
    if (ctx->r2 == 0) {
        // 0x80034630: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_800346E8;
    }
    // 0x80034630: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80034634: xori        $a2, $s0, 0x1
    ctx->r6 = ctx->r16 ^ 0X1;
    // 0x80034638: andi        $t7, $a2, 0xFF
    ctx->r15 = ctx->r6 & 0XFF;
    // 0x8003463C: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80034640: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80034644: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80034648: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8003464C: sll         $t8, $t8, 8
    ctx->r24 = S32(ctx->r24 << 8);
    // 0x80034650: lbu         $t4, 0x1302($t2)
    ctx->r12 = MEM_BU(ctx->r10, 0X1302);
    // 0x80034654: addu        $v1, $t3, $t8
    ctx->r3 = ADD32(ctx->r11, ctx->r24);
    // 0x80034658: addu        $t5, $v1, $t1
    ctx->r13 = ADD32(ctx->r3, ctx->r9);
    // 0x8003465C: sb          $t4, 0x1302($t5)
    MEM_B(0X1302, ctx->r13) = ctx->r12;
    // 0x80034660: lb          $t6, 0x3F($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X3F);
    // 0x80034664: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80034668: sll         $t9, $t6, 4
    ctx->r25 = S32(ctx->r14 << 4);
    // 0x8003466C: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80034670: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80034674: addu        $a0, $v1, $t9
    ctx->r4 = ADD32(ctx->r3, ctx->r25);
    // 0x80034678: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003467C:
    // 0x8003467C: multu       $v0, $a1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80034680: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80034684: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x80034688: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8003468C: mflo        $v1
    ctx->r3 = lo;
    // 0x80034690: addu        $t8, $t0, $v1
    ctx->r24 = ADD32(ctx->r8, ctx->r3);
    // 0x80034694: lwl         $at, 0x1304($t8)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r24, 0X1304);
    // 0x80034698: lwr         $at, 0x1307($t8)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r24, 0X1307);
    // 0x8003469C: addu        $t7, $a0, $v1
    ctx->r15 = ADD32(ctx->r4, ctx->r3);
    // 0x800346A0: swl         $at, 0x1304($t7)
    do_swl(rdram, 0X1304, ctx->r15, ctx->r1);
    // 0x800346A4: swr         $at, 0x1307($t7)
    do_swr(rdram, 0X1307, ctx->r15, ctx->r1);
    // 0x800346A8: lhu         $at, 0x1308($t8)
    ctx->r1 = MEM_HU(ctx->r24, 0X1308);
    // 0x800346AC: nop

    // 0x800346B0: sh          $at, 0x1308($t7)
    MEM_H(0X1308, ctx->r15) = ctx->r1;
    // 0x800346B4: slti        $at, $t6, 0xB
    ctx->r1 = SIGNED(ctx->r14) < 0XB ? 1 : 0;
    // 0x800346B8: bne         $at, $zero, L_8003467C
    if (ctx->r1 != 0) {
        // 0x800346BC: nop
    
            goto L_8003467C;
    }
    // 0x800346BC: nop

    // 0x800346C0: sll         $t4, $a2, 4
    ctx->r12 = S32(ctx->r6 << 4);
    // 0x800346C4: subu        $t4, $t4, $a2
    ctx->r12 = SUB32(ctx->r12, ctx->r6);
    // 0x800346C8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800346CC: addu        $t4, $t4, $a2
    ctx->r12 = ADD32(ctx->r12, ctx->r6);
    // 0x800346D0: lw          $t9, 0x10($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X10);
    // 0x800346D4: sll         $t4, $t4, 8
    ctx->r12 = S32(ctx->r12 << 8);
    // 0x800346D8: addu        $t7, $t3, $t4
    ctx->r15 = ADD32(ctx->r11, ctx->r12);
    // 0x800346DC: andi        $a0, $a2, 0xFF
    ctx->r4 = ctx->r6 & 0XFF;
    // 0x800346E0: jal         0x80031B20
    // 0x800346E4: sw          $t9, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r25;
    func_80031B20(rdram, ctx);
        goto after_2;
    // 0x800346E4: sw          $t9, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r25;
    after_2:
L_800346E8:
    // 0x800346E8: jal         0x80031B20
    // 0x800346EC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_80031B20(rdram, ctx);
        goto after_3;
    // 0x800346EC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_3:
    // 0x800346F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800346F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800346F8: jr          $ra
    // 0x800346FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800346FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80034700(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034700: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80034704: sll         $t7, $a1, 24
    ctx->r15 = S32(ctx->r5 << 24);
    // 0x80034708: sll         $t9, $t6, 4
    ctx->r25 = S32(ctx->r14 << 4);
    // 0x8003470C: sra         $t8, $t7, 24
    ctx->r24 = S32(SIGNED(ctx->r15) >> 24);
    // 0x80034710: subu        $t9, $t9, $t6
    ctx->r25 = SUB32(ctx->r25, ctx->r14);
    // 0x80034714: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80034718: sll         $t2, $t8, 4
    ctx->r10 = S32(ctx->r24 << 4);
    // 0x8003471C: addu        $t2, $t2, $t8
    ctx->r10 = ADD32(ctx->r10, ctx->r24);
    // 0x80034720: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80034724: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80034728: sll         $t9, $t9, 8
    ctx->r25 = S32(ctx->r25 << 8);
    // 0x8003472C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80034730: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x80034734: addiu       $t4, $t4, 0x5350
    ctx->r12 = ADD32(ctx->r12, 0X5350);
    // 0x80034738: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x8003473C: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x80034740: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80034744: addu        $t0, $t3, $t4
    ctx->r8 = ADD32(ctx->r11, ctx->r12);
    // 0x80034748: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8003474C: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
L_80034750:
    // 0x80034750: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80034754: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80034758: addu        $t7, $a2, $v1
    ctx->r15 = ADD32(ctx->r6, ctx->r3);
    // 0x8003475C: addu        $t9, $a3, $v1
    ctx->r25 = ADD32(ctx->r7, ctx->r3);
    // 0x80034760: addu        $t3, $a1, $v0
    ctx->r11 = ADD32(ctx->r5, ctx->r2);
    // 0x80034764: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80034768: andi        $t4, $v0, 0xFF
    ctx->r12 = ctx->r2 & 0XFF;
    // 0x8003476C: slti        $at, $t4, 0xB
    ctx->r1 = SIGNED(ctx->r12) < 0XB ? 1 : 0;
    // 0x80034770: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x80034774: mflo        $t5
    ctx->r13 = lo;
    // 0x80034778: addu        $a0, $t0, $t5
    ctx->r4 = ADD32(ctx->r8, ctx->r13);
    // 0x8003477C: lh          $t6, 0x1304($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X1304);
    // 0x80034780: nop

    // 0x80034784: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x80034788: lh          $t8, 0x1306($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X1306);
    // 0x8003478C: nop

    // 0x80034790: sh          $t8, 0x0($t9)
    MEM_H(0X0, ctx->r25) = ctx->r24;
    // 0x80034794: lbu         $t2, 0x1308($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X1308);
    // 0x80034798: bne         $at, $zero, L_80034750
    if (ctx->r1 != 0) {
        // 0x8003479C: sb          $t2, 0x0($t3)
        MEM_B(0X0, ctx->r11) = ctx->r10;
            goto L_80034750;
    }
    // 0x8003479C: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
    // 0x800347A0: jr          $ra
    // 0x800347A4: nop

    return;
    // 0x800347A4: nop

;}
RECOMP_FUNC void func_800347A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800347A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800347AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800347B0: andi        $s0, $a0, 0xFF
    ctx->r16 = ctx->r4 & 0XFF;
    // 0x800347B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800347B8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800347BC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800347C0: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x800347C4: jal         0x80031D60
    // 0x800347C8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_80031D60(rdram, ctx);
        goto after_0;
    // 0x800347C8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x800347CC: sll         $t6, $s0, 4
    ctx->r14 = S32(ctx->r16 << 4);
    // 0x800347D0: subu        $t6, $t6, $s0
    ctx->r14 = SUB32(ctx->r14, ctx->r16);
    // 0x800347D4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800347D8: addu        $t6, $t6, $s0
    ctx->r14 = ADD32(ctx->r14, ctx->r16);
    // 0x800347DC: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800347E0: addiu       $t7, $t7, 0x5350
    ctx->r15 = ADD32(ctx->r15, 0X5350);
    // 0x800347E4: sll         $t6, $t6, 8
    ctx->r14 = S32(ctx->r14 << 8);
    // 0x800347E8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800347EC: lw          $t9, 0x10($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X10);
    // 0x800347F0: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x800347F4: bne         $v0, $t9, L_8003487C
    if (ctx->r2 != ctx->r25) {
        // 0x800347F8: andi        $a0, $s0, 0xFF
        ctx->r4 = ctx->r16 & 0XFF;
            goto L_8003487C;
    }
    // 0x800347F8: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x800347FC: lb          $t1, 0x27($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X27);
    // 0x80034800: sll         $t0, $s0, 4
    ctx->r8 = S32(ctx->r16 << 4);
    // 0x80034804: subu        $t0, $t0, $s0
    ctx->r8 = SUB32(ctx->r8, ctx->r16);
    // 0x80034808: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8003480C: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x80034810: addu        $t0, $t0, $s0
    ctx->r8 = ADD32(ctx->r8, ctx->r16);
    // 0x80034814: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80034818: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8003481C: sll         $t0, $t0, 8
    ctx->r8 = S32(ctx->r8 << 8);
    // 0x80034820: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x80034824: addu        $a1, $t3, $t7
    ctx->r5 = ADD32(ctx->r11, ctx->r15);
    // 0x80034828: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8003482C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
L_80034830:
    // 0x80034830: multu       $v1, $a0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80034834: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80034838: andi        $t9, $v1, 0xFF
    ctx->r25 = ctx->r3 & 0XFF;
    // 0x8003483C: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
    // 0x80034840: mflo        $v0
    ctx->r2 = lo;
    // 0x80034844: addu        $t5, $a1, $v0
    ctx->r13 = ADD32(ctx->r5, ctx->r2);
    // 0x80034848: lwl         $at, 0x1304($t5)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r13, 0X1304);
    // 0x8003484C: lwr         $at, 0x1307($t5)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r13, 0X1307);
    // 0x80034850: addu        $t4, $a2, $v0
    ctx->r12 = ADD32(ctx->r6, ctx->r2);
    // 0x80034854: swl         $at, 0x0($t4)
    do_swl(rdram, 0X0, ctx->r12, ctx->r1);
    // 0x80034858: swr         $at, 0x3($t4)
    do_swr(rdram, 0X3, ctx->r12, ctx->r1);
    // 0x8003485C: lhu         $at, 0x1308($t5)
    ctx->r1 = MEM_HU(ctx->r13, 0X1308);
    // 0x80034860: nop

    // 0x80034864: sh          $at, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r1;
    // 0x80034868: slti        $at, $t9, 0xB
    ctx->r1 = SIGNED(ctx->r25) < 0XB ? 1 : 0;
    // 0x8003486C: bne         $at, $zero, L_80034830
    if (ctx->r1 != 0) {
        // 0x80034870: nop
    
            goto L_80034830;
    }
    // 0x80034870: nop

    // 0x80034874: b           L_800348B0
    // 0x80034878: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800348B0;
    // 0x80034878: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003487C:
    // 0x8003487C: jal         0x80034EE0
    // 0x80034880: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_80034EE0(rdram, ctx);
        goto after_1;
    // 0x80034880: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_1:
    // 0x80034884: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80034888: beq         $v0, $zero, L_800348A0
    if (ctx->r2 == 0) {
        // 0x8003488C: andi        $a0, $s0, 0xFF
        ctx->r4 = ctx->r16 & 0XFF;
            goto L_800348A0;
    }
    // 0x8003488C: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x80034890: jal         0x800343D0
    // 0x80034894: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_800343D0(rdram, ctx);
        goto after_2;
    // 0x80034894: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_2:
    // 0x80034898: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8003489C: nop

L_800348A0:
    // 0x800348A0: lb          $a1, 0x27($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X27);
    // 0x800348A4: jal         0x800347A8
    // 0x800348A8: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    func_800347A8(rdram, ctx);
        goto after_3;
    // 0x800348A8: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    after_3:
    // 0x800348AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800348B0:
    // 0x800348B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800348B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800348B8: jr          $ra
    // 0x800348BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800348BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800348C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800348C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800348C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800348C8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800348CC: addiu       $a0, $a0, -0x3070
    ctx->r4 = ADD32(ctx->r4, -0X3070);
    // 0x800348D0: jal         0x800218E0
    // 0x800348D4: addiu       $a1, $zero, 0x284
    ctx->r5 = ADD32(0, 0X284);
    func_800218E0(rdram, ctx);
        goto after_0;
    // 0x800348D4: addiu       $a1, $zero, 0x284
    ctx->r5 = ADD32(0, 0X284);
    after_0:
    // 0x800348D8: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x800348DC: addiu       $a0, $a0, 0x5350
    ctx->r4 = ADD32(ctx->r4, 0X5350);
    // 0x800348E0: jal         0x800218E0
    // 0x800348E4: addiu       $a1, $zero, 0x3D00
    ctx->r5 = ADD32(0, 0X3D00);
    func_800218E0(rdram, ctx);
        goto after_1;
    // 0x800348E4: addiu       $a1, $zero, 0x3D00
    ctx->r5 = ADD32(0, 0X3D00);
    after_1:
    // 0x800348E8: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x800348EC: addiu       $a0, $a0, -0x6FB0
    ctx->r4 = ADD32(ctx->r4, -0X6FB0);
    // 0x800348F0: jal         0x800218E0
    // 0x800348F4: addiu       $a1, $zero, 0x3D00
    ctx->r5 = ADD32(0, 0X3D00);
    func_800218E0(rdram, ctx);
        goto after_2;
    // 0x800348F4: addiu       $a1, $zero, 0x3D00
    ctx->r5 = ADD32(0, 0X3D00);
    after_2:
    // 0x800348F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800348FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80034900: jr          $ra
    // 0x80034904: nop

    return;
    // 0x80034904: nop

;}
RECOMP_FUNC void func_80034908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034908: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003490C: andi        $a1, $a0, 0xFF
    ctx->r5 = ctx->r4 & 0XFF;
    // 0x80034910: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80034914: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80034918: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x8003491C: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x80034920: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034924: lb          $a0, -0x306F($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X306F);
    // 0x80034928: jal         0x80034940
    // 0x8003492C: nop

    func_80034940(rdram, ctx);
        goto after_0;
    // 0x8003492C: nop

    after_0:
    // 0x80034930: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034934: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80034938: jr          $ra
    // 0x8003493C: nop

    return;
    // 0x8003493C: nop

;}
RECOMP_FUNC void func_80034940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034940: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80034944: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80034948: sll         $s1, $a0, 24
    ctx->r17 = S32(ctx->r4 << 24);
    // 0x8003494C: sra         $t6, $s1, 24
    ctx->r14 = S32(SIGNED(ctx->r17) >> 24);
    // 0x80034950: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80034954: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x80034958: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003495C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80034960: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80034964: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
L_80034968:
    // 0x80034968: sra         $t7, $a0, 24
    ctx->r15 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8003496C: jal         0x800349BC
    // 0x80034970: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_800349BC(rdram, ctx);
        goto after_0;
    // 0x80034970: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_0:
    // 0x80034974: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80034978: sra         $t8, $v1, 16
    ctx->r24 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8003497C: bne         $v0, $zero, L_8003498C
    if (ctx->r2 != 0) {
        // 0x80034980: or          $v1, $t8, $zero
        ctx->r3 = ctx->r24 | 0;
            goto L_8003498C;
    }
    // 0x80034980: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x80034984: b           L_800349A8
    // 0x80034988: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800349A8;
    // 0x80034988: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8003498C:
    // 0x8003498C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80034990: sll         $t9, $s0, 16
    ctx->r25 = S32(ctx->r16 << 16);
    // 0x80034994: sra         $s0, $t9, 16
    ctx->r16 = S32(SIGNED(ctx->r25) >> 16);
    // 0x80034998: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x8003499C: bne         $at, $zero, L_80034968
    if (ctx->r1 != 0) {
        // 0x800349A0: sll         $a0, $s1, 24
        ctx->r4 = S32(ctx->r17 << 24);
            goto L_80034968;
    }
    // 0x800349A0: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
    // 0x800349A4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800349A8:
    // 0x800349A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800349AC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800349B0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800349B4: jr          $ra
    // 0x800349B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x800349B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800349BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800349BC: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x800349C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800349C4: sll         $s0, $a0, 24
    ctx->r16 = S32(ctx->r4 << 24);
    // 0x800349C8: sra         $t6, $s0, 24
    ctx->r14 = S32(SIGNED(ctx->r16) >> 24);
    // 0x800349CC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x800349D0: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x800349D4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800349D8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x800349DC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x800349E0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x800349E4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800349E8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800349EC: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x800349F0: bgez        $t6, L_80034A14
    if (SIGNED(ctx->r14) >= 0) {
        // 0x800349F4: or          $s6, $zero, $zero
        ctx->r22 = 0 | 0;
            goto L_80034A14;
    }
    // 0x800349F4: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x800349F8: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x800349FC: addiu       $s3, $s3, -0x3070
    ctx->r19 = ADD32(ctx->r19, -0X3070);
    // 0x80034A00: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x80034A04: sw          $s4, 0x38($s3)
    MEM_W(0X38, ctx->r19) = ctx->r20;
    // 0x80034A08: sw          $s4, 0x34($s3)
    MEM_W(0X34, ctx->r19) = ctx->r20;
    // 0x80034A0C: b           L_80034B74
    // 0x80034A10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80034B74;
    // 0x80034A10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80034A14:
    // 0x80034A14: lui         $s3, 0x8012
    ctx->r19 = S32(0X8012 << 16);
    // 0x80034A18: addiu       $s3, $s3, -0x3070
    ctx->r19 = ADD32(ctx->r19, -0X3070);
    // 0x80034A1C: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x80034A20: andi        $s5, $s0, 0xFF
    ctx->r21 = ctx->r16 & 0XFF;
    // 0x80034A24: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80034A28: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80034A2C: sw          $s4, 0x28($s3)
    MEM_W(0X28, ctx->r19) = ctx->r20;
    // 0x80034A30: sw          $s4, 0x2C($s3)
    MEM_W(0X2C, ctx->r19) = ctx->r20;
    // 0x80034A34: addiu       $a2, $a2, -0x3044
    ctx->r6 = ADD32(ctx->r6, -0X3044);
    // 0x80034A38: addiu       $a1, $a1, -0x3048
    ctx->r5 = ADD32(ctx->r5, -0X3048);
    // 0x80034A3C: jal         0x80022030
    // 0x80034A40: andi        $a0, $s5, 0xFF
    ctx->r4 = ctx->r21 & 0XFF;
    func_80022030(rdram, ctx);
        goto after_0;
    // 0x80034A40: andi        $a0, $s5, 0xFF
    ctx->r4 = ctx->r21 & 0XFF;
    after_0:
    // 0x80034A44: sll         $t8, $s0, 2
    ctx->r24 = S32(ctx->r16 << 2);
    // 0x80034A48: addu        $v1, $s3, $t8
    ctx->r3 = ADD32(ctx->r19, ctx->r24);
    // 0x80034A4C: beq         $v0, $zero, L_80034A80
    if (ctx->r2 == 0) {
        // 0x80034A50: sw          $v0, 0x34($v1)
        MEM_W(0X34, ctx->r3) = ctx->r2;
            goto L_80034A80;
    }
    // 0x80034A50: sw          $v0, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r2;
    // 0x80034A54: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80034A58: beq         $v0, $at, L_80034A70
    if (ctx->r2 == ctx->r1) {
        // 0x80034A5C: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_80034A70;
    }
    // 0x80034A5C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80034A60: bne         $v0, $at, L_80034A78
    if (ctx->r2 != ctx->r1) {
        // 0x80034A64: nop
    
            goto L_80034A78;
    }
    // 0x80034A64: nop

    // 0x80034A68: b           L_80034A94
    // 0x80034A6C: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
        goto L_80034A94;
    // 0x80034A6C: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
L_80034A70:
    // 0x80034A70: b           L_80034A94
    // 0x80034A74: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
        goto L_80034A94;
    // 0x80034A74: addiu       $s6, $zero, 0x3
    ctx->r22 = ADD32(0, 0X3);
L_80034A78:
    // 0x80034A78: b           L_80034A94
    // 0x80034A7C: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
        goto L_80034A94;
    // 0x80034A7C: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
L_80034A80:
    // 0x80034A80: lw          $t9, 0x2C($s3)
    ctx->r25 = MEM_W(ctx->r19, 0X2C);
    // 0x80034A84: nop

    // 0x80034A88: bne         $t9, $zero, L_80034A98
    if (ctx->r25 != 0) {
        // 0x80034A8C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80034A98;
    }
    // 0x80034A8C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80034A90: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
L_80034A94:
    // 0x80034A94: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80034A98:
    // 0x80034A98: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
L_80034A9C:
    // 0x80034A9C: sll         $t0, $s0, 5
    ctx->r8 = S32(ctx->r16 << 5);
    // 0x80034AA0: addu        $s1, $s3, $t0
    ctx->r17 = ADD32(ctx->r19, ctx->r8);
    // 0x80034AA4: addiu       $a2, $s1, 0x84
    ctx->r6 = ADD32(ctx->r17, 0X84);
    // 0x80034AA8: andi        $a0, $s5, 0xFF
    ctx->r4 = ctx->r21 & 0XFF;
    // 0x80034AAC: jal         0x80021FCC
    // 0x80034AB0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80021FCC(rdram, ctx);
        goto after_1;
    // 0x80034AB0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80034AB4: sll         $t1, $s0, 2
    ctx->r9 = S32(ctx->r16 << 2);
    // 0x80034AB8: addu        $t2, $s3, $t1
    ctx->r10 = ADD32(ctx->r19, ctx->r9);
    // 0x80034ABC: beq         $v0, $zero, L_80034AC8
    if (ctx->r2 == 0) {
        // 0x80034AC0: sw          $v0, 0x44($t2)
        MEM_W(0X44, ctx->r10) = ctx->r2;
            goto L_80034AC8;
    }
    // 0x80034AC0: sw          $v0, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->r2;
    // 0x80034AC4: sw          $s2, 0x84($s1)
    MEM_W(0X84, ctx->r17) = ctx->r18;
L_80034AC8:
    // 0x80034AC8: sll         $t3, $s0, 1
    ctx->r11 = S32(ctx->r16 << 1);
    // 0x80034ACC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80034AD0: sll         $t5, $s0, 16
    ctx->r13 = S32(ctx->r16 << 16);
    // 0x80034AD4: sra         $s0, $t5, 16
    ctx->r16 = S32(SIGNED(ctx->r13) >> 16);
    // 0x80034AD8: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x80034ADC: addu        $t4, $s3, $t3
    ctx->r12 = ADD32(ctx->r19, ctx->r11);
    // 0x80034AE0: bne         $at, $zero, L_80034A9C
    if (ctx->r1 != 0) {
        // 0x80034AE4: sh          $s4, 0x8($t4)
        MEM_H(0X8, ctx->r12) = ctx->r20;
            goto L_80034A9C;
    }
    // 0x80034AE4: sh          $s4, 0x8($t4)
    MEM_H(0X8, ctx->r12) = ctx->r20;
    // 0x80034AE8: lui         $s1, 0x800A
    ctx->r17 = S32(0X800A << 16);
    // 0x80034AEC: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80034AF0: addiu       $s1, $s1, 0x79F0
    ctx->r17 = ADD32(ctx->r17, 0X79F0);
    // 0x80034AF4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80034AF8: addiu       $s4, $sp, 0x44
    ctx->r20 = ADD32(ctx->r29, 0X44);
L_80034AFC:
    // 0x80034AFC: bne         $s0, $zero, L_80034B0C
    if (ctx->r16 != 0) {
        // 0x80034B00: andi        $a0, $s5, 0xFF
        ctx->r4 = ctx->r21 & 0XFF;
            goto L_80034B0C;
    }
    // 0x80034B00: andi        $a0, $s5, 0xFF
    ctx->r4 = ctx->r21 & 0XFF;
    // 0x80034B04: b           L_80034B14
    // 0x80034B08: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
        goto L_80034B14;
    // 0x80034B08: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_80034B0C:
    // 0x80034B0C: addiu       $t7, $s0, 0x19
    ctx->r15 = ADD32(ctx->r16, 0X19);
    // 0x80034B10: sb          $t7, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r15;
L_80034B14:
    // 0x80034B14: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80034B18: jal         0x80021F3C
    // 0x80034B1C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_80021F3C(rdram, ctx);
        goto after_2;
    // 0x80034B1C: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_2:
    // 0x80034B20: bne         $v0, $zero, L_80034B40
    if (ctx->r2 != 0) {
        // 0x80034B24: sll         $t9, $s0, 1
        ctx->r25 = S32(ctx->r16 << 1);
            goto L_80034B40;
    }
    // 0x80034B24: sll         $t9, $s0, 1
    ctx->r25 = S32(ctx->r16 << 1);
    // 0x80034B28: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80034B2C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80034B30: addu        $t0, $s3, $t9
    ctx->r8 = ADD32(ctx->r19, ctx->r25);
    // 0x80034B34: sll         $t1, $s2, 16
    ctx->r9 = S32(ctx->r18 << 16);
    // 0x80034B38: sra         $s2, $t1, 16
    ctx->r18 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80034B3C: sh          $t8, 0x8($t0)
    MEM_H(0X8, ctx->r8) = ctx->r24;
L_80034B40:
    // 0x80034B40: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80034B44: sll         $t3, $s0, 16
    ctx->r11 = S32(ctx->r16 << 16);
    // 0x80034B48: sra         $s0, $t3, 16
    ctx->r16 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80034B4C: sltiu       $at, $s0, 0x2
    ctx->r1 = ctx->r16 < 0X2 ? 1 : 0;
    // 0x80034B50: bne         $at, $zero, L_80034AFC
    if (ctx->r1 != 0) {
        // 0x80034B54: nop
    
            goto L_80034AFC;
    }
    // 0x80034B54: nop

    // 0x80034B58: bne         $s6, $zero, L_80034B70
    if (ctx->r22 != 0) {
        // 0x80034B5C: sw          $s2, 0x30($s3)
        MEM_W(0X30, ctx->r19) = ctx->r18;
            goto L_80034B70;
    }
    // 0x80034B5C: sw          $s2, 0x30($s3)
    MEM_W(0X30, ctx->r19) = ctx->r18;
    // 0x80034B60: beq         $s2, $zero, L_80034B70
    if (ctx->r18 == 0) {
        // 0x80034B64: addiu       $s6, $zero, 0x1
        ctx->r22 = ADD32(0, 0X1);
            goto L_80034B70;
    }
    // 0x80034B64: addiu       $s6, $zero, 0x1
    ctx->r22 = ADD32(0, 0X1);
    // 0x80034B68: b           L_80034B70
    // 0x80034B6C: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
        goto L_80034B70;
    // 0x80034B6C: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
L_80034B70:
    // 0x80034B70: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
L_80034B74:
    // 0x80034B74: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80034B78: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80034B7C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80034B80: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80034B84: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80034B88: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80034B8C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80034B90: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80034B94: jr          $ra
    // 0x80034B98: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80034B98: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80034B9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034B9C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80034BA0: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80034BA4: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80034BA8: sll         $s2, $a1, 24
    ctx->r18 = S32(ctx->r5 << 24);
    // 0x80034BAC: sll         $s3, $a2, 24
    ctx->r19 = S32(ctx->r6 << 24);
    // 0x80034BB0: sra         $t7, $s3, 24
    ctx->r15 = S32(SIGNED(ctx->r19) >> 24);
    // 0x80034BB4: sra         $t6, $s2, 24
    ctx->r14 = S32(SIGNED(ctx->r18) >> 24);
    // 0x80034BB8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80034BBC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80034BC0: andi        $s1, $a0, 0xFF
    ctx->r17 = ctx->r4 & 0XFF;
    // 0x80034BC4: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x80034BC8: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
    // 0x80034BCC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80034BD0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80034BD4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80034BD8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80034BDC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80034BE0: sll         $a1, $s2, 24
    ctx->r5 = S32(ctx->r18 << 24);
L_80034BE4:
    // 0x80034BE4: sll         $a2, $s3, 24
    ctx->r6 = S32(ctx->r19 << 24);
    // 0x80034BE8: sra         $t9, $a2, 24
    ctx->r25 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80034BEC: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80034BF0: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80034BF4: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80034BF8: jal         0x80034C4C
    // 0x80034BFC: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_80034C4C(rdram, ctx);
        goto after_0;
    // 0x80034BFC: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_0:
    // 0x80034C00: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80034C04: bltz        $v0, L_80034C14
    if (SIGNED(ctx->r2) < 0) {
        // 0x80034C08: sra         $t0, $v1, 16
        ctx->r8 = S32(SIGNED(ctx->r3) >> 16);
            goto L_80034C14;
    }
    // 0x80034C08: sra         $t0, $v1, 16
    ctx->r8 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80034C0C: b           L_80034C30
    // 0x80034C10: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_80034C30;
    // 0x80034C10: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_80034C14:
    // 0x80034C14: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80034C18: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x80034C1C: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80034C20: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x80034C24: bne         $at, $zero, L_80034BE4
    if (ctx->r1 != 0) {
        // 0x80034C28: sll         $a1, $s2, 24
        ctx->r5 = S32(ctx->r18 << 24);
            goto L_80034BE4;
    }
    // 0x80034C28: sll         $a1, $s2, 24
    ctx->r5 = S32(ctx->r18 << 24);
    // 0x80034C2C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80034C30:
    // 0x80034C30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80034C34: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80034C38: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80034C3C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80034C40: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80034C44: jr          $ra
    // 0x80034C48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80034C48: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80034C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034C4C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80034C50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80034C54: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80034C58: lb          $t7, 0x3B($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X3B);
    // 0x80034C5C: sll         $s0, $a1, 24
    ctx->r16 = S32(ctx->r5 << 24);
    // 0x80034C60: sra         $t6, $s0, 24
    ctx->r14 = S32(SIGNED(ctx->r16) >> 24);
    // 0x80034C64: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x80034C68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80034C6C: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80034C70: bltz        $t7, L_80034C7C
    if (SIGNED(ctx->r15) < 0) {
        // 0x80034C74: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_80034C7C;
    }
    // 0x80034C74: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80034C78: bgez        $t6, L_80034C9C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80034C7C: lui         $a0, 0x8012
        ctx->r4 = S32(0X8012 << 16);
            goto L_80034C9C;
    }
L_80034C7C:
    // 0x80034C7C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80034C80: addiu       $a0, $a0, -0x3070
    ctx->r4 = ADD32(ctx->r4, -0X3070);
    // 0x80034C84: sll         $t9, $s0, 2
    ctx->r25 = S32(ctx->r16 << 2);
    // 0x80034C88: addu        $t0, $a0, $t9
    ctx->r8 = ADD32(ctx->r4, ctx->r25);
    // 0x80034C8C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80034C90: sw          $t8, 0x34($t0)
    MEM_W(0X34, ctx->r8) = ctx->r24;
    // 0x80034C94: b           L_80034D30
    // 0x80034C98: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80034D30;
    // 0x80034C98: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80034C9C:
    // 0x80034C9C: lbu         $a0, 0x33($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X33);
    // 0x80034CA0: jal         0x80031FCC
    // 0x80034CA4: nop

    func_80031FCC(rdram, ctx);
        goto after_0;
    // 0x80034CA4: nop

    after_0:
    // 0x80034CA8: lb          $v1, 0x3B($sp)
    ctx->r3 = MEM_B(ctx->r29, 0X3B);
    // 0x80034CAC: andi        $a0, $s0, 0xFF
    ctx->r4 = ctx->r16 & 0XFF;
    // 0x80034CB0: bne         $v1, $zero, L_80034CC8
    if (ctx->r3 != 0) {
        // 0x80034CB4: addiu       $a2, $zero, 0x3D00
        ctx->r6 = ADD32(0, 0X3D00);
            goto L_80034CC8;
    }
    // 0x80034CB4: addiu       $a2, $zero, 0x3D00
    ctx->r6 = ADD32(0, 0X3D00);
    // 0x80034CB8: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80034CBC: addiu       $a1, $a1, 0x79F0
    ctx->r5 = ADD32(ctx->r5, 0X79F0);
    // 0x80034CC0: b           L_80034CD8
    // 0x80034CC4: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
        goto L_80034CD8;
    // 0x80034CC4: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
L_80034CC8:
    // 0x80034CC8: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80034CCC: addiu       $a1, $a1, 0x79F0
    ctx->r5 = ADD32(ctx->r5, 0X79F0);
    // 0x80034CD0: addiu       $t1, $v1, 0x19
    ctx->r9 = ADD32(ctx->r3, 0X19);
    // 0x80034CD4: sb          $t1, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r9;
L_80034CD8:
    // 0x80034CD8: jal         0x80021E1C
    // 0x80034CDC: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    func_80021E1C(rdram, ctx);
        goto after_1;
    // 0x80034CDC: addiu       $a3, $sp, 0x2C
    ctx->r7 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x80034CE0: lb          $v1, 0x3B($sp)
    ctx->r3 = MEM_B(ctx->r29, 0X3B);
    // 0x80034CE4: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80034CE8: addiu       $a0, $a0, -0x3070
    ctx->r4 = ADD32(ctx->r4, -0X3070);
    // 0x80034CEC: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x80034CF0: addu        $t3, $a0, $t2
    ctx->r11 = ADD32(ctx->r4, ctx->r10);
    // 0x80034CF4: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x80034CF8: addu        $t5, $a0, $t4
    ctx->r13 = ADD32(ctx->r4, ctx->r12);
    // 0x80034CFC: sw          $v0, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->r2;
    // 0x80034D00: bne         $v0, $zero, L_80034D2C
    if (ctx->r2 != 0) {
        // 0x80034D04: sw          $v0, 0x34($t5)
        MEM_W(0X34, ctx->r13) = ctx->r2;
            goto L_80034D2C;
    }
    // 0x80034D04: sw          $v0, 0x34($t5)
    MEM_W(0X34, ctx->r13) = ctx->r2;
    // 0x80034D08: sll         $a1, $s0, 24
    ctx->r5 = S32(ctx->r16 << 24);
    // 0x80034D0C: sra         $t6, $a1, 24
    ctx->r14 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80034D10: lbu         $a0, 0x33($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X33);
    // 0x80034D14: lb          $a2, 0x2F($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X2F);
    // 0x80034D18: jal         0x80035228
    // 0x80034D1C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_80035228(rdram, ctx);
        goto after_2;
    // 0x80034D1C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_2:
    // 0x80034D20: lh          $v0, 0x2E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X2E);
    // 0x80034D24: b           L_80034D34
    // 0x80034D28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80034D34;
    // 0x80034D28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80034D2C:
    // 0x80034D2C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80034D30:
    // 0x80034D30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80034D34:
    // 0x80034D34: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80034D38: jr          $ra
    // 0x80034D3C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80034D3C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80034D40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034D40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034D44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80034D48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034D4C: lb          $a1, 0x1B($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X1B);
    // 0x80034D50: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80034D54: jal         0x80034B9C
    // 0x80034D58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80034B9C(rdram, ctx);
        goto after_0;
    // 0x80034D58: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80034D5C: lb          $t6, 0x1B($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X1B);
    // 0x80034D60: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80034D64: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80034D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034D6C: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x80034D70: lh          $v0, -0x303A($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X303A);
    // 0x80034D74: jr          $ra
    // 0x80034D78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80034D78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80034D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034D7C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80034D80: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80034D84: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80034D88: sll         $s1, $a0, 24
    ctx->r17 = S32(ctx->r4 << 24);
    // 0x80034D8C: sll         $s2, $a1, 24
    ctx->r18 = S32(ctx->r5 << 24);
    // 0x80034D90: sra         $t7, $s2, 24
    ctx->r15 = S32(SIGNED(ctx->r18) >> 24);
    // 0x80034D94: sra         $t6, $s1, 24
    ctx->r14 = S32(SIGNED(ctx->r17) >> 24);
    // 0x80034D98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80034D9C: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x80034DA0: or          $s2, $t7, $zero
    ctx->r18 = ctx->r15 | 0;
    // 0x80034DA4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80034DA8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80034DAC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80034DB0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80034DB4: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
L_80034DB8:
    // 0x80034DB8: sll         $a1, $s2, 24
    ctx->r5 = S32(ctx->r18 << 24);
    // 0x80034DBC: sra         $t9, $a1, 24
    ctx->r25 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80034DC0: sra         $t8, $a0, 24
    ctx->r24 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80034DC4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80034DC8: jal         0x80034E1C
    // 0x80034DCC: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_80034E1C(rdram, ctx);
        goto after_0;
    // 0x80034DCC: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_0:
    // 0x80034DD0: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80034DD4: sra         $t0, $v1, 16
    ctx->r8 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80034DD8: bne         $v0, $zero, L_80034DE8
    if (ctx->r2 != 0) {
        // 0x80034DDC: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_80034DE8;
    }
    // 0x80034DDC: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x80034DE0: b           L_80034E04
    // 0x80034DE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80034E04;
    // 0x80034DE4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80034DE8:
    // 0x80034DE8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80034DEC: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x80034DF0: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    // 0x80034DF4: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x80034DF8: bne         $at, $zero, L_80034DB8
    if (ctx->r1 != 0) {
        // 0x80034DFC: sll         $a0, $s1, 24
        ctx->r4 = S32(ctx->r17 << 24);
            goto L_80034DB8;
    }
    // 0x80034DFC: sll         $a0, $s1, 24
    ctx->r4 = S32(ctx->r17 << 24);
    // 0x80034E00: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80034E04:
    // 0x80034E04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80034E08: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80034E0C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80034E10: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80034E14: jr          $ra
    // 0x80034E18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80034E18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80034E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034E1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80034E20: sll         $a3, $a0, 24
    ctx->r7 = S32(ctx->r4 << 24);
    // 0x80034E24: sll         $a2, $a1, 24
    ctx->r6 = S32(ctx->r5 << 24);
    // 0x80034E28: sra         $t7, $a2, 24
    ctx->r15 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80034E2C: sra         $t6, $a3, 24
    ctx->r14 = S32(SIGNED(ctx->r7) >> 24);
    // 0x80034E30: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x80034E34: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80034E38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034E3C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80034E40: bltz        $t7, L_80034E4C
    if (SIGNED(ctx->r15) < 0) {
        // 0x80034E44: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_80034E4C;
    }
    // 0x80034E44: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80034E48: bgez        $t6, L_80034E6C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80034E4C: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_80034E6C;
    }
L_80034E4C:
    // 0x80034E4C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80034E50: addiu       $v1, $v1, -0x3070
    ctx->r3 = ADD32(ctx->r3, -0X3070);
    // 0x80034E54: sll         $t9, $a3, 2
    ctx->r25 = S32(ctx->r7 << 2);
    // 0x80034E58: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x80034E5C: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80034E60: sw          $t8, 0x34($t0)
    MEM_W(0X34, ctx->r8) = ctx->r24;
    // 0x80034E64: b           L_80034ED0
    // 0x80034E68: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80034ED0;
    // 0x80034E68: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80034E6C:
    // 0x80034E6C: bne         $a2, $zero, L_80034E84
    if (ctx->r6 != 0) {
        // 0x80034E70: andi        $a0, $a3, 0xFF
        ctx->r4 = ctx->r7 & 0XFF;
            goto L_80034E84;
    }
    // 0x80034E70: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    // 0x80034E74: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80034E78: addiu       $a1, $a1, 0x79F0
    ctx->r5 = ADD32(ctx->r5, 0X79F0);
    // 0x80034E7C: b           L_80034E94
    // 0x80034E80: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
        goto L_80034E94;
    // 0x80034E80: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
L_80034E84:
    // 0x80034E84: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80034E88: addiu       $a1, $a1, 0x79F0
    ctx->r5 = ADD32(ctx->r5, 0X79F0);
    // 0x80034E8C: addiu       $t1, $a2, 0x19
    ctx->r9 = ADD32(ctx->r6, 0X19);
    // 0x80034E90: sb          $t1, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r9;
L_80034E94:
    // 0x80034E94: sb          $a2, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r6;
    // 0x80034E98: jal         0x80021EB8
    // 0x80034E9C: sb          $a3, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r7;
    func_80021EB8(rdram, ctx);
        goto after_0;
    // 0x80034E9C: sb          $a3, 0x1B($sp)
    MEM_B(0X1B, ctx->r29) = ctx->r7;
    after_0:
    // 0x80034EA0: lb          $a2, 0x1F($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X1F);
    // 0x80034EA4: lb          $a3, 0x1B($sp)
    ctx->r7 = MEM_B(ctx->r29, 0X1B);
    // 0x80034EA8: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80034EAC: addiu       $v1, $v1, -0x3070
    ctx->r3 = ADD32(ctx->r3, -0X3070);
    // 0x80034EB0: sll         $t2, $a2, 2
    ctx->r10 = S32(ctx->r6 << 2);
    // 0x80034EB4: addu        $t3, $v1, $t2
    ctx->r11 = ADD32(ctx->r3, ctx->r10);
    // 0x80034EB8: sll         $t4, $a3, 2
    ctx->r12 = S32(ctx->r7 << 2);
    // 0x80034EBC: addu        $t5, $v1, $t4
    ctx->r13 = ADD32(ctx->r3, ctx->r12);
    // 0x80034EC0: sw          $v0, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->r2;
    // 0x80034EC4: sw          $v0, 0x34($t5)
    MEM_W(0X34, ctx->r13) = ctx->r2;
    // 0x80034EC8: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x80034ECC: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
L_80034ED0:
    // 0x80034ED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80034ED4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80034ED8: jr          $ra
    // 0x80034EDC: nop

    return;
    // 0x80034EDC: nop

;}
RECOMP_FUNC void func_80034EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034EE0: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x80034EE4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80034EE8: addiu       $t0, $t0, -0x3070
    ctx->r8 = ADD32(ctx->r8, -0X3070);
    // 0x80034EEC: sll         $t6, $a3, 1
    ctx->r14 = S32(ctx->r7 << 1);
    // 0x80034EF0: addu        $v0, $t0, $t6
    ctx->r2 = ADD32(ctx->r8, ctx->r14);
    // 0x80034EF4: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x80034EF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80034EFC: lh          $a1, 0x4($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X4);
    // 0x80034F00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80034F04: bgez        $v1, L_80034F24
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80034F08: sw          $a0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r4;
            goto L_80034F24;
    }
    // 0x80034F08: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80034F0C: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x80034F10: addu        $t9, $t0, $t8
    ctx->r25 = ADD32(ctx->r8, ctx->r24);
    // 0x80034F14: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80034F18: sw          $t7, 0x34($t9)
    MEM_W(0X34, ctx->r25) = ctx->r15;
    // 0x80034F1C: b           L_80034FA4
    // 0x80034F20: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80034FA4;
    // 0x80034F20: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80034F24:
    // 0x80034F24: bne         $a1, $zero, L_80034F38
    if (ctx->r5 != 0) {
        // 0x80034F28: andi        $a0, $v1, 0xFF
        ctx->r4 = ctx->r3 & 0XFF;
            goto L_80034F38;
    }
    // 0x80034F28: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x80034F2C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80034F30: b           L_80034F44
    // 0x80034F34: sb          $zero, 0x79FA($at)
    MEM_B(0X79FA, ctx->r1) = 0;
        goto L_80034F44;
    // 0x80034F34: sb          $zero, 0x79FA($at)
    MEM_B(0X79FA, ctx->r1) = 0;
L_80034F38:
    // 0x80034F38: addiu       $t1, $a1, 0x19
    ctx->r9 = ADD32(ctx->r5, 0X19);
    // 0x80034F3C: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80034F40: sb          $t1, 0x79FA($at)
    MEM_B(0X79FA, ctx->r1) = ctx->r9;
L_80034F44:
    // 0x80034F44: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80034F48: addiu       $a1, $a1, 0x79F0
    ctx->r5 = ADD32(ctx->r5, 0X79F0);
    // 0x80034F4C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x80034F50: sh          $v1, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r3;
    // 0x80034F54: jal         0x80021F3C
    // 0x80034F58: sb          $a3, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r7;
    func_80021F3C(rdram, ctx);
        goto after_0;
    // 0x80034F58: sb          $a3, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r7;
    after_0:
    // 0x80034F5C: lh          $v1, 0x24($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X24);
    // 0x80034F60: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80034F64: addiu       $t0, $t0, -0x3070
    ctx->r8 = ADD32(ctx->r8, -0X3070);
    // 0x80034F68: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x80034F6C: addu        $a0, $t0, $t2
    ctx->r4 = ADD32(ctx->r8, ctx->r10);
    // 0x80034F70: lbu         $a3, 0x2B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X2B);
    // 0x80034F74: bne         $v0, $zero, L_80034F9C
    if (ctx->r2 != 0) {
        // 0x80034F78: sw          $v0, 0x34($a0)
        MEM_W(0X34, ctx->r4) = ctx->r2;
            goto L_80034F9C;
    }
    // 0x80034F78: sw          $v0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r2;
    // 0x80034F7C: sll         $a1, $v1, 24
    ctx->r5 = S32(ctx->r3 << 24);
    // 0x80034F80: sra         $t3, $a1, 24
    ctx->r11 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80034F84: lb          $a2, 0x23($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X23);
    // 0x80034F88: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x80034F8C: jal         0x80034FB4
    // 0x80034F90: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    func_80034FB4(rdram, ctx);
        goto after_1;
    // 0x80034F90: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    after_1:
    // 0x80034F94: b           L_80034FA8
    // 0x80034F98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80034FA8;
    // 0x80034F98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80034F9C:
    // 0x80034F9C: lh          $v0, 0x36($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X36);
    // 0x80034FA0: nop

L_80034FA4:
    // 0x80034FA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80034FA8:
    // 0x80034FA8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80034FAC: jr          $ra
    // 0x80034FB0: nop

    return;
    // 0x80034FB0: nop

;}
RECOMP_FUNC void func_80034FB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034FB4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80034FB8: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80034FBC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80034FC0: sll         $s2, $a1, 24
    ctx->r18 = S32(ctx->r5 << 24);
    // 0x80034FC4: sll         $s3, $a2, 24
    ctx->r19 = S32(ctx->r6 << 24);
    // 0x80034FC8: sra         $t7, $s3, 24
    ctx->r15 = S32(SIGNED(ctx->r19) >> 24);
    // 0x80034FCC: sra         $t6, $s2, 24
    ctx->r14 = S32(SIGNED(ctx->r18) >> 24);
    // 0x80034FD0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80034FD4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80034FD8: andi        $s1, $a0, 0xFF
    ctx->r17 = ctx->r4 & 0XFF;
    // 0x80034FDC: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x80034FE0: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
    // 0x80034FE4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80034FE8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80034FEC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80034FF0: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80034FF4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80034FF8: sll         $a1, $s2, 24
    ctx->r5 = S32(ctx->r18 << 24);
L_80034FFC:
    // 0x80034FFC: sll         $a2, $s3, 24
    ctx->r6 = S32(ctx->r19 << 24);
    // 0x80035000: sra         $t9, $a2, 24
    ctx->r25 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80035004: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x80035008: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x8003500C: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80035010: jal         0x80035068
    // 0x80035014: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_80035068(rdram, ctx);
        goto after_0;
    // 0x80035014: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_0:
    // 0x80035018: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x8003501C: sra         $t0, $v1, 16
    ctx->r8 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80035020: bne         $v0, $zero, L_80035030
    if (ctx->r2 != 0) {
        // 0x80035024: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_80035030;
    }
    // 0x80035024: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x80035028: b           L_8003504C
    // 0x8003502C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8003504C;
    // 0x8003502C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80035030:
    // 0x80035030: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80035034: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x80035038: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8003503C: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x80035040: bne         $at, $zero, L_80034FFC
    if (ctx->r1 != 0) {
        // 0x80035044: sll         $a1, $s2, 24
        ctx->r5 = S32(ctx->r18 << 24);
            goto L_80034FFC;
    }
    // 0x80035044: sll         $a1, $s2, 24
    ctx->r5 = S32(ctx->r18 << 24);
    // 0x80035048: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_8003504C:
    // 0x8003504C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80035050: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80035054: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80035058: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8003505C: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80035060: jr          $ra
    // 0x80035064: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80035064: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80035068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035068: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003506C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80035070: lb          $t6, 0x3B($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X3B);
    // 0x80035074: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80035078: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8003507C: bltz        $t6, L_80035094
    if (SIGNED(ctx->r14) < 0) {
        // 0x80035080: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_80035094;
    }
    // 0x80035080: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80035084: lb          $t7, 0x37($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X37);
    // 0x80035088: nop

    // 0x8003508C: bgez        $t7, L_800350BC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80035090: lbu         $t2, 0x33($sp)
        ctx->r10 = MEM_BU(ctx->r29, 0X33);
            goto L_800350BC;
    }
    // 0x80035090: lbu         $t2, 0x33($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X33);
L_80035094:
    // 0x80035094: lb          $t9, 0x37($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X37);
    // 0x80035098: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8003509C: addiu       $a1, $a1, -0x3070
    ctx->r5 = ADD32(ctx->r5, -0X3070);
    // 0x800350A0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800350A4: addu        $t1, $a1, $t0
    ctx->r9 = ADD32(ctx->r5, ctx->r8);
    // 0x800350A8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800350AC: sw          $t8, 0x34($t1)
    MEM_W(0X34, ctx->r9) = ctx->r24;
    // 0x800350B0: b           L_80035144
    // 0x800350B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80035144;
    // 0x800350B4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800350B8: lbu         $t2, 0x33($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X33);
L_800350BC:
    // 0x800350BC: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x800350C0: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x800350C4: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800350C8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800350CC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800350D0: sll         $t3, $t3, 8
    ctx->r11 = S32(ctx->r11 << 8);
    // 0x800350D4: addiu       $t4, $t4, 0x5350
    ctx->r12 = ADD32(ctx->r12, 0X5350);
    // 0x800350D8: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800350DC: lbu         $a0, 0x37($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X37);
    // 0x800350E0: lb          $a1, 0x3B($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X3B);
    // 0x800350E4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800350E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800350EC: jal         0x80022120
    // 0x800350F0: addiu       $a3, $zero, 0x3D00
    ctx->r7 = ADD32(0, 0X3D00);
    func_80022120(rdram, ctx);
        goto after_0;
    // 0x800350F0: addiu       $a3, $zero, 0x3D00
    ctx->r7 = ADD32(0, 0X3D00);
    after_0:
    // 0x800350F4: lb          $t6, 0x3B($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X3B);
    // 0x800350F8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800350FC: addiu       $a1, $a1, -0x3070
    ctx->r5 = ADD32(ctx->r5, -0X3070);
    // 0x80035100: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80035104: addu        $t9, $a1, $t7
    ctx->r25 = ADD32(ctx->r5, ctx->r15);
    // 0x80035108: sw          $v0, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->r2;
    // 0x8003510C: lb          $t0, 0x37($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X37);
    // 0x80035110: lbu         $a0, 0x33($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X33);
    // 0x80035114: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x80035118: addu        $v1, $a1, $t8
    ctx->r3 = ADD32(ctx->r5, ctx->r24);
    // 0x8003511C: sw          $v0, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r2;
    // 0x80035120: jal         0x8003206C
    // 0x80035124: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_8003206C(rdram, ctx);
        goto after_1;
    // 0x80035124: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x80035128: lbu         $a0, 0x33($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X33);
    // 0x8003512C: jal         0x80031DAC
    // 0x80035130: nop

    func_80031DAC(rdram, ctx);
        goto after_2;
    // 0x80035130: nop

    after_2:
    // 0x80035134: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80035138: nop

    // 0x8003513C: lh          $v0, 0x36($t1)
    ctx->r2 = MEM_H(ctx->r9, 0X36);
    // 0x80035140: nop

L_80035144:
    // 0x80035144: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80035148: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8003514C: jr          $ra
    // 0x80035150: nop

    return;
    // 0x80035150: nop

;}
RECOMP_FUNC void func_80035154(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035154: andi        $a3, $a0, 0xFF
    ctx->r7 = ctx->r4 & 0XFF;
    // 0x80035158: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8003515C: addiu       $t0, $t0, -0x3070
    ctx->r8 = ADD32(ctx->r8, -0X3070);
    // 0x80035160: sll         $t6, $a3, 1
    ctx->r14 = S32(ctx->r7 << 1);
    // 0x80035164: addu        $v0, $t0, $t6
    ctx->r2 = ADD32(ctx->r8, ctx->r14);
    // 0x80035168: lh          $v1, 0x0($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X0);
    // 0x8003516C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80035170: lh          $a1, 0x4($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X4);
    // 0x80035174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035178: bgez        $v1, L_80035198
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8003517C: sw          $a0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r4;
            goto L_80035198;
    }
    // 0x8003517C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80035180: sll         $t8, $v1, 2
    ctx->r24 = S32(ctx->r3 << 2);
    // 0x80035184: addu        $t9, $t0, $t8
    ctx->r25 = ADD32(ctx->r8, ctx->r24);
    // 0x80035188: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8003518C: sw          $t7, 0x34($t9)
    MEM_W(0X34, ctx->r25) = ctx->r15;
    // 0x80035190: b           L_80035218
    // 0x80035194: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80035218;
    // 0x80035194: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80035198:
    // 0x80035198: bne         $a1, $zero, L_800351AC
    if (ctx->r5 != 0) {
        // 0x8003519C: andi        $a0, $v1, 0xFF
        ctx->r4 = ctx->r3 & 0XFF;
            goto L_800351AC;
    }
    // 0x8003519C: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x800351A0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800351A4: b           L_800351B8
    // 0x800351A8: sb          $zero, 0x79FA($at)
    MEM_B(0X79FA, ctx->r1) = 0;
        goto L_800351B8;
    // 0x800351A8: sb          $zero, 0x79FA($at)
    MEM_B(0X79FA, ctx->r1) = 0;
L_800351AC:
    // 0x800351AC: addiu       $t1, $a1, 0x19
    ctx->r9 = ADD32(ctx->r5, 0X19);
    // 0x800351B0: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x800351B4: sb          $t1, 0x79FA($at)
    MEM_B(0X79FA, ctx->r1) = ctx->r9;
L_800351B8:
    // 0x800351B8: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x800351BC: addiu       $a1, $a1, 0x79F0
    ctx->r5 = ADD32(ctx->r5, 0X79F0);
    // 0x800351C0: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x800351C4: sh          $v1, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r3;
    // 0x800351C8: jal         0x80021F3C
    // 0x800351CC: sb          $a3, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r7;
    func_80021F3C(rdram, ctx);
        goto after_0;
    // 0x800351CC: sb          $a3, 0x2B($sp)
    MEM_B(0X2B, ctx->r29) = ctx->r7;
    after_0:
    // 0x800351D0: lh          $v1, 0x24($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X24);
    // 0x800351D4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800351D8: addiu       $t0, $t0, -0x3070
    ctx->r8 = ADD32(ctx->r8, -0X3070);
    // 0x800351DC: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x800351E0: addu        $a0, $t0, $t2
    ctx->r4 = ADD32(ctx->r8, ctx->r10);
    // 0x800351E4: lbu         $a3, 0x2B($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X2B);
    // 0x800351E8: bne         $v0, $zero, L_80035210
    if (ctx->r2 != 0) {
        // 0x800351EC: sw          $v0, 0x34($a0)
        MEM_W(0X34, ctx->r4) = ctx->r2;
            goto L_80035210;
    }
    // 0x800351EC: sw          $v0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r2;
    // 0x800351F0: sll         $a1, $v1, 24
    ctx->r5 = S32(ctx->r3 << 24);
    // 0x800351F4: sra         $t3, $a1, 24
    ctx->r11 = S32(SIGNED(ctx->r5) >> 24);
    // 0x800351F8: lb          $a2, 0x23($sp)
    ctx->r6 = MEM_B(ctx->r29, 0X23);
    // 0x800351FC: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    // 0x80035200: jal         0x80035228
    // 0x80035204: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    func_80035228(rdram, ctx);
        goto after_1;
    // 0x80035204: andi        $a0, $a3, 0xFF
    ctx->r4 = ctx->r7 & 0XFF;
    after_1:
    // 0x80035208: b           L_8003521C
    // 0x8003520C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8003521C;
    // 0x8003520C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80035210:
    // 0x80035210: lh          $v0, 0x36($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X36);
    // 0x80035214: nop

L_80035218:
    // 0x80035218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003521C:
    // 0x8003521C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80035220: jr          $ra
    // 0x80035224: nop

    return;
    // 0x80035224: nop

;}
RECOMP_FUNC void func_80035228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035228: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8003522C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80035230: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80035234: sll         $s2, $a1, 24
    ctx->r18 = S32(ctx->r5 << 24);
    // 0x80035238: sll         $s3, $a2, 24
    ctx->r19 = S32(ctx->r6 << 24);
    // 0x8003523C: sra         $t7, $s3, 24
    ctx->r15 = S32(SIGNED(ctx->r19) >> 24);
    // 0x80035240: sra         $t6, $s2, 24
    ctx->r14 = S32(SIGNED(ctx->r18) >> 24);
    // 0x80035244: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80035248: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003524C: andi        $s1, $a0, 0xFF
    ctx->r17 = ctx->r4 & 0XFF;
    // 0x80035250: or          $s2, $t6, $zero
    ctx->r18 = ctx->r14 | 0;
    // 0x80035254: or          $s3, $t7, $zero
    ctx->r19 = ctx->r15 | 0;
    // 0x80035258: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003525C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80035260: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80035264: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80035268: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003526C: sll         $a1, $s2, 24
    ctx->r5 = S32(ctx->r18 << 24);
L_80035270:
    // 0x80035270: sll         $a2, $s3, 24
    ctx->r6 = S32(ctx->r19 << 24);
    // 0x80035274: sra         $t9, $a2, 24
    ctx->r25 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80035278: sra         $t8, $a1, 24
    ctx->r24 = S32(SIGNED(ctx->r5) >> 24);
    // 0x8003527C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80035280: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80035284: jal         0x800352DC
    // 0x80035288: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    func_800352DC(rdram, ctx);
        goto after_0;
    // 0x80035288: andi        $a0, $s1, 0xFF
    ctx->r4 = ctx->r17 & 0XFF;
    after_0:
    // 0x8003528C: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80035290: sra         $t0, $v1, 16
    ctx->r8 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80035294: bne         $v0, $zero, L_800352A4
    if (ctx->r2 != 0) {
        // 0x80035298: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_800352A4;
    }
    // 0x80035298: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x8003529C: b           L_800352C0
    // 0x800352A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800352C0;
    // 0x800352A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_800352A4:
    // 0x800352A4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800352A8: sll         $t1, $s0, 16
    ctx->r9 = S32(ctx->r16 << 16);
    // 0x800352AC: sra         $s0, $t1, 16
    ctx->r16 = S32(SIGNED(ctx->r9) >> 16);
    // 0x800352B0: slti        $at, $s0, 0x3
    ctx->r1 = SIGNED(ctx->r16) < 0X3 ? 1 : 0;
    // 0x800352B4: bne         $at, $zero, L_80035270
    if (ctx->r1 != 0) {
        // 0x800352B8: sll         $a1, $s2, 24
        ctx->r5 = S32(ctx->r18 << 24);
            goto L_80035270;
    }
    // 0x800352B8: sll         $a1, $s2, 24
    ctx->r5 = S32(ctx->r18 << 24);
    // 0x800352BC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_800352C0:
    // 0x800352C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800352C4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800352C8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800352CC: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800352D0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800352D4: jr          $ra
    // 0x800352D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800352D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800352DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800352DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800352E0: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800352E4: lb          $t8, 0x2B($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X2B);
    // 0x800352E8: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x800352EC: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x800352F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800352F4: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x800352F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800352FC: bltz        $t8, L_80035308
    if (SIGNED(ctx->r24) < 0) {
        // 0x80035300: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_80035308;
    }
    // 0x80035300: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80035304: bgez        $t7, L_80035328
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80035308: lui         $v1, 0x8012
        ctx->r3 = S32(0X8012 << 16);
            goto L_80035328;
    }
L_80035308:
    // 0x80035308: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8003530C: addiu       $v1, $v1, -0x3070
    ctx->r3 = ADD32(ctx->r3, -0X3070);
    // 0x80035310: sll         $t0, $a1, 2
    ctx->r8 = S32(ctx->r5 << 2);
    // 0x80035314: addu        $t1, $v1, $t0
    ctx->r9 = ADD32(ctx->r3, ctx->r8);
    // 0x80035318: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8003531C: sw          $t9, 0x34($t1)
    MEM_W(0X34, ctx->r9) = ctx->r25;
    // 0x80035320: b           L_800353A0
    // 0x80035324: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800353A0;
    // 0x80035324: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80035328:
    // 0x80035328: lbu         $a0, 0x23($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X23);
    // 0x8003532C: jal         0x80031DAC
    // 0x80035330: sb          $a1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r5;
    func_80031DAC(rdram, ctx);
        goto after_0;
    // 0x80035330: sb          $a1, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r5;
    after_0:
    // 0x80035334: lbu         $t2, 0x23($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X23);
    // 0x80035338: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x8003533C: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x80035340: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80035344: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80035348: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8003534C: sll         $t3, $t3, 8
    ctx->r11 = S32(ctx->r11 << 8);
    // 0x80035350: addiu       $t4, $t4, 0x5350
    ctx->r12 = ADD32(ctx->r12, 0X5350);
    // 0x80035354: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80035358: lbu         $a0, 0x27($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X27);
    // 0x8003535C: lb          $a1, 0x2B($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X2B);
    // 0x80035360: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80035364: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80035368: jal         0x800221A8
    // 0x8003536C: addiu       $a3, $zero, 0x3D00
    ctx->r7 = ADD32(0, 0X3D00);
    func_800221A8(rdram, ctx);
        goto after_1;
    // 0x8003536C: addiu       $a3, $zero, 0x3D00
    ctx->r7 = ADD32(0, 0X3D00);
    after_1:
    // 0x80035370: lb          $t6, 0x2B($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X2B);
    // 0x80035374: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80035378: addiu       $v1, $v1, -0x3070
    ctx->r3 = ADD32(ctx->r3, -0X3070);
    // 0x8003537C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80035380: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x80035384: sw          $v0, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->r2;
    // 0x80035388: lb          $t0, 0x27($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X27);
    // 0x8003538C: sll         $t2, $v0, 16
    ctx->r10 = S32(ctx->r2 << 16);
    // 0x80035390: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x80035394: addu        $t1, $v1, $t9
    ctx->r9 = ADD32(ctx->r3, ctx->r25);
    // 0x80035398: sw          $v0, 0x34($t1)
    MEM_W(0X34, ctx->r9) = ctx->r2;
    // 0x8003539C: sra         $v0, $t2, 16
    ctx->r2 = S32(SIGNED(ctx->r10) >> 16);
L_800353A0:
    // 0x800353A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800353A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800353A8: jr          $ra
    // 0x800353AC: nop

    return;
    // 0x800353AC: nop

;}
RECOMP_FUNC void func_800353B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800353B0: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x800353B4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x800353B8: addiu       $a1, $a1, -0x3070
    ctx->r5 = ADD32(ctx->r5, -0X3070);
    // 0x800353BC: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x800353C0: addu        $t8, $a1, $t7
    ctx->r24 = ADD32(ctx->r5, ctx->r15);
    // 0x800353C4: lh          $v1, 0x0($t8)
    ctx->r3 = MEM_H(ctx->r24, 0X0);
    // 0x800353C8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x800353CC: bgez        $v1, L_800353DC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x800353D0: sll         $t9, $v1, 2
        ctx->r25 = S32(ctx->r3 << 2);
            goto L_800353DC;
    }
    // 0x800353D0: sll         $t9, $v1, 2
    ctx->r25 = S32(ctx->r3 << 2);
    // 0x800353D4: jr          $ra
    // 0x800353D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x800353D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_800353DC:
    // 0x800353DC: addu        $t0, $a1, $t9
    ctx->r8 = ADD32(ctx->r5, ctx->r25);
    // 0x800353E0: lh          $v0, 0x36($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X36);
    // 0x800353E4: nop

    // 0x800353E8: jr          $ra
    // 0x800353EC: nop

    return;
    // 0x800353EC: nop

;}
RECOMP_FUNC void func_800353F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800353F0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x800353F4: addiu       $v0, $v0, -0x3070
    ctx->r2 = ADD32(ctx->r2, -0X3070);
    // 0x800353F8: lh          $t6, 0x0($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X0);
    // 0x800353FC: lh          $t7, 0x2($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X2);
    // 0x80035400: nop

    // 0x80035404: xor         $v1, $t6, $t7
    ctx->r3 = ctx->r14 ^ ctx->r15;
    // 0x80035408: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8003540C: beq         $v1, $zero, L_80035428
    if (ctx->r3 == 0) {
        // 0x80035410: nop
    
            goto L_80035428;
    }
    // 0x80035410: nop

    // 0x80035414: lh          $t8, 0x4($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X4);
    // 0x80035418: lh          $t9, 0x6($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X6);
    // 0x8003541C: nop

    // 0x80035420: xor         $v1, $t8, $t9
    ctx->r3 = ctx->r24 ^ ctx->r25;
    // 0x80035424: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
L_80035428:
    // 0x80035428: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8003542C: sra         $t0, $v0, 16
    ctx->r8 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80035430: jr          $ra
    // 0x80035434: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    return;
    // 0x80035434: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
;}
RECOMP_FUNC void func_80035438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035438: sll         $t6, $a0, 16
    ctx->r14 = S32(ctx->r4 << 16);
    // 0x8003543C: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80035440: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80035444: addiu       $v1, $v1, -0x3070
    ctx->r3 = ADD32(ctx->r3, -0X3070);
    // 0x80035448: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8003544C: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x80035450: lh          $t0, 0x8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X8);
    // 0x80035454: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80035458: sll         $t1, $t0, 5
    ctx->r9 = S32(ctx->r8 << 5);
    // 0x8003545C: addu        $t2, $v1, $t1
    ctx->r10 = ADD32(ctx->r3, ctx->r9);
    // 0x80035460: lbu         $v0, 0x8E($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0X8E);
    // 0x80035464: nop

    // 0x80035468: bne         $v0, $zero, L_80035480
    if (ctx->r2 != 0) {
        // 0x8003546C: addiu       $v1, $v0, -0x19
        ctx->r3 = ADD32(ctx->r2, -0X19);
            goto L_80035480;
    }
    // 0x8003546C: addiu       $v1, $v0, -0x19
    ctx->r3 = ADD32(ctx->r2, -0X19);
    // 0x80035470: sll         $v0, $zero, 16
    ctx->r2 = S32(0 << 16);
    // 0x80035474: sra         $t3, $v0, 16
    ctx->r11 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80035478: jr          $ra
    // 0x8003547C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    return;
    // 0x8003547C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
L_80035480:
    // 0x80035480: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80035484: sra         $t3, $v0, 16
    ctx->r11 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80035488: jr          $ra
    // 0x8003548C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    return;
    // 0x8003548C: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
;}
RECOMP_FUNC void func_80035490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035490: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x80035494: sw          $a1, 0x6E00($at)
    MEM_W(0X6E00, ctx->r1) = ctx->r5;
    // 0x80035498: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8003549C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x800354A0: sw          $a0, -0x6D0($at)
    MEM_W(-0X6D0, ctx->r1) = ctx->r4;
    // 0x800354A4: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800354A8: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x800354AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800354B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800354B4: lw          $a1, 0x14($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X14);
    // 0x800354B8: jalr        $a2
    // 0x800354BC: nop

    LOOKUP_FUNC(ctx->r6)(rdram, ctx);
        goto after_0;
    // 0x800354BC: nop

    after_0:
    // 0x800354C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800354C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800354C8: jr          $ra
    // 0x800354CC: nop

    return;
    // 0x800354CC: nop

;}
RECOMP_FUNC void func_800354D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800354D0: lui         $t6, 0x800A
    ctx->r14 = S32(0X800A << 16);
    // 0x800354D4: lw          $t6, 0x6E00($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X6E00);
    // 0x800354D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800354DC: andi        $a2, $a0, 0xFFFF
    ctx->r6 = ctx->r4 & 0XFFFF;
    // 0x800354E0: sll         $t7, $a2, 2
    ctx->r15 = S32(ctx->r6 << 2);
    // 0x800354E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800354E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800354EC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800354F0: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x800354F4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800354F8: addiu       $v0, $v0, -0x750
    ctx->r2 = ADD32(ctx->r2, -0X750);
    // 0x800354FC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80035500: sw          $t9, 0x80($v0)
    MEM_W(0X80, ctx->r2) = ctx->r25;
    // 0x80035504: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x80035508: nop

    // 0x8003550C: lw          $a1, 0x14($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X14);
    // 0x80035510: jalr        $t9
    // 0x80035514: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80035514: nop

    after_0:
    // 0x80035518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003551C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80035520: jr          $ra
    // 0x80035524: nop

    return;
    // 0x80035524: nop

    // 0x80035528: nop

    // 0x8003552C: nop

;}
RECOMP_FUNC void func_80035530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035530: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035534: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035538: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8003553C: jal         0x80020A2C
    // 0x80035540: addiu       $a0, $a0, -0x6CEC
    ctx->r4 = ADD32(ctx->r4, -0X6CEC);
    func_80020A2C(rdram, ctx);
        goto after_0;
    // 0x80035540: addiu       $a0, $a0, -0x6CEC
    ctx->r4 = ADD32(ctx->r4, -0X6CEC);
    after_0:
    // 0x80035544: jal         0x8001DCF0
    // 0x80035548: nop

    func_8001DCF0(rdram, ctx);
        goto after_1;
    // 0x80035548: nop

    after_1:
    // 0x8003554C: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80035550: jal         0x8002916C
    // 0x80035554: addiu       $a0, $a0, 0x5584
    ctx->r4 = ADD32(ctx->r4, 0X5584);
    func_8002916C(rdram, ctx);
        goto after_2;
    // 0x80035554: addiu       $a0, $a0, 0x5584
    ctx->r4 = ADD32(ctx->r4, 0X5584);
    after_2:
    // 0x80035558: jal         0x80020270
    // 0x8003555C: nop

    func_80020270(rdram, ctx);
        goto after_3;
    // 0x8003555C: nop

    after_3:
    // 0x80035560: lui         $a0, 0x803B
    ctx->r4 = S32(0X803B << 16);
    // 0x80035564: jal         0x80035FF0
    // 0x80035568: addiu       $a0, $a0, 0x5160
    ctx->r4 = ADD32(ctx->r4, 0X5160);
    func_80035FF0(rdram, ctx);
        goto after_4;
    // 0x80035568: addiu       $a0, $a0, 0x5160
    ctx->r4 = ADD32(ctx->r4, 0X5160);
    after_4:
    // 0x8003556C: jal         0x8000E300
    // 0x80035570: nop

    func_8000E300(rdram, ctx);
        goto after_5;
    // 0x80035570: nop

    after_5:
    // 0x80035574: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80035578: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003557C: jr          $ra
    // 0x80035580: nop

    return;
    // 0x80035580: nop

;}
