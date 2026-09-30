#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_8026A0F0_func_8026A964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A964: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026A968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026A96C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026A970: jal         0x80035770
    // 0x8026A974: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x8026A974: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8026A978: jal         0x8026CD78
    // 0x8026A97C: nop

    ovl_8026A0F0_func_8026CD78(rdram, ctx);
        goto after_1;
    // 0x8026A97C: nop

    after_1:
    // 0x8026A980: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A984: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026A988: jr          $ra
    // 0x8026A98C: nop

    return;
    // 0x8026A98C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026A990(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A990: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026A994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026A998: jal         0x8026A964
    // 0x8026A99C: nop

    ovl_8026A0F0_func_8026A964(rdram, ctx);
        goto after_0;
    // 0x8026A99C: nop

    after_0:
    // 0x8026A9A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A9A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026A9A8: jr          $ra
    // 0x8026A9AC: nop

    return;
    // 0x8026A9AC: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026A9B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A9B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026A9B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026A9B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026A9BC: jal         0x80035770
    // 0x8026A9C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x8026A9C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026A9C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026A9C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8026A9CC: lb          $t6, 0x42($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X42);
    // 0x8026A9D0: sb          $v0, 0x45($a0)
    MEM_B(0X45, ctx->r4) = ctx->r2;
    // 0x8026A9D4: subu        $t7, $v0, $t6
    ctx->r15 = SUB32(ctx->r2, ctx->r14);
    // 0x8026A9D8: sb          $t7, 0x42($a0)
    MEM_B(0X42, ctx->r4) = ctx->r15;
    // 0x8026A9DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026A9E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026A9E4: jr          $ra
    // 0x8026A9E8: nop

    return;
    // 0x8026A9E8: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026A9EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026A9EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026A9F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026A9F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026A9F8: jal         0x80035770
    // 0x8026A9FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x8026A9FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8026AA00: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8026AA04: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8026AA08: lb          $t6, 0x41($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X41);
    // 0x8026AA0C: nop

    // 0x8026AA10: subu        $t8, $t7, $t6
    ctx->r24 = SUB32(ctx->r15, ctx->r14);
    // 0x8026AA14: sb          $t8, 0x41($v0)
    MEM_B(0X41, ctx->r2) = ctx->r24;
    // 0x8026AA18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026AA1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026AA20: jr          $ra
    // 0x8026AA24: nop

    return;
    // 0x8026AA24: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026AA28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AA28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026AA2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026AA30: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026AA34: lb          $t6, 0x38($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X38);
    // 0x8026AA38: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8026AA3C: bne         $t6, $at, L_8026AAAC
    if (ctx->r14 != ctx->r1) {
        // 0x8026AA40: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026AAAC;
    }
    // 0x8026AA40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026AA44: lb          $t7, 0x44($a0)
    ctx->r15 = MEM_B(ctx->r4, 0X44);
    // 0x8026AA48: nop

    // 0x8026AA4C: bne         $t7, $zero, L_8026AAAC
    if (ctx->r15 != 0) {
        // 0x8026AA50: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026AAAC;
    }
    // 0x8026AA50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026AA54: lb          $t8, 0x3A($a0)
    ctx->r24 = MEM_B(ctx->r4, 0X3A);
    // 0x8026AA58: nop

    // 0x8026AA5C: addu        $t9, $a0, $t8
    ctx->r25 = ADD32(ctx->r4, ctx->r24);
    // 0x8026AA60: lb          $t0, 0x48($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X48);
    // 0x8026AA64: nop

    // 0x8026AA68: beq         $t0, $zero, L_8026AAA0
    if (ctx->r8 == 0) {
        // 0x8026AA6C: nop
    
            goto L_8026AAA0;
    }
    // 0x8026AA6C: nop

    // 0x8026AA70: jal         0x80035770
    // 0x8026AA74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x8026AA74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026AA78: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026AA7C: nop

    // 0x8026AA80: lb          $t1, 0x3A($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X3A);
    // 0x8026AA84: nop

    // 0x8026AA88: addu        $v0, $a0, $t1
    ctx->r2 = ADD32(ctx->r4, ctx->r9);
    // 0x8026AA8C: lb          $v1, 0x48($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X48);
    // 0x8026AA90: sb          $zero, 0x48($v0)
    MEM_B(0X48, ctx->r2) = 0;
    // 0x8026AA94: addu        $t2, $a0, $v1
    ctx->r10 = ADD32(ctx->r4, ctx->r3);
    // 0x8026AA98: b           L_8026AAA8
    // 0x8026AA9C: sb          $zero, 0x54($t2)
    MEM_B(0X54, ctx->r10) = 0;
        goto L_8026AAA8;
    // 0x8026AA9C: sb          $zero, 0x54($t2)
    MEM_B(0X54, ctx->r10) = 0;
L_8026AAA0:
    // 0x8026AAA0: jal         0x800357AC
    // 0x8026AAA4: nop

    func_800357AC(rdram, ctx);
        goto after_1;
    // 0x8026AAA4: nop

    after_1:
L_8026AAA8:
    // 0x8026AAA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026AAAC:
    // 0x8026AAAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026AAB0: jr          $ra
    // 0x8026AAB4: nop

    return;
    // 0x8026AAB4: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026AA70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AA70: jal         0x80035770
    // 0x8026AA74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80035770(rdram, ctx);
        goto after_0;
    // 0x8026AA74: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8026AA78: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026AA7C: nop

    // 0x8026AA80: lb          $t1, 0x3A($a0)
    ctx->r9 = MEM_B(ctx->r4, 0X3A);
    // 0x8026AA84: nop

    // 0x8026AA88: addu        $v0, $a0, $t1
    ctx->r2 = ADD32(ctx->r4, ctx->r9);
    // 0x8026AA8C: lb          $v1, 0x48($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X48);
    // 0x8026AA90: sb          $zero, 0x48($v0)
    MEM_B(0X48, ctx->r2) = 0;
    // 0x8026AA94: addu        $t2, $a0, $v1
    ctx->r10 = ADD32(ctx->r4, ctx->r3);
    // 0x8026AA98: b           L_8026AAA8
    // 0x8026AA9C: sb          $zero, 0x54($t2)
    MEM_B(0X54, ctx->r10) = 0;
        goto L_8026AAA8;
    // 0x8026AA9C: sb          $zero, 0x54($t2)
    MEM_B(0X54, ctx->r10) = 0;
    // 0x8026AAA0: jal         0x800357AC
    // 0x8026AAA4: nop

    func_800357AC(rdram, ctx);
        goto after_1;
    // 0x8026AAA4: nop

    after_1:
L_8026AAA8:
    // 0x8026AAA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026AAAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026AAB0: jr          $ra
    // 0x8026AAB4: nop

    return;
    // 0x8026AAB4: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026AA98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AA98: b           L_8026AAA8
    // 0x8026AA9C: sb          $zero, 0x54($t2)
    MEM_B(0X54, ctx->r10) = 0;
        goto L_8026AAA8;
    // 0x8026AA9C: sb          $zero, 0x54($t2)
    MEM_B(0X54, ctx->r10) = 0;
    // 0x8026AAA0: jal         0x800357AC
    // 0x8026AAA4: nop

    func_800357AC(rdram, ctx);
        goto after_0;
    // 0x8026AAA4: nop

    after_0:
L_8026AAA8:
    // 0x8026AAA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026AAAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026AAB0: jr          $ra
    // 0x8026AAB4: nop

    return;
    // 0x8026AAB4: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026AAB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AAB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026AABC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026AAC0: jal         0x8026A964
    // 0x8026AAC4: nop

    ovl_8026A0F0_func_8026A964(rdram, ctx);
        goto after_0;
    // 0x8026AAC4: nop

    after_0:
    // 0x8026AAC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026AACC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026AAD0: jr          $ra
    // 0x8026AAD4: nop

    return;
    // 0x8026AAD4: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026AACC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AACC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026AAD0: jr          $ra
    // 0x8026AAD4: nop

    return;
    // 0x8026AAD4: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026AAD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AAD8: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8026AADC: jr          $ra
    // 0x8026AAE0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x8026AAE0: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026AAE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AAE4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8026AAE8: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x8026AAEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026AAF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026AAF4: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8026AAF8: jal         0x8006F5B8
    // 0x8026AAFC: nop

    func_8006F5B8(rdram, ctx);
        goto after_0;
    // 0x8026AAFC: nop

    after_0:
    // 0x8026AB00: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8026AB04: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x8026AB08: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8026AB0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8026AB10: lb          $t6, 0x2E($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X2E);
    // 0x8026AB14: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8026AB18: subu        $t7, $a0, $t6
    ctx->r15 = SUB32(ctx->r4, ctx->r14);
    // 0x8026AB1C: sb          $t7, 0x40($v0)
    MEM_B(0X40, ctx->r2) = ctx->r15;
    // 0x8026AB20: lb          $t8, -0x326C($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X326C);
    // 0x8026AB24: lw          $t0, 0x0($v1)
    ctx->r8 = MEM_W(ctx->r3, 0X0);
    // 0x8026AB28: subu        $t9, $a0, $t8
    ctx->r25 = SUB32(ctx->r4, ctx->r24);
    // 0x8026AB2C: sb          $t9, 0x43($t0)
    MEM_B(0X43, ctx->r8) = ctx->r25;
    // 0x8026AB30: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x8026AB34: nop

    // 0x8026AB38: sb          $zero, 0x44($t1)
    MEM_B(0X44, ctx->r9) = 0;
    // 0x8026AB3C: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x8026AB40: nop

    // 0x8026AB44: sb          $zero, 0x45($t2)
    MEM_B(0X45, ctx->r10) = 0;
    // 0x8026AB48: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x8026AB4C: nop

    // 0x8026AB50: sb          $a0, 0x3A($t3)
    MEM_B(0X3A, ctx->r11) = ctx->r4;
    // 0x8026AB54: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x8026AB58: jal         0x8026AB70
    // 0x8026AB5C: sb          $a0, 0x3B($t4)
    MEM_B(0X3B, ctx->r12) = ctx->r4;
    ovl_8026A0F0_func_8026AB70(rdram, ctx);
        goto after_1;
    // 0x8026AB5C: sb          $a0, 0x3B($t4)
    MEM_B(0X3B, ctx->r12) = ctx->r4;
    after_1:
    // 0x8026AB60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026AB64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026AB68: jr          $ra
    // 0x8026AB6C: nop

    return;
    // 0x8026AB6C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026AB2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AB2C: sb          $t9, 0x43($t0)
    MEM_B(0X43, ctx->r8) = ctx->r25;
    // 0x8026AB30: lw          $t1, 0x0($v1)
    ctx->r9 = MEM_W(ctx->r3, 0X0);
    // 0x8026AB34: nop

    // 0x8026AB38: sb          $zero, 0x44($t1)
    MEM_B(0X44, ctx->r9) = 0;
    // 0x8026AB3C: lw          $t2, 0x0($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X0);
    // 0x8026AB40: nop

    // 0x8026AB44: sb          $zero, 0x45($t2)
    MEM_B(0X45, ctx->r10) = 0;
    // 0x8026AB48: lw          $t3, 0x0($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X0);
    // 0x8026AB4C: nop

    // 0x8026AB50: sb          $a0, 0x3A($t3)
    MEM_B(0X3A, ctx->r11) = ctx->r4;
    // 0x8026AB54: lw          $t4, 0x0($v1)
    ctx->r12 = MEM_W(ctx->r3, 0X0);
    // 0x8026AB58: jal         0x8026AB70
    // 0x8026AB5C: sb          $a0, 0x3B($t4)
    MEM_B(0X3B, ctx->r12) = ctx->r4;
    ovl_8026A0F0_func_8026AB70(rdram, ctx);
        goto after_0;
    // 0x8026AB5C: sb          $a0, 0x3B($t4)
    MEM_B(0X3B, ctx->r12) = ctx->r4;
    after_0:
    // 0x8026AB60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026AB64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026AB68: jr          $ra
    // 0x8026AB6C: nop

    return;
    // 0x8026AB6C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026AB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AB68: jr          $ra
    // 0x8026AB6C: nop

    return;
    // 0x8026AB6C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026AB70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AB70: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8026AB74: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026AB78: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8026AB7C: addiu       $v1, $v1, -0x2CF0
    ctx->r3 = ADD32(ctx->r3, -0X2CF0);
    // 0x8026AB80: addiu       $a0, $a0, -0x32B0
    ctx->r4 = ADD32(ctx->r4, -0X32B0);
    // 0x8026AB84: addiu       $a1, $a1, 0x1CF0
    ctx->r5 = ADD32(ctx->r5, 0X1CF0);
    // 0x8026AB88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8026AB8C:
    // 0x8026AB8C: lb          $t6, 0x44($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X44);
    // 0x8026AB90: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x8026AB94: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8026AB98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026AB9C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026ABA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026ABA4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8026ABA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026ABAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026ABB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026ABB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026ABB8: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x8026ABBC: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x8026ABC0: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x8026ABC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8026ABC8: lbu         $t0, 0x86F($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X86F);
    // 0x8026ABCC: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x8026ABD0: slti        $at, $t3, 0xB
    ctx->r1 = SIGNED(ctx->r11) < 0XB ? 1 : 0;
    // 0x8026ABD4: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x8026ABD8: bne         $at, $zero, L_8026AB8C
    if (ctx->r1 != 0) {
        // 0x8026ABDC: sb          $t0, 0x48($t2)
        MEM_B(0X48, ctx->r10) = ctx->r8;
            goto L_8026AB8C;
    }
    // 0x8026ABDC: sb          $t0, 0x48($t2)
    MEM_B(0X48, ctx->r10) = ctx->r8;
    // 0x8026ABE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8026ABE4:
    // 0x8026ABE4: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x8026ABE8: nop

    // 0x8026ABEC: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x8026ABF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8026ABF4: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x8026ABF8: slti        $at, $t6, 0xB
    ctx->r1 = SIGNED(ctx->r14) < 0XB ? 1 : 0;
    // 0x8026ABFC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8026AC00: bne         $at, $zero, L_8026ABE4
    if (ctx->r1 != 0) {
        // 0x8026AC04: sb          $zero, 0x54($t5)
        MEM_B(0X54, ctx->r13) = 0;
            goto L_8026ABE4;
    }
    // 0x8026AC04: sb          $zero, 0x54($t5)
    MEM_B(0X54, ctx->r13) = 0;
    // 0x8026AC08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8026AC0C:
    // 0x8026AC0C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8026AC10: nop

    // 0x8026AC14: addu        $t7, $v1, $v0
    ctx->r15 = ADD32(ctx->r3, ctx->r2);
    // 0x8026AC18: lbu         $a0, 0x48($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X48);
    // 0x8026AC1C: nop

    // 0x8026AC20: beq         $a0, $zero, L_8026AC2C
    if (ctx->r4 == 0) {
        // 0x8026AC24: addu        $t8, $v1, $a0
        ctx->r24 = ADD32(ctx->r3, ctx->r4);
            goto L_8026AC2C;
    }
    // 0x8026AC24: addu        $t8, $v1, $a0
    ctx->r24 = ADD32(ctx->r3, ctx->r4);
    // 0x8026AC28: sb          $v0, 0x54($t8)
    MEM_B(0X54, ctx->r24) = ctx->r2;
L_8026AC2C:
    // 0x8026AC2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8026AC30: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x8026AC34: slti        $at, $t9, 0xB
    ctx->r1 = SIGNED(ctx->r25) < 0XB ? 1 : 0;
    // 0x8026AC38: bne         $at, $zero, L_8026AC0C
    if (ctx->r1 != 0) {
        // 0x8026AC3C: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_8026AC0C;
    }
    // 0x8026AC3C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x8026AC40: jr          $ra
    // 0x8026AC44: nop

    return;
    // 0x8026AC44: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026AB8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8026AB8C:
    // 0x8026AB8C: lb          $t6, 0x44($a0)
    ctx->r14 = MEM_B(ctx->r4, 0X44);
    // 0x8026AB90: lw          $t1, 0x0($a1)
    ctx->r9 = MEM_W(ctx->r5, 0X0);
    // 0x8026AB94: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8026AB98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026AB9C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026ABA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026ABA4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8026ABA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026ABAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026ABB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026ABB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026ABB8: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x8026ABBC: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x8026ABC0: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x8026ABC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8026ABC8: lbu         $t0, 0x86F($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X86F);
    // 0x8026ABCC: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x8026ABD0: slti        $at, $t3, 0xB
    ctx->r1 = SIGNED(ctx->r11) < 0XB ? 1 : 0;
    // 0x8026ABD4: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x8026ABD8: bne         $at, $zero, L_8026AB8C
    if (ctx->r1 != 0) {
        // 0x8026ABDC: sb          $t0, 0x48($t2)
        MEM_B(0X48, ctx->r10) = ctx->r8;
            goto L_8026AB8C;
    }
    // 0x8026ABDC: sb          $t0, 0x48($t2)
    MEM_B(0X48, ctx->r10) = ctx->r8;
    // 0x8026ABE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8026ABE4:
    // 0x8026ABE4: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x8026ABE8: nop

    // 0x8026ABEC: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x8026ABF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8026ABF4: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x8026ABF8: slti        $at, $t6, 0xB
    ctx->r1 = SIGNED(ctx->r14) < 0XB ? 1 : 0;
    // 0x8026ABFC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8026AC00: bne         $at, $zero, L_8026ABE4
    if (ctx->r1 != 0) {
        // 0x8026AC04: sb          $zero, 0x54($t5)
        MEM_B(0X54, ctx->r13) = 0;
            goto L_8026ABE4;
    }
    // 0x8026AC04: sb          $zero, 0x54($t5)
    MEM_B(0X54, ctx->r13) = 0;
    // 0x8026AC08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8026AC0C:
    // 0x8026AC0C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8026AC10: nop

    // 0x8026AC14: addu        $t7, $v1, $v0
    ctx->r15 = ADD32(ctx->r3, ctx->r2);
    // 0x8026AC18: lbu         $a0, 0x48($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X48);
    // 0x8026AC1C: nop

    // 0x8026AC20: beq         $a0, $zero, L_8026AC2C
    if (ctx->r4 == 0) {
        // 0x8026AC24: addu        $t8, $v1, $a0
        ctx->r24 = ADD32(ctx->r3, ctx->r4);
            goto L_8026AC2C;
    }
    // 0x8026AC24: addu        $t8, $v1, $a0
    ctx->r24 = ADD32(ctx->r3, ctx->r4);
    // 0x8026AC28: sb          $v0, 0x54($t8)
    MEM_B(0X54, ctx->r24) = ctx->r2;
L_8026AC2C:
    // 0x8026AC2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8026AC30: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x8026AC34: slti        $at, $t9, 0xB
    ctx->r1 = SIGNED(ctx->r25) < 0XB ? 1 : 0;
    // 0x8026AC38: bne         $at, $zero, L_8026AC0C
    if (ctx->r1 != 0) {
        // 0x8026AC3C: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_8026AC0C;
    }
    // 0x8026AC3C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x8026AC40: jr          $ra
    // 0x8026AC44: nop

    return;
    // 0x8026AC44: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026AB9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8026AB8C:
    // 0x8026AB9C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026ABA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026ABA4: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8026ABA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026ABAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026ABB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026ABB4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026ABB8: addu        $t8, $v1, $t7
    ctx->r24 = ADD32(ctx->r3, ctx->r15);
    // 0x8026ABBC: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x8026ABC0: addu        $t2, $t1, $v0
    ctx->r10 = ADD32(ctx->r9, ctx->r2);
    // 0x8026ABC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8026ABC8: lbu         $t0, 0x86F($t9)
    ctx->r8 = MEM_BU(ctx->r25, 0X86F);
    // 0x8026ABCC: andi        $t3, $v0, 0xFF
    ctx->r11 = ctx->r2 & 0XFF;
    // 0x8026ABD0: slti        $at, $t3, 0xB
    ctx->r1 = SIGNED(ctx->r11) < 0XB ? 1 : 0;
    // 0x8026ABD4: or          $v0, $t3, $zero
    ctx->r2 = ctx->r11 | 0;
    // 0x8026ABD8: bne         $at, $zero, L_8026AB8C
    if (ctx->r1 != 0) {
            // 0x8026ABDC: sb          $t0, 0x48($t2)
    MEM_B(0X48, ctx->r10) = ctx->r8;
    ovl_8026A0F0_func_8026AB8C(rdram, ctx);
    return;
    }
    // 0x8026ABDC: sb          $t0, 0x48($t2)
    MEM_B(0X48, ctx->r10) = ctx->r8;
    // 0x8026ABE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8026ABE4:
    // 0x8026ABE4: lw          $t4, 0x0($a1)
    ctx->r12 = MEM_W(ctx->r5, 0X0);
    // 0x8026ABE8: nop

    // 0x8026ABEC: addu        $t5, $t4, $v0
    ctx->r13 = ADD32(ctx->r12, ctx->r2);
    // 0x8026ABF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8026ABF4: andi        $t6, $v0, 0xFF
    ctx->r14 = ctx->r2 & 0XFF;
    // 0x8026ABF8: slti        $at, $t6, 0xB
    ctx->r1 = SIGNED(ctx->r14) < 0XB ? 1 : 0;
    // 0x8026ABFC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8026AC00: bne         $at, $zero, L_8026ABE4
    if (ctx->r1 != 0) {
        // 0x8026AC04: sb          $zero, 0x54($t5)
        MEM_B(0X54, ctx->r13) = 0;
            goto L_8026ABE4;
    }
    // 0x8026AC04: sb          $zero, 0x54($t5)
    MEM_B(0X54, ctx->r13) = 0;
    // 0x8026AC08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8026AC0C:
    // 0x8026AC0C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8026AC10: nop

    // 0x8026AC14: addu        $t7, $v1, $v0
    ctx->r15 = ADD32(ctx->r3, ctx->r2);
    // 0x8026AC18: lbu         $a0, 0x48($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X48);
    // 0x8026AC1C: nop

    // 0x8026AC20: beq         $a0, $zero, L_8026AC2C
    if (ctx->r4 == 0) {
        // 0x8026AC24: addu        $t8, $v1, $a0
        ctx->r24 = ADD32(ctx->r3, ctx->r4);
            goto L_8026AC2C;
    }
    // 0x8026AC24: addu        $t8, $v1, $a0
    ctx->r24 = ADD32(ctx->r3, ctx->r4);
    // 0x8026AC28: sb          $v0, 0x54($t8)
    MEM_B(0X54, ctx->r24) = ctx->r2;
L_8026AC2C:
    // 0x8026AC2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8026AC30: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x8026AC34: slti        $at, $t9, 0xB
    ctx->r1 = SIGNED(ctx->r25) < 0XB ? 1 : 0;
    // 0x8026AC38: bne         $at, $zero, L_8026AC0C
    if (ctx->r1 != 0) {
        // 0x8026AC3C: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_8026AC0C;
    }
    // 0x8026AC3C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x8026AC40: jr          $ra
    // 0x8026AC44: nop

    return;
    // 0x8026AC44: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026AC0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8026AC0C:
    // 0x8026AC0C: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x8026AC10: nop

    // 0x8026AC14: addu        $t7, $v1, $v0
    ctx->r15 = ADD32(ctx->r3, ctx->r2);
    // 0x8026AC18: lbu         $a0, 0x48($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X48);
    // 0x8026AC1C: nop

    // 0x8026AC20: beq         $a0, $zero, L_8026AC2C
    if (ctx->r4 == 0) {
        // 0x8026AC24: addu        $t8, $v1, $a0
        ctx->r24 = ADD32(ctx->r3, ctx->r4);
            goto L_8026AC2C;
    }
    // 0x8026AC24: addu        $t8, $v1, $a0
    ctx->r24 = ADD32(ctx->r3, ctx->r4);
    // 0x8026AC28: sb          $v0, 0x54($t8)
    MEM_B(0X54, ctx->r24) = ctx->r2;
L_8026AC2C:
    // 0x8026AC2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8026AC30: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x8026AC34: slti        $at, $t9, 0xB
    ctx->r1 = SIGNED(ctx->r25) < 0XB ? 1 : 0;
    // 0x8026AC38: bne         $at, $zero, L_8026AC0C
    if (ctx->r1 != 0) {
        // 0x8026AC3C: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_8026AC0C;
    }
    // 0x8026AC3C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x8026AC40: jr          $ra
    // 0x8026AC44: nop

    return;
    // 0x8026AC44: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026AC10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8026AC0C:
    // 0x8026AC10: nop

    // 0x8026AC14: addu        $t7, $v1, $v0
    ctx->r15 = ADD32(ctx->r3, ctx->r2);
    // 0x8026AC18: lbu         $a0, 0x48($t7)
    ctx->r4 = MEM_BU(ctx->r15, 0X48);
    // 0x8026AC1C: nop

    // 0x8026AC20: beq         $a0, $zero, L_8026AC2C
    if (ctx->r4 == 0) {
        // 0x8026AC24: addu        $t8, $v1, $a0
        ctx->r24 = ADD32(ctx->r3, ctx->r4);
            goto L_8026AC2C;
    }
    // 0x8026AC24: addu        $t8, $v1, $a0
    ctx->r24 = ADD32(ctx->r3, ctx->r4);
    // 0x8026AC28: sb          $v0, 0x54($t8)
    MEM_B(0X54, ctx->r24) = ctx->r2;
L_8026AC2C:
    // 0x8026AC2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8026AC30: andi        $t9, $v0, 0xFF
    ctx->r25 = ctx->r2 & 0XFF;
    // 0x8026AC34: slti        $at, $t9, 0xB
    ctx->r1 = SIGNED(ctx->r25) < 0XB ? 1 : 0;
    // 0x8026AC38: bne         $at, $zero, L_8026AC0C
    if (ctx->r1 != 0) {
            // 0x8026AC3C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    ovl_8026A0F0_func_8026AC0C(rdram, ctx);
    return;
    }
    // 0x8026AC3C: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x8026AC40: jr          $ra
    // 0x8026AC44: nop

    return;
    // 0x8026AC44: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026AC48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AC48: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8026AC4C: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x8026AC50: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x8026AC54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8026AC58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026AC5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026AC60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026AC64: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8026AC68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026AC6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026AC70: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8026AC74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026AC78: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026AC7C: addiu       $t8, $t8, -0x2CF0
    ctx->r24 = ADD32(ctx->r24, -0X2CF0);
    // 0x8026AC80: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x8026AC84: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8026AC88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8026AC8C:
    // 0x8026AC8C: addu        $t9, $a0, $v0
    ctx->r25 = ADD32(ctx->r4, ctx->r2);
    // 0x8026AC90: addu        $t1, $v1, $v0
    ctx->r9 = ADD32(ctx->r3, ctx->r2);
    // 0x8026AC94: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8026AC98: lb          $t0, 0x48($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X48);
    // 0x8026AC9C: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x8026ACA0: slti        $at, $t2, 0xB
    ctx->r1 = SIGNED(ctx->r10) < 0XB ? 1 : 0;
    // 0x8026ACA4: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x8026ACA8: bne         $at, $zero, L_8026AC8C
    if (ctx->r1 != 0) {
        // 0x8026ACAC: sb          $t0, 0x86F($t1)
        MEM_B(0X86F, ctx->r9) = ctx->r8;
            goto L_8026AC8C;
    }
    // 0x8026ACAC: sb          $t0, 0x86F($t1)
    MEM_B(0X86F, ctx->r9) = ctx->r8;
    // 0x8026ACB0: jr          $ra
    // 0x8026ACB4: nop

    return;
    // 0x8026ACB4: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026ACB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026ACB8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8026ACBC: addiu       $v1, $v1, 0x1CF0
    ctx->r3 = ADD32(ctx->r3, 0X1CF0);
    // 0x8026ACC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8026ACC4:
    // 0x8026ACC4: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x8026ACC8: nop

    // 0x8026ACCC: addu        $t7, $t6, $v0
    ctx->r15 = ADD32(ctx->r14, ctx->r2);
    // 0x8026ACD0: sb          $zero, 0x54($t7)
    MEM_B(0X54, ctx->r15) = 0;
    // 0x8026ACD4: lw          $t8, 0x0($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X0);
    // 0x8026ACD8: nop

    // 0x8026ACDC: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x8026ACE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8026ACE4: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x8026ACE8: slti        $at, $t0, 0xB
    ctx->r1 = SIGNED(ctx->r8) < 0XB ? 1 : 0;
    // 0x8026ACEC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x8026ACF0: bne         $at, $zero, L_8026ACC4
    if (ctx->r1 != 0) {
        // 0x8026ACF4: sb          $zero, 0x48($t9)
        MEM_B(0X48, ctx->r25) = 0;
            goto L_8026ACC4;
    }
    // 0x8026ACF4: sb          $zero, 0x48($t9)
    MEM_B(0X48, ctx->r25) = 0;
    // 0x8026ACF8: jr          $ra
    // 0x8026ACFC: nop

    return;
    // 0x8026ACFC: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026AD00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AD00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026AD04: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026AD08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026AD0C: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8026AD10: lui         $a1, 0x803D
    ctx->r5 = S32(0X803D << 16);
    // 0x8026AD14: jal         0x8004C2C8
    // 0x8026AD18: addiu       $a1, $a1, -0x5774
    ctx->r5 = ADD32(ctx->r5, -0X5774);
    func_8004C2C8(rdram, ctx);
        goto after_0;
    // 0x8026AD18: addiu       $a1, $a1, -0x5774
    ctx->r5 = ADD32(ctx->r5, -0X5774);
    after_0:
    // 0x8026AD1C: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x8026AD20: addiu       $v1, $v1, -0x5298
    ctx->r3 = ADD32(ctx->r3, -0X5298);
    // 0x8026AD24: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x8026AD28: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026AD2C: jal         0x8026CEF4
    // 0x8026AD30: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    ovl_8026A0F0_func_8026CEF4(rdram, ctx);
        goto after_1;
    // 0x8026AD30: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x8026AD34: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026AD38: lbu         $a0, -0x326B($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326B);
    // 0x8026AD3C: lui         $a1, 0x803D
    ctx->r5 = S32(0X803D << 16);
    // 0x8026AD40: jal         0x8004BC1C
    // 0x8026AD44: addiu       $a1, $a1, -0x5768
    ctx->r5 = ADD32(ctx->r5, -0X5768);
    func_8004BC1C(rdram, ctx);
        goto after_2;
    // 0x8026AD44: addiu       $a1, $a1, -0x5768
    ctx->r5 = ADD32(ctx->r5, -0X5768);
    after_2:
    // 0x8026AD48: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8026AD4C: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026AD50: jal         0x8026CEF4
    // 0x8026AD54: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    ovl_8026A0F0_func_8026CEF4(rdram, ctx);
        goto after_3;
    // 0x8026AD54: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    after_3:
    // 0x8026AD58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026AD5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026AD60: jr          $ra
    // 0x8026AD64: nop

    return;
    // 0x8026AD64: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026AD68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AD68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026AD6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026AD70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026AD74: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8026AD78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026AD7C: lb          $t6, 0x44($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X44);
    // 0x8026AD80: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8026AD84: bne         $t6, $at, L_8026ADA0
    if (ctx->r14 != ctx->r1) {
        // 0x8026AD88: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_8026ADA0;
    }
    // 0x8026AD88: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8026AD8C: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x8026AD90: jal         0x8000E25C
    // 0x8026AD94: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8000E25C(rdram, ctx);
        goto after_0;
    // 0x8026AD94: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x8026AD98: b           L_8026ADC0
    // 0x8026AD9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026ADC0;
    // 0x8026AD9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026ADA0:
    // 0x8026ADA0: sb          $t8, 0x4($t9)
    MEM_B(0X4, ctx->r25) = ctx->r24;
    // 0x8026ADA4: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8026ADA8: lb          $a1, -0x326B($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X326B);
    // 0x8026ADAC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8026ADB0: addiu       $a2, $zero, 0x28
    ctx->r6 = ADD32(0, 0X28);
    // 0x8026ADB4: jal         0x8026D384
    // 0x8026ADB8: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    ovl_8026A0F0_func_8026D384(rdram, ctx);
        goto after_1;
    // 0x8026ADB8: addiu       $a3, $zero, 0x18
    ctx->r7 = ADD32(0, 0X18);
    after_1:
    // 0x8026ADBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026ADC0:
    // 0x8026ADC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026ADC4: jr          $ra
    // 0x8026ADC8: nop

    return;
    // 0x8026ADC8: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026ADCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026ADCC: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8026ADD0: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x8026ADD4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026ADD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026ADDC: lui         $a1, 0x803D
    ctx->r5 = S32(0X803D << 16);
    // 0x8026ADE0: lbu         $a0, 0x43($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X43);
    // 0x8026ADE4: jal         0x8004C2C8
    // 0x8026ADE8: addiu       $a1, $a1, -0x5660
    ctx->r5 = ADD32(ctx->r5, -0X5660);
    func_8004C2C8(rdram, ctx);
        goto after_0;
    // 0x8026ADE8: addiu       $a1, $a1, -0x5660
    ctx->r5 = ADD32(ctx->r5, -0X5660);
    after_0:
    // 0x8026ADEC: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x8026ADF0: addiu       $v1, $v1, -0x5194
    ctx->r3 = ADD32(ctx->r3, -0X5194);
    // 0x8026ADF4: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x8026ADF8: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026ADFC: jal         0x8026CEF4
    // 0x8026AE00: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    ovl_8026A0F0_func_8026CEF4(rdram, ctx);
        goto after_1;
    // 0x8026AE00: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x8026AE04: lui         $t7, 0x801B
    ctx->r15 = S32(0X801B << 16);
    // 0x8026AE08: lw          $t7, 0x1CF0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X1CF0);
    // 0x8026AE0C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026AE10: lb          $t8, 0x43($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X43);
    // 0x8026AE14: lui         $a1, 0x803D
    ctx->r5 = S32(0X803D << 16);
    // 0x8026AE18: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8026AE1C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8026AE20: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8026AE24: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8026AE28: sll         $t9, $t9, 3
    ctx->r25 = S32(ctx->r25 << 3);
    // 0x8026AE2C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8026AE30: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8026AE34: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8026AE38: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8026AE3C: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x8026AE40: lbu         $a0, -0x2CF0($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2CF0);
    // 0x8026AE44: jal         0x8004BC1C
    // 0x8026AE48: addiu       $a1, $a1, -0x5630
    ctx->r5 = ADD32(ctx->r5, -0X5630);
    func_8004BC1C(rdram, ctx);
        goto after_2;
    // 0x8026AE48: addiu       $a1, $a1, -0x5630
    ctx->r5 = ADD32(ctx->r5, -0X5630);
    after_2:
    // 0x8026AE4C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8026AE50: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026AE54: jal         0x8026CEF4
    // 0x8026AE58: sw          $t0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r8;
    ovl_8026A0F0_func_8026CEF4(rdram, ctx);
        goto after_3;
    // 0x8026AE58: sw          $t0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r8;
    after_3:
    // 0x8026AE5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026AE60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026AE64: jr          $ra
    // 0x8026AE68: nop

    return;
    // 0x8026AE68: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026AE6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AE6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026AE70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026AE74: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026AE78: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8026AE7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026AE80: lb          $t6, 0x44($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X44);
    // 0x8026AE84: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8026AE88: bne         $t6, $at, L_8026AEE4
    if (ctx->r14 != ctx->r1) {
        // 0x8026AE8C: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_8026AEE4;
    }
    // 0x8026AE8C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x8026AE90: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8026AE94: sb          $t7, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r15;
    // 0x8026AE98: lb          $t9, 0x43($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X43);
    // 0x8026AE9C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8026AEA0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8026AEA4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8026AEA8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8026AEAC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8026AEB0: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8026AEB4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8026AEB8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8026AEBC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8026AEC0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8026AEC4: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x8026AEC8: lbu         $a1, -0x2CF0($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X2CF0);
    // 0x8026AECC: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8026AED0: addiu       $a2, $zero, 0x150
    ctx->r6 = ADD32(0, 0X150);
    // 0x8026AED4: jal         0x8026D384
    // 0x8026AED8: addiu       $a3, $zero, 0x34
    ctx->r7 = ADD32(0, 0X34);
    ovl_8026A0F0_func_8026D384(rdram, ctx);
        goto after_0;
    // 0x8026AED8: addiu       $a3, $zero, 0x34
    ctx->r7 = ADD32(0, 0X34);
    after_0:
    // 0x8026AEDC: b           L_8026AEF0
    // 0x8026AEE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026AEF0;
    // 0x8026AEE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026AEE4:
    // 0x8026AEE4: jal         0x8000E25C
    // 0x8026AEE8: sb          $zero, 0x4($t1)
    MEM_B(0X4, ctx->r9) = 0;
    func_8000E25C(rdram, ctx);
        goto after_1;
    // 0x8026AEE8: sb          $zero, 0x4($t1)
    MEM_B(0X4, ctx->r9) = 0;
    after_1:
    // 0x8026AEEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026AEF0:
    // 0x8026AEF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026AEF4: jr          $ra
    // 0x8026AEF8: nop

    return;
    // 0x8026AEF8: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026AEFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AEFC: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8026AF00: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x8026AF04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026AF08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026AF0C: lui         $a1, 0x803D
    ctx->r5 = S32(0X803D << 16);
    // 0x8026AF10: lbu         $a0, 0x43($t6)
    ctx->r4 = MEM_BU(ctx->r14, 0X43);
    // 0x8026AF14: jal         0x8004C2C8
    // 0x8026AF18: addiu       $a1, $a1, -0x572C
    ctx->r5 = ADD32(ctx->r5, -0X572C);
    func_8004C2C8(rdram, ctx);
        goto after_0;
    // 0x8026AF18: addiu       $a1, $a1, -0x572C
    ctx->r5 = ADD32(ctx->r5, -0X572C);
    after_0:
    // 0x8026AF1C: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x8026AF20: addiu       $t7, $t7, -0x50C0
    ctx->r15 = ADD32(ctx->r15, -0X50C0);
    // 0x8026AF24: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026AF28: jal         0x8026CEF4
    // 0x8026AF2C: sw          $t7, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r15;
    ovl_8026A0F0_func_8026CEF4(rdram, ctx);
        goto after_1;
    // 0x8026AF2C: sw          $t7, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r15;
    after_1:
    // 0x8026AF30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026AF34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026AF38: jr          $ra
    // 0x8026AF3C: nop

    return;
    // 0x8026AF3C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026AF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AF40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026AF44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026AF48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026AF4C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8026AF50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026AF54: lb          $t6, 0x44($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X44);
    // 0x8026AF58: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8026AF5C: bne         $t6, $at, L_8026AF78
    if (ctx->r14 != ctx->r1) {
        // 0x8026AF60: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_8026AF78;
    }
    // 0x8026AF60: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8026AF64: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
    // 0x8026AF68: jal         0x8000E25C
    // 0x8026AF6C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8000E25C(rdram, ctx);
        goto after_0;
    // 0x8026AF6C: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_0:
    // 0x8026AF70: b           L_8026AFC4
    // 0x8026AF74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026AFC4;
    // 0x8026AF74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026AF78:
    // 0x8026AF78: sb          $t8, 0x4($t9)
    MEM_B(0X4, ctx->r25) = ctx->r24;
    // 0x8026AF7C: lb          $t0, 0x43($v0)
    ctx->r8 = MEM_B(ctx->r2, 0X43);
    // 0x8026AF80: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8026AF84: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8026AF88: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8026AF8C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8026AF90: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8026AF94: sll         $t1, $t1, 3
    ctx->r9 = S32(ctx->r9 << 3);
    // 0x8026AF98: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8026AF9C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8026AFA0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8026AFA4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8026AFA8: addu        $a1, $a1, $t1
    ctx->r5 = ADD32(ctx->r5, ctx->r9);
    // 0x8026AFAC: lbu         $a1, -0x2CF0($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X2CF0);
    // 0x8026AFB0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8026AFB4: addiu       $a2, $zero, 0x7D
    ctx->r6 = ADD32(0, 0X7D);
    // 0x8026AFB8: jal         0x8026D384
    // 0x8026AFBC: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    ovl_8026A0F0_func_8026D384(rdram, ctx);
        goto after_1;
    // 0x8026AFBC: addiu       $a3, $zero, 0x28
    ctx->r7 = ADD32(0, 0X28);
    after_1:
    // 0x8026AFC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026AFC4:
    // 0x8026AFC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026AFC8: jr          $ra
    // 0x8026AFCC: nop

    return;
    // 0x8026AFCC: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026AFD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026AFD0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8026AFD4: lb          $t6, -0x326C($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X326C);
    // 0x8026AFD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026AFDC: bne         $t6, $zero, L_8026B06C
    if (ctx->r14 != 0) {
        // 0x8026AFE0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8026B06C;
    }
    // 0x8026AFE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026AFE4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8026AFE8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026AFEC: jal         0x80021214
    // 0x8026AFF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_0;
    // 0x8026AFF0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8026AFF4: lui         $t7, 0x800B
    ctx->r15 = S32(0X800B << 16);
    // 0x8026AFF8: addiu       $t7, $t7, -0x6CE4
    ctx->r15 = ADD32(ctx->r15, -0X6CE4);
    // 0x8026AFFC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8026B000: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8026B004: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x8026B008: lw          $a2, 0x4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X4);
    // 0x8026B00C: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8026B010: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8026B014: lw          $a3, 0x8($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X8);
    // 0x8026B018: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x8026B01C: jal         0x8004B078
    // 0x8026B020: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_1;
    // 0x8026B020: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_1:
    // 0x8026B024: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8026B028: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x8026B02C: jal         0x80021214
    // 0x8026B030: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80021214(rdram, ctx);
        goto after_2;
    // 0x8026B030: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x8026B034: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x8026B038: addiu       $t0, $t0, -0x6CCC
    ctx->r8 = ADD32(ctx->r8, -0X6CCC);
    // 0x8026B03C: lw          $at, 0x0($t0)
    ctx->r1 = MEM_W(ctx->r8, 0X0);
    // 0x8026B040: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8026B044: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x8026B048: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x8026B04C: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8026B050: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8026B054: lw          $a3, 0x8($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X8);
    // 0x8026B058: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x8026B05C: jal         0x8004B078
    // 0x8026B060: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_3;
    // 0x8026B060: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_3:
    // 0x8026B064: b           L_8026B0F0
    // 0x8026B068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026B0F0;
    // 0x8026B068: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026B06C:
    // 0x8026B06C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8026B070: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x8026B074: jal         0x80021214
    // 0x8026B078: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_4;
    // 0x8026B078: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x8026B07C: lui         $t3, 0x800B
    ctx->r11 = S32(0X800B << 16);
    // 0x8026B080: addiu       $t3, $t3, -0x6CD8
    ctx->r11 = ADD32(ctx->r11, -0X6CD8);
    // 0x8026B084: lw          $at, 0x0($t3)
    ctx->r1 = MEM_W(ctx->r11, 0X0);
    // 0x8026B088: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8026B08C: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x8026B090: lw          $a2, 0x4($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X4);
    // 0x8026B094: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8026B098: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8026B09C: lw          $a3, 0x8($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X8);
    // 0x8026B0A0: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x8026B0A4: jal         0x8004B078
    // 0x8026B0A8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_5;
    // 0x8026B0A8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_5:
    // 0x8026B0AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8026B0B0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026B0B4: jal         0x80021214
    // 0x8026B0B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80021214(rdram, ctx);
        goto after_6;
    // 0x8026B0B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x8026B0BC: lui         $t6, 0x800B
    ctx->r14 = S32(0X800B << 16);
    // 0x8026B0C0: addiu       $t6, $t6, -0x6CC0
    ctx->r14 = ADD32(ctx->r14, -0X6CC0);
    // 0x8026B0C4: lw          $at, 0x0($t6)
    ctx->r1 = MEM_W(ctx->r14, 0X0);
    // 0x8026B0C8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8026B0CC: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x8026B0D0: lw          $a2, 0x4($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X4);
    // 0x8026B0D4: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8026B0D8: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8026B0DC: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x8026B0E0: lw          $a0, 0x1CF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X1CF0);
    // 0x8026B0E4: jal         0x8004B078
    // 0x8026B0E8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_7;
    // 0x8026B0E8: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_7:
    // 0x8026B0EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026B0F0:
    // 0x8026B0F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026B0F4: jr          $ra
    // 0x8026B0F8: nop

    return;
    // 0x8026B0F8: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026B0FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B0FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026B100: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026B104: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026B108: jal         0x80029354
    // 0x8026B10C: addiu       $a0, $a0, -0x4EB8
    ctx->r4 = ADD32(ctx->r4, -0X4EB8);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x8026B10C: addiu       $a0, $a0, -0x4EB8
    ctx->r4 = ADD32(ctx->r4, -0X4EB8);
    after_0:
    // 0x8026B110: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026B114: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8026B118: lbu         $a1, -0x326C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X326C);
    // 0x8026B11C: jal         0x8004BDA0
    // 0x8026B120: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004BDA0(rdram, ctx);
        goto after_1;
    // 0x8026B120: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x8026B124: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8026B128: lui         $t6, 0x803C
    ctx->r14 = S32(0X803C << 16);
    // 0x8026B12C: addiu       $t6, $t6, 0x69E0
    ctx->r14 = ADD32(ctx->r14, 0X69E0);
    // 0x8026B130: jal         0x8026CEF4
    // 0x8026B134: sw          $t6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r14;
    ovl_8026A0F0_func_8026CEF4(rdram, ctx);
        goto after_2;
    // 0x8026B134: sw          $t6, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r14;
    after_2:
    // 0x8026B138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B13C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026B140: jr          $ra
    // 0x8026B144: nop

    return;
    // 0x8026B144: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026B148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B148: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026B14C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026B150: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8026B154: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x8026B158: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x8026B15C: lb          $t7, 0x3A($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X3A);
    // 0x8026B160: addiu       $t9, $t9, -0x1570
    ctx->r25 = ADD32(ctx->r25, -0X1570);
    // 0x8026B164: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8026B168: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8026B16C: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8026B170: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8026B174: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x8026B178: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x8026B17C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8026B180: jal         0x8004CD44
    // 0x8026B184: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x8026B184: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x8026B188: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8026B18C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8026B190: lb          $v0, 0x38($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X38);
    // 0x8026B194: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8026B198: bne         $v0, $at, L_8026B1B4
    if (ctx->r2 != ctx->r1) {
        // 0x8026B19C: addiu       $t0, $zero, 0x210
        ctx->r8 = ADD32(0, 0X210);
            goto L_8026B1B4;
    }
    // 0x8026B19C: addiu       $t0, $zero, 0x210
    ctx->r8 = ADD32(0, 0X210);
    // 0x8026B1A0: lui         $t1, 0x803C
    ctx->r9 = S32(0X803C << 16);
    // 0x8026B1A4: addiu       $t1, $t1, 0x69E0
    ctx->r9 = ADD32(ctx->r9, 0X69E0);
    // 0x8026B1A8: sh          $t0, 0x12($a3)
    MEM_H(0X12, ctx->r7) = ctx->r8;
    // 0x8026B1AC: b           L_8026B230
    // 0x8026B1B0: sw          $t1, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r9;
        goto L_8026B230;
    // 0x8026B1B0: sw          $t1, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r9;
L_8026B1B4:
    // 0x8026B1B4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026B1B8: bne         $v0, $at, L_8026B1D8
    if (ctx->r2 != ctx->r1) {
        // 0x8026B1BC: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8026B1D8;
    }
    // 0x8026B1BC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8026B1C0: lui         $t3, 0x803C
    ctx->r11 = S32(0X803C << 16);
    // 0x8026B1C4: addiu       $t2, $zero, 0x414
    ctx->r10 = ADD32(0, 0X414);
    // 0x8026B1C8: addiu       $t3, $t3, 0x69E0
    ctx->r11 = ADD32(ctx->r11, 0X69E0);
    // 0x8026B1CC: sh          $t2, 0x12($a3)
    MEM_H(0X12, ctx->r7) = ctx->r10;
    // 0x8026B1D0: b           L_8026B230
    // 0x8026B1D4: sw          $t3, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r11;
        goto L_8026B230;
    // 0x8026B1D4: sw          $t3, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r11;
L_8026B1D8:
    // 0x8026B1D8: bne         $a0, $v0, L_8026B22C
    if (ctx->r4 != ctx->r2) {
        // 0x8026B1DC: nop
    
            goto L_8026B22C;
    }
    // 0x8026B1DC: nop

    // 0x8026B1E0: lb          $t4, 0x39($v1)
    ctx->r12 = MEM_B(ctx->r3, 0X39);
    // 0x8026B1E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8026B1E8: bne         $a0, $t4, L_8026B224
    if (ctx->r4 != ctx->r12) {
        // 0x8026B1EC: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_8026B224;
    }
    // 0x8026B1EC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8026B1F0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8026B1F4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8026B1F8: jal         0x8004CD44
    // 0x8026B1FC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x8026B1FC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_1:
    // 0x8026B200: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8026B204: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x8026B208: lb          $t5, 0x3C($v1)
    ctx->r13 = MEM_B(ctx->r3, 0X3C);
    // 0x8026B20C: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8026B210: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8026B214: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026B218: lw          $t7, -0x1460($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1460);
    // 0x8026B21C: b           L_8026B230
    // 0x8026B220: sw          $t7, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r15;
        goto L_8026B230;
    // 0x8026B220: sw          $t7, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r15;
L_8026B224:
    // 0x8026B224: b           L_8026B230
    // 0x8026B228: sb          $zero, 0x4($a3)
    MEM_B(0X4, ctx->r7) = 0;
        goto L_8026B230;
    // 0x8026B228: sb          $zero, 0x4($a3)
    MEM_B(0X4, ctx->r7) = 0;
L_8026B22C:
    // 0x8026B22C: sb          $zero, 0x4($a3)
    MEM_B(0X4, ctx->r7) = 0;
L_8026B230:
    // 0x8026B230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B234: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026B238: jr          $ra
    // 0x8026B23C: nop

    return;
    // 0x8026B23C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026B240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B240: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026B244: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026B248: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026B24C: jal         0x80029354
    // 0x8026B250: addiu       $a0, $a0, -0x4D70
    ctx->r4 = ADD32(ctx->r4, -0X4D70);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x8026B250: addiu       $a0, $a0, -0x4D70
    ctx->r4 = ADD32(ctx->r4, -0X4D70);
    after_0:
    // 0x8026B254: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8026B258: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x8026B25C: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026B260: lbu         $a1, 0x43($t6)
    ctx->r5 = MEM_BU(ctx->r14, 0X43);
    // 0x8026B264: jal         0x8004BDA0
    // 0x8026B268: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004BDA0(rdram, ctx);
        goto after_1;
    // 0x8026B268: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x8026B26C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8026B270: lui         $t7, 0x803C
    ctx->r15 = S32(0X803C << 16);
    // 0x8026B274: addiu       $t7, $t7, 0x69E0
    ctx->r15 = ADD32(ctx->r15, 0X69E0);
    // 0x8026B278: jal         0x8026CEF4
    // 0x8026B27C: sw          $t7, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r15;
    ovl_8026A0F0_func_8026CEF4(rdram, ctx);
        goto after_2;
    // 0x8026B27C: sw          $t7, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r15;
    after_2:
    // 0x8026B280: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B284: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026B288: jr          $ra
    // 0x8026B28C: nop

    return;
    // 0x8026B28C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026B290(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B290: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026B294: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026B298: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8026B29C: lw          $v1, 0x8($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X8);
    // 0x8026B2A0: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x8026B2A4: lb          $t7, 0x3B($v1)
    ctx->r15 = MEM_B(ctx->r3, 0X3B);
    // 0x8026B2A8: addiu       $t9, $t9, -0x1540
    ctx->r25 = ADD32(ctx->r25, -0X1540);
    // 0x8026B2AC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8026B2B0: addu        $v0, $t8, $t9
    ctx->r2 = ADD32(ctx->r24, ctx->r25);
    // 0x8026B2B4: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8026B2B8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8026B2BC: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x8026B2C0: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x8026B2C4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8026B2C8: jal         0x8004CD44
    // 0x8026B2CC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x8026B2CC: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x8026B2D0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8026B2D4: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x8026B2D8: lb          $t0, 0x38($v1)
    ctx->r8 = MEM_B(ctx->r3, 0X38);
    // 0x8026B2DC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026B2E0: bne         $t0, $at, L_8026B2F0
    if (ctx->r8 != ctx->r1) {
        // 0x8026B2E4: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_8026B2F0;
    }
    // 0x8026B2E4: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8026B2E8: b           L_8026B2F4
    // 0x8026B2EC: sb          $t1, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r9;
        goto L_8026B2F4;
    // 0x8026B2EC: sb          $t1, 0x4($a3)
    MEM_B(0X4, ctx->r7) = ctx->r9;
L_8026B2F0:
    // 0x8026B2F0: sb          $zero, 0x4($a3)
    MEM_B(0X4, ctx->r7) = 0;
L_8026B2F4:
    // 0x8026B2F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B2F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026B2FC: jr          $ra
    // 0x8026B300: nop

    return;
    // 0x8026B300: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026B304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B304: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026B308: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026B30C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026B310: jal         0x80029354
    // 0x8026B314: addiu       $a0, $a0, -0x4CB8
    ctx->r4 = ADD32(ctx->r4, -0X4CB8);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x8026B314: addiu       $a0, $a0, -0x4CB8
    ctx->r4 = ADD32(ctx->r4, -0X4CB8);
    after_0:
    // 0x8026B318: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026B31C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8026B320: lbu         $a1, -0x326C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X326C);
    // 0x8026B324: jal         0x8004BDEC
    // 0x8026B328: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_8004BDEC(rdram, ctx);
        goto after_1;
    // 0x8026B328: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_1:
    // 0x8026B32C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8026B330: jal         0x8026CEF4
    // 0x8026B334: nop

    ovl_8026A0F0_func_8026CEF4(rdram, ctx);
        goto after_2;
    // 0x8026B334: nop

    after_2:
    // 0x8026B338: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B33C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026B340: jr          $ra
    // 0x8026B344: nop

    return;
    // 0x8026B344: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026B348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B348: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8026B34C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026B350: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026B354: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8026B358: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8026B35C: lb          $v1, 0x38($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X38);
    // 0x8026B360: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8026B364: beq         $v1, $zero, L_8026B38C
    if (ctx->r3 == 0) {
        // 0x8026B368: nop
    
            goto L_8026B38C;
    }
    // 0x8026B368: nop

    // 0x8026B36C: beq         $v1, $a0, L_8026B38C
    if (ctx->r3 == ctx->r4) {
        // 0x8026B370: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8026B38C;
    }
    // 0x8026B370: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8026B374: beq         $v1, $at, L_8026B394
    if (ctx->r3 == ctx->r1) {
        // 0x8026B378: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8026B394;
    }
    // 0x8026B378: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026B37C: beq         $v1, $at, L_8026B3E8
    if (ctx->r3 == ctx->r1) {
        // 0x8026B380: nop
    
            goto L_8026B3E8;
    }
    // 0x8026B380: nop

    // 0x8026B384: b           L_8026B47C
    // 0x8026B388: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8026B47C;
    // 0x8026B388: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026B38C:
    // 0x8026B38C: b           L_8026B478
    // 0x8026B390: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_8026B478;
    // 0x8026B390: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8026B394:
    // 0x8026B394: lb          $t6, 0x44($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X44);
    // 0x8026B398: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8026B39C: bne         $a0, $t6, L_8026B3AC
    if (ctx->r4 != ctx->r14) {
        // 0x8026B3A0: nop
    
            goto L_8026B3AC;
    }
    // 0x8026B3A0: nop

    // 0x8026B3A4: b           L_8026B478
    // 0x8026B3A8: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
        goto L_8026B478;
    // 0x8026B3A8: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8026B3AC:
    // 0x8026B3AC: lbu         $a1, -0x326C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X326C);
    // 0x8026B3B0: lbu         $a2, 0x2E($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X2E);
    // 0x8026B3B4: lbu         $a3, 0x3A($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X3A);
    // 0x8026B3B8: jal         0x8026CC04
    // 0x8026B3BC: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    ovl_8026A0F0_func_8026CC04(rdram, ctx);
        goto after_0;
    // 0x8026B3BC: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x8026B3C0: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    // 0x8026B3C4: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x8026B3C8: jal         0x8004CD44
    // 0x8026B3CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x8026B3CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8026B3D0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8026B3D4: lbu         $a1, -0x326C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X326C);
    // 0x8026B3D8: jal         0x8004BDEC
    // 0x8026B3DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004BDEC(rdram, ctx);
        goto after_2;
    // 0x8026B3DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8026B3E0: b           L_8026B47C
    // 0x8026B3E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8026B47C;
    // 0x8026B3E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026B3E8:
    // 0x8026B3E8: lb          $t7, 0x44($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X44);
    // 0x8026B3EC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8026B3F0: bne         $a0, $t7, L_8026B43C
    if (ctx->r4 != ctx->r15) {
        // 0x8026B3F4: nop
    
            goto L_8026B43C;
    }
    // 0x8026B3F4: nop

    // 0x8026B3F8: lbu         $a1, 0x43($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X43);
    // 0x8026B3FC: lbu         $a2, 0x40($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X40);
    // 0x8026B400: lbu         $a3, 0x3B($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X3B);
    // 0x8026B404: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8026B408: jal         0x8026CC04
    // 0x8026B40C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    ovl_8026A0F0_func_8026CC04(rdram, ctx);
        goto after_3;
    // 0x8026B40C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x8026B410: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    // 0x8026B414: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x8026B418: jal         0x8004CD44
    // 0x8026B41C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_4;
    // 0x8026B41C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8026B420: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8026B424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026B428: lbu         $a1, 0x43($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X43);
    // 0x8026B42C: jal         0x8004BDEC
    // 0x8026B430: nop

    func_8004BDEC(rdram, ctx);
        goto after_5;
    // 0x8026B430: nop

    after_5:
    // 0x8026B434: b           L_8026B47C
    // 0x8026B438: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8026B47C;
    // 0x8026B438: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026B43C:
    // 0x8026B43C: lbu         $a1, -0x326C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X326C);
    // 0x8026B440: lbu         $a2, 0x2E($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X2E);
    // 0x8026B444: lbu         $a3, 0x3A($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X3A);
    // 0x8026B448: jal         0x8026CC04
    // 0x8026B44C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    ovl_8026A0F0_func_8026CC04(rdram, ctx);
        goto after_6;
    // 0x8026B44C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    after_6:
    // 0x8026B450: lh          $a1, 0x2C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2C);
    // 0x8026B454: lh          $a2, 0x2E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X2E);
    // 0x8026B458: jal         0x8004CD44
    // 0x8026B45C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_7;
    // 0x8026B45C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8026B460: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8026B464: lbu         $a1, -0x326C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X326C);
    // 0x8026B468: jal         0x8004BDEC
    // 0x8026B46C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004BDEC(rdram, ctx);
        goto after_8;
    // 0x8026B46C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8026B470: addiu       $t8, $zero, 0x146
    ctx->r24 = ADD32(0, 0X146);
    // 0x8026B474: sh          $t8, 0x12($s0)
    MEM_H(0X12, ctx->r16) = ctx->r24;
L_8026B478:
    // 0x8026B478: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026B47C:
    // 0x8026B47C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026B480: jr          $ra
    // 0x8026B484: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8026B484: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026B488(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B488: jr          $ra
    // 0x8026B48C: nop

    return;
    // 0x8026B48C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026B490(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B490: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026B494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026B498: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8026B49C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8026B4A0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8026B4A4: lb          $t6, 0x38($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X38);
    // 0x8026B4A8: nop

    // 0x8026B4AC: beq         $t6, $at, L_8026B4BC
    if (ctx->r14 == ctx->r1) {
        // 0x8026B4B0: nop
    
            goto L_8026B4BC;
    }
    // 0x8026B4B0: nop

    // 0x8026B4B4: b           L_8026B4F4
    // 0x8026B4B8: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
        goto L_8026B4F4;
    // 0x8026B4B8: sb          $zero, 0x4($a1)
    MEM_B(0X4, ctx->r5) = 0;
L_8026B4BC:
    // 0x8026B4BC: lb          $t8, 0x44($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X44);
    // 0x8026B4C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026B4C4: bne         $t8, $at, L_8026B4F8
    if (ctx->r24 != ctx->r1) {
        // 0x8026B4C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026B4F8;
    }
    // 0x8026B4C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B4CC: lbu         $a1, 0x43($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X43);
    // 0x8026B4D0: lbu         $a2, 0x40($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X40);
    // 0x8026B4D4: lbu         $a3, 0x3B($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X3B);
    // 0x8026B4D8: jal         0x8026CC04
    // 0x8026B4DC: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    ovl_8026A0F0_func_8026CC04(rdram, ctx);
        goto after_0;
    // 0x8026B4DC: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8026B4E0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8026B4E4: lh          $a1, 0x1C($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1C);
    // 0x8026B4E8: lh          $a2, 0x1E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1E);
    // 0x8026B4EC: jal         0x8004CD44
    // 0x8026B4F0: nop

    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x8026B4F0: nop

    after_1:
L_8026B4F4:
    // 0x8026B4F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026B4F8:
    // 0x8026B4F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026B4FC: jr          $ra
    // 0x8026B500: nop

    return;
    // 0x8026B500: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026B504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B504: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026B508: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026B50C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026B510: addiu       $a0, $a0, -0x4ABC
    ctx->r4 = ADD32(ctx->r4, -0X4ABC);
    // 0x8026B514: jal         0x800293DC
    // 0x8026B518: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x8026B518: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x8026B51C: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8026B520: lbu         $a1, -0x326C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X326C);
    // 0x8026B524: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026B528: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026B52C: jal         0x8026B5A4
    // 0x8026B530: addiu       $a2, $a2, -0x1570
    ctx->r6 = ADD32(ctx->r6, -0X1570);
    ovl_8026A0F0_func_8026B5A4(rdram, ctx);
        goto after_1;
    // 0x8026B530: addiu       $a2, $a2, -0x1570
    ctx->r6 = ADD32(ctx->r6, -0X1570);
    after_1:
    // 0x8026B534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026B53C: jr          $ra
    // 0x8026B540: nop

    return;
    // 0x8026B540: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026B544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B544: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026B548: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026B54C: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8026B550: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8026B554: lb          $t6, 0x44($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X44);
    // 0x8026B558: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026B55C: bne         $t6, $at, L_8026B580
    if (ctx->r14 != ctx->r1) {
        // 0x8026B560: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_8026B580;
    }
    // 0x8026B560: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x8026B564: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8026B568: lbu         $a1, 0x43($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X43);
    // 0x8026B56C: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026B570: jal         0x8026B5A4
    // 0x8026B574: addiu       $a2, $a2, -0x1540
    ctx->r6 = ADD32(ctx->r6, -0X1540);
    ovl_8026A0F0_func_8026B5A4(rdram, ctx);
        goto after_0;
    // 0x8026B574: addiu       $a2, $a2, -0x1540
    ctx->r6 = ADD32(ctx->r6, -0X1540);
    after_0:
    // 0x8026B578: b           L_8026B598
    // 0x8026B57C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026B598;
    // 0x8026B57C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026B580:
    // 0x8026B580: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8026B584: lbu         $a1, -0x326C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X326C);
    // 0x8026B588: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026B58C: jal         0x8026B5A4
    // 0x8026B590: addiu       $a2, $a2, -0x1570
    ctx->r6 = ADD32(ctx->r6, -0X1570);
    ovl_8026A0F0_func_8026B5A4(rdram, ctx);
        goto after_1;
    // 0x8026B590: addiu       $a2, $a2, -0x1570
    ctx->r6 = ADD32(ctx->r6, -0X1570);
    after_1:
    // 0x8026B594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026B598:
    // 0x8026B598: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026B59C: jr          $ra
    // 0x8026B5A0: nop

    return;
    // 0x8026B5A0: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026B5A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B5A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8026B5A8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8026B5AC: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x8026B5B0: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8026B5B4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8026B5B8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8026B5BC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8026B5C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8026B5C4: andi        $s3, $a1, 0xFF
    ctx->r19 = ctx->r5 & 0XFF;
    // 0x8026B5C8: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x8026B5CC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8026B5D0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8026B5D4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8026B5D8: beq         $a0, $s5, L_8026B630
    if (ctx->r4 == ctx->r21) {
        // 0x8026B5DC: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_8026B630;
    }
    // 0x8026B5DC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8026B5E0: lui         $s2, 0x803C
    ctx->r18 = S32(0X803C << 16);
    // 0x8026B5E4: addiu       $s2, $s2, 0x6BB4
    ctx->r18 = ADD32(ctx->r18, 0X6BB4);
L_8026B5E8:
    // 0x8026B5E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026B5EC: andi        $a1, $s3, 0xFF
    ctx->r5 = ctx->r19 & 0XFF;
    // 0x8026B5F0: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    // 0x8026B5F4: jal         0x8004C4B0
    // 0x8026B5F8: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    func_8004C4B0(rdram, ctx);
        goto after_0;
    // 0x8026B5F8: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    after_0:
    // 0x8026B5FC: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x8026B600: addu        $v0, $s4, $t6
    ctx->r2 = ADD32(ctx->r20, ctx->r14);
    // 0x8026B604: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x8026B608: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x8026B60C: jal         0x8004CD44
    // 0x8026B610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_1;
    // 0x8026B610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8026B614: jal         0x8026CEF4
    // 0x8026B618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8026A0F0_func_8026CEF4(rdram, ctx);
        goto after_2;
    // 0x8026B618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8026B61C: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8026B620: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8026B624: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x8026B628: bne         $s0, $s5, L_8026B5E8
    if (ctx->r16 != ctx->r21) {
        // 0x8026B62C: or          $s1, $t7, $zero
        ctx->r17 = ctx->r15 | 0;
            goto L_8026B5E8;
    }
    // 0x8026B62C: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
L_8026B630:
    // 0x8026B630: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8026B634: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8026B638: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8026B63C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8026B640: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8026B644: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x8026B648: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8026B64C: jr          $ra
    // 0x8026B650: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8026B650: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026B654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B654: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026B658: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026B65C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026B660: addiu       $a0, $a0, -0x4960
    ctx->r4 = ADD32(ctx->r4, -0X4960);
    // 0x8026B664: jal         0x800293DC
    // 0x8026B668: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x8026B668: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x8026B66C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026B670: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8026B674: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    // 0x8026B678: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026B67C: jal         0x8026B744
    // 0x8026B680: addiu       $a2, $a2, -0x1570
    ctx->r6 = ADD32(ctx->r6, -0X1570);
    ovl_8026A0F0_func_8026B744(rdram, ctx);
        goto after_1;
    // 0x8026B680: addiu       $a2, $a2, -0x1570
    ctx->r6 = ADD32(ctx->r6, -0X1570);
    after_1:
    // 0x8026B684: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026B688: jal         0x8002A468
    // 0x8026B68C: addiu       $a0, $a0, -0x310C
    ctx->r4 = ADD32(ctx->r4, -0X310C);
    func_8002A468(rdram, ctx);
        goto after_2;
    // 0x8026B68C: addiu       $a0, $a0, -0x310C
    ctx->r4 = ADD32(ctx->r4, -0X310C);
    after_2:
    // 0x8026B690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B694: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026B698: jr          $ra
    // 0x8026B69C: nop

    return;
    // 0x8026B69C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026B668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B668: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x8026B66C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026B670: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8026B674: lw          $a1, 0x14($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X14);
    // 0x8026B678: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026B67C: jal         0x8026B744
    // 0x8026B680: addiu       $a2, $a2, -0x1570
    ctx->r6 = ADD32(ctx->r6, -0X1570);
    ovl_8026A0F0_func_8026B744(rdram, ctx);
        goto after_0;
    // 0x8026B680: addiu       $a2, $a2, -0x1570
    ctx->r6 = ADD32(ctx->r6, -0X1570);
    after_0:
    // 0x8026B684: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026B688: jal         0x8002A468
    // 0x8026B68C: addiu       $a0, $a0, -0x310C
    ctx->r4 = ADD32(ctx->r4, -0X310C);
    func_8002A468(rdram, ctx);
        goto after_1;
    // 0x8026B68C: addiu       $a0, $a0, -0x310C
    ctx->r4 = ADD32(ctx->r4, -0X310C);
    after_1:
    // 0x8026B690: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B694: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026B698: jr          $ra
    // 0x8026B69C: nop

    return;
    // 0x8026B69C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026B6A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B6A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026B6A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026B6A8: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8026B6AC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8026B6B0: lb          $t6, 0x44($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X44);
    // 0x8026B6B4: nop

    // 0x8026B6B8: bne         $v1, $t6, L_8026B6FC
    if (ctx->r3 != ctx->r14) {
        // 0x8026B6BC: nop
    
            goto L_8026B6FC;
    }
    // 0x8026B6BC: nop

    // 0x8026B6C0: lb          $t7, 0x41($v0)
    ctx->r15 = MEM_B(ctx->r2, 0X41);
    // 0x8026B6C4: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026B6C8: bne         $v1, $t7, L_8026B6E8
    if (ctx->r3 != ctx->r15) {
        // 0x8026B6CC: nop
    
            goto L_8026B6E8;
    }
    // 0x8026B6CC: nop

    // 0x8026B6D0: lbu         $a0, 0x43($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X43);
    // 0x8026B6D4: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026B6D8: jal         0x8026B808
    // 0x8026B6DC: addiu       $a2, $a2, -0x1540
    ctx->r6 = ADD32(ctx->r6, -0X1540);
    ovl_8026A0F0_func_8026B808(rdram, ctx);
        goto after_0;
    // 0x8026B6DC: addiu       $a2, $a2, -0x1540
    ctx->r6 = ADD32(ctx->r6, -0X1540);
    after_0:
    // 0x8026B6E0: b           L_8026B738
    // 0x8026B6E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026B738;
    // 0x8026B6E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026B6E8:
    // 0x8026B6E8: lbu         $a0, 0x43($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X43);
    // 0x8026B6EC: jal         0x8026B744
    // 0x8026B6F0: addiu       $a2, $a2, -0x1540
    ctx->r6 = ADD32(ctx->r6, -0X1540);
    ovl_8026A0F0_func_8026B744(rdram, ctx);
        goto after_1;
    // 0x8026B6F0: addiu       $a2, $a2, -0x1540
    ctx->r6 = ADD32(ctx->r6, -0X1540);
    after_1:
    // 0x8026B6F4: b           L_8026B738
    // 0x8026B6F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026B738;
    // 0x8026B6F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026B6FC:
    // 0x8026B6FC: lb          $t8, 0x41($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X41);
    // 0x8026B700: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026B704: bne         $v1, $t8, L_8026B728
    if (ctx->r3 != ctx->r24) {
        // 0x8026B708: lui         $a2, 0x8027
        ctx->r6 = S32(0X8027 << 16);
            goto L_8026B728;
    }
    // 0x8026B708: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026B70C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026B710: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8026B714: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026B718: jal         0x8026B808
    // 0x8026B71C: addiu       $a2, $a2, -0x1570
    ctx->r6 = ADD32(ctx->r6, -0X1570);
    ovl_8026A0F0_func_8026B808(rdram, ctx);
        goto after_2;
    // 0x8026B71C: addiu       $a2, $a2, -0x1570
    ctx->r6 = ADD32(ctx->r6, -0X1570);
    after_2:
    // 0x8026B720: b           L_8026B738
    // 0x8026B724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026B738;
    // 0x8026B724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026B728:
    // 0x8026B728: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8026B72C: jal         0x8026B744
    // 0x8026B730: addiu       $a2, $a2, -0x1570
    ctx->r6 = ADD32(ctx->r6, -0X1570);
    ovl_8026A0F0_func_8026B744(rdram, ctx);
        goto after_3;
    // 0x8026B730: addiu       $a2, $a2, -0x1570
    ctx->r6 = ADD32(ctx->r6, -0X1570);
    after_3:
    // 0x8026B734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026B738:
    // 0x8026B738: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026B73C: jr          $ra
    // 0x8026B740: nop

    return;
    // 0x8026B740: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026B744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B744: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8026B748: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8026B74C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8026B750: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026B754: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8026B758: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x8026B75C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8026B760: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8026B764: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x8026B768: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8026B76C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8026B770: jal         0x8004D474
    // 0x8026B774: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_8004D474(rdram, ctx);
        goto after_0;
    // 0x8026B774: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x8026B778: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x8026B77C: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8026B780: beq         $s0, $s4, L_8026B7E8
    if (ctx->r16 == ctx->r20) {
        // 0x8026B784: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_8026B7E8;
    }
    // 0x8026B784: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8026B788: sll         $t7, $v1, 2
    ctx->r15 = S32(ctx->r3 << 2);
    // 0x8026B78C: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x8026B790: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026B794: lui         $t8, 0x800B
    ctx->r24 = S32(0X800B << 16);
    // 0x8026B798: addiu       $t8, $t8, -0x6AA4
    ctx->r24 = ADD32(ctx->r24, -0X6AA4);
    // 0x8026B79C: subu        $t7, $t7, $v1
    ctx->r15 = SUB32(ctx->r15, ctx->r3);
    // 0x8026B7A0: addu        $s2, $t7, $t8
    ctx->r18 = ADD32(ctx->r15, ctx->r24);
L_8026B7A4:
    // 0x8026B7A4: addu        $t9, $s2, $s1
    ctx->r25 = ADD32(ctx->r18, ctx->r17);
    // 0x8026B7A8: lbu         $a1, 0x0($t9)
    ctx->r5 = MEM_BU(ctx->r25, 0X0);
    // 0x8026B7AC: jal         0x8004C764
    // 0x8026B7B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004C764(rdram, ctx);
        goto after_1;
    // 0x8026B7B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8026B7B4: sll         $t0, $s1, 2
    ctx->r8 = S32(ctx->r17 << 2);
    // 0x8026B7B8: addu        $v0, $s3, $t0
    ctx->r2 = ADD32(ctx->r19, ctx->r8);
    // 0x8026B7BC: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x8026B7C0: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x8026B7C4: jal         0x8004CD44
    // 0x8026B7C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x8026B7C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8026B7CC: jal         0x8026CEF4
    // 0x8026B7D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8026A0F0_func_8026CEF4(rdram, ctx);
        goto after_3;
    // 0x8026B7D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8026B7D4: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8026B7D8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8026B7DC: andi        $t1, $s1, 0xFF
    ctx->r9 = ctx->r17 & 0XFF;
    // 0x8026B7E0: bne         $s0, $s4, L_8026B7A4
    if (ctx->r16 != ctx->r20) {
        // 0x8026B7E4: or          $s1, $t1, $zero
        ctx->r17 = ctx->r9 | 0;
            goto L_8026B7A4;
    }
    // 0x8026B7E4: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
L_8026B7E8:
    // 0x8026B7E8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8026B7EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026B7F0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8026B7F4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8026B7F8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8026B7FC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8026B800: jr          $ra
    // 0x8026B804: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8026B804: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026B808(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B808: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8026B80C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8026B810: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x8026B814: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8026B818: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8026B81C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8026B820: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026B824: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8026B828: andi        $s2, $a0, 0xFF
    ctx->r18 = ctx->r4 & 0XFF;
    // 0x8026B82C: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x8026B830: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8026B834: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8026B838: beq         $a1, $s4, L_8026B88C
    if (ctx->r5 == ctx->r20) {
        // 0x8026B83C: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_8026B88C;
    }
    // 0x8026B83C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8026B840:
    // 0x8026B840: andi        $a0, $s2, 0xFF
    ctx->r4 = ctx->r18 & 0XFF;
    // 0x8026B844: jal         0x8004D540
    // 0x8026B848: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    func_8004D540(rdram, ctx);
        goto after_0;
    // 0x8026B848: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    after_0:
    // 0x8026B84C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026B850: jal         0x8004CAD8
    // 0x8026B854: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    func_8004CAD8(rdram, ctx);
        goto after_1;
    // 0x8026B854: andi        $a1, $v0, 0xFF
    ctx->r5 = ctx->r2 & 0XFF;
    after_1:
    // 0x8026B858: sll         $t6, $s1, 2
    ctx->r14 = S32(ctx->r17 << 2);
    // 0x8026B85C: addu        $v0, $s3, $t6
    ctx->r2 = ADD32(ctx->r19, ctx->r14);
    // 0x8026B860: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x8026B864: lh          $a2, 0x2($v0)
    ctx->r6 = MEM_H(ctx->r2, 0X2);
    // 0x8026B868: jal         0x8004CD44
    // 0x8026B86C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x8026B86C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8026B870: jal         0x8026CEF4
    // 0x8026B874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8026A0F0_func_8026CEF4(rdram, ctx);
        goto after_3;
    // 0x8026B874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8026B878: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8026B87C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8026B880: andi        $t7, $s1, 0xFF
    ctx->r15 = ctx->r17 & 0XFF;
    // 0x8026B884: bne         $s0, $s4, L_8026B840
    if (ctx->r16 != ctx->r20) {
        // 0x8026B888: or          $s1, $t7, $zero
        ctx->r17 = ctx->r15 | 0;
            goto L_8026B840;
    }
    // 0x8026B888: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
L_8026B88C:
    // 0x8026B88C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8026B890: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026B894: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8026B898: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8026B89C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8026B8A0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8026B8A4: jr          $ra
    // 0x8026B8A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8026B8A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026B8AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B8AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026B8B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026B8B4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026B8B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026B8BC: jal         0x80029354
    // 0x8026B8C0: addiu       $a0, $a0, -0x46B4
    ctx->r4 = ADD32(ctx->r4, -0X46B4);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x8026B8C0: addiu       $a0, $a0, -0x46B4
    ctx->r4 = ADD32(ctx->r4, -0X46B4);
    after_0:
    // 0x8026B8C4: lui         $t6, 0x801B
    ctx->r14 = S32(0X801B << 16);
    // 0x8026B8C8: lw          $t6, 0x1CF0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X1CF0);
    // 0x8026B8CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8026B8D0: lb          $t7, 0x2E($t6)
    ctx->r15 = MEM_B(ctx->r14, 0X2E);
    // 0x8026B8D4: addiu       $a1, $zero, 0xDE
    ctx->r5 = ADD32(0, 0XDE);
    // 0x8026B8D8: bne         $t7, $zero, L_8026B900
    if (ctx->r15 != 0) {
        // 0x8026B8DC: addiu       $a2, $zero, 0x6
        ctx->r6 = ADD32(0, 0X6);
            goto L_8026B900;
    }
    // 0x8026B8DC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8026B8E0: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026B8E4: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x8026B8E8: addiu       $a3, $a3, 0x5018
    ctx->r7 = ADD32(ctx->r7, 0X5018);
    // 0x8026B8EC: addiu       $a1, $zero, 0xDE
    ctx->r5 = ADD32(0, 0XDE);
    // 0x8026B8F0: jal         0x8004CD24
    // 0x8026B8F4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x8026B8F4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_1:
    // 0x8026B8F8: b           L_8026B914
    // 0x8026B8FC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
        goto L_8026B914;
    // 0x8026B8FC: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
L_8026B900:
    // 0x8026B900: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x8026B904: lui         $a3, 0x803D
    ctx->r7 = S32(0X803D << 16);
    // 0x8026B908: jal         0x8004CD24
    // 0x8026B90C: addiu       $a3, $a3, 0x59F0
    ctx->r7 = ADD32(ctx->r7, 0X59F0);
    func_8004CD24(rdram, ctx);
        goto after_2;
    // 0x8026B90C: addiu       $a3, $a3, 0x59F0
    ctx->r7 = ADD32(ctx->r7, 0X59F0);
    after_2:
    // 0x8026B910: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
L_8026B914:
    // 0x8026B914: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8026B918: jal         0x8002135C
    // 0x8026B91C: addiu       $a2, $zero, 0xCB
    ctx->r6 = ADD32(0, 0XCB);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x8026B91C: addiu       $a2, $zero, 0xCB
    ctx->r6 = ADD32(0, 0XCB);
    after_3:
    // 0x8026B920: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x8026B924: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x8026B928: jal         0x8004CD44
    // 0x8026B92C: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    func_8004CD44(rdram, ctx);
        goto after_4;
    // 0x8026B92C: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_4:
    // 0x8026B930: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x8026B934: jal         0x8026CEF4
    // 0x8026B938: nop

    ovl_8026A0F0_func_8026CEF4(rdram, ctx);
        goto after_5;
    // 0x8026B938: nop

    after_5:
    // 0x8026B93C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026B940: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026B944: jr          $ra
    // 0x8026B948: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8026B948: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026B94C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B94C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026B950: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026B954: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8026B958: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026B95C: lb          $t6, 0x44($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X44);
    // 0x8026B960: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8026B964: bne         $t6, $at, L_8026B980
    if (ctx->r14 != ctx->r1) {
        // 0x8026B968: or          $a0, $a1, $zero
        ctx->r4 = ctx->r5 | 0;
            goto L_8026B980;
    }
    // 0x8026B968: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8026B96C: lb          $a1, 0x40($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X40);
    // 0x8026B970: jal         0x8026B99C
    // 0x8026B974: nop

    ovl_8026A0F0_func_8026B99C(rdram, ctx);
        goto after_0;
    // 0x8026B974: nop

    after_0:
    // 0x8026B978: b           L_8026B990
    // 0x8026B97C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026B990;
    // 0x8026B97C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026B980:
    // 0x8026B980: lb          $a1, 0x2E($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X2E);
    // 0x8026B984: jal         0x8026B99C
    // 0x8026B988: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_8026A0F0_func_8026B99C(rdram, ctx);
        goto after_1;
    // 0x8026B988: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x8026B98C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026B990:
    // 0x8026B990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026B994: jr          $ra
    // 0x8026B998: nop

    return;
    // 0x8026B998: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026B970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B970: jal         0x8026B99C
    // 0x8026B974: nop

    ovl_8026A0F0_func_8026B99C(rdram, ctx);
        goto after_0;
    // 0x8026B974: nop

    after_0:
    // 0x8026B978: b           L_8026B990
    // 0x8026B97C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026B990;
    // 0x8026B97C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B980: lb          $a1, 0x2E($v0)
    ctx->r5 = MEM_B(ctx->r2, 0X2E);
    // 0x8026B984: jal         0x8026B99C
    // 0x8026B988: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    ovl_8026A0F0_func_8026B99C(rdram, ctx);
        goto after_1;
    // 0x8026B988: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_1:
    // 0x8026B98C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026B990:
    // 0x8026B990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026B994: jr          $ra
    // 0x8026B998: nop

    return;
    // 0x8026B998: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026B99C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B99C: sll         $t6, $a1, 24
    ctx->r14 = S32(ctx->r5 << 24);
    // 0x8026B9A0: sra         $t7, $t6, 24
    ctx->r15 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8026B9A4: bne         $t7, $zero, L_8026B9BC
    if (ctx->r15 != 0) {
        // 0x8026B9A8: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_8026B9BC;
    }
    // 0x8026B9A8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8026B9AC: lui         $t8, 0x803D
    ctx->r24 = S32(0X803D << 16);
    // 0x8026B9B0: addiu       $t8, $t8, 0x5018
    ctx->r24 = ADD32(ctx->r24, 0X5018);
    // 0x8026B9B4: jr          $ra
    // 0x8026B9B8: sw          $t8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r24;
    return;
    // 0x8026B9B8: sw          $t8, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r24;
L_8026B9BC:
    // 0x8026B9BC: lui         $t9, 0x803D
    ctx->r25 = S32(0X803D << 16);
    // 0x8026B9C0: addiu       $t9, $t9, 0x59F0
    ctx->r25 = ADD32(ctx->r25, 0X59F0);
    // 0x8026B9C4: sw          $t9, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r25;
    // 0x8026B9C8: jr          $ra
    // 0x8026B9CC: nop

    return;
    // 0x8026B9CC: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026B9D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026B9D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026B9D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026B9D8: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026B9DC: addiu       $a0, $a0, -0x45F8
    ctx->r4 = ADD32(ctx->r4, -0X45F8);
    // 0x8026B9E0: jal         0x800293DC
    // 0x8026B9E4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x8026B9E4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x8026B9E8: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026B9EC: addiu       $a1, $a1, -0x310C
    ctx->r5 = ADD32(ctx->r5, -0X310C);
    // 0x8026B9F0: jal         0x8002A4C4
    // 0x8026B9F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8002A4C4(rdram, ctx);
        goto after_1;
    // 0x8026B9F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8026B9F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026B9FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026BA00: jr          $ra
    // 0x8026BA04: nop

    return;
    // 0x8026BA04: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026BA08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BA08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026BA0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026BA10: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8026BA14: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026BA18: lb          $t6, 0x44($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X44);
    // 0x8026BA1C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026BA20: bne         $t6, $at, L_8026BA4C
    if (ctx->r14 != ctx->r1) {
        // 0x8026BA24: lui         $a2, 0x8027
        ctx->r6 = S32(0X8027 << 16);
            goto L_8026BA4C;
    }
    // 0x8026BA24: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026BA28: lbu         $a0, 0x43($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X43);
    // 0x8026BA2C: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026BA30: addiu       $t7, $zero, 0xA
    ctx->r15 = ADD32(0, 0XA);
    // 0x8026BA34: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8026BA38: addiu       $a2, $a2, -0x1540
    ctx->r6 = ADD32(ctx->r6, -0X1540);
    // 0x8026BA3C: jal         0x8004C9FC
    // 0x8026BA40: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8004C9FC(rdram, ctx);
        goto after_0;
    // 0x8026BA40: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8026BA44: b           L_8026BA68
    // 0x8026BA48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8026BA68;
    // 0x8026BA48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026BA4C:
    // 0x8026BA4C: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8026BA50: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x8026BA54: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8026BA58: addiu       $a2, $a2, -0x1570
    ctx->r6 = ADD32(ctx->r6, -0X1570);
    // 0x8026BA5C: jal         0x8004C9FC
    // 0x8026BA60: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8004C9FC(rdram, ctx);
        goto after_1;
    // 0x8026BA60: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8026BA64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026BA68:
    // 0x8026BA68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026BA6C: jr          $ra
    // 0x8026BA70: nop

    return;
    // 0x8026BA70: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026BA74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BA74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026BA78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026BA7C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026BA80: jal         0x80029220
    // 0x8026BA84: addiu       $a0, $a0, -0x4568
    ctx->r4 = ADD32(ctx->r4, -0X4568);
    func_80029220(rdram, ctx);
        goto after_0;
    // 0x8026BA84: addiu       $a0, $a0, -0x4568
    ctx->r4 = ADD32(ctx->r4, -0X4568);
    after_0:
    // 0x8026BA88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026BA8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026BA90: jr          $ra
    // 0x8026BA94: nop

    return;
    // 0x8026BA94: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026BA98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BA98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026BA9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026BAA0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026BAA4: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8026BAA8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026BAAC: lb          $t6, 0x44($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X44);
    // 0x8026BAB0: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026BAB4: bne         $t6, $at, L_8026BAD4
    if (ctx->r14 != ctx->r1) {
        // 0x8026BAB8: lui         $a1, 0x8027
        ctx->r5 = S32(0X8027 << 16);
            goto L_8026BAD4;
    }
    // 0x8026BAB8: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026BABC: lbu         $a0, 0x43($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X43);
    // 0x8026BAC0: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026BAC4: jal         0x8026BAF0
    // 0x8026BAC8: addiu       $a1, $a1, -0x1540
    ctx->r5 = ADD32(ctx->r5, -0X1540);
    ovl_8026A0F0_func_8026BAF0(rdram, ctx);
        goto after_0;
    // 0x8026BAC8: addiu       $a1, $a1, -0x1540
    ctx->r5 = ADD32(ctx->r5, -0X1540);
    after_0:
    // 0x8026BACC: b           L_8026BAE4
    // 0x8026BAD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026BAE4;
    // 0x8026BAD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026BAD4:
    // 0x8026BAD4: lbu         $a0, -0x326C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X326C);
    // 0x8026BAD8: jal         0x8026BAF0
    // 0x8026BADC: addiu       $a1, $a1, -0x1570
    ctx->r5 = ADD32(ctx->r5, -0X1570);
    ovl_8026A0F0_func_8026BAF0(rdram, ctx);
        goto after_1;
    // 0x8026BADC: addiu       $a1, $a1, -0x1570
    ctx->r5 = ADD32(ctx->r5, -0X1570);
    after_1:
    // 0x8026BAE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026BAE4:
    // 0x8026BAE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026BAE8: jr          $ra
    // 0x8026BAEC: nop

    return;
    // 0x8026BAEC: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026BAF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BAF0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8026BAF4: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8026BAF8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8026BAFC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8026BB00: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8026BB04: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8026BB08: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8026BB0C: lui         $s5, 0x800E
    ctx->r21 = S32(0X800E << 16);
    // 0x8026BB10: lui         $s6, 0x2
    ctx->r22 = S32(0X2 << 16);
    // 0x8026BB14: lui         $s7, 0x3
    ctx->r23 = S32(0X3 << 16);
    // 0x8026BB18: andi        $s4, $a0, 0xFF
    ctx->r20 = ctx->r4 & 0XFF;
    // 0x8026BB1C: or          $fp, $a1, $zero
    ctx->r30 = ctx->r5 | 0;
    // 0x8026BB20: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8026BB24: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8026BB28: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8026BB2C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8026BB30: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8026BB34: ori         $s7, $s7, 0x8
    ctx->r23 = ctx->r23 | 0X8;
    // 0x8026BB38: ori         $s6, $s6, 0xFEC8
    ctx->r22 = ctx->r22 | 0XFEC8;
    // 0x8026BB3C: addiu       $s5, $s5, -0x3770
    ctx->r21 = ADD32(ctx->r21, -0X3770);
    // 0x8026BB40: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8026BB44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8026BB48:
    // 0x8026BB48: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x8026BB4C: addu        $s0, $fp, $t7
    ctx->r16 = ADD32(ctx->r30, ctx->r15);
    // 0x8026BB50: lh          $a3, 0x0($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X0);
    // 0x8026BB54: lh          $t0, 0x2($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2);
    // 0x8026BB58: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
    // 0x8026BB5C: addu        $s2, $s5, $t6
    ctx->r18 = ADD32(ctx->r21, ctx->r14);
    // 0x8026BB60: addiu       $a3, $a3, 0x21
    ctx->r7 = ADD32(ctx->r7, 0X21);
    // 0x8026BB64: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x8026BB68: addu        $s3, $s2, $s6
    ctx->r19 = ADD32(ctx->r18, ctx->r22);
    // 0x8026BB6C: addiu       $t1, $t0, 0x2
    ctx->r9 = ADD32(ctx->r8, 0X2);
    // 0x8026BB70: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8026BB74: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8026BB78: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8026BB7C: andi        $a1, $s4, 0xFF
    ctx->r5 = ctx->r20 & 0XFF;
    // 0x8026BB80: jal         0x8004CEE8
    // 0x8026BB84: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    func_8004CEE8(rdram, ctx);
        goto after_0;
    // 0x8026BB84: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    after_0:
    // 0x8026BB88: jal         0x8026CF08
    // 0x8026BB8C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_8026A0F0_func_8026CF08(rdram, ctx);
        goto after_1;
    // 0x8026BB8C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x8026BB90: lh          $a3, 0x0($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X0);
    // 0x8026BB94: lh          $t4, 0x2($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X2);
    // 0x8026BB98: addiu       $a3, $a3, -0xE
    ctx->r7 = ADD32(ctx->r7, -0XE);
    // 0x8026BB9C: sll         $t2, $a3, 16
    ctx->r10 = S32(ctx->r7 << 16);
    // 0x8026BBA0: addu        $s3, $s2, $s7
    ctx->r19 = ADD32(ctx->r18, ctx->r23);
    // 0x8026BBA4: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x8026BBA8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8026BBAC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8026BBB0: sra         $a3, $t2, 16
    ctx->r7 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8026BBB4: andi        $a1, $s4, 0xFF
    ctx->r5 = ctx->r20 & 0XFF;
    // 0x8026BBB8: jal         0x8004D320
    // 0x8026BBBC: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    func_8004D320(rdram, ctx);
        goto after_2;
    // 0x8026BBBC: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    after_2:
    // 0x8026BBC0: jal         0x8026CF08
    // 0x8026BBC4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_8026A0F0_func_8026CF08(rdram, ctx);
        goto after_3;
    // 0x8026BBC4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x8026BBC8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8026BBCC: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8026BBD0: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x8026BBD4: bne         $at, $zero, L_8026BB48
    if (ctx->r1 != 0) {
        // 0x8026BBD8: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_8026BB48;
    }
    // 0x8026BBD8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8026BBDC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8026BBE0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026BBE4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8026BBE8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8026BBEC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8026BBF0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8026BBF4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8026BBF8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8026BBFC: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8026BC00: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8026BC04: jr          $ra
    // 0x8026BC08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8026BC08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026BB00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BB00: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8026BB04: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8026BB08: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8026BB0C: lui         $s5, 0x800E
    ctx->r21 = S32(0X800E << 16);
    // 0x8026BB10: lui         $s6, 0x2
    ctx->r22 = S32(0X2 << 16);
    // 0x8026BB14: lui         $s7, 0x3
    ctx->r23 = S32(0X3 << 16);
    // 0x8026BB18: andi        $s4, $a0, 0xFF
    ctx->r20 = ctx->r4 & 0XFF;
    // 0x8026BB1C: or          $fp, $a1, $zero
    ctx->r30 = ctx->r5 | 0;
    // 0x8026BB20: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8026BB24: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8026BB28: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8026BB2C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8026BB30: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x8026BB34: ori         $s7, $s7, 0x8
    ctx->r23 = ctx->r23 | 0X8;
    // 0x8026BB38: ori         $s6, $s6, 0xFEC8
    ctx->r22 = ctx->r22 | 0XFEC8;
    // 0x8026BB3C: addiu       $s5, $s5, -0x3770
    ctx->r21 = ADD32(ctx->r21, -0X3770);
    // 0x8026BB40: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8026BB44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8026BB48:
    // 0x8026BB48: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x8026BB4C: addu        $s0, $fp, $t7
    ctx->r16 = ADD32(ctx->r30, ctx->r15);
    // 0x8026BB50: lh          $a3, 0x0($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X0);
    // 0x8026BB54: lh          $t0, 0x2($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2);
    // 0x8026BB58: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
    // 0x8026BB5C: addu        $s2, $s5, $t6
    ctx->r18 = ADD32(ctx->r21, ctx->r14);
    // 0x8026BB60: addiu       $a3, $a3, 0x21
    ctx->r7 = ADD32(ctx->r7, 0X21);
    // 0x8026BB64: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x8026BB68: addu        $s3, $s2, $s6
    ctx->r19 = ADD32(ctx->r18, ctx->r22);
    // 0x8026BB6C: addiu       $t1, $t0, 0x2
    ctx->r9 = ADD32(ctx->r8, 0X2);
    // 0x8026BB70: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8026BB74: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8026BB78: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8026BB7C: andi        $a1, $s4, 0xFF
    ctx->r5 = ctx->r20 & 0XFF;
    // 0x8026BB80: jal         0x8004CEE8
    // 0x8026BB84: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    func_8004CEE8(rdram, ctx);
        goto after_0;
    // 0x8026BB84: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    after_0:
    // 0x8026BB88: jal         0x8026CF08
    // 0x8026BB8C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_8026A0F0_func_8026CF08(rdram, ctx);
        goto after_1;
    // 0x8026BB8C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x8026BB90: lh          $a3, 0x0($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X0);
    // 0x8026BB94: lh          $t4, 0x2($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X2);
    // 0x8026BB98: addiu       $a3, $a3, -0xE
    ctx->r7 = ADD32(ctx->r7, -0XE);
    // 0x8026BB9C: sll         $t2, $a3, 16
    ctx->r10 = S32(ctx->r7 << 16);
    // 0x8026BBA0: addu        $s3, $s2, $s7
    ctx->r19 = ADD32(ctx->r18, ctx->r23);
    // 0x8026BBA4: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x8026BBA8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8026BBAC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8026BBB0: sra         $a3, $t2, 16
    ctx->r7 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8026BBB4: andi        $a1, $s4, 0xFF
    ctx->r5 = ctx->r20 & 0XFF;
    // 0x8026BBB8: jal         0x8004D320
    // 0x8026BBBC: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    func_8004D320(rdram, ctx);
        goto after_2;
    // 0x8026BBBC: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    after_2:
    // 0x8026BBC0: jal         0x8026CF08
    // 0x8026BBC4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_8026A0F0_func_8026CF08(rdram, ctx);
        goto after_3;
    // 0x8026BBC4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x8026BBC8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8026BBCC: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8026BBD0: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x8026BBD4: bne         $at, $zero, L_8026BB48
    if (ctx->r1 != 0) {
        // 0x8026BBD8: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_8026BB48;
    }
    // 0x8026BBD8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8026BBDC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8026BBE0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026BBE4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8026BBE8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8026BBEC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8026BBF0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8026BBF4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8026BBF8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8026BBFC: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8026BC00: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8026BC04: jr          $ra
    // 0x8026BC08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8026BC08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026BB48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8026BB48:
    // 0x8026BB48: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x8026BB4C: addu        $s0, $fp, $t7
    ctx->r16 = ADD32(ctx->r30, ctx->r15);
    // 0x8026BB50: lh          $a3, 0x0($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X0);
    // 0x8026BB54: lh          $t0, 0x2($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2);
    // 0x8026BB58: sll         $t6, $v0, 5
    ctx->r14 = S32(ctx->r2 << 5);
    // 0x8026BB5C: addu        $s2, $s5, $t6
    ctx->r18 = ADD32(ctx->r21, ctx->r14);
    // 0x8026BB60: addiu       $a3, $a3, 0x21
    ctx->r7 = ADD32(ctx->r7, 0X21);
    // 0x8026BB64: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x8026BB68: addu        $s3, $s2, $s6
    ctx->r19 = ADD32(ctx->r18, ctx->r22);
    // 0x8026BB6C: addiu       $t1, $t0, 0x2
    ctx->r9 = ADD32(ctx->r8, 0X2);
    // 0x8026BB70: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8026BB74: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8026BB78: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8026BB7C: andi        $a1, $s4, 0xFF
    ctx->r5 = ctx->r20 & 0XFF;
    // 0x8026BB80: jal         0x8004CEE8
    // 0x8026BB84: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    func_8004CEE8(rdram, ctx);
        goto after_0;
    // 0x8026BB84: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    after_0:
    // 0x8026BB88: jal         0x8026CF08
    // 0x8026BB8C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_8026A0F0_func_8026CF08(rdram, ctx);
        goto after_1;
    // 0x8026BB8C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x8026BB90: lh          $a3, 0x0($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X0);
    // 0x8026BB94: lh          $t4, 0x2($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X2);
    // 0x8026BB98: addiu       $a3, $a3, -0xE
    ctx->r7 = ADD32(ctx->r7, -0XE);
    // 0x8026BB9C: sll         $t2, $a3, 16
    ctx->r10 = S32(ctx->r7 << 16);
    // 0x8026BBA0: addu        $s3, $s2, $s7
    ctx->r19 = ADD32(ctx->r18, ctx->r23);
    // 0x8026BBA4: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x8026BBA8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8026BBAC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8026BBB0: sra         $a3, $t2, 16
    ctx->r7 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8026BBB4: andi        $a1, $s4, 0xFF
    ctx->r5 = ctx->r20 & 0XFF;
    // 0x8026BBB8: jal         0x8004D320
    // 0x8026BBBC: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    func_8004D320(rdram, ctx);
        goto after_2;
    // 0x8026BBBC: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    after_2:
    // 0x8026BBC0: jal         0x8026CF08
    // 0x8026BBC4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_8026A0F0_func_8026CF08(rdram, ctx);
        goto after_3;
    // 0x8026BBC4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x8026BBC8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8026BBCC: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8026BBD0: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x8026BBD4: bne         $at, $zero, L_8026BB48
    if (ctx->r1 != 0) {
        // 0x8026BBD8: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_8026BB48;
    }
    // 0x8026BBD8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8026BBDC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8026BBE0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026BBE4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8026BBE8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8026BBEC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8026BBF0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8026BBF4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8026BBF8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8026BBFC: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8026BC00: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8026BC04: jr          $ra
    // 0x8026BC08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8026BC08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026BB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8026BB48:
    // 0x8026BB68: addu        $s3, $s2, $s6
    ctx->r19 = ADD32(ctx->r18, ctx->r22);
    // 0x8026BB6C: addiu       $t1, $t0, 0x2
    ctx->r9 = ADD32(ctx->r8, 0X2);
    // 0x8026BB70: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8026BB74: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8026BB78: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8026BB7C: andi        $a1, $s4, 0xFF
    ctx->r5 = ctx->r20 & 0XFF;
    // 0x8026BB80: jal         0x8004CEE8
    // 0x8026BB84: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    func_8004CEE8(rdram, ctx);
        goto after_0;
    // 0x8026BB84: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    after_0:
    // 0x8026BB88: jal         0x8026CF08
    // 0x8026BB8C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_8026A0F0_func_8026CF08(rdram, ctx);
        goto after_1;
    // 0x8026BB8C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x8026BB90: lh          $a3, 0x0($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X0);
    // 0x8026BB94: lh          $t4, 0x2($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X2);
    // 0x8026BB98: addiu       $a3, $a3, -0xE
    ctx->r7 = ADD32(ctx->r7, -0XE);
    // 0x8026BB9C: sll         $t2, $a3, 16
    ctx->r10 = S32(ctx->r7 << 16);
    // 0x8026BBA0: addu        $s3, $s2, $s7
    ctx->r19 = ADD32(ctx->r18, ctx->r23);
    // 0x8026BBA4: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x8026BBA8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8026BBAC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8026BBB0: sra         $a3, $t2, 16
    ctx->r7 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8026BBB4: andi        $a1, $s4, 0xFF
    ctx->r5 = ctx->r20 & 0XFF;
    // 0x8026BBB8: jal         0x8004D320
    // 0x8026BBBC: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    func_8004D320(rdram, ctx);
        goto after_2;
    // 0x8026BBBC: andi        $a2, $s1, 0xFF
    ctx->r6 = ctx->r17 & 0XFF;
    after_2:
    // 0x8026BBC0: jal         0x8026CF08
    // 0x8026BBC4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    ovl_8026A0F0_func_8026CF08(rdram, ctx);
        goto after_3;
    // 0x8026BBC4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x8026BBC8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8026BBCC: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x8026BBD0: slti        $at, $v0, 0xB
    ctx->r1 = SIGNED(ctx->r2) < 0XB ? 1 : 0;
    // 0x8026BBD4: bne         $at, $zero, L_8026BB48
    if (ctx->r1 != 0) {
            // 0x8026BBD8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    ovl_8026A0F0_func_8026BB48(rdram, ctx);
    return;
    }
    // 0x8026BBD8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8026BBDC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8026BBE0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026BBE4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8026BBE8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8026BBEC: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8026BBF0: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8026BBF4: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8026BBF8: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8026BBFC: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8026BC00: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8026BC04: jr          $ra
    // 0x8026BC08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8026BC08: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026BC0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BC0C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8026BC10: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8026BC14: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8026BC18: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8026BC1C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8026BC20: lui         $s2, 0x803D
    ctx->r18 = S32(0X803D << 16);
    // 0x8026BC24: lui         $s3, 0x803D
    ctx->r19 = S32(0X803D << 16);
    // 0x8026BC28: lui         $s4, 0x8027
    ctx->r20 = S32(0X8027 << 16);
    // 0x8026BC2C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8026BC30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026BC34: addiu       $s4, $s4, -0x4308
    ctx->r20 = ADD32(ctx->r20, -0X4308);
    // 0x8026BC38: addiu       $s3, $s3, -0x56E4
    ctx->r19 = ADD32(ctx->r19, -0X56E4);
    // 0x8026BC3C: addiu       $s2, $s2, -0x56F0
    ctx->r18 = ADD32(ctx->r18, -0X56F0);
    // 0x8026BC40: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8026BC44: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
L_8026BC48:
    // 0x8026BC48: jal         0x800293DC
    // 0x8026BC4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x8026BC4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8026BC50: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x8026BC54: sb          $s1, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r17;
    // 0x8026BC58: addiu       $a1, $zero, 0x419
    ctx->r5 = ADD32(0, 0X419);
    // 0x8026BC5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8026BC60: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x8026BC64: jal         0x8004CD24
    // 0x8026BC68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x8026BC68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8026BC6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026BC70: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8026BC74: jal         0x8002135C
    // 0x8026BC78: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8026BC78: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    after_2:
    // 0x8026BC7C: jal         0x8026CEF4
    // 0x8026BC80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8026A0F0_func_8026CEF4(rdram, ctx);
        goto after_3;
    // 0x8026BC80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8026BC84: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8026BC88: addiu       $a1, $zero, 0x264
    ctx->r5 = ADD32(0, 0X264);
    // 0x8026BC8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8026BC90: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x8026BC94: jal         0x8004CD24
    // 0x8026BC98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD24(rdram, ctx);
        goto after_4;
    // 0x8026BC98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8026BC9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026BCA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8026BCA4: jal         0x8002135C
    // 0x8026BCA8: addiu       $a2, $zero, 0xCA
    ctx->r6 = ADD32(0, 0XCA);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x8026BCA8: addiu       $a2, $zero, 0xCA
    ctx->r6 = ADD32(0, 0XCA);
    after_5:
    // 0x8026BCAC: jal         0x8026CEF4
    // 0x8026BCB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8026A0F0_func_8026CEF4(rdram, ctx);
        goto after_6;
    // 0x8026BCB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8026BCB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026BCB8: jal         0x8004CD90
    // 0x8026BCBC: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    func_8004CD90(rdram, ctx);
        goto after_7;
    // 0x8026BCBC: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    after_7:
    // 0x8026BCC0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8026BCC4: sll         $t6, $s1, 24
    ctx->r14 = S32(ctx->r17 << 24);
    // 0x8026BCC8: sra         $s1, $t6, 24
    ctx->r17 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8026BCCC: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
    // 0x8026BCD0: bne         $at, $zero, L_8026BC48
    if (ctx->r1 != 0) {
        // 0x8026BCD4: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_8026BC48;
    }
    // 0x8026BCD4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8026BCD8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8026BCDC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026BCE0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8026BCE4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8026BCE8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8026BCEC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8026BCF0: jr          $ra
    // 0x8026BCF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8026BCF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026BC48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8026BC48:
    // 0x8026BC48: jal         0x800293DC
    // 0x8026BC4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x8026BC4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8026BC50: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x8026BC54: sb          $s1, 0x38($v0)
    MEM_B(0X38, ctx->r2) = ctx->r17;
    // 0x8026BC58: addiu       $a1, $zero, 0x419
    ctx->r5 = ADD32(0, 0X419);
    // 0x8026BC5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8026BC60: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x8026BC64: jal         0x8004CD24
    // 0x8026BC68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x8026BC68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8026BC6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026BC70: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8026BC74: jal         0x8002135C
    // 0x8026BC78: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8026BC78: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    after_2:
    // 0x8026BC7C: jal         0x8026CEF4
    // 0x8026BC80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8026A0F0_func_8026CEF4(rdram, ctx);
        goto after_3;
    // 0x8026BC80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8026BC84: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8026BC88: addiu       $a1, $zero, 0x264
    ctx->r5 = ADD32(0, 0X264);
    // 0x8026BC8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8026BC90: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x8026BC94: jal         0x8004CD24
    // 0x8026BC98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD24(rdram, ctx);
        goto after_4;
    // 0x8026BC98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8026BC9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026BCA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8026BCA4: jal         0x8002135C
    // 0x8026BCA8: addiu       $a2, $zero, 0xCA
    ctx->r6 = ADD32(0, 0XCA);
    func_8002135C(rdram, ctx);
        goto after_5;
    // 0x8026BCA8: addiu       $a2, $zero, 0xCA
    ctx->r6 = ADD32(0, 0XCA);
    after_5:
    // 0x8026BCAC: jal         0x8026CEF4
    // 0x8026BCB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8026A0F0_func_8026CEF4(rdram, ctx);
        goto after_6;
    // 0x8026BCB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8026BCB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026BCB8: jal         0x8004CD90
    // 0x8026BCBC: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    func_8004CD90(rdram, ctx);
        goto after_7;
    // 0x8026BCBC: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    after_7:
    // 0x8026BCC0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8026BCC4: sll         $t6, $s1, 24
    ctx->r14 = S32(ctx->r17 << 24);
    // 0x8026BCC8: sra         $s1, $t6, 24
    ctx->r17 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8026BCCC: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
    // 0x8026BCD0: bne         $at, $zero, L_8026BC48
    if (ctx->r1 != 0) {
        // 0x8026BCD4: or          $a0, $s4, $zero
        ctx->r4 = ctx->r20 | 0;
            goto L_8026BC48;
    }
    // 0x8026BCD4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8026BCD8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8026BCDC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026BCE0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8026BCE4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8026BCE8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8026BCEC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8026BCF0: jr          $ra
    // 0x8026BCF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8026BCF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026BC5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
L_8026BC48:
    // 0x8026BC5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8026BC60: or          $a3, $s2, $zero
    ctx->r7 = ctx->r18 | 0;
    // 0x8026BC64: jal         0x8004CD24
    // 0x8026BC68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8026BC68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8026BC6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026BC70: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8026BC74: jal         0x8002135C
    // 0x8026BC78: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8026BC78: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    after_1:
    // 0x8026BC7C: jal         0x8026CEF4
    // 0x8026BC80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8026A0F0_func_8026CEF4(rdram, ctx);
        goto after_2;
    // 0x8026BC80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8026BC84: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8026BC88: addiu       $a1, $zero, 0x264
    ctx->r5 = ADD32(0, 0X264);
    // 0x8026BC8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8026BC90: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x8026BC94: jal         0x8004CD24
    // 0x8026BC98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD24(rdram, ctx);
        goto after_3;
    // 0x8026BC98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8026BC9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026BCA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8026BCA4: jal         0x8002135C
    // 0x8026BCA8: addiu       $a2, $zero, 0xCA
    ctx->r6 = ADD32(0, 0XCA);
    func_8002135C(rdram, ctx);
        goto after_4;
    // 0x8026BCA8: addiu       $a2, $zero, 0xCA
    ctx->r6 = ADD32(0, 0XCA);
    after_4:
    // 0x8026BCAC: jal         0x8026CEF4
    // 0x8026BCB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8026A0F0_func_8026CEF4(rdram, ctx);
        goto after_5;
    // 0x8026BCB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8026BCB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026BCB8: jal         0x8004CD90
    // 0x8026BCBC: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    func_8004CD90(rdram, ctx);
        goto after_6;
    // 0x8026BCBC: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    after_6:
    // 0x8026BCC0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8026BCC4: sll         $t6, $s1, 24
    ctx->r14 = S32(ctx->r17 << 24);
    // 0x8026BCC8: sra         $s1, $t6, 24
    ctx->r17 = S32(SIGNED(ctx->r14) >> 24);
    // 0x8026BCCC: slti        $at, $s1, 0xB
    ctx->r1 = SIGNED(ctx->r17) < 0XB ? 1 : 0;
    // 0x8026BCD0: bne         $at, $zero, L_8026BC48
    if (ctx->r1 != 0) {
            // 0x8026BCD4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    ovl_8026A0F0_func_8026BC48(rdram, ctx);
    return;
    }
    // 0x8026BCD4: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8026BCD8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8026BCDC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026BCE0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8026BCE4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8026BCE8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8026BCEC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8026BCF0: jr          $ra
    // 0x8026BCF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8026BCF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026BCF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BCF8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8026BCFC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8026BD00: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8026BD04: lw          $t0, 0x8($a0)
    ctx->r8 = MEM_W(ctx->r4, 0X8);
    // 0x8026BD08: lb          $v0, 0x38($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X38);
    // 0x8026BD0C: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x8026BD10: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8026BD14: addiu       $a0, $a0, -0x321C
    ctx->r4 = ADD32(ctx->r4, -0X321C);
    // 0x8026BD18: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    // 0x8026BD1C: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x8026BD20: sb          $v0, 0x47($sp)
    MEM_B(0X47, ctx->r29) = ctx->r2;
    // 0x8026BD24: jal         0x8002A468
    // 0x8026BD28: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    func_8002A468(rdram, ctx);
        goto after_0;
    // 0x8026BD28: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    after_0:
    // 0x8026BD2C: lb          $v0, 0x47($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X47);
    // 0x8026BD30: lui         $at, 0x3
    ctx->r1 = S32(0X3 << 16);
    // 0x8026BD34: ori         $at, $at, 0x168
    ctx->r1 = ctx->r1 | 0X168;
    // 0x8026BD38: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8026BD3C: sll         $t7, $v0, 5
    ctx->r15 = S32(ctx->r2 << 5);
    // 0x8026BD40: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x8026BD44: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x8026BD48: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    // 0x8026BD4C: jal         0x8002F310
    // 0x8026BD50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002F310(rdram, ctx);
        goto after_1;
    // 0x8026BD50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8026BD54: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8026BD58: lb          $v0, 0x47($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X47);
    // 0x8026BD5C: lb          $t1, 0x44($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X44);
    // 0x8026BD60: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x8026BD64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026BD68: bne         $t1, $at, L_8026BE00
    if (ctx->r9 != ctx->r1) {
        // 0x8026BD6C: addu        $v1, $t0, $v0
        ctx->r3 = ADD32(ctx->r8, ctx->r2);
            goto L_8026BE00;
    }
    // 0x8026BD6C: addu        $v1, $t0, $v0
    ctx->r3 = ADD32(ctx->r8, ctx->r2);
    // 0x8026BD70: addu        $v1, $t0, $v0
    ctx->r3 = ADD32(ctx->r8, ctx->r2);
    // 0x8026BD74: lb          $t2, 0x54($v1)
    ctx->r10 = MEM_B(ctx->r3, 0X54);
    // 0x8026BD78: lui         $t3, 0x803D
    ctx->r11 = S32(0X803D << 16);
    // 0x8026BD7C: beq         $t2, $zero, L_8026BE88
    if (ctx->r10 == 0) {
        // 0x8026BD80: addiu       $t3, $t3, -0x563C
        ctx->r11 = ADD32(ctx->r11, -0X563C);
            goto L_8026BE88;
    }
    // 0x8026BD80: addiu       $t3, $t3, -0x563C
    ctx->r11 = ADD32(ctx->r11, -0X563C);
    // 0x8026BD84: sw          $t3, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r11;
    // 0x8026BD88: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8026BD8C: lui         $t4, 0x803D
    ctx->r12 = S32(0X803D << 16);
    // 0x8026BD90: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x8026BD94: addiu       $t4, $t4, -0x5648
    ctx->r12 = ADD32(ctx->r12, -0X5648);
    // 0x8026BD98: addiu       $t7, $t7, -0x1540
    ctx->r15 = ADD32(ctx->r15, -0X1540);
    // 0x8026BD9C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8026BDA0: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x8026BDA4: sw          $t4, 0x30($t5)
    MEM_W(0X30, ctx->r13) = ctx->r12;
    // 0x8026BDA8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8026BDAC: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x8026BDB0: jal         0x8026BE98
    // 0x8026BDB4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_8026A0F0_func_8026BE98(rdram, ctx);
        goto after_2;
    // 0x8026BDB4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x8026BDB8: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8026BDBC: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x8026BDC0: lh          $a3, 0x0($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X0);
    // 0x8026BDC4: lh          $t1, 0x2($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X2);
    // 0x8026BDC8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8026BDCC: addiu       $a3, $a3, -0x22
    ctx->r7 = ADD32(ctx->r7, -0X22);
    // 0x8026BDD0: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x8026BDD4: lbu         $a1, -0x326C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X326C);
    // 0x8026BDD8: lbu         $a2, 0x54($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X54);
    // 0x8026BDDC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8026BDE0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8026BDE4: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8026BDE8: jal         0x8004D320
    // 0x8026BDEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004D320(rdram, ctx);
        goto after_3;
    // 0x8026BDEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8026BDF0: jal         0x8026CF08
    // 0x8026BDF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8026A0F0_func_8026CF08(rdram, ctx);
        goto after_4;
    // 0x8026BDF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8026BDF8: b           L_8026BE8C
    // 0x8026BDFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8026BE8C;
    // 0x8026BDFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8026BE00:
    // 0x8026BE00: lb          $t3, 0x48($v1)
    ctx->r11 = MEM_B(ctx->r3, 0X48);
    // 0x8026BE04: lui         $t4, 0x803D
    ctx->r12 = S32(0X803D << 16);
    // 0x8026BE08: beq         $t3, $zero, L_8026BE88
    if (ctx->r11 == 0) {
        // 0x8026BE0C: addiu       $t4, $t4, -0x56F0
        ctx->r12 = ADD32(ctx->r12, -0X56F0);
            goto L_8026BE88;
    }
    // 0x8026BE0C: addiu       $t4, $t4, -0x56F0
    ctx->r12 = ADD32(ctx->r12, -0X56F0);
    // 0x8026BE10: sw          $t4, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r12;
    // 0x8026BE14: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8026BE18: lui         $t5, 0x803D
    ctx->r13 = S32(0X803D << 16);
    // 0x8026BE1C: addiu       $t5, $t5, -0x56E4
    ctx->r13 = ADD32(ctx->r13, -0X56E4);
    // 0x8026BE20: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x8026BE24: addiu       $t8, $t8, -0x1570
    ctx->r24 = ADD32(ctx->r24, -0X1570);
    // 0x8026BE28: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8026BE2C: sw          $t5, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r13;
    // 0x8026BE30: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x8026BE34: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8026BE38: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x8026BE3C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x8026BE40: jal         0x8026BE98
    // 0x8026BE44: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_8026A0F0_func_8026BE98(rdram, ctx);
        goto after_5;
    // 0x8026BE44: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_5:
    // 0x8026BE48: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8026BE4C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x8026BE50: lh          $a3, 0x0($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X0);
    // 0x8026BE54: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8026BE58: lh          $t2, 0x2($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X2);
    // 0x8026BE5C: addiu       $a3, $a3, 0x5C
    ctx->r7 = ADD32(ctx->r7, 0X5C);
    // 0x8026BE60: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x8026BE64: lbu         $a2, 0x48($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X48);
    // 0x8026BE68: lbu         $a1, 0x43($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X43);
    // 0x8026BE6C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8026BE70: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8026BE74: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8026BE78: jal         0x8004D320
    // 0x8026BE7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004D320(rdram, ctx);
        goto after_6;
    // 0x8026BE7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8026BE80: jal         0x8026CF08
    // 0x8026BE84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8026A0F0_func_8026CF08(rdram, ctx);
        goto after_7;
    // 0x8026BE84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_8026BE88:
    // 0x8026BE88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8026BE8C:
    // 0x8026BE8C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026BE90: jr          $ra
    // 0x8026BE94: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8026BE94: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026BD38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BD38: lui         $t9, 0x800E
    ctx->r25 = S32(0X800E << 16);
    // 0x8026BD3C: sll         $t7, $v0, 5
    ctx->r15 = S32(ctx->r2 << 5);
    // 0x8026BD40: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x8026BD44: addiu       $t9, $t9, -0x3770
    ctx->r25 = ADD32(ctx->r25, -0X3770);
    // 0x8026BD48: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    // 0x8026BD4C: jal         0x8002F310
    // 0x8026BD50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8002F310(rdram, ctx);
        goto after_0;
    // 0x8026BD50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8026BD54: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8026BD58: lb          $v0, 0x47($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X47);
    // 0x8026BD5C: lb          $t1, 0x44($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X44);
    // 0x8026BD60: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x8026BD64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026BD68: bne         $t1, $at, L_8026BE00
    if (ctx->r9 != ctx->r1) {
        // 0x8026BD6C: addu        $v1, $t0, $v0
        ctx->r3 = ADD32(ctx->r8, ctx->r2);
            goto L_8026BE00;
    }
    // 0x8026BD6C: addu        $v1, $t0, $v0
    ctx->r3 = ADD32(ctx->r8, ctx->r2);
    // 0x8026BD70: addu        $v1, $t0, $v0
    ctx->r3 = ADD32(ctx->r8, ctx->r2);
    // 0x8026BD74: lb          $t2, 0x54($v1)
    ctx->r10 = MEM_B(ctx->r3, 0X54);
    // 0x8026BD78: lui         $t3, 0x803D
    ctx->r11 = S32(0X803D << 16);
    // 0x8026BD7C: beq         $t2, $zero, L_8026BE88
    if (ctx->r10 == 0) {
        // 0x8026BD80: addiu       $t3, $t3, -0x563C
        ctx->r11 = ADD32(ctx->r11, -0X563C);
            goto L_8026BE88;
    }
    // 0x8026BD80: addiu       $t3, $t3, -0x563C
    ctx->r11 = ADD32(ctx->r11, -0X563C);
    // 0x8026BD84: sw          $t3, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r11;
    // 0x8026BD88: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8026BD8C: lui         $t4, 0x803D
    ctx->r12 = S32(0X803D << 16);
    // 0x8026BD90: lui         $t7, 0x8027
    ctx->r15 = S32(0X8027 << 16);
    // 0x8026BD94: addiu       $t4, $t4, -0x5648
    ctx->r12 = ADD32(ctx->r12, -0X5648);
    // 0x8026BD98: addiu       $t7, $t7, -0x1540
    ctx->r15 = ADD32(ctx->r15, -0X1540);
    // 0x8026BD9C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8026BDA0: addu        $a1, $t6, $t7
    ctx->r5 = ADD32(ctx->r14, ctx->r15);
    // 0x8026BDA4: sw          $t4, 0x30($t5)
    MEM_W(0X30, ctx->r13) = ctx->r12;
    // 0x8026BDA8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8026BDAC: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x8026BDB0: jal         0x8026BE98
    // 0x8026BDB4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_8026A0F0_func_8026BE98(rdram, ctx);
        goto after_1;
    // 0x8026BDB4: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_1:
    // 0x8026BDB8: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8026BDBC: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x8026BDC0: lh          $a3, 0x0($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X0);
    // 0x8026BDC4: lh          $t1, 0x2($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X2);
    // 0x8026BDC8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8026BDCC: addiu       $a3, $a3, -0x22
    ctx->r7 = ADD32(ctx->r7, -0X22);
    // 0x8026BDD0: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x8026BDD4: lbu         $a1, -0x326C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X326C);
    // 0x8026BDD8: lbu         $a2, 0x54($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X54);
    // 0x8026BDDC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8026BDE0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8026BDE4: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8026BDE8: jal         0x8004D320
    // 0x8026BDEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004D320(rdram, ctx);
        goto after_2;
    // 0x8026BDEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8026BDF0: jal         0x8026CF08
    // 0x8026BDF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8026A0F0_func_8026CF08(rdram, ctx);
        goto after_3;
    // 0x8026BDF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8026BDF8: b           L_8026BE8C
    // 0x8026BDFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8026BE8C;
    // 0x8026BDFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8026BE00:
    // 0x8026BE00: lb          $t3, 0x48($v1)
    ctx->r11 = MEM_B(ctx->r3, 0X48);
    // 0x8026BE04: lui         $t4, 0x803D
    ctx->r12 = S32(0X803D << 16);
    // 0x8026BE08: beq         $t3, $zero, L_8026BE88
    if (ctx->r11 == 0) {
        // 0x8026BE0C: addiu       $t4, $t4, -0x56F0
        ctx->r12 = ADD32(ctx->r12, -0X56F0);
            goto L_8026BE88;
    }
    // 0x8026BE0C: addiu       $t4, $t4, -0x56F0
    ctx->r12 = ADD32(ctx->r12, -0X56F0);
    // 0x8026BE10: sw          $t4, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r12;
    // 0x8026BE14: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8026BE18: lui         $t5, 0x803D
    ctx->r13 = S32(0X803D << 16);
    // 0x8026BE1C: addiu       $t5, $t5, -0x56E4
    ctx->r13 = ADD32(ctx->r13, -0X56E4);
    // 0x8026BE20: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x8026BE24: addiu       $t8, $t8, -0x1570
    ctx->r24 = ADD32(ctx->r24, -0X1570);
    // 0x8026BE28: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8026BE2C: sw          $t5, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r13;
    // 0x8026BE30: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x8026BE34: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8026BE38: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x8026BE3C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x8026BE40: jal         0x8026BE98
    // 0x8026BE44: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_8026A0F0_func_8026BE98(rdram, ctx);
        goto after_4;
    // 0x8026BE44: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_4:
    // 0x8026BE48: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8026BE4C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x8026BE50: lh          $a3, 0x0($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X0);
    // 0x8026BE54: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8026BE58: lh          $t2, 0x2($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X2);
    // 0x8026BE5C: addiu       $a3, $a3, 0x5C
    ctx->r7 = ADD32(ctx->r7, 0X5C);
    // 0x8026BE60: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x8026BE64: lbu         $a2, 0x48($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X48);
    // 0x8026BE68: lbu         $a1, 0x43($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X43);
    // 0x8026BE6C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8026BE70: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8026BE74: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8026BE78: jal         0x8004D320
    // 0x8026BE7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004D320(rdram, ctx);
        goto after_5;
    // 0x8026BE7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8026BE80: jal         0x8026CF08
    // 0x8026BE84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8026A0F0_func_8026CF08(rdram, ctx);
        goto after_6;
    // 0x8026BE84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_8026BE88:
    // 0x8026BE88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8026BE8C:
    // 0x8026BE8C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026BE90: jr          $ra
    // 0x8026BE94: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8026BE94: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026BDB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BDB8: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8026BDBC: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x8026BDC0: lh          $a3, 0x0($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X0);
    // 0x8026BDC4: lh          $t1, 0x2($v0)
    ctx->r9 = MEM_H(ctx->r2, 0X2);
    // 0x8026BDC8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8026BDCC: addiu       $a3, $a3, -0x22
    ctx->r7 = ADD32(ctx->r7, -0X22);
    // 0x8026BDD0: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x8026BDD4: lbu         $a1, -0x326C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X326C);
    // 0x8026BDD8: lbu         $a2, 0x54($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X54);
    // 0x8026BDDC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8026BDE0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8026BDE4: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8026BDE8: jal         0x8004D320
    // 0x8026BDEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004D320(rdram, ctx);
        goto after_0;
    // 0x8026BDEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8026BDF0: jal         0x8026CF08
    // 0x8026BDF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8026A0F0_func_8026CF08(rdram, ctx);
        goto after_1;
    // 0x8026BDF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8026BDF8: b           L_8026BE8C
    // 0x8026BDFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_8026BE8C;
    // 0x8026BDFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026BE00: lb          $t3, 0x48($v1)
    ctx->r11 = MEM_B(ctx->r3, 0X48);
    // 0x8026BE04: lui         $t4, 0x803D
    ctx->r12 = S32(0X803D << 16);
    // 0x8026BE08: beq         $t3, $zero, L_8026BE88
    if (ctx->r11 == 0) {
        // 0x8026BE0C: addiu       $t4, $t4, -0x56F0
        ctx->r12 = ADD32(ctx->r12, -0X56F0);
            goto L_8026BE88;
    }
    // 0x8026BE0C: addiu       $t4, $t4, -0x56F0
    ctx->r12 = ADD32(ctx->r12, -0X56F0);
    // 0x8026BE10: sw          $t4, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r12;
    // 0x8026BE14: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8026BE18: lui         $t5, 0x803D
    ctx->r13 = S32(0X803D << 16);
    // 0x8026BE1C: addiu       $t5, $t5, -0x56E4
    ctx->r13 = ADD32(ctx->r13, -0X56E4);
    // 0x8026BE20: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x8026BE24: addiu       $t8, $t8, -0x1570
    ctx->r24 = ADD32(ctx->r24, -0X1570);
    // 0x8026BE28: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8026BE2C: sw          $t5, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r13;
    // 0x8026BE30: addu        $a1, $t7, $t8
    ctx->r5 = ADD32(ctx->r15, ctx->r24);
    // 0x8026BE34: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8026BE38: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x8026BE3C: sw          $v1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r3;
    // 0x8026BE40: jal         0x8026BE98
    // 0x8026BE44: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    ovl_8026A0F0_func_8026BE98(rdram, ctx);
        goto after_2;
    // 0x8026BE44: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    after_2:
    // 0x8026BE48: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8026BE4C: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x8026BE50: lh          $a3, 0x0($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X0);
    // 0x8026BE54: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8026BE58: lh          $t2, 0x2($v0)
    ctx->r10 = MEM_H(ctx->r2, 0X2);
    // 0x8026BE5C: addiu       $a3, $a3, 0x5C
    ctx->r7 = ADD32(ctx->r7, 0X5C);
    // 0x8026BE60: sll         $t9, $a3, 16
    ctx->r25 = S32(ctx->r7 << 16);
    // 0x8026BE64: lbu         $a2, 0x48($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X48);
    // 0x8026BE68: lbu         $a1, 0x43($t0)
    ctx->r5 = MEM_BU(ctx->r8, 0X43);
    // 0x8026BE6C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8026BE70: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8026BE74: sra         $a3, $t9, 16
    ctx->r7 = S32(SIGNED(ctx->r25) >> 16);
    // 0x8026BE78: jal         0x8004D320
    // 0x8026BE7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004D320(rdram, ctx);
        goto after_3;
    // 0x8026BE7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8026BE80: jal         0x8026CF08
    // 0x8026BE84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8026A0F0_func_8026CF08(rdram, ctx);
        goto after_4;
    // 0x8026BE84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_8026BE88:
    // 0x8026BE88: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8026BE8C:
    // 0x8026BE8C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8026BE90: jr          $ra
    // 0x8026BE94: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8026BE94: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026BE98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BE98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8026BE9C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8026BEA0: addiu       $s2, $zero, -0x1
    ctx->r18 = ADD32(0, -0X1);
    // 0x8026BEA4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8026BEA8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026BEAC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8026BEB0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8026BEB4: beq         $a0, $s2, L_8026BEDC
    if (ctx->r4 == ctx->r18) {
        // 0x8026BEB8: sw          $ra, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r31;
            goto L_8026BEDC;
    }
    // 0x8026BEB8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
L_8026BEBC:
    // 0x8026BEBC: lh          $a1, 0x0($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X0);
    // 0x8026BEC0: lh          $a2, 0x2($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X2);
    // 0x8026BEC4: jal         0x8004CD44
    // 0x8026BEC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8004CD44(rdram, ctx);
        goto after_0;
    // 0x8026BEC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8026BECC: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x8026BED0: nop

    // 0x8026BED4: bne         $s0, $s2, L_8026BEBC
    if (ctx->r16 != ctx->r18) {
        // 0x8026BED8: nop
    
            goto L_8026BEBC;
    }
    // 0x8026BED8: nop

L_8026BEDC:
    // 0x8026BEDC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8026BEE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026BEE4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8026BEE8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8026BEEC: jr          $ra
    // 0x8026BEF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8026BEF0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026BEF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BEF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026BEF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026BEFC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026BF00: addiu       $a0, $a0, -0x40D4
    ctx->r4 = ADD32(ctx->r4, -0X40D4);
    // 0x8026BF04: jal         0x800293DC
    // 0x8026BF08: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800293DC(rdram, ctx);
        goto after_0;
    // 0x8026BF08: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x8026BF0C: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026BF10: addiu       $a1, $a1, -0x310C
    ctx->r5 = ADD32(ctx->r5, -0X310C);
    // 0x8026BF14: jal         0x8002A4C4
    // 0x8026BF18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8002A4C4(rdram, ctx);
        goto after_1;
    // 0x8026BF18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8026BF1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026BF20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026BF24: jr          $ra
    // 0x8026BF28: nop

    return;
    // 0x8026BF28: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026BF2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026BF2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026BF30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026BF34: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026BF38: lw          $v0, 0x8($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X8);
    // 0x8026BF3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026BF40: lb          $t6, 0x44($v0)
    ctx->r14 = MEM_B(ctx->r2, 0X44);
    // 0x8026BF44: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8026BF48: bne         $t6, $at, L_8026BF70
    if (ctx->r14 != ctx->r1) {
        // 0x8026BF4C: nop
    
            goto L_8026BF70;
    }
    // 0x8026BF4C: nop

    // 0x8026BF50: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8026BF54: lbu         $a1, 0x43($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X43);
    // 0x8026BF58: lb          $a2, 0x40($v0)
    ctx->r6 = MEM_B(ctx->r2, 0X40);
    // 0x8026BF5C: lb          $a3, 0x3B($v0)
    ctx->r7 = MEM_B(ctx->r2, 0X3B);
    // 0x8026BF60: jal         0x8026BF98
    // 0x8026BF64: nop

    ovl_8026A0F0_func_8026BF98(rdram, ctx);
        goto after_0;
    // 0x8026BF64: nop

    after_0:
    // 0x8026BF68: b           L_8026BF8C
    // 0x8026BF6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026BF8C;
    // 0x8026BF6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026BF70:
    // 0x8026BF70: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8026BF74: lbu         $a1, -0x326C($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X326C);
    // 0x8026BF78: lb          $a2, 0x2E($v0)
    ctx->r6 = MEM_B(ctx->r2, 0X2E);
    // 0x8026BF7C: lb          $a3, 0x3A($v0)
    ctx->r7 = MEM_B(ctx->r2, 0X3A);
    // 0x8026BF80: jal         0x8026BF98
    // 0x8026BF84: nop

    ovl_8026A0F0_func_8026BF98(rdram, ctx);
        goto after_1;
    // 0x8026BF84: nop

    after_1:
    // 0x8026BF88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026BF8C:
    // 0x8026BF8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026BF90: jr          $ra
    // 0x8026BF94: nop

    return;
    // 0x8026BF94: nop

;}
