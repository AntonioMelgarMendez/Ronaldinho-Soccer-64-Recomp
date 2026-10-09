#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800887E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_80088A70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088A70: lui         $t6, 0xA450
    ctx->r14 = S32(0XA450 << 16);
    // 0x80088A74: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    // 0x80088A78: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80088A7C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80088A80: and         $t7, $a0, $at
    ctx->r15 = ctx->r4 & ctx->r1;
    // 0x80088A84: beq         $t7, $zero, L_80088A94
    if (ctx->r15 == 0) {
        // 0x80088A88: nop
    
            goto L_80088A94;
    }
    // 0x80088A88: nop

    // 0x80088A8C: b           L_80088A98
    // 0x80088A90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80088A98;
    // 0x80088A90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80088A94:
    // 0x80088A94: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80088A98:
    // 0x80088A98: jr          $ra
    // 0x80088A9C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80088A9C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80088AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088AA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80088AA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80088AA8: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80088AAC: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80088AB0: addiu       $a2, $a2, -0x5010
    ctx->r6 = ADD32(ctx->r6, -0X5010);
    // 0x80088AB4: addiu       $a1, $a1, -0x4FDC
    ctx->r5 = ADD32(ctx->r5, -0X4FDC);
    // 0x80088AB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80088ABC: jal         0x8008F3E0
    // 0x80088AC0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8008F3E0(rdram, ctx);
        goto after_0;
    // 0x80088AC0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_0:
    // 0x80088AC4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80088AC8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80088ACC: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x80088AD0: sw          $t6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r14;
    // 0x80088AD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80088AD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80088ADC: jr          $ra
    // 0x80088AE0: nop

    return;
    // 0x80088AE0: nop

;}
RECOMP_FUNC void func_80088AE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088AE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80088AE8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80088AEC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80088AF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80088AF4: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80088AF8: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80088AFC: addiu       $a1, $a1, -0x6CF0
    ctx->r5 = ADD32(ctx->r5, -0X6CF0);
    // 0x80088B00: addiu       $a2, $a2, -0x6D20
    ctx->r6 = ADD32(ctx->r6, -0X6D20);
    // 0x80088B04: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80088B08: jal         0x8008F3E0
    // 0x80088B0C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    func_8008F3E0(rdram, ctx);
        goto after_0;
    // 0x80088B0C: addiu       $a3, $zero, 0x7
    ctx->r7 = ADD32(0, 0X7);
    after_0:
    // 0x80088B10: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80088B14: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x80088B18: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80088B1C: sw          $t6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r14;
    // 0x80088B20: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80088B24: sw          $t7, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r15;
    // 0x80088B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80088B2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80088B30: jr          $ra
    // 0x80088B34: nop

    return;
    // 0x80088B34: nop

;}
RECOMP_FUNC void func_80088B38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088B38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80088B3C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80088B40: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80088B44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80088B48: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80088B4C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80088B50: addiu       $a1, $a1, -0x50F0
    ctx->r5 = ADD32(ctx->r5, -0X50F0);
    // 0x80088B54: addiu       $a2, $a2, -0x5120
    ctx->r6 = ADD32(ctx->r6, -0X5120);
    // 0x80088B58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80088B5C: jal         0x8008F3E0
    // 0x80088B60: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8008F3E0(rdram, ctx);
        goto after_0;
    // 0x80088B60: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80088B64: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80088B68: sw          $zero, 0x14($a0)
    MEM_W(0X14, ctx->r4) = 0;
    // 0x80088B6C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80088B70: sw          $t6, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r14;
    // 0x80088B74: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80088B78: sw          $t7, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r15;
    // 0x80088B7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80088B80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80088B84: jr          $ra
    // 0x80088B88: nop

    return;
    // 0x80088B88: nop

;}
RECOMP_FUNC void func_80088B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088B8C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80088B90: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80088B94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80088B98: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80088B9C: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80088BA0: addiu       $a2, $a2, -0x6080
    ctx->r6 = ADD32(ctx->r6, -0X6080);
    // 0x80088BA4: addiu       $a1, $a1, -0x5F94
    ctx->r5 = ADD32(ctx->r5, -0X5F94);
    // 0x80088BA8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80088BAC: jal         0x8008F3E0
    // 0x80088BB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8008F3E0(rdram, ctx);
        goto after_0;
    // 0x80088BB0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80088BB4: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x80088BB8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80088BBC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80088BC0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80088BC4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80088BC8: jal         0x80081C20
    // 0x80088BCC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80081C20(rdram, ctx);
        goto after_1;
    // 0x80088BCC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80088BD0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80088BD4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80088BD8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80088BDC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80088BE0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80088BE4: sw          $v0, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r2;
    // 0x80088BE8: sw          $t7, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r15;
    // 0x80088BEC: sw          $zero, 0x30($t0)
    MEM_W(0X30, ctx->r8) = 0;
    // 0x80088BF0: sw          $zero, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = 0;
    // 0x80088BF4: sw          $zero, 0x28($t0)
    MEM_W(0X28, ctx->r8) = 0;
    // 0x80088BF8: sw          $zero, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = 0;
    // 0x80088BFC: swc1        $f4, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f4.u32l;
    // 0x80088C00: swc1        $f6, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f6.u32l;
    // 0x80088C04: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80088C08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80088C0C: jr          $ra
    // 0x80088C10: nop

    return;
    // 0x80088C10: nop

;}
RECOMP_FUNC void func_80088C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088C14: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80088C18: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80088C1C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80088C20: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80088C24: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80088C28: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80088C2C: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80088C30: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80088C34: addiu       $a1, $a1, -0x6524
    ctx->r5 = ADD32(ctx->r5, -0X6524);
    // 0x80088C38: addiu       $a2, $a2, -0x6BD0
    ctx->r6 = ADD32(ctx->r6, -0X6BD0);
    // 0x80088C3C: jal         0x8008F3E0
    // 0x80088C40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8008F3E0(rdram, ctx);
        goto after_0;
    // 0x80088C40: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80088C44: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x80088C48: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80088C4C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80088C50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80088C54: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80088C58: jal         0x80081C20
    // 0x80088C5C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80081C20(rdram, ctx);
        goto after_1;
    // 0x80088C5C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80088C60: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80088C64: addiu       $t7, $zero, 0x20
    ctx->r15 = ADD32(0, 0X20);
    // 0x80088C68: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80088C6C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80088C70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80088C74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80088C78: jal         0x80081C20
    // 0x80088C7C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80081C20(rdram, ctx);
        goto after_2;
    // 0x80088C7C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80088C80: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80088C84: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80088C88: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80088C8C: jalr        $t9
    // 0x80088C90: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80088C90: nop

    after_3:
    // 0x80088C94: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80088C98: sw          $v0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r2;
    // 0x80088C9C: sw          $zero, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = 0;
    // 0x80088CA0: sw          $t8, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r24;
    // 0x80088CA4: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80088CA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80088CAC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80088CB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80088CB4: jr          $ra
    // 0x80088CB8: nop

    return;
    // 0x80088CB8: nop

;}
RECOMP_FUNC void func_80088CBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088CBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80088CC0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80088CC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80088CC8: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80088CCC: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80088CD0: addiu       $a2, $a2, -0x5C6C
    ctx->r6 = ADD32(ctx->r6, -0X5C6C);
    // 0x80088CD4: addiu       $a1, $a1, -0x5674
    ctx->r5 = ADD32(ctx->r5, -0X5674);
    // 0x80088CD8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80088CDC: jal         0x8008F3E0
    // 0x80088CE0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_8008F3E0(rdram, ctx);
        goto after_0;
    // 0x80088CE0: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x80088CE4: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x80088CE8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80088CEC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80088CF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80088CF4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80088CF8: jal         0x80081C20
    // 0x80088CFC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80081C20(rdram, ctx);
        goto after_1;
    // 0x80088CFC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80088D00: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80088D04: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80088D08: sw          $v0, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->r2;
    // 0x80088D0C: sw          $v1, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r3;
    // 0x80088D10: sw          $zero, 0x48($t0)
    MEM_W(0X48, ctx->r8) = 0;
    // 0x80088D14: sh          $v1, 0x1A($t0)
    MEM_H(0X1A, ctx->r8) = ctx->r3;
    // 0x80088D18: sh          $v1, 0x28($t0)
    MEM_H(0X28, ctx->r8) = ctx->r3;
    // 0x80088D1C: sh          $v1, 0x2E($t0)
    MEM_H(0X2E, ctx->r8) = ctx->r3;
    // 0x80088D20: sh          $v1, 0x1C($t0)
    MEM_H(0X1C, ctx->r8) = ctx->r3;
    // 0x80088D24: sh          $v1, 0x1E($t0)
    MEM_H(0X1E, ctx->r8) = ctx->r3;
    // 0x80088D28: sh          $zero, 0x20($t0)
    MEM_H(0X20, ctx->r8) = 0;
    // 0x80088D2C: sh          $zero, 0x22($t0)
    MEM_H(0X22, ctx->r8) = 0;
    // 0x80088D30: sh          $v1, 0x26($t0)
    MEM_H(0X26, ctx->r8) = ctx->r3;
    // 0x80088D34: sh          $zero, 0x24($t0)
    MEM_H(0X24, ctx->r8) = 0;
    // 0x80088D38: sw          $zero, 0x30($t0)
    MEM_W(0X30, ctx->r8) = 0;
    // 0x80088D3C: sw          $zero, 0x34($t0)
    MEM_W(0X34, ctx->r8) = 0;
    // 0x80088D40: sh          $zero, 0x18($t0)
    MEM_H(0X18, ctx->r8) = 0;
    // 0x80088D44: sw          $zero, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = 0;
    // 0x80088D48: sw          $zero, 0x40($t0)
    MEM_W(0X40, ctx->r8) = 0;
    // 0x80088D4C: sw          $zero, 0x44($t0)
    MEM_W(0X44, ctx->r8) = 0;
    // 0x80088D50: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80088D54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80088D58: jr          $ra
    // 0x80088D5C: nop

    return;
    // 0x80088D5C: nop

;}
RECOMP_FUNC void func_80088D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088D60: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x80088D64: addiu       $t9, $zero, 0x4000
    ctx->r25 = ADD32(0, 0X4000);
    // 0x80088D68: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80088D6C: sll         $t6, $v0, 14
    ctx->r14 = S32(ctx->r2 << 14);
    // 0x80088D70: sra         $v1, $t6, 15
    ctx->r3 = S32(SIGNED(ctx->r14) >> 15);
    // 0x80088D74: sll         $t7, $v1, 16
    ctx->r15 = S32(ctx->r3 << 16);
    // 0x80088D78: sra         $v1, $t7, 16
    ctx->r3 = S32(SIGNED(ctx->r15) >> 16);
    // 0x80088D7C: subu        $t0, $t9, $v1
    ctx->r8 = SUB32(ctx->r25, ctx->r3);
    // 0x80088D80: sh          $t0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r8;
    // 0x80088D84: sw          $t1, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r9;
    // 0x80088D88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80088D8C: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
L_80088D90:
    // 0x80088D90: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80088D94: slti        $at, $a1, 0x8
    ctx->r1 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x80088D98: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80088D9C: bne         $at, $zero, L_80088D90
    if (ctx->r1 != 0) {
        // 0x80088DA0: sh          $zero, 0x6($a2)
        MEM_H(0X6, ctx->r6) = 0;
            goto L_80088D90;
    }
    // 0x80088DA0: sh          $zero, 0x6($a2)
    MEM_H(0X6, ctx->r6) = 0;
    // 0x80088DA4: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x80088DA8: lui         $at, 0x40D0
    ctx->r1 = S32(0X40D0 << 16);
    // 0x80088DAC: mtc1        $at, $f13
    ctx->f_odd[(13 - 1) * 2] = ctx->r1;
    // 0x80088DB0: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80088DB4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80088DB8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80088DBC: slti        $at, $a1, 0x10
    ctx->r1 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x80088DC0: sh          $v1, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r3;
    // 0x80088DC4: div.d       $f2, $f6, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = DIV_D(ctx->f6.d, ctx->f12.d);
    // 0x80088DC8: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80088DCC: beq         $at, $zero, L_80088DF8
    if (ctx->r1 == 0) {
        // 0x80088DD0: mov.d       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
            goto L_80088DF8;
    }
    // 0x80088DD0: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
L_80088DD4:
    // 0x80088DD4: mul.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f2.d);
    // 0x80088DD8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80088DDC: slti        $at, $a1, 0x10
    ctx->r1 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x80088DE0: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80088DE4: mul.d       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f12.d); 
    ctx->f8.d = MUL_D(ctx->f0.d, ctx->f12.d);
    // 0x80088DE8: trunc.w.d   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x80088DEC: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x80088DF0: bne         $at, $zero, L_80088DD4
    if (ctx->r1 != 0) {
        // 0x80088DF4: sh          $t3, 0x6($a2)
        MEM_H(0X6, ctx->r6) = ctx->r11;
            goto L_80088DD4;
    }
    // 0x80088DF4: sh          $t3, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r11;
L_80088DF8:
    // 0x80088DF8: jr          $ra
    // 0x80088DFC: nop

    return;
    // 0x80088DFC: nop

;}
RECOMP_FUNC void func_80088E00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088E00: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80088E04: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x80088E08: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x80088E0C: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80088E10: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x80088E14: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x80088E18: lui         $a2, 0x8009
    ctx->r6 = S32(0X8009 << 16);
    // 0x80088E1C: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x80088E20: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x80088E24: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x80088E28: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x80088E2C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80088E30: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80088E34: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80088E38: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80088E3C: sdc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X38, ctx->r29);
    // 0x80088E40: sdc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X30, ctx->r29);
    // 0x80088E44: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x80088E48: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80088E4C: addiu       $a2, $a2, -0x30C
    ctx->r6 = ADD32(ctx->r6, -0X30C);
    // 0x80088E50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80088E54: jal         0x8008F3E0
    // 0x80088E58: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8008F3E0(rdram, ctx);
        goto after_0;
    // 0x80088E58: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80088E5C: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x80088E60: lui         $t6, 0x8009
    ctx->r14 = S32(0X8009 << 16);
    // 0x80088E64: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80088E68: addiu       $t6, $t6, -0x2F4
    ctx->r14 = ADD32(ctx->r14, -0X2F4);
    // 0x80088E6C: addiu       $t7, $t7, -0x568
    ctx->r15 = ADD32(ctx->r15, -0X568);
    // 0x80088E70: sw          $t6, 0x4($s5)
    MEM_W(0X4, ctx->r21) = ctx->r14;
    // 0x80088E74: sw          $t7, 0x28($s5)
    MEM_W(0X28, ctx->r21) = ctx->r15;
    // 0x80088E78: lbu         $t8, 0x1C($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1C);
    // 0x80088E7C: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x80088E80: addiu       $s3, $s3, 0x2808
    ctx->r19 = ADD32(ctx->r19, 0X2808);
    // 0x80088E84: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80088E88: sltiu       $at, $t9, 0x6
    ctx->r1 = ctx->r25 < 0X6 ? 1 : 0;
    // 0x80088E8C: beq         $at, $zero, L_80088EEC
    if (ctx->r1 == 0) {
        // 0x80088E90: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_80088EEC;
    }
    // 0x80088E90: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80088E94: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80088E98: addu        $at, $at, $t9
    gpr jr_addend_80088EA0 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80088E9C: lw          $t9, -0x4B40($at)
    ctx->r25 = ADD32(ctx->r1, -0X4B40);
    // 0x80088EA0: jr          $t9
    // 0x80088EA4: nop

    switch (jr_addend_80088EA0 >> 2) {
        case 0: goto L_80088EA8; break;
        case 1: goto L_80088EB4; break;
        case 2: goto L_80088ECC; break;
        case 3: goto L_80088ED8; break;
        case 4: goto L_80088EC0; break;
        case 5: goto L_80088EE4; break;
        default: switch_error(__func__, 0x80088EA0, 0x800DB4C0);
    }
    // 0x80088EA4: nop

L_80088EA8:
    // 0x80088EA8: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x80088EAC: b           L_80088EEC
    // 0x80088EB0: addiu       $s3, $s3, 0x26A0
    ctx->r19 = ADD32(ctx->r19, 0X26A0);
        goto L_80088EEC;
    // 0x80088EB0: addiu       $s3, $s3, 0x26A0
    ctx->r19 = ADD32(ctx->r19, 0X26A0);
L_80088EB4:
    // 0x80088EB4: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x80088EB8: b           L_80088EEC
    // 0x80088EBC: addiu       $s3, $s3, 0x2708
    ctx->r19 = ADD32(ctx->r19, 0X2708);
        goto L_80088EEC;
    // 0x80088EBC: addiu       $s3, $s3, 0x2708
    ctx->r19 = ADD32(ctx->r19, 0X2708);
L_80088EC0:
    // 0x80088EC0: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x80088EC4: b           L_80088EEC
    // 0x80088EC8: addiu       $s3, $s3, 0x2790
    ctx->r19 = ADD32(ctx->r19, 0X2790);
        goto L_80088EEC;
    // 0x80088EC8: addiu       $s3, $s3, 0x2790
    ctx->r19 = ADD32(ctx->r19, 0X2790);
L_80088ECC:
    // 0x80088ECC: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x80088ED0: b           L_80088EEC
    // 0x80088ED4: addiu       $s3, $s3, 0x27B8
    ctx->r19 = ADD32(ctx->r19, 0X27B8);
        goto L_80088EEC;
    // 0x80088ED4: addiu       $s3, $s3, 0x27B8
    ctx->r19 = ADD32(ctx->r19, 0X27B8);
L_80088ED8:
    // 0x80088ED8: lui         $s3, 0x800D
    ctx->r19 = S32(0X800D << 16);
    // 0x80088EDC: b           L_80088EEC
    // 0x80088EE0: addiu       $s3, $s3, 0x27E0
    ctx->r19 = ADD32(ctx->r19, 0X27E0);
        goto L_80088EEC;
    // 0x80088EE0: addiu       $s3, $s3, 0x27E0
    ctx->r19 = ADD32(ctx->r19, 0X27E0);
L_80088EE4:
    // 0x80088EE4: b           L_80088EEC
    // 0x80088EE8: lw          $s3, 0x20($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X20);
        goto L_80088EEC;
    // 0x80088EE8: lw          $s3, 0x20($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X20);
L_80088EEC:
    // 0x80088EEC: lw          $t0, 0x0($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X0);
    // 0x80088EF0: addiu       $t2, $zero, 0x28
    ctx->r10 = ADD32(0, 0X28);
    // 0x80088EF4: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x80088EF8: sb          $t0, 0x24($s5)
    MEM_B(0X24, ctx->r21) = ctx->r8;
    // 0x80088EFC: lw          $t1, 0x4($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X4);
    // 0x80088F00: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80088F04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80088F08: sw          $t1, 0x1C($s5)
    MEM_W(0X1C, ctx->r21) = ctx->r9;
    // 0x80088F0C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80088F10: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80088F14: jal         0x80081C20
    // 0x80088F18: andi        $a3, $t0, 0xFF
    ctx->r7 = ctx->r8 & 0XFF;
    func_80081C20(rdram, ctx);
        goto after_1;
    // 0x80088F18: andi        $a3, $t0, 0xFF
    ctx->r7 = ctx->r8 & 0XFF;
    after_1:
    // 0x80088F1C: sw          $v0, 0x20($s5)
    MEM_W(0X20, ctx->r21) = ctx->r2;
    // 0x80088F20: lw          $a3, 0x1C($s5)
    ctx->r7 = MEM_W(ctx->r21, 0X1C);
    // 0x80088F24: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80088F28: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80088F2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80088F30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80088F34: jal         0x80081C20
    // 0x80088F38: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    func_80081C20(rdram, ctx);
        goto after_2;
    // 0x80088F38: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    after_2:
    // 0x80088F3C: lw          $t4, 0x1C($s5)
    ctx->r12 = MEM_W(ctx->r21, 0X1C);
    // 0x80088F40: sw          $v0, 0x14($s5)
    MEM_W(0X14, ctx->r21) = ctx->r2;
    // 0x80088F44: sw          $v0, 0x18($s5)
    MEM_W(0X18, ctx->r21) = ctx->r2;
    // 0x80088F48: beq         $t4, $zero, L_80088F7C
    if (ctx->r12 == 0) {
        // 0x80088F4C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_80088F7C;
    }
    // 0x80088F4C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80088F50: lw          $t5, 0x14($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X14);
L_80088F54:
    // 0x80088F54: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x80088F58: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80088F5C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80088F60: sh          $zero, 0x0($t7)
    MEM_H(0X0, ctx->r15) = 0;
    // 0x80088F64: lw          $t9, 0x1C($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X1C);
    // 0x80088F68: andi        $t8, $v1, 0xFFFF
    ctx->r24 = ctx->r3 & 0XFFFF;
    // 0x80088F6C: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x80088F70: sltu        $at, $t8, $t9
    ctx->r1 = ctx->r24 < ctx->r25 ? 1 : 0;
    // 0x80088F74: bnel        $at, $zero, L_80088F54
    if (ctx->r1 != 0) {
        // 0x80088F78: lw          $t5, 0x14($s5)
        ctx->r13 = MEM_W(ctx->r21, 0X14);
            goto L_80088F54;
    }
    goto skip_0;
    // 0x80088F78: lw          $t5, 0x14($s5)
    ctx->r13 = MEM_W(ctx->r21, 0X14);
    skip_0:
L_80088F7C:
    // 0x80088F7C: lbu         $t0, 0x24($s5)
    ctx->r8 = MEM_BU(ctx->r21, 0X24);
    // 0x80088F80: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80088F84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80088F88: blez        $t0, L_800891FC
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80088F8C: addiu       $fp, $zero, 0x1
        ctx->r30 = ADD32(0, 0X1);
            goto L_800891FC;
    }
    // 0x80088F8C: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x80088F90: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80088F94: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x80088F98: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80088F9C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80088FA0: mtc1        $zero, $f26
    ctx->f26.u32l = 0;
    // 0x80088FA4: ldc1        $f20, -0x4B28($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, -0X4B28);
    // 0x80088FA8: addiu       $s7, $zero, 0x28
    ctx->r23 = ADD32(0, 0X28);
L_80088FAC:
    // 0x80088FAC: multu       $s4, $s7
    result = U64(U32(ctx->r20)) * U64(U32(ctx->r23)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80088FB0: sll         $t3, $s1, 2
    ctx->r11 = S32(ctx->r17 << 2);
    // 0x80088FB4: lw          $t1, 0x20($s5)
    ctx->r9 = MEM_W(ctx->r21, 0X20);
    // 0x80088FB8: addu        $t4, $s3, $t3
    ctx->r12 = ADD32(ctx->r19, ctx->r11);
    // 0x80088FBC: lw          $t5, 0x0($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X0);
    // 0x80088FC0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80088FC4: andi        $t6, $s1, 0xFFFF
    ctx->r14 = ctx->r17 & 0XFFFF;
    // 0x80088FC8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80088FCC: addu        $t8, $s3, $t7
    ctx->r24 = ADD32(ctx->r19, ctx->r15);
    // 0x80088FD0: addiu       $s1, $t6, 0x1
    ctx->r17 = ADD32(ctx->r14, 0X1);
    // 0x80088FD4: mflo        $t2
    ctx->r10 = lo;
    // 0x80088FD8: addu        $s0, $t1, $t2
    ctx->r16 = ADD32(ctx->r9, ctx->r10);
    // 0x80088FDC: sw          $t5, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r13;
    // 0x80088FE0: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x80088FE4: andi        $t0, $s1, 0xFFFF
    ctx->r8 = ctx->r17 & 0XFFFF;
    // 0x80088FE8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80088FEC: addu        $t2, $s3, $t1
    ctx->r10 = ADD32(ctx->r19, ctx->r9);
    // 0x80088FF0: sw          $t9, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r25;
    // 0x80088FF4: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x80088FF8: addiu       $s1, $t0, 0x1
    ctx->r17 = ADD32(ctx->r8, 0X1);
    // 0x80088FFC: andi        $t4, $s1, 0xFFFF
    ctx->r12 = ctx->r17 & 0XFFFF;
    // 0x80089000: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80089004: addu        $t6, $s3, $t5
    ctx->r14 = ADD32(ctx->r19, ctx->r13);
    // 0x80089008: sh          $t3, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r11;
    // 0x8008900C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80089010: addiu       $s1, $t4, 0x1
    ctx->r17 = ADD32(ctx->r12, 0X1);
    // 0x80089014: andi        $t8, $s1, 0xFFFF
    ctx->r24 = ctx->r17 & 0XFFFF;
    // 0x80089018: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8008901C: addu        $t0, $s3, $t9
    ctx->r8 = ADD32(ctx->r19, ctx->r25);
    // 0x80089020: sh          $t7, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r15;
    // 0x80089024: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80089028: addiu       $s1, $t8, 0x1
    ctx->r17 = ADD32(ctx->r24, 0X1);
    // 0x8008902C: andi        $t2, $s1, 0xFFFF
    ctx->r10 = ctx->r17 & 0XFFFF;
    // 0x80089030: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80089034: addu        $t4, $s3, $t3
    ctx->r12 = ADD32(ctx->r19, ctx->r11);
    // 0x80089038: sh          $t1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r9;
    // 0x8008903C: lw          $v0, 0x0($t4)
    ctx->r2 = MEM_W(ctx->r12, 0X0);
    // 0x80089040: or          $s1, $t2, $zero
    ctx->r17 = ctx->r10 | 0;
    // 0x80089044: or          $t0, $s1, $zero
    ctx->r8 = ctx->r17 | 0;
    // 0x80089048: beq         $v0, $zero, L_8008914C
    if (ctx->r2 == 0) {
        // 0x8008904C: addiu       $s1, $t0, 0x2
        ctx->r17 = ADD32(ctx->r8, 0X2);
            goto L_8008914C;
    }
    // 0x8008904C: addiu       $s1, $t0, 0x2
    ctx->r17 = ADD32(ctx->r8, 0X2);
    // 0x80089050: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80089054: lw          $t5, 0x6C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X6C);
    // 0x80089058: lw          $t8, 0x4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X4);
    // 0x8008905C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80089060: lw          $t6, 0x18($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X18);
    // 0x80089064: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80089068: addiu       $s1, $t2, 0x1
    ctx->r17 = ADD32(ctx->r10, 0X1);
    // 0x8008906C: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x80089070: andi        $t7, $s1, 0xFFFF
    ctx->r15 = ctx->r17 & 0XFFFF;
    // 0x80089074: div.s       $f8, $f6, $f22
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f22.fl);
    // 0x80089078: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x8008907C: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x80089080: sll         $t1, $s1, 2
    ctx->r9 = S32(ctx->r17 << 2);
    // 0x80089084: cvt.d.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.d = CVT_D_W(ctx->f16.u32l);
    // 0x80089088: addu        $t2, $s3, $t1
    ctx->r10 = ADD32(ctx->r19, ctx->r9);
    // 0x8008908C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80089090: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
    // 0x80089094: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80089098: add.d       $f10, $f0, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f10.d = ctx->f0.d + ctx->f0.d;
    // 0x8008909C: cvt.d.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.d = CVT_D_W(ctx->f8.u32l);
    // 0x800890A0: div.d       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = DIV_D(ctx->f10.d, ctx->f18.d);
    // 0x800890A4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x800890A8: bgez        $t0, L_800890C0
    if (SIGNED(ctx->r8) >= 0) {
        // 0x800890AC: swc1        $f6, 0x10($s0)
        MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
            goto L_800890C0;
    }
    // 0x800890AC: swc1        $f6, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f6.u32l;
    // 0x800890B0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x800890B4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800890B8: nop

    // 0x800890BC: add.d       $f16, $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f16.d + ctx->f10.d;
L_800890C0:
    // 0x800890C0: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x800890C4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800890C8: andi        $t4, $s1, 0xFFFF
    ctx->r12 = ctx->r17 & 0XFFFF;
    // 0x800890CC: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x800890D0: swc1        $f24, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f24.u32l;
    // 0x800890D4: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x800890D8: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800890DC: addiu       $t5, $zero, 0x34
    ctx->r13 = ADD32(0, 0X34);
    // 0x800890E0: or          $s1, $t4, $zero
    ctx->r17 = ctx->r12 | 0;
    // 0x800890E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x800890E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800890EC: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x800890F0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800890F4: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x800890F8: div.d       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f8.d = DIV_D(ctx->f6.d, ctx->f20.d);
    // 0x800890FC: mul.d       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f10.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x80089100: cvt.s.d     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f18.fl = CVT_S_D(ctx->f10.d);
    // 0x80089104: swc1        $f18, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f18.u32l;
    // 0x80089108: jal         0x80081C20
    // 0x8008910C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_80081C20(rdram, ctx);
        goto after_3;
    // 0x8008910C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_3:
    // 0x80089110: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x80089114: addiu       $t6, $zero, 0x20
    ctx->r14 = ADD32(0, 0X20);
    // 0x80089118: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8008911C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80089120: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80089124: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80089128: jal         0x80081C20
    // 0x8008912C: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    func_80081C20(rdram, ctx);
        goto after_4;
    // 0x8008912C: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    after_4:
    // 0x80089130: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x80089134: sw          $v0, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r2;
    // 0x80089138: lw          $t8, 0x24($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X24);
    // 0x8008913C: swc1        $f26, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f26.u32l;
    // 0x80089140: lw          $t9, 0x24($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X24);
    // 0x80089144: b           L_80089158
    // 0x80089148: sw          $fp, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->r30;
        goto L_80089158;
    // 0x80089148: sw          $fp, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->r30;
L_8008914C:
    // 0x8008914C: andi        $t1, $s1, 0xFFFF
    ctx->r9 = ctx->r17 & 0XFFFF;
    // 0x80089150: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    // 0x80089154: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
L_80089158:
    // 0x80089158: sll         $t2, $s1, 2
    ctx->r10 = S32(ctx->r17 << 2);
    // 0x8008915C: addu        $s2, $s3, $t2
    ctx->r18 = ADD32(ctx->r19, ctx->r10);
    // 0x80089160: lw          $t3, 0x0($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X0);
    // 0x80089164: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80089168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008916C: beq         $t3, $zero, L_800891D4
    if (ctx->r11 == 0) {
        // 0x80089170: or          $a2, $s6, $zero
        ctx->r6 = ctx->r22 | 0;
            goto L_800891D4;
    }
    // 0x80089170: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80089174: addiu       $t4, $zero, 0x30
    ctx->r12 = ADD32(0, 0X30);
    // 0x80089178: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8008917C: jal         0x80081C20
    // 0x80089180: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    func_80081C20(rdram, ctx);
        goto after_5;
    // 0x80089180: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    after_5:
    // 0x80089184: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80089188: addiu       $t5, $zero, 0x8
    ctx->r13 = ADD32(0, 0X8);
    // 0x8008918C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80089190: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80089194: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80089198: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x8008919C: jal         0x80081C20
    // 0x800891A0: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    func_80081C20(rdram, ctx);
        goto after_6;
    // 0x800891A0: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    after_6:
    // 0x800891A4: lw          $t6, 0x20($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X20);
    // 0x800891A8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800891AC: andi        $t9, $s1, 0xFFFF
    ctx->r25 = ctx->r17 & 0XFFFF;
    // 0x800891B0: sw          $v0, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->r2;
    // 0x800891B4: lw          $t8, 0x20($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X20);
    // 0x800891B8: lw          $t7, 0x0($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X0);
    // 0x800891BC: or          $s1, $t9, $zero
    ctx->r17 = ctx->r25 | 0;
    // 0x800891C0: sh          $t7, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r15;
    // 0x800891C4: jal         0x80088D60
    // 0x800891C8: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    func_80088D60(rdram, ctx);
        goto after_7;
    // 0x800891C8: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    after_7:
    // 0x800891CC: b           L_800891E8
    // 0x800891D0: lbu         $t2, 0x24($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X24);
        goto L_800891E8;
    // 0x800891D0: lbu         $t2, 0x24($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X24);
L_800891D4:
    // 0x800891D4: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x800891D8: andi        $t0, $s1, 0xFFFF
    ctx->r8 = ctx->r17 & 0XFFFF;
    // 0x800891DC: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x800891E0: or          $s1, $t0, $zero
    ctx->r17 = ctx->r8 | 0;
    // 0x800891E4: lbu         $t2, 0x24($s5)
    ctx->r10 = MEM_BU(ctx->r21, 0X24);
L_800891E8:
    // 0x800891E8: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x800891EC: andi        $t1, $s4, 0xFFFF
    ctx->r9 = ctx->r20 & 0XFFFF;
    // 0x800891F0: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800891F4: bne         $at, $zero, L_80088FAC
    if (ctx->r1 != 0) {
        // 0x800891F8: or          $s4, $t1, $zero
        ctx->r20 = ctx->r9 | 0;
            goto L_80088FAC;
    }
    // 0x800891F8: or          $s4, $t1, $zero
    ctx->r20 = ctx->r9 | 0;
L_800891FC:
    // 0x800891FC: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80089200: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80089204: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80089208: ldc1        $f24, 0x30($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X30);
    // 0x8008920C: ldc1        $f26, 0x38($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X38);
    // 0x80089210: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80089214: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80089218: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8008921C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80089220: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x80089224: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x80089228: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x8008922C: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x80089230: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x80089234: jr          $ra
    // 0x80089238: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x80089238: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x8008923C: nop

;}
RECOMP_FUNC void func_80089240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089240: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80089244: sll         $t0, $a1, 16
    ctx->r8 = S32(ctx->r5 << 16);
    // 0x80089248: sra         $t6, $t0, 16
    ctx->r14 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8008924C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80089250: sll         $s1, $t6, 2
    ctx->r17 = S32(ctx->r14 << 2);
    // 0x80089254: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80089258: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8008925C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80089260: addu        $s1, $s1, $t6
    ctx->r17 = ADD32(ctx->r17, ctx->r14);
    // 0x80089264: lw          $t7, 0x34($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X34);
    // 0x80089268: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x8008926C: subu        $s1, $s1, $t6
    ctx->r17 = SUB32(ctx->r17, ctx->r14);
    // 0x80089270: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80089274: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x80089278: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x8008927C: addu        $a0, $t7, $s1
    ctx->r4 = ADD32(ctx->r15, ctx->r17);
    // 0x80089280: addiu       $a0, $a0, 0x20
    ctx->r4 = ADD32(ctx->r4, 0X20);
    // 0x80089284: jal         0x80088E00
    // 0x80089288: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    func_80088E00(rdram, ctx);
        goto after_0;
    // 0x80089288: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    after_0:
    // 0x8008928C: lw          $t8, 0x34($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X34);
    // 0x80089290: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80089294: addu        $a2, $t8, $s1
    ctx->r6 = ADD32(ctx->r24, ctx->r17);
    // 0x80089298: jal         0x8008FCF4
    // 0x8008929C: addiu       $a0, $a2, 0x20
    ctx->r4 = ADD32(ctx->r6, 0X20);
    func_8008FCF4(rdram, ctx);
        goto after_1;
    // 0x8008929C: addiu       $a0, $a2, 0x20
    ctx->r4 = ADD32(ctx->r6, 0X20);
    after_1:
    // 0x800892A0: lw          $t9, 0x34($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X34);
    // 0x800892A4: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x800892A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800892AC: addu        $a2, $t9, $s1
    ctx->r6 = ADD32(ctx->r25, ctx->r17);
    // 0x800892B0: jal         0x800892E0
    // 0x800892B4: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    func_800892E0(rdram, ctx);
        goto after_2;
    // 0x800892B4: addiu       $a2, $a2, 0x20
    ctx->r6 = ADD32(ctx->r6, 0X20);
    after_2:
    // 0x800892B8: lw          $t2, 0x34($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X34);
    // 0x800892BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800892C0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x800892C4: addu        $v0, $t2, $s1
    ctx->r2 = ADD32(ctx->r10, ctx->r17);
    // 0x800892C8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800892CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800892D0: jr          $ra
    // 0x800892D4: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    return;
    // 0x800892D4: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x800892D8: nop

    // 0x800892DC: nop

;}
RECOMP_FUNC void func_800892E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800892E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800892E4: bne         $a1, $at, L_80089308
    if (ctx->r5 != ctx->r1) {
        // 0x800892E8: lw          $v0, 0x1C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X1C);
            goto L_80089308;
    }
    // 0x800892E8: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x800892EC: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x800892F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800892F4: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x800892F8: sw          $a2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r6;
    // 0x800892FC: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x80089300: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80089304: sw          $t0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r8;
L_80089308:
    // 0x80089308: jr          $ra
    // 0x8008930C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8008930C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_80089310(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089310: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80089314: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80089318: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8008931C: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80089320: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80089324: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80089328: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8008932C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80089330: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80089334: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80089338: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8008933C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80089340: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80089344: lui         $t6, 0x200
    ctx->r14 = S32(0X200 << 16);
    // 0x80089348: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x8008934C: lui         $t7, 0x200
    ctx->r15 = S32(0X200 << 16);
    // 0x80089350: ori         $t6, $t6, 0x440
    ctx->r14 = ctx->r14 | 0X440;
    // 0x80089354: ori         $t7, $t7, 0x580
    ctx->r15 = ctx->r15 | 0X580;
    // 0x80089358: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x8008935C: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x80089360: sw          $t7, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r15;
    // 0x80089364: sw          $v0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r2;
    // 0x80089368: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x8008936C: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x80089370: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x80089374: or          $fp, $a3, $zero
    ctx->r30 = ctx->r7 | 0;
    // 0x80089378: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8008937C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80089380: blez        $t8, L_800893FC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80089384: addiu       $s3, $t0, 0x10
        ctx->r19 = ADD32(ctx->r8, 0X10);
            goto L_800893FC;
    }
    // 0x80089384: addiu       $s3, $t0, 0x10
    ctx->r19 = ADD32(ctx->r8, 0X10);
    // 0x80089388: lui         $s2, 0xC00
    ctx->r18 = S32(0XC00 << 16);
    // 0x8008938C: ori         $s2, $s2, 0x7FFF
    ctx->r18 = ctx->r18 | 0X7FFF;
    // 0x80089390: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    // 0x80089394: andi        $s6, $v0, 0xFFFF
    ctx->r22 = ctx->r2 & 0XFFFF;
L_80089398:
    // 0x80089398: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8008939C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x800893A0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x800893A4: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x800893A8: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x800893AC: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x800893B0: jalr        $t9
    // 0x800893B4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x800893B4: nop

    after_0:
    // 0x800893B8: lui         $t2, 0x6C0
    ctx->r10 = S32(0X6C0 << 16);
    // 0x800893BC: lui         $t3, 0x800
    ctx->r11 = S32(0X800 << 16);
    // 0x800893C0: lui         $t1, 0x800
    ctx->r9 = S32(0X800 << 16);
    // 0x800893C4: ori         $t2, $t2, 0x440
    ctx->r10 = ctx->r10 | 0X440;
    // 0x800893C8: ori         $t3, $t3, 0x580
    ctx->r11 = ctx->r11 | 0X580;
    // 0x800893CC: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x800893D0: sw          $s6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r22;
    // 0x800893D4: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x800893D8: sw          $s2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r18;
    // 0x800893DC: sw          $t3, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r11;
    // 0x800893E0: sw          $s2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r18;
    // 0x800893E4: lw          $t4, 0x14($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X14);
    // 0x800893E8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x800893EC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x800893F0: slt         $at, $s0, $t4
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x800893F4: bne         $at, $zero, L_80089398
    if (ctx->r1 != 0) {
        // 0x800893F8: addiu       $s3, $v0, 0x18
        ctx->r19 = ADD32(ctx->r2, 0X18);
            goto L_80089398;
    }
    // 0x800893F8: addiu       $s3, $v0, 0x18
    ctx->r19 = ADD32(ctx->r2, 0X18);
L_800893FC:
    // 0x800893FC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80089400: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x80089404: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80089408: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8008940C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80089410: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80089414: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80089418: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8008941C: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80089420: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80089424: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80089428: jr          $ra
    // 0x8008942C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8008942C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80089430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80089434: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80089438: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008943C: beq         $a1, $at, L_80089594
    if (ctx->r5 == ctx->r1) {
        // 0x80089440: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_80089594;
    }
    // 0x80089440: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80089444: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80089448: bnel        $a1, $at, L_800895F8
    if (ctx->r5 != ctx->r1) {
        // 0x8008944C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800895F8;
    }
    goto skip_0;
    // 0x8008944C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80089450: sw          $a2, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r6;
    // 0x80089454: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80089458: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x8008945C: lui         $t7, 0x8009
    ctx->r15 = S32(0X8009 << 16);
    // 0x80089460: sw          $t6, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r14;
    // 0x80089464: lbu         $v0, 0x8($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X8);
    // 0x80089468: beql        $v0, $zero, L_80089488
    if (ctx->r2 == 0) {
        // 0x8008946C: lw          $v0, 0x28($a3)
        ctx->r2 = MEM_W(ctx->r7, 0X28);
            goto L_80089488;
    }
    goto skip_1;
    // 0x8008946C: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    skip_1:
    // 0x80089470: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80089474: beq         $v0, $a0, L_80089548
    if (ctx->r2 == ctx->r4) {
        // 0x80089478: lui         $t0, 0x8009
        ctx->r8 = S32(0X8009 << 16);
            goto L_80089548;
    }
    // 0x80089478: lui         $t0, 0x8009
    ctx->r8 = S32(0X8009 << 16);
    // 0x8008947C: b           L_800895F8
    // 0x80089480: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800895F8;
    // 0x80089480: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80089484: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
L_80089488:
    // 0x80089488: addiu       $t7, $t7, -0x6524
    ctx->r15 = ADD32(ctx->r15, -0X6524);
    // 0x8008948C: sw          $t7, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r15;
    // 0x80089490: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x80089494: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80089498: div         $zero, $t8, $a1
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r5)));
    // 0x8008949C: mflo        $t9
    ctx->r25 = lo;
    // 0x800894A0: bne         $a1, $zero, L_800894AC
    if (ctx->r5 != 0) {
        // 0x800894A4: nop
    
            goto L_800894AC;
    }
    // 0x800894A4: nop

    // 0x800894A8: break       7
    do_break(2148045992);
L_800894AC:
    // 0x800894AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800894B0: bne         $a1, $at, L_800894C4
    if (ctx->r5 != ctx->r1) {
        // 0x800894B4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800894C4;
    }
    // 0x800894B4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800894B8: bne         $t8, $at, L_800894C4
    if (ctx->r24 != ctx->r1) {
        // 0x800894BC: nop
    
            goto L_800894C4;
    }
    // 0x800894BC: nop

    // 0x800894C0: break       6
    do_break(2148046016);
L_800894C4:
    // 0x800894C4: multu       $t9, $a1
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800894C8: mflo        $t0
    ctx->r8 = lo;
    // 0x800894CC: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x800894D0: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    // 0x800894D4: lw          $a0, 0x10($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X10);
    // 0x800894D8: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x800894DC: lw          $t3, 0x4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X4);
    // 0x800894E0: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x800894E4: multu       $t2, $t3
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800894E8: mflo        $t4
    ctx->r12 = lo;
    // 0x800894EC: sw          $t4, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r12;
    // 0x800894F0: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x800894F4: beql        $v1, $zero, L_8008953C
    if (ctx->r3 == 0) {
        // 0x800894F8: sw          $zero, 0x24($a3)
        MEM_W(0X24, ctx->r7) = 0;
            goto L_8008953C;
    }
    goto skip_2;
    // 0x800894F8: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
    skip_2:
    // 0x800894FC: lw          $t5, 0x0($v1)
    ctx->r13 = MEM_W(ctx->r3, 0X0);
    // 0x80089500: lw          $a1, 0x18($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X18);
    // 0x80089504: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80089508: sw          $t5, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r13;
    // 0x8008950C: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x80089510: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x80089514: sw          $t7, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r15;
    // 0x80089518: lw          $t8, 0xC($v0)
    ctx->r24 = MEM_W(ctx->r2, 0XC);
    // 0x8008951C: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x80089520: sw          $t9, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r25;
    // 0x80089524: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x80089528: jal         0x80090050
    // 0x8008952C: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    func_80090050(rdram, ctx);
        goto after_0;
    // 0x8008952C: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_0:
    // 0x80089530: b           L_800895F8
    // 0x80089534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_800895F8;
    // 0x80089534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80089538: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
L_8008953C:
    // 0x8008953C: sw          $zero, 0x20($a3)
    MEM_W(0X20, ctx->r7) = 0;
    // 0x80089540: b           L_800895F4
    // 0x80089544: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
        goto L_800895F4;
    // 0x80089544: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
L_80089548:
    // 0x80089548: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    // 0x8008954C: addiu       $t0, $t0, -0x69FC
    ctx->r8 = ADD32(ctx->r8, -0X69FC);
    // 0x80089550: sw          $t0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r8;
    // 0x80089554: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x80089558: beql        $v1, $zero, L_80089588
    if (ctx->r3 == 0) {
        // 0x8008955C: sw          $zero, 0x24($a3)
        MEM_W(0X24, ctx->r7) = 0;
            goto L_80089588;
    }
    goto skip_3;
    // 0x8008955C: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
    skip_3:
    // 0x80089560: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x80089564: sw          $t1, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r9;
    // 0x80089568: lw          $t2, 0xC($v0)
    ctx->r10 = MEM_W(ctx->r2, 0XC);
    // 0x8008956C: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x80089570: sw          $t3, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r11;
    // 0x80089574: lw          $t4, 0xC($v0)
    ctx->r12 = MEM_W(ctx->r2, 0XC);
    // 0x80089578: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x8008957C: b           L_800895F4
    // 0x80089580: sw          $t5, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r13;
        goto L_800895F4;
    // 0x80089580: sw          $t5, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r13;
    // 0x80089584: sw          $zero, 0x24($a3)
    MEM_W(0X24, ctx->r7) = 0;
L_80089588:
    // 0x80089588: sw          $zero, 0x20($a3)
    MEM_W(0X20, ctx->r7) = 0;
    // 0x8008958C: b           L_800895F4
    // 0x80089590: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
        goto L_800895F4;
    // 0x80089590: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
L_80089594:
    // 0x80089594: lw          $v0, 0x28($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X28);
    // 0x80089598: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8008959C: sw          $zero, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = 0;
    // 0x800895A0: sw          $a0, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r4;
    // 0x800895A4: beq         $v0, $zero, L_800895F4
    if (ctx->r2 == 0) {
        // 0x800895A8: sw          $zero, 0x38($a3)
        MEM_W(0X38, ctx->r7) = 0;
            goto L_800895F4;
    }
    // 0x800895A8: sw          $zero, 0x38($a3)
    MEM_W(0X38, ctx->r7) = 0;
    // 0x800895AC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x800895B0: sw          $t6, 0x44($a3)
    MEM_W(0X44, ctx->r7) = ctx->r14;
    // 0x800895B4: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x800895B8: bne         $v1, $zero, L_800895D8
    if (ctx->r3 != 0) {
        // 0x800895BC: nop
    
            goto L_800895D8;
    }
    // 0x800895BC: nop

    // 0x800895C0: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x800895C4: beql        $v1, $zero, L_800895F8
    if (ctx->r3 == 0) {
        // 0x800895C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800895F8;
    }
    goto skip_4;
    // 0x800895C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_4:
    // 0x800895CC: lw          $t7, 0x8($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X8);
    // 0x800895D0: b           L_800895F4
    // 0x800895D4: sw          $t7, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r15;
        goto L_800895F4;
    // 0x800895D4: sw          $t7, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r15;
L_800895D8:
    // 0x800895D8: bnel        $a0, $v1, L_800895F8
    if (ctx->r4 != ctx->r3) {
        // 0x800895DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800895F8;
    }
    goto skip_5;
    // 0x800895DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_5:
    // 0x800895E0: lw          $v1, 0xC($v0)
    ctx->r3 = MEM_W(ctx->r2, 0XC);
    // 0x800895E4: beql        $v1, $zero, L_800895F8
    if (ctx->r3 == 0) {
        // 0x800895E8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_800895F8;
    }
    goto skip_6;
    // 0x800895E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_6:
    // 0x800895EC: lw          $t8, 0x8($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X8);
    // 0x800895F0: sw          $t8, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r24;
L_800895F4:
    // 0x800895F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800895F8:
    // 0x800895F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800895FC: jr          $ra
    // 0x80089600: nop

    return;
    // 0x80089600: nop

;}
RECOMP_FUNC void func_80089604(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089604: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80089608: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x8008960C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80089610: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80089614: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80089618: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x8008961C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80089620: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80089624: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80089628: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x8008962C: or          $t2, $a1, $zero
    ctx->r10 = ctx->r5 | 0;
    // 0x80089630: bne         $a2, $zero, L_80089640
    if (ctx->r6 != 0) {
        // 0x80089634: or          $t1, $t0, $zero
        ctx->r9 = ctx->r8 | 0;
            goto L_80089640;
    }
    // 0x80089634: or          $t1, $t0, $zero
    ctx->r9 = ctx->r8 | 0;
    // 0x80089638: b           L_80089994
    // 0x8008963C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_80089994;
    // 0x8008963C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_80089640:
    // 0x80089640: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x80089644: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80089648: addu        $t6, $v0, $s3
    ctx->r14 = ADD32(ctx->r2, ctx->r19);
    // 0x8008964C: sltu        $at, $v1, $t6
    ctx->r1 = ctx->r3 < ctx->r14 ? 1 : 0;
    // 0x80089650: beql        $at, $zero, L_80089864
    if (ctx->r1 == 0) {
        // 0x80089654: lw          $v0, 0x28($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X28);
            goto L_80089864;
    }
    goto skip_0;
    // 0x80089654: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    skip_0:
    // 0x80089658: lw          $t7, 0x24($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X24);
    // 0x8008965C: subu        $s2, $v1, $v0
    ctx->r18 = SUB32(ctx->r3, ctx->r2);
    // 0x80089660: beql        $t7, $zero, L_80089864
    if (ctx->r15 == 0) {
        // 0x80089664: lw          $v0, 0x28($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X28);
            goto L_80089864;
    }
    goto skip_1;
    // 0x80089664: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    skip_1:
    // 0x80089668: blez        $s2, L_800896E4
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8008966C: sll         $s1, $s2, 1
        ctx->r17 = S32(ctx->r18 << 1);
            goto L_800896E4;
    }
    // 0x8008966C: sll         $s1, $s2, 1
    ctx->r17 = S32(ctx->r18 << 1);
    // 0x80089670: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x80089674: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x80089678: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x8008967C: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x80089680: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80089684: jalr        $t9
    // 0x80089688: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80089688: nop

    after_0:
    // 0x8008968C: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80089690: andi        $a2, $v0, 0x7
    ctx->r6 = ctx->r2 & 0X7;
    // 0x80089694: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x80089698: lh          $t8, 0x0($t2)
    ctx->r24 = MEM_H(ctx->r10, 0X0);
    // 0x8008969C: addu        $a3, $s1, $a2
    ctx->r7 = ADD32(ctx->r17, ctx->r6);
    // 0x800896A0: andi        $t5, $a3, 0x7
    ctx->r13 = ctx->r7 & 0X7;
    // 0x800896A4: subu        $t6, $a3, $t5
    ctx->r14 = SUB32(ctx->r7, ctx->r13);
    // 0x800896A8: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x800896AC: andi        $t3, $t8, 0xFFFF
    ctx->r11 = ctx->r24 & 0XFFFF;
    // 0x800896B0: or          $t4, $t3, $at
    ctx->r12 = ctx->r11 | ctx->r1;
    // 0x800896B4: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x800896B8: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x800896BC: andi        $t9, $t7, 0xFFFF
    ctx->r25 = ctx->r15 & 0XFFFF;
    // 0x800896C0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x800896C4: subu        $t3, $v0, $a2
    ctx->r11 = SUB32(ctx->r2, ctx->r6);
    // 0x800896C8: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x800896CC: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x800896D0: sw          $t4, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r12;
    // 0x800896D4: sw          $t3, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r11;
    // 0x800896D8: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x800896DC: b           L_800896E8
    // 0x800896E0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_800896E8;
    // 0x800896E0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_800896E4:
    // 0x800896E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_800896E8:
    // 0x800896E8: lh          $t4, 0x0($t2)
    ctx->r12 = MEM_H(ctx->r10, 0X0);
    // 0x800896EC: slt         $at, $s2, $s3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x800896F0: addu        $t5, $t4, $a2
    ctx->r13 = ADD32(ctx->r12, ctx->r6);
    // 0x800896F4: sh          $t5, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r13;
    // 0x800896F8: lw          $t6, 0x28($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X28);
    // 0x800896FC: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80089700: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x80089704: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x80089708: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x8008970C: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x80089710: sw          $t8, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r24;
    // 0x80089714: beq         $at, $zero, L_8008983C
    if (ctx->r1 == 0) {
        // 0x80089718: lh          $t0, 0x0($t2)
        ctx->r8 = MEM_H(ctx->r10, 0X0);
            goto L_8008983C;
    }
    // 0x80089718: lh          $t0, 0x0($t2)
    ctx->r8 = MEM_H(ctx->r10, 0X0);
    // 0x8008971C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
L_80089720:
    // 0x80089720: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80089724: addu        $t0, $t0, $s1
    ctx->r8 = ADD32(ctx->r8, ctx->r17);
    // 0x80089728: beq         $v0, $at, L_8008973C
    if (ctx->r2 == ctx->r1) {
        // 0x8008972C: subu        $s3, $s3, $s2
        ctx->r19 = SUB32(ctx->r19, ctx->r18);
            goto L_8008973C;
    }
    // 0x8008972C: subu        $s3, $s3, $s2
    ctx->r19 = SUB32(ctx->r19, ctx->r18);
    // 0x80089730: beq         $v0, $zero, L_8008973C
    if (ctx->r2 == 0) {
        // 0x80089734: addiu       $t3, $v0, -0x1
        ctx->r11 = ADD32(ctx->r2, -0X1);
            goto L_8008973C;
    }
    // 0x80089734: addiu       $t3, $v0, -0x1
    ctx->r11 = ADD32(ctx->r2, -0X1);
    // 0x80089738: sw          $t3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r11;
L_8008973C:
    // 0x8008973C: lw          $t4, 0x20($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X20);
    // 0x80089740: lw          $t5, 0x1C($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X1C);
    // 0x80089744: subu        $v0, $t4, $t5
    ctx->r2 = SUB32(ctx->r12, ctx->r13);
    // 0x80089748: sltu        $at, $s3, $v0
    ctx->r1 = ctx->r19 < ctx->r2 ? 1 : 0;
    // 0x8008974C: beq         $at, $zero, L_8008975C
    if (ctx->r1 == 0) {
        // 0x80089750: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_8008975C;
    }
    // 0x80089750: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80089754: b           L_8008975C
    // 0x80089758: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
        goto L_8008975C;
    // 0x80089758: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
L_8008975C:
    // 0x8008975C: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x80089760: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x80089764: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
    // 0x80089768: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x8008976C: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x80089770: sll         $s1, $s2, 1
    ctx->r17 = S32(ctx->r18 << 1);
    // 0x80089774: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80089778: jalr        $t9
    // 0x8008977C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8008977C: nop

    after_1:
    // 0x80089780: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80089784: andi        $a1, $v0, 0x7
    ctx->r5 = ctx->r2 & 0X7;
    // 0x80089788: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x8008978C: andi        $v1, $t0, 0x7
    ctx->r3 = ctx->r8 & 0X7;
    // 0x80089790: beq         $v1, $zero, L_800897A4
    if (ctx->r3 == 0) {
        // 0x80089794: addu        $a3, $s1, $a1
        ctx->r7 = ADD32(ctx->r17, ctx->r5);
            goto L_800897A4;
    }
    // 0x80089794: addu        $a3, $s1, $a1
    ctx->r7 = ADD32(ctx->r17, ctx->r5);
    // 0x80089798: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8008979C: b           L_800897A8
    // 0x800897A0: subu        $a2, $t6, $v1
    ctx->r6 = SUB32(ctx->r14, ctx->r3);
        goto L_800897A8;
    // 0x800897A0: subu        $a2, $t6, $v1
    ctx->r6 = SUB32(ctx->r14, ctx->r3);
L_800897A4:
    // 0x800897A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_800897A8:
    // 0x800897A8: addu        $t7, $t0, $a2
    ctx->r15 = ADD32(ctx->r8, ctx->r6);
    // 0x800897AC: andi        $t4, $a3, 0x7
    ctx->r12 = ctx->r7 & 0X7;
    // 0x800897B0: subu        $t5, $a3, $t4
    ctx->r13 = SUB32(ctx->r7, ctx->r12);
    // 0x800897B4: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x800897B8: or          $v1, $t1, $zero
    ctx->r3 = ctx->r9 | 0;
    // 0x800897BC: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x800897C0: or          $t3, $t8, $at
    ctx->r11 = ctx->r24 | ctx->r1;
    // 0x800897C4: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x800897C8: addiu       $t9, $t5, 0x8
    ctx->r25 = ADD32(ctx->r13, 0X8);
    // 0x800897CC: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x800897D0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x800897D4: sw          $t6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r14;
    // 0x800897D8: sw          $t3, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r11;
    // 0x800897DC: subu        $t8, $v0, $a1
    ctx->r24 = SUB32(ctx->r2, ctx->r5);
    // 0x800897E0: lui         $t7, 0x400
    ctx->r15 = S32(0X400 << 16);
    // 0x800897E4: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x800897E8: sw          $t8, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r24;
    // 0x800897EC: bne         $a1, $zero, L_800897F8
    if (ctx->r5 != 0) {
        // 0x800897F0: addiu       $t1, $t1, 0x8
        ctx->r9 = ADD32(ctx->r9, 0X8);
            goto L_800897F8;
    }
    // 0x800897F0: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x800897F4: beq         $a2, $zero, L_80089830
    if (ctx->r6 == 0) {
        // 0x800897F8: addu        $t3, $t0, $a1
        ctx->r11 = ADD32(ctx->r8, ctx->r5);
            goto L_80089830;
    }
L_800897F8:
    // 0x800897F8: addu        $t3, $t0, $a1
    ctx->r11 = ADD32(ctx->r8, ctx->r5);
    // 0x800897FC: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80089800: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80089804: addu        $t4, $t3, $a2
    ctx->r12 = ADD32(ctx->r11, ctx->r6);
    // 0x80089808: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x8008980C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80089810: lui         $at, 0xA00
    ctx->r1 = S32(0XA00 << 16);
    // 0x80089814: sll         $t7, $t0, 16
    ctx->r15 = S32(ctx->r8 << 16);
    // 0x80089818: andi        $t8, $s1, 0xFFFF
    ctx->r24 = ctx->r17 & 0XFFFF;
    // 0x8008981C: or          $t3, $t7, $t8
    ctx->r11 = ctx->r15 | ctx->r24;
    // 0x80089820: or          $t9, $t5, $at
    ctx->r25 = ctx->r13 | ctx->r1;
    // 0x80089824: sw          $t9, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r25;
    // 0x80089828: sw          $t3, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r11;
    // 0x8008982C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_80089830:
    // 0x80089830: slt         $at, $s2, $s3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x80089834: bnel        $at, $zero, L_80089720
    if (ctx->r1 != 0) {
        // 0x80089838: lw          $v0, 0x24($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X24);
            goto L_80089720;
    }
    goto skip_2;
    // 0x80089838: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    skip_2:
L_8008983C:
    // 0x8008983C: lw          $t4, 0x38($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X38);
    // 0x80089840: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
    // 0x80089844: sll         $t6, $s3, 1
    ctx->r14 = S32(ctx->r19 << 1);
    // 0x80089848: addu        $t5, $t4, $s3
    ctx->r13 = ADD32(ctx->r12, ctx->r19);
    // 0x8008984C: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x80089850: sw          $t5, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r13;
    // 0x80089854: sw          $t7, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r15;
    // 0x80089858: b           L_80089994
    // 0x8008985C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_80089994;
    // 0x8008985C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80089860: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
L_80089864:
    // 0x80089864: lw          $a0, 0x44($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X44);
    // 0x80089868: sll         $s1, $s3, 1
    ctx->r17 = S32(ctx->r19 << 1);
    // 0x8008986C: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80089870: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x80089874: addu        $v1, $a0, $s1
    ctx->r3 = ADD32(ctx->r4, ctx->r17);
    // 0x80089878: subu        $t3, $v1, $t8
    ctx->r11 = SUB32(ctx->r3, ctx->r24);
    // 0x8008987C: subu        $s2, $t3, $t4
    ctx->r18 = SUB32(ctx->r11, ctx->r12);
    // 0x80089880: bgezl       $s2, L_80089890
    if (SIGNED(ctx->r18) >= 0) {
        // 0x80089884: slt         $at, $s1, $s2
        ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
            goto L_80089890;
    }
    goto skip_3;
    // 0x80089884: slt         $at, $s1, $s2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
    skip_3:
    // 0x80089888: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8008988C: slt         $at, $s1, $s2
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r18) ? 1 : 0;
L_80089890:
    // 0x80089890: beql        $at, $zero, L_800898A0
    if (ctx->r1 == 0) {
        // 0x80089894: slt         $at, $s2, $s1
        ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r17) ? 1 : 0;
            goto L_800898A0;
    }
    goto skip_4;
    // 0x80089894: slt         $at, $s2, $s1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r17) ? 1 : 0;
    skip_4:
    // 0x80089898: or          $s2, $s1, $zero
    ctx->r18 = ctx->r17 | 0;
    // 0x8008989C: slt         $at, $s2, $s1
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r17) ? 1 : 0;
L_800898A0:
    // 0x800898A0: beql        $at, $zero, L_80089954
    if (ctx->r1 == 0) {
        // 0x800898A4: sw          $v1, 0x44($s0)
        MEM_W(0X44, ctx->r16) = ctx->r3;
            goto L_80089954;
    }
    goto skip_5;
    // 0x800898A4: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
    skip_5:
    // 0x800898A8: blez        $s3, L_80089928
    if (SIGNED(ctx->r19) <= 0) {
        // 0x800898AC: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80089928;
    }
    // 0x800898AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800898B0: lw          $a2, 0x34($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X34);
    // 0x800898B4: subu        $a1, $s1, $s2
    ctx->r5 = SUB32(ctx->r17, ctx->r18);
    // 0x800898B8: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    // 0x800898BC: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
    // 0x800898C0: lw          $t9, 0x30($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X30);
    // 0x800898C4: jalr        $t9
    // 0x800898C8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x800898C8: nop

    after_2:
    // 0x800898CC: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x800898D0: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x800898D4: andi        $a2, $v0, 0x7
    ctx->r6 = ctx->r2 & 0X7;
    // 0x800898D8: lh          $t5, 0x0($t2)
    ctx->r13 = MEM_H(ctx->r10, 0X0);
    // 0x800898DC: lw          $t0, 0x60($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X60);
    // 0x800898E0: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x800898E4: andi        $t8, $a3, 0x7
    ctx->r24 = ctx->r7 & 0X7;
    // 0x800898E8: subu        $t3, $a3, $t8
    ctx->r11 = SUB32(ctx->r7, ctx->r24);
    // 0x800898EC: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x800898F0: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x800898F4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x800898F8: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x800898FC: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x80089900: andi        $t9, $t4, 0xFFFF
    ctx->r25 = ctx->r12 & 0XFFFF;
    // 0x80089904: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80089908: subu        $t6, $v0, $a2
    ctx->r14 = SUB32(ctx->r2, ctx->r6);
    // 0x8008990C: lui         $t5, 0x400
    ctx->r13 = S32(0X400 << 16);
    // 0x80089910: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x80089914: sw          $t7, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r15;
    // 0x80089918: sw          $t6, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r14;
    // 0x8008991C: sw          $t5, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r13;
    // 0x80089920: b           L_80089928
    // 0x80089924: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
        goto L_80089928;
    // 0x80089924: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_80089928:
    // 0x80089928: lh          $t7, 0x0($t2)
    ctx->r15 = MEM_H(ctx->r10, 0X0);
    // 0x8008992C: addu        $t8, $t7, $a2
    ctx->r24 = ADD32(ctx->r15, ctx->r6);
    // 0x80089930: sh          $t8, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r24;
    // 0x80089934: lw          $t3, 0x38($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X38);
    // 0x80089938: lw          $t9, 0x44($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X44);
    // 0x8008993C: addu        $t4, $t3, $s3
    ctx->r12 = ADD32(ctx->r11, ctx->r19);
    // 0x80089940: addu        $t5, $t9, $s1
    ctx->r13 = ADD32(ctx->r25, ctx->r17);
    // 0x80089944: sw          $t4, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r12;
    // 0x80089948: b           L_80089954
    // 0x8008994C: sw          $t5, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r13;
        goto L_80089954;
    // 0x8008994C: sw          $t5, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r13;
    // 0x80089950: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
L_80089954:
    // 0x80089954: beq         $s2, $zero, L_80089990
    if (ctx->r18 == 0) {
        // 0x80089958: subu        $v1, $s1, $s2
        ctx->r3 = SUB32(ctx->r17, ctx->r18);
            goto L_80089990;
    }
    // 0x80089958: subu        $v1, $s1, $s2
    ctx->r3 = SUB32(ctx->r17, ctx->r18);
    // 0x8008995C: bgez        $v1, L_80089968
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80089960: or          $v0, $t1, $zero
        ctx->r2 = ctx->r9 | 0;
            goto L_80089968;
    }
    // 0x80089960: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
    // 0x80089964: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80089968:
    // 0x80089968: lh          $t6, 0x0($t2)
    ctx->r14 = MEM_H(ctx->r10, 0X0);
    // 0x8008996C: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80089970: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80089974: addu        $t7, $t6, $v1
    ctx->r15 = ADD32(ctx->r14, ctx->r3);
    // 0x80089978: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x8008997C: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x80089980: or          $t3, $t8, $at
    ctx->r11 = ctx->r24 | ctx->r1;
    // 0x80089984: sw          $t3, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r11;
    // 0x80089988: sw          $s2, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r18;
    // 0x8008998C: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
L_80089990:
    // 0x80089990: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_80089994:
    // 0x80089994: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80089998: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8008999C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x800899A0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x800899A4: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x800899A8: jr          $ra
    // 0x800899AC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x800899AC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_800899B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800899B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800899B4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800899B8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x800899BC: sll         $t6, $s3, 16
    ctx->r14 = S32(ctx->r19 << 16);
    // 0x800899C0: sll         $t8, $s5, 16
    ctx->r24 = S32(ctx->r21 << 16);
    // 0x800899C4: sra         $s5, $t8, 16
    ctx->r21 = S32(SIGNED(ctx->r24) >> 16);
    // 0x800899C8: sra         $s3, $t6, 16
    ctx->r19 = S32(SIGNED(ctx->r14) >> 16);
    // 0x800899CC: blez        $s1, L_80089A38
    if (SIGNED(ctx->r17) <= 0) {
        // 0x800899D0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80089A38;
    }
    // 0x800899D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800899D4: lw          $t9, 0x30($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X30);
    // 0x800899D8: lw          $a0, 0x44($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X44);
    // 0x800899DC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x800899E0: jalr        $t9
    // 0x800899E4: lw          $a2, 0x34($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X34);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x800899E4: lw          $a2, 0x34($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X34);
    after_0:
    // 0x800899E8: andi        $a2, $v0, 0x7
    ctx->r6 = ctx->r2 & 0X7;
    // 0x800899EC: addu        $s1, $s1, $a2
    ctx->r17 = ADD32(ctx->r17, ctx->r6);
    // 0x800899F0: andi        $t6, $s3, 0xFFFF
    ctx->r14 = ctx->r19 & 0XFFFF;
    // 0x800899F4: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x800899F8: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x800899FC: andi        $t8, $s1, 0x7
    ctx->r24 = ctx->r17 & 0X7;
    // 0x80089A00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80089A04: subu        $t9, $s1, $t8
    ctx->r25 = SUB32(ctx->r17, ctx->r24);
    // 0x80089A08: addiu       $t6, $t9, 0x8
    ctx->r14 = ADD32(ctx->r25, 0X8);
    // 0x80089A0C: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x80089A10: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80089A14: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80089A18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80089A1C: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x80089A20: subu        $t9, $v0, $a2
    ctx->r25 = SUB32(ctx->r2, ctx->r6);
    // 0x80089A24: lui         $t8, 0x400
    ctx->r24 = S32(0X400 << 16);
    // 0x80089A28: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80089A2C: sw          $t9, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r25;
    // 0x80089A30: b           L_80089A3C
    // 0x80089A34: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
        goto L_80089A3C;
    // 0x80089A34: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80089A38:
    // 0x80089A38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_80089A3C:
    // 0x80089A3C: andi        $t6, $s4, 0x2
    ctx->r14 = ctx->r20 & 0X2;
    // 0x80089A40: beq         $t6, $zero, L_80089A68
    if (ctx->r14 == 0) {
        // 0x80089A44: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_80089A68;
    }
    // 0x80089A44: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80089A48: lui         $t7, 0xF00
    ctx->r15 = S32(0XF00 << 16);
    // 0x80089A4C: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80089A50: lw          $t8, 0x18($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X18);
    // 0x80089A54: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x80089A58: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80089A5C: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80089A60: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80089A64: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
L_80089A68:
    // 0x80089A68: addu        $t6, $s3, $a2
    ctx->r14 = ADD32(ctx->r19, ctx->r6);
    // 0x80089A6C: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80089A70: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x80089A74: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80089A78: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80089A7C: sw          $t8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r24;
    // 0x80089A80: sll         $t7, $s6, 1
    ctx->r15 = S32(ctx->r22 << 1);
    // 0x80089A84: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x80089A88: sll         $t6, $s5, 16
    ctx->r14 = S32(ctx->r21 << 16);
    // 0x80089A8C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80089A90: andi        $t7, $s4, 0xFF
    ctx->r15 = ctx->r20 & 0XFF;
    // 0x80089A94: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80089A98: sll         $t6, $t7, 16
    ctx->r14 = S32(ctx->r15 << 16);
    // 0x80089A9C: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x80089AA0: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80089AA4: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x80089AA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80089AAC: sw          $t8, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r24;
    // 0x80089AB0: lw          $t9, 0x14($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X14);
    // 0x80089AB4: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x80089AB8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80089ABC: and         $t7, $t9, $at
    ctx->r15 = ctx->r25 & ctx->r1;
    // 0x80089AC0: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    // 0x80089AC4: sw          $zero, 0x40($s2)
    MEM_W(0X40, ctx->r18) = 0;
    // 0x80089AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80089ACC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80089AD0: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80089AD4: jr          $ra
    // 0x80089AD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80089AD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80089ADC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089ADC: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x80089AE0: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80089AE4: sw          $a3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r7;
    // 0x80089AE8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80089AEC: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x80089AF0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80089AF4: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x80089AF8: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80089AFC: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80089B00: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80089B04: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80089B08: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80089B0C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80089B10: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80089B14: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x80089B18: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x80089B1C: bne         $a2, $zero, L_80089B2C
    if (ctx->r6 != 0) {
        // 0x80089B20: or          $t5, $zero, $zero
        ctx->r13 = 0 | 0;
            goto L_80089B2C;
    }
    // 0x80089B20: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x80089B24: b           L_80089F4C
    // 0x80089B28: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
        goto L_80089F4C;
    // 0x80089B28: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
L_80089B2C:
    // 0x80089B2C: lw          $t6, 0x2C($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X2C);
    // 0x80089B30: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80089B34: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80089B38: lw          $a1, 0xC0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC0);
    // 0x80089B3C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80089B40: lui         $at, 0xB00
    ctx->r1 = S32(0XB00 << 16);
    // 0x80089B44: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80089B48: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x80089B4C: lw          $t9, 0x28($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X28);
    // 0x80089B50: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x80089B54: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80089B58: lw          $t6, 0x10($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X10);
    // 0x80089B5C: addiu       $t2, $a1, 0x8
    ctx->r10 = ADD32(ctx->r5, 0X8);
    // 0x80089B60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80089B64: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80089B68: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80089B6C: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x80089B70: lw          $v1, 0x38($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X38);
    // 0x80089B74: lw          $a0, 0x20($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X20);
    // 0x80089B78: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80089B7C: addu        $t9, $v1, $t0
    ctx->r25 = ADD32(ctx->r3, ctx->r8);
    // 0x80089B80: sltu        $t1, $a0, $t9
    ctx->r9 = ctx->r4 < ctx->r25 ? 1 : 0;
    // 0x80089B84: beq         $t1, $zero, L_80089B98
    if (ctx->r9 == 0) {
        // 0x80089B88: addiu       $t7, $zero, 0x10
        ctx->r15 = ADD32(0, 0X10);
            goto L_80089B98;
    }
    // 0x80089B88: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x80089B8C: lw          $t1, 0x24($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X24);
    // 0x80089B90: sltu        $t6, $zero, $t1
    ctx->r14 = 0 < ctx->r9 ? 1 : 0;
    // 0x80089B94: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
L_80089B98:
    // 0x80089B98: beq         $t1, $zero, L_80089BA8
    if (ctx->r9 == 0) {
        // 0x80089B9C: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_80089BA8;
    }
    // 0x80089B9C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80089BA0: b           L_80089BA8
    // 0x80089BA4: subu        $a1, $a0, $v1
    ctx->r5 = SUB32(ctx->r4, ctx->r3);
        goto L_80089BA8;
    // 0x80089BA4: subu        $a1, $a0, $v1
    ctx->r5 = SUB32(ctx->r4, ctx->r3);
L_80089BA8:
    // 0x80089BA8: lw          $v1, 0x3C($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X3C);
    // 0x80089BAC: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80089BB0: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x80089BB4: beq         $v1, $zero, L_80089BC4
    if (ctx->r3 == 0) {
        // 0x80089BB8: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80089BC4;
    }
    // 0x80089BB8: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80089BBC: b           L_80089BC4
    // 0x80089BC0: subu        $a2, $t7, $v1
    ctx->r6 = SUB32(ctx->r15, ctx->r3);
        goto L_80089BC4;
    // 0x80089BC0: subu        $a2, $t7, $v1
    ctx->r6 = SUB32(ctx->r15, ctx->r3);
L_80089BC4:
    // 0x80089BC4: subu        $a0, $a1, $a2
    ctx->r4 = SUB32(ctx->r5, ctx->r6);
    // 0x80089BC8: bgez        $a0, L_80089BD4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80089BCC: nop
    
            goto L_80089BD4;
    }
    // 0x80089BCC: nop

    // 0x80089BD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80089BD4:
    // 0x80089BD4: beq         $t1, $zero, L_80089DDC
    if (ctx->r9 == 0) {
        // 0x80089BD8: addiu       $fp, $a0, 0xF
        ctx->r30 = ADD32(ctx->r4, 0XF);
            goto L_80089DDC;
    }
    // 0x80089BD8: addiu       $fp, $a0, 0xF
    ctx->r30 = ADD32(ctx->r4, 0XF);
    // 0x80089BDC: addiu       $fp, $a0, 0xF
    ctx->r30 = ADD32(ctx->r4, 0XF);
    // 0x80089BE0: sra         $t8, $fp, 4
    ctx->r24 = S32(SIGNED(ctx->r30) >> 4);
    // 0x80089BE4: lh          $s5, 0x0($a3)
    ctx->r21 = MEM_H(ctx->r7, 0X0);
    // 0x80089BE8: lw          $s4, 0x40($s7)
    ctx->r20 = MEM_W(ctx->r23, 0X40);
    // 0x80089BEC: sll         $t1, $t8, 3
    ctx->r9 = S32(ctx->r24 << 3);
    // 0x80089BF0: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x80089BF4: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x80089BF8: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x80089BFC: sw          $t0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r8;
    // 0x80089C00: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x80089C04: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x80089C08: or          $fp, $t8, $zero
    ctx->r30 = ctx->r24 | 0;
    // 0x80089C0C: jal         0x800899B0
    // 0x80089C10: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    func_800899B0(rdram, ctx);
        goto after_0;
    // 0x80089C10: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    after_0:
    // 0x80089C14: lw          $v1, 0x3C($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X3C);
    // 0x80089C18: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x80089C1C: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x80089C20: lw          $t0, 0xB8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB8);
    // 0x80089C24: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80089C28: beq         $v1, $zero, L_80089C44
    if (ctx->r3 == 0) {
        // 0x80089C2C: or          $t2, $v0, $zero
        ctx->r10 = ctx->r2 | 0;
            goto L_80089C44;
    }
    // 0x80089C2C: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x80089C30: lh          $t9, 0x0($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X0);
    // 0x80089C34: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x80089C38: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x80089C3C: b           L_80089C50
    // 0x80089C40: sh          $t7, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r15;
        goto L_80089C50;
    // 0x80089C40: sh          $t7, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r15;
L_80089C44:
    // 0x80089C44: lh          $t8, 0x0($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X0);
    // 0x80089C48: addiu       $t9, $t8, 0x20
    ctx->r25 = ADD32(ctx->r24, 0X20);
    // 0x80089C4C: sh          $t9, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r25;
L_80089C50:
    // 0x80089C50: lw          $v0, 0x1C($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X1C);
    // 0x80089C54: lw          $t7, 0x28($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X28);
    // 0x80089C58: slt         $at, $a1, $t0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80089C5C: andi        $t6, $v0, 0xF
    ctx->r14 = ctx->r2 & 0XF;
    // 0x80089C60: sw          $t6, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = ctx->r14;
    // 0x80089C64: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80089C68: srl         $t9, $v0, 4
    ctx->r25 = S32(U32(ctx->r2) >> 4);
    // 0x80089C6C: sll         $t6, $t9, 3
    ctx->r14 = S32(ctx->r25 << 3);
    // 0x80089C70: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80089C74: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x80089C78: addiu       $t9, $t7, 0x9
    ctx->r25 = ADD32(ctx->r15, 0X9);
    // 0x80089C7C: sw          $t9, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r25;
    // 0x80089C80: sw          $v0, 0x38($s7)
    MEM_W(0X38, ctx->r23) = ctx->r2;
    // 0x80089C84: beq         $at, $zero, L_80089DAC
    if (ctx->r1 == 0) {
        // 0x80089C88: lh          $a2, 0x0($a3)
        ctx->r6 = MEM_H(ctx->r7, 0X0);
            goto L_80089DAC;
    }
    // 0x80089C88: lh          $a2, 0x0($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X0);
    // 0x80089C8C: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
L_80089C90:
    // 0x80089C90: addiu       $t8, $fp, 0x1
    ctx->r24 = ADD32(ctx->r30, 0X1);
    // 0x80089C94: sll         $t6, $t8, 5
    ctx->r14 = S32(ctx->r24 << 5);
    // 0x80089C98: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
    // 0x80089C9C: addu        $a3, $t6, $a2
    ctx->r7 = ADD32(ctx->r14, ctx->r6);
    // 0x80089CA0: addiu       $at, $zero, -0x20
    ctx->r1 = ADD32(0, -0X20);
    // 0x80089CA4: and         $t7, $a3, $at
    ctx->r15 = ctx->r7 & ctx->r1;
    // 0x80089CA8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80089CAC: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x80089CB0: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x80089CB4: beq         $v0, $at, L_80089CC8
    if (ctx->r2 == ctx->r1) {
        // 0x80089CB8: addu        $a2, $a2, $v1
        ctx->r6 = ADD32(ctx->r6, ctx->r3);
            goto L_80089CC8;
    }
    // 0x80089CB8: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80089CBC: beq         $v0, $zero, L_80089CC8
    if (ctx->r2 == 0) {
        // 0x80089CC0: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_80089CC8;
    }
    // 0x80089CC0: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x80089CC4: sw          $t9, 0x24($s7)
    MEM_W(0X24, ctx->r23) = ctx->r25;
L_80089CC8:
    // 0x80089CC8: lw          $t8, 0x20($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X20);
    // 0x80089CCC: lw          $t6, 0x1C($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X1C);
    // 0x80089CD0: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80089CD4: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x80089CD8: subu        $v0, $t8, $t6
    ctx->r2 = SUB32(ctx->r24, ctx->r14);
    // 0x80089CDC: sltu        $at, $t0, $v0
    ctx->r1 = ctx->r8 < ctx->r2 ? 1 : 0;
    // 0x80089CE0: beq         $at, $zero, L_80089CF0
    if (ctx->r1 == 0) {
        // 0x80089CE4: sll         $s5, $a3, 16
        ctx->r21 = S32(ctx->r7 << 16);
            goto L_80089CF0;
    }
    // 0x80089CE4: sll         $s5, $a3, 16
    ctx->r21 = S32(ctx->r7 << 16);
    // 0x80089CE8: b           L_80089CF4
    // 0x80089CEC: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
        goto L_80089CF4;
    // 0x80089CEC: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
L_80089CF0:
    // 0x80089CF0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80089CF4:
    // 0x80089CF4: lw          $t7, 0x3C($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X3C);
    // 0x80089CF8: sra         $t8, $s5, 16
    ctx->r24 = S32(SIGNED(ctx->r21) >> 16);
    // 0x80089CFC: or          $s5, $t8, $zero
    ctx->r21 = ctx->r24 | 0;
    // 0x80089D00: addu        $a0, $a1, $t7
    ctx->r4 = ADD32(ctx->r5, ctx->r15);
    // 0x80089D04: addiu       $a0, $a0, -0x10
    ctx->r4 = ADD32(ctx->r4, -0X10);
    // 0x80089D08: bgez        $a0, L_80089D14
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80089D0C: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80089D14;
    }
    // 0x80089D0C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80089D10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80089D14:
    // 0x80089D14: lw          $s4, 0x40($s7)
    ctx->r20 = MEM_W(ctx->r23, 0X40);
    // 0x80089D18: addiu       $fp, $a0, 0xF
    ctx->r30 = ADD32(ctx->r4, 0XF);
    // 0x80089D1C: sra         $t9, $fp, 4
    ctx->r25 = S32(SIGNED(ctx->r30) >> 4);
    // 0x80089D20: sll         $t1, $t9, 3
    ctx->r9 = S32(ctx->r25 << 3);
    // 0x80089D24: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80089D28: ori         $t6, $s4, 0x2
    ctx->r14 = ctx->r20 | 0X2;
    // 0x80089D2C: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x80089D30: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x80089D34: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x80089D38: or          $fp, $t9, $zero
    ctx->r30 = ctx->r25 | 0;
    // 0x80089D3C: sw          $t0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r8;
    // 0x80089D40: sw          $a3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r7;
    // 0x80089D44: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x80089D48: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x80089D4C: jal         0x800899B0
    // 0x80089D50: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    func_800899B0(rdram, ctx);
        goto after_1;
    // 0x80089D50: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    after_1:
    // 0x80089D54: lw          $t7, 0x3C($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X3C);
    // 0x80089D58: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x80089D5C: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80089D60: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x80089D64: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80089D68: addu        $t8, $t9, $a3
    ctx->r24 = ADD32(ctx->r25, ctx->r7);
    // 0x80089D6C: and         $t6, $t8, $at
    ctx->r14 = ctx->r24 & ctx->r1;
    // 0x80089D70: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x80089D74: lui         $at, 0xA00
    ctx->r1 = S32(0XA00 << 16);
    // 0x80089D78: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x80089D7C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80089D80: lw          $t0, 0xB8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB8);
    // 0x80089D84: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80089D88: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
    // 0x80089D8C: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x80089D90: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80089D94: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x80089D98: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x80089D9C: slt         $at, $a1, $t0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80089DA0: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80089DA4: bne         $at, $zero, L_80089C90
    if (ctx->r1 != 0) {
        // 0x80089DA8: addiu       $t2, $v0, 0x8
        ctx->r10 = ADD32(ctx->r2, 0X8);
            goto L_80089C90;
    }
    // 0x80089DA8: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
L_80089DAC:
    // 0x80089DAC: lw          $t9, 0x3C($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X3C);
    // 0x80089DB0: lw          $t7, 0x38($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X38);
    // 0x80089DB4: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x80089DB8: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x80089DBC: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x80089DC0: lw          $t8, 0x44($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X44);
    // 0x80089DC4: sw          $t6, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = ctx->r14;
    // 0x80089DC8: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x80089DCC: addu        $t6, $t8, $t1
    ctx->r14 = ADD32(ctx->r24, ctx->r9);
    // 0x80089DD0: sw          $t9, 0x38($s7)
    MEM_W(0X38, ctx->r23) = ctx->r25;
    // 0x80089DD4: b           L_80089F4C
    // 0x80089DD8: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
        goto L_80089F4C;
    // 0x80089DD8: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
L_80089DDC:
    // 0x80089DDC: lw          $v0, 0x28($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X28);
    // 0x80089DE0: sra         $t7, $fp, 4
    ctx->r15 = S32(SIGNED(ctx->r30) >> 4);
    // 0x80089DE4: lw          $t9, 0x44($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X44);
    // 0x80089DE8: sll         $t1, $t7, 3
    ctx->r9 = S32(ctx->r15 << 3);
    // 0x80089DEC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x80089DF0: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x80089DF4: or          $fp, $t7, $zero
    ctx->r30 = ctx->r15 | 0;
    // 0x80089DF8: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80089DFC: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x80089E00: subu        $t6, $t3, $t8
    ctx->r14 = SUB32(ctx->r11, ctx->r24);
    // 0x80089E04: subu        $v1, $t6, $t7
    ctx->r3 = SUB32(ctx->r14, ctx->r15);
    // 0x80089E08: bgez        $v1, L_80089E14
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80089E0C: sll         $a1, $fp, 4
        ctx->r5 = S32(ctx->r30 << 4);
            goto L_80089E14;
    }
    // 0x80089E0C: sll         $a1, $fp, 4
    ctx->r5 = S32(ctx->r30 << 4);
    // 0x80089E10: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80089E14:
    // 0x80089E14: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x80089E18: mflo        $v0
    ctx->r2 = lo;
    // 0x80089E1C: sll         $a0, $v0, 4
    ctx->r4 = S32(ctx->r2 << 4);
    // 0x80089E20: addu        $t4, $a1, $a2
    ctx->r12 = ADD32(ctx->r5, ctx->r6);
    // 0x80089E24: slt         $at, $t4, $a0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80089E28: beq         $at, $zero, L_80089E34
    if (ctx->r1 == 0) {
        // 0x80089E2C: or          $s0, $t2, $zero
        ctx->r16 = ctx->r10 | 0;
            goto L_80089E34;
    }
    // 0x80089E2C: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80089E30: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
L_80089E34:
    // 0x80089E34: andi        $t8, $a0, 0xF
    ctx->r24 = ctx->r4 & 0XF;
    // 0x80089E38: subu        $t6, $a0, $t8
    ctx->r14 = SUB32(ctx->r4, ctx->r24);
    // 0x80089E3C: slt         $at, $t6, $t0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80089E40: beq         $at, $zero, L_80089EF0
    if (ctx->r1 == 0) {
        // 0x80089E44: subu        $a2, $t1, $v1
        ctx->r6 = SUB32(ctx->r9, ctx->r3);
            goto L_80089EF0;
    }
    // 0x80089E44: subu        $a2, $t1, $v1
    ctx->r6 = SUB32(ctx->r9, ctx->r3);
    // 0x80089E48: lh          $s5, 0x0($a3)
    ctx->r21 = MEM_H(ctx->r7, 0X0);
    // 0x80089E4C: lw          $s4, 0x40($s7)
    ctx->r20 = MEM_W(ctx->r23, 0X40);
    // 0x80089E50: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80089E54: sw          $t5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r13;
    // 0x80089E58: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    // 0x80089E5C: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x80089E60: sw          $t0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r8;
    // 0x80089E64: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x80089E68: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x80089E6C: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x80089E70: subu        $s6, $a1, $a0
    ctx->r22 = SUB32(ctx->r5, ctx->r4);
    // 0x80089E74: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x80089E78: jal         0x800899B0
    // 0x80089E7C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    func_800899B0(rdram, ctx);
        goto after_2;
    // 0x80089E7C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_2:
    // 0x80089E80: lw          $v1, 0x3C($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X3C);
    // 0x80089E84: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x80089E88: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x80089E8C: lw          $t0, 0xB8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB8);
    // 0x80089E90: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80089E94: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x80089E98: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x80089E9C: beq         $v1, $zero, L_80089EB8
    if (ctx->r3 == 0) {
        // 0x80089EA0: or          $t2, $v0, $zero
        ctx->r10 = ctx->r2 | 0;
            goto L_80089EB8;
    }
    // 0x80089EA0: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x80089EA4: lh          $t7, 0x0($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X0);
    // 0x80089EA8: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x80089EAC: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x80089EB0: b           L_80089EC4
    // 0x80089EB4: sh          $t8, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r24;
        goto L_80089EC4;
    // 0x80089EB4: sh          $t8, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r24;
L_80089EB8:
    // 0x80089EB8: lh          $t6, 0x0($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X0);
    // 0x80089EBC: addiu       $t7, $t6, 0x20
    ctx->r15 = ADD32(ctx->r14, 0X20);
    // 0x80089EC0: sh          $t7, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r15;
L_80089EC4:
    // 0x80089EC4: lw          $t9, 0x3C($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X3C);
    // 0x80089EC8: lw          $t7, 0x38($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X38);
    // 0x80089ECC: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x80089ED0: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x80089ED4: lw          $t8, 0x44($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X44);
    // 0x80089ED8: sw          $t6, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = ctx->r14;
    // 0x80089EDC: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x80089EE0: addu        $t6, $t8, $t1
    ctx->r14 = ADD32(ctx->r24, ctx->r9);
    // 0x80089EE4: sw          $t9, 0x38($s7)
    MEM_W(0X38, ctx->r23) = ctx->r25;
    // 0x80089EE8: b           L_80089EF8
    // 0x80089EEC: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
        goto L_80089EF8;
    // 0x80089EEC: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
L_80089EF0:
    // 0x80089EF0: sw          $zero, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = 0;
    // 0x80089EF4: sw          $t3, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r11;
L_80089EF8:
    // 0x80089EF8: beq         $a0, $zero, L_80089F48
    if (ctx->r4 == 0) {
        // 0x80089EFC: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_80089F48;
    }
    // 0x80089EFC: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x80089F00: beq         $t5, $zero, L_80089F18
    if (ctx->r13 == 0) {
        // 0x80089F04: sw          $zero, 0x3C($s7)
        MEM_W(0X3C, ctx->r23) = 0;
            goto L_80089F18;
    }
    // 0x80089F04: sw          $zero, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = 0;
    // 0x80089F08: subu        $v1, $t4, $a0
    ctx->r3 = SUB32(ctx->r12, ctx->r4);
    // 0x80089F0C: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x80089F10: b           L_80089F1C
    // 0x80089F14: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
        goto L_80089F1C;
    // 0x80089F14: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_80089F18:
    // 0x80089F18: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80089F1C:
    // 0x80089F1C: lh          $t9, 0x0($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X0);
    // 0x80089F20: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80089F24: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80089F28: addu        $t8, $t9, $v1
    ctx->r24 = ADD32(ctx->r25, ctx->r3);
    // 0x80089F2C: and         $t6, $t8, $at
    ctx->r14 = ctx->r24 & ctx->r1;
    // 0x80089F30: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x80089F34: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80089F38: sll         $t9, $a0, 1
    ctx->r25 = S32(ctx->r4 << 1);
    // 0x80089F3C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80089F40: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80089F44: addiu       $t2, $t2, 0x8
    ctx->r10 = ADD32(ctx->r10, 0X8);
L_80089F48:
    // 0x80089F48: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_80089F4C:
    // 0x80089F4C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80089F50: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80089F54: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80089F58: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80089F5C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80089F60: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80089F64: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80089F68: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x80089F6C: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80089F70: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80089F74: jr          $ra
    // 0x80089F78: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x80089F78: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    // 0x80089F7C: nop

;}
RECOMP_FUNC void func_80089F80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80089F80: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x80089F84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80089F88: sltiu       $at, $t6, 0x9
    ctx->r1 = ctx->r14 < 0X9 ? 1 : 0;
    // 0x80089F8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80089F90: beq         $at, $zero, L_8008A040
    if (ctx->r1 == 0) {
        // 0x80089F94: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_8008A040;
    }
    // 0x80089F94: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80089F98: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80089F9C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x80089FA0: addu        $at, $at, $t6
    gpr jr_addend_80089FA8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80089FA4: lw          $t6, -0x4B20($at)
    ctx->r14 = ADD32(ctx->r1, -0X4B20);
    // 0x80089FA8: jr          $t6
    // 0x80089FAC: nop

    switch (jr_addend_80089FA8 >> 2) {
        case 0: goto L_80089FB0; break;
        case 1: goto L_8008A040; break;
        case 2: goto L_8008A040; break;
        case 3: goto L_80089FB8; break;
        case 4: goto L_8008A040; break;
        case 5: goto L_8008A040; break;
        case 6: goto L_8008A024; break;
        case 7: goto L_8008A034; break;
        case 8: goto L_80089FF4; break;
        default: switch_error(__func__, 0x80089FA8, 0x800DB4E0);
    }
    // 0x80089FAC: nop

L_80089FB0:
    // 0x80089FB0: b           L_8008A058
    // 0x80089FB4: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
        goto L_8008A058;
    // 0x80089FB4: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
L_80089FB8:
    // 0x80089FB8: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x80089FBC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80089FC0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80089FC4: sw          $t7, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r15;
    // 0x80089FC8: sw          $zero, 0x30($a3)
    MEM_W(0X30, ctx->r7) = 0;
    // 0x80089FCC: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
    // 0x80089FD0: beq         $a0, $zero, L_8008A058
    if (ctx->r4 == 0) {
        // 0x80089FD4: swc1        $f4, 0x20($a3)
        MEM_W(0X20, ctx->r7) = ctx->f4.u32l;
            goto L_8008A058;
    }
    // 0x80089FD4: swc1        $f4, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f4.u32l;
    // 0x80089FD8: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80089FDC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80089FE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80089FE4: jalr        $t9
    // 0x80089FE8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80089FE8: nop

    after_0:
    // 0x80089FEC: b           L_8008A05C
    // 0x80089FF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008A05C;
    // 0x80089FF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80089FF4:
    // 0x80089FF4: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x80089FF8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80089FFC: sw          $t8, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r24;
    // 0x8008A000: beql        $a0, $zero, L_8008A05C
    if (ctx->r4 == 0) {
        // 0x8008A004: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008A05C;
    }
    goto skip_0;
    // 0x8008A004: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8008A008: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8008A00C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8008A010: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8008A014: jalr        $t9
    // 0x8008A018: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8008A018: nop

    after_1:
    // 0x8008A01C: b           L_8008A05C
    // 0x8008A020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008A05C;
    // 0x8008A020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008A024:
    // 0x8008A024: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x8008A028: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8008A02C: b           L_8008A058
    // 0x8008A030: swc1        $f6, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f6.u32l;
        goto L_8008A058;
    // 0x8008A030: swc1        $f6, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f6.u32l;
L_8008A034:
    // 0x8008A034: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8008A038: b           L_8008A058
    // 0x8008A03C: sw          $t0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r8;
        goto L_8008A058;
    // 0x8008A03C: sw          $t0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r8;
L_8008A040:
    // 0x8008A040: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8008A044: beql        $a0, $zero, L_8008A05C
    if (ctx->r4 == 0) {
        // 0x8008A048: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008A05C;
    }
    goto skip_1;
    // 0x8008A048: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8008A04C: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8008A050: jalr        $t9
    // 0x8008A054: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8008A054: nop

    after_2:
L_8008A058:
    // 0x8008A058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008A05C:
    // 0x8008A05C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008A060: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008A064: jr          $ra
    // 0x8008A068: nop

    return;
    // 0x8008A068: nop

;}
RECOMP_FUNC void func_8008A06C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A06C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8008A070: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008A074: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x8008A078: lw          $t1, 0x0($a0)
    ctx->r9 = MEM_W(ctx->r4, 0X0);
    // 0x8008A07C: addiu       $t6, $zero, 0x140
    ctx->r14 = ADD32(0, 0X140);
    // 0x8008A080: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x8008A084: or          $t2, $a2, $zero
    ctx->r10 = ctx->r6 | 0;
    // 0x8008A088: bne         $a2, $zero, L_8008A098
    if (ctx->r6 != 0) {
        // 0x8008A08C: sh          $t6, 0x46($sp)
        MEM_H(0X46, ctx->r29) = ctx->r14;
            goto L_8008A098;
    }
    // 0x8008A08C: sh          $t6, 0x46($sp)
    MEM_H(0X46, ctx->r29) = ctx->r14;
    // 0x8008A090: b           L_8008A264
    // 0x8008A094: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
        goto L_8008A264;
    // 0x8008A094: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
L_8008A098:
    // 0x8008A098: lw          $t7, 0x1C($t0)
    ctx->r15 = MEM_W(ctx->r8, 0X1C);
    // 0x8008A09C: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    // 0x8008A0A0: beql        $t7, $zero, L_8008A10C
    if (ctx->r15 == 0) {
        // 0x8008A0A4: lwc1        $f2, 0x18($t0)
        ctx->f2.u32l = MEM_W(ctx->r8, 0X18);
            goto L_8008A10C;
    }
    goto skip_0;
    // 0x8008A0A4: lwc1        $f2, 0x18($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X18);
    skip_0:
    // 0x8008A0A8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8008A0AC: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x8008A0B0: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x8008A0B4: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8008A0B8: addiu       $a1, $sp, 0x46
    ctx->r5 = ADD32(ctx->r29, 0X46);
    // 0x8008A0BC: jalr        $t9
    // 0x8008A0C0: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8008A0C0: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    after_0:
    // 0x8008A0C4: lh          $t3, 0x46($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X46);
    // 0x8008A0C8: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x8008A0CC: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x8008A0D0: and         $t4, $t3, $at
    ctx->r12 = ctx->r11 & ctx->r1;
    // 0x8008A0D4: lui         $at, 0xA00
    ctx->r1 = S32(0XA00 << 16);
    // 0x8008A0D8: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x8008A0DC: or          $t5, $t4, $at
    ctx->r13 = ctx->r12 | ctx->r1;
    // 0x8008A0E0: sw          $t5, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r13;
    // 0x8008A0E4: lw          $t6, 0x54($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X54);
    // 0x8008A0E8: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8008A0EC: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x8008A0F0: lh          $t8, 0x0($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X0);
    // 0x8008A0F4: addiu       $a1, $v0, 0x8
    ctx->r5 = ADD32(ctx->r2, 0X8);
    // 0x8008A0F8: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8008A0FC: or          $t5, $t9, $t4
    ctx->r13 = ctx->r25 | ctx->r12;
    // 0x8008A100: b           L_8008A260
    // 0x8008A104: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
        goto L_8008A260;
    // 0x8008A104: sw          $t5, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r13;
    // 0x8008A108: lwc1        $f2, 0x18($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X18);
L_8008A10C:
    // 0x8008A10C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8008A110: ldc1        $f4, -0x4AF8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X4AF8);
    // 0x8008A114: cvt.d.s     $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f6.d = CVT_D_S(ctx->f2.fl);
    // 0x8008A118: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8008A11C: c.lt.d      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.d < ctx->f6.d;
    // 0x8008A120: nop

    // 0x8008A124: bc1fl       L_8008A13C
    if (!c1cs) {
        // 0x8008A128: lui         $at, 0x4700
        ctx->r1 = S32(0X4700 << 16);
            goto L_8008A13C;
    }
    goto skip_1;
    // 0x8008A128: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    skip_1:
    // 0x8008A12C: lwc1        $f8, -0x4AF0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X4AF0);
    // 0x8008A130: swc1        $f8, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f8.u32l;
    // 0x8008A134: lwc1        $f2, 0x18($t0)
    ctx->f2.u32l = MEM_W(ctx->r8, 0X18);
    // 0x8008A138: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
L_8008A13C:
    // 0x8008A13C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8008A140: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8008A144: addiu       $a1, $sp, 0x46
    ctx->r5 = ADD32(ctx->r29, 0X46);
    // 0x8008A148: mul.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f12.fl);
    // 0x8008A14C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x8008A150: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x8008A154: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8008A158: mtc1        $t7, $f18
    ctx->f18.u32l = ctx->r15;
    // 0x8008A15C: nop

    // 0x8008A160: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8008A164: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008A168: swc1        $f4, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f4.u32l;
    // 0x8008A16C: lwc1        $f6, 0x18($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X18);
    // 0x8008A170: div.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8008A174: lwc1        $f6, 0x20($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X20);
    // 0x8008A178: swc1        $f8, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f8.u32l;
    // 0x8008A17C: lwc1        $f10, 0x18($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X18);
    // 0x8008A180: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8008A184: add.s       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8008A188: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8008A18C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8008A190: nop

    // 0x8008A194: mtc1        $a2, $f16
    ctx->f16.u32l = ctx->r6;
    // 0x8008A198: nop

    // 0x8008A19C: cvt.s.w     $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    ctx->f10.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008A1A0: sub.s       $f18, $f0, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x8008A1A4: swc1        $f18, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->f18.u32l;
    // 0x8008A1A8: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x8008A1AC: sw          $t2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r10;
    // 0x8008A1B0: sw          $t0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r8;
    // 0x8008A1B4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8008A1B8: lw          $t9, 0x4($t1)
    ctx->r25 = MEM_W(ctx->r9, 0X4);
    // 0x8008A1BC: jalr        $t9
    // 0x8008A1C0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8008A1C0: nop

    after_1:
    // 0x8008A1C4: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x8008A1C8: lh          $t5, 0x46($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X46);
    // 0x8008A1CC: lui         $at, 0x4700
    ctx->r1 = S32(0X4700 << 16);
    // 0x8008A1D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008A1D4: lwc1        $f6, 0x18($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X18);
    // 0x8008A1D8: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8008A1DC: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x8008A1E0: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x8008A1E4: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8008A1E8: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8008A1EC: lw          $t8, 0x54($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X54);
    // 0x8008A1F0: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x8008A1F4: sll         $t5, $t2, 1
    ctx->r13 = S32(ctx->r10 << 1);
    // 0x8008A1F8: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x8008A1FC: andi        $t6, $t5, 0xFFFF
    ctx->r14 = ctx->r13 & 0XFFFF;
    // 0x8008A200: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x8008A204: sll         $t4, $t9, 16
    ctx->r12 = S32(ctx->r25 << 16);
    // 0x8008A208: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x8008A20C: trunc.w.s   $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8008A210: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8008A214: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8008A218: lw          $t3, 0x24($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X24);
    // 0x8008A21C: mfc1        $v1, $f16
    ctx->r3 = (int32_t)ctx->f16.u32l;
    // 0x8008A220: lui         $at, 0x500
    ctx->r1 = S32(0X500 << 16);
    // 0x8008A224: andi        $t9, $t3, 0xFF
    ctx->r25 = ctx->r11 & 0XFF;
    // 0x8008A228: sll         $t5, $t9, 16
    ctx->r13 = S32(ctx->r25 << 16);
    // 0x8008A22C: or          $t4, $t5, $at
    ctx->r12 = ctx->r13 | ctx->r1;
    // 0x8008A230: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x8008A234: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x8008A238: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x8008A23C: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    // 0x8008A240: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    // 0x8008A244: jal         0x80082090
    // 0x8008A248: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x8008A248: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    after_2:
    // 0x8008A24C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8008A250: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x8008A254: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x8008A258: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    // 0x8008A25C: sw          $zero, 0x24($t0)
    MEM_W(0X24, ctx->r8) = 0;
L_8008A260:
    // 0x8008A260: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
L_8008A264:
    // 0x8008A264: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008A268: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8008A26C: jr          $ra
    // 0x8008A270: nop

    return;
    // 0x8008A270: nop

    // 0x8008A274: nop

    // 0x8008A278: nop

    // 0x8008A27C: nop

;}
RECOMP_FUNC void func_8008A2A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A2A8: mtc1        $zero, $f3
    ctx->f_odd[(3 - 1) * 2] = 0;
    // 0x8008A2AC: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8008A2B0: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x8008A2B4: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8008A2B8: c.eq.d      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.d == ctx->f2.d;
    // 0x8008A2BC: nop

    // 0x8008A2C0: bc1fl       L_8008A2D4
    if (!c1cs) {
        // 0x8008A2C4: c.lt.d      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
            goto L_8008A2D4;
    }
    goto skip_0;
    // 0x8008A2C4: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    skip_0:
    // 0x8008A2C8: jr          $ra
    // 0x8008A2CC: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    return;
    // 0x8008A2CC: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    // 0x8008A2D0: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
L_8008A2D4:
    // 0x8008A2D4: mtc1        $at, $f15
    ctx->f_odd[(15 - 1) * 2] = ctx->r1;
    // 0x8008A2D8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8008A2DC: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8008A2E0: bc1fl       L_8008A2F4
    if (!c1cs) {
        // 0x8008A2E4: neg.d       $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = -ctx->f12.d;
            goto L_8008A2F4;
    }
    goto skip_1;
    // 0x8008A2E4: neg.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = -ctx->f12.d;
    skip_1:
    // 0x8008A2E8: b           L_8008A2F4
    // 0x8008A2EC: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
        goto L_8008A2F4;
    // 0x8008A2EC: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
    // 0x8008A2F0: neg.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = -ctx->f12.d;
L_8008A2F4:
    // 0x8008A2F4: c.le.d      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.d <= ctx->f0.d;
    // 0x8008A2F8: nop

    // 0x8008A2FC: bc1fl       L_8008A334
    if (!c1cs) {
        // 0x8008A300: lui         $at, 0x3FE0
        ctx->r1 = S32(0X3FE0 << 16);
            goto L_8008A334;
    }
    goto skip_2;
    // 0x8008A300: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    skip_2:
    // 0x8008A304: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8008A308: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8008A30C: nop

L_8008A310:
    // 0x8008A310: mul.d       $f0, $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f16.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f16.d);
    // 0x8008A314: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x8008A318: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8008A31C: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x8008A320: c.le.d      $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f14.d <= ctx->f0.d;
    // 0x8008A324: nop

    // 0x8008A328: bc1t        L_8008A310
    if (c1cs) {
        // 0x8008A32C: nop
    
            goto L_8008A310;
    }
    // 0x8008A32C: nop

    // 0x8008A330: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
L_8008A334:
    // 0x8008A334: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8008A338: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8008A33C: nop

    // 0x8008A340: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x8008A344: nop

    // 0x8008A348: bc1fl       L_8008A370
    if (!c1cs) {
        // 0x8008A34C: c.lt.d      $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
            goto L_8008A370;
    }
    goto skip_3;
    // 0x8008A34C: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
    skip_3:
    // 0x8008A350: add.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f0.d + ctx->f0.d;
L_8008A354:
    // 0x8008A354: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x8008A358: c.lt.d      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.d < ctx->f16.d;
    // 0x8008A35C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8008A360: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8008A364: bc1tl       L_8008A354
    if (c1cs) {
        // 0x8008A368: add.d       $f0, $f0, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f0.d + ctx->f0.d;
            goto L_8008A354;
    }
    goto skip_4;
    // 0x8008A368: add.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f0.d + ctx->f0.d;
    skip_4:
    // 0x8008A36C: c.lt.d      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.d < ctx->f12.d;
L_8008A370:
    // 0x8008A370: nop

    // 0x8008A374: bc1fl       L_8008A388
    if (!c1cs) {
        // 0x8008A378: neg.d       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = -ctx->f0.d;
            goto L_8008A388;
    }
    goto skip_5;
    // 0x8008A378: neg.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = -ctx->f0.d;
    skip_5:
    // 0x8008A37C: b           L_8008A388
    // 0x8008A380: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
        goto L_8008A388;
    // 0x8008A380: mov.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.d = ctx->f0.d;
    // 0x8008A384: neg.d       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = -ctx->f0.d;
L_8008A388:
    // 0x8008A388: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
    // 0x8008A38C: jr          $ra
    // 0x8008A390: nop

    return;
    // 0x8008A390: nop

;}
RECOMP_FUNC void func_8008A394(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A394: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008A398: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008A39C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008A3A0: beq         $a1, $v0, L_8008A440
    if (ctx->r5 == ctx->r2) {
        // 0x8008A3A4: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_8008A440;
    }
    // 0x8008A3A4: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8008A3A8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8008A3AC: beq         $a1, $at, L_8008A3CC
    if (ctx->r5 == ctx->r1) {
        // 0x8008A3B0: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8008A3CC;
    }
    // 0x8008A3B0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8008A3B4: beq         $a1, $at, L_8008A3EC
    if (ctx->r5 == ctx->r1) {
        // 0x8008A3B8: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_8008A3EC;
    }
    // 0x8008A3B8: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8008A3BC: beql        $a1, $at, L_8008A41C
    if (ctx->r5 == ctx->r1) {
        // 0x8008A3C0: lw          $a0, 0x0($a3)
        ctx->r4 = MEM_W(ctx->r7, 0X0);
            goto L_8008A41C;
    }
    goto skip_0;
    // 0x8008A3C0: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    skip_0:
    // 0x8008A3C4: b           L_8008A44C
    // 0x8008A3C8: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
        goto L_8008A44C;
    // 0x8008A3C8: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
L_8008A3CC:
    // 0x8008A3CC: lw          $v0, 0x40($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X40);
    // 0x8008A3D0: beql        $v0, $zero, L_8008A3E4
    if (ctx->r2 == 0) {
        // 0x8008A3D4: sw          $a2, 0x3C($a3)
        MEM_W(0X3C, ctx->r7) = ctx->r6;
            goto L_8008A3E4;
    }
    goto skip_1;
    // 0x8008A3D4: sw          $a2, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r6;
    skip_1:
    // 0x8008A3D8: b           L_8008A3E4
    // 0x8008A3DC: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
        goto L_8008A3E4;
    // 0x8008A3DC: sw          $a2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r6;
    // 0x8008A3E0: sw          $a2, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r6;
L_8008A3E4:
    // 0x8008A3E4: b           L_8008A460
    // 0x8008A3E8: sw          $a2, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r6;
        goto L_8008A460;
    // 0x8008A3E8: sw          $a2, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r6;
L_8008A3EC:
    // 0x8008A3EC: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8008A3F0: sw          $v0, 0x38($a3)
    MEM_W(0X38, ctx->r7) = ctx->r2;
    // 0x8008A3F4: sw          $zero, 0x48($a3)
    MEM_W(0X48, ctx->r7) = 0;
    // 0x8008A3F8: beq         $a0, $zero, L_8008A460
    if (ctx->r4 == 0) {
        // 0x8008A3FC: sh          $v0, 0x1A($a3)
        MEM_H(0X1A, ctx->r7) = ctx->r2;
            goto L_8008A460;
    }
    // 0x8008A3FC: sh          $v0, 0x1A($a3)
    MEM_H(0X1A, ctx->r7) = ctx->r2;
    // 0x8008A400: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8008A404: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8008A408: jalr        $t9
    // 0x8008A40C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8008A40C: nop

    after_0:
    // 0x8008A410: b           L_8008A464
    // 0x8008A414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008A464;
    // 0x8008A414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008A418: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
L_8008A41C:
    // 0x8008A41C: sw          $v0, 0x48($a3)
    MEM_W(0X48, ctx->r7) = ctx->r2;
    // 0x8008A420: beql        $a0, $zero, L_8008A464
    if (ctx->r4 == 0) {
        // 0x8008A424: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008A464;
    }
    goto skip_2;
    // 0x8008A424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x8008A428: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8008A42C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8008A430: jalr        $t9
    // 0x8008A434: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8008A434: nop

    after_1:
    // 0x8008A438: b           L_8008A464
    // 0x8008A43C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8008A464;
    // 0x8008A43C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008A440:
    // 0x8008A440: b           L_8008A460
    // 0x8008A444: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
        goto L_8008A460;
    // 0x8008A444: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
    // 0x8008A448: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
L_8008A44C:
    // 0x8008A44C: beql        $a0, $zero, L_8008A464
    if (ctx->r4 == 0) {
        // 0x8008A450: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8008A464;
    }
    goto skip_3;
    // 0x8008A450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_3:
    // 0x8008A454: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8008A458: jalr        $t9
    // 0x8008A45C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8008A45C: nop

    after_2:
L_8008A460:
    // 0x8008A460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8008A464:
    // 0x8008A464: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008A468: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008A46C: jr          $ra
    // 0x8008A470: nop

    return;
    // 0x8008A470: nop

;}
RECOMP_FUNC void func_8008A474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A474: addiu       $sp, $sp, -0xE8
    ctx->r29 = ADD32(ctx->r29, -0XE8);
    // 0x8008A478: bne         $a0, $zero, L_8008A4A8
    if (ctx->r4 != 0) {
        // 0x8008A47C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8008A4A8;
    }
    // 0x8008A47C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008A480: c.le.d      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.d <= ctx->f14.d;
    // 0x8008A484: ori         $t6, $zero, 0xFFFF
    ctx->r14 = 0 | 0XFFFF;
    // 0x8008A488: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008A48C: bc1f        L_8008A4A0
    if (!c1cs) {
        // 0x8008A490: nop
    
            goto L_8008A4A0;
    }
    // 0x8008A490: nop

    // 0x8008A494: sh          $t6, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r14;
    // 0x8008A498: b           L_8008A634
    // 0x8008A49C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_8008A634;
    // 0x8008A49C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_8008A4A0:
    // 0x8008A4A0: b           L_8008A634
    // 0x8008A4A4: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
        goto L_8008A634;
    // 0x8008A4A4: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
L_8008A4A8:
    // 0x8008A4A8: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8008A4AC: mtc1        $at, $f23
    ctx->f_odd[(23 - 1) * 2] = ctx->r1;
    // 0x8008A4B0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x8008A4B4: mtc1        $zero, $f5
    ctx->f_odd[(5 - 1) * 2] = 0;
    // 0x8008A4B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8008A4BC: c.lt.d      $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f14.d < ctx->f22.d;
    // 0x8008A4C0: addiu       $s2, $sp, 0x68
    ctx->r18 = ADD32(ctx->r29, 0X68);
    // 0x8008A4C4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8008A4C8: addiu       $t7, $t7, 0x2930
    ctx->r15 = ADD32(ctx->r15, 0X2930);
    // 0x8008A4CC: bc1f        L_8008A4D8
    if (!c1cs) {
        // 0x8008A4D0: or          $t6, $s2, $zero
        ctx->r14 = ctx->r18 | 0;
            goto L_8008A4D8;
    }
    // 0x8008A4D0: or          $t6, $s2, $zero
    ctx->r14 = ctx->r18 | 0;
    // 0x8008A4D4: mov.d       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.d = ctx->f22.d;
L_8008A4D8:
    // 0x8008A4D8: c.le.d      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.d <= ctx->f4.d;
    // 0x8008A4DC: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8008A4E0: addiu       $t9, $t7, 0x3C
    ctx->r25 = ADD32(ctx->r15, 0X3C);
    // 0x8008A4E4: bc1f        L_8008A4F8
    if (!c1cs) {
        // 0x8008A4E8: nop
    
            goto L_8008A4F8;
    }
    // 0x8008A4E8: nop

    // 0x8008A4EC: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8008A4F0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8008A4F4: nop

L_8008A4F8:
    // 0x8008A4F8: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8008A4FC: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8008A500: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8008A504: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x8008A508: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8008A50C: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x8008A510: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x8008A514: bne         $t7, $t9, L_8008A4F8
    if (ctx->r15 != ctx->r25) {
        // 0x8008A518: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8008A4F8;
    }
    // 0x8008A518: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x8008A51C: mtc1        $a0, $f8
    ctx->f8.u32l = ctx->r4;
    // 0x8008A520: lui         $t8, 0x4000
    ctx->r24 = S32(0X4000 << 16);
    // 0x8008A524: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8008A528: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x8008A52C: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8008A530: addiu       $a2, $sp, 0xB0
    ctx->r6 = ADD32(ctx->r29, 0XB0);
    // 0x8008A534: cvt.d.w     $f20, $f6
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 6);
    ctx->f20.d = CVT_D_W(ctx->f6.u32l);
    // 0x8008A538: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x8008A53C: div.d       $f4, $f22, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = DIV_D(ctx->f22.d, ctx->f10.d);
    // 0x8008A540: div.d       $f12, $f14, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.d); NAN_CHECK(ctx->f16.d); 
    ctx->f12.d = DIV_D(ctx->f14.d, ctx->f16.d);
    // 0x8008A544: mul.d       $f2, $f4, $f20
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f20.d); 
    ctx->f2.d = MUL_D(ctx->f4.d, ctx->f20.d);
    // 0x8008A548: trunc.w.d   $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    ctx->f6.u32l = TRUNC_W_D(ctx->f2.d);
    // 0x8008A54C: mfc1        $s0, $f6
    ctx->r16 = (int32_t)ctx->f6.u32l;
    // 0x8008A550: jal         0x8008A2A8
    // 0x8008A554: nop

    func_8008A2A8(rdram, ctx);
        goto after_0;
    // 0x8008A554: nop

    after_0:
    // 0x8008A558: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x8008A55C: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8008A560: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x8008A564: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8008A568: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x8008A56C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8008A570: mul.d       $f2, $f0, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f10.d); 
    ctx->f2.d = MUL_D(ctx->f0.d, ctx->f10.d);
    // 0x8008A574: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x8008A578: ldc1        $f8, -0x4AE0($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X4AE0);
    // 0x8008A57C: lui         $at, 0x3FF0
    ctx->r1 = S32(0X3FF0 << 16);
    // 0x8008A580: trunc.w.d   $f4, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    ctx->f4.u32l = TRUNC_W_D(ctx->f2.d);
    // 0x8008A584: mov.d       $f2, $f22
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 22);
    ctx->f2.d = ctx->f22.d;
    // 0x8008A588: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x8008A58C: nop

    // 0x8008A590: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x8008A594: addu        $t7, $s2, $t9
    ctx->r15 = ADD32(ctx->r18, ctx->r25);
    // 0x8008A598: ldc1        $f6, -0x40($t7)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r15, -0X40);
    // 0x8008A59C: add.d       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f4.d = ctx->f6.d + ctx->f10.d;
    // 0x8008A5A0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8008A5A4: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x8008A5A8: mul.d       $f12, $f4, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f12.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x8008A5AC: nop

    // 0x8008A5B0: mul.d       $f14, $f6, $f20
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f20.d); 
    ctx->f14.d = MUL_D(ctx->f6.d, ctx->f20.d);
    // 0x8008A5B4: div.d       $f12, $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f14.d); 
    ctx->f12.d = DIV_D(ctx->f12.d, ctx->f14.d);
    // 0x8008A5B8: beq         $s0, $zero, L_8008A5E0
    if (ctx->r16 == 0) {
        // 0x8008A5BC: add.d       $f0, $f22, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = ctx->f22.d + ctx->f12.d;
            goto L_8008A5E0;
    }
    // 0x8008A5BC: add.d       $f0, $f22, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f22.d); NAN_CHECK(ctx->f12.d); 
    ctx->f0.d = ctx->f22.d + ctx->f12.d;
L_8008A5C0:
    // 0x8008A5C0: andi        $t8, $s0, 0x1
    ctx->r24 = ctx->r16 & 0X1;
    // 0x8008A5C4: beq         $t8, $zero, L_8008A5D4
    if (ctx->r24 == 0) {
        // 0x8008A5C8: sra         $t9, $s0, 1
        ctx->r25 = S32(SIGNED(ctx->r16) >> 1);
            goto L_8008A5D4;
    }
    // 0x8008A5C8: sra         $t9, $s0, 1
    ctx->r25 = S32(SIGNED(ctx->r16) >> 1);
    // 0x8008A5CC: mul.d       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f0.d);
    // 0x8008A5D0: nop

L_8008A5D4:
    // 0x8008A5D4: mul.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f0.d);
    // 0x8008A5D8: bne         $t9, $zero, L_8008A5C0
    if (ctx->r25 != 0) {
        // 0x8008A5DC: or          $s0, $t9, $zero
        ctx->r16 = ctx->r25 | 0;
            goto L_8008A5C0;
    }
    // 0x8008A5DC: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
L_8008A5E0:
    // 0x8008A5E0: mul.d       $f0, $f2, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = MUL_D(ctx->f2.d, ctx->f2.d);
    // 0x8008A5E4: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8008A5E8: mul.d       $f12, $f0, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f12.d = MUL_D(ctx->f0.d, ctx->f0.d);
    // 0x8008A5EC: nop

    // 0x8008A5F0: mul.d       $f2, $f12, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = MUL_D(ctx->f12.d, ctx->f12.d);
    // 0x8008A5F4: trunc.w.d   $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    ctx->f10.u32l = TRUNC_W_D(ctx->f2.d);
    // 0x8008A5F8: mfc1        $v1, $f10
    ctx->r3 = (int32_t)ctx->f10.u32l;
    // 0x8008A5FC: nop

    // 0x8008A600: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x8008A604: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8008A608: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8008A60C: nop

    // 0x8008A610: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008A614: ldc1        $f4, -0x4AD8($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, -0X4AD8);
    // 0x8008A618: cvt.d.s     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f6.d = CVT_D_S(ctx->f8.fl);
    // 0x8008A61C: sub.d       $f10, $f2, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f6.d); 
    ctx->f10.d = ctx->f2.d - ctx->f6.d;
    // 0x8008A620: mul.d       $f8, $f10, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f4.d); 
    ctx->f8.d = MUL_D(ctx->f10.d, ctx->f4.d);
    // 0x8008A624: trunc.w.d   $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.u32l = TRUNC_W_D(ctx->f8.d);
    // 0x8008A628: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x8008A62C: nop

    // 0x8008A630: sh          $t7, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r15;
L_8008A634:
    // 0x8008A634: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008A638: addiu       $sp, $sp, 0xE8
    ctx->r29 = ADD32(ctx->r29, 0XE8);
    // 0x8008A63C: jr          $ra
    // 0x8008A640: nop

    return;
    // 0x8008A640: nop

;}
RECOMP_FUNC void func_8008A644(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A644: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008A648: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008A64C: lw          $t6, 0x48($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X48);
    // 0x8008A650: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008A654: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8008A658: bne         $t6, $at, L_8008A668
    if (ctx->r14 != ctx->r1) {
        // 0x8008A65C: nop
    
            goto L_8008A668;
    }
    // 0x8008A65C: nop

    // 0x8008A660: bnel        $s5, $zero, L_8008A674
    if (ctx->r21 != 0) {
        // 0x8008A664: sw          $t0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r8;
            goto L_8008A674;
    }
    goto skip_0;
    // 0x8008A664: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    skip_0:
L_8008A668:
    // 0x8008A668: b           L_8008A8CC
    // 0x8008A66C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_8008A8CC;
    // 0x8008A66C: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x8008A670: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
L_8008A674:
    // 0x8008A674: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x8008A678: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x8008A67C: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8008A680: jalr        $t9
    // 0x8008A684: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8008A684: nop

    after_0:
    // 0x8008A688: lh          $t7, 0x0($s6)
    ctx->r15 = MEM_H(ctx->r22, 0X0);
    // 0x8008A68C: lui         $at, 0x800
    ctx->r1 = S32(0X800 << 16);
    // 0x8008A690: sll         $s7, $s5, 1
    ctx->r23 = S32(ctx->r21 << 1);
    // 0x8008A694: andi        $t8, $t7, 0xFFFF
    ctx->r24 = ctx->r15 & 0XFFFF;
    // 0x8008A698: or          $t6, $t8, $at
    ctx->r14 = ctx->r24 | ctx->r1;
    // 0x8008A69C: sw          $t6, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r14;
    // 0x8008A6A0: lh          $t9, 0x0($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X0);
    // 0x8008A6A4: lui         $at, 0x808
    ctx->r1 = S32(0X808 << 16);
    // 0x8008A6A8: addiu       $s4, $v0, 0x10
    ctx->r20 = ADD32(ctx->r2, 0X10);
    // 0x8008A6AC: addiu       $t8, $t9, 0x440
    ctx->r24 = ADD32(ctx->r25, 0X440);
    // 0x8008A6B0: sll         $t6, $t8, 16
    ctx->r14 = S32(ctx->r24 << 16);
    // 0x8008A6B4: andi        $t9, $s7, 0xFFFF
    ctx->r25 = ctx->r23 & 0XFFFF;
    // 0x8008A6B8: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x8008A6BC: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x8008A6C0: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x8008A6C4: addiu       $t6, $t8, 0x580
    ctx->r14 = ADD32(ctx->r24, 0X580);
    // 0x8008A6C8: andi        $t9, $t6, 0xFFFF
    ctx->r25 = ctx->r14 & 0XFFFF;
    // 0x8008A6CC: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x8008A6D0: sw          $t7, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r15;
    // 0x8008A6D4: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x8008A6D8: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x8008A6DC: addiu       $t8, $v1, 0x800
    ctx->r24 = ADD32(ctx->r3, 0X800);
    // 0x8008A6E0: andi        $t6, $t8, 0xFFFF
    ctx->r14 = ctx->r24 & 0XFFFF;
    // 0x8008A6E4: addiu       $t7, $v1, 0x6C0
    ctx->r15 = ADD32(ctx->r3, 0X6C0);
    // 0x8008A6E8: sll         $t8, $t7, 16
    ctx->r24 = S32(ctx->r15 << 16);
    // 0x8008A6EC: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x8008A6F0: sw          $t9, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r25;
    // 0x8008A6F4: lw          $t7, 0x38($s3)
    ctx->r15 = MEM_W(ctx->r19, 0X38);
    // 0x8008A6F8: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8008A6FC: beql        $t7, $zero, L_8008A89C
    if (ctx->r15 == 0) {
        // 0x8008A700: lui         $t7, 0x308
        ctx->r15 = S32(0X308 << 16);
            goto L_8008A89C;
    }
    goto skip_1;
    // 0x8008A700: lui         $t7, 0x308
    ctx->r15 = S32(0X308 << 16);
    skip_1:
    // 0x8008A704: lh          $t6, 0x18($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X18);
    // 0x8008A708: sw          $zero, 0x38($s3)
    MEM_W(0X38, ctx->r19) = 0;
    // 0x8008A70C: lh          $t7, 0x1A($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X1A);
    // 0x8008A710: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x8008A714: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008A718: lh          $t9, 0x2830($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X2830);
    // 0x8008A71C: lw          $a0, 0x34($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X34);
    // 0x8008A720: addiu       $s1, $s3, 0x24
    ctx->r17 = ADD32(ctx->r19, 0X24);
    // 0x8008A724: multu       $t9, $t7
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008A728: lh          $t9, 0x1C($s3)
    ctx->r25 = MEM_H(ctx->r19, 0X1C);
    // 0x8008A72C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x8008A730: nop

    // 0x8008A734: cvt.d.w     $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    ctx->f16.d = CVT_D_W(ctx->f4.u32l);
    // 0x8008A738: mflo        $t6
    ctx->r14 = lo;
    // 0x8008A73C: sra         $t8, $t6, 15
    ctx->r24 = S32(SIGNED(ctx->r14) >> 15);
    // 0x8008A740: sh          $t8, 0x28($s3)
    MEM_H(0X28, ctx->r19) = ctx->r24;
    // 0x8008A744: lh          $t7, 0x28($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X28);
    // 0x8008A748: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x8008A74C: jal         0x8008A474
    // 0x8008A750: cvt.d.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.d = CVT_D_W(ctx->f6.u32l);
    func_8008A474(rdram, ctx);
        goto after_1;
    // 0x8008A750: cvt.d.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.d = CVT_D_W(ctx->f6.u32l);
    after_1:
    // 0x8008A754: lh          $t6, 0x18($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X18);
    // 0x8008A758: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8008A75C: sh          $v0, 0x26($s3)
    MEM_H(0X26, ctx->r19) = ctx->r2;
    // 0x8008A760: sll         $t8, $t6, 1
    ctx->r24 = S32(ctx->r14 << 1);
    // 0x8008A764: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x8008A768: addu        $t7, $t7, $t9
    ctx->r15 = ADD32(ctx->r15, ctx->r25);
    // 0x8008A76C: lh          $t7, 0x292E($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X292E);
    // 0x8008A770: lh          $t6, 0x1A($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X1A);
    // 0x8008A774: lw          $a0, 0x34($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X34);
    // 0x8008A778: addiu       $s1, $s3, 0x2A
    ctx->r17 = ADD32(ctx->r19, 0X2A);
    // 0x8008A77C: multu       $t7, $t6
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008A780: lh          $t7, 0x1E($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X1E);
    // 0x8008A784: mtc1        $t7, $f8
    ctx->f8.u32l = ctx->r15;
    // 0x8008A788: nop

    // 0x8008A78C: cvt.d.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.d = CVT_D_W(ctx->f8.u32l);
    // 0x8008A790: mflo        $t8
    ctx->r24 = lo;
    // 0x8008A794: sra         $t9, $t8, 15
    ctx->r25 = S32(SIGNED(ctx->r24) >> 15);
    // 0x8008A798: sh          $t9, 0x2E($s3)
    MEM_H(0X2E, ctx->r19) = ctx->r25;
    // 0x8008A79C: lh          $t6, 0x2E($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X2E);
    // 0x8008A7A0: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8008A7A4: jal         0x8008A474
    // 0x8008A7A8: cvt.d.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.d = CVT_D_W(ctx->f10.u32l);
    func_8008A474(rdram, ctx);
        goto after_2;
    // 0x8008A7A8: cvt.d.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.d = CVT_D_W(ctx->f10.u32l);
    after_2:
    // 0x8008A7AC: lh          $t8, 0x1C($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X1C);
    // 0x8008A7B0: sh          $v0, 0x2C($s3)
    MEM_H(0X2C, ctx->r19) = ctx->r2;
    // 0x8008A7B4: or          $v1, $s4, $zero
    ctx->r3 = ctx->r20 | 0;
    // 0x8008A7B8: lui         $at, 0x906
    ctx->r1 = S32(0X906 << 16);
    // 0x8008A7BC: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x8008A7C0: or          $t7, $t9, $at
    ctx->r15 = ctx->r25 | ctx->r1;
    // 0x8008A7C4: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x8008A7C8: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x8008A7CC: lh          $t6, 0x1E($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X1E);
    // 0x8008A7D0: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x8008A7D4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8008A7D8: lui         $at, 0x904
    ctx->r1 = S32(0X904 << 16);
    // 0x8008A7DC: andi        $t8, $t6, 0xFFFF
    ctx->r24 = ctx->r14 & 0XFFFF;
    // 0x8008A7E0: or          $t9, $t8, $at
    ctx->r25 = ctx->r24 | ctx->r1;
    // 0x8008A7E4: sw          $t9, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r25;
    // 0x8008A7E8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8008A7EC: lh          $t7, 0x28($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X28);
    // 0x8008A7F0: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x8008A7F4: lui         $at, 0x902
    ctx->r1 = S32(0X902 << 16);
    // 0x8008A7F8: andi        $t6, $t7, 0xFFFF
    ctx->r14 = ctx->r15 & 0XFFFF;
    // 0x8008A7FC: or          $t8, $t6, $at
    ctx->r24 = ctx->r14 | ctx->r1;
    // 0x8008A800: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8008A804: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8008A808: lh          $t7, 0x26($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X26);
    // 0x8008A80C: lhu         $t9, 0x24($s3)
    ctx->r25 = MEM_HU(ctx->r19, 0X24);
    // 0x8008A810: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x8008A814: sll         $t6, $t7, 16
    ctx->r14 = S32(ctx->r15 << 16);
    // 0x8008A818: or          $t7, $t6, $t9
    ctx->r15 = ctx->r14 | ctx->r25;
    // 0x8008A81C: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x8008A820: lh          $t8, 0x2E($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X2E);
    // 0x8008A824: lui         $at, 0x900
    ctx->r1 = S32(0X900 << 16);
    // 0x8008A828: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8008A82C: andi        $t6, $t8, 0xFFFF
    ctx->r14 = ctx->r24 & 0XFFFF;
    // 0x8008A830: or          $t9, $t6, $at
    ctx->r25 = ctx->r14 | ctx->r1;
    // 0x8008A834: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x8008A838: lh          $t8, 0x2C($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X2C);
    // 0x8008A83C: lhu         $t7, 0x2A($s3)
    ctx->r15 = MEM_HU(ctx->r19, 0X2A);
    // 0x8008A840: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x8008A844: sll         $t6, $t8, 16
    ctx->r14 = S32(ctx->r24 << 16);
    // 0x8008A848: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8008A84C: sw          $t8, 0x4($a2)
    MEM_W(0X4, ctx->r6) = ctx->r24;
    // 0x8008A850: lh          $t9, 0x20($s3)
    ctx->r25 = MEM_H(ctx->r19, 0X20);
    // 0x8008A854: lui         $at, 0x908
    ctx->r1 = S32(0X908 << 16);
    // 0x8008A858: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x8008A85C: andi        $t6, $t9, 0xFFFF
    ctx->r14 = ctx->r25 & 0XFFFF;
    // 0x8008A860: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x8008A864: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x8008A868: lh          $t8, 0x22($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X22);
    // 0x8008A86C: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x8008A870: or          $s0, $s4, $zero
    ctx->r16 = ctx->r20 | 0;
    // 0x8008A874: andi        $t9, $t8, 0xFFFF
    ctx->r25 = ctx->r24 & 0XFFFF;
    // 0x8008A878: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x8008A87C: lui         $t6, 0x309
    ctx->r14 = S32(0X309 << 16);
    // 0x8008A880: sw          $t6, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r14;
    // 0x8008A884: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x8008A888: jal         0x80082090
    // 0x8008A88C: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_3;
    // 0x8008A88C: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    after_3:
    // 0x8008A890: b           L_8008A8B0
    // 0x8008A894: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
        goto L_8008A8B0;
    // 0x8008A894: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8008A898: lui         $t7, 0x308
    ctx->r15 = S32(0X308 << 16);
L_8008A89C:
    // 0x8008A89C: sw          $t7, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r15;
    // 0x8008A8A0: lw          $a0, 0x14($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X14);
    // 0x8008A8A4: jal         0x80082090
    // 0x8008A8A8: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_4;
    // 0x8008A8A8: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    after_4:
    // 0x8008A8AC: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
L_8008A8B0:
    // 0x8008A8B0: lh          $t8, 0x0($s6)
    ctx->r24 = MEM_H(ctx->r22, 0X0);
    // 0x8008A8B4: or          $v0, $s4, $zero
    ctx->r2 = ctx->r20 | 0;
    // 0x8008A8B8: addu        $t9, $t8, $s7
    ctx->r25 = ADD32(ctx->r24, ctx->r23);
    // 0x8008A8BC: sh          $t9, 0x0($s6)
    MEM_H(0X0, ctx->r22) = ctx->r25;
    // 0x8008A8C0: lw          $t6, 0x30($s3)
    ctx->r14 = MEM_W(ctx->r19, 0X30);
    // 0x8008A8C4: addu        $t7, $t6, $s5
    ctx->r15 = ADD32(ctx->r14, ctx->r21);
    // 0x8008A8C8: sw          $t7, 0x30($s3)
    MEM_W(0X30, ctx->r19) = ctx->r15;
L_8008A8CC:
    // 0x8008A8CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008A8D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008A8D4: jr          $ra
    // 0x8008A8D8: nop

    return;
    // 0x8008A8D8: nop

;}
RECOMP_FUNC void func_8008A8DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A8DC: sw          $a1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r5;
    // 0x8008A8E0: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x8008A8E4: sw          $a2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r6;
    // 0x8008A8E8: andi        $t8, $a2, 0xFFFF
    ctx->r24 = ctx->r6 & 0XFFFF;
    // 0x8008A8EC: sra         $t9, $a0, 3
    ctx->r25 = S32(SIGNED(ctx->r4) >> 3);
    // 0x8008A8F0: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8008A8F4: sra         $a1, $t6, 16
    ctx->r5 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8008A8F8: bne         $t9, $zero, L_8008A908
    if (ctx->r25 != 0) {
        // 0x8008A8FC: or          $a0, $t9, $zero
        ctx->r4 = ctx->r25 | 0;
            goto L_8008A908;
    }
    // 0x8008A8FC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8008A900: jr          $ra
    // 0x8008A904: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x8008A904: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_8008A908:
    // 0x8008A908: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x8008A90C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8008A910: mtc1        $a2, $f8
    ctx->f8.u32l = ctx->r6;
    // 0x8008A914: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008A918: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008A91C: bgez        $a2, L_8008A934
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8008A920: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8008A934;
    }
    // 0x8008A920: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8008A924: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8008A928: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008A92C: nop

    // 0x8008A930: add.s       $f10, $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f4.fl;
L_8008A934:
    // 0x8008A934: lui         $at, 0x4780
    ctx->r1 = S32(0X4780 << 16);
    // 0x8008A938: add.s       $f8, $f6, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8008A93C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008A940: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8008A944: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8008A948: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x8008A94C: div.s       $f0, $f8, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f8.fl, ctx->f4.fl);
    // 0x8008A950: andi        $t7, $a0, 0x1
    ctx->r15 = ctx->r4 & 0X1;
L_8008A954:
    // 0x8008A954: beq         $t7, $zero, L_8008A964
    if (ctx->r15 == 0) {
        // 0x8008A958: sra         $t8, $a0, 1
        ctx->r24 = S32(SIGNED(ctx->r4) >> 1);
            goto L_8008A964;
    }
    // 0x8008A958: sra         $t8, $a0, 1
    ctx->r24 = S32(SIGNED(ctx->r4) >> 1);
    // 0x8008A95C: mul.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f0.fl);
    // 0x8008A960: nop

L_8008A964:
    // 0x8008A964: beq         $t8, $zero, L_8008A97C
    if (ctx->r24 == 0) {
        // 0x8008A968: or          $a0, $t8, $zero
        ctx->r4 = ctx->r24 | 0;
            goto L_8008A97C;
    }
    // 0x8008A968: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x8008A96C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8008A970: mul.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x8008A974: bnel        $v0, $v1, L_8008A954
    if (ctx->r2 != ctx->r3) {
        // 0x8008A978: andi        $t7, $a0, 0x1
        ctx->r15 = ctx->r4 & 0X1;
            goto L_8008A954;
    }
    goto skip_0;
    // 0x8008A978: andi        $t7, $a0, 0x1
    ctx->r15 = ctx->r4 & 0X1;
    skip_0:
L_8008A97C:
    // 0x8008A97C: mul.s       $f0, $f12, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f12.fl, ctx->f2.fl);
    // 0x8008A980: nop

    // 0x8008A984: jr          $ra
    // 0x8008A988: nop

    return;
    // 0x8008A988: nop

;}
RECOMP_FUNC void func_8008A98C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A98C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x8008A990: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    // 0x8008A994: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8008A998: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8008A99C: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8008A9A0: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8008A9A4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8008A9A8: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8008A9AC: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8008A9B0: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8008A9B4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8008A9B8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8008A9BC: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x8008A9C0: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x8008A9C4: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x8008A9C8: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x8008A9CC: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x8008A9D0: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x8008A9D4: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x8008A9D8: sh          $zero, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = 0;
    // 0x8008A9DC: sh          $zero, 0x9E($sp)
    MEM_H(0X9E, ctx->r29) = 0;
    // 0x8008A9E0: sw          $t6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r14;
    // 0x8008A9E4: lw          $t8, 0x3C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X3C);
    // 0x8008A9E8: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x8008A9EC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8008A9F0: beql        $t8, $zero, L_8008AE64
    if (ctx->r24 == 0) {
        // 0x8008A9F4: or          $s3, $fp, $zero
        ctx->r19 = ctx->r30 | 0;
            goto L_8008AE64;
    }
    goto skip_0;
    // 0x8008A9F4: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
    skip_0:
    // 0x8008A9F8: lw          $v1, 0x3C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X3C);
L_8008A9FC:
    // 0x8008A9FC: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
    // 0x8008AA00: lw          $t8, 0xB0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB0);
    // 0x8008AA04: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x8008AA08: subu        $t7, $t9, $v0
    ctx->r15 = SUB32(ctx->r25, ctx->r2);
    // 0x8008AA0C: slt         $at, $t8, $t7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8008AA10: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x8008AA14: bne         $at, $zero, L_8008AE60
    if (ctx->r1 != 0) {
        // 0x8008AA18: sw          $t9, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->r25;
            goto L_8008AE60;
    }
    // 0x8008AA18: sw          $t9, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r25;
    // 0x8008AA1C: lhu         $t9, 0x8($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X8);
    // 0x8008AA20: sltiu       $at, $t9, 0x11
    ctx->r1 = ctx->r25 < 0X11 ? 1 : 0;
    // 0x8008AA24: beq         $at, $zero, L_8008ADD8
    if (ctx->r1 == 0) {
        // 0x8008AA28: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_8008ADD8;
    }
    // 0x8008AA28: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008AA2C: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8008AA30: addu        $at, $at, $t9
    gpr jr_addend_8008AA38 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8008AA34: lw          $t9, -0x4AD0($at)
    ctx->r25 = ADD32(ctx->r1, -0X4AD0);
    // 0x8008AA38: jr          $t9
    // 0x8008AA3C: nop

    switch (jr_addend_8008AA38 >> 2) {
        case 0: goto L_8008ADB8; break;
        case 1: goto L_8008ADD8; break;
        case 2: goto L_8008ADD8; break;
        case 3: goto L_8008ADD8; break;
        case 4: goto L_8008ADD8; break;
        case 5: goto L_8008ADD8; break;
        case 6: goto L_8008ADD8; break;
        case 7: goto L_8008ADD8; break;
        case 8: goto L_8008ADD8; break;
        case 9: goto L_8008ADD8; break;
        case 10: goto L_8008ADD8; break;
        case 11: goto L_8008AB80; break;
        case 12: goto L_8008AB80; break;
        case 13: goto L_8008AA40; break;
        case 14: goto L_8008AD24; break;
        case 15: goto L_8008AD78; break;
        case 16: goto L_8008AB80; break;
        default: switch_error(__func__, 0x8008AA38, 0x800DB530);
    }
    // 0x8008AA3C: nop

L_8008AA40:
    // 0x8008AA40: lh          $t6, 0xA($v1)
    ctx->r14 = MEM_H(ctx->r3, 0XA);
    // 0x8008AA44: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x8008AA48: beql        $t6, $zero, L_8008AA68
    if (ctx->r14 == 0) {
        // 0x8008AA4C: lw          $t9, 0x8($fp)
        ctx->r25 = MEM_W(ctx->r30, 0X8);
            goto L_8008AA68;
    }
    goto skip_1;
    // 0x8008AA4C: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    skip_1:
    // 0x8008AA50: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x8008AA54: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x8008AA58: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8008AA5C: jalr        $t9
    // 0x8008AA60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8008AA60: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8008AA64: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
L_8008AA68:
    // 0x8008AA68: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x8008AA6C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8008AA70: jalr        $t9
    // 0x8008AA74: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8008AA74: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    after_1:
    // 0x8008AA78: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x8008AA7C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x8008AA80: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8008AA84: jalr        $t9
    // 0x8008AA88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8008AA88: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8008AA8C: sw          $s1, 0x38($fp)
    MEM_W(0X38, ctx->r30) = ctx->r17;
    // 0x8008AA90: sw          $zero, 0x30($fp)
    MEM_W(0X30, ctx->r30) = 0;
    // 0x8008AA94: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x8008AA98: sw          $t8, 0x34($fp)
    MEM_W(0X34, ctx->r30) = ctx->r24;
    // 0x8008AA9C: lh          $v1, 0x10($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X10);
    // 0x8008AAA0: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008AAA4: mflo        $a0
    ctx->r4 = lo;
    // 0x8008AAA8: sra         $t7, $a0, 15
    ctx->r15 = S32(SIGNED(ctx->r4) >> 15);
    // 0x8008AAAC: sh          $t7, 0x1A($fp)
    MEM_H(0X1A, ctx->r30) = ctx->r15;
    // 0x8008AAB0: lbu         $t6, 0x12($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X12);
    // 0x8008AAB4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8008AAB8: sh          $t6, 0x18($fp)
    MEM_H(0X18, ctx->r30) = ctx->r14;
    // 0x8008AABC: lbu         $t9, 0x13($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X13);
    // 0x8008AAC0: sll         $t8, $t9, 1
    ctx->r24 = S32(ctx->r25 << 1);
    // 0x8008AAC4: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8008AAC8: lh          $t7, 0x2830($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X2830);
    // 0x8008AACC: sh          $t7, 0x20($fp)
    MEM_H(0X20, ctx->r30) = ctx->r15;
    // 0x8008AAD0: lbu         $t6, 0x13($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X13);
    // 0x8008AAD4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8008AAD8: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x8008AADC: negu        $t8, $t9
    ctx->r24 = SUB32(0, ctx->r25);
    // 0x8008AAE0: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8008AAE4: lh          $t7, 0x292E($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X292E);
    // 0x8008AAE8: sh          $t7, 0x22($fp)
    MEM_H(0X22, ctx->r30) = ctx->r15;
    // 0x8008AAEC: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x8008AAF0: beql        $t6, $zero, L_8008AB08
    if (ctx->r14 == 0) {
        // 0x8008AAF4: lh          $v0, 0x18($fp)
        ctx->r2 = MEM_H(ctx->r30, 0X18);
            goto L_8008AB08;
    }
    goto skip_2;
    // 0x8008AAF4: lh          $v0, 0x18($fp)
    ctx->r2 = MEM_H(ctx->r30, 0X18);
    skip_2:
    // 0x8008AAF8: sh          $s1, 0x1C($fp)
    MEM_H(0X1C, ctx->r30) = ctx->r17;
    // 0x8008AAFC: b           L_8008AB4C
    // 0x8008AB00: sh          $s1, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r17;
        goto L_8008AB4C;
    // 0x8008AB00: sh          $s1, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r17;
    // 0x8008AB04: lh          $v0, 0x18($fp)
    ctx->r2 = MEM_H(ctx->r30, 0X18);
L_8008AB08:
    // 0x8008AB08: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8008AB0C: lh          $v1, 0x1A($fp)
    ctx->r3 = MEM_H(ctx->r30, 0X1A);
    // 0x8008AB10: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x8008AB14: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x8008AB18: lh          $t8, 0x2830($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X2830);
    // 0x8008AB1C: negu        $t9, $t9
    ctx->r25 = SUB32(0, ctx->r25);
    // 0x8008AB20: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008AB24: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8008AB28: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x8008AB2C: mflo        $t7
    ctx->r15 = lo;
    // 0x8008AB30: sra         $t6, $t7, 15
    ctx->r14 = S32(SIGNED(ctx->r15) >> 15);
    // 0x8008AB34: sh          $t6, 0x1C($fp)
    MEM_H(0X1C, ctx->r30) = ctx->r14;
    // 0x8008AB38: lh          $t8, 0x292E($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X292E);
    // 0x8008AB3C: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008AB40: mflo        $t7
    ctx->r15 = lo;
    // 0x8008AB44: sra         $t6, $t7, 15
    ctx->r14 = S32(SIGNED(ctx->r15) >> 15);
    // 0x8008AB48: sh          $t6, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r14;
L_8008AB4C:
    // 0x8008AB4C: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x8008AB50: beql        $t9, $zero, L_8008AE18
    if (ctx->r25 == 0) {
        // 0x8008AB54: lw          $t8, 0x60($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X60);
            goto L_8008AE18;
    }
    goto skip_3;
    // 0x8008AB54: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    skip_3:
    // 0x8008AB58: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8008AB5C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8008AB60: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x8008AB64: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x8008AB68: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x8008AB6C: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8008AB70: jalr        $t9
    // 0x8008AB74: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x8008AB74: nop

    after_3:
    // 0x8008AB78: b           L_8008AE18
    // 0x8008AB7C: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
        goto L_8008AE18;
    // 0x8008AB7C: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
L_8008AB80:
    // 0x8008AB80: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
    // 0x8008AB84: addiu       $s6, $sp, 0x9E
    ctx->r22 = ADD32(ctx->r29, 0X9E);
    // 0x8008AB88: addiu       $s0, $sp, 0x8E
    ctx->r16 = ADD32(ctx->r29, 0X8E);
    // 0x8008AB8C: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x8008AB90: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x8008AB94: jal         0x8008A644
    // 0x8008AB98: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    func_8008A644(rdram, ctx);
        goto after_4;
    // 0x8008AB98: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    after_4:
    // 0x8008AB9C: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x8008ABA0: lw          $a0, 0x34($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X34);
    // 0x8008ABA4: lw          $a3, 0x30($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X30);
    // 0x8008ABA8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8008ABAC: slt         $at, $a3, $a0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8008ABB0: bnel        $at, $zero, L_8008AC1C
    if (ctx->r1 != 0) {
        // 0x8008ABB4: lh          $t6, 0x1C($fp)
        ctx->r14 = MEM_H(ctx->r30, 0X1C);
            goto L_8008AC1C;
    }
    goto skip_4;
    // 0x8008ABB4: lh          $t6, 0x1C($fp)
    ctx->r14 = MEM_H(ctx->r30, 0X1C);
    skip_4:
    // 0x8008ABB8: lh          $v0, 0x18($fp)
    ctx->r2 = MEM_H(ctx->r30, 0X18);
    // 0x8008ABBC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8008ABC0: lh          $v1, 0x1A($fp)
    ctx->r3 = MEM_H(ctx->r30, 0X1A);
    // 0x8008ABC4: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x8008ABC8: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8008ABCC: lh          $t7, 0x2830($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X2830);
    // 0x8008ABD0: negu        $t8, $t8
    ctx->r24 = SUB32(0, ctx->r24);
    // 0x8008ABD4: multu       $t7, $v1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008ABD8: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8008ABDC: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8008ABE0: mflo        $t6
    ctx->r14 = lo;
    // 0x8008ABE4: sra         $t9, $t6, 15
    ctx->r25 = S32(SIGNED(ctx->r14) >> 15);
    // 0x8008ABE8: sh          $t9, 0x28($fp)
    MEM_H(0X28, ctx->r30) = ctx->r25;
    // 0x8008ABEC: lh          $t7, 0x292E($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X292E);
    // 0x8008ABF0: lh          $t8, 0x28($fp)
    ctx->r24 = MEM_H(ctx->r30, 0X28);
    // 0x8008ABF4: sw          $a0, 0x30($fp)
    MEM_W(0X30, ctx->r30) = ctx->r4;
    // 0x8008ABF8: multu       $t7, $v1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008ABFC: sh          $t8, 0x1C($fp)
    MEM_H(0X1C, ctx->r30) = ctx->r24;
    // 0x8008AC00: mflo        $t6
    ctx->r14 = lo;
    // 0x8008AC04: sra         $t9, $t6, 15
    ctx->r25 = S32(SIGNED(ctx->r14) >> 15);
    // 0x8008AC08: sh          $t9, 0x2E($fp)
    MEM_H(0X2E, ctx->r30) = ctx->r25;
    // 0x8008AC0C: lh          $t7, 0x2E($fp)
    ctx->r15 = MEM_H(ctx->r30, 0X2E);
    // 0x8008AC10: b           L_8008AC6C
    // 0x8008AC14: sh          $t7, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r15;
        goto L_8008AC6C;
    // 0x8008AC14: sh          $t7, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r15;
    // 0x8008AC18: lh          $t6, 0x1C($fp)
    ctx->r14 = MEM_H(ctx->r30, 0X1C);
L_8008AC1C:
    // 0x8008AC1C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8008AC20: lh          $a1, 0x26($fp)
    ctx->r5 = MEM_H(ctx->r30, 0X26);
    // 0x8008AC24: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8008AC28: lhu         $a2, 0x24($fp)
    ctx->r6 = MEM_HU(ctx->r30, 0X24);
    // 0x8008AC2C: jal         0x8008A8DC
    // 0x8008AC30: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    func_8008A8DC(rdram, ctx);
        goto after_5;
    // 0x8008AC30: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_5:
    // 0x8008AC34: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8008AC38: lh          $t7, 0x1E($fp)
    ctx->r15 = MEM_H(ctx->r30, 0X1E);
    // 0x8008AC3C: lw          $a0, 0x30($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X30);
    // 0x8008AC40: lh          $a1, 0x2C($fp)
    ctx->r5 = MEM_H(ctx->r30, 0X2C);
    // 0x8008AC44: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x8008AC48: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8008AC4C: lhu         $a2, 0x2A($fp)
    ctx->r6 = MEM_HU(ctx->r30, 0X2A);
    // 0x8008AC50: sh          $t8, 0x1C($fp)
    MEM_H(0X1C, ctx->r30) = ctx->r24;
    // 0x8008AC54: jal         0x8008A8DC
    // 0x8008AC58: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    func_8008A8DC(rdram, ctx);
        goto after_6;
    // 0x8008AC58: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_6:
    // 0x8008AC5C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8008AC60: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x8008AC64: nop

    // 0x8008AC68: sh          $t9, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r25;
L_8008AC6C:
    // 0x8008AC6C: lh          $t8, 0x1C($fp)
    ctx->r24 = MEM_H(ctx->r30, 0X1C);
    // 0x8008AC70: bnel        $t8, $zero, L_8008AC80
    if (ctx->r24 != 0) {
        // 0x8008AC74: lh          $t7, 0x1E($fp)
        ctx->r15 = MEM_H(ctx->r30, 0X1E);
            goto L_8008AC80;
    }
    goto skip_5;
    // 0x8008AC74: lh          $t7, 0x1E($fp)
    ctx->r15 = MEM_H(ctx->r30, 0X1E);
    skip_5:
    // 0x8008AC78: sh          $s1, 0x1C($fp)
    MEM_H(0X1C, ctx->r30) = ctx->r17;
    // 0x8008AC7C: lh          $t7, 0x1E($fp)
    ctx->r15 = MEM_H(ctx->r30, 0X1E);
L_8008AC80:
    // 0x8008AC80: bnel        $t7, $zero, L_8008AC90
    if (ctx->r15 != 0) {
        // 0x8008AC84: lw          $v1, 0x3C($fp)
        ctx->r3 = MEM_W(ctx->r30, 0X3C);
            goto L_8008AC90;
    }
    goto skip_6;
    // 0x8008AC84: lw          $v1, 0x3C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X3C);
    skip_6:
    // 0x8008AC88: sh          $s1, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r17;
    // 0x8008AC8C: lw          $v1, 0x3C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X3C);
L_8008AC90:
    // 0x8008AC90: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8008AC94: lh          $a0, 0x8($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X8);
    // 0x8008AC98: bnel        $a0, $at, L_8008ACB0
    if (ctx->r4 != ctx->r1) {
        // 0x8008AC9C: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_8008ACB0;
    }
    goto skip_7;
    // 0x8008AC9C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    skip_7:
    // 0x8008ACA0: lw          $t6, 0xC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC);
    // 0x8008ACA4: sh          $t6, 0x18($fp)
    MEM_H(0X18, ctx->r30) = ctx->r14;
    // 0x8008ACA8: lh          $a0, 0x8($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X8);
    // 0x8008ACAC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
L_8008ACB0:
    // 0x8008ACB0: bnel        $a0, $at, L_8008ACE0
    if (ctx->r4 != ctx->r1) {
        // 0x8008ACB4: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_8008ACE0;
    }
    goto skip_8;
    // 0x8008ACB4: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    skip_8:
    // 0x8008ACB8: sw          $zero, 0x30($fp)
    MEM_W(0X30, ctx->r30) = 0;
    // 0x8008ACBC: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x8008ACC0: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008ACC4: mflo        $v0
    ctx->r2 = lo;
    // 0x8008ACC8: sra         $t9, $v0, 15
    ctx->r25 = S32(SIGNED(ctx->r2) >> 15);
    // 0x8008ACCC: sh          $t9, 0x1A($fp)
    MEM_H(0X1A, ctx->r30) = ctx->r25;
    // 0x8008ACD0: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    // 0x8008ACD4: sw          $t8, 0x34($fp)
    MEM_W(0X34, ctx->r30) = ctx->r24;
    // 0x8008ACD8: lh          $a0, 0x8($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X8);
    // 0x8008ACDC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
L_8008ACE0:
    // 0x8008ACE0: bne         $a0, $at, L_8008AD1C
    if (ctx->r4 != ctx->r1) {
        // 0x8008ACE4: nop
    
            goto L_8008AD1C;
    }
    // 0x8008ACE4: nop

    // 0x8008ACE8: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x8008ACEC: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8008ACF0: sll         $t6, $t7, 1
    ctx->r14 = S32(ctx->r15 << 1);
    // 0x8008ACF4: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x8008ACF8: lh          $t9, 0x2830($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X2830);
    // 0x8008ACFC: sh          $t9, 0x20($fp)
    MEM_H(0X20, ctx->r30) = ctx->r25;
    // 0x8008AD00: lw          $t8, 0xC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XC);
    // 0x8008AD04: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8008AD08: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x8008AD0C: negu        $t6, $t7
    ctx->r14 = SUB32(0, ctx->r15);
    // 0x8008AD10: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x8008AD14: lh          $t9, 0x292E($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X292E);
    // 0x8008AD18: sh          $t9, 0x22($fp)
    MEM_H(0X22, ctx->r30) = ctx->r25;
L_8008AD1C:
    // 0x8008AD1C: b           L_8008AE14
    // 0x8008AD20: sw          $s1, 0x38($fp)
    MEM_W(0X38, ctx->r30) = ctx->r17;
        goto L_8008AE14;
    // 0x8008AD20: sw          $s1, 0x38($fp)
    MEM_W(0X38, ctx->r30) = ctx->r17;
L_8008AD24:
    // 0x8008AD24: lh          $t8, 0xA($v1)
    ctx->r24 = MEM_H(ctx->r3, 0XA);
    // 0x8008AD28: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x8008AD2C: beql        $t8, $zero, L_8008AD4C
    if (ctx->r24 == 0) {
        // 0x8008AD30: lw          $t9, 0x8($fp)
        ctx->r25 = MEM_W(ctx->r30, 0X8);
            goto L_8008AD4C;
    }
    goto skip_9;
    // 0x8008AD30: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    skip_9:
    // 0x8008AD34: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x8008AD38: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x8008AD3C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8008AD40: jalr        $t9
    // 0x8008AD44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x8008AD44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x8008AD48: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
L_8008AD4C:
    // 0x8008AD4C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x8008AD50: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8008AD54: jalr        $t9
    // 0x8008AD58: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x8008AD58: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    after_8:
    // 0x8008AD5C: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x8008AD60: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x8008AD64: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8008AD68: jalr        $t9
    // 0x8008AD6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x8008AD6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x8008AD70: b           L_8008AE18
    // 0x8008AD74: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
        goto L_8008AE18;
    // 0x8008AD74: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
L_8008AD78:
    // 0x8008AD78: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
    // 0x8008AD7C: addiu       $s6, $sp, 0x9E
    ctx->r22 = ADD32(ctx->r29, 0X9E);
    // 0x8008AD80: addiu       $s0, $sp, 0x8E
    ctx->r16 = ADD32(ctx->r29, 0X8E);
    // 0x8008AD84: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x8008AD88: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x8008AD8C: jal         0x8008A644
    // 0x8008AD90: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    func_8008A644(rdram, ctx);
        goto after_10;
    // 0x8008AD90: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    after_10:
    // 0x8008AD94: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x8008AD98: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x8008AD9C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8008ADA0: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x8008ADA4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8008ADA8: jalr        $t9
    // 0x8008ADAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x8008ADAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x8008ADB0: b           L_8008AE18
    // 0x8008ADB4: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
        goto L_8008AE18;
    // 0x8008ADB4: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
L_8008ADB8:
    // 0x8008ADB8: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x8008ADBC: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8008ADC0: lw          $a0, 0x1890($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1890);
    // 0x8008ADC4: sw          $zero, 0xD8($t7)
    MEM_W(0XD8, ctx->r15) = 0;
    // 0x8008ADC8: jal         0x80082230
    // 0x8008ADCC: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    func_80082230(rdram, ctx);
        goto after_12;
    // 0x8008ADCC: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    after_12:
    // 0x8008ADD0: b           L_8008AE18
    // 0x8008ADD4: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
        goto L_8008AE18;
    // 0x8008ADD4: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
L_8008ADD8:
    // 0x8008ADD8: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
    // 0x8008ADDC: addiu       $s6, $sp, 0x9E
    ctx->r22 = ADD32(ctx->r29, 0X9E);
    // 0x8008ADE0: addiu       $s0, $sp, 0x8E
    ctx->r16 = ADD32(ctx->r29, 0X8E);
    // 0x8008ADE4: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x8008ADE8: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x8008ADEC: jal         0x8008A644
    // 0x8008ADF0: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    func_8008A644(rdram, ctx);
        goto after_13;
    // 0x8008ADF0: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    after_13:
    // 0x8008ADF4: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x8008ADF8: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x8008ADFC: lw          $v1, 0x3C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X3C);
    // 0x8008AE00: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8008AE04: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x8008AE08: lh          $a1, 0x8($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X8);
    // 0x8008AE0C: jalr        $t9
    // 0x8008AE10: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x8008AE10: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    after_14:
L_8008AE14:
    // 0x8008AE14: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
L_8008AE18:
    // 0x8008AE18: lh          $t6, 0x8E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X8E);
    // 0x8008AE1C: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x8008AE20: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x8008AE24: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x8008AE28: sh          $t9, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r25;
    // 0x8008AE2C: subu        $t7, $t6, $t8
    ctx->r15 = SUB32(ctx->r14, ctx->r24);
    // 0x8008AE30: sw          $t7, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r15;
    // 0x8008AE34: lw          $a0, 0x3C($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X3C);
    // 0x8008AE38: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8008AE3C: bne         $t9, $zero, L_8008AE48
    if (ctx->r25 != 0) {
        // 0x8008AE40: sw          $t9, 0x3C($fp)
        MEM_W(0X3C, ctx->r30) = ctx->r25;
            goto L_8008AE48;
    }
    // 0x8008AE40: sw          $t9, 0x3C($fp)
    MEM_W(0X3C, ctx->r30) = ctx->r25;
    // 0x8008AE44: sw          $zero, 0x40($fp)
    MEM_W(0X40, ctx->r30) = 0;
L_8008AE48:
    // 0x8008AE48: jal         0x800822C8
    // 0x8008AE4C: nop

    func_800822C8(rdram, ctx);
        goto after_15;
    // 0x8008AE4C: nop

    after_15:
    // 0x8008AE50: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x8008AE54: lw          $t7, 0x3C($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X3C);
    // 0x8008AE58: bnel        $t7, $zero, L_8008A9FC
    if (ctx->r15 != 0) {
        // 0x8008AE5C: lw          $v1, 0x3C($fp)
        ctx->r3 = MEM_W(ctx->r30, 0X3C);
            goto L_8008A9FC;
    }
    goto skip_10;
    // 0x8008AE5C: lw          $v1, 0x3C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X3C);
    skip_10:
L_8008AE60:
    // 0x8008AE60: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
L_8008AE64:
    // 0x8008AE64: addiu       $s6, $sp, 0x9E
    ctx->r22 = ADD32(ctx->r29, 0X9E);
    // 0x8008AE68: addiu       $s0, $sp, 0x8E
    ctx->r16 = ADD32(ctx->r29, 0X8E);
    // 0x8008AE6C: lw          $s5, 0xB0($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XB0);
    // 0x8008AE70: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x8008AE74: jal         0x8008A644
    // 0x8008AE78: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    func_8008A644(rdram, ctx);
        goto after_16;
    // 0x8008AE78: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    after_16:
    // 0x8008AE7C: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x8008AE80: lw          $t9, 0x30($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X30);
    // 0x8008AE84: lw          $a0, 0x34($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X34);
    // 0x8008AE88: slt         $at, $a0, $t9
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8008AE8C: beql        $at, $zero, L_8008AE9C
    if (ctx->r1 == 0) {
        // 0x8008AE90: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_8008AE9C;
    }
    goto skip_11;
    // 0x8008AE90: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_11:
    // 0x8008AE94: sw          $a0, 0x30($fp)
    MEM_W(0X30, ctx->r30) = ctx->r4;
    // 0x8008AE98: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_8008AE9C:
    // 0x8008AE9C: lw          $v0, 0xA4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA4);
    // 0x8008AEA0: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x8008AEA4: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x8008AEA8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8008AEAC: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8008AEB0: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x8008AEB4: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x8008AEB8: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8008AEBC: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8008AEC0: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x8008AEC4: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x8008AEC8: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8008AECC: jr          $ra
    // 0x8008AED0: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x8008AED0: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    // 0x8008AED4: nop

    // 0x8008AED8: nop

    // 0x8008AEDC: nop

;}
RECOMP_FUNC void func_8008AEE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008AEE0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8008AEE4: bne         $a1, $at, L_8008AF08
    if (ctx->r5 != ctx->r1) {
        // 0x8008AEE8: lw          $v0, 0x1C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X1C);
            goto L_8008AF08;
    }
    // 0x8008AEE8: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x8008AEEC: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x8008AEF0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008AEF4: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x8008AEF8: sw          $a2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r6;
    // 0x8008AEFC: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x8008AF00: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8008AF04: sw          $t0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r8;
L_8008AF08:
    // 0x8008AF08: jr          $ra
    // 0x8008AF0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8008AF0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8008AF10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008AF10: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8008AF14: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x8008AF18: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8008AF1C: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8008AF20: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8008AF24: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8008AF28: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8008AF2C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8008AF30: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8008AF34: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8008AF38: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x8008AF3C: lui         $t6, 0x200
    ctx->r14 = S32(0X200 << 16);
    // 0x8008AF40: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x8008AF44: lui         $t7, 0x200
    ctx->r15 = S32(0X200 << 16);
    // 0x8008AF48: ori         $t6, $t6, 0x6C0
    ctx->r14 = ctx->r14 | 0X6C0;
    // 0x8008AF4C: ori         $t7, $t7, 0x800
    ctx->r15 = ctx->r15 | 0X800;
    // 0x8008AF50: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x8008AF54: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x8008AF58: sw          $t7, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r15;
    // 0x8008AF5C: sw          $v0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r2;
    // 0x8008AF60: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x8008AF64: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x8008AF68: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x8008AF6C: or          $s6, $a3, $zero
    ctx->r22 = ctx->r7 | 0;
    // 0x8008AF70: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x8008AF74: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8008AF78: blez        $t8, L_8008AFBC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8008AF7C: addiu       $s2, $t0, 0x10
        ctx->r18 = ADD32(ctx->r8, 0X10);
            goto L_8008AFBC;
    }
    // 0x8008AF7C: addiu       $s2, $t0, 0x10
    ctx->r18 = ADD32(ctx->r8, 0X10);
    // 0x8008AF80: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
L_8008AF84:
    // 0x8008AF84: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8008AF88: sw          $s2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r18;
    // 0x8008AF8C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8008AF90: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x8008AF94: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x8008AF98: or          $a3, $s6, $zero
    ctx->r7 = ctx->r22 | 0;
    // 0x8008AF9C: jalr        $t9
    // 0x8008AFA0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8008AFA0: nop

    after_0:
    // 0x8008AFA4: lw          $t1, 0x14($s3)
    ctx->r9 = MEM_W(ctx->r19, 0X14);
    // 0x8008AFA8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8008AFAC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8008AFB0: slt         $at, $s0, $t1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8008AFB4: bne         $at, $zero, L_8008AF84
    if (ctx->r1 != 0) {
        // 0x8008AFB8: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_8008AF84;
    }
    // 0x8008AFB8: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
L_8008AFBC:
    // 0x8008AFBC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8008AFC0: or          $v0, $s2, $zero
    ctx->r2 = ctx->r18 | 0;
    // 0x8008AFC4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8008AFC8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8008AFCC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8008AFD0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8008AFD4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8008AFD8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8008AFDC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8008AFE0: jr          $ra
    // 0x8008AFE4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8008AFE4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8008AFE8: nop

    // 0x8008AFEC: nop

;}
RECOMP_FUNC void func_8008AFF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008AFF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008AFF4: beq         $a1, $at, L_8008B010
    if (ctx->r5 == ctx->r1) {
        // 0x8008AFF8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8008B010;
    }
    // 0x8008AFF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008AFFC: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x8008B000: beql        $a1, $at, L_8008B01C
    if (ctx->r5 == ctx->r1) {
        // 0x8008B004: sw          $a2, 0x14($a0)
        MEM_W(0X14, ctx->r4) = ctx->r6;
            goto L_8008B01C;
    }
    goto skip_0;
    // 0x8008B004: sw          $a2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r6;
    skip_0:
    // 0x8008B008: jr          $ra
    // 0x8008B00C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8008B00C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008B010:
    // 0x8008B010: jr          $ra
    // 0x8008B014: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    return;
    // 0x8008B014: sw          $a2, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r6;
    // 0x8008B018: sw          $a2, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r6;
L_8008B01C:
    // 0x8008B01C: jr          $ra
    // 0x8008B020: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8008B020: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_8008B024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B024: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008B028: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008B02C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8008B030: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8008B034: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8008B038: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8008B03C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8008B040: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x8008B044: jalr        $t9
    // 0x8008B048: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8008B048: nop

    after_0:
    // 0x8008B04C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x8008B050: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8008B054: lui         $t2, 0x440
    ctx->r10 = S32(0X440 << 16);
    // 0x8008B058: sll         $t8, $a2, 1
    ctx->r24 = S32(ctx->r6 << 1);
    // 0x8008B05C: sll         $t3, $a2, 2
    ctx->r11 = S32(ctx->r6 << 2);
    // 0x8008B060: andi        $t0, $t8, 0xFFFF
    ctx->r8 = ctx->r24 & 0XFFFF;
    // 0x8008B064: ori         $t2, $t2, 0x580
    ctx->r10 = ctx->r10 | 0X580;
    // 0x8008B068: lui         $t1, 0xD00
    ctx->r9 = S32(0XD00 << 16);
    // 0x8008B06C: andi        $t4, $t3, 0xFFFF
    ctx->r12 = ctx->r11 & 0XFFFF;
    // 0x8008B070: lui         $t5, 0x600
    ctx->r13 = S32(0X600 << 16);
    // 0x8008B074: sw          $t0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r8;
    // 0x8008B078: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x8008B07C: sw          $t1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r9;
    // 0x8008B080: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x8008B084: sw          $t4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r12;
    // 0x8008B088: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x8008B08C: sw          $t5, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r13;
    // 0x8008B090: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8008B094: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x8008B098: lw          $t7, 0x14($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X14);
    // 0x8008B09C: sw          $t7, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r15;
    // 0x8008B0A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008B0A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008B0A8: jr          $ra
    // 0x8008B0AC: nop

    return;
    // 0x8008B0AC: nop

;}
RECOMP_FUNC void func_8008B200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B200: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8008B204: lw          $t6, 0x18D0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X18D0);
    // 0x8008B208: bne         $t6, $zero, L_8008B218
    if (ctx->r14 != 0) {
        // 0x8008B20C: nop
    
            goto L_8008B218;
    }
    // 0x8008B20C: nop

    // 0x8008B210: jr          $ra
    // 0x8008B214: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8008B214: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008B218:
    // 0x8008B218: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008B21C: lw          $v0, 0x18D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X18D8);
    // 0x8008B220: jr          $ra
    // 0x8008B224: nop

    return;
    // 0x8008B224: nop

    // 0x8008B228: nop

    // 0x8008B22C: nop

;}
RECOMP_FUNC void func_8008B230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B230: mtc0        $a0, Status
    cop0_status_write(ctx, ctx->r4);    // 0x8008B234: nop

    // 0x8008B238: jr          $ra
    // 0x8008B23C: nop

    return;
    // 0x8008B23C: nop

;}
RECOMP_FUNC void func_8008B240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B240: mfc0        $v0, Status
    ctx->r2 = cop0_status_read(ctx);
    // 0x8008B244: jr          $ra
    // 0x8008B248: nop

    return;
    // 0x8008B248: nop

    // 0x8008B24C: nop

;}
RECOMP_FUNC void func_8008B250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B250: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8008B254: ctc1        $a0, $FpcCsr
    set_cop1_cs(ctx->r4);
    // 0x8008B258: jr          $ra
    // 0x8008B25C: nop

    return;
    // 0x8008B25C: nop

;}
RECOMP_FUNC void func_8008B300(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
;}
RECOMP_FUNC void func_8008B5B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B5B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008B5B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008B5B8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8008B5BC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008B5C0: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8008B5C4: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8008B5C8: sw          $t6, 0x2970($at)
    MEM_W(0X2970, ctx->r1) = ctx->r14;
    // 0x8008B5CC: addiu       $a1, $a1, -0x74C0
    ctx->r5 = ADD32(ctx->r5, -0X74C0);
    // 0x8008B5D0: addiu       $a0, $a0, -0x74B8
    ctx->r4 = ADD32(ctx->r4, -0X74B8);
    // 0x8008B5D4: jal         0x80081C80
    // 0x8008B5D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x8008B5D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8008B5DC: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8008B5E0: addiu       $a0, $a0, -0x74B8
    ctx->r4 = ADD32(ctx->r4, -0X74B8);
    // 0x8008B5E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008B5E8: jal         0x800828B0
    // 0x8008B5EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8008B5EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8008B5F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008B5F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008B5F8: jr          $ra
    // 0x8008B5FC: nop

    return;
    // 0x8008B5FC: nop

;}
RECOMP_FUNC void func_8008B9A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008B9A0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8008B9A4: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8008B9A8: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8008B9AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008B9B0: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8008B9B4: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x8008B9B8: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x8008B9BC: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_8008B9C0:
    // 0x8008B9C0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8008B9C4: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x8008B9C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8008B9CC: jal         0x80081F50
    // 0x8008B9D0: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8008B9D0: lw          $a0, 0x8($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X8);
    after_0:
    // 0x8008B9D4: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8008B9D8: lw          $t9, 0x14($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X14);
    // 0x8008B9DC: beq         $t9, $zero, L_8008BC64
    if (ctx->r25 == 0) {
        // 0x8008B9E0: nop
    
            goto L_8008BC64;
    }
    // 0x8008B9E0: nop

    // 0x8008B9E4: lbu         $t0, 0x4($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X4);
    // 0x8008B9E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8008B9EC: bne         $t0, $at, L_8008BC64
    if (ctx->r8 != ctx->r1) {
        // 0x8008B9F0: nop
    
            goto L_8008BC64;
    }
    // 0x8008B9F0: nop

    // 0x8008B9F4: lw          $t1, 0x14($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X14);
    // 0x8008B9F8: beq         $t1, $zero, L_8008BA08
    if (ctx->r9 == 0) {
        // 0x8008B9FC: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8008BA08;
    }
    // 0x8008B9FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008BA00: bne         $t1, $at, L_8008BC64
    if (ctx->r9 != ctx->r1) {
        // 0x8008BA04: nop
    
            goto L_8008BC64;
    }
    // 0x8008BA04: nop

L_8008BA08:
    // 0x8008BA08: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8008BA0C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x8008BA10: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8008BA14: lw          $t3, 0x14($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X14);
    // 0x8008BA18: addiu       $t4, $t3, 0x14
    ctx->r12 = ADD32(ctx->r11, 0X14);
    // 0x8008BA1C: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8008BA20: lhu         $t5, 0x6($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X6);
    // 0x8008BA24: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x8008BA28: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008BA2C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008BA30: addu        $t7, $t4, $t6
    ctx->r15 = ADD32(ctx->r12, ctx->r14);
    // 0x8008BA34: addiu       $t8, $t7, 0x18
    ctx->r24 = ADD32(ctx->r15, 0X18);
    // 0x8008BA38: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x8008BA3C: sw          $t0, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r8;
    // 0x8008BA40: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8008BA44: lhu         $t1, 0x4($t9)
    ctx->r9 = MEM_HU(ctx->r25, 0X4);
    // 0x8008BA48: beq         $t1, $at, L_8008BA64
    if (ctx->r9 == ctx->r1) {
        // 0x8008BA4C: nop
    
            goto L_8008BA64;
    }
    // 0x8008BA4C: nop

    // 0x8008BA50: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8008BA54: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x8008BA58: lw          $t5, 0xC($t2)
    ctx->r13 = MEM_W(ctx->r10, 0XC);
    // 0x8008BA5C: subu        $t6, $t3, $t5
    ctx->r14 = SUB32(ctx->r11, ctx->r13);
    // 0x8008BA60: sw          $t6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r14;
L_8008BA64:
    // 0x8008BA64: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8008BA68: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8008BA6C: lhu         $t8, 0x4($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X4);
    // 0x8008BA70: bne         $t8, $at, L_8008BA98
    if (ctx->r24 != ctx->r1) {
        // 0x8008BA74: nop
    
            goto L_8008BA98;
    }
    // 0x8008BA74: nop

    // 0x8008BA78: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8008BA7C: lw          $t4, 0x14($t0)
    ctx->r12 = MEM_W(ctx->r8, 0X14);
    // 0x8008BA80: lw          $t9, 0x14($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X14);
    // 0x8008BA84: bne         $t9, $zero, L_8008BA98
    if (ctx->r25 != 0) {
        // 0x8008BA88: nop
    
            goto L_8008BA98;
    }
    // 0x8008BA88: nop

    // 0x8008BA8C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8008BA90: b           L_8008BA9C
    // 0x8008BA94: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
        goto L_8008BA9C;
    // 0x8008BA94: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
L_8008BA98:
    // 0x8008BA98: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_8008BA9C:
    // 0x8008BA9C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8008BAA0: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8008BAA4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8008BAA8: jal         0x80081F50
    // 0x8008BAAC: lw          $a0, 0x10($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X10);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8008BAAC: lw          $a0, 0x10($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X10);
    after_1:
    // 0x8008BAB0: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x8008BAB4: jal         0x80090100
    // 0x8008BAB8: ori         $a0, $a0, 0x401
    ctx->r4 = ctx->r4 | 0X401;
    func_80090100(rdram, ctx);
        goto after_2;
    // 0x8008BAB8: ori         $a0, $a0, 0x401
    ctx->r4 = ctx->r4 | 0X401;
    after_2:
    // 0x8008BABC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8008BAC0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8008BAC4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8008BAC8: lw          $a2, 0x10($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X10);
    // 0x8008BACC: lui         $a1, 0x500
    ctx->r5 = S32(0X500 << 16);
    // 0x8008BAD0: ori         $a1, $a1, 0x510
    ctx->r5 = ctx->r5 | 0X510;
    // 0x8008BAD4: or          $t2, $a2, $at
    ctx->r10 = ctx->r6 | ctx->r1;
    // 0x8008BAD8: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x8008BADC: jal         0x80090160
    // 0x8008BAE0: lw          $a0, 0x14($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X14);
    func_80090160(rdram, ctx);
        goto after_3;
    // 0x8008BAE0: lw          $a0, 0x14($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X14);
    after_3:
L_8008BAE4:
    // 0x8008BAE4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8008BAE8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x8008BAEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8008BAF0: jal         0x80081F50
    // 0x8008BAF4: lw          $a0, 0xC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC);
    osRecvMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x8008BAF4: lw          $a0, 0xC($t7)
    ctx->r4 = MEM_W(ctx->r15, 0XC);
    after_4:
    // 0x8008BAF8: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8008BAFC: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x8008BB00: lw          $t0, 0x14($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X14);
    // 0x8008BB04: addiu       $t4, $t0, 0x14
    ctx->r12 = ADD32(ctx->r8, 0X14);
    // 0x8008BB08: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8008BB0C: lhu         $t9, 0x6($t4)
    ctx->r25 = MEM_HU(ctx->r12, 0X6);
    // 0x8008BB10: sll         $t1, $t9, 3
    ctx->r9 = S32(ctx->r25 << 3);
    // 0x8008BB14: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8008BB18: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008BB1C: addu        $t3, $t4, $t1
    ctx->r11 = ADD32(ctx->r12, ctx->r9);
    // 0x8008BB20: addiu       $t5, $t3, 0x18
    ctx->r13 = ADD32(ctx->r11, 0X18);
    // 0x8008BB24: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x8008BB28: lw          $t6, 0x18($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X18);
    // 0x8008BB2C: bne         $t6, $at, L_8008BBE8
    if (ctx->r14 != ctx->r1) {
        // 0x8008BB30: nop
    
            goto L_8008BBE8;
    }
    // 0x8008BB30: nop

    // 0x8008BB34: lw          $a2, 0x10($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X10);
    // 0x8008BB38: lui         $at, 0x1000
    ctx->r1 = S32(0X1000 << 16);
    // 0x8008BB3C: lui         $a1, 0x500
    ctx->r5 = S32(0X500 << 16);
    // 0x8008BB40: or          $t2, $a2, $at
    ctx->r10 = ctx->r6 | ctx->r1;
    // 0x8008BB44: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x8008BB48: ori         $a1, $a1, 0x510
    ctx->r5 = ctx->r5 | 0X510;
    // 0x8008BB4C: jal         0x80090160
    // 0x8008BB50: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    func_80090160(rdram, ctx);
        goto after_5;
    // 0x8008BB50: lw          $a0, 0x14($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X14);
    after_5:
    // 0x8008BB54: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8008BB58: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8008BB5C: lui         $a1, 0x500
    ctx->r5 = S32(0X500 << 16);
    // 0x8008BB60: ori         $a1, $a1, 0x510
    ctx->r5 = ctx->r5 | 0X510;
    // 0x8008BB64: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    // 0x8008BB68: jal         0x80090160
    // 0x8008BB6C: lw          $a2, 0x10($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X10);
    func_80090160(rdram, ctx);
        goto after_6;
    // 0x8008BB6C: lw          $a2, 0x10($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X10);
    after_6:
    // 0x8008BB70: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8008BB74: lui         $a1, 0x500
    ctx->r5 = S32(0X500 << 16);
    // 0x8008BB78: ori         $a1, $a1, 0x508
    ctx->r5 = ctx->r5 | 0X508;
    // 0x8008BB7C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x8008BB80: jal         0x800901B0
    // 0x8008BB84: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    func_800901B0(rdram, ctx);
        goto after_7;
    // 0x8008BB84: lw          $a0, 0x14($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X14);
    after_7:
    // 0x8008BB88: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8008BB8C: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x8008BB90: and         $t5, $t1, $at
    ctx->r13 = ctx->r9 & ctx->r1;
    // 0x8008BB94: beq         $t5, $zero, L_8008BBC4
    if (ctx->r13 == 0) {
        // 0x8008BB98: nop
    
            goto L_8008BBC4;
    }
    // 0x8008BB98: nop

    // 0x8008BB9C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8008BBA0: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8008BBA4: lui         $at, 0x100
    ctx->r1 = S32(0X100 << 16);
    // 0x8008BBA8: lw          $a2, 0x10($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X10);
    // 0x8008BBAC: lui         $a1, 0x500
    ctx->r5 = S32(0X500 << 16);
    // 0x8008BBB0: ori         $a1, $a1, 0x510
    ctx->r5 = ctx->r5 | 0X510;
    // 0x8008BBB4: or          $t8, $a2, $at
    ctx->r24 = ctx->r6 | ctx->r1;
    // 0x8008BBB8: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8008BBBC: jal         0x80090160
    // 0x8008BBC0: lw          $a0, 0x14($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X14);
    func_80090160(rdram, ctx);
        goto after_8;
    // 0x8008BBC0: lw          $a0, 0x14($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X14);
    after_8:
L_8008BBC4:
    // 0x8008BBC4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8008BBC8: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8008BBCC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8008BBD0: lui         $t0, 0xA460
    ctx->r8 = S32(0XA460 << 16);
    // 0x8008BBD4: lui         $a0, 0x10
    ctx->r4 = S32(0X10 << 16);
    // 0x8008BBD8: sw          $t4, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r12;
    // 0x8008BBDC: sw          $t7, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->r15;
    // 0x8008BBE0: jal         0x80090200
    // 0x8008BBE4: ori         $a0, $a0, 0xC01
    ctx->r4 = ctx->r4 | 0XC01;
    func_80090200(rdram, ctx);
        goto after_9;
    // 0x8008BBE4: ori         $a0, $a0, 0xC01
    ctx->r4 = ctx->r4 | 0XC01;
    after_9:
L_8008BBE8:
    // 0x8008BBE8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8008BBEC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8008BBF0: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x8008BBF4: jal         0x800828B0
    // 0x8008BBF8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_10;
    // 0x8008BBF8: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_10:
    // 0x8008BBFC: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8008BC00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008BC04: bne         $t1, $at, L_8008BC28
    if (ctx->r9 != ctx->r1) {
        // 0x8008BC08: nop
    
            goto L_8008BC28;
    }
    // 0x8008BC08: nop

    // 0x8008BC0C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8008BC10: lw          $t3, 0x14($t5)
    ctx->r11 = MEM_W(ctx->r13, 0X14);
    // 0x8008BC14: lw          $t6, 0x2C($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X2C);
    // 0x8008BC18: bne         $t6, $zero, L_8008BC28
    if (ctx->r14 != 0) {
        // 0x8008BC1C: nop
    
            goto L_8008BC28;
    }
    // 0x8008BC1C: nop

    // 0x8008BC20: b           L_8008BAE4
    // 0x8008BC24: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
        goto L_8008BAE4;
    // 0x8008BC24: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_8008BC28:
    // 0x8008BC28: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8008BC2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008BC30: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8008BC34: jal         0x800828B0
    // 0x8008BC38: lw          $a0, 0x10($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X10);
    osSendMesg_recomp(rdram, ctx);
        goto after_11;
    // 0x8008BC38: lw          $a0, 0x10($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X10);
    after_11:
    // 0x8008BC3C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8008BC40: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008BC44: lw          $t2, 0x14($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X14);
    // 0x8008BC48: lhu         $t7, 0x1A($t2)
    ctx->r15 = MEM_HU(ctx->r10, 0X1A);
    // 0x8008BC4C: bne         $t7, $at, L_8008B9C0
    if (ctx->r15 != ctx->r1) {
        // 0x8008BC50: nop
    
            goto L_8008B9C0;
    }
    // 0x8008BC50: nop

    // 0x8008BC54: jal         0x80090250
    // 0x8008BC58: nop

    func_80090250(rdram, ctx);
        goto after_12;
    // 0x8008BC58: nop

    after_12:
    // 0x8008BC5C: b           L_8008B9C0
    // 0x8008BC60: nop

        goto L_8008B9C0;
    // 0x8008BC60: nop

L_8008BC64:
    // 0x8008BC64: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8008BC68: lhu         $t9, 0x0($t0)
    ctx->r25 = MEM_HU(ctx->r8, 0X0);
    // 0x8008BC6C: addiu       $t1, $t9, -0xA
    ctx->r9 = ADD32(ctx->r25, -0XA);
    // 0x8008BC70: sltiu       $at, $t1, 0x7
    ctx->r1 = ctx->r9 < 0X7 ? 1 : 0;
    // 0x8008BC74: beq         $at, $zero, L_8008BDBC
    if (ctx->r1 == 0) {
        // 0x8008BC78: nop
    
            goto L_8008BDBC;
    }
    // 0x8008BC78: nop

    // 0x8008BC7C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008BC80: lui         $at, 0x800E
    ctx->r1 = S32(0X800E << 16);
    // 0x8008BC84: addu        $at, $at, $t1
    gpr jr_addend_8008BC8C = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8008BC88: lw          $t1, -0x4A80($at)
    ctx->r9 = ADD32(ctx->r1, -0X4A80);
    // 0x8008BC8C: jr          $t1
    // 0x8008BC90: nop

    switch (jr_addend_8008BC8C >> 2) {
        case 0: goto L_8008BD9C; break;
        case 1: goto L_8008BC94; break;
        case 2: goto L_8008BCD0; break;
        case 3: goto L_8008BDBC; break;
        case 4: goto L_8008BDBC; break;
        case 5: goto L_8008BD0C; break;
        case 6: goto L_8008BD54; break;
        default: switch_error(__func__, 0x8008BC8C, 0x800DB580);
    }
    // 0x8008BC90: nop

L_8008BC94:
    // 0x8008BC94: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8008BC98: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8008BC9C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8008BCA0: jal         0x80081F50
    // 0x8008BCA4: lw          $a0, 0x10($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X10);
    osRecvMesg_recomp(rdram, ctx);
        goto after_13;
    // 0x8008BCA4: lw          $a0, 0x10($t5)
    ctx->r4 = MEM_W(ctx->r13, 0X10);
    after_13:
    // 0x8008BCA8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8008BCAC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8008BCB0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8008BCB4: lw          $t9, 0x14($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X14);
    // 0x8008BCB8: lw          $a1, 0xC($t3)
    ctx->r5 = MEM_W(ctx->r11, 0XC);
    // 0x8008BCBC: lw          $a2, 0x8($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X8);
    // 0x8008BCC0: jalr        $t9
    // 0x8008BCC4: lw          $a3, 0x10($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x8008BCC4: lw          $a3, 0x10($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X10);
    after_14:
    // 0x8008BCC8: b           L_8008BDC4
    // 0x8008BCCC: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
        goto L_8008BDC4;
    // 0x8008BCCC: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
L_8008BCD0:
    // 0x8008BCD0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8008BCD4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8008BCD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8008BCDC: jal         0x80081F50
    // 0x8008BCE0: lw          $a0, 0x10($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X10);
    osRecvMesg_recomp(rdram, ctx);
        goto after_15;
    // 0x8008BCE0: lw          $a0, 0x10($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X10);
    after_15:
    // 0x8008BCE4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8008BCE8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8008BCEC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8008BCF0: lw          $t9, 0x14($t2)
    ctx->r25 = MEM_W(ctx->r10, 0X14);
    // 0x8008BCF4: lw          $a1, 0xC($t4)
    ctx->r5 = MEM_W(ctx->r12, 0XC);
    // 0x8008BCF8: lw          $a2, 0x8($t4)
    ctx->r6 = MEM_W(ctx->r12, 0X8);
    // 0x8008BCFC: jalr        $t9
    // 0x8008BD00: lw          $a3, 0x10($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X10);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_16;
    // 0x8008BD00: lw          $a3, 0x10($t4)
    ctx->r7 = MEM_W(ctx->r12, 0X10);
    after_16:
    // 0x8008BD04: b           L_8008BDC4
    // 0x8008BD08: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
        goto L_8008BDC4;
    // 0x8008BD08: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
L_8008BD0C:
    // 0x8008BD0C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8008BD10: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8008BD14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8008BD18: jal         0x80081F50
    // 0x8008BD1C: lw          $a0, 0x10($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X10);
    osRecvMesg_recomp(rdram, ctx);
        goto after_17;
    // 0x8008BD1C: lw          $a0, 0x10($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X10);
    after_17:
    // 0x8008BD20: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8008BD24: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8008BD28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008BD2C: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x8008BD30: lw          $a0, 0x14($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X14);
    // 0x8008BD34: lw          $a2, 0xC($t0)
    ctx->r6 = MEM_W(ctx->r8, 0XC);
    // 0x8008BD38: lw          $a3, 0x8($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X8);
    // 0x8008BD3C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8008BD40: lw          $t9, 0x18($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X18);
    // 0x8008BD44: jalr        $t9
    // 0x8008BD48: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_18;
    // 0x8008BD48: nop

    after_18:
    // 0x8008BD4C: b           L_8008BDC4
    // 0x8008BD50: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
        goto L_8008BDC4;
    // 0x8008BD50: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
L_8008BD54:
    // 0x8008BD54: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8008BD58: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x8008BD5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8008BD60: jal         0x80081F50
    // 0x8008BD64: lw          $a0, 0x10($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X10);
    osRecvMesg_recomp(rdram, ctx);
        goto after_19;
    // 0x8008BD64: lw          $a0, 0x10($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X10);
    after_19:
    // 0x8008BD68: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8008BD6C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8008BD70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8008BD74: lw          $t8, 0x10($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X10);
    // 0x8008BD78: lw          $a0, 0x14($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X14);
    // 0x8008BD7C: lw          $a2, 0xC($t6)
    ctx->r6 = MEM_W(ctx->r14, 0XC);
    // 0x8008BD80: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x8008BD84: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8008BD88: lw          $t9, 0x18($t4)
    ctx->r25 = MEM_W(ctx->r12, 0X18);
    // 0x8008BD8C: jalr        $t9
    // 0x8008BD90: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_20;
    // 0x8008BD90: nop

    after_20:
    // 0x8008BD94: b           L_8008BDC4
    // 0x8008BD98: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
        goto L_8008BDC4;
    // 0x8008BD98: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
L_8008BD9C:
    // 0x8008BD9C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8008BDA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8008BDA4: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    // 0x8008BDA8: jal         0x800828B0
    // 0x8008BDAC: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_21;
    // 0x8008BDAC: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    after_21:
    // 0x8008BDB0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x8008BDB4: b           L_8008BDC4
    // 0x8008BDB8: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
        goto L_8008BDC4;
    // 0x8008BDB8: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
L_8008BDBC:
    // 0x8008BDBC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x8008BDC0: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
L_8008BDC4:
    // 0x8008BDC4: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8008BDC8: bne         $t1, $zero, L_8008B9C0
    if (ctx->r9 != 0) {
        // 0x8008BDCC: nop
    
            goto L_8008B9C0;
    }
    // 0x8008BDCC: nop

    // 0x8008BDD0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8008BDD4: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x8008BDD8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8008BDDC: jal         0x80081F50
    // 0x8008BDE0: lw          $a0, 0xC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XC);
    osRecvMesg_recomp(rdram, ctx);
        goto after_22;
    // 0x8008BDE0: lw          $a0, 0xC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XC);
    after_22:
    // 0x8008BDE4: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8008BDE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8008BDEC: lw          $a0, 0x4($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X4);
    // 0x8008BDF0: jal         0x800828B0
    // 0x8008BDF4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_23;
    // 0x8008BDF4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_23:
    // 0x8008BDF8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8008BDFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008BE00: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8008BE04: jal         0x800828B0
    // 0x8008BE08: lw          $a0, 0x10($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X10);
    osSendMesg_recomp(rdram, ctx);
        goto after_24;
    // 0x8008BE08: lw          $a0, 0x10($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X10);
    after_24:
    // 0x8008BE0C: b           L_8008B9C0
    // 0x8008BE10: nop

        goto L_8008B9C0;
    // 0x8008BE10: nop

    // 0x8008BE14: nop

    // 0x8008BE18: nop

    // 0x8008BE1C: nop

    // 0x8008BE20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008BE24: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8008BE28: jr          $ra
    // 0x8008BE2C: nop

    return;
    // 0x8008BE2C: nop

;}
RECOMP_FUNC void func_8008BE30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BE30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008BE34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008BE38: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8008BE3C: addiu       $a0, $a0, 0x2980
    ctx->r4 = ADD32(ctx->r4, 0X2980);
    // 0x8008BE40: jal         0x80080910
    // 0x8008BE44: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    func_80080910(rdram, ctx);
        goto after_0;
    // 0x8008BE44: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    after_0:
    // 0x8008BE48: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8008BE4C: addiu       $t6, $t6, 0x2980
    ctx->r14 = ADD32(ctx->r14, 0X2980);
    // 0x8008BE50: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008BE54: sw          $t6, 0x29E0($at)
    MEM_W(0X29E0, ctx->r1) = ctx->r14;
    // 0x8008BE58: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008BE5C: addiu       $t7, $t6, 0x30
    ctx->r15 = ADD32(ctx->r14, 0X30);
    // 0x8008BE60: sw          $t7, 0x29E4($at)
    MEM_W(0X29E4, ctx->r1) = ctx->r15;
    // 0x8008BE64: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8008BE68: sh          $t8, 0x32($t6)
    MEM_H(0X32, ctx->r14) = ctx->r24;
    // 0x8008BE6C: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8008BE70: lw          $t0, 0x29E0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X29E0);
    // 0x8008BE74: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8008BE78: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8008BE7C: sh          $t9, 0x2($t0)
    MEM_H(0X2, ctx->r8) = ctx->r25;
    // 0x8008BE80: lw          $t2, 0x29E4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X29E4);
    // 0x8008BE84: lui         $t1, 0x8000
    ctx->r9 = S32(0X8000 << 16);
    // 0x8008BE88: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8008BE8C: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8008BE90: lw          $t4, 0x29E0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X29E0);
    // 0x8008BE94: lui         $t3, 0x8000
    ctx->r11 = S32(0X8000 << 16);
    // 0x8008BE98: lui         $t5, 0x8000
    ctx->r13 = S32(0X8000 << 16);
    // 0x8008BE9C: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8008BEA0: lw          $t5, 0x300($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X300);
    // 0x8008BEA4: bne         $t5, $zero, L_8008BEC4
    if (ctx->r13 != 0) {
        // 0x8008BEA8: nop
    
            goto L_8008BEC4;
    }
    // 0x8008BEA8: nop

    // 0x8008BEAC: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8008BEB0: lw          $t8, 0x29E4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X29E4);
    // 0x8008BEB4: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8008BEB8: addiu       $t7, $t7, 0x2A10
    ctx->r15 = ADD32(ctx->r15, 0X2A10);
    // 0x8008BEBC: b           L_8008BF04
    // 0x8008BEC0: sw          $t7, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r15;
        goto L_8008BF04;
    // 0x8008BEC0: sw          $t7, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r15;
L_8008BEC4:
    // 0x8008BEC4: lui         $t6, 0x8000
    ctx->r14 = S32(0X8000 << 16);
    // 0x8008BEC8: lw          $t6, 0x300($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X300);
    // 0x8008BECC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8008BED0: bne         $t6, $at, L_8008BEF0
    if (ctx->r14 != ctx->r1) {
        // 0x8008BED4: nop
    
            goto L_8008BEF0;
    }
    // 0x8008BED4: nop

    // 0x8008BED8: lui         $t0, 0x800D
    ctx->r8 = S32(0X800D << 16);
    // 0x8008BEDC: lw          $t0, 0x29E4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X29E4);
    // 0x8008BEE0: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8008BEE4: addiu       $t9, $t9, 0x2A60
    ctx->r25 = ADD32(ctx->r25, 0X2A60);
    // 0x8008BEE8: b           L_8008BF04
    // 0x8008BEEC: sw          $t9, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r25;
        goto L_8008BF04;
    // 0x8008BEEC: sw          $t9, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r25;
L_8008BEF0:
    // 0x8008BEF0: lui         $t2, 0x800D
    ctx->r10 = S32(0X800D << 16);
    // 0x8008BEF4: lw          $t2, 0x29E4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X29E4);
    // 0x8008BEF8: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8008BEFC: addiu       $t1, $t1, 0x2AB0
    ctx->r9 = ADD32(ctx->r9, 0X2AB0);
    // 0x8008BF00: sw          $t1, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r9;
L_8008BF04:
    // 0x8008BF04: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8008BF08: lw          $t4, 0x29E4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X29E4);
    // 0x8008BF0C: addiu       $t3, $zero, 0x20
    ctx->r11 = ADD32(0, 0X20);
    // 0x8008BF10: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8008BF14: sh          $t3, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r11;
    // 0x8008BF18: lw          $t5, 0x29E4($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X29E4);
    // 0x8008BF1C: lui         $t6, 0xA440
    ctx->r14 = S32(0XA440 << 16);
    // 0x8008BF20: lw          $t7, 0x8($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X8);
    // 0x8008BF24: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x8008BF28: sw          $t8, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r24;
    // 0x8008BF2C: lw          $t9, 0x10($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X10);
    // 0x8008BF30: sltiu       $at, $t9, 0xB
    ctx->r1 = ctx->r25 < 0XB ? 1 : 0;
    // 0x8008BF34: bne         $at, $zero, L_8008BF50
    if (ctx->r1 != 0) {
        // 0x8008BF38: nop
    
            goto L_8008BF50;
    }
    // 0x8008BF38: nop

L_8008BF3C:
    // 0x8008BF3C: lui         $t0, 0xA440
    ctx->r8 = S32(0XA440 << 16);
    // 0x8008BF40: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x8008BF44: sltiu       $at, $t1, 0xB
    ctx->r1 = ctx->r9 < 0XB ? 1 : 0;
    // 0x8008BF48: beq         $at, $zero, L_8008BF3C
    if (ctx->r1 == 0) {
        // 0x8008BF4C: nop
    
            goto L_8008BF3C;
    }
    // 0x8008BF4C: nop

L_8008BF50:
    // 0x8008BF50: lui         $t2, 0xA440
    ctx->r10 = S32(0XA440 << 16);
    // 0x8008BF54: jal         0x8008C4F0
    // 0x8008BF58: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
    func_8008C4F0(rdram, ctx);
        goto after_1;
    // 0x8008BF58: sw          $zero, 0x0($t2)
    MEM_W(0X0, ctx->r10) = 0;
    after_1:
    // 0x8008BF5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008BF60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008BF64: jr          $ra
    // 0x8008BF68: nop

    return;
    // 0x8008BF68: nop

    // 0x8008BF6C: nop

;}
RECOMP_FUNC void func_8008BF70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BF70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008BF74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008BF78: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8008BF7C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008BF80: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8008BF84: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8008BF88: sw          $t6, 0x29F0($at)
    MEM_W(0X29F0, ctx->r1) = ctx->r14;
    // 0x8008BF8C: addiu       $a1, $a1, -0x74A0
    ctx->r5 = ADD32(ctx->r5, -0X74A0);
    // 0x8008BF90: addiu       $a0, $a0, -0x7498
    ctx->r4 = ADD32(ctx->r4, -0X7498);
    // 0x8008BF94: jal         0x80081C80
    // 0x8008BF98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x8008BF98: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8008BF9C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8008BFA0: addiu       $a0, $a0, -0x7498
    ctx->r4 = ADD32(ctx->r4, -0X7498);
    // 0x8008BFA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008BFA8: jal         0x800828B0
    // 0x8008BFAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8008BFAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8008BFB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008BFB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008BFB8: jr          $ra
    // 0x8008BFBC: nop

    return;
    // 0x8008BFBC: nop

;}
RECOMP_FUNC void func_8008BFC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BFC0: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8008BFC4: lw          $t6, 0x29F0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X29F0);
    // 0x8008BFC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008BFCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008BFD0: bne         $t6, $zero, L_8008BFE0
    if (ctx->r14 != 0) {
        // 0x8008BFD4: nop
    
            goto L_8008BFE0;
    }
    // 0x8008BFD4: nop

    // 0x8008BFD8: jal         0x8008BF70
    // 0x8008BFDC: nop

    func_8008BF70(rdram, ctx);
        goto after_0;
    // 0x8008BFDC: nop

    after_0:
L_8008BFE0:
    // 0x8008BFE0: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8008BFE4: addiu       $a0, $a0, -0x7498
    ctx->r4 = ADD32(ctx->r4, -0X7498);
    // 0x8008BFE8: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x8008BFEC: jal         0x80081F50
    // 0x8008BFF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x8008BFF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x8008BFF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008BFF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008BFFC: jr          $ra
    // 0x8008C000: nop

    return;
    // 0x8008C000: nop

;}
RECOMP_FUNC void func_8008C004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C004: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008C008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008C00C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8008C010: addiu       $a0, $a0, -0x7498
    ctx->r4 = ADD32(ctx->r4, -0X7498);
    // 0x8008C014: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008C018: jal         0x800828B0
    // 0x8008C01C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8008C01C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8008C020: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008C024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008C028: jr          $ra
    // 0x8008C02C: nop

    return;
    // 0x8008C02C: nop

;}
RECOMP_FUNC void func_8008C0E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C0E0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8008C0E4: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x8008C0E8: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x8008C0EC: sw          $t7, -0x745C($at)
    MEM_W(-0X745C, ctx->r1) = ctx->r15;
    // 0x8008C0F0: sw          $t6, -0x7460($at)
    MEM_W(-0X7460, ctx->r1) = ctx->r14;
    // 0x8008C0F4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8008C0F8: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8008C0FC: lw          $t8, 0x2A00($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2A00);
    // 0x8008C100: sw          $zero, -0x7458($at)
    MEM_W(-0X7458, ctx->r1) = 0;
    // 0x8008C104: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8008C108: sw          $zero, -0x7454($at)
    MEM_W(-0X7454, ctx->r1) = 0;
    // 0x8008C10C: lui         $t9, 0x800D
    ctx->r25 = S32(0X800D << 16);
    // 0x8008C110: sw          $t8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r24;
    // 0x8008C114: lw          $t9, 0x2A00($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2A00);
    // 0x8008C118: lui         $t1, 0x800D
    ctx->r9 = S32(0X800D << 16);
    // 0x8008C11C: addiu       $t2, $zero, 0x0
    ctx->r10 = ADD32(0, 0X0);
    // 0x8008C120: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x8008C124: addiu       $t3, $zero, 0x0
    ctx->r11 = ADD32(0, 0X0);
    // 0x8008C128: lui         $t4, 0x800D
    ctx->r12 = S32(0X800D << 16);
    // 0x8008C12C: sw          $t0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r8;
    // 0x8008C130: lw          $t1, 0x2A00($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2A00);
    // 0x8008C134: lui         $t5, 0x800D
    ctx->r13 = S32(0X800D << 16);
    // 0x8008C138: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8008C13C: sw          $t2, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r10;
    // 0x8008C140: sw          $t3, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->r11;
    // 0x8008C144: lw          $t4, 0x2A00($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2A00);
    // 0x8008C148: lw          $t6, 0x10($t4)
    ctx->r14 = MEM_W(ctx->r12, 0X10);
    // 0x8008C14C: lw          $t7, 0x14($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X14);
    // 0x8008C150: sw          $t6, 0x8($t4)
    MEM_W(0X8, ctx->r12) = ctx->r14;
    // 0x8008C154: sw          $t7, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->r15;
    // 0x8008C158: lw          $t5, 0x2A00($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X2A00);
    // 0x8008C15C: sw          $zero, 0x18($t5)
    MEM_W(0X18, ctx->r13) = 0;
    // 0x8008C160: lw          $t8, 0x2A00($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2A00);
    // 0x8008C164: jr          $ra
    // 0x8008C168: sw          $zero, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = 0;
    return;
    // 0x8008C168: sw          $zero, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = 0;
;}
RECOMP_FUNC void func_8008C16C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C16C: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8008C170: lw          $t6, 0x2A00($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2A00);
    // 0x8008C174: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008C178: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008C17C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8008C180: beq         $t7, $t6, L_8008C2D4
    if (ctx->r15 == ctx->r14) {
        // 0x8008C184: nop
    
            goto L_8008C2D4;
    }
    // 0x8008C184: nop

L_8008C188:
    // 0x8008C188: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8008C18C: lw          $t8, 0x2A00($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2A00);
    // 0x8008C190: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x8008C194: bne         $t9, $t8, L_8008C1B0
    if (ctx->r25 != ctx->r24) {
        // 0x8008C198: sw          $t9, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r25;
            goto L_8008C1B0;
    }
    // 0x8008C198: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8008C19C: jal         0x800902A0
    // 0x8008C1A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    __osSetCompare_recomp(rdram, ctx);
        goto after_0;
    // 0x8008C1A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8008C1A4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8008C1A8: b           L_8008C2D4
    // 0x8008C1AC: sw          $zero, -0x7450($at)
    MEM_W(-0X7450, ctx->r1) = 0;
        goto L_8008C2D4;
    // 0x8008C1AC: sw          $zero, -0x7450($at)
    MEM_W(-0X7450, ctx->r1) = 0;
L_8008C1B0:
    // 0x8008C1B0: jal         0x80084BC0
    // 0x8008C1B4: nop

    osGetCount_recomp(rdram, ctx);
        goto after_1;
    // 0x8008C1B4: nop

    after_1:
    // 0x8008C1B8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8008C1BC: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x8008C1C0: lw          $t1, -0x7450($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X7450);
    // 0x8008C1C4: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8008C1C8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8008C1CC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8008C1D0: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x8008C1D4: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8008C1D8: sw          $t0, -0x7450($at)
    MEM_W(-0X7450, ctx->r1) = ctx->r8;
    // 0x8008C1DC: lw          $t6, 0x10($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X10);
    // 0x8008C1E0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8008C1E4: addiu       $t4, $zero, 0x0
    ctx->r12 = ADD32(0, 0X0);
    // 0x8008C1E8: or          $t9, $t7, $zero
    ctx->r25 = ctx->r15 | 0;
    // 0x8008C1EC: sltu        $at, $t6, $t4
    ctx->r1 = ctx->r14 < ctx->r12 ? 1 : 0;
    // 0x8008C1F0: lw          $t7, 0x14($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X14);
    // 0x8008C1F4: bne         $at, $zero, L_8008C250
    if (ctx->r1 != 0) {
        // 0x8008C1F8: or          $t5, $t3, $zero
        ctx->r13 = ctx->r11 | 0;
            goto L_8008C250;
    }
    // 0x8008C1F8: or          $t5, $t3, $zero
    ctx->r13 = ctx->r11 | 0;
    // 0x8008C1FC: sltu        $at, $t4, $t6
    ctx->r1 = ctx->r12 < ctx->r14 ? 1 : 0;
    // 0x8008C200: bne         $at, $zero, L_8008C210
    if (ctx->r1 != 0) {
        // 0x8008C204: sltu        $at, $t5, $t7
        ctx->r1 = ctx->r13 < ctx->r15 ? 1 : 0;
            goto L_8008C210;
    }
    // 0x8008C204: sltu        $at, $t5, $t7
    ctx->r1 = ctx->r13 < ctx->r15 ? 1 : 0;
    // 0x8008C208: beq         $at, $zero, L_8008C250
    if (ctx->r1 == 0) {
        // 0x8008C20C: nop
    
            goto L_8008C250;
    }
    // 0x8008C20C: nop

L_8008C210:
    // 0x8008C210: addiu       $t8, $t9, 0x10
    ctx->r24 = ADD32(ctx->r25, 0X10);
    // 0x8008C214: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x8008C218: lw          $t3, 0x14($t9)
    ctx->r11 = MEM_W(ctx->r25, 0X14);
    // 0x8008C21C: lw          $t2, 0x10($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X10);
    // 0x8008C220: sltu        $at, $t3, $t5
    ctx->r1 = ctx->r11 < ctx->r13 ? 1 : 0;
    // 0x8008C224: subu        $t0, $t2, $t4
    ctx->r8 = SUB32(ctx->r10, ctx->r12);
    // 0x8008C228: subu        $t0, $t0, $at
    ctx->r8 = SUB32(ctx->r8, ctx->r1);
    // 0x8008C22C: subu        $t1, $t3, $t5
    ctx->r9 = SUB32(ctx->r11, ctx->r13);
    // 0x8008C230: sw          $t1, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->r9;
    // 0x8008C234: sw          $t0, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r8;
    // 0x8008C238: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8008C23C: lw          $a0, 0x10($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X10);
    // 0x8008C240: jal         0x8008C2E4
    // 0x8008C244: lw          $a1, 0x14($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X14);
    func_8008C2E4(rdram, ctx);
        goto after_2;
    // 0x8008C244: lw          $a1, 0x14($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X14);
    after_2:
    // 0x8008C248: b           L_8008C2D4
    // 0x8008C24C: nop

        goto L_8008C2D4;
    // 0x8008C24C: nop

L_8008C250:
    // 0x8008C250: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8008C254: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8008C258: lw          $t2, 0x4($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X4);
    // 0x8008C25C: sw          $t8, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r24;
    // 0x8008C260: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8008C264: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x8008C268: lw          $t5, 0x0($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X0);
    // 0x8008C26C: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x8008C270: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8008C274: sw          $zero, 0x0($t0)
    MEM_W(0X0, ctx->r8) = 0;
    // 0x8008C278: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8008C27C: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x8008C280: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8008C284: lw          $t6, 0x18($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X18);
    // 0x8008C288: beq         $t6, $zero, L_8008C2A0
    if (ctx->r14 == 0) {
        // 0x8008C28C: nop
    
            goto L_8008C2A0;
    }
    // 0x8008C28C: nop

    // 0x8008C290: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8008C294: lw          $a1, 0x1C($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X1C);
    // 0x8008C298: jal         0x800828B0
    // 0x8008C29C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x8008C29C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
L_8008C2A0:
    // 0x8008C2A0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8008C2A4: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8008C2A8: lw          $t9, 0xC($t7)
    ctx->r25 = MEM_W(ctx->r15, 0XC);
    // 0x8008C2AC: bne         $t8, $zero, L_8008C2BC
    if (ctx->r24 != 0) {
        // 0x8008C2B0: nop
    
            goto L_8008C2BC;
    }
    // 0x8008C2B0: nop

    // 0x8008C2B4: beq         $t9, $zero, L_8008C188
    if (ctx->r25 == 0) {
        // 0x8008C2B8: nop
    
            goto L_8008C188;
    }
    // 0x8008C2B8: nop

L_8008C2BC:
    // 0x8008C2BC: sw          $t8, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->r24;
    // 0x8008C2C0: sw          $t9, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r25;
    // 0x8008C2C4: jal         0x8008C358
    // 0x8008C2C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008C358(rdram, ctx);
        goto after_4;
    // 0x8008C2C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x8008C2CC: b           L_8008C188
    // 0x8008C2D0: nop

        goto L_8008C188;
    // 0x8008C2D0: nop

L_8008C2D4:
    // 0x8008C2D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008C2D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008C2DC: jr          $ra
    // 0x8008C2E0: nop

    return;
    // 0x8008C2E0: nop

;}
RECOMP_FUNC void func_8008C2E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C2E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8008C2E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008C2EC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8008C2F0: jal         0x80088970
    // 0x8008C2F4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    __osDisableInt_recomp(rdram, ctx);
        goto after_0;
    // 0x8008C2F4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8008C2F8: jal         0x80084BC0
    // 0x8008C2FC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    osGetCount_recomp(rdram, ctx);
        goto after_1;
    // 0x8008C2FC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x8008C300: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8008C304: sw          $v0, -0x7450($at)
    MEM_W(-0X7450, ctx->r1) = ctx->r2;
    // 0x8008C308: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8008C30C: lw          $t6, -0x7450($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X7450);
    // 0x8008C310: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8008C314: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8008C318: or          $t9, $t6, $zero
    ctx->r25 = ctx->r14 | 0;
    // 0x8008C31C: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x8008C320: addiu       $t8, $zero, 0x0
    ctx->r24 = ADD32(0, 0X0);
    // 0x8008C324: sltu        $at, $t3, $t1
    ctx->r1 = ctx->r11 < ctx->r9 ? 1 : 0;
    // 0x8008C328: addu        $t2, $at, $t8
    ctx->r10 = ADD32(ctx->r1, ctx->r24);
    // 0x8008C32C: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x8008C330: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x8008C334: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x8008C338: jal         0x800902A0
    // 0x8008C33C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    __osSetCompare_recomp(rdram, ctx);
        goto after_2;
    // 0x8008C33C: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_2:
    // 0x8008C340: jal         0x80088990
    // 0x8008C344: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    __osRestoreInt_recomp(rdram, ctx);
        goto after_3;
    // 0x8008C344: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x8008C348: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008C34C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8008C350: jr          $ra
    // 0x8008C354: nop

    return;
    // 0x8008C354: nop

;}
RECOMP_FUNC void func_8008C358(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C358: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8008C35C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008C360: jal         0x80088970
    // 0x8008C364: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    __osDisableInt_recomp(rdram, ctx);
        goto after_0;
    // 0x8008C364: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x8008C368: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8008C36C: lw          $t6, 0x2A00($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2A00);
    // 0x8008C370: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8008C374: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8008C378: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8008C37C: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x8008C380: lw          $t1, 0x14($t8)
    ctx->r9 = MEM_W(ctx->r24, 0X14);
    // 0x8008C384: lw          $t0, 0x10($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X10);
    // 0x8008C388: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x8008C38C: beq         $t7, $t6, L_8008C434
    if (ctx->r15 == ctx->r14) {
        // 0x8008C390: sw          $t0, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r8;
            goto L_8008C434;
    }
    // 0x8008C390: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x8008C394: lw          $t2, 0x10($t7)
    ctx->r10 = MEM_W(ctx->r15, 0X10);
    // 0x8008C398: lw          $t3, 0x14($t7)
    ctx->r11 = MEM_W(ctx->r15, 0X14);
    // 0x8008C39C: sltu        $at, $t0, $t2
    ctx->r1 = ctx->r8 < ctx->r10 ? 1 : 0;
    // 0x8008C3A0: bne         $at, $zero, L_8008C434
    if (ctx->r1 != 0) {
        // 0x8008C3A4: sltu        $at, $t2, $t0
        ctx->r1 = ctx->r10 < ctx->r8 ? 1 : 0;
            goto L_8008C434;
    }
    // 0x8008C3A4: sltu        $at, $t2, $t0
    ctx->r1 = ctx->r10 < ctx->r8 ? 1 : 0;
    // 0x8008C3A8: bne         $at, $zero, L_8008C3B8
    if (ctx->r1 != 0) {
        // 0x8008C3AC: sltu        $at, $t3, $t1
        ctx->r1 = ctx->r11 < ctx->r9 ? 1 : 0;
            goto L_8008C3B8;
    }
    // 0x8008C3AC: sltu        $at, $t3, $t1
    ctx->r1 = ctx->r11 < ctx->r9 ? 1 : 0;
    // 0x8008C3B0: beq         $at, $zero, L_8008C434
    if (ctx->r1 == 0) {
        // 0x8008C3B4: nop
    
            goto L_8008C434;
    }
    // 0x8008C3B4: nop

L_8008C3B8:
    // 0x8008C3B8: addiu       $t9, $sp, 0x28
    ctx->r25 = ADD32(ctx->r29, 0X28);
    // 0x8008C3BC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8008C3C0: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8008C3C4: lw          $t5, 0x4($t9)
    ctx->r13 = MEM_W(ctx->r25, 0X4);
    // 0x8008C3C8: lw          $t4, 0x0($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X0);
    // 0x8008C3CC: lw          $t7, 0x14($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X14);
    // 0x8008C3D0: lw          $t6, 0x10($t8)
    ctx->r14 = MEM_W(ctx->r24, 0X10);
    // 0x8008C3D4: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8008C3D8: sltu        $at, $t5, $t7
    ctx->r1 = ctx->r13 < ctx->r15 ? 1 : 0;
    // 0x8008C3DC: subu        $t0, $t4, $t6
    ctx->r8 = SUB32(ctx->r12, ctx->r14);
    // 0x8008C3E0: subu        $t0, $t0, $at
    ctx->r8 = SUB32(ctx->r8, ctx->r1);
    // 0x8008C3E4: subu        $t1, $t5, $t7
    ctx->r9 = SUB32(ctx->r13, ctx->r15);
    // 0x8008C3E8: sw          $t1, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r9;
    // 0x8008C3EC: sw          $t0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r8;
    // 0x8008C3F0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8008C3F4: lw          $t8, 0x2A00($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2A00);
    // 0x8008C3F8: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8008C3FC: beq         $t3, $t8, L_8008C434
    if (ctx->r11 == ctx->r24) {
        // 0x8008C400: sw          $t3, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r11;
            goto L_8008C434;
    }
    // 0x8008C400: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x8008C404: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8008C408: lw          $t6, 0x10($t3)
    ctx->r14 = MEM_W(ctx->r11, 0X10);
    // 0x8008C40C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8008C410: lw          $t7, 0x14($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X14);
    // 0x8008C414: sltu        $at, $t6, $t4
    ctx->r1 = ctx->r14 < ctx->r12 ? 1 : 0;
    // 0x8008C418: bne         $at, $zero, L_8008C3B8
    if (ctx->r1 != 0) {
        // 0x8008C41C: nop
    
            goto L_8008C3B8;
    }
    // 0x8008C41C: nop

    // 0x8008C420: sltu        $at, $t4, $t6
    ctx->r1 = ctx->r12 < ctx->r14 ? 1 : 0;
    // 0x8008C424: bne         $at, $zero, L_8008C434
    if (ctx->r1 != 0) {
        // 0x8008C428: sltu        $at, $t7, $t5
        ctx->r1 = ctx->r15 < ctx->r13 ? 1 : 0;
            goto L_8008C434;
    }
    // 0x8008C428: sltu        $at, $t7, $t5
    ctx->r1 = ctx->r15 < ctx->r13 ? 1 : 0;
    // 0x8008C42C: bne         $at, $zero, L_8008C3B8
    if (ctx->r1 != 0) {
        // 0x8008C430: nop
    
            goto L_8008C3B8;
    }
    // 0x8008C430: nop

L_8008C434:
    // 0x8008C434: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8008C438: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8008C43C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8008C440: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8008C444: sw          $t0, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r8;
    // 0x8008C448: sw          $t1, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->r9;
    // 0x8008C44C: lw          $t8, 0x2A00($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2A00);
    // 0x8008C450: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8008C454: beq         $t2, $t8, L_8008C48C
    if (ctx->r10 == ctx->r24) {
        // 0x8008C458: nop
    
            goto L_8008C48C;
    }
    // 0x8008C458: nop

    // 0x8008C45C: addiu       $t3, $t2, 0x10
    ctx->r11 = ADD32(ctx->r10, 0X10);
    // 0x8008C460: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8008C464: lw          $t5, 0x14($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X14);
    // 0x8008C468: lw          $t4, 0x10($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X10);
    // 0x8008C46C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8008C470: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8008C474: subu        $t0, $t4, $t6
    ctx->r8 = SUB32(ctx->r12, ctx->r14);
    // 0x8008C478: sltu        $at, $t5, $t7
    ctx->r1 = ctx->r13 < ctx->r15 ? 1 : 0;
    // 0x8008C47C: subu        $t0, $t0, $at
    ctx->r8 = SUB32(ctx->r8, ctx->r1);
    // 0x8008C480: subu        $t1, $t5, $t7
    ctx->r9 = SUB32(ctx->r13, ctx->r15);
    // 0x8008C484: sw          $t1, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->r9;
    // 0x8008C488: sw          $t0, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->r8;
L_8008C48C:
    // 0x8008C48C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8008C490: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8008C494: sw          $t9, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r25;
    // 0x8008C498: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8008C49C: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8008C4A0: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x8008C4A4: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x8008C4A8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8008C4AC: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8008C4B0: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x8008C4B4: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x8008C4B8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8008C4BC: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8008C4C0: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8008C4C4: jal         0x80088990
    // 0x8008C4C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    __osRestoreInt_recomp(rdram, ctx);
        goto after_1;
    // 0x8008C4C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x8008C4CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008C4D0: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8008C4D4: lw          $v1, 0x2C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X2C);
    // 0x8008C4D8: jr          $ra
    // 0x8008C4DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8008C4DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8008C4E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C4E0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008C4E4: jr          $ra
    // 0x8008C4E8: lw          $v0, 0x29E0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X29E0);
    return;
    // 0x8008C4E8: lw          $v0, 0x29E0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X29E0);
    // 0x8008C4EC: nop

;}
RECOMP_FUNC void func_8008C4F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C4F0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8008C4F4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8008C4F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8008C4FC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8008C500: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008C504: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8008C508: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x8008C50C: lui         $t6, 0xA440
    ctx->r14 = S32(0XA440 << 16);
    // 0x8008C510: lw          $s1, 0x29E4($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X29E4);
    // 0x8008C514: lw          $t7, 0x10($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X10);
    // 0x8008C518: lw          $s0, 0x8($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X8);
    // 0x8008C51C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8008C520: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8008C524: jal         0x80082090
    // 0x8008C528: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x8008C528: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_0:
    // 0x8008C52C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8008C530: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8008C534: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8008C538: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8008C53C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8008C540: addu        $t1, $s0, $t0
    ctx->r9 = ADD32(ctx->r16, ctx->r8);
    // 0x8008C544: lw          $t2, 0x28($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X28);
    // 0x8008C548: addu        $t3, $t2, $s2
    ctx->r11 = ADD32(ctx->r10, ctx->r18);
    // 0x8008C54C: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
    // 0x8008C550: lhu         $t4, 0x0($s1)
    ctx->r12 = MEM_HU(ctx->r17, 0X0);
    // 0x8008C554: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x8008C558: beq         $t5, $zero, L_8008C57C
    if (ctx->r13 == 0) {
        // 0x8008C55C: nop
    
            goto L_8008C57C;
    }
    // 0x8008C55C: nop

    // 0x8008C560: lw          $t7, 0x20($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X20);
    // 0x8008C564: lw          $t6, 0x20($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X20);
    // 0x8008C568: addiu       $at, $zero, -0x1000
    ctx->r1 = ADD32(0, -0X1000);
    // 0x8008C56C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x8008C570: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x8008C574: b           L_8008C584
    // 0x8008C578: sw          $t9, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r25;
        goto L_8008C584;
    // 0x8008C578: sw          $t9, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r25;
L_8008C57C:
    // 0x8008C57C: lw          $t0, 0x20($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X20);
    // 0x8008C580: sw          $t0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r8;
L_8008C584:
    // 0x8008C584: lhu         $t1, 0x0($s1)
    ctx->r9 = MEM_HU(ctx->r17, 0X0);
    // 0x8008C588: andi        $t2, $t1, 0x4
    ctx->r10 = ctx->r9 & 0X4;
    // 0x8008C58C: beq         $t2, $zero, L_8008C694
    if (ctx->r10 == 0) {
        // 0x8008C590: nop
    
            goto L_8008C694;
    }
    // 0x8008C590: nop

    // 0x8008C594: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8008C598: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8008C59C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8008C5A0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8008C5A4: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x8008C5A8: lw          $t7, 0x2C($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X2C);
    // 0x8008C5AC: andi        $t6, $t7, 0xFFF
    ctx->r14 = ctx->r15 & 0XFFF;
    // 0x8008C5B0: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x8008C5B4: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
    // 0x8008C5B8: lwc1        $f4, 0x24($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X24);
    // 0x8008C5BC: bgez        $t6, L_8008C5D4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8008C5C0: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_8008C5D4;
    }
    // 0x8008C5C0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008C5C4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8008C5C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8008C5CC: nop

    // 0x8008C5D0: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_8008C5D4:
    // 0x8008C5D4: mul.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x8008C5D8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8008C5DC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8008C5E0: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8008C5E4: nop

    // 0x8008C5E8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8008C5EC: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8008C5F0: nop

    // 0x8008C5F4: andi        $at, $t9, 0x4
    ctx->r1 = ctx->r25 & 0X4;
    // 0x8008C5F8: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8008C5FC: beq         $t9, $zero, L_8008C64C
    if (ctx->r25 == 0) {
        // 0x8008C600: lui         $at, 0x4F00
        ctx->r1 = S32(0X4F00 << 16);
            goto L_8008C64C;
    }
    // 0x8008C600: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8008C604: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8008C608: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8008C60C: sub.s       $f18, $f16, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8008C610: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x8008C614: nop

    // 0x8008C618: cvt.w.s     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8008C61C: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8008C620: nop

    // 0x8008C624: andi        $at, $t9, 0x4
    ctx->r1 = ctx->r25 & 0X4;
    // 0x8008C628: andi        $t9, $t9, 0x78
    ctx->r25 = ctx->r25 & 0X78;
    // 0x8008C62C: bne         $t9, $zero, L_8008C644
    if (ctx->r25 != 0) {
        // 0x8008C630: nop
    
            goto L_8008C644;
    }
    // 0x8008C630: nop

    // 0x8008C634: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8008C638: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8008C63C: b           L_8008C65C
    // 0x8008C640: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
        goto L_8008C65C;
    // 0x8008C640: or          $t9, $t9, $at
    ctx->r25 = ctx->r25 | ctx->r1;
L_8008C644:
    // 0x8008C644: b           L_8008C65C
    // 0x8008C648: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
        goto L_8008C65C;
    // 0x8008C648: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
L_8008C64C:
    // 0x8008C64C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x8008C650: nop

    // 0x8008C654: bltz        $t9, L_8008C644
    if (SIGNED(ctx->r25) < 0) {
        // 0x8008C658: nop
    
            goto L_8008C644;
    }
    // 0x8008C658: nop

L_8008C65C:
    // 0x8008C65C: sw          $t9, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r25;
    // 0x8008C660: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8008C664: lw          $t0, 0x2C($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X2C);
    // 0x8008C668: addiu       $at, $zero, -0x1000
    ctx->r1 = ADD32(0, -0X1000);
    // 0x8008C66C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8008C670: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008C674: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8008C678: addu        $t3, $s0, $t2
    ctx->r11 = ADD32(ctx->r16, ctx->r10);
    // 0x8008C67C: lw          $t4, 0x2C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X2C);
    // 0x8008C680: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8008C684: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x8008C688: or          $t7, $t0, $t5
    ctx->r15 = ctx->r8 | ctx->r13;
    // 0x8008C68C: b           L_8008C6B0
    // 0x8008C690: sw          $t7, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r15;
        goto L_8008C6B0;
    // 0x8008C690: sw          $t7, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r15;
L_8008C694:
    // 0x8008C694: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8008C698: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8008C69C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8008C6A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008C6A4: addu        $t9, $s0, $t8
    ctx->r25 = ADD32(ctx->r16, ctx->r24);
    // 0x8008C6A8: lw          $t1, 0x2C($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X2C);
    // 0x8008C6AC: sw          $t1, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r9;
L_8008C6B0:
    // 0x8008C6B0: lw          $t2, 0x1C($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X1C);
    // 0x8008C6B4: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x8008C6B8: lhu         $t3, 0x0($s1)
    ctx->r11 = MEM_HU(ctx->r17, 0X0);
    // 0x8008C6BC: andi        $t4, $t3, 0x20
    ctx->r12 = ctx->r11 & 0X20;
    // 0x8008C6C0: beq         $t4, $zero, L_8008C6CC
    if (ctx->r12 == 0) {
        // 0x8008C6C4: nop
    
            goto L_8008C6CC;
    }
    // 0x8008C6C4: nop

    // 0x8008C6C8: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_8008C6CC:
    // 0x8008C6CC: lhu         $t0, 0x0($s1)
    ctx->r8 = MEM_HU(ctx->r17, 0X0);
    // 0x8008C6D0: andi        $t5, $t0, 0x40
    ctx->r13 = ctx->r8 & 0X40;
    // 0x8008C6D4: beq         $t5, $zero, L_8008C6EC
    if (ctx->r13 == 0) {
        // 0x8008C6D8: nop
    
            goto L_8008C6EC;
    }
    // 0x8008C6D8: nop

    // 0x8008C6DC: sw          $zero, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = 0;
    // 0x8008C6E0: jal         0x80082090
    // 0x8008C6E4: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x8008C6E4: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    after_1:
    // 0x8008C6E8: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_8008C6EC:
    // 0x8008C6EC: lhu         $t7, 0x0($s1)
    ctx->r15 = MEM_HU(ctx->r17, 0X0);
    // 0x8008C6F0: andi        $t6, $t7, 0x80
    ctx->r14 = ctx->r15 & 0X80;
    // 0x8008C6F4: beq         $t6, $zero, L_8008C71C
    if (ctx->r14 == 0) {
        // 0x8008C6F8: nop
    
            goto L_8008C71C;
    }
    // 0x8008C6F8: nop

    // 0x8008C6FC: lhu         $t8, 0x28($s1)
    ctx->r24 = MEM_HU(ctx->r17, 0X28);
    // 0x8008C700: lui         $at, 0x3FF
    ctx->r1 = S32(0X3FF << 16);
    // 0x8008C704: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x8008C708: sll         $t9, $t8, 16
    ctx->r25 = S32(ctx->r24 << 16);
    // 0x8008C70C: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x8008C710: jal         0x80082090
    // 0x8008C714: sw          $t1, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r9;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_2;
    // 0x8008C714: sw          $t1, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r9;
    after_2:
    // 0x8008C718: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_8008C71C:
    // 0x8008C71C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8008C720: lui         $t3, 0xA440
    ctx->r11 = S32(0XA440 << 16);
    // 0x8008C724: lui         $t0, 0xA440
    ctx->r8 = S32(0XA440 << 16);
    // 0x8008C728: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x8008C72C: lw          $t4, 0x8($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X8);
    // 0x8008C730: lui         $t7, 0xA440
    ctx->r15 = S32(0XA440 << 16);
    // 0x8008C734: lui         $t8, 0xA440
    ctx->r24 = S32(0XA440 << 16);
    // 0x8008C738: sw          $t4, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r12;
    // 0x8008C73C: lw          $t5, 0xC($s0)
    ctx->r13 = MEM_W(ctx->r16, 0XC);
    // 0x8008C740: lui         $t1, 0xA440
    ctx->r9 = S32(0XA440 << 16);
    // 0x8008C744: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008C748: sw          $t5, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->r13;
    // 0x8008C74C: lw          $t6, 0x10($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X10);
    // 0x8008C750: sw          $t6, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->r14;
    // 0x8008C754: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x8008C758: sw          $t9, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->r25;
    // 0x8008C75C: lw          $t2, 0x18($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X18);
    // 0x8008C760: lui         $t9, 0xA440
    ctx->r25 = S32(0XA440 << 16);
    // 0x8008C764: sw          $t2, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->r10;
    // 0x8008C768: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8008C76C: sw          $t4, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r12;
    // 0x8008C770: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8008C774: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8008C778: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8008C77C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008C780: addu        $t6, $s0, $t7
    ctx->r14 = ADD32(ctx->r16, ctx->r15);
    // 0x8008C784: lw          $t8, 0x30($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X30);
    // 0x8008C788: sw          $t8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->r24;
    // 0x8008C78C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8008C790: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8008C794: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8008C798: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8008C79C: addu        $t3, $s0, $t2
    ctx->r11 = ADD32(ctx->r16, ctx->r10);
    // 0x8008C7A0: lw          $t4, 0x34($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X34);
    // 0x8008C7A4: lui         $t2, 0xA440
    ctx->r10 = S32(0XA440 << 16);
    // 0x8008C7A8: sw          $t4, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->r12;
    // 0x8008C7AC: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8008C7B0: lui         $t4, 0xA440
    ctx->r12 = S32(0XA440 << 16);
    // 0x8008C7B4: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8008C7B8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8008C7BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008C7C0: addu        $t6, $s0, $t7
    ctx->r14 = ADD32(ctx->r16, ctx->r15);
    // 0x8008C7C4: lw          $t8, 0x38($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X38);
    // 0x8008C7C8: lui         $t5, 0xA440
    ctx->r13 = S32(0XA440 << 16);
    // 0x8008C7CC: lui         $t7, 0x800D
    ctx->r15 = S32(0X800D << 16);
    // 0x8008C7D0: sw          $t8, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->r24;
    // 0x8008C7D4: lw          $t1, 0x20($s1)
    ctx->r9 = MEM_W(ctx->r17, 0X20);
    // 0x8008C7D8: lui         $t8, 0x800D
    ctx->r24 = S32(0X800D << 16);
    // 0x8008C7DC: lui         $t6, 0x800D
    ctx->r14 = S32(0X800D << 16);
    // 0x8008C7E0: sw          $t1, 0x30($t2)
    MEM_W(0X30, ctx->r10) = ctx->r9;
    // 0x8008C7E4: lw          $t3, 0x2C($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X2C);
    // 0x8008C7E8: sw          $t3, 0x34($t4)
    MEM_W(0X34, ctx->r12) = ctx->r11;
    // 0x8008C7EC: lw          $t0, 0xC($s1)
    ctx->r8 = MEM_W(ctx->r17, 0XC);
    // 0x8008C7F0: sw          $t0, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r8;
    // 0x8008C7F4: lw          $t7, 0x29E0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X29E0);
    // 0x8008C7F8: sw          $t7, 0x29E4($at)
    MEM_W(0X29E4, ctx->r1) = ctx->r15;
    // 0x8008C7FC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008C800: sw          $s1, 0x29E0($at)
    MEM_W(0X29E0, ctx->r1) = ctx->r17;
    // 0x8008C804: lw          $t8, 0x29E0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X29E0);
    // 0x8008C808: lw          $t6, 0x29E4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X29E4);
    // 0x8008C80C: addiu       $t2, $t8, 0x30
    ctx->r10 = ADD32(ctx->r24, 0X30);
L_8008C810:
    // 0x8008C810: lw          $at, 0x0($t8)
    ctx->r1 = MEM_W(ctx->r24, 0X0);
    // 0x8008C814: addiu       $t8, $t8, 0xC
    ctx->r24 = ADD32(ctx->r24, 0XC);
    // 0x8008C818: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8008C81C: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x8008C820: lw          $at, -0x8($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X8);
    // 0x8008C824: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x8008C828: lw          $at, -0x4($t8)
    ctx->r1 = MEM_W(ctx->r24, -0X4);
    // 0x8008C82C: bne         $t8, $t2, L_8008C810
    if (ctx->r24 != ctx->r10) {
        // 0x8008C830: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8008C810;
    }
    // 0x8008C830: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x8008C834: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8008C838: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008C83C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8008C840: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8008C844: jr          $ra
    // 0x8008C848: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8008C848: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8008C84C: nop

;}
RECOMP_FUNC void func_8008C850(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C850: lui         $t6, 0xA404
    ctx->r14 = S32(0XA404 << 16);
    // 0x8008C854: jr          $ra
    // 0x8008C858: lw          $v0, 0x10($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X10);
    return;
    // 0x8008C858: lw          $v0, 0x10($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X10);
    // 0x8008C85C: nop

;}
RECOMP_FUNC void func_8008C860(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C860: lui         $t6, 0xA404
    ctx->r14 = S32(0XA404 << 16);
    // 0x8008C864: jr          $ra
    // 0x8008C868: sw          $a0, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r4;
    return;
    // 0x8008C868: sw          $a0, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->r4;
    // 0x8008C86C: nop

;}
RECOMP_FUNC void func_8008C8B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C8B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008C8B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008C8B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8008C8BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8008C8C0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8008C8C4: jal         0x8008C940
    // 0x8008C8C8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8008C940(rdram, ctx);
        goto after_0;
    // 0x8008C8C8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x8008C8CC: beq         $v0, $zero, L_8008C8DC
    if (ctx->r2 == 0) {
        // 0x8008C8D0: nop
    
            goto L_8008C8DC;
    }
    // 0x8008C8D0: nop

    // 0x8008C8D4: b           L_8008C92C
    // 0x8008C8D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8008C92C;
    // 0x8008C8D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8008C8DC:
    // 0x8008C8DC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8008C8E0: lui         $t7, 0xA404
    ctx->r15 = S32(0XA404 << 16);
    // 0x8008C8E4: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x8008C8E8: jal         0x80082090
    // 0x8008C8EC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x8008C8EC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x8008C8F0: lui         $t8, 0xA404
    ctx->r24 = S32(0XA404 << 16);
    // 0x8008C8F4: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    // 0x8008C8F8: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8008C8FC: bne         $t9, $zero, L_8008C918
    if (ctx->r25 != 0) {
        // 0x8008C900: nop
    
            goto L_8008C918;
    }
    // 0x8008C900: nop

    // 0x8008C904: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8008C908: lui         $t2, 0xA404
    ctx->r10 = S32(0XA404 << 16);
    // 0x8008C90C: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x8008C910: b           L_8008C928
    // 0x8008C914: sw          $t1, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r9;
        goto L_8008C928;
    // 0x8008C914: sw          $t1, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->r9;
L_8008C918:
    // 0x8008C918: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8008C91C: lui         $t5, 0xA404
    ctx->r13 = S32(0XA404 << 16);
    // 0x8008C920: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8008C924: sw          $t4, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r12;
L_8008C928:
    // 0x8008C928: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008C92C:
    // 0x8008C92C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008C930: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8008C934: jr          $ra
    // 0x8008C938: nop

    return;
    // 0x8008C938: nop

    // 0x8008C93C: nop

;}
RECOMP_FUNC void func_8008C940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C940: lui         $t6, 0xA404
    ctx->r14 = S32(0XA404 << 16);
    // 0x8008C944: lw          $a0, 0x10($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X10);
    // 0x8008C948: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008C94C: andi        $t7, $a0, 0x1C
    ctx->r15 = ctx->r4 & 0X1C;
    // 0x8008C950: beq         $t7, $zero, L_8008C960
    if (ctx->r15 == 0) {
        // 0x8008C954: nop
    
            goto L_8008C960;
    }
    // 0x8008C954: nop

    // 0x8008C958: b           L_8008C964
    // 0x8008C95C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8008C964;
    // 0x8008C95C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008C960:
    // 0x8008C960: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008C964:
    // 0x8008C964: jr          $ra
    // 0x8008C968: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8008C968: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8008C96C: nop

;}
RECOMP_FUNC void func_8008C970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008C970: lui         $t6, 0xA410
    ctx->r14 = S32(0XA410 << 16);
    // 0x8008C974: lw          $a0, 0xC($t6)
    ctx->r4 = MEM_W(ctx->r14, 0XC);
    // 0x8008C978: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008C97C: andi        $t7, $a0, 0x100
    ctx->r15 = ctx->r4 & 0X100;
    // 0x8008C980: beq         $t7, $zero, L_8008C990
    if (ctx->r15 == 0) {
        // 0x8008C984: nop
    
            goto L_8008C990;
    }
    // 0x8008C984: nop

    // 0x8008C988: b           L_8008C994
    // 0x8008C98C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8008C994;
    // 0x8008C98C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008C990:
    // 0x8008C990: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008C994:
    // 0x8008C994: jr          $ra
    // 0x8008C998: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8008C998: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8008C99C: nop

;}
RECOMP_FUNC void func_8008CAB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CAB0: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8008CAB4: sw          $zero, 0x8($sp)
    MEM_W(0X8, ctx->r29) = 0;
    // 0x8008CAB8: sw          $a0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r4;
    // 0x8008CABC: blez        $a1, L_8008CB00
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8008CAC0: sw          $zero, 0xC($sp)
        MEM_W(0XC, ctx->r29) = 0;
            goto L_8008CB00;
    }
    // 0x8008CAC0: sw          $zero, 0xC($sp)
    MEM_W(0XC, ctx->r29) = 0;
L_8008CAC4:
    // 0x8008CAC4: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8008CAC8: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x8008CACC: lw          $t3, 0xC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XC);
    // 0x8008CAD0: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x8008CAD4: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x8008CAD8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8008CADC: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8008CAE0: sw          $t9, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r25;
    // 0x8008CAE4: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x8008CAE8: slt         $at, $t4, $a1
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8008CAEC: sw          $t4, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r12;
    // 0x8008CAF0: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x8008CAF4: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x8008CAF8: bne         $at, $zero, L_8008CAC4
    if (ctx->r1 != 0) {
        // 0x8008CAFC: sw          $t2, 0x8($sp)
        MEM_W(0X8, ctx->r29) = ctx->r10;
            goto L_8008CAC4;
    }
    // 0x8008CAFC: sw          $t2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r10;
L_8008CB00:
    // 0x8008CB00: lhu         $v0, 0xA($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0XA);
    // 0x8008CB04: jr          $ra
    // 0x8008CB08: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8008CB08: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8008CB0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CB0C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008CB10: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
    // 0x8008CB14: sh          $zero, 0x0($a2)
    MEM_H(0X0, ctx->r6) = 0;
    // 0x8008CB18: lhu         $t6, 0x0($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X0);
    // 0x8008CB1C: sh          $t6, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r14;
    // 0x8008CB20: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
L_8008CB24:
    // 0x8008CB24: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x8008CB28: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x8008CB2C: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x8008CB30: sh          $t9, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r25;
    // 0x8008CB34: lhu         $t0, 0x0($a1)
    ctx->r8 = MEM_HU(ctx->r5, 0X0);
    // 0x8008CB38: addu        $t1, $t0, $t9
    ctx->r9 = ADD32(ctx->r8, ctx->r25);
    // 0x8008CB3C: sh          $t1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r9;
    // 0x8008CB40: lhu         $t3, 0x6($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X6);
    // 0x8008CB44: lhu         $t2, 0x0($a2)
    ctx->r10 = MEM_HU(ctx->r6, 0X0);
    // 0x8008CB48: nor         $t4, $t3, $zero
    ctx->r12 = ~(ctx->r11 | 0);
    // 0x8008CB4C: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x8008CB50: sh          $t5, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r13;
    // 0x8008CB54: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x8008CB58: addiu       $t7, $t6, 0x2
    ctx->r15 = ADD32(ctx->r14, 0X2);
    // 0x8008CB5C: sltiu       $at, $t7, 0x1C
    ctx->r1 = ctx->r15 < 0X1C ? 1 : 0;
    // 0x8008CB60: bne         $at, $zero, L_8008CB24
    if (ctx->r1 != 0) {
        // 0x8008CB64: sw          $t7, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r15;
            goto L_8008CB24;
    }
    // 0x8008CB64: sw          $t7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r15;
    // 0x8008CB68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8008CB6C: jr          $ra
    // 0x8008CB70: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8008CB70: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8008CB74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CB74: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x8008CB78: sw          $a0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r4;
    // 0x8008CB7C: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x8008CB80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008CB84: sw          $a1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r5;
    // 0x8008CB88: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x8008CB8C: sw          $zero, 0x74($sp)
    MEM_W(0X74, ctx->r29) = 0;
    // 0x8008CB90: sb          $zero, 0x33($sp)
    MEM_B(0X33, ctx->r29) = 0;
    // 0x8008CB94: lbu         $t7, 0x65($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X65);
    // 0x8008CB98: beq         $t7, $zero, L_8008CBC4
    if (ctx->r15 == 0) {
        // 0x8008CB9C: nop
    
            goto L_8008CBC4;
    }
    // 0x8008CB9C: nop

    // 0x8008CBA0: sb          $zero, 0x65($t6)
    MEM_B(0X65, ctx->r14) = 0;
    // 0x8008CBA4: jal         0x8008D79C
    // 0x8008CBA8: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    func_8008D79C(rdram, ctx);
        goto after_0;
    // 0x8008CBA8: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    after_0:
    // 0x8008CBAC: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x8008CBB0: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x8008CBB4: beq         $t8, $zero, L_8008CBC4
    if (ctx->r24 == 0) {
        // 0x8008CBB8: nop
    
            goto L_8008CBC4;
    }
    // 0x8008CBB8: nop

    // 0x8008CBBC: b           L_8008CF7C
    // 0x8008CBC0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_8008CF7C;
    // 0x8008CBC0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8008CBC4:
    // 0x8008CBC4: lw          $t0, 0x80($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X80);
    // 0x8008CBC8: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x8008CBCC: jal         0x80084BC0
    // 0x8008CBD0: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    osGetCount_recomp(rdram, ctx);
        goto after_1;
    // 0x8008CBD0: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    after_1:
    // 0x8008CBD4: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x8008CBD8: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x8008CBDC: lw          $t2, 0x7C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X7C);
    // 0x8008CBE0: lw          $t3, 0x80($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X80);
    // 0x8008CBE4: lw          $t4, 0x8($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X8);
    // 0x8008CBE8: lw          $t5, 0xC($t2)
    ctx->r13 = MEM_W(ctx->r10, 0XC);
    // 0x8008CBEC: sw          $t4, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r12;
    // 0x8008CBF0: sw          $t5, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->r13;
    // 0x8008CBF4: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8008CBF8: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x8008CBFC: lw          $t6, 0x10($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X10);
    // 0x8008CC00: lw          $t7, 0x14($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X14);
    // 0x8008CC04: sw          $t6, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r14;
    // 0x8008CC08: sw          $t7, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->r15;
    // 0x8008CC0C: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_8008CC10:
    // 0x8008CC10: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8008CC14: lw          $t0, 0x78($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X78);
    // 0x8008CC18: sb          $t9, 0x65($t0)
    MEM_B(0X65, ctx->r8) = ctx->r25;
    // 0x8008CC1C: jal         0x8008D79C
    // 0x8008CC20: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    func_8008D79C(rdram, ctx);
        goto after_2;
    // 0x8008CC20: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    after_2:
    // 0x8008CC24: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x8008CC28: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x8008CC2C: beq         $t1, $zero, L_8008CC3C
    if (ctx->r9 == 0) {
        // 0x8008CC30: nop
    
            goto L_8008CC3C;
    }
    // 0x8008CC30: nop

    // 0x8008CC34: b           L_8008CF7C
    // 0x8008CC38: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_8008CF7C;
    // 0x8008CC38: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_8008CC3C:
    // 0x8008CC3C: lw          $t2, 0x78($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X78);
    // 0x8008CC40: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8008CC44: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8008CC48: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    // 0x8008CC4C: jal         0x8008D810
    // 0x8008CC50: lw          $a1, 0x8($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X8);
    func_8008D810(rdram, ctx);
        goto after_3;
    // 0x8008CC50: lw          $a1, 0x8($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X8);
    after_3:
    // 0x8008CC54: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x8008CC58: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
    // 0x8008CC5C: beq         $t4, $zero, L_8008CC6C
    if (ctx->r12 == 0) {
        // 0x8008CC60: nop
    
            goto L_8008CC6C;
    }
    // 0x8008CC60: nop

    // 0x8008CC64: b           L_8008CF7C
    // 0x8008CC68: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
        goto L_8008CF7C;
    // 0x8008CC68: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_8008CC6C:
    // 0x8008CC6C: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8008CC70: addiu       $t6, $sp, 0x54
    ctx->r14 = ADD32(ctx->r29, 0X54);
    // 0x8008CC74: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8008CC78: ori         $t3, $t5, 0x80
    ctx->r11 = ctx->r13 | 0X80;
    // 0x8008CC7C: sb          $t3, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r11;
    // 0x8008CC80: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
L_8008CC84:
    // 0x8008CC84: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8008CC88: addiu       $t9, $sp, 0x54
    ctx->r25 = ADD32(ctx->r29, 0X54);
    // 0x8008CC8C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8008CC90: lbu         $t1, 0x0($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X0);
    // 0x8008CC94: nor         $t2, $t1, $zero
    ctx->r10 = ~(ctx->r9 | 0);
    // 0x8008CC98: sb          $t2, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r10;
    // 0x8008CC9C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8008CCA0: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8008CCA4: slti        $at, $t5, 0x20
    ctx->r1 = SIGNED(ctx->r13) < 0X20 ? 1 : 0;
    // 0x8008CCA8: bne         $at, $zero, L_8008CC84
    if (ctx->r1 != 0) {
        // 0x8008CCAC: sw          $t5, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r13;
            goto L_8008CC84;
    }
    // 0x8008CCAC: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x8008CCB0: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x8008CCB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8008CCB8: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8008CCBC: lw          $a0, 0x4($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X4);
    // 0x8008CCC0: lw          $a1, 0x8($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X8);
    // 0x8008CCC4: jal         0x8008E600
    // 0x8008CCC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8008E600(rdram, ctx);
        goto after_4;
    // 0x8008CCC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x8008CCCC: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x8008CCD0: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x8008CCD4: beq         $t6, $zero, L_8008CCE4
    if (ctx->r14 == 0) {
        // 0x8008CCD8: nop
    
            goto L_8008CCE4;
    }
    // 0x8008CCD8: nop

    // 0x8008CCDC: b           L_8008CF7C
    // 0x8008CCE0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
        goto L_8008CF7C;
    // 0x8008CCE0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_8008CCE4:
    // 0x8008CCE4: lw          $t7, 0x78($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X78);
    // 0x8008CCE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8008CCEC: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    // 0x8008CCF0: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    // 0x8008CCF4: jal         0x8008D810
    // 0x8008CCF8: lw          $a1, 0x8($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X8);
    func_8008D810(rdram, ctx);
        goto after_5;
    // 0x8008CCF8: lw          $a1, 0x8($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X8);
    after_5:
    // 0x8008CCFC: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x8008CD00: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x8008CD04: beq         $t8, $zero, L_8008CD14
    if (ctx->r24 == 0) {
        // 0x8008CD08: nop
    
            goto L_8008CD14;
    }
    // 0x8008CD08: nop

    // 0x8008CD0C: b           L_8008CF7C
    // 0x8008CD10: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_8008CF7C;
    // 0x8008CD10: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8008CD14:
    // 0x8008CD14: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_8008CD18:
    // 0x8008CD18: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8008CD1C: addu        $t1, $sp, $t9
    ctx->r9 = ADD32(ctx->r29, ctx->r25);
    // 0x8008CD20: addu        $t2, $sp, $t9
    ctx->r10 = ADD32(ctx->r29, ctx->r25);
    // 0x8008CD24: lbu         $t2, 0x34($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X34);
    // 0x8008CD28: lbu         $t1, 0x54($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X54);
    // 0x8008CD2C: bne         $t1, $t2, L_8008CD48
    if (ctx->r9 != ctx->r10) {
        // 0x8008CD30: nop
    
            goto L_8008CD48;
    }
    // 0x8008CD30: nop

    // 0x8008CD34: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8008CD38: addiu       $t4, $t0, 0x1
    ctx->r12 = ADD32(ctx->r8, 0X1);
    // 0x8008CD3C: slti        $at, $t4, 0x20
    ctx->r1 = SIGNED(ctx->r12) < 0X20 ? 1 : 0;
    // 0x8008CD40: bne         $at, $zero, L_8008CD18
    if (ctx->r1 != 0) {
        // 0x8008CD44: sw          $t4, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r12;
            goto L_8008CD18;
    }
    // 0x8008CD44: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
L_8008CD48:
    // 0x8008CD48: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8008CD4C: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x8008CD50: bne         $t5, $at, L_8008CDEC
    if (ctx->r13 != ctx->r1) {
        // 0x8008CD54: nop
    
            goto L_8008CDEC;
    }
    // 0x8008CD54: nop

    // 0x8008CD58: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8008CD5C: blez        $t3, L_8008CDD0
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8008CD60: nop
    
            goto L_8008CDD0;
    }
    // 0x8008CD60: nop

    // 0x8008CD64: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x8008CD68: sb          $zero, 0x65($t6)
    MEM_B(0X65, ctx->r14) = 0;
    // 0x8008CD6C: jal         0x8008D79C
    // 0x8008CD70: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    func_8008D79C(rdram, ctx);
        goto after_6;
    // 0x8008CD70: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    after_6:
    // 0x8008CD74: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x8008CD78: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x8008CD7C: beq         $t7, $zero, L_8008CD8C
    if (ctx->r15 == 0) {
        // 0x8008CD80: nop
    
            goto L_8008CD8C;
    }
    // 0x8008CD80: nop

    // 0x8008CD84: b           L_8008CF7C
    // 0x8008CD88: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_8008CF7C;
    // 0x8008CD88: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8008CD8C:
    // 0x8008CD8C: lw          $t8, 0x78($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X78);
    // 0x8008CD90: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8008CD94: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8008CD98: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    // 0x8008CD9C: jal         0x8008D810
    // 0x8008CDA0: lw          $a1, 0x8($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X8);
    func_8008D810(rdram, ctx);
        goto after_7;
    // 0x8008CDA0: lw          $a1, 0x8($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X8);
    after_7:
    // 0x8008CDA4: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x8008CDA8: lw          $t9, 0x74($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X74);
    // 0x8008CDAC: beq         $t9, $zero, L_8008CDBC
    if (ctx->r25 == 0) {
        // 0x8008CDB0: nop
    
            goto L_8008CDBC;
    }
    // 0x8008CDB0: nop

    // 0x8008CDB4: b           L_8008CF7C
    // 0x8008CDB8: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_8008CF7C;
    // 0x8008CDB8: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_8008CDBC:
    // 0x8008CDBC: addiu       $t1, $sp, 0x54
    ctx->r9 = ADD32(ctx->r29, 0X54);
    // 0x8008CDC0: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x8008CDC4: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x8008CDC8: bne         $t2, $at, L_8008CDEC
    if (ctx->r10 != ctx->r1) {
        // 0x8008CDCC: nop
    
            goto L_8008CDEC;
    }
    // 0x8008CDCC: nop

L_8008CDD0:
    // 0x8008CDD0: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8008CDD4: addiu       $t4, $t0, 0x1
    ctx->r12 = ADD32(ctx->r8, 0X1);
    // 0x8008CDD8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8008CDDC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8008CDE0: slti        $at, $t5, 0x3E
    ctx->r1 = SIGNED(ctx->r13) < 0X3E ? 1 : 0;
    // 0x8008CDE4: bne         $at, $zero, L_8008CC10
    if (ctx->r1 != 0) {
        // 0x8008CDE8: nop
    
            goto L_8008CC10;
    }
    // 0x8008CDE8: nop

L_8008CDEC:
    // 0x8008CDEC: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x8008CDF0: sb          $zero, 0x65($t3)
    MEM_B(0X65, ctx->r11) = 0;
    // 0x8008CDF4: jal         0x8008D79C
    // 0x8008CDF8: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    func_8008D79C(rdram, ctx);
        goto after_8;
    // 0x8008CDF8: lw          $a0, 0x78($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X78);
    after_8:
    // 0x8008CDFC: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x8008CE00: lw          $t6, 0x74($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X74);
    // 0x8008CE04: beq         $t6, $zero, L_8008CE14
    if (ctx->r14 == 0) {
        // 0x8008CE08: nop
    
            goto L_8008CE14;
    }
    // 0x8008CE08: nop

    // 0x8008CE0C: b           L_8008CF7C
    // 0x8008CE10: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
        goto L_8008CF7C;
    // 0x8008CE10: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_8008CE14:
    // 0x8008CE14: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8008CE18: blez        $t7, L_8008CE2C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x8008CE1C: nop
    
            goto L_8008CE2C;
    }
    // 0x8008CE1C: nop

    // 0x8008CE20: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8008CE24: b           L_8008CE30
    // 0x8008CE28: sb          $t8, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r24;
        goto L_8008CE30;
    // 0x8008CE28: sb          $t8, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r24;
L_8008CE2C:
    // 0x8008CE2C: sb          $zero, 0x33($sp)
    MEM_B(0X33, ctx->r29) = 0;
L_8008CE30:
    // 0x8008CE30: lw          $t9, 0x7C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X7C);
    // 0x8008CE34: lbu         $t0, 0x33($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X33);
    // 0x8008CE38: lw          $t5, 0x80($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X80);
    // 0x8008CE3C: lhu         $t1, 0x18($t9)
    ctx->r9 = MEM_HU(ctx->r25, 0X18);
    // 0x8008CE40: andi        $t2, $t1, 0xFFFE
    ctx->r10 = ctx->r9 & 0XFFFE;
    // 0x8008CE44: or          $t4, $t2, $t0
    ctx->r12 = ctx->r10 | ctx->r8;
    // 0x8008CE48: sh          $t4, 0x18($t5)
    MEM_H(0X18, ctx->r13) = ctx->r12;
    // 0x8008CE4C: lw          $t6, 0x80($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X80);
    // 0x8008CE50: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8008CE54: sb          $t3, 0x1A($t6)
    MEM_B(0X1A, ctx->r14) = ctx->r11;
    // 0x8008CE58: lw          $t7, 0x7C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X7C);
    // 0x8008CE5C: lw          $t9, 0x80($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X80);
    // 0x8008CE60: lbu         $t8, 0x1B($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X1B);
    // 0x8008CE64: sb          $t8, 0x1B($t9)
    MEM_B(0X1B, ctx->r25) = ctx->r24;
    // 0x8008CE68: lw          $t1, 0x80($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X80);
    // 0x8008CE6C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8008CE70: addiu       $a1, $t1, 0x1C
    ctx->r5 = ADD32(ctx->r9, 0X1C);
    // 0x8008CE74: jal         0x8008CB0C
    // 0x8008CE78: addiu       $a2, $t1, 0x1E
    ctx->r6 = ADD32(ctx->r9, 0X1E);
    func_8008CB0C(rdram, ctx);
        goto after_9;
    // 0x8008CE78: addiu       $a2, $t1, 0x1E
    ctx->r6 = ADD32(ctx->r9, 0X1E);
    after_9:
    // 0x8008CE7C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8008CE80: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    // 0x8008CE84: sh          $t2, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r10;
    // 0x8008CE88: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x8008CE8C: addiu       $t5, $sp, 0x20
    ctx->r13 = ADD32(ctx->r29, 0X20);
    // 0x8008CE90: sh          $t4, 0x2($t5)
    MEM_H(0X2, ctx->r13) = ctx->r12;
    // 0x8008CE94: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x8008CE98: addiu       $t6, $sp, 0x20
    ctx->r14 = ADD32(ctx->r29, 0X20);
    // 0x8008CE9C: sh          $t3, 0x4($t6)
    MEM_H(0X4, ctx->r14) = ctx->r11;
    // 0x8008CEA0: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x8008CEA4: addiu       $t8, $sp, 0x20
    ctx->r24 = ADD32(ctx->r29, 0X20);
    // 0x8008CEA8: sh          $t7, 0x6($t8)
    MEM_H(0X6, ctx->r24) = ctx->r15;
    // 0x8008CEAC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_8008CEB0:
    // 0x8008CEB0: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8008CEB4: lw          $t9, 0x78($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X78);
    // 0x8008CEB8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8008CEBC: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x8008CEC0: addu        $a2, $sp, $t2
    ctx->r6 = ADD32(ctx->r29, ctx->r10);
    // 0x8008CEC4: lhu         $a2, 0x20($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X20);
    // 0x8008CEC8: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x8008CECC: lw          $a1, 0x8($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X8);
    // 0x8008CED0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x8008CED4: jal         0x8008E600
    // 0x8008CED8: lw          $a3, 0x80($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X80);
    func_8008E600(rdram, ctx);
        goto after_10;
    // 0x8008CED8: lw          $a3, 0x80($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X80);
    after_10:
    // 0x8008CEDC: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x8008CEE0: lw          $t4, 0x74($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X74);
    // 0x8008CEE4: beq         $t4, $zero, L_8008CEF4
    if (ctx->r12 == 0) {
        // 0x8008CEE8: nop
    
            goto L_8008CEF4;
    }
    // 0x8008CEE8: nop

    // 0x8008CEEC: b           L_8008CF7C
    // 0x8008CEF0: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
        goto L_8008CF7C;
    // 0x8008CEF0: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_8008CEF4:
    // 0x8008CEF4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8008CEF8: addiu       $t3, $t5, 0x1
    ctx->r11 = ADD32(ctx->r13, 0X1);
    // 0x8008CEFC: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x8008CF00: bne         $at, $zero, L_8008CEB0
    if (ctx->r1 != 0) {
        // 0x8008CF04: sw          $t3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r11;
            goto L_8008CEB0;
    }
    // 0x8008CF04: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x8008CF08: lw          $t6, 0x78($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X78);
    // 0x8008CF0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8008CF10: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8008CF14: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    // 0x8008CF18: jal         0x8008D810
    // 0x8008CF1C: lw          $a1, 0x8($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X8);
    func_8008D810(rdram, ctx);
        goto after_11;
    // 0x8008CF1C: lw          $a1, 0x8($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X8);
    after_11:
    // 0x8008CF20: sw          $v0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r2;
    // 0x8008CF24: lw          $t7, 0x74($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X74);
    // 0x8008CF28: beq         $t7, $zero, L_8008CF38
    if (ctx->r15 == 0) {
        // 0x8008CF2C: nop
    
            goto L_8008CF38;
    }
    // 0x8008CF2C: nop

    // 0x8008CF30: b           L_8008CF7C
    // 0x8008CF34: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_8008CF7C;
    // 0x8008CF34: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8008CF38:
    // 0x8008CF38: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_8008CF3C:
    // 0x8008CF3C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8008CF40: lw          $t8, 0x80($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X80);
    // 0x8008CF44: addu        $t0, $sp, $t9
    ctx->r8 = ADD32(ctx->r29, ctx->r25);
    // 0x8008CF48: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x8008CF4C: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x8008CF50: lbu         $t0, 0x54($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X54);
    // 0x8008CF54: beq         $t2, $t0, L_8008CF64
    if (ctx->r10 == ctx->r8) {
        // 0x8008CF58: nop
    
            goto L_8008CF64;
    }
    // 0x8008CF58: nop

    // 0x8008CF5C: b           L_8008CF7C
    // 0x8008CF60: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_8008CF7C;
    // 0x8008CF60: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_8008CF64:
    // 0x8008CF64: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8008CF68: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8008CF6C: slti        $at, $t5, 0x20
    ctx->r1 = SIGNED(ctx->r13) < 0X20 ? 1 : 0;
    // 0x8008CF70: bne         $at, $zero, L_8008CF3C
    if (ctx->r1 != 0) {
        // 0x8008CF74: sw          $t5, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r13;
            goto L_8008CF3C;
    }
    // 0x8008CF74: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x8008CF78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008CF7C:
    // 0x8008CF7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008CF80: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    // 0x8008CF84: jr          $ra
    // 0x8008CF88: nop

    return;
    // 0x8008CF88: nop

;}
RECOMP_FUNC void func_8008CF8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008CF8C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8008CF90: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8008CF94: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8008CF98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008CF9C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8008CFA0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8008CFA4: lbu         $t7, 0x65($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X65);
    // 0x8008CFA8: beq         $t7, $zero, L_8008CFD4
    if (ctx->r15 == 0) {
        // 0x8008CFAC: nop
    
            goto L_8008CFD4;
    }
    // 0x8008CFAC: nop

    // 0x8008CFB0: sb          $zero, 0x65($t6)
    MEM_B(0X65, ctx->r14) = 0;
    // 0x8008CFB4: jal         0x8008D79C
    // 0x8008CFB8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_8008D79C(rdram, ctx);
        goto after_0;
    // 0x8008CFB8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_0:
    // 0x8008CFBC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8008CFC0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8008CFC4: beq         $t8, $zero, L_8008CFD4
    if (ctx->r24 == 0) {
        // 0x8008CFC8: nop
    
            goto L_8008CFD4;
    }
    // 0x8008CFC8: nop

    // 0x8008CFCC: b           L_8008D114
    // 0x8008CFD0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_8008D114;
    // 0x8008CFD0: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8008CFD4:
    // 0x8008CFD4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8008CFD8: addiu       $t0, $sp, 0x30
    ctx->r8 = ADD32(ctx->r29, 0X30);
    // 0x8008CFDC: sh          $t9, 0x0($t0)
    MEM_H(0X0, ctx->r8) = ctx->r25;
    // 0x8008CFE0: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8008CFE4: addiu       $t2, $sp, 0x30
    ctx->r10 = ADD32(ctx->r29, 0X30);
    // 0x8008CFE8: sh          $t1, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r9;
    // 0x8008CFEC: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x8008CFF0: addiu       $t4, $sp, 0x30
    ctx->r12 = ADD32(ctx->r29, 0X30);
    // 0x8008CFF4: sh          $t3, 0x4($t4)
    MEM_H(0X4, ctx->r12) = ctx->r11;
    // 0x8008CFF8: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x8008CFFC: addiu       $t7, $sp, 0x30
    ctx->r15 = ADD32(ctx->r29, 0X30);
    // 0x8008D000: sh          $t5, 0x6($t7)
    MEM_H(0X6, ctx->r15) = ctx->r13;
    // 0x8008D004: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8008D008: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_8008D00C:
    // 0x8008D00C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8008D010: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8008D014: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x8008D018: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8008D01C: addu        $a2, $sp, $t0
    ctx->r6 = ADD32(ctx->r29, ctx->r8);
    // 0x8008D020: lhu         $a2, 0x30($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X30);
    // 0x8008D024: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    // 0x8008D028: jal         0x8008D810
    // 0x8008D02C: lw          $a1, 0x8($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X8);
    func_8008D810(rdram, ctx);
        goto after_1;
    // 0x8008D02C: lw          $a1, 0x8($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X8);
    after_1:
    // 0x8008D030: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8008D034: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8008D038: beq         $t1, $zero, L_8008D048
    if (ctx->r9 == 0) {
        // 0x8008D03C: nop
    
            goto L_8008D048;
    }
    // 0x8008D03C: nop

    // 0x8008D040: b           L_8008D114
    // 0x8008D044: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_8008D114;
    // 0x8008D044: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_8008D048:
    // 0x8008D048: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8008D04C: addiu       $a1, $sp, 0x2A
    ctx->r5 = ADD32(ctx->r29, 0X2A);
    // 0x8008D050: jal         0x8008CB0C
    // 0x8008D054: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_8008CB0C(rdram, ctx);
        goto after_2;
    // 0x8008D054: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x8008D058: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8008D05C: lhu         $t4, 0x2A($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X2A);
    // 0x8008D060: lhu         $t3, 0x1C($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X1C);
    // 0x8008D064: bne         $t3, $t4, L_8008D07C
    if (ctx->r11 != ctx->r12) {
        // 0x8008D068: nop
    
            goto L_8008D07C;
    }
    // 0x8008D068: nop

    // 0x8008D06C: lhu         $t5, 0x1E($t2)
    ctx->r13 = MEM_HU(ctx->r10, 0X1E);
    // 0x8008D070: lhu         $t7, 0x28($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X28);
    // 0x8008D074: beq         $t5, $t7, L_8008D090
    if (ctx->r13 == ctx->r15) {
        // 0x8008D078: nop
    
            goto L_8008D090;
    }
    // 0x8008D078: nop

L_8008D07C:
    // 0x8008D07C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8008D080: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x8008D084: slti        $at, $t8, 0x4
    ctx->r1 = SIGNED(ctx->r24) < 0X4 ? 1 : 0;
    // 0x8008D088: bne         $at, $zero, L_8008D00C
    if (ctx->r1 != 0) {
        // 0x8008D08C: sw          $t8, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r24;
            goto L_8008D00C;
    }
    // 0x8008D08C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_8008D090:
    // 0x8008D090: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8008D094: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8008D098: bne         $t9, $at, L_8008D0A8
    if (ctx->r25 != ctx->r1) {
        // 0x8008D09C: nop
    
            goto L_8008D0A8;
    }
    // 0x8008D09C: nop

    // 0x8008D0A0: b           L_8008D114
    // 0x8008D0A4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_8008D114;
    // 0x8008D0A4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_8008D0A8:
    // 0x8008D0A8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_8008D0AC:
    // 0x8008D0AC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8008D0B0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8008D0B4: beq         $t0, $t1, L_8008D0FC
    if (ctx->r8 == ctx->r9) {
        // 0x8008D0B8: nop
    
            goto L_8008D0FC;
    }
    // 0x8008D0B8: nop

    // 0x8008D0BC: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8008D0C0: sll         $t4, $t0, 1
    ctx->r12 = S32(ctx->r8 << 1);
    // 0x8008D0C4: addu        $a2, $sp, $t4
    ctx->r6 = ADD32(ctx->r29, ctx->r12);
    // 0x8008D0C8: lhu         $a2, 0x30($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X30);
    // 0x8008D0CC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8008D0D0: lw          $a0, 0x4($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X4);
    // 0x8008D0D4: lw          $a1, 0x8($t3)
    ctx->r5 = MEM_W(ctx->r11, 0X8);
    // 0x8008D0D8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8008D0DC: jal         0x8008E600
    // 0x8008D0E0: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    func_8008E600(rdram, ctx);
        goto after_3;
    // 0x8008D0E0: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    after_3:
    // 0x8008D0E4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8008D0E8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8008D0EC: beq         $t5, $zero, L_8008D0FC
    if (ctx->r13 == 0) {
        // 0x8008D0F0: nop
    
            goto L_8008D0FC;
    }
    // 0x8008D0F0: nop

    // 0x8008D0F4: b           L_8008D114
    // 0x8008D0F8: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
        goto L_8008D114;
    // 0x8008D0F8: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
L_8008D0FC:
    // 0x8008D0FC: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8008D100: addiu       $t6, $t7, 0x1
    ctx->r14 = ADD32(ctx->r15, 0X1);
    // 0x8008D104: slti        $at, $t6, 0x4
    ctx->r1 = SIGNED(ctx->r14) < 0X4 ? 1 : 0;
    // 0x8008D108: bne         $at, $zero, L_8008D0AC
    if (ctx->r1 != 0) {
        // 0x8008D10C: sw          $t6, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r14;
            goto L_8008D0AC;
    }
    // 0x8008D10C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8008D110: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008D114:
    // 0x8008D114: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008D118: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8008D11C: jr          $ra
    // 0x8008D120: nop

    return;
    // 0x8008D120: nop

;}
RECOMP_FUNC void func_8008D124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D124: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8008D128: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x8008D12C: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x8008D130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D134: lbu         $t7, 0x65($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X65);
    // 0x8008D138: beq         $t7, $zero, L_8008D164
    if (ctx->r15 == 0) {
        // 0x8008D13C: nop
    
            goto L_8008D164;
    }
    // 0x8008D13C: nop

    // 0x8008D140: sb          $zero, 0x65($t6)
    MEM_B(0X65, ctx->r14) = 0;
    // 0x8008D144: jal         0x8008D79C
    // 0x8008D148: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    func_8008D79C(rdram, ctx);
        goto after_0;
    // 0x8008D148: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    after_0:
    // 0x8008D14C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8008D150: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8008D154: beq         $t8, $zero, L_8008D164
    if (ctx->r24 == 0) {
        // 0x8008D158: nop
    
            goto L_8008D164;
    }
    // 0x8008D158: nop

    // 0x8008D15C: b           L_8008D370
    // 0x8008D160: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_8008D370;
    // 0x8008D160: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8008D164:
    // 0x8008D164: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x8008D168: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8008D16C: addiu       $a3, $sp, 0x40
    ctx->r7 = ADD32(ctx->r29, 0X40);
    // 0x8008D170: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x8008D174: jal         0x8008D810
    // 0x8008D178: lw          $a1, 0x8($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X8);
    func_8008D810(rdram, ctx);
        goto after_1;
    // 0x8008D178: lw          $a1, 0x8($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X8);
    after_1:
    // 0x8008D17C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8008D180: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8008D184: beq         $t0, $zero, L_8008D194
    if (ctx->r8 == 0) {
        // 0x8008D188: nop
    
            goto L_8008D194;
    }
    // 0x8008D188: nop

    // 0x8008D18C: b           L_8008D370
    // 0x8008D190: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_8008D370;
    // 0x8008D190: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_8008D194:
    // 0x8008D194: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8008D198: addiu       $a1, $sp, 0x62
    ctx->r5 = ADD32(ctx->r29, 0X62);
    // 0x8008D19C: jal         0x8008CB0C
    // 0x8008D1A0: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    func_8008CB0C(rdram, ctx);
        goto after_2;
    // 0x8008D1A0: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_2:
    // 0x8008D1A4: addiu       $t1, $sp, 0x40
    ctx->r9 = ADD32(ctx->r29, 0X40);
    // 0x8008D1A8: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8008D1AC: lhu         $t2, 0x1C($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X1C);
    // 0x8008D1B0: lhu         $t3, 0x62($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X62);
    // 0x8008D1B4: bne         $t2, $t3, L_8008D1CC
    if (ctx->r10 != ctx->r11) {
        // 0x8008D1B8: nop
    
            goto L_8008D1CC;
    }
    // 0x8008D1B8: nop

    // 0x8008D1BC: lhu         $t4, 0x1E($t1)
    ctx->r12 = MEM_HU(ctx->r9, 0X1E);
    // 0x8008D1C0: lhu         $t5, 0x60($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X60);
    // 0x8008D1C4: beq         $t4, $t5, L_8008D234
    if (ctx->r12 == ctx->r13) {
        // 0x8008D1C8: nop
    
            goto L_8008D234;
    }
    // 0x8008D1C8: nop

L_8008D1CC:
    // 0x8008D1CC: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x8008D1D0: jal         0x8008CF8C
    // 0x8008D1D4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_8008CF8C(rdram, ctx);
        goto after_3;
    // 0x8008D1D4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x8008D1D8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8008D1DC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8008D1E0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8008D1E4: bne         $t7, $at, L_8008D220
    if (ctx->r15 != ctx->r1) {
        // 0x8008D1E8: nop
    
            goto L_8008D220;
    }
    // 0x8008D1E8: nop

    // 0x8008D1EC: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x8008D1F0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8008D1F4: jal         0x8008CB74
    // 0x8008D1F8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_8008CB74(rdram, ctx);
        goto after_4;
    // 0x8008D1F8: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_4:
    // 0x8008D1FC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8008D200: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8008D204: beq         $t6, $zero, L_8008D214
    if (ctx->r14 == 0) {
        // 0x8008D208: nop
    
            goto L_8008D214;
    }
    // 0x8008D208: nop

    // 0x8008D20C: b           L_8008D370
    // 0x8008D210: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
        goto L_8008D370;
    // 0x8008D210: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_8008D214:
    // 0x8008D214: addiu       $t8, $sp, 0x20
    ctx->r24 = ADD32(ctx->r29, 0X20);
    // 0x8008D218: b           L_8008D234
    // 0x8008D21C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
        goto L_8008D234;
    // 0x8008D21C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
L_8008D220:
    // 0x8008D220: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8008D224: beq         $t9, $zero, L_8008D234
    if (ctx->r25 == 0) {
        // 0x8008D228: nop
    
            goto L_8008D234;
    }
    // 0x8008D228: nop

    // 0x8008D22C: b           L_8008D370
    // 0x8008D230: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_8008D370;
    // 0x8008D230: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_8008D234:
    // 0x8008D234: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8008D238: lhu         $t2, 0x18($t0)
    ctx->r10 = MEM_HU(ctx->r8, 0X18);
    // 0x8008D23C: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x8008D240: bne         $t3, $zero, L_8008D290
    if (ctx->r11 != 0) {
        // 0x8008D244: nop
    
            goto L_8008D290;
    }
    // 0x8008D244: nop

    // 0x8008D248: lw          $a0, 0x68($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X68);
    // 0x8008D24C: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8008D250: jal         0x8008CB74
    // 0x8008D254: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_8008CB74(rdram, ctx);
        goto after_5;
    // 0x8008D254: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_5:
    // 0x8008D258: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8008D25C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8008D260: beq         $t1, $zero, L_8008D270
    if (ctx->r9 == 0) {
        // 0x8008D264: nop
    
            goto L_8008D270;
    }
    // 0x8008D264: nop

    // 0x8008D268: b           L_8008D370
    // 0x8008D26C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_8008D370;
    // 0x8008D26C: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_8008D270:
    // 0x8008D270: addiu       $t4, $sp, 0x20
    ctx->r12 = ADD32(ctx->r29, 0X20);
    // 0x8008D274: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8008D278: lhu         $t5, 0x18($t4)
    ctx->r13 = MEM_HU(ctx->r12, 0X18);
    // 0x8008D27C: andi        $t7, $t5, 0x1
    ctx->r15 = ctx->r13 & 0X1;
    // 0x8008D280: bne         $t7, $zero, L_8008D290
    if (ctx->r15 != 0) {
        // 0x8008D284: nop
    
            goto L_8008D290;
    }
    // 0x8008D284: nop

    // 0x8008D288: b           L_8008D370
    // 0x8008D28C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_8008D370;
    // 0x8008D28C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_8008D290:
    // 0x8008D290: sw          $zero, 0x64($sp)
    MEM_W(0X64, ctx->r29) = 0;
L_8008D294:
    // 0x8008D294: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8008D298: lw          $t8, 0x64($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X64);
    // 0x8008D29C: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x8008D2A0: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8008D2A4: lbu         $t2, 0x0($t9)
    ctx->r10 = MEM_BU(ctx->r25, 0X0);
    // 0x8008D2A8: addu        $t0, $t3, $t8
    ctx->r8 = ADD32(ctx->r11, ctx->r24);
    // 0x8008D2AC: sb          $t2, 0xC($t0)
    MEM_B(0XC, ctx->r8) = ctx->r10;
    // 0x8008D2B0: lw          $t1, 0x64($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X64);
    // 0x8008D2B4: addiu       $t4, $t1, 0x1
    ctx->r12 = ADD32(ctx->r9, 0X1);
    // 0x8008D2B8: slti        $at, $t4, 0x20
    ctx->r1 = SIGNED(ctx->r12) < 0X20 ? 1 : 0;
    // 0x8008D2BC: bne         $at, $zero, L_8008D294
    if (ctx->r1 != 0) {
        // 0x8008D2C0: sw          $t4, 0x64($sp)
        MEM_W(0X64, ctx->r29) = ctx->r12;
            goto L_8008D294;
    }
    // 0x8008D2C0: sw          $t4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r12;
    // 0x8008D2C4: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8008D2C8: lw          $t6, 0x68($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X68);
    // 0x8008D2CC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x8008D2D0: lbu         $t7, 0x1B($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X1B);
    // 0x8008D2D4: addiu       $t5, $zero, 0x10
    ctx->r13 = ADD32(0, 0X10);
    // 0x8008D2D8: sw          $t7, 0x4C($t6)
    MEM_W(0X4C, ctx->r14) = ctx->r15;
    // 0x8008D2DC: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8008D2E0: lw          $t8, 0x68($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X68);
    // 0x8008D2E4: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8008D2E8: lbu         $t3, 0x1A($t9)
    ctx->r11 = MEM_BU(ctx->r25, 0X1A);
    // 0x8008D2EC: sb          $t3, 0x64($t8)
    MEM_B(0X64, ctx->r24) = ctx->r11;
    // 0x8008D2F0: lw          $t2, 0x68($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X68);
    // 0x8008D2F4: lbu         $t0, 0x64($t2)
    ctx->r8 = MEM_BU(ctx->r10, 0X64);
    // 0x8008D2F8: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x8008D2FC: addiu       $t4, $t1, 0x3
    ctx->r12 = ADD32(ctx->r9, 0X3);
    // 0x8008D300: sw          $t4, 0x60($t2)
    MEM_W(0X60, ctx->r10) = ctx->r12;
    // 0x8008D304: lw          $t7, 0x68($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X68);
    // 0x8008D308: sw          $t5, 0x50($t7)
    MEM_W(0X50, ctx->r15) = ctx->r13;
    // 0x8008D30C: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x8008D310: sw          $t6, 0x54($t9)
    MEM_W(0X54, ctx->r25) = ctx->r14;
    // 0x8008D314: lw          $t3, 0x68($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X68);
    // 0x8008D318: lbu         $t8, 0x64($t3)
    ctx->r24 = MEM_BU(ctx->r11, 0X64);
    // 0x8008D31C: sll         $t0, $t8, 3
    ctx->r8 = S32(ctx->r24 << 3);
    // 0x8008D320: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x8008D324: sw          $t1, 0x58($t3)
    MEM_W(0X58, ctx->r11) = ctx->r9;
    // 0x8008D328: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x8008D32C: lbu         $t5, 0x64($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X64);
    // 0x8008D330: lw          $t2, 0x58($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X58);
    // 0x8008D334: sll         $t7, $t5, 3
    ctx->r15 = S32(ctx->r13 << 3);
    // 0x8008D338: addu        $t6, $t2, $t7
    ctx->r14 = ADD32(ctx->r10, ctx->r15);
    // 0x8008D33C: sw          $t6, 0x5C($t4)
    MEM_W(0X5C, ctx->r12) = ctx->r14;
    // 0x8008D340: lw          $t9, 0x68($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X68);
    // 0x8008D344: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x8008D348: lw          $a1, 0x8($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X8);
    // 0x8008D34C: jal         0x8008D810
    // 0x8008D350: addiu       $a3, $t9, 0x2C
    ctx->r7 = ADD32(ctx->r25, 0X2C);
    func_8008D810(rdram, ctx);
        goto after_6;
    // 0x8008D350: addiu       $a3, $t9, 0x2C
    ctx->r7 = ADD32(ctx->r25, 0X2C);
    after_6:
    // 0x8008D354: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8008D358: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8008D35C: beq         $t8, $zero, L_8008D36C
    if (ctx->r24 == 0) {
        // 0x8008D360: nop
    
            goto L_8008D36C;
    }
    // 0x8008D360: nop

    // 0x8008D364: b           L_8008D370
    // 0x8008D368: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_8008D370;
    // 0x8008D368: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8008D36C:
    // 0x8008D36C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008D370:
    // 0x8008D370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D374: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x8008D378: jr          $ra
    // 0x8008D37C: nop

    return;
    // 0x8008D37C: nop

;}
RECOMP_FUNC void func_8008D380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D380: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8008D384: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8008D388: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x8008D38C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008D390: lbu         $t7, 0x65($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X65);
    // 0x8008D394: beq         $t7, $zero, L_8008D3C0
    if (ctx->r15 == 0) {
        // 0x8008D398: nop
    
            goto L_8008D3C0;
    }
    // 0x8008D398: nop

    // 0x8008D39C: sb          $zero, 0x65($t6)
    MEM_B(0X65, ctx->r14) = 0;
    // 0x8008D3A0: jal         0x8008D79C
    // 0x8008D3A4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_8008D79C(rdram, ctx);
        goto after_0;
    // 0x8008D3A4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_0:
    // 0x8008D3A8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8008D3AC: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8008D3B0: beq         $t8, $zero, L_8008D3C0
    if (ctx->r24 == 0) {
        // 0x8008D3B4: nop
    
            goto L_8008D3C0;
    }
    // 0x8008D3B4: nop

    // 0x8008D3B8: b           L_8008D46C
    // 0x8008D3BC: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_8008D46C;
    // 0x8008D3BC: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8008D3C0:
    // 0x8008D3C0: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x8008D3C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8008D3C8: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    // 0x8008D3CC: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x8008D3D0: jal         0x8008D810
    // 0x8008D3D4: lw          $a1, 0x8($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X8);
    func_8008D810(rdram, ctx);
        goto after_1;
    // 0x8008D3D4: lw          $a1, 0x8($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X8);
    after_1:
    // 0x8008D3D8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8008D3DC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8008D3E0: beq         $t0, $zero, L_8008D428
    if (ctx->r8 == 0) {
        // 0x8008D3E4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8008D428;
    }
    // 0x8008D3E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8008D3E8: beq         $t0, $at, L_8008D3F8
    if (ctx->r8 == ctx->r1) {
        // 0x8008D3EC: nop
    
            goto L_8008D3F8;
    }
    // 0x8008D3EC: nop

    // 0x8008D3F0: b           L_8008D46C
    // 0x8008D3F4: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_8008D46C;
    // 0x8008D3F4: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_8008D3F8:
    // 0x8008D3F8: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x8008D3FC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8008D400: addiu       $a3, $sp, 0x1C
    ctx->r7 = ADD32(ctx->r29, 0X1C);
    // 0x8008D404: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    // 0x8008D408: jal         0x8008D810
    // 0x8008D40C: lw          $a1, 0x8($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X8);
    func_8008D810(rdram, ctx);
        goto after_2;
    // 0x8008D40C: lw          $a1, 0x8($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X8);
    after_2:
    // 0x8008D410: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8008D414: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8008D418: beq         $t2, $zero, L_8008D428
    if (ctx->r10 == 0) {
        // 0x8008D41C: nop
    
            goto L_8008D428;
    }
    // 0x8008D41C: nop

    // 0x8008D420: b           L_8008D46C
    // 0x8008D424: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_8008D46C;
    // 0x8008D424: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_8008D428:
    // 0x8008D428: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_8008D42C:
    // 0x8008D42C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8008D430: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8008D434: addu        $t4, $sp, $t3
    ctx->r12 = ADD32(ctx->r29, ctx->r11);
    // 0x8008D438: addu        $t7, $t5, $t3
    ctx->r15 = ADD32(ctx->r13, ctx->r11);
    // 0x8008D43C: lbu         $t6, 0xC($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0XC);
    // 0x8008D440: lbu         $t4, 0x1C($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X1C);
    // 0x8008D444: beq         $t4, $t6, L_8008D454
    if (ctx->r12 == ctx->r14) {
        // 0x8008D448: nop
    
            goto L_8008D454;
    }
    // 0x8008D448: nop

    // 0x8008D44C: b           L_8008D46C
    // 0x8008D450: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8008D46C;
    // 0x8008D450: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8008D454:
    // 0x8008D454: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8008D458: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8008D45C: slti        $at, $t9, 0x20
    ctx->r1 = SIGNED(ctx->r25) < 0X20 ? 1 : 0;
    // 0x8008D460: bne         $at, $zero, L_8008D42C
    if (ctx->r1 != 0) {
        // 0x8008D464: sw          $t9, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r25;
            goto L_8008D42C;
    }
    // 0x8008D464: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8008D468: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008D46C:
    // 0x8008D46C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008D470: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8008D474: jr          $ra
    // 0x8008D478: nop

    return;
    // 0x8008D478: nop

;}
RECOMP_FUNC void func_8008D47C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D47C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8008D480: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8008D484: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8008D488: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008D48C: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8008D490: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x8008D494: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8008D498: lbu         $t7, 0x65($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X65);
    // 0x8008D49C: beq         $t7, $zero, L_8008D4C8
    if (ctx->r15 == 0) {
        // 0x8008D4A0: nop
    
            goto L_8008D4C8;
    }
    // 0x8008D4A0: nop

    // 0x8008D4A4: sb          $zero, 0x65($t6)
    MEM_B(0X65, ctx->r14) = 0;
    // 0x8008D4A8: jal         0x8008D79C
    // 0x8008D4AC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_8008D79C(rdram, ctx);
        goto after_0;
    // 0x8008D4AC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_0:
    // 0x8008D4B0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8008D4B4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8008D4B8: beq         $t8, $zero, L_8008D4C8
    if (ctx->r24 == 0) {
        // 0x8008D4BC: nop
    
            goto L_8008D4C8;
    }
    // 0x8008D4BC: nop

    // 0x8008D4C0: b           L_8008D78C
    // 0x8008D4C4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_8008D78C;
    // 0x8008D4C4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8008D4C8:
    // 0x8008D4C8: lbu         $t9, 0x47($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X47);
    // 0x8008D4CC: blez        $t9, L_8008D4E0
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8008D4D0: nop
    
            goto L_8008D4E0;
    }
    // 0x8008D4D0: nop

    // 0x8008D4D4: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8008D4D8: b           L_8008D4EC
    // 0x8008D4DC: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
        goto L_8008D4EC;
    // 0x8008D4DC: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
L_8008D4E0:
    // 0x8008D4E0: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8008D4E4: lw          $t2, 0x60($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X60);
    // 0x8008D4E8: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
L_8008D4EC:
    // 0x8008D4EC: lbu         $t3, 0x43($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X43);
    // 0x8008D4F0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008D4F4: bne         $t3, $at, L_8008D528
    if (ctx->r11 != ctx->r1) {
        // 0x8008D4F8: nop
    
            goto L_8008D528;
    }
    // 0x8008D4F8: nop

    // 0x8008D4FC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8008D500: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8008D504: negu        $a1, $t5
    ctx->r5 = SUB32(0, ctx->r13);
    // 0x8008D508: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x8008D50C: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8008D510: sll         $t7, $t5, 1
    ctx->r15 = S32(ctx->r13 << 1);
    // 0x8008D514: addiu       $a1, $a1, 0x100
    ctx->r5 = ADD32(ctx->r5, 0X100);
    // 0x8008D518: jal         0x8008CAB0
    // 0x8008D51C: addu        $a0, $t4, $t7
    ctx->r4 = ADD32(ctx->r12, ctx->r15);
    func_8008CAB0(rdram, ctx);
        goto after_1;
    // 0x8008D51C: addu        $a0, $t4, $t7
    ctx->r4 = ADD32(ctx->r12, ctx->r15);
    after_1:
    // 0x8008D520: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x8008D524: sb          $v0, 0x1($t8)
    MEM_B(0X1, ctx->r24) = ctx->r2;
L_8008D528:
    // 0x8008D528: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_8008D52C:
    // 0x8008D52C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8008D530: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8008D534: lbu         $t3, 0x43($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X43);
    // 0x8008D538: sll         $t1, $t0, 5
    ctx->r9 = S32(ctx->r8 << 5);
    // 0x8008D53C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008D540: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8008D544: bne         $t3, $at, L_8008D5B4
    if (ctx->r11 != ctx->r1) {
        // 0x8008D548: sw          $t2, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r10;
            goto L_8008D5B4;
    }
    // 0x8008D548: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
    // 0x8008D54C: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8008D550: lbu         $t5, 0x47($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X47);
    // 0x8008D554: or          $a3, $t2, $zero
    ctx->r7 = ctx->r10 | 0;
    // 0x8008D558: lw          $t7, 0x54($t4)
    ctx->r15 = MEM_W(ctx->r12, 0X54);
    // 0x8008D55C: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x8008D560: lw          $a0, 0x4($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X4);
    // 0x8008D564: lw          $a1, 0x8($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X8);
    // 0x8008D568: addu        $t8, $t7, $t6
    ctx->r24 = ADD32(ctx->r15, ctx->r14);
    // 0x8008D56C: addu        $a2, $t8, $t0
    ctx->r6 = ADD32(ctx->r24, ctx->r8);
    // 0x8008D570: jal         0x8008E600
    // 0x8008D574: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8008E600(rdram, ctx);
        goto after_2;
    // 0x8008D574: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x8008D578: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x8008D57C: lbu         $t3, 0x47($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X47);
    // 0x8008D580: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8008D584: lw          $t1, 0x58($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X58);
    // 0x8008D588: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8008D58C: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x8008D590: lw          $a1, 0x8($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X8);
    // 0x8008D594: lw          $a0, 0x4($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X4);
    // 0x8008D598: addu        $t5, $t1, $t4
    ctx->r13 = ADD32(ctx->r9, ctx->r12);
    // 0x8008D59C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8008D5A0: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8008D5A4: jal         0x8008E600
    // 0x8008D5A8: addu        $a2, $t5, $t7
    ctx->r6 = ADD32(ctx->r13, ctx->r15);
    func_8008E600(rdram, ctx);
        goto after_3;
    // 0x8008D5A8: addu        $a2, $t5, $t7
    ctx->r6 = ADD32(ctx->r13, ctx->r15);
    after_3:
    // 0x8008D5AC: b           L_8008D5E4
    // 0x8008D5B0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
        goto L_8008D5E4;
    // 0x8008D5B0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_8008D5B4:
    // 0x8008D5B4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8008D5B8: lbu         $t0, 0x47($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X47);
    // 0x8008D5BC: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8008D5C0: lw          $t8, 0x54($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X54);
    // 0x8008D5C4: sll         $t2, $t0, 3
    ctx->r10 = S32(ctx->r8 << 3);
    // 0x8008D5C8: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8008D5CC: addu        $t9, $t8, $t2
    ctx->r25 = ADD32(ctx->r24, ctx->r10);
    // 0x8008D5D0: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    // 0x8008D5D4: lw          $a1, 0x8($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X8);
    // 0x8008D5D8: jal         0x8008D810
    // 0x8008D5DC: addu        $a2, $t9, $t3
    ctx->r6 = ADD32(ctx->r25, ctx->r11);
    func_8008D810(rdram, ctx);
        goto after_4;
    // 0x8008D5DC: addu        $a2, $t9, $t3
    ctx->r6 = ADD32(ctx->r25, ctx->r11);
    after_4:
    // 0x8008D5E0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_8008D5E4:
    // 0x8008D5E4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8008D5E8: beq         $t1, $zero, L_8008D5F8
    if (ctx->r9 == 0) {
        // 0x8008D5EC: nop
    
            goto L_8008D5F8;
    }
    // 0x8008D5EC: nop

    // 0x8008D5F0: b           L_8008D78C
    // 0x8008D5F4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
        goto L_8008D78C;
    // 0x8008D5F4: or          $v0, $t1, $zero
    ctx->r2 = ctx->r9 | 0;
L_8008D5F8:
    // 0x8008D5F8: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8008D5FC: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8008D600: slti        $at, $t5, 0x8
    ctx->r1 = SIGNED(ctx->r13) < 0X8 ? 1 : 0;
    // 0x8008D604: bne         $at, $zero, L_8008D52C
    if (ctx->r1 != 0) {
        // 0x8008D608: sw          $t5, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r13;
            goto L_8008D52C;
    }
    // 0x8008D608: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x8008D60C: lbu         $t7, 0x43($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X43);
    // 0x8008D610: bne         $t7, $zero, L_8008D788
    if (ctx->r15 != 0) {
        // 0x8008D614: nop
    
            goto L_8008D788;
    }
    // 0x8008D614: nop

    // 0x8008D618: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8008D61C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8008D620: negu        $a1, $t0
    ctx->r5 = SUB32(0, ctx->r8);
    // 0x8008D624: sll         $t2, $a1, 1
    ctx->r10 = S32(ctx->r5 << 1);
    // 0x8008D628: or          $a1, $t2, $zero
    ctx->r5 = ctx->r10 | 0;
    // 0x8008D62C: sll         $t8, $t0, 1
    ctx->r24 = S32(ctx->r8 << 1);
    // 0x8008D630: addiu       $a1, $a1, 0x100
    ctx->r5 = ADD32(ctx->r5, 0X100);
    // 0x8008D634: jal         0x8008CAB0
    // 0x8008D638: addu        $a0, $t6, $t8
    ctx->r4 = ADD32(ctx->r14, ctx->r24);
    func_8008CAB0(rdram, ctx);
        goto after_5;
    // 0x8008D638: addu        $a0, $t6, $t8
    ctx->r4 = ADD32(ctx->r14, ctx->r24);
    after_5:
    // 0x8008D63C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8008D640: sb          $v0, 0x37($sp)
    MEM_B(0X37, ctx->r29) = ctx->r2;
    // 0x8008D644: lbu         $t1, 0x37($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X37);
    // 0x8008D648: lbu         $t3, 0x1($t9)
    ctx->r11 = MEM_BU(ctx->r25, 0X1);
    // 0x8008D64C: beq         $t3, $t1, L_8008D72C
    if (ctx->r11 == ctx->r9) {
        // 0x8008D650: nop
    
            goto L_8008D72C;
    }
    // 0x8008D650: nop

    // 0x8008D654: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_8008D658:
    // 0x8008D658: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8008D65C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8008D660: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8008D664: sll         $t7, $t5, 5
    ctx->r15 = S32(ctx->r13 << 5);
    // 0x8008D668: addu        $t6, $t4, $t7
    ctx->r14 = ADD32(ctx->r12, ctx->r15);
    // 0x8008D66C: lbu         $t2, 0x47($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X47);
    // 0x8008D670: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x8008D674: lw          $t0, 0x58($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X58);
    // 0x8008D678: sll         $t9, $t2, 3
    ctx->r25 = S32(ctx->r10 << 3);
    // 0x8008D67C: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    // 0x8008D680: addu        $t3, $t0, $t9
    ctx->r11 = ADD32(ctx->r8, ctx->r25);
    // 0x8008D684: addu        $a2, $t3, $t5
    ctx->r6 = ADD32(ctx->r11, ctx->r13);
    // 0x8008D688: lw          $a1, 0x8($t8)
    ctx->r5 = MEM_W(ctx->r24, 0X8);
    // 0x8008D68C: jal         0x8008D810
    // 0x8008D690: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    func_8008D810(rdram, ctx);
        goto after_6;
    // 0x8008D690: lw          $a0, 0x4($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X4);
    after_6:
    // 0x8008D694: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8008D698: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8008D69C: addiu       $t4, $t1, 0x1
    ctx->r12 = ADD32(ctx->r9, 0X1);
    // 0x8008D6A0: slti        $at, $t4, 0x8
    ctx->r1 = SIGNED(ctx->r12) < 0X8 ? 1 : 0;
    // 0x8008D6A4: bne         $at, $zero, L_8008D658
    if (ctx->r1 != 0) {
        // 0x8008D6A8: sw          $t4, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r12;
            goto L_8008D658;
    }
    // 0x8008D6A8: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x8008D6AC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8008D6B0: lbu         $t2, 0x37($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X37);
    // 0x8008D6B4: lbu         $t8, 0x1($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X1);
    // 0x8008D6B8: beq         $t8, $t2, L_8008D6C8
    if (ctx->r24 == ctx->r10) {
        // 0x8008D6BC: nop
    
            goto L_8008D6C8;
    }
    // 0x8008D6BC: nop

    // 0x8008D6C0: b           L_8008D78C
    // 0x8008D6C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8008D78C;
    // 0x8008D6C4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8008D6C8:
    // 0x8008D6C8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_8008D6CC:
    // 0x8008D6CC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8008D6D0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8008D6D4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8008D6D8: sll         $t3, $t9, 5
    ctx->r11 = S32(ctx->r25 << 5);
    // 0x8008D6DC: addu        $t5, $t0, $t3
    ctx->r13 = ADD32(ctx->r8, ctx->r11);
    // 0x8008D6E0: lbu         $t4, 0x47($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X47);
    // 0x8008D6E4: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x8008D6E8: lw          $t1, 0x54($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X54);
    // 0x8008D6EC: sll         $t7, $t4, 3
    ctx->r15 = S32(ctx->r12 << 3);
    // 0x8008D6F0: lw          $a1, 0x8($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X8);
    // 0x8008D6F4: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    // 0x8008D6F8: addu        $t8, $t1, $t7
    ctx->r24 = ADD32(ctx->r9, ctx->r15);
    // 0x8008D6FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8008D700: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    // 0x8008D704: jal         0x8008E600
    // 0x8008D708: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    func_8008E600(rdram, ctx);
        goto after_7;
    // 0x8008D708: addu        $a2, $t8, $t9
    ctx->r6 = ADD32(ctx->r24, ctx->r25);
    after_7:
    // 0x8008D70C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8008D710: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8008D714: addiu       $t0, $t2, 0x1
    ctx->r8 = ADD32(ctx->r10, 0X1);
    // 0x8008D718: slti        $at, $t0, 0x8
    ctx->r1 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x8008D71C: bne         $at, $zero, L_8008D6CC
    if (ctx->r1 != 0) {
        // 0x8008D720: sw          $t0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r8;
            goto L_8008D6CC;
    }
    // 0x8008D720: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8008D724: b           L_8008D788
    // 0x8008D728: nop

        goto L_8008D788;
    // 0x8008D728: nop

L_8008D72C:
    // 0x8008D72C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_8008D730:
    // 0x8008D730: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8008D734: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8008D738: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x8008D73C: sll         $t4, $t6, 5
    ctx->r12 = S32(ctx->r14 << 5);
    // 0x8008D740: addu        $t1, $t3, $t4
    ctx->r9 = ADD32(ctx->r11, ctx->r12);
    // 0x8008D744: lbu         $t9, 0x47($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X47);
    // 0x8008D748: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8008D74C: lw          $t8, 0x58($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X58);
    // 0x8008D750: sll         $t5, $t9, 3
    ctx->r13 = S32(ctx->r25 << 3);
    // 0x8008D754: lw          $a1, 0x8($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X8);
    // 0x8008D758: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    // 0x8008D75C: addu        $t2, $t8, $t5
    ctx->r10 = ADD32(ctx->r24, ctx->r13);
    // 0x8008D760: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8008D764: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x8008D768: jal         0x8008E600
    // 0x8008D76C: addu        $a2, $t2, $t6
    ctx->r6 = ADD32(ctx->r10, ctx->r14);
    func_8008E600(rdram, ctx);
        goto after_8;
    // 0x8008D76C: addu        $a2, $t2, $t6
    ctx->r6 = ADD32(ctx->r10, ctx->r14);
    after_8:
    // 0x8008D770: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8008D774: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8008D778: addiu       $t3, $t0, 0x1
    ctx->r11 = ADD32(ctx->r8, 0X1);
    // 0x8008D77C: slti        $at, $t3, 0x8
    ctx->r1 = SIGNED(ctx->r11) < 0X8 ? 1 : 0;
    // 0x8008D780: bne         $at, $zero, L_8008D730
    if (ctx->r1 != 0) {
        // 0x8008D784: sw          $t3, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r11;
            goto L_8008D730;
    }
    // 0x8008D784: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
L_8008D788:
    // 0x8008D788: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008D78C:
    // 0x8008D78C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008D790: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8008D794: jr          $ra
    // 0x8008D798: nop

    return;
    // 0x8008D798: nop

;}
RECOMP_FUNC void func_8008D79C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D79C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8008D7A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008D7A4: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8008D7A8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8008D7AC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
L_8008D7B0:
    // 0x8008D7B0: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x8008D7B4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8008D7B8: lbu         $t7, 0x65($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X65);
    // 0x8008D7BC: addu        $t9, $sp, $t8
    ctx->r25 = ADD32(ctx->r29, ctx->r24);
    // 0x8008D7C0: sb          $t7, 0x28($t9)
    MEM_B(0X28, ctx->r25) = ctx->r15;
    // 0x8008D7C4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8008D7C8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8008D7CC: slti        $at, $t1, 0x20
    ctx->r1 = SIGNED(ctx->r9) < 0X20 ? 1 : 0;
    // 0x8008D7D0: bne         $at, $zero, L_8008D7B0
    if (ctx->r1 != 0) {
        // 0x8008D7D4: sw          $t1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r9;
            goto L_8008D7B0;
    }
    // 0x8008D7D4: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8008D7D8: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x8008D7DC: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x8008D7E0: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x8008D7E4: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    // 0x8008D7E8: lw          $a1, 0x8($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X8);
    // 0x8008D7EC: jal         0x8008E600
    // 0x8008D7F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8008E600(rdram, ctx);
        goto after_0;
    // 0x8008D7F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x8008D7F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008D7F8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8008D7FC: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x8008D800: jr          $ra
    // 0x8008D804: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8008D804: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8008D808: nop

    // 0x8008D80C: nop

;}
RECOMP_FUNC void func_8008D810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008D810: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8008D814: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8008D818: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008D81C: addiu       $t6, $t6, -0x7690
    ctx->r14 = ADD32(ctx->r14, -0X7690);
    // 0x8008D820: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8008D824: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x8008D828: sw          $a1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r5;
    // 0x8008D82C: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x8008D830: sw          $a3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r7;
    // 0x8008D834: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008D838: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x8008D83C: sw          $t6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r14;
    // 0x8008D840: jal         0x8008BFC0
    // 0x8008D844: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    func_8008BFC0(rdram, ctx);
        goto after_0;
    // 0x8008D844: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_0:
    // 0x8008D848: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8008D84C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8008D850: sb          $t8, -0x7610($at)
    MEM_B(-0X7610, ctx->r1) = ctx->r24;
    // 0x8008D854: lw          $a0, 0x64($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X64);
    // 0x8008D858: jal         0x8008DA2C
    // 0x8008D85C: lhu         $a1, 0x6A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X6A);
    func_8008DA2C(rdram, ctx);
        goto after_1;
    // 0x8008D85C: lhu         $a1, 0x6A($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X6A);
    after_1:
    // 0x8008D860: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8008D864: addiu       $a1, $a1, -0x7690
    ctx->r5 = ADD32(ctx->r5, -0X7690);
    // 0x8008D868: jal         0x8008C030
    // 0x8008D86C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    __osSiRawStartDma_recomp(rdram, ctx);
        goto after_2;
    // 0x8008D86C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x8008D870: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x8008D874: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8008D878: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008D87C: jal         0x80081F50
    // 0x8008D880: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x8008D880: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
L_8008D884:
    // 0x8008D884: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8008D888: addiu       $a1, $a1, -0x7690
    ctx->r5 = ADD32(ctx->r5, -0X7690);
    // 0x8008D88C: jal         0x8008C030
    // 0x8008D890: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    __osSiRawStartDma_recomp(rdram, ctx);
        goto after_4;
    // 0x8008D890: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x8008D894: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x8008D898: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8008D89C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008D8A0: jal         0x80081F50
    // 0x8008D8A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x8008D8A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x8008D8A8: lw          $t0, 0x64($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X64);
    // 0x8008D8AC: lui         $t9, 0x801C
    ctx->r25 = S32(0X801C << 16);
    // 0x8008D8B0: addiu       $t9, $t9, -0x7690
    ctx->r25 = ADD32(ctx->r25, -0X7690);
    // 0x8008D8B4: beq         $t0, $zero, L_8008D8E8
    if (ctx->r8 == 0) {
        // 0x8008D8B8: sw          $t9, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r25;
            goto L_8008D8E8;
    }
    // 0x8008D8B8: sw          $t9, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r25;
    // 0x8008D8BC: blez        $t0, L_8008D8E8
    if (SIGNED(ctx->r8) <= 0) {
        // 0x8008D8C0: sw          $zero, 0x58($sp)
        MEM_W(0X58, ctx->r29) = 0;
            goto L_8008D8E8;
    }
    // 0x8008D8C0: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
L_8008D8C4:
    // 0x8008D8C4: lw          $t3, 0x58($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X58);
    // 0x8008D8C8: lw          $t5, 0x64($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X64);
    // 0x8008D8CC: lw          $t1, 0x54($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X54);
    // 0x8008D8D0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8008D8D4: slt         $at, $t4, $t5
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8008D8D8: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8008D8DC: sw          $t4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r12;
    // 0x8008D8E0: bne         $at, $zero, L_8008D8C4
    if (ctx->r1 != 0) {
        // 0x8008D8E4: sw          $t2, 0x54($sp)
        MEM_W(0X54, ctx->r29) = ctx->r10;
            goto L_8008D8C4;
    }
    // 0x8008D8E4: sw          $t2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r10;
L_8008D8E8:
    // 0x8008D8E8: lw          $t7, 0x54($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X54);
    // 0x8008D8EC: addiu       $t6, $sp, 0x2C
    ctx->r14 = ADD32(ctx->r29, 0X2C);
    // 0x8008D8F0: addiu       $t9, $t7, 0x24
    ctx->r25 = ADD32(ctx->r15, 0X24);
L_8008D8F4:
    // 0x8008D8F4: lwl         $at, 0x0($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X0);
    // 0x8008D8F8: lwr         $at, 0x3($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X3);
    // 0x8008D8FC: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8008D900: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8008D904: sw          $at, -0xC($t6)
    MEM_W(-0XC, ctx->r14) = ctx->r1;
    // 0x8008D908: lwl         $at, -0x8($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, -0X8);
    // 0x8008D90C: lwr         $at, -0x5($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, -0X5);
    // 0x8008D910: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x8008D914: lwl         $at, -0x4($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, -0X4);
    // 0x8008D918: lwr         $at, -0x1($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, -0X1);
    // 0x8008D91C: bne         $t7, $t9, L_8008D8F4
    if (ctx->r15 != ctx->r25) {
        // 0x8008D920: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8008D8F4;
    }
    // 0x8008D920: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x8008D924: lwl         $at, 0x0($t7)
    ctx->r1 = do_lwl(rdram, ctx->r1, ctx->r15, 0X0);
    // 0x8008D928: lwr         $at, 0x3($t7)
    ctx->r1 = do_lwr(rdram, ctx->r1, ctx->r15, 0X3);
    // 0x8008D92C: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x8008D930: lbu         $t0, 0x2E($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2E);
    // 0x8008D934: andi        $t1, $t0, 0xC0
    ctx->r9 = ctx->r8 & 0XC0;
    // 0x8008D938: sra         $t2, $t1, 4
    ctx->r10 = S32(SIGNED(ctx->r9) >> 4);
    // 0x8008D93C: bne         $t2, $zero, L_8008D9DC
    if (ctx->r10 != 0) {
        // 0x8008D940: sw          $t2, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r10;
            goto L_8008D9DC;
    }
    // 0x8008D940: sw          $t2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r10;
    // 0x8008D944: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8008D948: jal         0x80090360
    // 0x8008D94C: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
    func_80090360(rdram, ctx);
        goto after_6;
    // 0x8008D94C: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
    after_6:
    // 0x8008D950: sb          $v0, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r2;
    // 0x8008D954: lbu         $t3, 0x27($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X27);
    // 0x8008D958: lbu         $t4, 0x52($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X52);
    // 0x8008D95C: beq         $t3, $t4, L_8008D99C
    if (ctx->r11 == ctx->r12) {
        // 0x8008D960: nop
    
            goto L_8008D99C;
    }
    // 0x8008D960: nop

    // 0x8008D964: lw          $a0, 0x60($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X60);
    // 0x8008D968: jal         0x8008C9A0
    // 0x8008D96C: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    __osPfsGetStatus_recomp(rdram, ctx);
        goto after_7;
    // 0x8008D96C: lw          $a1, 0x64($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X64);
    after_7:
    // 0x8008D970: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x8008D974: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x8008D978: beq         $t5, $zero, L_8008D990
    if (ctx->r13 == 0) {
        // 0x8008D97C: nop
    
            goto L_8008D990;
    }
    // 0x8008D97C: nop

    // 0x8008D980: jal         0x8008C004
    // 0x8008D984: nop

    func_8008C004(rdram, ctx);
        goto after_8;
    // 0x8008D984: nop

    after_8:
    // 0x8008D988: b           L_8008DA18
    // 0x8008D98C: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
        goto L_8008DA18;
    // 0x8008D98C: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
L_8008D990:
    // 0x8008D990: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x8008D994: b           L_8008D9E4
    // 0x8008D998: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
        goto L_8008D9E4;
    // 0x8008D998: sw          $t8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r24;
L_8008D99C:
    // 0x8008D99C: sw          $zero, 0x58($sp)
    MEM_W(0X58, ctx->r29) = 0;
L_8008D9A0:
    // 0x8008D9A0: lw          $t9, 0x58($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X58);
    // 0x8008D9A4: lw          $t6, 0x6C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X6C);
    // 0x8008D9A8: addu        $t7, $sp, $t9
    ctx->r15 = ADD32(ctx->r29, ctx->r25);
    // 0x8008D9AC: lbu         $t7, 0x32($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X32);
    // 0x8008D9B0: sb          $t7, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r15;
    // 0x8008D9B4: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x8008D9B8: lw          $t0, 0x6C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X6C);
    // 0x8008D9BC: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8008D9C0: slti        $at, $t3, 0x20
    ctx->r1 = SIGNED(ctx->r11) < 0X20 ? 1 : 0;
    // 0x8008D9C4: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8008D9C8: sw          $t3, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r11;
    // 0x8008D9CC: bne         $at, $zero, L_8008D9A0
    if (ctx->r1 != 0) {
        // 0x8008D9D0: sw          $t1, 0x6C($sp)
        MEM_W(0X6C, ctx->r29) = ctx->r9;
            goto L_8008D9A0;
    }
    // 0x8008D9D0: sw          $t1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r9;
    // 0x8008D9D4: b           L_8008D9E4
    // 0x8008D9D8: nop

        goto L_8008D9E4;
    // 0x8008D9D8: nop

L_8008D9DC:
    // 0x8008D9DC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8008D9E0: sw          $t4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r12;
L_8008D9E4:
    // 0x8008D9E4: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x8008D9E8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8008D9EC: bne         $t5, $at, L_8008DA0C
    if (ctx->r13 != ctx->r1) {
        // 0x8008D9F0: nop
    
            goto L_8008DA0C;
    }
    // 0x8008D9F0: nop

    // 0x8008D9F4: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8008D9F8: slti        $s0, $t8, 0x0
    ctx->r16 = SIGNED(ctx->r24) < 0X0 ? 1 : 0;
    // 0x8008D9FC: xori        $s0, $s0, 0x1
    ctx->r16 = ctx->r16 ^ 0X1;
    // 0x8008DA00: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8008DA04: bne         $s0, $zero, L_8008D884
    if (ctx->r16 != 0) {
        // 0x8008DA08: sw          $t9, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r25;
            goto L_8008D884;
    }
    // 0x8008DA08: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
L_8008DA0C:
    // 0x8008DA0C: jal         0x8008C004
    // 0x8008DA10: nop

    func_8008C004(rdram, ctx);
        goto after_9;
    // 0x8008DA10: nop

    after_9:
    // 0x8008DA14: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
L_8008DA18:
    // 0x8008DA18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008DA1C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008DA20: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8008DA24: jr          $ra
    // 0x8008DA28: nop

    return;
    // 0x8008DA28: nop

;}
RECOMP_FUNC void func_8008DA2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008DA2C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8008DA30: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x8008DA34: addiu       $t6, $t6, -0x7690
    ctx->r14 = ADD32(ctx->r14, -0X7690);
    // 0x8008DA38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008DA3C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8008DA40: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8008DA44: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
    // 0x8008DA48: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_8008DA4C:
    // 0x8008DA4C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8008DA50: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8008DA54: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8008DA58: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008DA5C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8008DA60: sw          $zero, -0x7690($at)
    MEM_W(-0X7690, ctx->r1) = 0;
    // 0x8008DA64: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8008DA68: slti        $at, $t0, 0x10
    ctx->r1 = SIGNED(ctx->r8) < 0X10 ? 1 : 0;
    // 0x8008DA6C: bne         $at, $zero, L_8008DA4C
    if (ctx->r1 != 0) {
        // 0x8008DA70: sw          $t0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r8;
            goto L_8008DA4C;
    }
    // 0x8008DA70: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8008DA74: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8008DA78: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8008DA7C: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8008DA80: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x8008DA84: addiu       $t4, $zero, 0x21
    ctx->r12 = ADD32(0, 0X21);
    // 0x8008DA88: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8008DA8C: sw          $t1, -0x7654($at)
    MEM_W(-0X7654, ctx->r1) = ctx->r9;
    // 0x8008DA90: sb          $t2, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r10;
    // 0x8008DA94: sb          $t3, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r11;
    // 0x8008DA98: sb          $t4, 0x1E($sp)
    MEM_B(0X1E, ctx->r29) = ctx->r12;
    // 0x8008DA9C: sb          $t5, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r13;
    // 0x8008DAA0: jal         0x800902B0
    // 0x8008DAA4: lhu         $a0, 0x4E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4E);
    func_800902B0(rdram, ctx);
        goto after_0;
    // 0x8008DAA4: lhu         $a0, 0x4E($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X4E);
    after_0:
    // 0x8008DAA8: lhu         $t6, 0x4E($sp)
    ctx->r14 = MEM_HU(ctx->r29, 0X4E);
    // 0x8008DAAC: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x8008DAB0: sb          $t9, 0x42($sp)
    MEM_B(0X42, ctx->r29) = ctx->r25;
    // 0x8008DAB4: sll         $t7, $t6, 5
    ctx->r15 = S32(ctx->r14 << 5);
    // 0x8008DAB8: or          $t8, $v0, $t7
    ctx->r24 = ctx->r2 | ctx->r15;
    // 0x8008DABC: sh          $t8, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r24;
    // 0x8008DAC0: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_8008DAC4:
    // 0x8008DAC4: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8008DAC8: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8008DACC: addu        $t2, $sp, $t1
    ctx->r10 = ADD32(ctx->r29, ctx->r9);
    // 0x8008DAD0: sb          $t0, 0x22($t2)
    MEM_B(0X22, ctx->r10) = ctx->r8;
    // 0x8008DAD4: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8008DAD8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8008DADC: slti        $at, $t4, 0x20
    ctx->r1 = SIGNED(ctx->r12) < 0X20 ? 1 : 0;
    // 0x8008DAE0: bne         $at, $zero, L_8008DAC4
    if (ctx->r1 != 0) {
        // 0x8008DAE4: sw          $t4, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r12;
            goto L_8008DAC4;
    }
    // 0x8008DAE4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8008DAE8: lw          $t5, 0x48($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X48);
    // 0x8008DAEC: beq         $t5, $zero, L_8008DB28
    if (ctx->r13 == 0) {
        // 0x8008DAF0: nop
    
            goto L_8008DB28;
    }
    // 0x8008DAF0: nop

    // 0x8008DAF4: blez        $t5, L_8008DB28
    if (SIGNED(ctx->r13) <= 0) {
        // 0x8008DAF8: sw          $zero, 0x18($sp)
        MEM_W(0X18, ctx->r29) = 0;
            goto L_8008DB28;
    }
    // 0x8008DAF8: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_8008DAFC:
    // 0x8008DAFC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8008DB00: sb          $zero, 0x0($t6)
    MEM_B(0X0, ctx->r14) = 0;
    // 0x8008DB04: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8008DB08: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x8008DB0C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8008DB10: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8008DB14: slt         $at, $t0, $t1
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8008DB18: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8008DB1C: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8008DB20: bne         $at, $zero, L_8008DAFC
    if (ctx->r1 != 0) {
        // 0x8008DB24: sw          $t8, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r24;
            goto L_8008DAFC;
    }
    // 0x8008DB24: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
L_8008DB28:
    // 0x8008DB28: addiu       $t3, $sp, 0x1C
    ctx->r11 = ADD32(ctx->r29, 0X1C);
    // 0x8008DB2C: addiu       $t5, $t3, 0x24
    ctx->r13 = ADD32(ctx->r11, 0X24);
    // 0x8008DB30: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
L_8008DB34:
    // 0x8008DB34: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x8008DB38: addiu       $t3, $t3, 0xC
    ctx->r11 = ADD32(ctx->r11, 0XC);
    // 0x8008DB3C: addiu       $t2, $t2, 0xC
    ctx->r10 = ADD32(ctx->r10, 0XC);
    // 0x8008DB40: swl         $at, -0xC($t2)
    do_swl(rdram, -0XC, ctx->r10, ctx->r1);
    // 0x8008DB44: swr         $at, -0x9($t2)
    do_swr(rdram, -0X9, ctx->r10, ctx->r1);
    // 0x8008DB48: lw          $at, -0x8($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X8);
    // 0x8008DB4C: swl         $at, -0x8($t2)
    do_swl(rdram, -0X8, ctx->r10, ctx->r1);
    // 0x8008DB50: swr         $at, -0x5($t2)
    do_swr(rdram, -0X5, ctx->r10, ctx->r1);
    // 0x8008DB54: lw          $at, -0x4($t3)
    ctx->r1 = MEM_W(ctx->r11, -0X4);
    // 0x8008DB58: swl         $at, -0x4($t2)
    do_swl(rdram, -0X4, ctx->r10, ctx->r1);
    // 0x8008DB5C: bne         $t3, $t5, L_8008DB34
    if (ctx->r11 != ctx->r13) {
        // 0x8008DB60: swr         $at, -0x1($t2)
        do_swr(rdram, -0X1, ctx->r10, ctx->r1);
            goto L_8008DB34;
    }
    // 0x8008DB60: swr         $at, -0x1($t2)
    do_swr(rdram, -0X1, ctx->r10, ctx->r1);
    // 0x8008DB64: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x8008DB68: addiu       $t8, $zero, 0xFE
    ctx->r24 = ADD32(0, 0XFE);
    // 0x8008DB6C: swl         $at, 0x0($t2)
    do_swl(rdram, 0X0, ctx->r10, ctx->r1);
    // 0x8008DB70: swr         $at, 0x3($t2)
    do_swr(rdram, 0X3, ctx->r10, ctx->r1);
    // 0x8008DB74: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8008DB78: addiu       $t7, $t6, 0x28
    ctx->r15 = ADD32(ctx->r14, 0X28);
    // 0x8008DB7C: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    // 0x8008DB80: sb          $t8, 0x0($t7)
    MEM_B(0X0, ctx->r15) = ctx->r24;
    // 0x8008DB84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008DB88: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8008DB8C: jr          $ra
    // 0x8008DB90: nop

    return;
    // 0x8008DB90: nop

    // 0x8008DB94: nop

    // 0x8008DB98: nop

    // 0x8008DB9C: nop

;}
RECOMP_FUNC void func_8008DBA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008DBA0: addiu       $sp, $sp, -0x488
    ctx->r29 = ADD32(ctx->r29, -0X488);
    // 0x8008DBA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008DBA8: sw          $a0, 0x488($sp)
    MEM_W(0X488, ctx->r29) = ctx->r4;
    // 0x8008DBAC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x8008DBB0: jal         0x8008D380
    // 0x8008DBB4: lw          $a0, 0x488($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X488);
    func_8008D380(rdram, ctx);
        goto after_0;
    // 0x8008DBB4: lw          $a0, 0x488($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X488);
    after_0:
    // 0x8008DBB8: sw          $v0, 0x480($sp)
    MEM_W(0X480, ctx->r29) = ctx->r2;
    // 0x8008DBBC: lw          $t6, 0x480($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X480);
    // 0x8008DBC0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8008DBC4: bne         $t6, $at, L_8008DBD8
    if (ctx->r14 != ctx->r1) {
        // 0x8008DBC8: nop
    
            goto L_8008DBD8;
    }
    // 0x8008DBC8: nop

    // 0x8008DBCC: jal         0x8008D124
    // 0x8008DBD0: lw          $a0, 0x488($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X488);
    func_8008D124(rdram, ctx);
        goto after_1;
    // 0x8008DBD0: lw          $a0, 0x488($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X488);
    after_1:
    // 0x8008DBD4: sw          $v0, 0x480($sp)
    MEM_W(0X480, ctx->r29) = ctx->r2;
L_8008DBD8:
    // 0x8008DBD8: lw          $t7, 0x480($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X480);
    // 0x8008DBDC: beq         $t7, $zero, L_8008DBEC
    if (ctx->r15 == 0) {
        // 0x8008DBE0: nop
    
            goto L_8008DBEC;
    }
    // 0x8008DBE0: nop

    // 0x8008DBE4: b           L_8008E254
    // 0x8008DBE8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_8008E254;
    // 0x8008DBE8: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8008DBEC:
    // 0x8008DBEC: lw          $a0, 0x488($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X488);
    // 0x8008DBF0: jal         0x8008E264
    // 0x8008DBF4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_8008E264(rdram, ctx);
        goto after_2;
    // 0x8008DBF4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_2:
    // 0x8008DBF8: sw          $v0, 0x480($sp)
    MEM_W(0X480, ctx->r29) = ctx->r2;
    // 0x8008DBFC: lw          $t8, 0x480($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X480);
    // 0x8008DC00: beq         $t8, $zero, L_8008DC10
    if (ctx->r24 == 0) {
        // 0x8008DC04: nop
    
            goto L_8008DC10;
    }
    // 0x8008DC04: nop

    // 0x8008DC08: b           L_8008E254
    // 0x8008DC0C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_8008E254;
    // 0x8008DC0C: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8008DC10:
    // 0x8008DC10: lw          $t9, 0x488($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X488);
    // 0x8008DC14: sw          $zero, 0x484($sp)
    MEM_W(0X484, ctx->r29) = 0;
    // 0x8008DC18: lw          $t0, 0x50($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X50);
    // 0x8008DC1C: blez        $t0, L_8008DF20
    if (SIGNED(ctx->r8) <= 0) {
        // 0x8008DC20: nop
    
            goto L_8008DF20;
    }
    // 0x8008DC20: nop

L_8008DC24:
    // 0x8008DC24: lw          $t1, 0x488($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X488);
    // 0x8008DC28: lw          $t3, 0x484($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X484);
    // 0x8008DC2C: addiu       $a3, $sp, 0x25C
    ctx->r7 = ADD32(ctx->r29, 0X25C);
    // 0x8008DC30: lw          $t2, 0x5C($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X5C);
    // 0x8008DC34: lw          $a0, 0x4($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X4);
    // 0x8008DC38: lw          $a1, 0x8($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X8);
    // 0x8008DC3C: jal         0x8008D810
    // 0x8008DC40: addu        $a2, $t2, $t3
    ctx->r6 = ADD32(ctx->r10, ctx->r11);
    func_8008D810(rdram, ctx);
        goto after_3;
    // 0x8008DC40: addu        $a2, $t2, $t3
    ctx->r6 = ADD32(ctx->r10, ctx->r11);
    after_3:
    // 0x8008DC44: sw          $v0, 0x480($sp)
    MEM_W(0X480, ctx->r29) = ctx->r2;
    // 0x8008DC48: lw          $t4, 0x480($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X480);
    // 0x8008DC4C: beq         $t4, $zero, L_8008DC5C
    if (ctx->r12 == 0) {
        // 0x8008DC50: nop
    
            goto L_8008DC5C;
    }
    // 0x8008DC50: nop

    // 0x8008DC54: b           L_8008E254
    // 0x8008DC58: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
        goto L_8008E254;
    // 0x8008DC58: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_8008DC5C:
    // 0x8008DC5C: lhu         $t5, 0x260($sp)
    ctx->r13 = MEM_HU(ctx->r29, 0X260);
    // 0x8008DC60: beq         $t5, $zero, L_8008DE58
    if (ctx->r13 == 0) {
        // 0x8008DC64: nop
    
            goto L_8008DE58;
    }
    // 0x8008DC64: nop

    // 0x8008DC68: lw          $t6, 0x25C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X25C);
    // 0x8008DC6C: beq         $t6, $zero, L_8008DE58
    if (ctx->r14 == 0) {
        // 0x8008DC70: nop
    
            goto L_8008DE58;
    }
    // 0x8008DC70: nop

    // 0x8008DC74: lhu         $t7, 0x262($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X262);
    // 0x8008DC78: lw          $t0, 0x488($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X488);
    // 0x8008DC7C: addiu       $t8, $zero, 0xFF
    ctx->r24 = ADD32(0, 0XFF);
    // 0x8008DC80: sh          $t7, 0x47C($sp)
    MEM_H(0X47C, ctx->r29) = ctx->r15;
    // 0x8008DC84: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8008DC88: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8008DC8C: sb          $t8, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r24;
    // 0x8008DC90: lhu         $t9, 0x47C($sp)
    ctx->r25 = MEM_HU(ctx->r29, 0X47C);
    // 0x8008DC94: lw          $t1, 0x60($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X60);
    // 0x8008DC98: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8008DC9C: bne         $at, $zero, L_8008DDA8
    if (ctx->r1 != 0) {
        // 0x8008DCA0: nop
    
            goto L_8008DDA8;
    }
    // 0x8008DCA0: nop

    // 0x8008DCA4: lbu         $t2, 0x47C($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X47C);
    // 0x8008DCA8: lbu         $t3, 0x64($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X64);
    // 0x8008DCAC: slt         $at, $t2, $t3
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8008DCB0: beq         $at, $zero, L_8008DDA8
    if (ctx->r1 == 0) {
        // 0x8008DCB4: nop
    
            goto L_8008DDA8;
    }
    // 0x8008DCB4: nop

    // 0x8008DCB8: lbu         $t4, 0x47D($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X47D);
    // 0x8008DCBC: blez        $t4, L_8008DDA8
    if (SIGNED(ctx->r12) <= 0) {
        // 0x8008DCC0: slti        $at, $t4, 0x80
        ctx->r1 = SIGNED(ctx->r12) < 0X80 ? 1 : 0;
            goto L_8008DDA8;
    }
    // 0x8008DCC0: slti        $at, $t4, 0x80
    ctx->r1 = SIGNED(ctx->r12) < 0X80 ? 1 : 0;
    // 0x8008DCC4: beq         $at, $zero, L_8008DDA8
    if (ctx->r1 == 0) {
        // 0x8008DCC8: nop
    
            goto L_8008DDA8;
    }
    // 0x8008DCC8: nop

L_8008DCCC:
    // 0x8008DCCC: lbu         $t5, 0x33($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X33);
    // 0x8008DCD0: lbu         $t6, 0x47C($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X47C);
    // 0x8008DCD4: beq         $t5, $t6, L_8008DD14
    if (ctx->r13 == ctx->r14) {
        // 0x8008DCD8: nop
    
            goto L_8008DD14;
    }
    // 0x8008DCD8: nop

    // 0x8008DCDC: sb          $t6, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r14;
    // 0x8008DCE0: lw          $a0, 0x488($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X488);
    // 0x8008DCE4: addiu       $a1, $sp, 0x27C
    ctx->r5 = ADD32(ctx->r29, 0X27C);
    // 0x8008DCE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8008DCEC: jal         0x8008D47C
    // 0x8008DCF0: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    func_8008D47C(rdram, ctx);
        goto after_4;
    // 0x8008DCF0: or          $a3, $t6, $zero
    ctx->r7 = ctx->r14 | 0;
    after_4:
    // 0x8008DCF4: sw          $v0, 0x480($sp)
    MEM_W(0X480, ctx->r29) = ctx->r2;
    // 0x8008DCF8: lw          $t7, 0x480($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X480);
    // 0x8008DCFC: beq         $t7, $zero, L_8008DD14
    if (ctx->r15 == 0) {
        // 0x8008DD00: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8008DD14;
    }
    // 0x8008DD00: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8008DD04: beq         $t7, $at, L_8008DD14
    if (ctx->r15 == ctx->r1) {
        // 0x8008DD08: nop
    
            goto L_8008DD14;
    }
    // 0x8008DD08: nop

    // 0x8008DD0C: b           L_8008E254
    // 0x8008DD10: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
        goto L_8008E254;
    // 0x8008DD10: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_8008DD14:
    // 0x8008DD14: lhu         $t8, 0x47C($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X47C);
    // 0x8008DD18: lw          $a0, 0x488($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X488);
    // 0x8008DD1C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x8008DD20: sh          $t8, 0x4($sp)
    MEM_H(0X4, ctx->r29) = ctx->r24;
    // 0x8008DD24: jal         0x8008E418
    // 0x8008DD28: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    func_8008E418(rdram, ctx);
        goto after_5;
    // 0x8008DD28: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    after_5:
    // 0x8008DD2C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8008DD30: subu        $t1, $v0, $t9
    ctx->r9 = SUB32(ctx->r2, ctx->r25);
    // 0x8008DD34: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x8008DD38: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8008DD3C: bne         $t0, $zero, L_8008DDA8
    if (ctx->r8 != 0) {
        // 0x8008DD40: nop
    
            goto L_8008DDA8;
    }
    // 0x8008DD40: nop

    // 0x8008DD44: lbu         $t4, 0x47D($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X47D);
    // 0x8008DD48: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8008DD4C: addiu       $t6, $sp, 0x27C
    ctx->r14 = ADD32(ctx->r29, 0X27C);
    // 0x8008DD50: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8008DD54: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x8008DD58: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8008DD5C: lhu         $at, 0x0($t7)
    ctx->r1 = MEM_HU(ctx->r15, 0X0);
    // 0x8008DD60: addiu       $t3, $sp, 0x47C
    ctx->r11 = ADD32(ctx->r29, 0X47C);
    // 0x8008DD64: sh          $at, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r1;
    // 0x8008DD68: lw          $t2, 0x488($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X488);
    // 0x8008DD6C: lhu         $t0, 0x47C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X47C);
    // 0x8008DD70: lw          $t4, 0x60($t2)
    ctx->r12 = MEM_W(ctx->r10, 0X60);
    // 0x8008DD74: slt         $at, $t0, $t4
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8008DD78: bne         $at, $zero, L_8008DDA8
    if (ctx->r1 != 0) {
        // 0x8008DD7C: nop
    
            goto L_8008DDA8;
    }
    // 0x8008DD7C: nop

    // 0x8008DD80: lbu         $t5, 0x47C($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X47C);
    // 0x8008DD84: lbu         $t6, 0x64($t2)
    ctx->r14 = MEM_BU(ctx->r10, 0X64);
    // 0x8008DD88: slt         $at, $t5, $t6
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x8008DD8C: beq         $at, $zero, L_8008DDA8
    if (ctx->r1 == 0) {
        // 0x8008DD90: nop
    
            goto L_8008DDA8;
    }
    // 0x8008DD90: nop

    // 0x8008DD94: lbu         $t9, 0x47D($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X47D);
    // 0x8008DD98: blez        $t9, L_8008DDA8
    if (SIGNED(ctx->r25) <= 0) {
        // 0x8008DD9C: slti        $at, $t9, 0x80
        ctx->r1 = SIGNED(ctx->r25) < 0X80 ? 1 : 0;
            goto L_8008DDA8;
    }
    // 0x8008DD9C: slti        $at, $t9, 0x80
    ctx->r1 = SIGNED(ctx->r25) < 0X80 ? 1 : 0;
    // 0x8008DDA0: bne         $at, $zero, L_8008DCCC
    if (ctx->r1 != 0) {
        // 0x8008DDA4: nop
    
            goto L_8008DCCC;
    }
    // 0x8008DDA4: nop

L_8008DDA8:
    // 0x8008DDA8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8008DDAC: bne         $t8, $zero, L_8008DDC4
    if (ctx->r24 != 0) {
        // 0x8008DDB0: nop
    
            goto L_8008DDC4;
    }
    // 0x8008DDB0: nop

    // 0x8008DDB4: lhu         $t3, 0x47C($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X47C);
    // 0x8008DDB8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8008DDBC: beq         $t3, $at, L_8008DF00
    if (ctx->r11 == ctx->r1) {
        // 0x8008DDC0: nop
    
            goto L_8008DF00;
    }
    // 0x8008DDC0: nop

L_8008DDC4:
    // 0x8008DDC4: lw          $t7, 0x488($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X488);
    // 0x8008DDC8: sh          $zero, 0x260($sp)
    MEM_H(0X260, ctx->r29) = 0;
    // 0x8008DDCC: sw          $zero, 0x25C($sp)
    MEM_W(0X25C, ctx->r29) = 0;
    // 0x8008DDD0: sh          $zero, 0x262($sp)
    MEM_H(0X262, ctx->r29) = 0;
    // 0x8008DDD4: sb          $zero, 0x264($sp)
    MEM_B(0X264, ctx->r29) = 0;
    // 0x8008DDD8: sh          $zero, 0x266($sp)
    MEM_H(0X266, ctx->r29) = 0;
    // 0x8008DDDC: lbu         $t1, 0x65($t7)
    ctx->r9 = MEM_BU(ctx->r15, 0X65);
    // 0x8008DDE0: beq         $t1, $zero, L_8008DE0C
    if (ctx->r9 == 0) {
        // 0x8008DDE4: nop
    
            goto L_8008DE0C;
    }
    // 0x8008DDE4: nop

    // 0x8008DDE8: sb          $zero, 0x65($t7)
    MEM_B(0X65, ctx->r15) = 0;
    // 0x8008DDEC: jal         0x8008D79C
    // 0x8008DDF0: lw          $a0, 0x488($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X488);
    func_8008D79C(rdram, ctx);
        goto after_6;
    // 0x8008DDF0: lw          $a0, 0x488($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X488);
    after_6:
    // 0x8008DDF4: sw          $v0, 0x480($sp)
    MEM_W(0X480, ctx->r29) = ctx->r2;
    // 0x8008DDF8: lw          $t0, 0x480($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X480);
    // 0x8008DDFC: beq         $t0, $zero, L_8008DE0C
    if (ctx->r8 == 0) {
        // 0x8008DE00: nop
    
            goto L_8008DE0C;
    }
    // 0x8008DE00: nop

    // 0x8008DE04: b           L_8008E254
    // 0x8008DE08: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
        goto L_8008E254;
    // 0x8008DE08: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_8008DE0C:
    // 0x8008DE0C: lw          $t4, 0x488($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X488);
    // 0x8008DE10: lw          $t5, 0x484($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X484);
    // 0x8008DE14: addiu       $a3, $sp, 0x25C
    ctx->r7 = ADD32(ctx->r29, 0X25C);
    // 0x8008DE18: lw          $t2, 0x5C($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X5C);
    // 0x8008DE1C: lw          $a0, 0x4($t4)
    ctx->r4 = MEM_W(ctx->r12, 0X4);
    // 0x8008DE20: lw          $a1, 0x8($t4)
    ctx->r5 = MEM_W(ctx->r12, 0X8);
    // 0x8008DE24: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8008DE28: jal         0x8008E600
    // 0x8008DE2C: addu        $a2, $t2, $t5
    ctx->r6 = ADD32(ctx->r10, ctx->r13);
    func_8008E600(rdram, ctx);
        goto after_7;
    // 0x8008DE2C: addu        $a2, $t2, $t5
    ctx->r6 = ADD32(ctx->r10, ctx->r13);
    after_7:
    // 0x8008DE30: sw          $v0, 0x480($sp)
    MEM_W(0X480, ctx->r29) = ctx->r2;
    // 0x8008DE34: lw          $t6, 0x480($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X480);
    // 0x8008DE38: beq         $t6, $zero, L_8008DE48
    if (ctx->r14 == 0) {
        // 0x8008DE3C: nop
    
            goto L_8008DE48;
    }
    // 0x8008DE3C: nop

    // 0x8008DE40: b           L_8008E254
    // 0x8008DE44: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
        goto L_8008E254;
    // 0x8008DE44: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_8008DE48:
    // 0x8008DE48: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8008DE4C: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x8008DE50: b           L_8008DF00
    // 0x8008DE54: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
        goto L_8008DF00;
    // 0x8008DE54: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_8008DE58:
    // 0x8008DE58: lhu         $t3, 0x260($sp)
    ctx->r11 = MEM_HU(ctx->r29, 0X260);
    // 0x8008DE5C: bne         $t3, $zero, L_8008DE70
    if (ctx->r11 != 0) {
        // 0x8008DE60: nop
    
            goto L_8008DE70;
    }
    // 0x8008DE60: nop

    // 0x8008DE64: lw          $t1, 0x25C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X25C);
    // 0x8008DE68: beq         $t1, $zero, L_8008DF00
    if (ctx->r9 == 0) {
        // 0x8008DE6C: nop
    
            goto L_8008DF00;
    }
    // 0x8008DE6C: nop

L_8008DE70:
    // 0x8008DE70: lw          $t7, 0x488($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X488);
    // 0x8008DE74: sh          $zero, 0x260($sp)
    MEM_H(0X260, ctx->r29) = 0;
    // 0x8008DE78: sw          $zero, 0x25C($sp)
    MEM_W(0X25C, ctx->r29) = 0;
    // 0x8008DE7C: sh          $zero, 0x262($sp)
    MEM_H(0X262, ctx->r29) = 0;
    // 0x8008DE80: sb          $zero, 0x264($sp)
    MEM_B(0X264, ctx->r29) = 0;
    // 0x8008DE84: sh          $zero, 0x266($sp)
    MEM_H(0X266, ctx->r29) = 0;
    // 0x8008DE88: lbu         $t0, 0x65($t7)
    ctx->r8 = MEM_BU(ctx->r15, 0X65);
    // 0x8008DE8C: beq         $t0, $zero, L_8008DEB8
    if (ctx->r8 == 0) {
        // 0x8008DE90: nop
    
            goto L_8008DEB8;
    }
    // 0x8008DE90: nop

    // 0x8008DE94: sb          $zero, 0x65($t7)
    MEM_B(0X65, ctx->r15) = 0;
    // 0x8008DE98: jal         0x8008D79C
    // 0x8008DE9C: lw          $a0, 0x488($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X488);
    func_8008D79C(rdram, ctx);
        goto after_8;
    // 0x8008DE9C: lw          $a0, 0x488($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X488);
    after_8:
    // 0x8008DEA0: sw          $v0, 0x480($sp)
    MEM_W(0X480, ctx->r29) = ctx->r2;
    // 0x8008DEA4: lw          $t4, 0x480($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X480);
    // 0x8008DEA8: beq         $t4, $zero, L_8008DEB8
    if (ctx->r12 == 0) {
        // 0x8008DEAC: nop
    
            goto L_8008DEB8;
    }
    // 0x8008DEAC: nop

    // 0x8008DEB0: b           L_8008E254
    // 0x8008DEB4: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
        goto L_8008E254;
    // 0x8008DEB4: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_8008DEB8:
    // 0x8008DEB8: lw          $t2, 0x488($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X488);
    // 0x8008DEBC: lw          $t6, 0x484($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X484);
    // 0x8008DEC0: addiu       $a3, $sp, 0x25C
    ctx->r7 = ADD32(ctx->r29, 0X25C);
    // 0x8008DEC4: lw          $t5, 0x5C($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X5C);
    // 0x8008DEC8: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    // 0x8008DECC: lw          $a1, 0x8($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X8);
    // 0x8008DED0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8008DED4: jal         0x8008E600
    // 0x8008DED8: addu        $a2, $t5, $t6
    ctx->r6 = ADD32(ctx->r13, ctx->r14);
    func_8008E600(rdram, ctx);
        goto after_9;
    // 0x8008DED8: addu        $a2, $t5, $t6
    ctx->r6 = ADD32(ctx->r13, ctx->r14);
    after_9:
    // 0x8008DEDC: sw          $v0, 0x480($sp)
    MEM_W(0X480, ctx->r29) = ctx->r2;
    // 0x8008DEE0: lw          $t9, 0x480($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X480);
    // 0x8008DEE4: beq         $t9, $zero, L_8008DEF4
    if (ctx->r25 == 0) {
        // 0x8008DEE8: nop
    
            goto L_8008DEF4;
    }
    // 0x8008DEE8: nop

    // 0x8008DEEC: b           L_8008E254
    // 0x8008DEF0: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_8008E254;
    // 0x8008DEF0: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_8008DEF4:
    // 0x8008DEF4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8008DEF8: addiu       $t3, $t8, 0x1
    ctx->r11 = ADD32(ctx->r24, 0X1);
    // 0x8008DEFC: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
L_8008DF00:
    // 0x8008DF00: lw          $t1, 0x484($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X484);
    // 0x8008DF04: lw          $t7, 0x488($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X488);
    // 0x8008DF08: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x8008DF0C: sw          $t0, 0x484($sp)
    MEM_W(0X484, ctx->r29) = ctx->r8;
    // 0x8008DF10: lw          $t4, 0x50($t7)
    ctx->r12 = MEM_W(ctx->r15, 0X50);
    // 0x8008DF14: slt         $at, $t0, $t4
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8008DF18: bne         $at, $zero, L_8008DC24
    if (ctx->r1 != 0) {
        // 0x8008DF1C: nop
    
            goto L_8008DC24;
    }
    // 0x8008DF1C: nop

L_8008DF20:
    // 0x8008DF20: lw          $t2, 0x488($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X488);
    // 0x8008DF24: sw          $zero, 0x484($sp)
    MEM_W(0X484, ctx->r29) = 0;
    // 0x8008DF28: lw          $t5, 0x50($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X50);
    // 0x8008DF2C: blez        $t5, L_8008DFE0
    if (SIGNED(ctx->r13) <= 0) {
        // 0x8008DF30: nop
    
            goto L_8008DFE0;
    }
    // 0x8008DF30: nop

L_8008DF34:
    // 0x8008DF34: lw          $t6, 0x488($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X488);
    // 0x8008DF38: lw          $t8, 0x484($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X484);
    // 0x8008DF3C: addiu       $a3, $sp, 0x25C
    ctx->r7 = ADD32(ctx->r29, 0X25C);
    // 0x8008DF40: lw          $t9, 0x5C($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X5C);
    // 0x8008DF44: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    // 0x8008DF48: lw          $a1, 0x8($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X8);
    // 0x8008DF4C: jal         0x8008D810
    // 0x8008DF50: addu        $a2, $t9, $t8
    ctx->r6 = ADD32(ctx->r25, ctx->r24);
    func_8008D810(rdram, ctx);
        goto after_10;
    // 0x8008DF50: addu        $a2, $t9, $t8
    ctx->r6 = ADD32(ctx->r25, ctx->r24);
    after_10:
    // 0x8008DF54: sw          $v0, 0x480($sp)
    MEM_W(0X480, ctx->r29) = ctx->r2;
    // 0x8008DF58: lw          $t3, 0x480($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X480);
    // 0x8008DF5C: beq         $t3, $zero, L_8008DF6C
    if (ctx->r11 == 0) {
        // 0x8008DF60: nop
    
            goto L_8008DF6C;
    }
    // 0x8008DF60: nop

    // 0x8008DF64: b           L_8008E254
    // 0x8008DF68: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
        goto L_8008E254;
    // 0x8008DF68: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
L_8008DF6C:
    // 0x8008DF6C: lhu         $t1, 0x260($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X260);
    // 0x8008DF70: beq         $t1, $zero, L_8008DFB0
    if (ctx->r9 == 0) {
        // 0x8008DF74: nop
    
            goto L_8008DFB0;
    }
    // 0x8008DF74: nop

    // 0x8008DF78: lw          $t7, 0x25C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X25C);
    // 0x8008DF7C: beq         $t7, $zero, L_8008DFB0
    if (ctx->r15 == 0) {
        // 0x8008DF80: nop
    
            goto L_8008DFB0;
    }
    // 0x8008DF80: nop

    // 0x8008DF84: lw          $t4, 0x488($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X488);
    // 0x8008DF88: lhu         $t0, 0x262($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X262);
    // 0x8008DF8C: lhu         $t2, 0x62($t4)
    ctx->r10 = MEM_HU(ctx->r12, 0X62);
    // 0x8008DF90: slt         $at, $t0, $t2
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8008DF94: bne         $at, $zero, L_8008DFB0
    if (ctx->r1 != 0) {
        // 0x8008DF98: nop
    
            goto L_8008DFB0;
    }
    // 0x8008DF98: nop

    // 0x8008DF9C: lw          $t5, 0x484($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X484);
    // 0x8008DFA0: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x8008DFA4: addu        $t9, $sp, $t6
    ctx->r25 = ADD32(ctx->r29, ctx->r14);
    // 0x8008DFA8: b           L_8008DFC0
    // 0x8008DFAC: sh          $t0, 0x23C($t9)
    MEM_H(0X23C, ctx->r25) = ctx->r8;
        goto L_8008DFC0;
    // 0x8008DFAC: sh          $t0, 0x23C($t9)
    MEM_H(0X23C, ctx->r25) = ctx->r8;
L_8008DFB0:
    // 0x8008DFB0: lw          $t8, 0x484($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X484);
    // 0x8008DFB4: sll         $t3, $t8, 1
    ctx->r11 = S32(ctx->r24 << 1);
    // 0x8008DFB8: addu        $t1, $sp, $t3
    ctx->r9 = ADD32(ctx->r29, ctx->r11);
    // 0x8008DFBC: sh          $zero, 0x23C($t1)
    MEM_H(0X23C, ctx->r9) = 0;
L_8008DFC0:
    // 0x8008DFC0: lw          $t7, 0x484($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X484);
    // 0x8008DFC4: lw          $t2, 0x488($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X488);
    // 0x8008DFC8: addiu       $t4, $t7, 0x1
    ctx->r12 = ADD32(ctx->r15, 0X1);
    // 0x8008DFCC: sw          $t4, 0x484($sp)
    MEM_W(0X484, ctx->r29) = ctx->r12;
    // 0x8008DFD0: lw          $t5, 0x50($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X50);
    // 0x8008DFD4: slt         $at, $t4, $t5
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8008DFD8: bne         $at, $zero, L_8008DF34
    if (ctx->r1 != 0) {
        // 0x8008DFDC: nop
    
            goto L_8008DF34;
    }
    // 0x8008DFDC: nop

L_8008DFE0:
    // 0x8008DFE0: lw          $t0, 0x488($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X488);
    // 0x8008DFE4: sb          $zero, 0x33($sp)
    MEM_B(0X33, ctx->r29) = 0;
    // 0x8008DFE8: lbu         $t6, 0x64($t0)
    ctx->r14 = MEM_BU(ctx->r8, 0X64);
    // 0x8008DFEC: blez        $t6, L_8008E21C
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8008DFF0: nop
    
            goto L_8008E21C;
    }
    // 0x8008DFF0: nop

L_8008DFF4:
    // 0x8008DFF4: lw          $a0, 0x488($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X488);
    // 0x8008DFF8: addiu       $a1, $sp, 0x27C
    ctx->r5 = ADD32(ctx->r29, 0X27C);
    // 0x8008DFFC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8008E000: jal         0x8008D47C
    // 0x8008E004: lbu         $a3, 0x33($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X33);
    func_8008D47C(rdram, ctx);
        goto after_11;
    // 0x8008E004: lbu         $a3, 0x33($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X33);
    after_11:
    // 0x8008E008: sw          $v0, 0x480($sp)
    MEM_W(0X480, ctx->r29) = ctx->r2;
    // 0x8008E00C: lw          $t9, 0x480($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X480);
    // 0x8008E010: beq         $t9, $zero, L_8008E028
    if (ctx->r25 == 0) {
        // 0x8008E014: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8008E028;
    }
    // 0x8008E014: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8008E018: beq         $t9, $at, L_8008E028
    if (ctx->r25 == ctx->r1) {
        // 0x8008E01C: nop
    
            goto L_8008E028;
    }
    // 0x8008E01C: nop

    // 0x8008E020: b           L_8008E254
    // 0x8008E024: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_8008E254;
    // 0x8008E024: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_8008E028:
    // 0x8008E028: lbu         $t8, 0x33($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X33);
    // 0x8008E02C: blez        $t8, L_8008E040
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8008E030: nop
    
            goto L_8008E040;
    }
    // 0x8008E030: nop

    // 0x8008E034: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8008E038: b           L_8008E04C
    // 0x8008E03C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
        goto L_8008E04C;
    // 0x8008E03C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
L_8008E040:
    // 0x8008E040: lw          $t1, 0x488($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X488);
    // 0x8008E044: lw          $t7, 0x60($t1)
    ctx->r15 = MEM_W(ctx->r9, 0X60);
    // 0x8008E048: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_8008E04C:
    // 0x8008E04C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8008E050: sw          $zero, 0x484($sp)
    MEM_W(0X484, ctx->r29) = 0;
    // 0x8008E054: blez        $t2, L_8008E08C
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8008E058: nop
    
            goto L_8008E08C;
    }
    // 0x8008E058: nop

L_8008E05C:
    // 0x8008E05C: lw          $t4, 0x484($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X484);
    // 0x8008E060: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8008E064: addu        $t0, $sp, $t5
    ctx->r8 = ADD32(ctx->r29, ctx->r13);
    // 0x8008E068: lhu         $t0, 0x27C($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X27C);
    // 0x8008E06C: addu        $t6, $sp, $t5
    ctx->r14 = ADD32(ctx->r29, ctx->r13);
    // 0x8008E070: sh          $t0, 0x37C($t6)
    MEM_H(0X37C, ctx->r14) = ctx->r8;
    // 0x8008E074: lw          $t9, 0x484($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X484);
    // 0x8008E078: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8008E07C: addiu       $t8, $t9, 0x1
    ctx->r24 = ADD32(ctx->r25, 0X1);
    // 0x8008E080: slt         $at, $t8, $t3
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x8008E084: bne         $at, $zero, L_8008E05C
    if (ctx->r1 != 0) {
        // 0x8008E088: sw          $t8, 0x484($sp)
        MEM_W(0X484, ctx->r29) = ctx->r24;
            goto L_8008E05C;
    }
    // 0x8008E088: sw          $t8, 0x484($sp)
    MEM_W(0X484, ctx->r29) = ctx->r24;
L_8008E08C:
    // 0x8008E08C: lw          $t1, 0x484($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X484);
    // 0x8008E090: slti        $at, $t1, 0x80
    ctx->r1 = SIGNED(ctx->r9) < 0X80 ? 1 : 0;
    // 0x8008E094: beq         $at, $zero, L_8008E0C4
    if (ctx->r1 == 0) {
        // 0x8008E098: nop
    
            goto L_8008E0C4;
    }
    // 0x8008E098: nop

L_8008E09C:
    // 0x8008E09C: lw          $t2, 0x484($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X484);
    // 0x8008E0A0: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x8008E0A4: sll         $t4, $t2, 1
    ctx->r12 = S32(ctx->r10 << 1);
    // 0x8008E0A8: addu        $t0, $sp, $t4
    ctx->r8 = ADD32(ctx->r29, ctx->r12);
    // 0x8008E0AC: sh          $t7, 0x37C($t0)
    MEM_H(0X37C, ctx->r8) = ctx->r15;
    // 0x8008E0B0: lw          $t5, 0x484($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X484);
    // 0x8008E0B4: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8008E0B8: slti        $at, $t6, 0x80
    ctx->r1 = SIGNED(ctx->r14) < 0X80 ? 1 : 0;
    // 0x8008E0BC: bne         $at, $zero, L_8008E09C
    if (ctx->r1 != 0) {
        // 0x8008E0C0: sw          $t6, 0x484($sp)
        MEM_W(0X484, ctx->r29) = ctx->r14;
            goto L_8008E09C;
    }
    // 0x8008E0C0: sw          $t6, 0x484($sp)
    MEM_W(0X484, ctx->r29) = ctx->r14;
L_8008E0C4:
    // 0x8008E0C4: lw          $t9, 0x488($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X488);
    // 0x8008E0C8: sw          $zero, 0x484($sp)
    MEM_W(0X484, ctx->r29) = 0;
    // 0x8008E0CC: lw          $t8, 0x50($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X50);
    // 0x8008E0D0: blez        $t8, L_8008E1CC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8008E0D4: nop
    
            goto L_8008E1CC;
    }
    // 0x8008E0D4: nop

L_8008E0D8:
    // 0x8008E0D8: lw          $t3, 0x484($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X484);
    // 0x8008E0DC: addiu       $t2, $sp, 0x23C
    ctx->r10 = ADD32(ctx->r29, 0X23C);
    // 0x8008E0E0: lbu         $t0, 0x33($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X33);
    // 0x8008E0E4: sll         $t1, $t3, 1
    ctx->r9 = S32(ctx->r11 << 1);
    // 0x8008E0E8: addu        $t7, $t1, $t2
    ctx->r15 = ADD32(ctx->r9, ctx->r10);
    // 0x8008E0EC: lbu         $t4, 0x0($t7)
    ctx->r12 = MEM_BU(ctx->r15, 0X0);
    // 0x8008E0F0: bne         $t4, $t0, L_8008E1AC
    if (ctx->r12 != ctx->r8) {
        // 0x8008E0F4: nop
    
            goto L_8008E1AC;
    }
    // 0x8008E0F4: nop

    // 0x8008E0F8: lw          $t6, 0x488($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X488);
    // 0x8008E0FC: lhu         $t5, 0x0($t7)
    ctx->r13 = MEM_HU(ctx->r15, 0X0);
    // 0x8008E100: lhu         $t9, 0x62($t6)
    ctx->r25 = MEM_HU(ctx->r14, 0X62);
    // 0x8008E104: slt         $at, $t5, $t9
    ctx->r1 = SIGNED(ctx->r13) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8008E108: bne         $at, $zero, L_8008E1AC
    if (ctx->r1 != 0) {
        // 0x8008E10C: nop
    
            goto L_8008E1AC;
    }
    // 0x8008E10C: nop

L_8008E110:
    // 0x8008E110: lw          $t8, 0x484($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X484);
    // 0x8008E114: addiu       $t0, $sp, 0x27C
    ctx->r8 = ADD32(ctx->r29, 0X27C);
    // 0x8008E118: addiu       $t2, $sp, 0x20
    ctx->r10 = ADD32(ctx->r29, 0X20);
    // 0x8008E11C: sll         $t3, $t8, 1
    ctx->r11 = S32(ctx->r24 << 1);
    // 0x8008E120: addu        $t1, $sp, $t3
    ctx->r9 = ADD32(ctx->r29, ctx->r11);
    // 0x8008E124: lbu         $t1, 0x23D($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X23D);
    // 0x8008E128: sll         $t4, $t1, 1
    ctx->r12 = S32(ctx->r9 << 1);
    // 0x8008E12C: addu        $t7, $t4, $t0
    ctx->r15 = ADD32(ctx->r12, ctx->r8);
    // 0x8008E130: sb          $t1, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r9;
    // 0x8008E134: lhu         $at, 0x0($t7)
    ctx->r1 = MEM_HU(ctx->r15, 0X0);
    // 0x8008E138: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    // 0x8008E13C: addiu       $t1, $sp, 0x37C
    ctx->r9 = ADD32(ctx->r29, 0X37C);
    // 0x8008E140: sh          $at, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r1;
    // 0x8008E144: lbu         $t8, 0x23($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X23);
    // 0x8008E148: lhu         $at, 0x0($t0)
    ctx->r1 = MEM_HU(ctx->r8, 0X0);
    // 0x8008E14C: sll         $t3, $t8, 1
    ctx->r11 = S32(ctx->r24 << 1);
    // 0x8008E150: addu        $t4, $t3, $t1
    ctx->r12 = ADD32(ctx->r11, ctx->r9);
    // 0x8008E154: sh          $at, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r1;
    // 0x8008E158: lw          $t7, 0x484($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X484);
    // 0x8008E15C: addiu       $t1, $sp, 0x20
    ctx->r9 = ADD32(ctx->r29, 0X20);
    // 0x8008E160: lhu         $at, 0x0($t1)
    ctx->r1 = MEM_HU(ctx->r9, 0X0);
    // 0x8008E164: addiu       $t8, $sp, 0x23C
    ctx->r24 = ADD32(ctx->r29, 0X23C);
    // 0x8008E168: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x8008E16C: addu        $t3, $t9, $t8
    ctx->r11 = ADD32(ctx->r25, ctx->r24);
    // 0x8008E170: sh          $at, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r1;
    // 0x8008E174: lw          $t0, 0x484($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X484);
    // 0x8008E178: addiu       $t7, $sp, 0x23C
    ctx->r15 = ADD32(ctx->r29, 0X23C);
    // 0x8008E17C: lbu         $t5, 0x33($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X33);
    // 0x8008E180: sll         $t2, $t0, 1
    ctx->r10 = S32(ctx->r8 << 1);
    // 0x8008E184: addu        $t9, $t2, $t7
    ctx->r25 = ADD32(ctx->r10, ctx->r15);
    // 0x8008E188: lbu         $t8, 0x0($t9)
    ctx->r24 = MEM_BU(ctx->r25, 0X0);
    // 0x8008E18C: bne         $t8, $t5, L_8008E1AC
    if (ctx->r24 != ctx->r13) {
        // 0x8008E190: nop
    
            goto L_8008E1AC;
    }
    // 0x8008E190: nop

    // 0x8008E194: lw          $t3, 0x488($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X488);
    // 0x8008E198: lhu         $t6, 0x0($t9)
    ctx->r14 = MEM_HU(ctx->r25, 0X0);
    // 0x8008E19C: lhu         $t1, 0x62($t3)
    ctx->r9 = MEM_HU(ctx->r11, 0X62);
    // 0x8008E1A0: slt         $at, $t6, $t1
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8008E1A4: beq         $at, $zero, L_8008E110
    if (ctx->r1 == 0) {
        // 0x8008E1A8: nop
    
            goto L_8008E110;
    }
    // 0x8008E1A8: nop

L_8008E1AC:
    // 0x8008E1AC: lw          $t4, 0x484($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X484);
    // 0x8008E1B0: lw          $t2, 0x488($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X488);
    // 0x8008E1B4: addiu       $t0, $t4, 0x1
    ctx->r8 = ADD32(ctx->r12, 0X1);
    // 0x8008E1B8: sw          $t0, 0x484($sp)
    MEM_W(0X484, ctx->r29) = ctx->r8;
    // 0x8008E1BC: lw          $t7, 0x50($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X50);
    // 0x8008E1C0: slt         $at, $t0, $t7
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8008E1C4: bne         $at, $zero, L_8008E0D8
    if (ctx->r1 != 0) {
        // 0x8008E1C8: nop
    
            goto L_8008E0D8;
    }
    // 0x8008E1C8: nop

L_8008E1CC:
    // 0x8008E1CC: lw          $a0, 0x488($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X488);
    // 0x8008E1D0: addiu       $a1, $sp, 0x37C
    ctx->r5 = ADD32(ctx->r29, 0X37C);
    // 0x8008E1D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8008E1D8: jal         0x8008D47C
    // 0x8008E1DC: lbu         $a3, 0x33($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X33);
    func_8008D47C(rdram, ctx);
        goto after_12;
    // 0x8008E1DC: lbu         $a3, 0x33($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X33);
    after_12:
    // 0x8008E1E0: sw          $v0, 0x480($sp)
    MEM_W(0X480, ctx->r29) = ctx->r2;
    // 0x8008E1E4: lw          $t8, 0x480($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X480);
    // 0x8008E1E8: beq         $t8, $zero, L_8008E1F8
    if (ctx->r24 == 0) {
        // 0x8008E1EC: nop
    
            goto L_8008E1F8;
    }
    // 0x8008E1EC: nop

    // 0x8008E1F0: b           L_8008E254
    // 0x8008E1F4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
        goto L_8008E254;
    // 0x8008E1F4: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
L_8008E1F8:
    // 0x8008E1F8: lbu         $t5, 0x33($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X33);
    // 0x8008E1FC: lw          $t6, 0x488($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X488);
    // 0x8008E200: addiu       $t9, $t5, 0x1
    ctx->r25 = ADD32(ctx->r13, 0X1);
    // 0x8008E204: sb          $t9, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r25;
    // 0x8008E208: lbu         $t1, 0x64($t6)
    ctx->r9 = MEM_BU(ctx->r14, 0X64);
    // 0x8008E20C: andi        $t3, $t9, 0xFF
    ctx->r11 = ctx->r25 & 0XFF;
    // 0x8008E210: slt         $at, $t3, $t1
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8008E214: bne         $at, $zero, L_8008DFF4
    if (ctx->r1 != 0) {
        // 0x8008E218: nop
    
            goto L_8008DFF4;
    }
    // 0x8008E218: nop

L_8008E21C:
    // 0x8008E21C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8008E220: beq         $t4, $zero, L_8008E23C
    if (ctx->r12 == 0) {
        // 0x8008E224: nop
    
            goto L_8008E23C;
    }
    // 0x8008E224: nop

    // 0x8008E228: lw          $t2, 0x488($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X488);
    // 0x8008E22C: lw          $t0, 0x0($t2)
    ctx->r8 = MEM_W(ctx->r10, 0X0);
    // 0x8008E230: ori         $t7, $t0, 0x2
    ctx->r15 = ctx->r8 | 0X2;
    // 0x8008E234: b           L_8008E250
    // 0x8008E238: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
        goto L_8008E250;
    // 0x8008E238: sw          $t7, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r15;
L_8008E23C:
    // 0x8008E23C: lw          $t8, 0x488($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X488);
    // 0x8008E240: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x8008E244: lw          $t5, 0x0($t8)
    ctx->r13 = MEM_W(ctx->r24, 0X0);
    // 0x8008E248: and         $t9, $t5, $at
    ctx->r25 = ctx->r13 & ctx->r1;
    // 0x8008E24C: sw          $t9, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r25;
L_8008E250:
    // 0x8008E250: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008E254:
    // 0x8008E254: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008E258: addiu       $sp, $sp, 0x488
    ctx->r29 = ADD32(ctx->r29, 0X488);
    // 0x8008E25C: jr          $ra
    // 0x8008E260: nop

    return;
    // 0x8008E260: nop

;}
RECOMP_FUNC void func_8008E264(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E264: addiu       $sp, $sp, -0x130
    ctx->r29 = ADD32(ctx->r29, -0X130);
    // 0x8008E268: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E26C: sw          $a0, 0x130($sp)
    MEM_W(0X130, ctx->r29) = ctx->r4;
    // 0x8008E270: sw          $a1, 0x134($sp)
    MEM_W(0X134, ctx->r29) = ctx->r5;
    // 0x8008E274: sw          $zero, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = 0;
L_8008E278:
    // 0x8008E278: lw          $t6, 0x134($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X134);
    // 0x8008E27C: lw          $t7, 0x12C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X12C);
    // 0x8008E280: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8008E284: sb          $zero, 0x101($t8)
    MEM_B(0X101, ctx->r24) = 0;
    // 0x8008E288: lw          $t9, 0x12C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X12C);
    // 0x8008E28C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8008E290: slti        $at, $t0, 0x100
    ctx->r1 = SIGNED(ctx->r8) < 0X100 ? 1 : 0;
    // 0x8008E294: bne         $at, $zero, L_8008E278
    if (ctx->r1 != 0) {
        // 0x8008E298: sw          $t0, 0x12C($sp)
        MEM_W(0X12C, ctx->r29) = ctx->r8;
            goto L_8008E278;
    }
    // 0x8008E298: sw          $t0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r8;
    // 0x8008E29C: lw          $t2, 0x134($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X134);
    // 0x8008E2A0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x8008E2A4: sb          $t1, 0x100($t2)
    MEM_B(0X100, ctx->r10) = ctx->r9;
    // 0x8008E2A8: lw          $t3, 0x130($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X130);
    // 0x8008E2AC: sb          $zero, 0x123($sp)
    MEM_B(0X123, ctx->r29) = 0;
    // 0x8008E2B0: lbu         $t4, 0x64($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X64);
    // 0x8008E2B4: blez        $t4, L_8008E404
    if (SIGNED(ctx->r12) <= 0) {
        // 0x8008E2B8: nop
    
            goto L_8008E404;
    }
    // 0x8008E2B8: nop

L_8008E2BC:
    // 0x8008E2BC: lbu         $t5, 0x123($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X123);
    // 0x8008E2C0: blez        $t5, L_8008E2D4
    if (SIGNED(ctx->r13) <= 0) {
        // 0x8008E2C4: nop
    
            goto L_8008E2D4;
    }
    // 0x8008E2C4: nop

    // 0x8008E2C8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8008E2CC: b           L_8008E2E0
    // 0x8008E2D0: sw          $t6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r14;
        goto L_8008E2E0;
    // 0x8008E2D0: sw          $t6, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r14;
L_8008E2D4:
    // 0x8008E2D4: lw          $t7, 0x130($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X130);
    // 0x8008E2D8: lw          $t8, 0x60($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X60);
    // 0x8008E2DC: sw          $t8, 0x124($sp)
    MEM_W(0X124, ctx->r29) = ctx->r24;
L_8008E2E0:
    // 0x8008E2E0: lw          $a0, 0x130($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X130);
    // 0x8008E2E4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8008E2E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8008E2EC: jal         0x8008D47C
    // 0x8008E2F0: lbu         $a3, 0x123($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X123);
    func_8008D47C(rdram, ctx);
        goto after_0;
    // 0x8008E2F0: lbu         $a3, 0x123($sp)
    ctx->r7 = MEM_BU(ctx->r29, 0X123);
    after_0:
    // 0x8008E2F4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8008E2F8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8008E2FC: beq         $t9, $zero, L_8008E314
    if (ctx->r25 == 0) {
        // 0x8008E300: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8008E314;
    }
    // 0x8008E300: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8008E304: beq         $t9, $at, L_8008E314
    if (ctx->r25 == ctx->r1) {
        // 0x8008E308: nop
    
            goto L_8008E314;
    }
    // 0x8008E308: nop

    // 0x8008E30C: b           L_8008E408
    // 0x8008E310: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_8008E408;
    // 0x8008E310: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_8008E314:
    // 0x8008E314: lw          $t0, 0x124($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X124);
    // 0x8008E318: slti        $at, $t0, 0x80
    ctx->r1 = SIGNED(ctx->r8) < 0X80 ? 1 : 0;
    // 0x8008E31C: beq         $at, $zero, L_8008E3E0
    if (ctx->r1 == 0) {
        // 0x8008E320: sw          $t0, 0x12C($sp)
        MEM_W(0X12C, ctx->r29) = ctx->r8;
            goto L_8008E3E0;
    }
    // 0x8008E320: sw          $t0, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r8;
L_8008E324:
    // 0x8008E324: lw          $t2, 0x12C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X12C);
    // 0x8008E328: addiu       $t4, $sp, 0x20
    ctx->r12 = ADD32(ctx->r29, 0X20);
    // 0x8008E32C: addiu       $t1, $sp, 0x120
    ctx->r9 = ADD32(ctx->r29, 0X120);
    // 0x8008E330: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8008E334: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8008E338: lhu         $at, 0x0($t5)
    ctx->r1 = MEM_HU(ctx->r13, 0X0);
    // 0x8008E33C: sh          $at, 0x0($t1)
    MEM_H(0X0, ctx->r9) = ctx->r1;
    // 0x8008E340: lw          $t9, 0x130($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X130);
    // 0x8008E344: lhu         $t8, 0x120($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X120);
    // 0x8008E348: lw          $t0, 0x60($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X60);
    // 0x8008E34C: slt         $at, $t8, $t0
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8008E350: bne         $at, $zero, L_8008E3CC
    if (ctx->r1 != 0) {
        // 0x8008E354: nop
    
            goto L_8008E3CC;
    }
    // 0x8008E354: nop

    // 0x8008E358: lbu         $t2, 0x120($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X120);
    // 0x8008E35C: lbu         $t3, 0x123($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X123);
    // 0x8008E360: beq         $t2, $t3, L_8008E3CC
    if (ctx->r10 == ctx->r11) {
        // 0x8008E364: nop
    
            goto L_8008E3CC;
    }
    // 0x8008E364: nop

    // 0x8008E368: lbu         $t4, 0x121($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X121);
    // 0x8008E36C: lw          $t9, 0x134($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X134);
    // 0x8008E370: bgez        $t4, L_8008E380
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8008E374: sra         $t6, $t4, 2
        ctx->r14 = S32(SIGNED(ctx->r12) >> 2);
            goto L_8008E380;
    }
    // 0x8008E374: sra         $t6, $t4, 2
    ctx->r14 = S32(SIGNED(ctx->r12) >> 2);
    // 0x8008E378: addiu       $at, $t4, 0x3
    ctx->r1 = ADD32(ctx->r12, 0X3);
    // 0x8008E37C: sra         $t6, $at, 2
    ctx->r14 = S32(SIGNED(ctx->r1) >> 2);
L_8008E380:
    // 0x8008E380: bgez        $t2, L_8008E394
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8008E384: andi        $t1, $t2, 0x7
        ctx->r9 = ctx->r10 & 0X7;
            goto L_8008E394;
    }
    // 0x8008E384: andi        $t1, $t2, 0x7
    ctx->r9 = ctx->r10 & 0X7;
    // 0x8008E388: beq         $t1, $zero, L_8008E394
    if (ctx->r9 == 0) {
        // 0x8008E38C: nop
    
            goto L_8008E394;
    }
    // 0x8008E38C: nop

    // 0x8008E390: addiu       $t1, $t1, -0x8
    ctx->r9 = ADD32(ctx->r9, -0X8);
L_8008E394:
    // 0x8008E394: sll         $t5, $t1, 5
    ctx->r13 = S32(ctx->r9 << 5);
    // 0x8008E398: addu        $t7, $t6, $t5
    ctx->r15 = ADD32(ctx->r14, ctx->r13);
    // 0x8008E39C: sw          $t7, 0x128($sp)
    MEM_W(0X128, ctx->r29) = ctx->r15;
    // 0x8008E3A0: addu        $t8, $t9, $t7
    ctx->r24 = ADD32(ctx->r25, ctx->r15);
    // 0x8008E3A4: lbu         $t0, 0x101($t8)
    ctx->r8 = MEM_BU(ctx->r24, 0X101);
    // 0x8008E3A8: bgez        $t3, L_8008E3BC
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8008E3AC: andi        $t4, $t3, 0x7
        ctx->r12 = ctx->r11 & 0X7;
            goto L_8008E3BC;
    }
    // 0x8008E3AC: andi        $t4, $t3, 0x7
    ctx->r12 = ctx->r11 & 0X7;
    // 0x8008E3B0: beq         $t4, $zero, L_8008E3BC
    if (ctx->r12 == 0) {
        // 0x8008E3B4: nop
    
            goto L_8008E3BC;
    }
    // 0x8008E3B4: nop

    // 0x8008E3B8: addiu       $t4, $t4, -0x8
    ctx->r12 = ADD32(ctx->r12, -0X8);
L_8008E3BC:
    // 0x8008E3BC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8008E3C0: sllv        $t1, $t2, $t4
    ctx->r9 = S32(ctx->r10 << (ctx->r12 & 31));
    // 0x8008E3C4: or          $t6, $t0, $t1
    ctx->r14 = ctx->r8 | ctx->r9;
    // 0x8008E3C8: sb          $t6, 0x101($t8)
    MEM_B(0X101, ctx->r24) = ctx->r14;
L_8008E3CC:
    // 0x8008E3CC: lw          $t5, 0x12C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X12C);
    // 0x8008E3D0: addiu       $t9, $t5, 0x1
    ctx->r25 = ADD32(ctx->r13, 0X1);
    // 0x8008E3D4: slti        $at, $t9, 0x80
    ctx->r1 = SIGNED(ctx->r25) < 0X80 ? 1 : 0;
    // 0x8008E3D8: bne         $at, $zero, L_8008E324
    if (ctx->r1 != 0) {
        // 0x8008E3DC: sw          $t9, 0x12C($sp)
        MEM_W(0X12C, ctx->r29) = ctx->r25;
            goto L_8008E324;
    }
    // 0x8008E3DC: sw          $t9, 0x12C($sp)
    MEM_W(0X12C, ctx->r29) = ctx->r25;
L_8008E3E0:
    // 0x8008E3E0: lbu         $t7, 0x123($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X123);
    // 0x8008E3E4: lw          $t4, 0x130($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X130);
    // 0x8008E3E8: addiu       $t3, $t7, 0x1
    ctx->r11 = ADD32(ctx->r15, 0X1);
    // 0x8008E3EC: sb          $t3, 0x123($sp)
    MEM_B(0X123, ctx->r29) = ctx->r11;
    // 0x8008E3F0: lbu         $t0, 0x64($t4)
    ctx->r8 = MEM_BU(ctx->r12, 0X64);
    // 0x8008E3F4: andi        $t2, $t3, 0xFF
    ctx->r10 = ctx->r11 & 0XFF;
    // 0x8008E3F8: slt         $at, $t2, $t0
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8008E3FC: bne         $at, $zero, L_8008E2BC
    if (ctx->r1 != 0) {
        // 0x8008E400: nop
    
            goto L_8008E2BC;
    }
    // 0x8008E400: nop

L_8008E404:
    // 0x8008E404: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8008E408:
    // 0x8008E408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E40C: addiu       $sp, $sp, 0x130
    ctx->r29 = ADD32(ctx->r29, 0X130);
    // 0x8008E410: jr          $ra
    // 0x8008E414: nop

    return;
    // 0x8008E414: nop

;}
RECOMP_FUNC void func_8008E418(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E418: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8008E41C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8008E420: lbu         $t8, 0x34($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X34);
    // 0x8008E424: lbu         $t6, 0x35($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X35);
    // 0x8008E428: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8008E42C: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8008E430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E434: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8008E438: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8008E43C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8008E440: bgez        $t6, L_8008E450
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8008E444: sra         $t7, $t6, 2
        ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
            goto L_8008E450;
    }
    // 0x8008E444: sra         $t7, $t6, 2
    ctx->r15 = S32(SIGNED(ctx->r14) >> 2);
    // 0x8008E448: addiu       $at, $t6, 0x3
    ctx->r1 = ADD32(ctx->r14, 0X3);
    // 0x8008E44C: sra         $t7, $at, 2
    ctx->r15 = S32(SIGNED(ctx->r1) >> 2);
L_8008E450:
    // 0x8008E450: bgez        $t8, L_8008E464
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8008E454: andi        $t9, $t8, 0x7
        ctx->r25 = ctx->r24 & 0X7;
            goto L_8008E464;
    }
    // 0x8008E454: andi        $t9, $t8, 0x7
    ctx->r25 = ctx->r24 & 0X7;
    // 0x8008E458: beq         $t9, $zero, L_8008E464
    if (ctx->r25 == 0) {
        // 0x8008E45C: nop
    
            goto L_8008E464;
    }
    // 0x8008E45C: nop

    // 0x8008E460: addiu       $t9, $t9, -0x8
    ctx->r25 = ADD32(ctx->r25, -0X8);
L_8008E464:
    // 0x8008E464: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x8008E468: addu        $t1, $t7, $t0
    ctx->r9 = ADD32(ctx->r15, ctx->r8);
    // 0x8008E46C: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
    // 0x8008E470: sb          $zero, 0x23($sp)
    MEM_B(0X23, ctx->r29) = 0;
    // 0x8008E474: lbu         $t3, 0x64($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X64);
    // 0x8008E478: blez        $t3, L_8008E5EC
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8008E47C: nop
    
            goto L_8008E5EC;
    }
    // 0x8008E47C: nop

L_8008E480:
    // 0x8008E480: lbu         $t4, 0x23($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X23);
    // 0x8008E484: blez        $t4, L_8008E498
    if (SIGNED(ctx->r12) <= 0) {
        // 0x8008E488: nop
    
            goto L_8008E498;
    }
    // 0x8008E488: nop

    // 0x8008E48C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8008E490: b           L_8008E4A4
    // 0x8008E494: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
        goto L_8008E4A4;
    // 0x8008E494: sw          $t5, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r13;
L_8008E498:
    // 0x8008E498: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8008E49C: lw          $t8, 0x60($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X60);
    // 0x8008E4A0: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_8008E4A4:
    // 0x8008E4A4: lbu         $t9, 0x23($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X23);
    // 0x8008E4A8: lbu         $t7, 0x34($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X34);
    // 0x8008E4AC: beq         $t9, $t7, L_8008E4EC
    if (ctx->r25 == ctx->r15) {
        // 0x8008E4B0: nop
    
            goto L_8008E4EC;
    }
    // 0x8008E4B0: nop

    // 0x8008E4B4: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8008E4B8: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8008E4BC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8008E4C0: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8008E4C4: lbu         $t3, 0x101($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X101);
    // 0x8008E4C8: bgez        $t9, L_8008E4DC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8008E4CC: andi        $t4, $t9, 0x7
        ctx->r12 = ctx->r25 & 0X7;
            goto L_8008E4DC;
    }
    // 0x8008E4CC: andi        $t4, $t9, 0x7
    ctx->r12 = ctx->r25 & 0X7;
    // 0x8008E4D0: beq         $t4, $zero, L_8008E4DC
    if (ctx->r12 == 0) {
        // 0x8008E4D4: nop
    
            goto L_8008E4DC;
    }
    // 0x8008E4D4: nop

    // 0x8008E4D8: addiu       $t4, $t4, -0x8
    ctx->r12 = ADD32(ctx->r12, -0X8);
L_8008E4DC:
    // 0x8008E4DC: sllv        $t6, $t5, $t4
    ctx->r14 = S32(ctx->r13 << (ctx->r12 & 31));
    // 0x8008E4E0: and         $t8, $t3, $t6
    ctx->r24 = ctx->r11 & ctx->r14;
    // 0x8008E4E4: beq         $t8, $zero, L_8008E5C8
    if (ctx->r24 == 0) {
        // 0x8008E4E8: nop
    
            goto L_8008E5C8;
    }
    // 0x8008E4E8: nop

L_8008E4EC:
    // 0x8008E4EC: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8008E4F0: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
    // 0x8008E4F4: lbu         $t1, 0x100($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X100);
    // 0x8008E4F8: beq         $t7, $t1, L_8008E540
    if (ctx->r15 == ctx->r9) {
        // 0x8008E4FC: nop
    
            goto L_8008E540;
    }
    // 0x8008E4FC: nop

    // 0x8008E500: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8008E504: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8008E508: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8008E50C: jal         0x8008D47C
    // 0x8008E510: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    func_8008D47C(rdram, ctx);
        goto after_0;
    // 0x8008E510: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    after_0:
    // 0x8008E514: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8008E518: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8008E51C: beq         $t2, $zero, L_8008E534
    if (ctx->r10 == 0) {
        // 0x8008E520: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8008E534;
    }
    // 0x8008E520: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8008E524: beq         $t2, $at, L_8008E534
    if (ctx->r10 == ctx->r1) {
        // 0x8008E528: nop
    
            goto L_8008E534;
    }
    // 0x8008E528: nop

    // 0x8008E52C: b           L_8008E5F0
    // 0x8008E530: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_8008E5F0;
    // 0x8008E530: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_8008E534:
    // 0x8008E534: lbu         $t9, 0x23($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X23);
    // 0x8008E538: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8008E53C: sb          $t9, 0x100($t5)
    MEM_B(0X100, ctx->r13) = ctx->r25;
L_8008E540:
    // 0x8008E540: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8008E544: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8008E548: slti        $at, $t3, 0x2
    ctx->r1 = SIGNED(ctx->r11) < 0X2 ? 1 : 0;
    // 0x8008E54C: beq         $at, $zero, L_8008E5B0
    if (ctx->r1 == 0) {
        // 0x8008E550: sw          $t4, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r12;
            goto L_8008E5B0;
    }
    // 0x8008E550: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x8008E554: slti        $at, $t4, 0x80
    ctx->r1 = SIGNED(ctx->r12) < 0X80 ? 1 : 0;
    // 0x8008E558: beq         $at, $zero, L_8008E5B0
    if (ctx->r1 == 0) {
        // 0x8008E55C: nop
    
            goto L_8008E5B0;
    }
    // 0x8008E55C: nop

L_8008E560:
    // 0x8008E560: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8008E564: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8008E568: lhu         $t2, 0x34($sp)
    ctx->r10 = MEM_HU(ctx->r29, 0X34);
    // 0x8008E56C: sll         $t1, $t8, 1
    ctx->r9 = S32(ctx->r24 << 1);
    // 0x8008E570: addu        $t0, $t6, $t1
    ctx->r8 = ADD32(ctx->r14, ctx->r9);
    // 0x8008E574: lhu         $t7, 0x0($t0)
    ctx->r15 = MEM_HU(ctx->r8, 0X0);
    // 0x8008E578: bne         $t7, $t2, L_8008E58C
    if (ctx->r15 != ctx->r10) {
        // 0x8008E57C: nop
    
            goto L_8008E58C;
    }
    // 0x8008E57C: nop

    // 0x8008E580: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8008E584: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x8008E588: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
L_8008E58C:
    // 0x8008E58C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8008E590: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8008E594: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8008E598: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x8008E59C: beq         $at, $zero, L_8008E5B0
    if (ctx->r1 == 0) {
        // 0x8008E5A0: sw          $t4, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r12;
            goto L_8008E5B0;
    }
    // 0x8008E5A0: sw          $t4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r12;
    // 0x8008E5A4: slti        $at, $t4, 0x80
    ctx->r1 = SIGNED(ctx->r12) < 0X80 ? 1 : 0;
    // 0x8008E5A8: bne         $at, $zero, L_8008E560
    if (ctx->r1 != 0) {
        // 0x8008E5AC: nop
    
            goto L_8008E560;
    }
    // 0x8008E5AC: nop

L_8008E5B0:
    // 0x8008E5B0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8008E5B4: slti        $at, $t6, 0x2
    ctx->r1 = SIGNED(ctx->r14) < 0X2 ? 1 : 0;
    // 0x8008E5B8: bne         $at, $zero, L_8008E5C8
    if (ctx->r1 != 0) {
        // 0x8008E5BC: nop
    
            goto L_8008E5C8;
    }
    // 0x8008E5BC: nop

    // 0x8008E5C0: b           L_8008E5F0
    // 0x8008E5C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8008E5F0;
    // 0x8008E5C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8008E5C8:
    // 0x8008E5C8: lbu         $t1, 0x23($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X23);
    // 0x8008E5CC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8008E5D0: addiu       $t0, $t1, 0x1
    ctx->r8 = ADD32(ctx->r9, 0X1);
    // 0x8008E5D4: sb          $t0, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r8;
    // 0x8008E5D8: lbu         $t9, 0x64($t2)
    ctx->r25 = MEM_BU(ctx->r10, 0X64);
    // 0x8008E5DC: andi        $t7, $t0, 0xFF
    ctx->r15 = ctx->r8 & 0XFF;
    // 0x8008E5E0: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8008E5E4: bne         $at, $zero, L_8008E480
    if (ctx->r1 != 0) {
        // 0x8008E5E8: nop
    
            goto L_8008E480;
    }
    // 0x8008E5E8: nop

L_8008E5EC:
    // 0x8008E5EC: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_8008E5F0:
    // 0x8008E5F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E5F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8008E5F8: jr          $ra
    // 0x8008E5FC: nop

    return;
    // 0x8008E5FC: nop

;}
