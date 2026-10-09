#include "iss64_recomp.h"
#include "funcs.h"

RECOMP_FUNC void ovl_8026A0F0_func_8026D8C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D8C8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026D8CC: addiu       $a0, $a0, 0x4890
    ctx->r4 = ADD32(ctx->r4, 0X4890);
    // 0x8026D8D0: lh          $v0, 0xEDC($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XEDC);
    // 0x8026D8D4: lh          $v1, 0x112C($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X112C);
    // 0x8026D8D8: addiu       $v0, $v0, -0x18
    ctx->r2 = ADD32(ctx->r2, -0X18);
    // 0x8026D8DC: sll         $t6, $v0, 16
    ctx->r14 = S32(ctx->r2 << 16);
    // 0x8026D8E0: addiu       $v1, $v1, 0x18
    ctx->r3 = ADD32(ctx->r3, 0X18);
    // 0x8026D8E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026D8E8: sra         $v0, $t6, 16
    ctx->r2 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8026D8EC: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x8026D8F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D8F4: bgtz        $v0, L_8026D900
    if (SIGNED(ctx->r2) > 0) {
        // 0x8026D8F8: sra         $v1, $t8, 16
        ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
            goto L_8026D900;
    }
    // 0x8026D8F8: sra         $v1, $t8, 16
    ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8026D8FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8026D900:
    // 0x8026D900: bltz        $v1, L_8026D90C
    if (SIGNED(ctx->r3) < 0) {
        // 0x8026D904: lui         $t0, 0x8027
        ctx->r8 = S32(0X8027 << 16);
            goto L_8026D90C;
    }
    // 0x8026D904: lui         $t0, 0x8027
    ctx->r8 = S32(0X8027 << 16);
    // 0x8026D908: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_8026D90C:
    // 0x8026D90C: sh          $v0, 0xEDC($a0)
    MEM_H(0XEDC, ctx->r4) = ctx->r2;
    // 0x8026D910: sh          $v1, 0x112C($a0)
    MEM_H(0X112C, ctx->r4) = ctx->r3;
    // 0x8026D914: lbu         $t0, -0xBC0($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0XBC0);
    // 0x8026D918: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026D91C: beq         $t0, $at, L_8026D960
    if (ctx->r8 == ctx->r1) {
        // 0x8026D920: lui         $a0, 0x8027
        ctx->r4 = S32(0X8027 << 16);
            goto L_8026D960;
    }
    // 0x8026D920: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026D924: addiu       $t1, $zero, 0x48
    ctx->r9 = ADD32(0, 0X48);
    // 0x8026D928: subu        $a1, $t1, $v0
    ctx->r5 = SUB32(ctx->r9, ctx->r2);
    // 0x8026D92C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026D930: lb          $a0, -0xBBF($a0)
    ctx->r4 = MEM_B(ctx->r4, -0XBBF);
    // 0x8026D934: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x8026D938: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8026D93C: addiu       $a2, $zero, 0x5C
    ctx->r6 = ADD32(0, 0X5C);
    // 0x8026D940: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8026D944: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x8026D948: jal         0x80039F88
    // 0x8026D94C: sh          $v1, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r3;
    func_80039F88(rdram, ctx);
        goto after_0;
    // 0x8026D94C: sh          $v1, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x8026D950: lh          $v0, 0x1E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1E);
    // 0x8026D954: lh          $v1, 0x1C($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1C);
    // 0x8026D958: b           L_8026D998
    // 0x8026D95C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026D998;
    // 0x8026D95C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026D960:
    // 0x8026D960: addiu       $t4, $zero, 0x90
    ctx->r12 = ADD32(0, 0X90);
    // 0x8026D964: subu        $a1, $t4, $v0
    ctx->r5 = SUB32(ctx->r12, ctx->r2);
    // 0x8026D968: sll         $t5, $a1, 16
    ctx->r13 = S32(ctx->r5 << 16);
    // 0x8026D96C: lb          $a0, -0xBBF($a0)
    ctx->r4 = MEM_B(ctx->r4, -0XBBF);
    // 0x8026D970: sra         $a1, $t5, 16
    ctx->r5 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8026D974: addiu       $a2, $zero, 0x56
    ctx->r6 = ADD32(0, 0X56);
    // 0x8026D978: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8026D97C: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x8026D980: jal         0x80039F88
    // 0x8026D984: sh          $v1, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r3;
    func_80039F88(rdram, ctx);
        goto after_1;
    // 0x8026D984: sh          $v1, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x8026D988: lh          $v0, 0x1E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1E);
    // 0x8026D98C: lh          $v1, 0x1C($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1C);
    // 0x8026D990: nop

    // 0x8026D994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026D998:
    // 0x8026D998: bne         $v0, $zero, L_8026D9B4
    if (ctx->r2 != 0) {
        // 0x8026D99C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8026D9B4;
    }
    // 0x8026D99C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8026D9A0: bne         $v1, $zero, L_8026D9B4
    if (ctx->r3 != 0) {
        // 0x8026D9A4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8026D9B4;
    }
    // 0x8026D9A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8026D9A8: b           L_8026D9B4
    // 0x8026D9AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8026D9B4;
    // 0x8026D9AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8026D9B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8026D9B4:
    // 0x8026D9B4: jr          $ra
    // 0x8026D9B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8026D9B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D928: subu        $a1, $t1, $v0
    ctx->r5 = SUB32(ctx->r9, ctx->r2);
    // 0x8026D92C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026D930: lb          $a0, -0xBBF($a0)
    ctx->r4 = MEM_B(ctx->r4, -0XBBF);
    // 0x8026D934: sll         $t2, $a1, 16
    ctx->r10 = S32(ctx->r5 << 16);
    // 0x8026D938: sra         $a1, $t2, 16
    ctx->r5 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8026D93C: addiu       $a2, $zero, 0x5C
    ctx->r6 = ADD32(0, 0X5C);
    // 0x8026D940: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8026D944: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x8026D948: jal         0x80039F88
    // 0x8026D94C: sh          $v1, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r3;
    func_80039F88(rdram, ctx);
        goto after_0;
    // 0x8026D94C: sh          $v1, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r3;
    after_0:
    // 0x8026D950: lh          $v0, 0x1E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1E);
    // 0x8026D954: lh          $v1, 0x1C($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1C);
    // 0x8026D958: b           L_8026D998
    // 0x8026D95C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026D998;
    // 0x8026D95C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D960: addiu       $t4, $zero, 0x90
    ctx->r12 = ADD32(0, 0X90);
    // 0x8026D964: subu        $a1, $t4, $v0
    ctx->r5 = SUB32(ctx->r12, ctx->r2);
    // 0x8026D968: sll         $t5, $a1, 16
    ctx->r13 = S32(ctx->r5 << 16);
    // 0x8026D96C: lb          $a0, -0xBBF($a0)
    ctx->r4 = MEM_B(ctx->r4, -0XBBF);
    // 0x8026D970: sra         $a1, $t5, 16
    ctx->r5 = S32(SIGNED(ctx->r13) >> 16);
    // 0x8026D974: addiu       $a2, $zero, 0x56
    ctx->r6 = ADD32(0, 0X56);
    // 0x8026D978: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x8026D97C: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x8026D980: jal         0x80039F88
    // 0x8026D984: sh          $v1, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r3;
    func_80039F88(rdram, ctx);
        goto after_1;
    // 0x8026D984: sh          $v1, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x8026D988: lh          $v0, 0x1E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X1E);
    // 0x8026D98C: lh          $v1, 0x1C($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X1C);
    // 0x8026D990: nop

    // 0x8026D994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026D998:
    // 0x8026D998: bne         $v0, $zero, L_8026D9B4
    if (ctx->r2 != 0) {
        // 0x8026D99C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8026D9B4;
    }
    // 0x8026D99C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8026D9A0: bne         $v1, $zero, L_8026D9B4
    if (ctx->r3 != 0) {
        // 0x8026D9A4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_8026D9B4;
    }
    // 0x8026D9A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8026D9A8: b           L_8026D9B4
    // 0x8026D9AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8026D9B4;
    // 0x8026D9AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8026D9B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8026D9B4:
    // 0x8026D9B4: jr          $ra
    // 0x8026D9B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8026D9B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026D9BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026D9BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026D9C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026D9C4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8026D9C8: jal         0x80029354
    // 0x8026D9CC: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    func_80029354(rdram, ctx);
        goto after_0;
    // 0x8026D9CC: addiu       $a0, $a0, -0x1E98
    ctx->r4 = ADD32(ctx->r4, -0X1E98);
    after_0:
    // 0x8026D9D0: lw          $a0, 0x14($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X14);
    // 0x8026D9D4: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x8026D9D8: addiu       $a3, $a3, -0x11D8
    ctx->r7 = ADD32(ctx->r7, -0X11D8);
    // 0x8026D9DC: addiu       $a1, $zero, 0x610
    ctx->r5 = ADD32(0, 0X610);
    // 0x8026D9E0: jal         0x8004CD24
    // 0x8026D9E4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8004CD24(rdram, ctx);
        goto after_1;
    // 0x8026D9E4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x8026D9E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026D9EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026D9F0: jr          $ra
    // 0x8026D9F4: nop

    return;
    // 0x8026D9F4: nop

    // 0x8026D9F8: nop

    // 0x8026D9FC: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026DA00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DA00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026DA04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026DA08: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8026DA0C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8026DA10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026DA14: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026DA18: jal         0x80036234
    // 0x8026DA1C: sb          $t6, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = ctx->r14;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x8026DA1C: sb          $t6, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = ctx->r14;
    after_0:
    // 0x8026DA20: jal         0x80020A4C
    // 0x8026DA24: nop

    func_80020A4C(rdram, ctx);
        goto after_1;
    // 0x8026DA24: nop

    after_1:
    // 0x8026DA28: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x8026DA2C: jal         0x80020318
    // 0x8026DA30: addiu       $a1, $zero, 0xAF
    ctx->r5 = ADD32(0, 0XAF);
    func_80020318(rdram, ctx);
        goto after_2;
    // 0x8026DA30: addiu       $a1, $zero, 0xAF
    ctx->r5 = ADD32(0, 0XAF);
    after_2:
    // 0x8026DA34: jal         0x800202D8
    // 0x8026DA38: nop

    func_800202D8(rdram, ctx);
        goto after_3;
    // 0x8026DA38: nop

    after_3:
    // 0x8026DA3C: jal         0x80029A54
    // 0x8026DA40: nop

    func_80029A54(rdram, ctx);
        goto after_4;
    // 0x8026DA40: nop

    after_4:
    // 0x8026DA44: jal         0x8002F1F0
    // 0x8026DA48: nop

    func_8002F1F0(rdram, ctx);
        goto after_5;
    // 0x8026DA48: nop

    after_5:
    // 0x8026DA4C: jal         0x8002F2AC
    // 0x8026DA50: nop

    func_8002F2AC(rdram, ctx);
        goto after_6;
    // 0x8026DA50: nop

    after_6:
    // 0x8026DA54: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x8026DA58: jal         0x8007AAE0
    // 0x8026DA5C: addiu       $a0, $a0, -0x330C
    ctx->r4 = ADD32(ctx->r4, -0X330C);
    func_8007AAE0(rdram, ctx);
        goto after_7;
    // 0x8026DA5C: addiu       $a0, $a0, -0x330C
    ctx->r4 = ADD32(ctx->r4, -0X330C);
    after_7:
    // 0x8026DA60: jal         0x80073F40
    // 0x8026DA64: nop

    func_80073F40(rdram, ctx);
        goto after_8;
    // 0x8026DA64: nop

    after_8:
    // 0x8026DA68: jal         0x800356EC
    // 0x8026DA6C: nop

    func_800356EC(rdram, ctx);
        goto after_9;
    // 0x8026DA6C: nop

    after_9:
    // 0x8026DA70: jal         0x80021004
    // 0x8026DA74: nop

    func_80021004(rdram, ctx);
        goto after_10;
    // 0x8026DA74: nop

    after_10:
    // 0x8026DA78: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x8026DA7C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8026DA80: jal         0x80049E40
    // 0x8026DA84: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_11;
    // 0x8026DA84: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_11:
    // 0x8026DA88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8026DA8C: jal         0x80020318
    // 0x8026DA90: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80020318(rdram, ctx);
        goto after_12;
    // 0x8026DA90: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_12:
    // 0x8026DA94: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8026DA98: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8026DA9C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8026DAA0: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8026DAA4: sh          $t7, 0x5220($at)
    MEM_H(0X5220, ctx->r1) = ctx->r15;
    // 0x8026DAA8: lbu         $t8, 0x754($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X754);
    // 0x8026DAAC: nop

    // 0x8026DAB0: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x8026DAB4: jal         0x8026DD8C
    // 0x8026DAB8: sb          $t9, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r25;
    ovl_8026A0F0_func_8026DD8C(rdram, ctx);
        goto after_13;
    // 0x8026DAB8: sb          $t9, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r25;
    after_13:
    // 0x8026DABC: jal         0x8006196C
    // 0x8026DAC0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006196C(rdram, ctx);
        goto after_14;
    // 0x8026DAC0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_14:
    // 0x8026DAC4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026DAC8: jal         0x800296E0
    // 0x8026DACC: addiu       $a0, $a0, -0x2520
    ctx->r4 = ADD32(ctx->r4, -0X2520);
    func_800296E0(rdram, ctx);
        goto after_15;
    // 0x8026DACC: addiu       $a0, $a0, -0x2520
    ctx->r4 = ADD32(ctx->r4, -0X2520);
    after_15:
    // 0x8026DAD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026DAD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026DAD8: jr          $ra
    // 0x8026DADC: nop

    return;
    // 0x8026DADC: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026DA7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DA7C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8026DA80: jal         0x80049E40
    // 0x8026DA84: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_0;
    // 0x8026DA84: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_0:
    // 0x8026DA88: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8026DA8C: jal         0x80020318
    // 0x8026DA90: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80020318(rdram, ctx);
        goto after_1;
    // 0x8026DA90: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_1:
    // 0x8026DA94: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8026DA98: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8026DA9C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8026DAA0: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8026DAA4: sh          $t7, 0x5220($at)
    MEM_H(0X5220, ctx->r1) = ctx->r15;
    // 0x8026DAA8: lbu         $t8, 0x754($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X754);
    // 0x8026DAAC: nop

    // 0x8026DAB0: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x8026DAB4: jal         0x8026DD8C
    // 0x8026DAB8: sb          $t9, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r25;
    ovl_8026A0F0_func_8026DD8C(rdram, ctx);
        goto after_2;
    // 0x8026DAB8: sb          $t9, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r25;
    after_2:
    // 0x8026DABC: jal         0x8006196C
    // 0x8026DAC0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8006196C(rdram, ctx);
        goto after_3;
    // 0x8026DAC0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x8026DAC4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026DAC8: jal         0x800296E0
    // 0x8026DACC: addiu       $a0, $a0, -0x2520
    ctx->r4 = ADD32(ctx->r4, -0X2520);
    func_800296E0(rdram, ctx);
        goto after_4;
    // 0x8026DACC: addiu       $a0, $a0, -0x2520
    ctx->r4 = ADD32(ctx->r4, -0X2520);
    after_4:
    // 0x8026DAD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026DAD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026DAD8: jr          $ra
    // 0x8026DADC: nop

    return;
    // 0x8026DADC: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026DAE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DAE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026DAE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026DAE8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026DAEC: jal         0x8026E090
    // 0x8026DAF0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_8026A0F0_func_8026E090(rdram, ctx);
        goto after_0;
    // 0x8026DAF0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8026DAF4: jal         0x800375E8
    // 0x8026DAF8: nop

    func_800375E8(rdram, ctx);
        goto after_1;
    // 0x8026DAF8: nop

    after_1:
    // 0x8026DAFC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026DB00: addiu       $a0, $a0, -0x24E4
    ctx->r4 = ADD32(ctx->r4, -0X24E4);
    // 0x8026DB04: jal         0x8002989C
    // 0x8026DB08: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_2;
    // 0x8026DB08: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_2:
    // 0x8026DB0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026DB10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026DB14: jr          $ra
    // 0x8026DB18: nop

    return;
    // 0x8026DB18: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026DB1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DB1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026DB20: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8026DB24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026DB28: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8026DB2C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026DB30: addiu       $a0, $a0, 0x6E84
    ctx->r4 = ADD32(ctx->r4, 0X6E84);
    // 0x8026DB34: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026DB38: jal         0x8026E0B4
    // 0x8026DB3C: addiu       $a2, $zero, 0x90
    ctx->r6 = ADD32(0, 0X90);
    ovl_8026A0F0_func_8026E0B4(rdram, ctx);
        goto after_0;
    // 0x8026DB3C: addiu       $a2, $zero, 0x90
    ctx->r6 = ADD32(0, 0X90);
    after_0:
    // 0x8026DB40: jal         0x8026E020
    // 0x8026DB44: nop

    ovl_8026A0F0_func_8026E020(rdram, ctx);
        goto after_1;
    // 0x8026DB44: nop

    after_1:
    // 0x8026DB48: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x8026DB4C: lbu         $v0, -0xBB0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0XBB0);
    // 0x8026DB50: nop

    // 0x8026DB54: beq         $v0, $zero, L_8026DB6C
    if (ctx->r2 == 0) {
        // 0x8026DB58: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_8026DB6C;
    }
    // 0x8026DB58: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026DB5C: beq         $v0, $at, L_8026DC08
    if (ctx->r2 == ctx->r1) {
        // 0x8026DB60: nop
    
            goto L_8026DC08;
    }
    // 0x8026DB60: nop

    // 0x8026DB64: b           L_8026DC90
    // 0x8026DB68: nop

        goto L_8026DC90;
    // 0x8026DB68: nop

L_8026DB6C:
    // 0x8026DB6C: jal         0x8026DEB8
    // 0x8026DB70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_8026A0F0_func_8026DEB8(rdram, ctx);
        goto after_2;
    // 0x8026DB70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x8026DB74: jal         0x8026DF6C
    // 0x8026DB78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_8026A0F0_func_8026DF6C(rdram, ctx);
        goto after_3;
    // 0x8026DB78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x8026DB7C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026DB80: lb          $a0, -0x326B($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X326B);
    // 0x8026DB84: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8026DB88: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x8026DB8C: jal         0x80039F88
    // 0x8026DB90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80039F88(rdram, ctx);
        goto after_4;
    // 0x8026DB90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_4:
    // 0x8026DB94: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026DB98: addiu       $a0, $a0, 0x6EFC
    ctx->r4 = ADD32(ctx->r4, 0X6EFC);
    // 0x8026DB9C: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
    // 0x8026DBA0: jal         0x8026DE24
    // 0x8026DBA4: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    ovl_8026A0F0_func_8026DE24(rdram, ctx);
        goto after_5;
    // 0x8026DBA4: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    after_5:
    // 0x8026DBA8: jal         0x80061ACC
    // 0x8026DBAC: nop

    func_80061ACC(rdram, ctx);
        goto after_6;
    // 0x8026DBAC: nop

    after_6:
    // 0x8026DBB0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8026DBB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8026DBB8: lui         $a1, 0x4110
    ctx->r5 = S32(0X4110 << 16);
    // 0x8026DBBC: lui         $a2, 0x41A8
    ctx->r6 = S32(0X41A8 << 16);
    // 0x8026DBC0: jal         0x80062B1C
    // 0x8026DBC4: lui         $a3, 0xC48C
    ctx->r7 = S32(0XC48C << 16);
    func_80062B1C(rdram, ctx);
        goto after_7;
    // 0x8026DBC4: lui         $a3, 0xC48C
    ctx->r7 = S32(0XC48C << 16);
    after_7:
    // 0x8026DBC8: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x8026DBCC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026DBD0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8026DBD4: jal         0x80061FC0
    // 0x8026DBD8: swc1        $f4, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f4.u32l;
    func_80061FC0(rdram, ctx);
        goto after_8;
    // 0x8026DBD8: swc1        $f4, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f4.u32l;
    after_8:
    // 0x8026DBDC: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x8026DBE0: addiu       $v1, $v1, -0xBAC
    ctx->r3 = ADD32(ctx->r3, -0XBAC);
    // 0x8026DBE4: lui         $a3, 0xC43B
    ctx->r7 = S32(0XC43B << 16);
    // 0x8026DBE8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8026DBEC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x8026DBF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8026DBF4: lui         $a1, 0xC2E2
    ctx->r5 = S32(0XC2E2 << 16);
    // 0x8026DBF8: jal         0x80062B1C
    // 0x8026DBFC: lui         $a2, 0x4278
    ctx->r6 = S32(0X4278 << 16);
    func_80062B1C(rdram, ctx);
        goto after_9;
    // 0x8026DBFC: lui         $a2, 0x4278
    ctx->r6 = S32(0X4278 << 16);
    after_9:
    // 0x8026DC00: b           L_8026DC90
    // 0x8026DC04: nop

        goto L_8026DC90;
    // 0x8026DC04: nop

L_8026DC08:
    // 0x8026DC08: jal         0x8026DEB8
    // 0x8026DC0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_8026A0F0_func_8026DEB8(rdram, ctx);
        goto after_10;
    // 0x8026DC0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x8026DC10: jal         0x8026DF6C
    // 0x8026DC14: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_8026A0F0_func_8026DF6C(rdram, ctx);
        goto after_11;
    // 0x8026DC14: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_11:
    // 0x8026DC18: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026DC1C: lb          $a0, -0x326B($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X326B);
    // 0x8026DC20: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8026DC24: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    // 0x8026DC28: jal         0x80039F88
    // 0x8026DC2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80039F88(rdram, ctx);
        goto after_12;
    // 0x8026DC2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_12:
    // 0x8026DC30: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026DC34: addiu       $a0, $a0, 0x6EFC
    ctx->r4 = ADD32(ctx->r4, 0X6EFC);
    // 0x8026DC38: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x8026DC3C: jal         0x8026DE24
    // 0x8026DC40: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    ovl_8026A0F0_func_8026DE24(rdram, ctx);
        goto after_13;
    // 0x8026DC40: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_13:
    // 0x8026DC44: jal         0x80061A10
    // 0x8026DC48: nop

    func_80061A10(rdram, ctx);
        goto after_14;
    // 0x8026DC48: nop

    after_14:
    // 0x8026DC4C: lui         $a1, 0x4384
    ctx->r5 = S32(0X4384 << 16);
    // 0x8026DC50: lui         $a3, 0xC49E
    ctx->r7 = S32(0XC49E << 16);
    // 0x8026DC54: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x8026DC58: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x8026DC5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8026DC60: jal         0x80062B1C
    // 0x8026DC64: lui         $a2, 0xC1C8
    ctx->r6 = S32(0XC1C8 << 16);
    func_80062B1C(rdram, ctx);
        goto after_15;
    // 0x8026DC64: lui         $a2, 0xC1C8
    ctx->r6 = S32(0XC1C8 << 16);
    after_15:
    // 0x8026DC68: jal         0x80061FC0
    // 0x8026DC6C: nop

    func_80061FC0(rdram, ctx);
        goto after_16;
    // 0x8026DC6C: nop

    after_16:
    // 0x8026DC70: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x8026DC74: addiu       $v1, $v1, -0xBAC
    ctx->r3 = ADD32(ctx->r3, -0XBAC);
    // 0x8026DC78: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8026DC7C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8026DC80: lui         $a1, 0x4228
    ctx->r5 = S32(0X4228 << 16);
    // 0x8026DC84: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    // 0x8026DC88: jal         0x80062B1C
    // 0x8026DC8C: lui         $a3, 0xC3C3
    ctx->r7 = S32(0XC3C3 << 16);
    func_80062B1C(rdram, ctx);
        goto after_17;
    // 0x8026DC8C: lui         $a3, 0xC3C3
    ctx->r7 = S32(0XC3C3 << 16);
    after_17:
L_8026DC90:
    // 0x8026DC90: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8026DC94: sb          $zero, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = 0;
    // 0x8026DC98: jal         0x80021A40
    // 0x8026DC9C: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    func_80021A40(rdram, ctx);
        goto after_18;
    // 0x8026DC9C: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_18:
    // 0x8026DCA0: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026DCA4: jal         0x800296E0
    // 0x8026DCA8: addiu       $a0, $a0, -0x2344
    ctx->r4 = ADD32(ctx->r4, -0X2344);
    func_800296E0(rdram, ctx);
        goto after_19;
    // 0x8026DCA8: addiu       $a0, $a0, -0x2344
    ctx->r4 = ADD32(ctx->r4, -0X2344);
    after_19:
    // 0x8026DCAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026DCB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026DCB4: jr          $ra
    // 0x8026DCB8: nop

    return;
    // 0x8026DCB8: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026DB68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DB68: nop

    // 0x8026DB6C: jal         0x8026DEB8
    // 0x8026DB70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_8026A0F0_func_8026DEB8(rdram, ctx);
        goto after_0;
    // 0x8026DB70: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8026DB74: jal         0x8026DF6C
    // 0x8026DB78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    ovl_8026A0F0_func_8026DF6C(rdram, ctx);
        goto after_1;
    // 0x8026DB78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8026DB7C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026DB80: lb          $a0, -0x326B($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X326B);
    // 0x8026DB84: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8026DB88: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x8026DB8C: jal         0x80039F88
    // 0x8026DB90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80039F88(rdram, ctx);
        goto after_2;
    // 0x8026DB90: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_2:
    // 0x8026DB94: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026DB98: addiu       $a0, $a0, 0x6EFC
    ctx->r4 = ADD32(ctx->r4, 0X6EFC);
    // 0x8026DB9C: addiu       $a1, $zero, 0x98
    ctx->r5 = ADD32(0, 0X98);
    // 0x8026DBA0: jal         0x8026DE24
    // 0x8026DBA4: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    ovl_8026A0F0_func_8026DE24(rdram, ctx);
        goto after_3;
    // 0x8026DBA4: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    after_3:
    // 0x8026DBA8: jal         0x80061ACC
    // 0x8026DBAC: nop

    func_80061ACC(rdram, ctx);
        goto after_4;
    // 0x8026DBAC: nop

    after_4:
    // 0x8026DBB0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8026DBB4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8026DBB8: lui         $a1, 0x4110
    ctx->r5 = S32(0X4110 << 16);
    // 0x8026DBBC: lui         $a2, 0x41A8
    ctx->r6 = S32(0X41A8 << 16);
    // 0x8026DBC0: jal         0x80062B1C
    // 0x8026DBC4: lui         $a3, 0xC48C
    ctx->r7 = S32(0XC48C << 16);
    func_80062B1C(rdram, ctx);
        goto after_5;
    // 0x8026DBC4: lui         $a3, 0xC48C
    ctx->r7 = S32(0XC48C << 16);
    after_5:
    // 0x8026DBC8: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x8026DBCC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8026DBD0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8026DBD4: jal         0x80061FC0
    // 0x8026DBD8: swc1        $f4, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f4.u32l;
    func_80061FC0(rdram, ctx);
        goto after_6;
    // 0x8026DBD8: swc1        $f4, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f4.u32l;
    after_6:
    // 0x8026DBDC: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x8026DBE0: addiu       $v1, $v1, -0xBAC
    ctx->r3 = ADD32(ctx->r3, -0XBAC);
    // 0x8026DBE4: lui         $a3, 0xC43B
    ctx->r7 = S32(0XC43B << 16);
    // 0x8026DBE8: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8026DBEC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x8026DBF0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8026DBF4: lui         $a1, 0xC2E2
    ctx->r5 = S32(0XC2E2 << 16);
    // 0x8026DBF8: jal         0x80062B1C
    // 0x8026DBFC: lui         $a2, 0x4278
    ctx->r6 = S32(0X4278 << 16);
    func_80062B1C(rdram, ctx);
        goto after_7;
    // 0x8026DBFC: lui         $a2, 0x4278
    ctx->r6 = S32(0X4278 << 16);
    after_7:
    // 0x8026DC00: b           L_8026DC90
    // 0x8026DC04: nop

        goto L_8026DC90;
    // 0x8026DC04: nop

    // 0x8026DC08: jal         0x8026DEB8
    // 0x8026DC0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_8026A0F0_func_8026DEB8(rdram, ctx);
        goto after_8;
    // 0x8026DC0C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x8026DC10: jal         0x8026DF6C
    // 0x8026DC14: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    ovl_8026A0F0_func_8026DF6C(rdram, ctx);
        goto after_9;
    // 0x8026DC14: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_9:
    // 0x8026DC18: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026DC1C: lb          $a0, -0x326B($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X326B);
    // 0x8026DC20: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8026DC24: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    // 0x8026DC28: jal         0x80039F88
    // 0x8026DC2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80039F88(rdram, ctx);
        goto after_10;
    // 0x8026DC2C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_10:
    // 0x8026DC30: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026DC34: addiu       $a0, $a0, 0x6EFC
    ctx->r4 = ADD32(ctx->r4, 0X6EFC);
    // 0x8026DC38: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x8026DC3C: jal         0x8026DE24
    // 0x8026DC40: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    ovl_8026A0F0_func_8026DE24(rdram, ctx);
        goto after_11;
    // 0x8026DC40: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    after_11:
    // 0x8026DC44: jal         0x80061A10
    // 0x8026DC48: nop

    func_80061A10(rdram, ctx);
        goto after_12;
    // 0x8026DC48: nop

    after_12:
    // 0x8026DC4C: lui         $a1, 0x4384
    ctx->r5 = S32(0X4384 << 16);
    // 0x8026DC50: lui         $a3, 0xC49E
    ctx->r7 = S32(0XC49E << 16);
    // 0x8026DC54: ori         $a3, $a3, 0xC000
    ctx->r7 = ctx->r7 | 0XC000;
    // 0x8026DC58: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x8026DC5C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8026DC60: jal         0x80062B1C
    // 0x8026DC64: lui         $a2, 0xC1C8
    ctx->r6 = S32(0XC1C8 << 16);
    func_80062B1C(rdram, ctx);
        goto after_13;
    // 0x8026DC64: lui         $a2, 0xC1C8
    ctx->r6 = S32(0XC1C8 << 16);
    after_13:
    // 0x8026DC68: jal         0x80061FC0
    // 0x8026DC6C: nop

    func_80061FC0(rdram, ctx);
        goto after_14;
    // 0x8026DC6C: nop

    after_14:
    // 0x8026DC70: lui         $v1, 0x8027
    ctx->r3 = S32(0X8027 << 16);
    // 0x8026DC74: addiu       $v1, $v1, -0xBAC
    ctx->r3 = ADD32(ctx->r3, -0XBAC);
    // 0x8026DC78: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8026DC7C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8026DC80: lui         $a1, 0x4228
    ctx->r5 = S32(0X4228 << 16);
    // 0x8026DC84: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    // 0x8026DC88: jal         0x80062B1C
    // 0x8026DC8C: lui         $a3, 0xC3C3
    ctx->r7 = S32(0XC3C3 << 16);
    func_80062B1C(rdram, ctx);
        goto after_15;
    // 0x8026DC8C: lui         $a3, 0xC3C3
    ctx->r7 = S32(0XC3C3 << 16);
    after_15:
L_8026DC90:
    // 0x8026DC90: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8026DC94: sb          $zero, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = 0;
    // 0x8026DC98: jal         0x80021A40
    // 0x8026DC9C: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    func_80021A40(rdram, ctx);
        goto after_16;
    // 0x8026DC9C: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_16:
    // 0x8026DCA0: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026DCA4: jal         0x800296E0
    // 0x8026DCA8: addiu       $a0, $a0, -0x2344
    ctx->r4 = ADD32(ctx->r4, -0X2344);
    func_800296E0(rdram, ctx);
        goto after_17;
    // 0x8026DCA8: addiu       $a0, $a0, -0x2344
    ctx->r4 = ADD32(ctx->r4, -0X2344);
    after_17:
    // 0x8026DCAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026DCB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026DCB4: jr          $ra
    // 0x8026DCB8: nop

    return;
    // 0x8026DCB8: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026DC94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DC94: sb          $zero, -0x4B5C($at)
    MEM_B(-0X4B5C, ctx->r1) = 0;
    // 0x8026DC98: jal         0x80021A40
    // 0x8026DC9C: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    func_80021A40(rdram, ctx);
        goto after_0;
    // 0x8026DC9C: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    after_0:
    // 0x8026DCA0: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026DCA4: jal         0x800296E0
    // 0x8026DCA8: addiu       $a0, $a0, -0x2344
    ctx->r4 = ADD32(ctx->r4, -0X2344);
    func_800296E0(rdram, ctx);
        goto after_1;
    // 0x8026DCA8: addiu       $a0, $a0, -0x2344
    ctx->r4 = ADD32(ctx->r4, -0X2344);
    after_1:
    // 0x8026DCAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026DCB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026DCB4: jr          $ra
    // 0x8026DCB8: nop

    return;
    // 0x8026DCB8: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026DCBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DCBC: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8026DCC0: lh          $t6, -0x2FAC($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X2FAC);
    // 0x8026DCC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026DCC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026DCCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026DCD0: bgtz        $t6, L_8026DD00
    if (SIGNED(ctx->r14) > 0) {
        // 0x8026DCD4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8026DD00;
    }
    // 0x8026DCD4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026DCD8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8026DCDC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026DCE0: sb          $t7, -0x326D($at)
    MEM_B(-0X326D, ctx->r1) = ctx->r15;
    // 0x8026DCE4: jal         0x80015BC0
    // 0x8026DCE8: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    func_80015BC0(rdram, ctx);
        goto after_0;
    // 0x8026DCE8: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_0:
    // 0x8026DCEC: jal         0x80021940
    // 0x8026DCF0: nop

    func_80021940(rdram, ctx);
        goto after_1;
    // 0x8026DCF0: nop

    after_1:
    // 0x8026DCF4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026DCF8: jal         0x800296E0
    // 0x8026DCFC: addiu       $a0, $a0, -0x22F0
    ctx->r4 = ADD32(ctx->r4, -0X22F0);
    func_800296E0(rdram, ctx);
        goto after_2;
    // 0x8026DCFC: addiu       $a0, $a0, -0x22F0
    ctx->r4 = ADD32(ctx->r4, -0X22F0);
    after_2:
L_8026DD00:
    // 0x8026DD00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026DD04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026DD08: jr          $ra
    // 0x8026DD0C: nop

    return;
    // 0x8026DD0C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026DD08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DD08: jr          $ra
    // 0x8026DD0C: nop

    return;
    // 0x8026DD0C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026DD10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DD10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026DD14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026DD18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026DD1C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026DD20: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026DD24: addiu       $a0, $a0, -0x22C0
    ctx->r4 = ADD32(ctx->r4, -0X22C0);
    // 0x8026DD28: jal         0x8002989C
    // 0x8026DD2C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x8026DD2C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_0:
    // 0x8026DD30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026DD34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026DD38: jr          $ra
    // 0x8026DD3C: nop

    return;
    // 0x8026DD3C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026DD40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DD40: lui         $t6, 0x8010
    ctx->r14 = S32(0X8010 << 16);
    // 0x8026DD44: lhu         $t6, 0x523C($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X523C);
    // 0x8026DD48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026DD4C: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x8026DD50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026DD54: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026DD58: beq         $t7, $zero, L_8026DD7C
    if (ctx->r15 == 0) {
        // 0x8026DD5C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8026DD7C;
    }
    // 0x8026DD5C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026DD60: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8026DD64: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8026DD68: lbu         $t8, 0x754($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X754);
    // 0x8026DD6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8026DD70: andi        $t9, $t8, 0xFFF7
    ctx->r25 = ctx->r24 & 0XFFF7;
    // 0x8026DD74: jal         0x80037BA8
    // 0x8026DD78: sb          $t9, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r25;
    func_80037BA8(rdram, ctx);
        goto after_0;
    // 0x8026DD78: sb          $t9, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r25;
    after_0:
L_8026DD7C:
    // 0x8026DD7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026DD80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026DD84: jr          $ra
    // 0x8026DD88: nop

    return;
    // 0x8026DD88: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026DD70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DD70: andi        $t9, $t8, 0xFFF7
    ctx->r25 = ctx->r24 & 0XFFF7;
    // 0x8026DD74: jal         0x80037BA8
    // 0x8026DD78: sb          $t9, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r25;
    func_80037BA8(rdram, ctx);
        goto after_0;
    // 0x8026DD78: sb          $t9, 0x754($v0)
    MEM_B(0X754, ctx->r2) = ctx->r25;
    after_0:
    // 0x8026DD7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026DD80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026DD84: jr          $ra
    // 0x8026DD88: nop

    return;
    // 0x8026DD88: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026DD8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DD8C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8026DD90: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8026DD94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026DD98: bne         $t6, $zero, L_8026DDB0
    if (ctx->r14 != 0) {
        // 0x8026DD9C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8026DDB0;
    }
    // 0x8026DD9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026DDA0: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026DDA4: addiu       $a1, $a1, -0xBB0
    ctx->r5 = ADD32(ctx->r5, -0XBB0);
    // 0x8026DDA8: b           L_8026DDC0
    // 0x8026DDAC: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
        goto L_8026DDC0;
    // 0x8026DDAC: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_8026DDB0:
    // 0x8026DDB0: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026DDB4: addiu       $a1, $a1, -0xBB0
    ctx->r5 = ADD32(ctx->r5, -0XBB0);
    // 0x8026DDB8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8026DDBC: sb          $t7, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r15;
L_8026DDC0:
    // 0x8026DDC0: jal         0x80049A90
    // 0x8026DDC4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80049A90(rdram, ctx);
        goto after_0;
    // 0x8026DDC4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8026DDC8: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026DDCC: addiu       $a1, $a1, -0xBB0
    ctx->r5 = ADD32(ctx->r5, -0XBB0);
    // 0x8026DDD0: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8026DDD4: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026DDD8: addiu       $a0, $a0, -0xBAF
    ctx->r4 = ADD32(ctx->r4, -0XBAF);
    // 0x8026DDDC: beq         $v1, $zero, L_8026DDF4
    if (ctx->r3 == 0) {
        // 0x8026DDE0: sb          $v0, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r2;
            goto L_8026DDF4;
    }
    // 0x8026DDE0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8026DDE4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026DDE8: beq         $v1, $at, L_8026DDF4
    if (ctx->r3 == ctx->r1) {
        // 0x8026DDEC: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_8026DDF4;
    }
    // 0x8026DDEC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8026DDF0: sb          $t8, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r24;
L_8026DDF4:
    // 0x8026DDF4: lb          $v0, 0x0($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X0);
    // 0x8026DDF8: nop

    // 0x8026DDFC: slti        $at, $v0, 0x24
    ctx->r1 = SIGNED(ctx->r2) < 0X24 ? 1 : 0;
    // 0x8026DE00: beq         $at, $zero, L_8026DE10
    if (ctx->r1 == 0) {
        // 0x8026DE04: nop
    
            goto L_8026DE10;
    }
    // 0x8026DE04: nop

    // 0x8026DE08: bgez        $v0, L_8026DE18
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8026DE0C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026DE18;
    }
    // 0x8026DE0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026DE10:
    // 0x8026DE10: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    // 0x8026DE14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026DE18:
    // 0x8026DE18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026DE1C: jr          $ra
    // 0x8026DE20: nop

    return;
    // 0x8026DE20: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026DE24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DE24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026DE28: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8026DE2C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8026DE30: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026DE34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026DE38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026DE3C: lbu         $a1, -0xBAF($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0XBAF);
    // 0x8026DE40: lh          $a3, 0x2A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2A);
    // 0x8026DE44: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x8026DE48: jal         0x8026E160
    // 0x8026DE4C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    ovl_8026A0F0_func_8026E160(rdram, ctx);
        goto after_0;
    // 0x8026DE4C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8026DE50: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x8026DE54: lh          $a3, 0x2A($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2A);
    // 0x8026DE58: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026DE5C: addiu       $a2, $a2, 0x3
    ctx->r6 = ADD32(ctx->r6, 0X3);
    // 0x8026DE60: addiu       $a3, $a3, 0x3
    ctx->r7 = ADD32(ctx->r7, 0X3);
    // 0x8026DE64: addiu       $s0, $s0, 0x3C
    ctx->r16 = ADD32(ctx->r16, 0X3C);
    // 0x8026DE68: sll         $t8, $a3, 16
    ctx->r24 = S32(ctx->r7 << 16);
    // 0x8026DE6C: sll         $t6, $a2, 16
    ctx->r14 = S32(ctx->r6 << 16);
    // 0x8026DE70: lbu         $a1, -0xBAF($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0XBAF);
    // 0x8026DE74: sra         $a2, $t6, 16
    ctx->r6 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8026DE78: sra         $a3, $t8, 16
    ctx->r7 = S32(SIGNED(ctx->r24) >> 16);
    // 0x8026DE7C: jal         0x8026E160
    // 0x8026DE80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    ovl_8026A0F0_func_8026E160(rdram, ctx);
        goto after_1;
    // 0x8026DE80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8026DE84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026DE88: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026DE8C: jal         0x8002135C
    // 0x8026DE90: addiu       $a2, $zero, 0x9D
    ctx->r6 = ADD32(0, 0X9D);
    func_8002135C(rdram, ctx);
        goto after_2;
    // 0x8026DE90: addiu       $a2, $zero, 0x9D
    ctx->r6 = ADD32(0, 0X9D);
    after_2:
    // 0x8026DE94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026DE98: jal         0x8004CD90
    // 0x8026DE9C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CD90(rdram, ctx);
        goto after_3;
    // 0x8026DE9C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_3:
    // 0x8026DEA0: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x8026DEA4: sb          $t0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r8;
    // 0x8026DEA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026DEAC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026DEB0: jr          $ra
    // 0x8026DEB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8026DEB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026DEB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DEB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026DEBC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8026DEC0: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x8026DEC4: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x8026DEC8: addiu       $t8, $t8, -0xF90
    ctx->r24 = ADD32(ctx->r24, -0XF90);
    // 0x8026DECC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8026DED0: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8026DED4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026DED8: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x8026DEDC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026DEE0: addiu       $a0, $a0, 0x6D94
    ctx->r4 = ADD32(ctx->r4, 0X6D94);
    // 0x8026DEE4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8026DEE8: addiu       $a1, $zero, 0x4DD
    ctx->r5 = ADD32(0, 0X4DD);
    // 0x8026DEEC: jal         0x8004CD24
    // 0x8026DEF0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8026DEF0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8026DEF4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026DEF8: addiu       $a0, $a0, 0x6D94
    ctx->r4 = ADD32(ctx->r4, 0X6D94);
    // 0x8026DEFC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026DF00: jal         0x8002135C
    // 0x8026DF04: addiu       $a2, $zero, 0x91
    ctx->r6 = ADD32(0, 0X91);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8026DF04: addiu       $a2, $zero, 0x91
    ctx->r6 = ADD32(0, 0X91);
    after_1:
    // 0x8026DF08: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8026DF0C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026DF10: lw          $a3, 0x0($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X0);
    // 0x8026DF14: addiu       $a0, $a0, 0x6DD0
    ctx->r4 = ADD32(ctx->r4, 0X6DD0);
    // 0x8026DF18: addiu       $a1, $zero, 0x4DD
    ctx->r5 = ADD32(0, 0X4DD);
    // 0x8026DF1C: jal         0x8004CD24
    // 0x8026DF20: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_8004CD24(rdram, ctx);
        goto after_2;
    // 0x8026DF20: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_2:
    // 0x8026DF24: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026DF28: addiu       $a0, $a0, 0x6DD0
    ctx->r4 = ADD32(ctx->r4, 0X6DD0);
    // 0x8026DF2C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026DF30: jal         0x8002135C
    // 0x8026DF34: addiu       $a2, $zero, 0x9D
    ctx->r6 = ADD32(0, 0X9D);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x8026DF34: addiu       $a2, $zero, 0x9D
    ctx->r6 = ADD32(0, 0X9D);
    after_3:
    // 0x8026DF38: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026DF3C: addiu       $a0, $a0, 0x6DD0
    ctx->r4 = ADD32(ctx->r4, 0X6DD0);
    // 0x8026DF40: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8026DF44: jal         0x8004CD44
    // 0x8026DF48: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8004CD44(rdram, ctx);
        goto after_4;
    // 0x8026DF48: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_4:
    // 0x8026DF4C: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026DF50: addiu       $a0, $a0, 0x6DD0
    ctx->r4 = ADD32(ctx->r4, 0X6DD0);
    // 0x8026DF54: jal         0x8004CD90
    // 0x8026DF58: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CD90(rdram, ctx);
        goto after_5;
    // 0x8026DF58: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_5:
    // 0x8026DF5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026DF60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026DF64: jr          $ra
    // 0x8026DF68: nop

    return;
    // 0x8026DF68: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026DF6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026DF6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026DF70: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8026DF74: lbu         $t6, 0x23($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X23);
    // 0x8026DF78: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x8026DF7C: addiu       $t8, $t8, -0xF88
    ctx->r24 = ADD32(ctx->r24, -0XF88);
    // 0x8026DF80: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8026DF84: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8026DF88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026DF8C: lw          $a3, 0x0($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X0);
    // 0x8026DF90: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026DF94: addiu       $a0, $a0, 0x6E0C
    ctx->r4 = ADD32(ctx->r4, 0X6E0C);
    // 0x8026DF98: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8026DF9C: addiu       $a1, $zero, 0x527
    ctx->r5 = ADD32(0, 0X527);
    // 0x8026DFA0: jal         0x8004CD24
    // 0x8026DFA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8026DFA4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8026DFA8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026DFAC: addiu       $a0, $a0, 0x6E0C
    ctx->r4 = ADD32(ctx->r4, 0X6E0C);
    // 0x8026DFB0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026DFB4: jal         0x8002135C
    // 0x8026DFB8: addiu       $a2, $zero, 0x92
    ctx->r6 = ADD32(0, 0X92);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8026DFB8: addiu       $a2, $zero, 0x92
    ctx->r6 = ADD32(0, 0X92);
    after_1:
    // 0x8026DFBC: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8026DFC0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026DFC4: lw          $a3, 0x0($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X0);
    // 0x8026DFC8: addiu       $a0, $a0, 0x6E48
    ctx->r4 = ADD32(ctx->r4, 0X6E48);
    // 0x8026DFCC: addiu       $a1, $zero, 0x527
    ctx->r5 = ADD32(0, 0X527);
    // 0x8026DFD0: jal         0x8004CD24
    // 0x8026DFD4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_8004CD24(rdram, ctx);
        goto after_2;
    // 0x8026DFD4: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_2:
    // 0x8026DFD8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026DFDC: addiu       $a0, $a0, 0x6E48
    ctx->r4 = ADD32(ctx->r4, 0X6E48);
    // 0x8026DFE0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026DFE4: jal         0x8002135C
    // 0x8026DFE8: addiu       $a2, $zero, 0x9D
    ctx->r6 = ADD32(0, 0X9D);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x8026DFE8: addiu       $a2, $zero, 0x9D
    ctx->r6 = ADD32(0, 0X9D);
    after_3:
    // 0x8026DFEC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026DFF0: addiu       $a0, $a0, 0x6E48
    ctx->r4 = ADD32(ctx->r4, 0X6E48);
    // 0x8026DFF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8026DFF8: jal         0x8004CD44
    // 0x8026DFFC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8004CD44(rdram, ctx);
        goto after_4;
    // 0x8026DFFC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_4:
    // 0x8026E000: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026E004: addiu       $a0, $a0, 0x6E48
    ctx->r4 = ADD32(ctx->r4, 0X6E48);
    // 0x8026E008: jal         0x8004CD90
    // 0x8026E00C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CD90(rdram, ctx);
        goto after_5;
    // 0x8026E00C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_5:
    // 0x8026E010: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E014: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026E018: jr          $ra
    // 0x8026E01C: nop

    return;
    // 0x8026E01C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E020(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E020: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E028: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026E02C: lui         $a3, 0x800D
    ctx->r7 = S32(0X800D << 16);
    // 0x8026E030: addiu       $a3, $a3, -0x3E20
    ctx->r7 = ADD32(ctx->r7, -0X3E20);
    // 0x8026E034: addiu       $a0, $a0, 0x6F74
    ctx->r4 = ADD32(ctx->r4, 0X6F74);
    // 0x8026E038: addiu       $a1, $zero, 0x527
    ctx->r5 = ADD32(0, 0X527);
    // 0x8026E03C: jal         0x8004CD24
    // 0x8026E040: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8026E040: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8026E044: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026E048: addiu       $a0, $a0, 0x6F74
    ctx->r4 = ADD32(ctx->r4, 0X6F74);
    // 0x8026E04C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026E050: jal         0x8002135C
    // 0x8026E054: addiu       $a2, $zero, 0x91
    ctx->r6 = ADD32(0, 0X91);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8026E054: addiu       $a2, $zero, 0x91
    ctx->r6 = ADD32(0, 0X91);
    after_1:
    // 0x8026E058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E05C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E060: jr          $ra
    // 0x8026E064: nop

    return;
    // 0x8026E064: nop

    // 0x8026E068: nop

    // 0x8026E06C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E044(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E044: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026E048: addiu       $a0, $a0, 0x6F74
    ctx->r4 = ADD32(ctx->r4, 0X6F74);
    // 0x8026E04C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026E050: jal         0x8002135C
    // 0x8026E054: addiu       $a2, $zero, 0x91
    ctx->r6 = ADD32(0, 0X91);
    func_8002135C(rdram, ctx);
        goto after_0;
    // 0x8026E054: addiu       $a2, $zero, 0x91
    ctx->r6 = ADD32(0, 0X91);
    after_0:
    // 0x8026E058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E05C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E060: jr          $ra
    // 0x8026E064: nop

    return;
    // 0x8026E064: nop

    // 0x8026E068: nop

    // 0x8026E06C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E070: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E074: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E078: jal         0x8026E090
    // 0x8026E07C: nop

    ovl_8026A0F0_func_8026E090(rdram, ctx);
        goto after_0;
    // 0x8026E07C: nop

    after_0:
    // 0x8026E080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E084: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E088: jr          $ra
    // 0x8026E08C: nop

    return;
    // 0x8026E08C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E090: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E094: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E098: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8026E09C: jal         0x80025A10
    // 0x8026E0A0: addiu       $a0, $a0, 0x3BE8
    ctx->r4 = ADD32(ctx->r4, 0X3BE8);
    func_80025A10(rdram, ctx);
        goto after_0;
    // 0x8026E0A0: addiu       $a0, $a0, 0x3BE8
    ctx->r4 = ADD32(ctx->r4, 0X3BE8);
    after_0:
    // 0x8026E0A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E0A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E0AC: jr          $ra
    // 0x8026E0B0: nop

    return;
    // 0x8026E0B0: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E0B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E0B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E0B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E0BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026E0C0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8026E0C4: lui         $a3, 0x803E
    ctx->r7 = S32(0X803E << 16);
    // 0x8026E0C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026E0CC: addiu       $a3, $a3, 0x792C
    ctx->r7 = ADD32(ctx->r7, 0X792C);
    // 0x8026E0D0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8026E0D4: jal         0x8004CD24
    // 0x8026E0D8: addiu       $a1, $zero, 0x4E3
    ctx->r5 = ADD32(0, 0X4E3);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8026E0D8: addiu       $a1, $zero, 0x4E3
    ctx->r5 = ADD32(0, 0X4E3);
    after_0:
    // 0x8026E0DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026E0E0: lbu         $a1, 0x1F($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1F);
    // 0x8026E0E4: lbu         $a2, 0x23($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X23);
    // 0x8026E0E8: jal         0x8002135C
    // 0x8026E0EC: nop

    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8026E0EC: nop

    after_1:
    // 0x8026E0F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E0F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E0F8: jr          $ra
    // 0x8026E0FC: nop

    return;
    // 0x8026E0FC: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E100(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E100: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026E104: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8026E108: lbu         $t6, 0x27($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X27);
    // 0x8026E10C: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x8026E110: addiu       $t8, $t8, -0xF30
    ctx->r24 = ADD32(ctx->r24, -0XF30);
    // 0x8026E114: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8026E118: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8026E11C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E120: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x8026E124: lhu         $a1, 0x0($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X0);
    // 0x8026E128: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8026E12C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8026E130: jal         0x8004CD24
    // 0x8026E134: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8026E134: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8026E138: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8026E13C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026E140: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8026E144: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8026E148: jal         0x80021408
    // 0x8026E14C: nop

    func_80021408(rdram, ctx);
        goto after_1;
    // 0x8026E14C: nop

    after_1:
    // 0x8026E150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E154: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026E158: jr          $ra
    // 0x8026E15C: nop

    return;
    // 0x8026E15C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E11C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E11C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E120: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x8026E124: lhu         $a1, 0x0($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X0);
    // 0x8026E128: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8026E12C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8026E130: jal         0x8004CD24
    // 0x8026E134: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8026E134: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x8026E138: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x8026E13C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8026E140: lbu         $a1, 0x2($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X2);
    // 0x8026E144: lbu         $a2, 0x3($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X3);
    // 0x8026E148: jal         0x80021408
    // 0x8026E14C: nop

    func_80021408(rdram, ctx);
        goto after_1;
    // 0x8026E14C: nop

    after_1:
    // 0x8026E150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E154: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026E158: jr          $ra
    // 0x8026E15C: nop

    return;
    // 0x8026E15C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E160(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E160: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E164: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026E168: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x8026E16C: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8026E170: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x8026E174: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8026E178: addu        $a3, $a3, $t7
    ctx->r7 = ADD32(ctx->r7, ctx->r15);
    // 0x8026E17C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E180: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8026E184: lw          $a3, -0xEC4($a3)
    ctx->r7 = MEM_W(ctx->r7, -0XEC4);
    // 0x8026E188: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026E18C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8026E190: jal         0x8004CD24
    // 0x8026E194: addiu       $a1, $zero, 0x4D9
    ctx->r5 = ADD32(0, 0X4D9);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8026E194: addiu       $a1, $zero, 0x4D9
    ctx->r5 = ADD32(0, 0X4D9);
    after_0:
    // 0x8026E198: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x8026E19C: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026E1A0: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x8026E1A4: lbu         $a2, -0xEF0($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0XEF0);
    // 0x8026E1A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026E1AC: jal         0x8002135C
    // 0x8026E1B0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8026E1B0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x8026E1B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026E1B8: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x8026E1BC: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x8026E1C0: jal         0x8004CD44
    // 0x8026E1C4: nop

    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x8026E1C4: nop

    after_2:
    // 0x8026E1C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E1CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E1D0: jr          $ra
    // 0x8026E1D4: nop

    return;
    // 0x8026E1D4: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E178(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E178: addu        $a3, $a3, $t7
    ctx->r7 = ADD32(ctx->r7, ctx->r15);
    // 0x8026E17C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E180: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8026E184: lw          $a3, -0xEC4($a3)
    ctx->r7 = MEM_W(ctx->r7, -0XEC4);
    // 0x8026E188: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026E18C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8026E190: jal         0x8004CD24
    // 0x8026E194: addiu       $a1, $zero, 0x4D9
    ctx->r5 = ADD32(0, 0X4D9);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8026E194: addiu       $a1, $zero, 0x4D9
    ctx->r5 = ADD32(0, 0X4D9);
    after_0:
    // 0x8026E198: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x8026E19C: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026E1A0: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x8026E1A4: lbu         $a2, -0xEF0($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0XEF0);
    // 0x8026E1A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026E1AC: jal         0x8002135C
    // 0x8026E1B0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8026E1B0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x8026E1B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026E1B8: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x8026E1BC: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x8026E1C0: jal         0x8004CD44
    // 0x8026E1C4: nop

    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x8026E1C4: nop

    after_2:
    // 0x8026E1C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E1CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E1D0: jr          $ra
    // 0x8026E1D4: nop

    return;
    // 0x8026E1D4: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E1D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E1D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E1DC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026E1E0: lbu         $t6, 0x1F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X1F);
    // 0x8026E1E4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8026E1E8: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x8026E1EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8026E1F0: addu        $a3, $a3, $t7
    ctx->r7 = ADD32(ctx->r7, ctx->r15);
    // 0x8026E1F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E1F8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8026E1FC: lw          $a3, -0xE34($a3)
    ctx->r7 = MEM_W(ctx->r7, -0XE34);
    // 0x8026E200: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026E204: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8026E208: jal         0x8004CD24
    // 0x8026E20C: addiu       $a1, $zero, 0x4D9
    ctx->r5 = ADD32(0, 0X4D9);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8026E20C: addiu       $a1, $zero, 0x4D9
    ctx->r5 = ADD32(0, 0X4D9);
    after_0:
    // 0x8026E210: lbu         $t8, 0x1F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X1F);
    // 0x8026E214: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026E218: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x8026E21C: lbu         $a2, -0xEF0($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0XEF0);
    // 0x8026E220: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026E224: jal         0x8002135C
    // 0x8026E228: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8026E228: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x8026E22C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026E230: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    // 0x8026E234: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x8026E238: jal         0x8004CD44
    // 0x8026E23C: nop

    func_8004CD44(rdram, ctx);
        goto after_2;
    // 0x8026E23C: nop

    after_2:
    // 0x8026E240: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E244: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E248: jr          $ra
    // 0x8026E24C: nop

    return;
    // 0x8026E24C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E250(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E250: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E254: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E258: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026E25C: jal         0x80036234
    // 0x8026E260: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x8026E260: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8026E264: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x8026E268: jal         0x80035FF0
    // 0x8026E26C: addiu       $a0, $a0, -0x331C
    ctx->r4 = ADD32(ctx->r4, -0X331C);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x8026E26C: addiu       $a0, $a0, -0x331C
    ctx->r4 = ADD32(ctx->r4, -0X331C);
    after_1:
    // 0x8026E270: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x8026E274: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8026E278: jal         0x80049E40
    // 0x8026E27C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x8026E27C: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x8026E280: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8026E284: jal         0x80020318
    // 0x8026E288: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80020318(rdram, ctx);
        goto after_3;
    // 0x8026E288: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_3:
    // 0x8026E28C: lui         $a0, 0x8009
    ctx->r4 = S32(0X8009 << 16);
    // 0x8026E290: jal         0x80025A10
    // 0x8026E294: addiu       $a0, $a0, 0x3BB8
    ctx->r4 = ADD32(ctx->r4, 0X3BB8);
    func_80025A10(rdram, ctx);
        goto after_4;
    // 0x8026E294: addiu       $a0, $a0, 0x3BB8
    ctx->r4 = ADD32(ctx->r4, 0X3BB8);
    after_4:
    // 0x8026E298: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026E29C: jal         0x800296E0
    // 0x8026E2A0: addiu       $a0, $a0, -0x1D4C
    ctx->r4 = ADD32(ctx->r4, -0X1D4C);
    func_800296E0(rdram, ctx);
        goto after_5;
    // 0x8026E2A0: addiu       $a0, $a0, -0x1D4C
    ctx->r4 = ADD32(ctx->r4, -0X1D4C);
    after_5:
    // 0x8026E2A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E2A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E2AC: jr          $ra
    // 0x8026E2B0: nop

    return;
    // 0x8026E2B0: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E2B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E2B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E2B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E2BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026E2C0: jal         0x8026E090
    // 0x8026E2C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    ovl_8026A0F0_func_8026E090(rdram, ctx);
        goto after_0;
    // 0x8026E2C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8026E2C8: jal         0x8026E3F4
    // 0x8026E2CC: nop

    ovl_8026A0F0_func_8026E3F4(rdram, ctx);
        goto after_1;
    // 0x8026E2CC: nop

    after_1:
    // 0x8026E2D0: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026E2D4: addiu       $a0, $a0, -0x1D10
    ctx->r4 = ADD32(ctx->r4, -0X1D10);
    // 0x8026E2D8: jal         0x8002989C
    // 0x8026E2DC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_2;
    // 0x8026E2DC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_2:
    // 0x8026E2E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E2E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E2E8: jr          $ra
    // 0x8026E2EC: nop

    return;
    // 0x8026E2EC: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E2F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E2F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E2F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026E2F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E2FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026E300: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026E304: addiu       $a0, $a0, 0x6EC0
    ctx->r4 = ADD32(ctx->r4, 0X6EC0);
    // 0x8026E308: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026E30C: jal         0x8026E0B4
    // 0x8026E310: addiu       $a2, $zero, 0xD1
    ctx->r6 = ADD32(0, 0XD1);
    ovl_8026A0F0_func_8026E0B4(rdram, ctx);
        goto after_0;
    // 0x8026E310: addiu       $a2, $zero, 0xD1
    ctx->r6 = ADD32(0, 0XD1);
    after_0:
    // 0x8026E314: jal         0x8026E4A8
    // 0x8026E318: nop

    ovl_8026A0F0_func_8026E4A8(rdram, ctx);
        goto after_1;
    // 0x8026E318: nop

    after_1:
    // 0x8026E31C: jal         0x8026E4F0
    // 0x8026E320: nop

    ovl_8026A0F0_func_8026E4F0(rdram, ctx);
        goto after_2;
    // 0x8026E320: nop

    after_2:
    // 0x8026E324: jal         0x8026E5C4
    // 0x8026E328: nop

    ovl_8026A0F0_func_8026E5C4(rdram, ctx);
        goto after_3;
    // 0x8026E328: nop

    after_3:
    // 0x8026E32C: jal         0x8026E614
    // 0x8026E330: nop

    ovl_8026A0F0_func_8026E614(rdram, ctx);
        goto after_4;
    // 0x8026E330: nop

    after_4:
    // 0x8026E334: jal         0x8026E56C
    // 0x8026E338: nop

    ovl_8026A0F0_func_8026E56C(rdram, ctx);
        goto after_5;
    // 0x8026E338: nop

    after_5:
    // 0x8026E33C: jal         0x8026E538
    // 0x8026E340: nop

    ovl_8026A0F0_func_8026E538(rdram, ctx);
        goto after_6;
    // 0x8026E340: nop

    after_6:
    // 0x8026E344: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026E348: lb          $a0, -0xBA0($a0)
    ctx->r4 = MEM_B(ctx->r4, -0XBA0);
    // 0x8026E34C: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x8026E350: addiu       $a2, $zero, 0x3C
    ctx->r6 = ADD32(0, 0X3C);
    // 0x8026E354: jal         0x80039F88
    // 0x8026E358: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80039F88(rdram, ctx);
        goto after_7;
    // 0x8026E358: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
    // 0x8026E35C: jal         0x8026E654
    // 0x8026E360: nop

    ovl_8026A0F0_func_8026E654(rdram, ctx);
        goto after_8;
    // 0x8026E360: nop

    after_8:
    // 0x8026E364: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026E368: addiu       $a0, $a0, -0x1C7C
    ctx->r4 = ADD32(ctx->r4, -0X1C7C);
    // 0x8026E36C: jal         0x8004AE38
    // 0x8026E370: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_9;
    // 0x8026E370: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_9:
    // 0x8026E374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E378: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E37C: jr          $ra
    // 0x8026E380: nop

    return;
    // 0x8026E380: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E384(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E384: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E388: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026E38C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E390: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026E394: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026E398: addiu       $a0, $a0, -0x1C4C
    ctx->r4 = ADD32(ctx->r4, -0X1C4C);
    // 0x8026E39C: jal         0x8002989C
    // 0x8026E3A0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x8026E3A0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    after_0:
    // 0x8026E3A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E3A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E3AC: jr          $ra
    // 0x8026E3B0: nop

    return;
    // 0x8026E3B0: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E3B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E3B4: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8026E3B8: lhu         $t6, -0x3078($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X3078);
    // 0x8026E3BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E3C0: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x8026E3C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E3C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026E3CC: beq         $t7, $zero, L_8026E3DC
    if (ctx->r15 == 0) {
        // 0x8026E3D0: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8026E3DC;
    }
    // 0x8026E3D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026E3D4: jal         0x80037BA8
    // 0x8026E3D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037BA8(rdram, ctx);
        goto after_0;
    // 0x8026E3D8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
L_8026E3DC:
    // 0x8026E3DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E3E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E3E4: jr          $ra
    // 0x8026E3E8: nop

    return;
    // 0x8026E3E8: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E3EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E3EC: jr          $ra
    // 0x8026E3F0: nop

    return;
    // 0x8026E3F0: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E3F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E3F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E3F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E3FC: jal         0x803A5990
    // 0x8026E400: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(0x803A5990)(rdram, ctx);
        goto after_0;
    // 0x8026E400: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8026E404: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8026E408: sb          $v0, -0xBA0($at)
    MEM_B(-0XBA0, ctx->r1) = ctx->r2;
    // 0x8026E40C: jal         0x803A59C8
    // 0x8026E410: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(0x803A59C8)(rdram, ctx);
        goto after_1;
    // 0x8026E410: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8026E414: lui         $at, 0x8027
    ctx->r1 = S32(0X8027 << 16);
    // 0x8026E418: sb          $v0, -0xB9F($at)
    MEM_B(-0XB9F, ctx->r1) = ctx->r2;
    // 0x8026E41C: jal         0x803A5D60
    // 0x8026E420: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LOOKUP_FUNC(0x803A5D60)(rdram, ctx);
        goto after_2;
    // 0x8026E420: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x8026E424: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026E428: addiu       $a1, $a1, -0xBA0
    ctx->r5 = ADD32(ctx->r5, -0XBA0);
    // 0x8026E42C: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
    // 0x8026E430: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026E434: addiu       $a0, $a0, -0xB9E
    ctx->r4 = ADD32(ctx->r4, -0XB9E);
    // 0x8026E438: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026E43C: slti        $at, $v1, 0x24
    ctx->r1 = SIGNED(ctx->r3) < 0X24 ? 1 : 0;
    // 0x8026E440: addiu       $a2, $a2, -0xB9F
    ctx->r6 = ADD32(ctx->r6, -0XB9F);
    // 0x8026E444: beq         $at, $zero, L_8026E454
    if (ctx->r1 == 0) {
        // 0x8026E448: sh          $v0, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r2;
            goto L_8026E454;
    }
    // 0x8026E448: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8026E44C: bgez        $v1, L_8026E458
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8026E450: nop
    
            goto L_8026E458;
    }
    // 0x8026E450: nop

L_8026E454:
    // 0x8026E454: sb          $zero, 0x0($a1)
    MEM_B(0X0, ctx->r5) = 0;
L_8026E458:
    // 0x8026E458: lb          $v0, 0x0($a2)
    ctx->r2 = MEM_B(ctx->r6, 0X0);
    // 0x8026E45C: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8026E460: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8026E464: beq         $at, $zero, L_8026E474
    if (ctx->r1 == 0) {
        // 0x8026E468: addiu       $t7, $zero, 0x3E7
        ctx->r15 = ADD32(0, 0X3E7);
            goto L_8026E474;
    }
    // 0x8026E468: addiu       $t7, $zero, 0x3E7
    ctx->r15 = ADD32(0, 0X3E7);
    // 0x8026E46C: bgez        $v0, L_8026E478
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8026E470: nop
    
            goto L_8026E478;
    }
    // 0x8026E470: nop

L_8026E474:
    // 0x8026E474: sb          $t6, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r14;
L_8026E478:
    // 0x8026E478: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8026E47C: nop

    // 0x8026E480: slti        $at, $v0, 0x3E7
    ctx->r1 = SIGNED(ctx->r2) < 0X3E7 ? 1 : 0;
    // 0x8026E484: beq         $at, $zero, L_8026E494
    if (ctx->r1 == 0) {
        // 0x8026E488: nop
    
            goto L_8026E494;
    }
    // 0x8026E488: nop

    // 0x8026E48C: bgez        $v0, L_8026E49C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8026E490: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8026E49C;
    }
    // 0x8026E490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026E494:
    // 0x8026E494: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x8026E498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026E49C:
    // 0x8026E49C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E4A0: jr          $ra
    // 0x8026E4A4: nop

    return;
    // 0x8026E4A4: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E4A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E4A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E4AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E4B0: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026E4B4: lui         $a3, 0x803E
    ctx->r7 = S32(0X803E << 16);
    // 0x8026E4B8: addiu       $a3, $a3, 0x77AC
    ctx->r7 = ADD32(ctx->r7, 0X77AC);
    // 0x8026E4BC: addiu       $a0, $a0, 0x6D94
    ctx->r4 = ADD32(ctx->r4, 0X6D94);
    // 0x8026E4C0: addiu       $a1, $zero, 0x4C9
    ctx->r5 = ADD32(0, 0X4C9);
    // 0x8026E4C4: jal         0x8004CD24
    // 0x8026E4C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8026E4C8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8026E4CC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026E4D0: addiu       $a0, $a0, 0x6D94
    ctx->r4 = ADD32(ctx->r4, 0X6D94);
    // 0x8026E4D4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026E4D8: jal         0x80021408
    // 0x8026E4DC: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    func_80021408(rdram, ctx);
        goto after_1;
    // 0x8026E4DC: addiu       $a2, $zero, 0xA0
    ctx->r6 = ADD32(0, 0XA0);
    after_1:
    // 0x8026E4E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E4E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E4E8: jr          $ra
    // 0x8026E4EC: nop

    return;
    // 0x8026E4EC: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E4F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E4F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E4F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E4F8: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026E4FC: lui         $a3, 0x803E
    ctx->r7 = S32(0X803E << 16);
    // 0x8026E500: addiu       $a3, $a3, 0x6A8C
    ctx->r7 = ADD32(ctx->r7, 0X6A8C);
    // 0x8026E504: addiu       $a0, $a0, 0x6DD0
    ctx->r4 = ADD32(ctx->r4, 0X6DD0);
    // 0x8026E508: addiu       $a1, $zero, 0x4DB
    ctx->r5 = ADD32(0, 0X4DB);
    // 0x8026E50C: jal         0x8004CD24
    // 0x8026E510: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8026E510: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8026E514: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026E518: addiu       $a0, $a0, 0x6DD0
    ctx->r4 = ADD32(ctx->r4, 0X6DD0);
    // 0x8026E51C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026E520: jal         0x8002135C
    // 0x8026E524: addiu       $a2, $zero, 0xD0
    ctx->r6 = ADD32(0, 0XD0);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8026E524: addiu       $a2, $zero, 0xD0
    ctx->r6 = ADD32(0, 0XD0);
    after_1:
    // 0x8026E528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E52C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E530: jr          $ra
    // 0x8026E534: nop

    return;
    // 0x8026E534: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E538: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E53C: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026E540: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E544: lbu         $a1, -0xBA0($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0XBA0);
    // 0x8026E548: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026E54C: addiu       $a0, $a0, 0x6E0C
    ctx->r4 = ADD32(ctx->r4, 0X6E0C);
    // 0x8026E550: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8026E554: jal         0x8026E1D8
    // 0x8026E558: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    ovl_8026A0F0_func_8026E1D8(rdram, ctx);
        goto after_0;
    // 0x8026E558: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8026E55C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E560: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E564: jr          $ra
    // 0x8026E568: nop

    return;
    // 0x8026E568: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E56C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E56C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E570: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E574: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026E578: lui         $a3, 0x803E
    ctx->r7 = S32(0X803E << 16);
    // 0x8026E57C: addiu       $a3, $a3, 0x70B0
    ctx->r7 = ADD32(ctx->r7, 0X70B0);
    // 0x8026E580: addiu       $a0, $a0, 0x6E84
    ctx->r4 = ADD32(ctx->r4, 0X6E84);
    // 0x8026E584: addiu       $a1, $zero, 0x4D9
    ctx->r5 = ADD32(0, 0X4D9);
    // 0x8026E588: jal         0x8004CD24
    // 0x8026E58C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8026E58C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8026E590: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8026E594: lb          $t6, -0xBA0($t6)
    ctx->r14 = MEM_B(ctx->r14, -0XBA0);
    // 0x8026E598: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026E59C: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x8026E5A0: lbu         $a2, -0xEF0($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0XEF0);
    // 0x8026E5A4: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026E5A8: addiu       $a0, $a0, 0x6E84
    ctx->r4 = ADD32(ctx->r4, 0X6E84);
    // 0x8026E5AC: jal         0x8002135C
    // 0x8026E5B0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8026E5B0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x8026E5B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E5B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E5BC: jr          $ra
    // 0x8026E5C0: nop

    return;
    // 0x8026E5C0: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E5C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E5C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E5C8: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026E5CC: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026E5D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E5D4: lbu         $a2, -0xB9F($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0XB9F);
    // 0x8026E5D8: lbu         $a1, -0xBA0($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0XBA0);
    // 0x8026E5DC: lui         $a0, 0x8010
    ctx->r4 = S32(0X8010 << 16);
    // 0x8026E5E0: addiu       $a0, $a0, 0x6E48
    ctx->r4 = ADD32(ctx->r4, 0X6E48);
    // 0x8026E5E4: jal         0x8006F2DC
    // 0x8026E5E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_8006F2DC(rdram, ctx);
        goto after_0;
    // 0x8026E5E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x8026E5EC: lui         $t6, 0x803E
    ctx->r14 = S32(0X803E << 16);
    // 0x8026E5F0: addiu       $t6, $t6, 0x70EC
    ctx->r14 = ADD32(ctx->r14, 0X70EC);
    // 0x8026E5F4: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8026E5F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E5FC: sw          $t6, 0x6E78($at)
    MEM_W(0X6E78, ctx->r1) = ctx->r14;
    // 0x8026E600: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8026E604: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8026E608: sb          $t7, 0x6E4C($at)
    MEM_B(0X6E4C, ctx->r1) = ctx->r15;
    // 0x8026E60C: jr          $ra
    // 0x8026E610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8026E610: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E614(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E614: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026E618: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026E61C: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026E620: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026E624: lb          $a2, -0xB9F($a2)
    ctx->r6 = MEM_B(ctx->r6, -0XB9F);
    // 0x8026E628: lb          $a1, -0xBA0($a1)
    ctx->r5 = MEM_B(ctx->r5, -0XBA0);
    // 0x8026E62C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8026E630: addiu       $t6, $zero, 0x50
    ctx->r14 = ADD32(0, 0X50);
    // 0x8026E634: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8026E638: addiu       $a0, $a0, -0x3888
    ctx->r4 = ADD32(ctx->r4, -0X3888);
    // 0x8026E63C: jal         0x8006ED00
    // 0x8026E640: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    func_8006ED00(rdram, ctx);
        goto after_0;
    // 0x8026E640: addiu       $a3, $zero, 0x50
    ctx->r7 = ADD32(0, 0X50);
    after_0:
    // 0x8026E644: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026E648: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026E64C: jr          $ra
    // 0x8026E650: nop

    return;
    // 0x8026E650: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E654: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026E658: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x8026E65C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026E660: lh          $a3, -0xB9E($a3)
    ctx->r7 = MEM_H(ctx->r7, -0XB9E);
    // 0x8026E664: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8026E668: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x8026E66C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8026E670: addiu       $a0, $a0, -0x3868
    ctx->r4 = ADD32(ctx->r4, -0X3868);
    // 0x8026E674: addiu       $a1, $zero, 0x42
    ctx->r5 = ADD32(0, 0X42);
    // 0x8026E678: jal         0x8002FE24
    // 0x8026E67C: addiu       $a2, $zero, 0x9C
    ctx->r6 = ADD32(0, 0X9C);
    func_8002FE24(rdram, ctx);
        goto after_0;
    // 0x8026E67C: addiu       $a2, $zero, 0x9C
    ctx->r6 = ADD32(0, 0X9C);
    after_0:
    // 0x8026E680: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026E684: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026E688: jr          $ra
    // 0x8026E68C: nop

    return;
    // 0x8026E68C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E690(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E698: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026E69C: jal         0x80036234
    // 0x8026E6A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80036234(rdram, ctx);
        goto after_0;
    // 0x8026E6A0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8026E6A4: lui         $a0, 0x803F
    ctx->r4 = S32(0X803F << 16);
    // 0x8026E6A8: jal         0x80035FF0
    // 0x8026E6AC: addiu       $a0, $a0, -0x31AC
    ctx->r4 = ADD32(ctx->r4, -0X31AC);
    func_80035FF0(rdram, ctx);
        goto after_1;
    // 0x8026E6AC: addiu       $a0, $a0, -0x31AC
    ctx->r4 = ADD32(ctx->r4, -0X31AC);
    after_1:
    // 0x8026E6B0: addiu       $a0, $zero, 0xF00
    ctx->r4 = ADD32(0, 0XF00);
    // 0x8026E6B4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x8026E6B8: jal         0x80049E40
    // 0x8026E6BC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80049E40(rdram, ctx);
        goto after_2;
    // 0x8026E6BC: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_2:
    // 0x8026E6C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8026E6C4: jal         0x80020318
    // 0x8026E6C8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80020318(rdram, ctx);
        goto after_3;
    // 0x8026E6C8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_3:
    // 0x8026E6CC: jal         0x8026E090
    // 0x8026E6D0: nop

    ovl_8026A0F0_func_8026E090(rdram, ctx);
        goto after_4;
    // 0x8026E6D0: nop

    after_4:
    // 0x8026E6D4: jal         0x8026E820
    // 0x8026E6D8: nop

    ovl_8026A0F0_func_8026E820(rdram, ctx);
        goto after_5;
    // 0x8026E6D8: nop

    after_5:
    // 0x8026E6DC: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026E6E0: addiu       $a0, $a0, -0x1904
    ctx->r4 = ADD32(ctx->r4, -0X1904);
    // 0x8026E6E4: jal         0x8002989C
    // 0x8026E6E8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8002989C(rdram, ctx);
        goto after_6;
    // 0x8026E6E8: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_6:
    // 0x8026E6EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E6F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E6F4: jr          $ra
    // 0x8026E6F8: nop

    return;
    // 0x8026E6F8: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E6FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E6FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E700: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026E704: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E708: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026E70C: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026E710: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026E714: sh          $zero, -0x32A8($at)
    MEM_H(-0X32A8, ctx->r1) = 0;
    // 0x8026E718: jal         0x8002AAC0
    // 0x8026E71C: addiu       $a0, $a0, -0xC4C
    ctx->r4 = ADD32(ctx->r4, -0XC4C);
    func_8002AAC0(rdram, ctx);
        goto after_0;
    // 0x8026E71C: addiu       $a0, $a0, -0xC4C
    ctx->r4 = ADD32(ctx->r4, -0XC4C);
    after_0:
    // 0x8026E720: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026E724: addiu       $a0, $a0, -0x18C0
    ctx->r4 = ADD32(ctx->r4, -0X18C0);
    // 0x8026E728: jal         0x8004AE38
    // 0x8026E72C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8004AE38(rdram, ctx);
        goto after_1;
    // 0x8026E72C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_1:
    // 0x8026E730: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E734: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E738: jr          $ra
    // 0x8026E73C: nop

    return;
    // 0x8026E73C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E740(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E740: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E744: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026E748: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E74C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026E750: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x8026E754: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026E758: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026E75C: sh          $t6, -0x32A8($at)
    MEM_H(-0X32A8, ctx->r1) = ctx->r14;
    // 0x8026E760: addiu       $a0, $a0, -0x1884
    ctx->r4 = ADD32(ctx->r4, -0X1884);
    // 0x8026E764: jal         0x8002989C
    // 0x8026E768: addiu       $a1, $zero, 0x4F
    ctx->r5 = ADD32(0, 0X4F);
    func_8002989C(rdram, ctx);
        goto after_0;
    // 0x8026E768: addiu       $a1, $zero, 0x4F
    ctx->r5 = ADD32(0, 0X4F);
    after_0:
    // 0x8026E76C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E774: jr          $ra
    // 0x8026E778: nop

    return;
    // 0x8026E778: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E77C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E77C: lui         $v0, 0x8011
    ctx->r2 = S32(0X8011 << 16);
    // 0x8026E780: addiu       $v0, $v0, -0x3770
    ctx->r2 = ADD32(ctx->r2, -0X3770);
    // 0x8026E784: lhu         $t6, 0x6F8($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X6F8);
    // 0x8026E788: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E78C: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x8026E790: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E794: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026E798: beq         $t7, $zero, L_8026E7C0
    if (ctx->r15 == 0) {
        // 0x8026E79C: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8026E7C0;
    }
    // 0x8026E79C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026E7A0: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x8026E7A4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026E7A8: sh          $t8, -0x32A8($at)
    MEM_H(-0X32A8, ctx->r1) = ctx->r24;
    // 0x8026E7AC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8026E7B0: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026E7B4: sb          $t9, 0x70A($v0)
    MEM_B(0X70A, ctx->r2) = ctx->r25;
    // 0x8026E7B8: jal         0x800296E0
    // 0x8026E7BC: addiu       $a0, $a0, -0x1830
    ctx->r4 = ADD32(ctx->r4, -0X1830);
    func_800296E0(rdram, ctx);
        goto after_0;
    // 0x8026E7BC: addiu       $a0, $a0, -0x1830
    ctx->r4 = ADD32(ctx->r4, -0X1830);
    after_0:
L_8026E7C0:
    // 0x8026E7C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E7C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E7C8: jr          $ra
    // 0x8026E7CC: nop

    return;
    // 0x8026E7CC: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E7D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E7D0: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x8026E7D4: lhu         $t6, -0x3078($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X3078);
    // 0x8026E7D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E7DC: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x8026E7E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E7E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026E7E8: beq         $t7, $zero, L_8026E810
    if (ctx->r15 == 0) {
        // 0x8026E7EC: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8026E810;
    }
    // 0x8026E7EC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026E7F0: jal         0x80280ED8
    // 0x8026E7F4: nop

    LOOKUP_FUNC(0x80280ED8)(rdram, ctx);
        goto after_0;
    // 0x8026E7F4: nop

    after_0:
    // 0x8026E7F8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8026E7FC: sb          $zero, -0x3271($at)
    MEM_B(-0X3271, ctx->r1) = 0;
    // 0x8026E800: jal         0x80015BC0
    // 0x8026E804: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_80015BC0(rdram, ctx);
        goto after_1;
    // 0x8026E804: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x8026E808: jal         0x80037BA8
    // 0x8026E80C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80037BA8(rdram, ctx);
        goto after_2;
    // 0x8026E80C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
L_8026E810:
    // 0x8026E810: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026E814: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E818: jr          $ra
    // 0x8026E81C: nop

    return;
    // 0x8026E81C: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E820: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8026E824: lb          $v0, -0x32A1($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X32A1);
    // 0x8026E828: lui         $a1, 0x8027
    ctx->r5 = S32(0X8027 << 16);
    // 0x8026E82C: bne         $v0, $zero, L_8026E844
    if (ctx->r2 != 0) {
        // 0x8026E830: sll         $t7, $v0, 2
        ctx->r15 = S32(ctx->r2 << 2);
            goto L_8026E844;
    }
    // 0x8026E830: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x8026E834: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026E838: addiu       $a0, $a0, -0xB90
    ctx->r4 = ADD32(ctx->r4, -0XB90);
    // 0x8026E83C: b           L_8026E854
    // 0x8026E840: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
        goto L_8026E854;
    // 0x8026E840: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
L_8026E844:
    // 0x8026E844: lui         $a0, 0x8027
    ctx->r4 = S32(0X8027 << 16);
    // 0x8026E848: addiu       $a0, $a0, -0xB90
    ctx->r4 = ADD32(ctx->r4, -0XB90);
    // 0x8026E84C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8026E850: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
L_8026E854:
    // 0x8026E854: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x8026E858: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026E85C: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x8026E860: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8026E864: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x8026E868: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026E86C: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x8026E870: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026E874: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x8026E878: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8026E87C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8026E880: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8026E884: lb          $t8, -0x2F7E($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X2F7E);
    // 0x8026E888: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x8026E88C: addiu       $a1, $a1, -0xB8F
    ctx->r5 = ADD32(ctx->r5, -0XB8F);
    // 0x8026E890: beq         $v1, $zero, L_8026E8A8
    if (ctx->r3 == 0) {
        // 0x8026E894: sb          $t8, 0x0($a1)
        MEM_B(0X0, ctx->r5) = ctx->r24;
            goto L_8026E8A8;
    }
    // 0x8026E894: sb          $t8, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r24;
    // 0x8026E898: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026E89C: beq         $v1, $at, L_8026E8A8
    if (ctx->r3 == ctx->r1) {
        // 0x8026E8A0: nop
    
            goto L_8026E8A8;
    }
    // 0x8026E8A0: nop

    // 0x8026E8A4: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
L_8026E8A8:
    // 0x8026E8A8: lb          $v0, 0x0($a1)
    ctx->r2 = MEM_B(ctx->r5, 0X0);
    // 0x8026E8AC: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x8026E8B0: slti        $at, $v0, 0x5
    ctx->r1 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x8026E8B4: beq         $at, $zero, L_8026E8C4
    if (ctx->r1 == 0) {
        // 0x8026E8B8: nop
    
            goto L_8026E8C4;
    }
    // 0x8026E8B8: nop

    // 0x8026E8BC: bgez        $v0, L_8026E8C8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8026E8C0: nop
    
            goto L_8026E8C8;
    }
    // 0x8026E8C0: nop

L_8026E8C4:
    // 0x8026E8C4: sb          $t9, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r25;
L_8026E8C8:
    // 0x8026E8C8: jr          $ra
    // 0x8026E8CC: nop

    return;
    // 0x8026E8CC: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E8D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E8D0: jr          $ra
    // 0x8026E8D4: nop

    return;
    // 0x8026E8D4: nop

;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E8D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E8D8: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x8026E8DC: lbu         $v0, -0xB90($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0XB90);
    // 0x8026E8E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E8E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E8E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026E8EC: beq         $v0, $zero, L_8026E908
    if (ctx->r2 == 0) {
        // 0x8026E8F0: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8026E908;
    }
    // 0x8026E8F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026E8F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8026E8F8: beq         $v0, $at, L_8026E958
    if (ctx->r2 == ctx->r1) {
        // 0x8026E8FC: addiu       $a1, $zero, 0x55F
        ctx->r5 = ADD32(0, 0X55F);
            goto L_8026E958;
    }
    // 0x8026E8FC: addiu       $a1, $zero, 0x55F
    ctx->r5 = ADD32(0, 0X55F);
    // 0x8026E900: b           L_8026E9A0
    // 0x8026E904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026E9A0;
    // 0x8026E904: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026E908:
    // 0x8026E908: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8026E90C: lb          $t6, -0xB8F($t6)
    ctx->r14 = MEM_B(ctx->r14, -0XB8F);
    // 0x8026E910: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x8026E914: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8026E918: addu        $a3, $a3, $t7
    ctx->r7 = ADD32(ctx->r7, ctx->r15);
    // 0x8026E91C: lw          $a3, -0xDA0($a3)
    ctx->r7 = MEM_W(ctx->r7, -0XDA0);
    // 0x8026E920: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026E924: addiu       $a1, $zero, 0x55F
    ctx->r5 = ADD32(0, 0X55F);
    // 0x8026E928: jal         0x8004CD24
    // 0x8026E92C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8026E92C: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_0:
    // 0x8026E930: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x8026E934: lb          $t8, -0xB8F($t8)
    ctx->r24 = MEM_B(ctx->r24, -0XB8F);
    // 0x8026E938: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026E93C: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x8026E940: lbu         $a2, -0xD8C($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0XD8C);
    // 0x8026E944: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026E948: jal         0x8002135C
    // 0x8026E94C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8026E94C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_1:
    // 0x8026E950: b           L_8026E9A0
    // 0x8026E954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026E9A0;
    // 0x8026E954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026E958:
    // 0x8026E958: lui         $t9, 0x8027
    ctx->r25 = S32(0X8027 << 16);
    // 0x8026E95C: lb          $t9, -0xB8F($t9)
    ctx->r25 = MEM_B(ctx->r25, -0XB8F);
    // 0x8026E960: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x8026E964: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8026E968: addu        $a3, $a3, $t0
    ctx->r7 = ADD32(ctx->r7, ctx->r8);
    // 0x8026E96C: lw          $a3, -0xD84($a3)
    ctx->r7 = MEM_W(ctx->r7, -0XD84);
    // 0x8026E970: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026E974: jal         0x8004CD24
    // 0x8026E978: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8004CD24(rdram, ctx);
        goto after_2;
    // 0x8026E978: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_2:
    // 0x8026E97C: lui         $t1, 0x8027
    ctx->r9 = S32(0X8027 << 16);
    // 0x8026E980: lb          $t1, -0xB8F($t1)
    ctx->r9 = MEM_B(ctx->r9, -0XB8F);
    // 0x8026E984: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026E988: addu        $a2, $a2, $t1
    ctx->r6 = ADD32(ctx->r6, ctx->r9);
    // 0x8026E98C: lbu         $a2, -0xD70($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0XD70);
    // 0x8026E990: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026E994: jal         0x8002135C
    // 0x8026E998: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_8002135C(rdram, ctx);
        goto after_3;
    // 0x8026E998: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_3:
    // 0x8026E99C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026E9A0:
    // 0x8026E9A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026E9A4: jr          $ra
    // 0x8026E9A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8026E9A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026E9AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026E9AC: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8026E9B0: lb          $t6, -0xB8F($t6)
    ctx->r14 = MEM_B(ctx->r14, -0XB8F);
    // 0x8026E9B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026E9B8: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x8026E9BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8026E9C0: addu        $a3, $a3, $t7
    ctx->r7 = ADD32(ctx->r7, ctx->r15);
    // 0x8026E9C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026E9C8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026E9CC: lw          $a3, -0xD68($a3)
    ctx->r7 = MEM_W(ctx->r7, -0XD68);
    // 0x8026E9D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026E9D4: addiu       $a1, $zero, 0x55F
    ctx->r5 = ADD32(0, 0X55F);
    // 0x8026E9D8: jal         0x8004CD24
    // 0x8026E9DC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8026E9DC: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_0:
    // 0x8026E9E0: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x8026E9E4: lb          $t8, -0xB8F($t8)
    ctx->r24 = MEM_B(ctx->r24, -0XB8F);
    // 0x8026E9E8: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026E9EC: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x8026E9F0: lbu         $a2, -0xD54($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0XD54);
    // 0x8026E9F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026E9F8: jal         0x8002135C
    // 0x8026E9FC: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8026E9FC: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_1:
    // 0x8026EA00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026EA04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026EA08: jr          $ra
    // 0x8026EA0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8026EA0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026EA10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026EA10: lui         $t6, 0x8027
    ctx->r14 = S32(0X8027 << 16);
    // 0x8026EA14: lb          $t6, -0xB8F($t6)
    ctx->r14 = MEM_B(ctx->r14, -0XB8F);
    // 0x8026EA18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026EA1C: lui         $a3, 0x8027
    ctx->r7 = S32(0X8027 << 16);
    // 0x8026EA20: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8026EA24: addu        $a3, $a3, $t7
    ctx->r7 = ADD32(ctx->r7, ctx->r15);
    // 0x8026EA28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026EA2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026EA30: lw          $a3, -0xD4C($a3)
    ctx->r7 = MEM_W(ctx->r7, -0XD4C);
    // 0x8026EA34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8026EA38: addiu       $a1, $zero, 0x564
    ctx->r5 = ADD32(0, 0X564);
    // 0x8026EA3C: jal         0x8004CD24
    // 0x8026EA40: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_8004CD24(rdram, ctx);
        goto after_0;
    // 0x8026EA40: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_0:
    // 0x8026EA44: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x8026EA48: lb          $t8, -0xB8F($t8)
    ctx->r24 = MEM_B(ctx->r24, -0XB8F);
    // 0x8026EA4C: lui         $a2, 0x8027
    ctx->r6 = S32(0X8027 << 16);
    // 0x8026EA50: addu        $a2, $a2, $t8
    ctx->r6 = ADD32(ctx->r6, ctx->r24);
    // 0x8026EA54: lbu         $a2, -0xD54($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0XD54);
    // 0x8026EA58: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8026EA5C: jal         0x8002135C
    // 0x8026EA60: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    func_8002135C(rdram, ctx);
        goto after_1;
    // 0x8026EA60: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    after_1:
    // 0x8026EA64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026EA68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026EA6C: jr          $ra
    // 0x8026EA70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8026EA70: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026A0F0_func_8026EA74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026EA74: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8026EA78: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8026EA7C: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8026EA80: sb          $zero, -0x3066($at)
    MEM_B(-0X3066, ctx->r1) = 0;
    // 0x8026EA84: jr          $ra
    // 0x8026EA88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8026EA88: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8026EA8C: nop

;}
RECOMP_FUNC void ovl_8026F480_func_8026F480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F480: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8026F484: lbu         $t6, -0x329F($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X329F);
    // 0x8026F488: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026F48C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026F490: beq         $t6, $zero, L_8026F4A8
    if (ctx->r14 == 0) {
        // 0x8026F494: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8026F4A8;
    }
    // 0x8026F494: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026F498: jal         0x8002BB50
    // 0x8026F49C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x8026F49C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_0:
    // 0x8026F4A0: b           L_8026F4B4
    // 0x8026F4A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026F4B4;
    // 0x8026F4A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026F4A8:
    // 0x8026F4A8: jal         0x8002BB50
    // 0x8026F4AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002BB50(rdram, ctx);
        goto after_1;
    // 0x8026F4AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x8026F4B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026F4B4:
    // 0x8026F4B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026F4B8: jr          $ra
    // 0x8026F4BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8026F4BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026F480_func_8026F49C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F49C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8026F4A0: b           L_8026F4B4
    // 0x8026F4A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026F4B4;
    // 0x8026F4A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026F4A8: jal         0x8002BB50
    // 0x8026F4AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x8026F4AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x8026F4B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026F4B4:
    // 0x8026F4B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026F4B8: jr          $ra
    // 0x8026F4BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8026F4BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026F480_func_8026F4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F4C0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8026F4C4: lb          $t6, -0x3110($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X3110);
    // 0x8026F4C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026F4CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026F4D0: beq         $t6, $zero, L_8026F52C
    if (ctx->r14 == 0) {
        // 0x8026F4D4: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_8026F52C;
    }
    // 0x8026F4D4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8026F4D8: lui         $v0, 0x8010
    ctx->r2 = S32(0X8010 << 16);
    // 0x8026F4DC: lh          $v0, 0x59BC($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X59BC);
    // 0x8026F4E0: nop

    // 0x8026F4E4: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8026F4E8: beq         $at, $zero, L_8026F504
    if (ctx->r1 == 0) {
        // 0x8026F4EC: slti        $at, $v0, 0x237
        ctx->r1 = SIGNED(ctx->r2) < 0X237 ? 1 : 0;
            goto L_8026F504;
    }
    // 0x8026F4EC: slti        $at, $v0, 0x237
    ctx->r1 = SIGNED(ctx->r2) < 0X237 ? 1 : 0;
    // 0x8026F4F0: jal         0x8002BB50
    // 0x8026F4F4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x8026F4F4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x8026F4F8: b           L_8026F538
    // 0x8026F4FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026F538;
    // 0x8026F4FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026F500: slti        $at, $v0, 0x237
    ctx->r1 = SIGNED(ctx->r2) < 0X237 ? 1 : 0;
L_8026F504:
    // 0x8026F504: bne         $at, $zero, L_8026F51C
    if (ctx->r1 != 0) {
        // 0x8026F508: nop
    
            goto L_8026F51C;
    }
    // 0x8026F508: nop

    // 0x8026F50C: jal         0x8002BB50
    // 0x8026F510: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8002BB50(rdram, ctx);
        goto after_1;
    // 0x8026F510: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
    // 0x8026F514: b           L_8026F538
    // 0x8026F518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026F538;
    // 0x8026F518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026F51C:
    // 0x8026F51C: jal         0x8002BB50
    // 0x8026F520: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8002BB50(rdram, ctx);
        goto after_2;
    // 0x8026F520: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x8026F524: b           L_8026F538
    // 0x8026F528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026F538;
    // 0x8026F528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026F52C:
    // 0x8026F52C: jal         0x8002BB50
    // 0x8026F530: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002BB50(rdram, ctx);
        goto after_3;
    // 0x8026F530: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x8026F534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026F538:
    // 0x8026F538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026F53C: jr          $ra
    // 0x8026F540: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8026F540: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026F480_func_8026F510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F510: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8026F514: b           L_8026F538
    // 0x8026F518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026F538;
    // 0x8026F518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026F51C: jal         0x8002BB50
    // 0x8026F520: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8002BB50(rdram, ctx);
        goto after_0;
    // 0x8026F520: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x8026F524: b           L_8026F538
    // 0x8026F528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026F538;
    // 0x8026F528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026F52C: jal         0x8002BB50
    // 0x8026F530: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8002BB50(rdram, ctx);
        goto after_1;
    // 0x8026F530: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8026F534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026F538:
    // 0x8026F538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026F53C: jr          $ra
    // 0x8026F540: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8026F540: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026F480_func_8026F544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F544: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8026F548: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026F54C: lhu         $t6, 0x1E($a1)
    ctx->r14 = MEM_HU(ctx->r5, 0X1E);
    // 0x8026F550: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8026F554: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8026F558: lb          $v0, -0x310F($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X310F);
    // 0x8026F55C: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8026F560: andi        $t7, $v0, 0xFFFF
    ctx->r15 = ctx->r2 & 0XFFFF;
    // 0x8026F564: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8026F568: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8026F56C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8026F570: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8026F574: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8026F578: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8026F57C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8026F580: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x8026F584: lbu         $v1, 0x8C4($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X8C4);
    // 0x8026F588: lui         $t0, 0x800B
    ctx->r8 = S32(0X800B << 16);
    // 0x8026F58C: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x8026F590: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8026F594: lhu         $t0, -0x6B68($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X6B68);
    // 0x8026F598: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8026F59C: sh          $t0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r8;
    // 0x8026F5A0: sll         $a0, $t7, 16
    ctx->r4 = S32(ctx->r15 << 16);
    // 0x8026F5A4: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8026F5A8: lh          $a1, -0x6B8($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X6B8);
    // 0x8026F5AC: sra         $t1, $a0, 16
    ctx->r9 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8026F5B0: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x8026F5B4: jal         0x8027EE74
    // 0x8026F5B8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    LOOKUP_FUNC(0x8027EE74)(rdram, ctx);
        goto after_0;
    // 0x8026F5B8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8026F5BC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8026F5C0: beq         $v0, $zero, L_8026F5E4
    if (ctx->r2 == 0) {
        // 0x8026F5C4: addiu       $t7, $zero, 0x60
        ctx->r15 = ADD32(0, 0X60);
            goto L_8026F5E4;
    }
    // 0x8026F5C4: addiu       $t7, $zero, 0x60
    ctx->r15 = ADD32(0, 0X60);
    // 0x8026F5C8: lbu         $t2, 0x8($a2)
    ctx->r10 = MEM_BU(ctx->r6, 0X8);
    // 0x8026F5CC: sb          $t7, 0x11($a2)
    MEM_B(0X11, ctx->r6) = ctx->r15;
    // 0x8026F5D0: andi        $t3, $t2, 0xFF01
    ctx->r11 = ctx->r10 & 0XFF01;
    // 0x8026F5D4: ori         $t5, $t3, 0xC
    ctx->r13 = ctx->r11 | 0XC;
    // 0x8026F5D8: sb          $t5, 0x8($a2)
    MEM_B(0X8, ctx->r6) = ctx->r13;
    // 0x8026F5DC: andi        $t6, $t5, 0xFE
    ctx->r14 = ctx->r13 & 0XFE;
    // 0x8026F5E0: sb          $t6, 0x8($a2)
    MEM_B(0X8, ctx->r6) = ctx->r14;
L_8026F5E4:
    // 0x8026F5E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8026F5E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8026F5EC: jr          $ra
    // 0x8026F5F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8026F5F0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026F480_func_8026F5F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F5F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026F5F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8026F5FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8026F600: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8026F604: lhu         $v0, 0x1E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X1E);
    // 0x8026F608: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8026F60C: addu        $t7, $t7, $v0
    ctx->r15 = ADD32(ctx->r15, ctx->r2);
    // 0x8026F610: lb          $t7, -0x310F($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X310F);
    // 0x8026F614: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x8026F618: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8026F61C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8026F620: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8026F624: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8026F628: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8026F62C: lh          $t1, 0x59BC($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X59BC);
    // 0x8026F630: lh          $t0, 0x18($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X18);
    // 0x8026F634: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8026F638: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8026F63C: lui         $v1, 0x8011
    ctx->r3 = S32(0X8011 << 16);
    // 0x8026F640: addu        $v1, $v1, $t8
    ctx->r3 = ADD32(ctx->r3, ctx->r24);
    // 0x8026F644: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x8026F648: lbu         $v1, 0x8C4($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X8C4);
    // 0x8026F64C: sh          $t2, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r10;
    // 0x8026F650: slti        $at, $t2, -0x2F
    ctx->r1 = SIGNED(ctx->r10) < -0X2F ? 1 : 0;
    // 0x8026F654: or          $t6, $a1, $zero
    ctx->r14 = ctx->r5 | 0;
    // 0x8026F658: or          $t9, $a0, $zero
    ctx->r25 = ctx->r4 | 0;
    // 0x8026F65C: bne         $at, $zero, L_8026F690
    if (ctx->r1 != 0) {
        // 0x8026F660: sw          $t2, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r10;
            goto L_8026F690;
    }
    // 0x8026F660: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8026F664: slti        $at, $t2, 0x140
    ctx->r1 = SIGNED(ctx->r10) < 0X140 ? 1 : 0;
    // 0x8026F668: beq         $at, $zero, L_8026F690
    if (ctx->r1 == 0) {
        // 0x8026F66C: sll         $a0, $v1, 16
        ctx->r4 = S32(ctx->r3 << 16);
            goto L_8026F690;
    }
    // 0x8026F66C: sll         $a0, $v1, 16
    ctx->r4 = S32(ctx->r3 << 16);
    // 0x8026F670: sra         $t3, $a0, 16
    ctx->r11 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8026F674: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
    // 0x8026F678: lh          $a2, 0x1C($t9)
    ctx->r6 = MEM_H(ctx->r25, 0X1C);
    // 0x8026F67C: lh          $a3, 0x1E($t6)
    ctx->r7 = MEM_H(ctx->r14, 0X1E);
    // 0x8026F680: jal         0x80039F1C
    // 0x8026F684: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    func_80039F1C(rdram, ctx);
        goto after_0;
    // 0x8026F684: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    after_0:
    // 0x8026F688: b           L_8026F6A8
    // 0x8026F68C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8026F6A8;
    // 0x8026F68C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026F690:
    // 0x8026F690: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8026F694: nop

    // 0x8026F698: lh          $a0, 0x1E($t4)
    ctx->r4 = MEM_H(ctx->r12, 0X1E);
    // 0x8026F69C: jal         0x8003A094
    // 0x8026F6A0: nop

    func_8003A094(rdram, ctx);
        goto after_1;
    // 0x8026F6A0: nop

    after_1:
    // 0x8026F6A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8026F6A8:
    // 0x8026F6A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026F6AC: jr          $ra
    // 0x8026F6B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8026F6B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026F480_func_8026F6B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F6B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8026F6B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026F6BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026F6C0: lhu         $v0, 0x1E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X1E);
    // 0x8026F6C4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x8026F6C8: addiu       $v1, $v0, 0x10
    ctx->r3 = ADD32(ctx->r2, 0X10);
    // 0x8026F6CC: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x8026F6D0: addu        $a2, $a2, $t6
    ctx->r6 = ADD32(ctx->r6, ctx->r14);
    // 0x8026F6D4: lb          $a2, -0x30FF($a2)
    ctx->r6 = MEM_B(ctx->r6, -0X30FF);
    // 0x8026F6D8: bne         $v0, $zero, L_8026F6F4
    if (ctx->r2 != 0) {
        // 0x8026F6DC: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_8026F6F4;
    }
    // 0x8026F6DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8026F6E0: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x8026F6E4: addiu       $v0, $v0, 0x3CD4
    ctx->r2 = ADD32(ctx->r2, 0X3CD4);
    // 0x8026F6E8: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x8026F6EC: b           L_8026F708
    // 0x8026F6F0: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
        goto L_8026F708;
    // 0x8026F6F0: sh          $t7, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r15;
L_8026F6F4:
    // 0x8026F6F4: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x8026F6F8: addiu       $v0, $v0, 0x3CD4
    ctx->r2 = ADD32(ctx->r2, 0X3CD4);
    // 0x8026F6FC: lh          $t8, 0x0($v0)
    ctx->r24 = MEM_H(ctx->r2, 0X0);
    // 0x8026F700: nop

    // 0x8026F704: sh          $t8, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r24;
L_8026F708:
    // 0x8026F708: bltz        $a2, L_8026F7AC
    if (SIGNED(ctx->r6) < 0) {
        // 0x8026F70C: sb          $zero, 0x4($s0)
        MEM_B(0X4, ctx->r16) = 0;
            goto L_8026F7AC;
    }
    // 0x8026F70C: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
    // 0x8026F710: sll         $t9, $a2, 2
    ctx->r25 = S32(ctx->r6 << 2);
    // 0x8026F714: addu        $t9, $t9, $a2
    ctx->r25 = ADD32(ctx->r25, ctx->r6);
    // 0x8026F718: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8026F71C: addu        $t9, $t9, $a2
    ctx->r25 = ADD32(ctx->r25, ctx->r6);
    // 0x8026F720: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8026F724: subu        $t9, $t9, $a2
    ctx->r25 = SUB32(ctx->r25, ctx->r6);
    // 0x8026F728: lui         $t1, 0x8010
    ctx->r9 = S32(0X8010 << 16);
    // 0x8026F72C: lh          $t1, 0x59BC($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X59BC);
    // 0x8026F730: lh          $t0, 0x18($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X18);
    // 0x8026F734: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8026F738: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x8026F73C: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x8026F740: lb          $a0, 0x8C4($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X8C4);
    // 0x8026F744: subu        $t2, $t0, $t1
    ctx->r10 = SUB32(ctx->r8, ctx->r9);
    // 0x8026F748: sh          $t2, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r10;
    // 0x8026F74C: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x8026F750: nop

    // 0x8026F754: slti        $at, $a1, -0x2F
    ctx->r1 = SIGNED(ctx->r5) < -0X2F ? 1 : 0;
    // 0x8026F758: bne         $at, $zero, L_8026F784
    if (ctx->r1 != 0) {
        // 0x8026F75C: slti        $at, $a1, 0x140
        ctx->r1 = SIGNED(ctx->r5) < 0X140 ? 1 : 0;
            goto L_8026F784;
    }
    // 0x8026F75C: slti        $at, $a1, 0x140
    ctx->r1 = SIGNED(ctx->r5) < 0X140 ? 1 : 0;
    // 0x8026F760: beq         $at, $zero, L_8026F784
    if (ctx->r1 == 0) {
        // 0x8026F764: nop
    
            goto L_8026F784;
    }
    // 0x8026F764: nop

    // 0x8026F768: lh          $a2, 0x1C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X1C);
    // 0x8026F76C: lh          $a3, 0x0($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X0);
    // 0x8026F770: jal         0x80039FF4
    // 0x8026F774: nop

    func_80039FF4(rdram, ctx);
        goto after_0;
    // 0x8026F774: nop

    after_0:
    // 0x8026F778: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x8026F77C: b           L_8026F798
    // 0x8026F780: addiu       $v0, $v0, 0x3CD4
    ctx->r2 = ADD32(ctx->r2, 0X3CD4);
        goto L_8026F798;
    // 0x8026F780: addiu       $v0, $v0, 0x3CD4
    ctx->r2 = ADD32(ctx->r2, 0X3CD4);
L_8026F784:
    // 0x8026F784: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x8026F788: jal         0x8003A094
    // 0x8026F78C: nop

    func_8003A094(rdram, ctx);
        goto after_1;
    // 0x8026F78C: nop

    after_1:
    // 0x8026F790: lui         $v0, 0x8027
    ctx->r2 = S32(0X8027 << 16);
    // 0x8026F794: addiu       $v0, $v0, 0x3CD4
    ctx->r2 = ADD32(ctx->r2, 0X3CD4);
L_8026F798:
    // 0x8026F798: lh          $t3, 0x0($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X0);
    // 0x8026F79C: nop

    // 0x8026F7A0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8026F7A4: b           L_8026F7C8
    // 0x8026F7A8: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
        goto L_8026F7C8;
    // 0x8026F7A8: sh          $t4, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r12;
L_8026F7AC:
    // 0x8026F7AC: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x8026F7B0: nop

    // 0x8026F7B4: slti        $at, $a0, 0x2
    ctx->r1 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8026F7B8: beq         $at, $zero, L_8026F7CC
    if (ctx->r1 == 0) {
        // 0x8026F7BC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8026F7CC;
    }
    // 0x8026F7BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026F7C0: jal         0x8003A094
    // 0x8026F7C4: nop

    func_8003A094(rdram, ctx);
        goto after_2;
    // 0x8026F7C4: nop

    after_2:
L_8026F7C8:
    // 0x8026F7C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8026F7CC:
    // 0x8026F7CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026F7D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026F7D4: jr          $ra
    // 0x8026F7D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8026F7D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026F480_func_8026F7C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F7C4: nop

    // 0x8026F7C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026F7CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026F7D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8026F7D4: jr          $ra
    // 0x8026F7D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8026F7D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026F480_func_8026F7DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F7DC: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8026F7E0: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8026F7E4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8026F7E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8026F7EC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8026F7F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026F7F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026F7F8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8026F7FC: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8026F800: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026F804: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026F808: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026F80C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8026F810: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8026F814: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8026F818: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8026F81C: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8026F820: lb          $a1, 0xC($v0)
    ctx->r5 = MEM_B(ctx->r2, 0XC);
    // 0x8026F824: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8026F828: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8026F82C: addiu       $v0, $v0, -0x3110
    ctx->r2 = ADD32(ctx->r2, -0X3110);
    // 0x8026F830: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8026F834: addu        $t9, $v0, $v1
    ctx->r25 = ADD32(ctx->r2, ctx->r3);
L_8026F838:
    // 0x8026F838: lb          $t0, 0x1($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X1);
    // 0x8026F83C: nop

    // 0x8026F840: bne         $t0, $a1, L_8026F884
    if (ctx->r8 != ctx->r5) {
        // 0x8026F844: lui         $t3, 0x8027
        ctx->r11 = S32(0X8027 << 16);
            goto L_8026F884;
    }
    // 0x8026F844: lui         $t3, 0x8027
    ctx->r11 = S32(0X8027 << 16);
    // 0x8026F848: addiu       $t3, $t3, 0x3FC8
    ctx->r11 = ADD32(ctx->r11, 0X3FC8);
    // 0x8026F84C: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x8026F850: addu        $a0, $t2, $t3
    ctx->r4 = ADD32(ctx->r10, ctx->r11);
    // 0x8026F854: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8026F858: lw          $t4, 0x38($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X38);
    // 0x8026F85C: nop

    // 0x8026F860: sh          $v0, 0x14($t4)
    MEM_H(0X14, ctx->r12) = ctx->r2;
    // 0x8026F864: sh          $v0, 0x18($a2)
    MEM_H(0X18, ctx->r6) = ctx->r2;
    // 0x8026F868: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x8026F86C: lw          $t5, 0x38($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X38);
    // 0x8026F870: nop

    // 0x8026F874: sh          $v0, 0x18($t5)
    MEM_H(0X18, ctx->r13) = ctx->r2;
    // 0x8026F878: sh          $v0, 0x1C($a2)
    MEM_H(0X1C, ctx->r6) = ctx->r2;
    // 0x8026F87C: jr          $ra
    // 0x8026F880: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8026F880: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8026F884:
    // 0x8026F884: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8026F888: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x8026F88C: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x8026F890: slti        $at, $v1, 0x10
    ctx->r1 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8026F894: bne         $at, $zero, L_8026F838
    if (ctx->r1 != 0) {
        // 0x8026F898: addu        $t9, $v0, $v1
        ctx->r25 = ADD32(ctx->r2, ctx->r3);
            goto L_8026F838;
    }
    // 0x8026F898: addu        $t9, $v0, $v1
    ctx->r25 = ADD32(ctx->r2, ctx->r3);
    // 0x8026F89C: jr          $ra
    // 0x8026F8A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8026F8A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026F480_func_8026F8A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F8A4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8026F8A8: lb          $t6, -0x32A1($t6)
    ctx->r14 = MEM_B(ctx->r14, -0X32A1);
    // 0x8026F8AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8026F8B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8026F8B4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8026F8B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026F8BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026F8C0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8026F8C4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8026F8C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026F8CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026F8D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026F8D4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8026F8D8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8026F8DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026F8E0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8026F8E4: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8026F8E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8026F8EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026F8F0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8026F8F4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8026F8F8: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8026F8FC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026F900: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8026F904: jal         0x80021214
    // 0x8026F908: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_0;
    // 0x8026F908: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8026F90C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026F910: jal         0x8004BDA0
    // 0x8026F914: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8004BDA0(rdram, ctx);
        goto after_1;
    // 0x8026F914: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8026F918: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x8026F91C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8026F920: addiu       $t1, $t1, -0x6C9C
    ctx->r9 = ADD32(ctx->r9, -0X6C9C);
    // 0x8026F924: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x8026F928: lw          $a0, 0x4($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X4);
    // 0x8026F92C: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x8026F930: lw          $a2, 0x4($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X4);
    // 0x8026F934: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8026F938: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8026F93C: lw          $a3, 0x8($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X8);
    // 0x8026F940: jal         0x8004B078
    // 0x8026F944: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_2;
    // 0x8026F944: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_2:
    // 0x8026F948: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8026F94C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026F950: lb          $v1, 0xC($t4)
    ctx->r3 = MEM_B(ctx->r12, 0XC);
    // 0x8026F954: addiu       $a0, $a0, -0x3110
    ctx->r4 = ADD32(ctx->r4, -0X3110);
    // 0x8026F958: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8026F95C: addu        $t5, $a0, $v0
    ctx->r13 = ADD32(ctx->r4, ctx->r2);
L_8026F960:
    // 0x8026F960: lb          $t6, 0x11($t5)
    ctx->r14 = MEM_B(ctx->r13, 0X11);
    // 0x8026F964: nop

    // 0x8026F968: beq         $t6, $v1, L_8026F984
    if (ctx->r14 == ctx->r3) {
        // 0x8026F96C: nop
    
            goto L_8026F984;
    }
    // 0x8026F96C: nop

    // 0x8026F970: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8026F974: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x8026F978: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8026F97C: bgez        $v0, L_8026F960
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8026F980: addu        $t5, $a0, $v0
        ctx->r13 = ADD32(ctx->r4, ctx->r2);
            goto L_8026F960;
    }
    // 0x8026F980: addu        $t5, $a0, $v0
    ctx->r13 = ADD32(ctx->r4, ctx->r2);
L_8026F984:
    // 0x8026F984: bgez        $v0, L_8026F994
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8026F988: slti        $at, $v0, 0x10
        ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
            goto L_8026F994;
    }
    // 0x8026F988: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8026F98C: b           L_8026F9F4
    // 0x8026F990: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_8026F9F4;
    // 0x8026F990: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8026F994:
    // 0x8026F994: beq         $at, $zero, L_8026F9C0
    if (ctx->r1 == 0) {
        // 0x8026F998: sll         $t0, $v0, 2
        ctx->r8 = S32(ctx->r2 << 2);
            goto L_8026F9C0;
    }
    // 0x8026F998: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x8026F99C: lui         $t2, 0x8027
    ctx->r10 = S32(0X8027 << 16);
    // 0x8026F9A0: addiu       $t2, $t2, 0x3D10
    ctx->r10 = ADD32(ctx->r10, 0X3D10);
    // 0x8026F9A4: addu        $v1, $t0, $t2
    ctx->r3 = ADD32(ctx->r8, ctx->r10);
    // 0x8026F9A8: lhu         $t1, 0x0($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X0);
    // 0x8026F9AC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x8026F9B0: sh          $t1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r9;
    // 0x8026F9B4: lhu         $t3, 0x2($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X2);
    // 0x8026F9B8: b           L_8026F9F4
    // 0x8026F9BC: sh          $t3, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r11;
        goto L_8026F9F4;
    // 0x8026F9BC: sh          $t3, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r11;
L_8026F9C0:
    // 0x8026F9C0: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x8026F9C4: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x8026F9C8: sra         $t6, $t4, 16
    ctx->r14 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8026F9CC: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x8026F9D0: addiu       $t8, $t8, 0x3D50
    ctx->r24 = ADD32(ctx->r24, 0X3D50);
    // 0x8026F9D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8026F9D8: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8026F9DC: lhu         $t9, 0x0($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X0);
    // 0x8026F9E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8026F9E4: sh          $t9, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r25;
    // 0x8026F9E8: lhu         $t0, 0x2($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X2);
    // 0x8026F9EC: nop

    // 0x8026F9F0: sh          $t0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r8;
L_8026F9F4:
    // 0x8026F9F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026F9F8: jal         0x8002BB50
    // 0x8026F9FC: andi        $a1, $a2, 0xFFFF
    ctx->r5 = ctx->r6 & 0XFFFF;
    func_8002BB50(rdram, ctx);
        goto after_3;
    // 0x8026F9FC: andi        $a1, $a2, 0xFFFF
    ctx->r5 = ctx->r6 & 0XFFFF;
    after_3:
    // 0x8026FA00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026FA04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026FA08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8026FA0C: jr          $ra
    // 0x8026FA10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8026FA10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void ovl_8026F480_func_8026F8C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8026F8C4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8026F8C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026F8CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8026F8D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8026F8D4: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8026F8D8: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8026F8DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8026F8E0: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x8026F8E4: addiu       $t8, $t8, -0x2F80
    ctx->r24 = ADD32(ctx->r24, -0X2F80);
    // 0x8026F8E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8026F8EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8026F8F0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8026F8F4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8026F8F8: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8026F8FC: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8026F900: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8026F904: jal         0x80021214
    // 0x8026F908: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80021214(rdram, ctx);
        goto after_0;
    // 0x8026F908: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8026F90C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026F910: jal         0x8004BDA0
    // 0x8026F914: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8004BDA0(rdram, ctx);
        goto after_1;
    // 0x8026F914: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8026F918: lui         $t1, 0x800B
    ctx->r9 = S32(0X800B << 16);
    // 0x8026F91C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8026F920: addiu       $t1, $t1, -0x6C9C
    ctx->r9 = ADD32(ctx->r9, -0X6C9C);
    // 0x8026F924: lw          $at, 0x0($t1)
    ctx->r1 = MEM_W(ctx->r9, 0X0);
    // 0x8026F928: lw          $a0, 0x4($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X4);
    // 0x8026F92C: sw          $at, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r1;
    // 0x8026F930: lw          $a2, 0x4($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X4);
    // 0x8026F934: lw          $a1, 0x4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4);
    // 0x8026F938: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8026F93C: lw          $a3, 0x8($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X8);
    // 0x8026F940: jal         0x8004B078
    // 0x8026F944: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    func_8004B078(rdram, ctx);
        goto after_2;
    // 0x8026F944: sw          $a3, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r7;
    after_2:
    // 0x8026F948: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8026F94C: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x8026F950: lb          $v1, 0xC($t4)
    ctx->r3 = MEM_B(ctx->r12, 0XC);
    // 0x8026F954: addiu       $a0, $a0, -0x3110
    ctx->r4 = ADD32(ctx->r4, -0X3110);
    // 0x8026F958: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8026F95C: addu        $t5, $a0, $v0
    ctx->r13 = ADD32(ctx->r4, ctx->r2);
L_8026F960:
    // 0x8026F960: lb          $t6, 0x11($t5)
    ctx->r14 = MEM_B(ctx->r13, 0X11);
    // 0x8026F964: nop

    // 0x8026F968: beq         $t6, $v1, L_8026F984
    if (ctx->r14 == ctx->r3) {
        // 0x8026F96C: nop
    
            goto L_8026F984;
    }
    // 0x8026F96C: nop

    // 0x8026F970: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8026F974: sll         $t7, $v0, 16
    ctx->r15 = S32(ctx->r2 << 16);
    // 0x8026F978: sra         $v0, $t7, 16
    ctx->r2 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8026F97C: bgez        $v0, L_8026F960
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8026F980: addu        $t5, $a0, $v0
        ctx->r13 = ADD32(ctx->r4, ctx->r2);
            goto L_8026F960;
    }
    // 0x8026F980: addu        $t5, $a0, $v0
    ctx->r13 = ADD32(ctx->r4, ctx->r2);
L_8026F984:
    // 0x8026F984: bgez        $v0, L_8026F994
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8026F988: slti        $at, $v0, 0x10
        ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
            goto L_8026F994;
    }
    // 0x8026F988: slti        $at, $v0, 0x10
    ctx->r1 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8026F98C: b           L_8026F9F4
    // 0x8026F990: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
        goto L_8026F9F4;
    // 0x8026F990: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
L_8026F994:
    // 0x8026F994: beq         $at, $zero, L_8026F9C0
    if (ctx->r1 == 0) {
        // 0x8026F998: sll         $t0, $v0, 2
        ctx->r8 = S32(ctx->r2 << 2);
            goto L_8026F9C0;
    }
    // 0x8026F998: sll         $t0, $v0, 2
    ctx->r8 = S32(ctx->r2 << 2);
    // 0x8026F99C: lui         $t2, 0x8027
    ctx->r10 = S32(0X8027 << 16);
    // 0x8026F9A0: addiu       $t2, $t2, 0x3D10
    ctx->r10 = ADD32(ctx->r10, 0X3D10);
    // 0x8026F9A4: addu        $v1, $t0, $t2
    ctx->r3 = ADD32(ctx->r8, ctx->r10);
    // 0x8026F9A8: lhu         $t1, 0x0($v1)
    ctx->r9 = MEM_HU(ctx->r3, 0X0);
    // 0x8026F9AC: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x8026F9B0: sh          $t1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r9;
    // 0x8026F9B4: lhu         $t3, 0x2($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X2);
    // 0x8026F9B8: b           L_8026F9F4
    // 0x8026F9BC: sh          $t3, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r11;
        goto L_8026F9F4;
    // 0x8026F9BC: sh          $t3, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r11;
L_8026F9C0:
    // 0x8026F9C0: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x8026F9C4: sll         $t4, $v0, 16
    ctx->r12 = S32(ctx->r2 << 16);
    // 0x8026F9C8: sra         $t6, $t4, 16
    ctx->r14 = S32(SIGNED(ctx->r12) >> 16);
    // 0x8026F9CC: lui         $t8, 0x8027
    ctx->r24 = S32(0X8027 << 16);
    // 0x8026F9D0: addiu       $t8, $t8, 0x3D50
    ctx->r24 = ADD32(ctx->r24, 0X3D50);
    // 0x8026F9D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8026F9D8: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x8026F9DC: lhu         $t9, 0x0($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X0);
    // 0x8026F9E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8026F9E4: sh          $t9, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r25;
    // 0x8026F9E8: lhu         $t0, 0x2($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X2);
    // 0x8026F9EC: nop

    // 0x8026F9F0: sh          $t0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r8;
L_8026F9F4:
    // 0x8026F9F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8026F9F8: jal         0x8002BB50
    // 0x8026F9FC: andi        $a1, $a2, 0xFFFF
    ctx->r5 = ctx->r6 & 0XFFFF;
    func_8002BB50(rdram, ctx);
        goto after_3;
    // 0x8026F9FC: andi        $a1, $a2, 0xFFFF
    ctx->r5 = ctx->r6 & 0XFFFF;
    after_3:
    // 0x8026FA00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8026FA04: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8026FA08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8026FA0C: jr          $ra
    // 0x8026FA10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8026FA10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
